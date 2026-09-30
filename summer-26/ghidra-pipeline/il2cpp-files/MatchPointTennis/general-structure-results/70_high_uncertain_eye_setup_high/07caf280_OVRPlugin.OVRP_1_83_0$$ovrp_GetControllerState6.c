/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetControllerState6
ENTRY_POINT: 07caf280
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetControllerState6(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x21;
  float fVar9;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e538);
    *(undefined1 *)(unaff_x20 + 0xac5) = 1;
  }
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar2 = FUN_09531730(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar2 = FUN_09531730(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x38);
      if (lVar4 == 0) goto LAB_07caf3e4;
      lVar3 = *(long *)(lVar4 + 0x30);
      if (lVar3 != 0) {
        if (*(int *)(lVar4 + 0x28) == 0) {
          lVar4 = *(long *)(lVar3 + 0x18);
          if (lVar4 == 0) goto LAB_07caf3e4;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (0 < (long)((ulong)uVar1 << 0x20)) {
            lVar5 = *(long *)(unaff_x19 + 0x40);
            fVar9 = (float)(*(int *)(unaff_x19 + 0x30) + -1) / 100.0;
            lVar3 = 8;
            do {
              if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x18), lVar6 == 0)) goto LAB_07caf3e4;
              if (((ulong)*(uint *)(lVar6 + 0x18) <= lVar3 - 8U) || ((ulong)uVar1 <= lVar3 - 8U)) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              lVar7 = lVar3 + -7;
              *(float *)(lVar6 + lVar3 * 4) =
                   fVar9 * *(float *)(lVar6 + lVar3 * 4) +
                   (1.0 - fVar9) * *(float *)(lVar4 + lVar3 * 4);
              lVar3 = lVar3 + 1;
            } while (lVar7 < (int)uVar1);
          }
        }
        else {
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_07caf3e4;
          *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + 0x18) = *(undefined8 *)(lVar3 + 0x18);
          thunk_FUN_044bb4b4();
        }
        FUN_07caf3ec();
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    if (*(int *)(unaff_x19 + 0x30) == *(int *)(*(long *)(unaff_x19 + 0x38) + 0x3c)) {
      return;
    }
    FUN_07cae2f4();
    return;
  }
LAB_07caf3e4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


