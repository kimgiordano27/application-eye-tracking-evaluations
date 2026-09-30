/*
FUNCTION_NAME: DigitalOpus.MB.Core.MB3_MeshCombinerSingle$$Dispose
ENTRY_POINT: 012fb078
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void DigitalOpus_MB_Core_MB3_MeshCombinerSingle__Dispose(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w20;
  long unaff_x29;
  
  uVar4 = **(undefined8 **)(param_1 + 0xc0);
  thunk_FUN_00d48444(*(undefined8 *)(param_2 + 0xf98));
  FUN_00acb0a4();
  plVar1 = (long *)FUN_01780344(uVar4,0);
  FUN_00ac2be8();
  (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
  *(undefined4 *)(unaff_x29 + -0x58) = unaff_w20;
  uVar4 = thunk_FUN_00d48444();
  thunk_FUN_00d61fa0(uVar4,unaff_x29 + -0x58);
  thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
  uVar4 = FUN_01600ba0();
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar2 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar3 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
  FUN_016ec624(uVar2,uVar4,uVar3,0);
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary<int,_HandTrackingConfidenceProvider>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar4);
}


