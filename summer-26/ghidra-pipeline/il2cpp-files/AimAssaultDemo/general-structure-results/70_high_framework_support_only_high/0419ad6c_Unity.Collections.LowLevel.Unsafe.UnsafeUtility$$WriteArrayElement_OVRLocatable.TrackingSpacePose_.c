/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 0419ad6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRLocatable_TrackingSpacePose>
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong unaff_x21;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_041a51b4();
  if (((uVar1 & 1) == 0) && ((unaff_x21 & 1) == 0)) {
    switch(in_stack_00000028._4_4_) {
    case 0:
    case 2:
      goto 
      Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
      ;
    case 1:
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar3 = thunk_FUN_037788cc();
      uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d97898);
      FUN_061a843c(uVar3,uVar2,0);
      break;
    case 3:
      FUN_031b4d18(*(undefined8 *)(unaff_x19 + 0x38),2);
      uVar2 = thunk_FUN_0374b7cc();
      thunk_FUN_037a15ac(PTR_DAT_07d97890);
      uVar3 = thunk_FUN_037788cc();
      FUN_07640534(uVar3,uVar2,0);
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d97878);
      uVar2 = thunk_FUN_037784fc();
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d97880);
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d97888);
      uVar2 = FUN_060c1fd4(uVar3,uVar4,uVar2,0);
      thunk_FUN_037a15ac(PTR_DAT_07d864a0);
      uVar3 = thunk_FUN_037788cc();
      FUN_0627a0a0(uVar3,uVar2,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar3);
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>:
  return;
}


