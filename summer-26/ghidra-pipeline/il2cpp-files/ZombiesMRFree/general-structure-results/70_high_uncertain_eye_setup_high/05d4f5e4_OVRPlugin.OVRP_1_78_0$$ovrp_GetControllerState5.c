/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerState5
ENTRY_POINT: 05d4f5e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetControllerState5(float param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float fVar3;
  float unaff_s8;
  float fVar4;
  undefined8 in_stack_00000008;
  
  *(float *)(unaff_x19 + 0x24) = unaff_s8 - param_1;
  if (unaff_s8 - param_1 <= 0.0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05d4f724;
    FUN_068adbc0(*(long *)(unaff_x19 + 0x10),0);
  }
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_05d4f724;
  uVar1 = FUN_068add90(*(long *)(unaff_x19 + 0x10),0);
  fVar4 = *(float *)(unaff_x19 + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_05d4f63c:
    if (0.0 < fVar4) {
      return;
    }
  }
  else {
    fVar3 = (float)FUN_068eec18(0);
    fVar4 = fVar4 - fVar3;
    *(float *)(unaff_x19 + 0x28) = fVar4;
    if (0.0 <= fVar4) goto LAB_05d4f63c;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 05d4f64c to 05e4f653 has its CatchHandler @ 05d4f918 */
    uVar1 = FUN_068add90(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        FUN_068bd958(*(undefined8 *)PTR_DAT_06fb93a0,0);
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06f6dcf8 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      in_stack_00000008 = FUN_05ad0aa0(0);
      uVar2 = FUN_05ad1900(&stack0x00000008,0);
      uVar2 = FUN_059687dc(*(undefined8 *)PTR_DAT_06fb9398,uVar2,0);
      if (*(int *)(*(long *)PTR_DAT_06f6d668 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d668);
      }
      FUN_068bd348(uVar2,0);
      FUN_05d4f508();
    }
    return;
  }
LAB_05d4f724:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


