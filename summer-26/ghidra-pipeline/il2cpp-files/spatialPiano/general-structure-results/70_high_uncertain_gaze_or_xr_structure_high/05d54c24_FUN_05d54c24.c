/*
FUNCTION_NAME: FUN_05d54c24
ENTRY_POINT: 05d54c24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_2;functionality_permission_setup
*/


void FUN_05d54c24(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar8 = Method_OVROverlay_HandlePreRender__;
  puVar7 = Method_OVROverlay_HandleBeginCameraRendering__;
  puVar6 = Method_OVRObjectPool_Return<LogEntry>__;
  puVar5 = Method_OVRObjectPool_Return<Guid>__;
  puVar4 = Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__;
  puVar3 = Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__;
  puVar2 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
  ;
  puVar1 = Method_OVRBody_OnPermissionGranted__;
  if ((DAT_06bc3904 & 1) == 0) {
    FUN_02f08768(Method_OVROverlayCanvas_ToSimpleJson<object>__);
    FUN_02f08768(Method_OVROverlayCanvas_TMPChanged_OnTextChanged__);
                    /* try { // try from 05d54ca8 to 05e54ccf has its CatchHandler @ 05d54fac */
    FUN_02f08768(Method_OVROverlay_HandleBeginCameraRendering__);
    FUN_02f08768(Method_OVRPassthroughColorLut_GetArraySize<byte>__);
    FUN_02f08768(Method_OVRObjectPool_Return<Guid>__);
    FUN_02f08768(
                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
                );
                    /* try { // try from 05d54ce0 to 05e54ce3 has its CatchHandler @ 05d54fa0 */
    FUN_02f08768(Method_OVRPassthroughColorLut_GetArraySize<Color>__);
    FUN_02f08768(Method_OVRObjectPool_Return<LogEntry>__);
    FUN_02f08768(Method_OVRObjectPool_Return<List<OVRAnchor_DeferredValue>>__);
    FUN_02f08768(Method_OVROverlay_HandlePreRender__);
    FUN_02f08768(Method_OVRObjectPool_Return<List<OVRPlugin_Qpl_Annotation_Builder_Entry>>__);
    FUN_02f08768(Method_OVRBody_OnPermissionGranted__);
    FUN_02f08768(Method_OVRPassthroughColorLut_GetArraySize<Color32>__);
    DAT_06bc3904 = 1;
  }
                    /* try { // try from 05d54d48 to 05e54d6f has its CatchHandler @ 05d54fdc */
  FUN_03379434(param_1,param_1 + 0x48,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03379434(param_1,param_1 + 0x58,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03379434(param_1,param_1 + 0x68,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_033793e0(param_1,param_1 + 0x78,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar3)
  ;
  FUN_033793e0(param_1,param_1 + 0x88,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar3)
  ;
                    /* try { // try from 05d54dac to 05e54dd3 has its CatchHandler @ 05d54fd8 */
  FUN_03379420(param_1,param_1 + 0x98,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar4)
  ;
  FUN_03379160(param_1,param_1 + 0xa8,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar5)
  ;
  FUN_03379230(param_1,param_1 + 0xb8,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar6)
  ;
  FUN_03379208(param_1,param_1 + 200,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar2);
  FUN_033790f8(param_1,param_1 + 0x148,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar7
              );
                    /* try { // try from 05d54e30 to 05e54e37 has its CatchHandler @ 05d54fc0 */
  FUN_033790e4(param_1,param_1 + 0xd8,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)Method_OVROverlayCanvas_TMPChanged_OnTextChanged__);
                    /* try { // try from 05d54e44 to 05e54e63 has its CatchHandler @ 05d54fc4 */
  FUN_033791b4(param_1,param_1 + 0xe8,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<byte>__);
                    /* try { // try from 05d54e74 to 05e54e7b has its CatchHandler @ 05d54fb8 */
  FUN_0337921c(param_1,param_1 + 0xf8,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<Color>__);
                    /* try { // try from 05d54e84 to 05e54e87 has its CatchHandler @ 05d54fd4 */
  FUN_033793f4(param_1,param_1 + 0x108,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar8
              );
  FUN_03379460(param_1,param_1 + 0x118,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)Method_OVRPassthroughColorLut_GetArraySize<Color32>__);
  FUN_033793f4(param_1,param_1 + 0x128,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar8
              );
                    /* try { // try from 05d54ed4 to 05e54efb has its CatchHandler @ 05d54fa8 */
  FUN_033790d0(param_1,param_1 + 0x138,param_2,*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)Method_OVROverlayCanvas_ToSimpleJson<object>__);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


