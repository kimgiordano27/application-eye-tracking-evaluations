/*
FUNCTION_NAME: OVRPlugin$$get_HandSkeletonVersion
ENTRY_POINT: 090a43f4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_HandSkeletonVersion
                (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  while( true ) {
    fVar9 = (float)(*param_1)(unaff_x22,unaff_x21 & 0xffffffff,param_4);
    if (*(long *)(unaff_x20 + 0xd0) == 0) break;
    fVar10 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
    lVar7 = *unaff_x19;
    fVar10 = (fVar9 - fVar10) / (unaff_s11 - fVar10);
    fVar9 = unaff_s11;
    if (fVar10 <= unaff_s11) {
      fVar9 = fVar10;
    }
    fVar1 = unaff_s8;
    if (0.0 <= fVar10) {
      fVar1 = fVar9;
    }
    if (lVar7 == 0) break;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x21) {
LAB_090a4584:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar4 = *unaff_x23;
    *(float *)(lVar7 + unaff_x21 * 4 + 0x20) = fVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar2 = FUN_090bdfa0();
    if (iVar2 == 2) {
      lVar7 = *unaff_x19;
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_090a4584;
      unaff_x24 = 1;
      fVar9 = *(float *)(lVar7 + unaff_x21 * 4 + 0x20);
      if (fVar9 <= unaff_s10) {
        unaff_s10 = fVar9;
      }
    }
    else {
      if (*(long *)(unaff_x20 + 0xd0) == 0) break;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      iVar2 = FUN_090bdfa0();
      lVar7 = *unaff_x19;
      if (iVar2 == 1) {
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_090a4584;
        fVar9 = *(float *)(lVar7 + unaff_x21 * 4 + 0x20);
        if (unaff_s9 <= fVar9) {
          unaff_s9 = fVar9;
        }
      }
      else if (lVar7 == 0) break;
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_090a4584;
    uVar5 = unaff_w26 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar7 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar5 = *(uint *)(unaff_x20 + 0x158) & (uVar5 ^ 0xffffffff);
    }
    else {
      uVar5 = *(uint *)(unaff_x20 + 0x158) | uVar5;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar5;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x24 & 1) == 0) {
          unaff_s10 = unaff_s9;
        }
        return unaff_s10;
      }
      if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_090a4580;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      iVar2 = FUN_090bdfa0();
      if (iVar2 != 0) break;
      lVar7 = *unaff_x19;
      if (lVar7 == 0) goto LAB_090a4580;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_090a4584;
      *(undefined4 *)(lVar7 + unaff_x21 * 4 + 0x20) = 0;
    }
    unaff_x22 = *(long **)(unaff_x20 + 0x130);
    if (unaff_x22 == (long *)0x0) break;
    lVar7 = *unaff_x22;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_090a43f0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(unaff_x22,*unaff_x25,0);
LAB_090a43f0:
    param_1 = (code *)*puVar3;
    param_4 = puVar3[1];
  }
LAB_090a4580:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


