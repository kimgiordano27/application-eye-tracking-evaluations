/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 04a4a3f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar4;
  int unaff_w20;
  int unaff_w21;
  void *unaff_x23;
  undefined *puVar3;
  
  if (param_1 == 0) {
    FUN_040b1b28();
  }
  if (param_2 == 0) {
    thunk_FUN_040dedf8(&DAT_094ae080);
    uVar1 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(&DAT_0955d688);
    FUN_075ce0d0(uVar1,uVar4,0);
    goto LAB_04a4a510;
  }
  if (unaff_w21 < 0) {
LAB_04a4a468:
    thunk_FUN_040dedf8(&DAT_094ae088);
    uVar1 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(&DAT_0956a2f8);
    puVar3 = &DAT_09544eb8;
  }
  else {
    if (*(int *)(param_2 + 0x18) < unaff_w21) goto LAB_04a4a468;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(param_2 + 0x18) - unaff_w21)) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      memcpy(&stack0x00000008,unaff_x23,0x58);
      FUN_04a69f6c(param_2,&stack0x00000008,unaff_w21,unaff_w20,uVar4);
      return;
    }
    thunk_FUN_040dedf8(&DAT_094ae088);
    uVar1 = thunk_FUN_040b4efc();
    uVar4 = thunk_FUN_040dedf8(&DAT_0955fb40);
    puVar3 = &DAT_0953e2b8;
  }
  uVar2 = thunk_FUN_040dedf8(puVar3);
  FUN_075d19bc(uVar1,uVar4,uVar2,0);
LAB_04a4a510:
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1);
}


