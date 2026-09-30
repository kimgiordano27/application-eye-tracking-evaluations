/*
FUNCTION_NAME: Oculus.Movement.Utils.RequestMicrophonePermissions.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 02adc3a4
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Oculus_Movement_Utils_RequestMicrophonePermissions_<Start>d__4__System_IDisposable_Dispose(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  long *unaff_x28;
  undefined4 uVar3;
  float fVar4;
  
  *unaff_x22 = unaff_x21;
  thunk_FUN_01656ef8();
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_051d2ac0();
  if ((uVar1 & 1) != 0) {
    uVar3 = FUN_051dd1d4(0);
    *(undefined4 *)(unaff_x19 + 0x34) = uVar3;
  }
  uVar2 = *unaff_x20;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_051d94d4(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
LAB_02adc448:
    uVar2 = *unaff_x20;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051d2ac0(uVar2,0,0);
    if ((uVar1 & 1) == 0) goto LAB_02adc4d4;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051d2ac0();
    if ((uVar1 & 1) == 0) goto LAB_02adc4d4;
    uVar2 = *unaff_x20;
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051d2ac0(uVar2);
    if (((uVar1 & 1) == 0) ||
       (fVar4 = (float)FUN_051dd1d4(0),
       fVar4 - *(float *)(unaff_x19 + 0x34) < *(float *)(unaff_x19 + 0x30))) goto LAB_02adc4d4;
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar1 = FUN_051d2ac0();
    if ((uVar1 & 1) == 0) goto LAB_02adc448;
  }
  *unaff_x22 = 0;
  *unaff_x20 = unaff_x21;
  thunk_FUN_01656ef8();
LAB_02adc4d4:
  return *unaff_x20;
}


