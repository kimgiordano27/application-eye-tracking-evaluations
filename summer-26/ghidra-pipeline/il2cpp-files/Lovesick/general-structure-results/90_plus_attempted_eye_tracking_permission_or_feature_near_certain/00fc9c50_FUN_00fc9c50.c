/*
FUNCTION_NAME: FUN_00fc9c50
ENTRY_POINT: 00fc9c50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_00fc9c50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_03775b01 & 1) == 0) {
    thunk_FUN_00d48444(Method_RhythmGameStarter_ColorfulNotesHandler_<Start>b__3_1__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Input_HandSkeletonOVR_<>c__DisplayClass6_0_<GetBoneRadius>b__0__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_03775b01 = 1;
  }
  puVar2 = 
  Method_Oculus_Interaction_Input_HandSkeletonOVR_<>c__DisplayClass6_0_<GetBoneRadius>b__0__;
  puVar1 = OVREyeGaze_TypeInfo;
  if (*(char *)(param_1 + 0x55) == '\0') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if (lVar4 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar5) {
        return;
      }
      FUN_0132138c(lVar4,iVar5,&local_40,*(undefined8 *)puVar2);
      uVar3 = local_40;
      if (*(long *)(param_1 + 0x78) == 0) break;
      FUN_0132138c(*(long *)(param_1 + 0x78),iVar5,&local_34,*(undefined8 *)puVar1);
      FUN_00f49518(local_34,*(undefined4 *)(param_1 + 0x84),uVar3,0);
      lVar4 = *(long *)(param_1 + 0x70);
      iVar5 = iVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


