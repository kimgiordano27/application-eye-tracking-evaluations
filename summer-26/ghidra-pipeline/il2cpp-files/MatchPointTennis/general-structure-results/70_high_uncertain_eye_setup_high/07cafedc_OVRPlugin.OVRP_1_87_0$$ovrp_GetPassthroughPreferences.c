/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_GetPassthroughPreferences
ENTRY_POINT: 07cafedc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_87_0__ovrp_GetPassthroughPreferences(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  uint in_w8;
  long unaff_x19;
  uint unaff_w22;
  long *unaff_x23;
  undefined1 unaff_w24;
  long unaff_x25;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  do {
    if (in_w8 <= unaff_w22) {
LAB_07caff34:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    plVar2 = *(long **)(param_1 + unaff_x25 * 8 + 0x20);
    if (plVar2 == (long *)0x0) {
LAB_07caff30:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
    thunk_FUN_044bb4b4();
    *(undefined1 *)(unaff_x19 + 0x48) = unaff_w24;
    FUN_07caf7a0();
    FUN_07cafb24();
    do {
      unaff_w22 = unaff_w22 + 1;
      lVar4 = FUN_094ae27c(0);
      if (lVar4 == 0) goto LAB_07caff30;
      if (*(int *)(lVar4 + 0x18) <= (int)unaff_w22) {
        return;
      }
      lVar4 = FUN_094ae27c(0);
      if (lVar4 == 0) goto LAB_07caff30;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w22) goto LAB_07caff34;
      unaff_x25 = (long)(int)unaff_w22;
      plVar2 = *(long **)(lVar4 + unaff_x25 * 8 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_07caff30;
      uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*unaff_x23);
      }
      uVar1 = FUN_09583e48(unaff_s13 * (float)(int)unaff_w22 + unaff_s11,
                           unaff_s12 * (float)(int)unaff_w22 + unaff_s10,uVar3,0);
    } while ((uVar1 & 1) == 0);
    FUN_07caf9e8();
    param_1 = FUN_094ae27c(0);
    if (param_1 == 0) goto LAB_07caff30;
    in_w8 = *(uint *)(param_1 + 0x18);
  } while( true );
}


