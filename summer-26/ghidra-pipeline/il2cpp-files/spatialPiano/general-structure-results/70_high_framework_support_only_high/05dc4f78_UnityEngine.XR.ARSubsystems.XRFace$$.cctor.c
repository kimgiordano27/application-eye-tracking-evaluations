/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$.cctor
ENTRY_POINT: 05dc4f78
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_ARSubsystems_XRFace___cctor(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long unaff_x19;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000048;
  
  uStack0000000000000008 = 0;
  FUN_05dfdc8c();
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  iVar1 = *(int *)(unaff_x19 + 0x2b0);
  *(undefined8 *)(unaff_x19 + 0x1a0) = param_1;
  uVar5 = 500;
  if (iVar1 != 1) {
    uVar5 = 400;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 05dc4fc4 to 05ec4fcf has its CatchHandler @ 05dc5064 */
  bVar3 = FUN_05dadd80(0);
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                            );
                    /* try { // try from 05dc4ff8 to 05ec500b has its CatchHandler @ 05dc5058 */
  FUN_05df710c(uVar4,uVar5,in_stack_00000048,1,0,iVar1 == 1 & bVar3,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar4;
                    /* try { // try from 05dc501c to 05ec5023 has its CatchHandler @ 05dc5060 */
  FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
  return;
}


