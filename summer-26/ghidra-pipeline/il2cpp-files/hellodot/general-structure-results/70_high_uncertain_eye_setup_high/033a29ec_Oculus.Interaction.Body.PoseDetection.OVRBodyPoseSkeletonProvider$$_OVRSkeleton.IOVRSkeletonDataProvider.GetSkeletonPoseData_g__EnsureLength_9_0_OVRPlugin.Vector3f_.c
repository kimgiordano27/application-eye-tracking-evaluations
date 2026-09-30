/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0<OVRPlugin.Vector3f>
ENTRY_POINT: 033a29ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>
               (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if (param_1 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcc08);
    if (*(long *)(param_7 + 0x38) == 0) {
      FUN_02ce09d4(param_7);
    }
  }
  puVar1 = PTR_DAT_065dcc08;
  lVar2 = *(long *)PTR_DAT_065dcc08;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = FUN_04efd54c(**(long **)(lVar2 + 0xb8),0);
    if ((uVar3 & 1) != 0) {
      uStack000000000000000c = param_4;
      uVar4 = thunk_FUN_02cea4e8(**(undefined8 **)(param_7 + 0x38),&stack0x0000000c);
      in_stack_00000008 = param_5;
      uVar5 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(param_7 + 0x38) + 8),&stack0x00000008);
      uStack0000000000000004 = param_6;
      uVar6 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(param_7 + 0x38) + 0x10),&stack0x00000004)
      ;
      uVar4 = FUN_04db9af8(param_3,uVar4,uVar5,uVar6,0);
      FUN_0541853c(param_2,uVar4,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


