/*
FUNCTION_NAME: OVRPlugin$$GetHandState
ENTRY_POINT: 090a44a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetHandState(void)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar9;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  while (*(long *)(unaff_x20 + 0xd0) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar2 = FUN_090bdfa0();
    lVar6 = *unaff_x19;
    if (iVar2 == 1) {
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) {
LAB_090a4584:
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      fVar10 = *(float *)(lVar6 + unaff_x21 * 4 + 0x20);
      if (unaff_s9 <= fVar10) {
        unaff_s9 = fVar10;
      }
    }
    else if (lVar6 == 0) break;
LAB_090a4514:
    if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_090a4584;
    uVar5 = unaff_w26 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar6 + unaff_x21 * 4 + 0x20) <= 0.0) {
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
      lVar6 = *unaff_x19;
      if (lVar6 == 0) goto LAB_090a4580;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_090a4584;
      *(undefined4 *)(lVar6 + unaff_x21 * 4 + 0x20) = 0;
    }
    plVar9 = *(long **)(unaff_x20 + 0x130);
    if (plVar9 == (long *)0x0) break;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_090a43f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar9,*unaff_x25,0);
LAB_090a43f0:
    fVar10 = (float)(*(code *)*puVar3)(plVar9,unaff_x21 & 0xffffffff,puVar3[1]);
    if (*(long *)(unaff_x20 + 0xd0) == 0) break;
    fVar11 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
    lVar6 = *unaff_x19;
    fVar11 = (fVar10 - fVar11) / (unaff_s11 - fVar11);
    fVar10 = unaff_s11;
    if (fVar11 <= unaff_s11) {
      fVar10 = fVar11;
    }
    fVar1 = unaff_s8;
    if (0.0 <= fVar11) {
      fVar1 = fVar10;
    }
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_090a4584;
    lVar4 = *unaff_x23;
    *(float *)(lVar6 + unaff_x21 * 4 + 0x20) = fVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    iVar2 = FUN_090bdfa0();
    if (iVar2 == 2) {
      lVar6 = *unaff_x19;
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= unaff_x21) goto LAB_090a4584;
      unaff_x24 = 1;
      fVar10 = *(float *)(lVar6 + unaff_x21 * 4 + 0x20);
      if (fVar10 <= unaff_s10) {
        unaff_s10 = fVar10;
      }
      goto LAB_090a4514;
    }
  }
LAB_090a4580:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


