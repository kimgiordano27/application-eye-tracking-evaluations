/*
FUNCTION_NAME: OVRPlugin$$get_shouldQuit
ENTRY_POINT: 05317b48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_shouldQuit(long param_1,float param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_x9;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar7;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  do {
    lVar3 = *unaff_x23;
    *(float *)(in_x9 + 0x20) = param_2;
    uStack0000000000000008 = *(undefined8 *)(param_1 + 200);
    uStack0000000000000000 = *(undefined8 *)(param_1 + 0xc0);
    uStack0000000000000010 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar1 = FUN_05334430();
    if (iVar1 == 2) {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_05317c88;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
LAB_05317c8c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      unaff_x24 = 1;
      fVar9 = *(float *)(lVar3 + unaff_x21 * 4 + 0x20);
      if (fVar9 <= unaff_s10) {
        unaff_s10 = fVar9;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x20 + 0xd0);
      if (lVar3 == 0) goto LAB_05317c88;
      uStack0000000000000008 = *(undefined8 *)(lVar3 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar3 + 0xc0);
      uStack0000000000000010 = *(undefined8 *)(lVar3 + 0xd0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar1 = FUN_05334430();
      lVar3 = *unaff_x19;
      if (iVar1 == 1) {
        if (lVar3 == 0) goto LAB_05317c88;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_05317c8c;
        fVar9 = *(float *)(lVar3 + unaff_x21 * 4 + 0x20);
        if (unaff_s9 <= fVar9) {
          unaff_s9 = fVar9;
        }
      }
      else if (lVar3 == 0) goto LAB_05317c88;
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_05317c8c;
    uVar4 = unaff_w26 << (ulong)((uint)unaff_x21 & 0x1f);
    if (*(float *)(lVar3 + unaff_x21 * 4 + 0x20) <= 0.0) {
      uVar4 = *(uint *)(unaff_x20 + 0x158) & (uVar4 ^ 0xffffffff);
    }
    else {
      uVar4 = *(uint *)(unaff_x20 + 0x158) | uVar4;
    }
    *(uint *)(unaff_x20 + 0x158) = uVar4;
    while( true ) {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 5) {
        if ((unaff_x24 & 1) == 0) {
          unaff_s10 = unaff_s9;
        }
        return unaff_s10;
      }
      lVar3 = *(long *)(unaff_x20 + 0xd0);
      if (lVar3 == 0) goto LAB_05317c88;
      uStack0000000000000008 = *(undefined8 *)(lVar3 + 200);
      uStack0000000000000000 = *(undefined8 *)(lVar3 + 0xc0);
      uStack0000000000000010 = *(undefined8 *)(lVar3 + 0xd0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar1 = FUN_05334430();
      if (iVar1 != 0) break;
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_05317c88;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_05317c8c;
      *(undefined4 *)(lVar3 + unaff_x21 * 4 + 0x20) = 0;
    }
    plVar7 = *(long **)(unaff_x20 + 0x130);
    if (plVar7 == (long *)0x0) {
LAB_05317c88:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05317af8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*unaff_x25,0);
LAB_05317af8:
    fVar9 = (float)(*(code *)*puVar2)(plVar7,unaff_x21 & 0xffffffff,puVar2[1]);
    param_1 = *(long *)(unaff_x20 + 0xd0);
    if (param_1 == 0) goto LAB_05317c88;
    lVar3 = *unaff_x19;
    fVar8 = (fVar9 - *(float *)(param_1 + 0xd8)) / (unaff_s11 - *(float *)(param_1 + 0xd8));
    fVar9 = unaff_s11;
    if (fVar8 <= unaff_s11) {
      fVar9 = fVar8;
    }
    param_2 = unaff_s8;
    if (0.0 <= fVar8) {
      param_2 = fVar9;
    }
    if (lVar3 == 0) goto LAB_05317c88;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_05317c8c;
    in_x9 = lVar3 + unaff_x21 * 4;
  } while( true );
}


