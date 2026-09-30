/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 01f7f1dc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__OverrideExternalCameraStaticPose(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  
  iVar1 = (**(code **)(param_1 + 0x7e8))();
  if (param_2 == iVar1) {
    FUN_01f7fa84();
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar2 = FUN_01f7f6b4(0);
    return ~uVar2 >> 0x1f;
  }
  FUN_0103b050();
  uVar3 = (**(code **)(*unaff_x21 + 0x168))();
  FUN_0103b050();
  uVar4 = (**(code **)(*unaff_x22 + 0x168))();
  uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1230);
  uVar3 = FUN_01e5abc8(uVar5,uVar3,uVar4,0);
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar4 = thunk_FUN_0124bba8();
  FUN_01e7d290(uVar4,uVar3,0);
  uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1228);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar4,uVar3);
}


