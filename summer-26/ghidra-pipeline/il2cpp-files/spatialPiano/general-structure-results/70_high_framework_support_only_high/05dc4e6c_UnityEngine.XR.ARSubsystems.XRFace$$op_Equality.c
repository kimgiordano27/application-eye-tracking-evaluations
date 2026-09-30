/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$op_Equality
ENTRY_POINT: 05dc4e6c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_ARSubsystems_XRFace__op_Equality(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar8;
  undefined8 in_stack_00000048;
  
  uVar5 = thunk_FUN_02f45270(*param_1);
                    /* try { // try from 05dc4e84 to 05ec4e87 has its CatchHandler @ 05dc4edc */
                    /* try { // try from 05dc4e88 to 05ec4e8b has its CatchHandler @ 05dc4ed8 */
                    /* try { // try from 05dc4e8c to 05ec4e8f has its CatchHandler @ 05dc4ed4 */
                    /* try { // try from 05dc4e90 to 05ec4e93 has its CatchHandler @ 05dc4c54 */
                    /* try { // try from 05dc4e94 to 05ec4e97 has its CatchHandler @ 05dc4ec0 */
                    /* try { // try from 05dc4e98 to 05ec4e9b has its CatchHandler @ 05dc4ebc */
                    /* try { // try from 05dc4e9c to 05ec4e9f has its CatchHandler @ 05dc4eb8 */
                    /* try { // try from 05dc4ea0 to 05ec4ea3 has its CatchHandler @ 05dc4ecc */
                    /* try { // try from 05dc4ea4 to 05ec4ea7 has its CatchHandler @ 05dc4ec4 */
                    /* try { // try from 05dc4ea8 to 05ec4eab has its CatchHandler @ 05dc4eac */
                    /* catch() { ... } // from try @ 05dc4ea8 with catch @ 05dc4eac
                       try { // try from 05dc4eac to 05ec4eff has its CatchHandler @ 05dc4c54 */
  FUN_05dfbdcc(uVar5,*(undefined8 *)
                      Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<DeferredLights_SetupLightPassData>__
              );
                    /* catch() { ... } // from try @ 05dc4db4 with catch @ 05dc4eb0 */
  *(undefined8 *)(unaff_x19 + 400) = uVar5;
  puVar3 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_PassData>__
  ;
                    /* catch() { ... } // from try @ 05dc4d28 with catch @ 05dc4eb4 */
                    /* catch() { ... } // from try @ 05dc4e9c with catch @ 05dc4eb8 */
                    /* catch() { ... } // from try @ 05dc4e98 with catch @ 05dc4ebc */
                    /* catch() { ... } // from try @ 05dc4e94 with catch @ 05dc4ec0 */
                    /* catch() { ... } // from try @ 05dc4d7c with catch @ 05dc4ec4
                       catch() { ... } // from try @ 05dc4ea4 with catch @ 05dc4ec4 */
                    /* catch() { ... } // from try @ 05dc4d5c with catch @ 05dc4ec8 */
                    /* catch() { ... } // from try @ 05dc4e50 with catch @ 05dc4ecc
                       catch() { ... } // from try @ 05dc4ea0 with catch @ 05dc4ecc */
  if (*(int *)(*(long *)PTR_DAT_067cbf08 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 05dc4e20 with catch @ 05dc4ed0 */
    thunk_FUN_02f6670c();
  }
                    /* catch() { ... } // from try @ 05dc4e8c with catch @ 05dc4ed4 */
                    /* catch() { ... } // from try @ 05dc4e88 with catch @ 05dc4ed8 */
  uVar5 = FUN_06126ea0(0);
                    /* catch() { ... } // from try @ 05dc4e84 with catch @ 05dc4edc */
                    /* catch() { ... } // from try @ 05dc4e04 with catch @ 05dc4ee0 */
  uVar7 = *(undefined4 *)(unaff_x20 + 0x60);
                    /* catch() { ... } // from try @ 05dc4de4 with catch @ 05dc4ee4 */
  uVar8 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<ScriptableRenderer_EndXRPassData>__
                            );
  FUN_05dfc26c(uVar6,10,1,0xfa,uVar5,uVar7,uVar8,uVar1);
  *(undefined8 *)(unaff_x19 + 0x198) = uVar6;
  uVar5 = FUN_06126ea0(0);
  uVar7 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar8 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_05dfdc8c(uVar6,10,1,0xfa,uVar5,uVar7,uVar8,uVar1);
  puVar3 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  iVar2 = *(int *)(unaff_x19 + 0x2b0);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar6;
  uVar7 = 500;
  if (iVar2 != 1) {
    uVar7 = 400;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  bVar4 = FUN_05dadd80(0);
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_StopNaNsPassData>__
                            );
  FUN_05df710c(uVar5,uVar7,in_stack_00000048,1,0,iVar2 == 1 & bVar4,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar5;
  FUN_063fb9e4(&Method_UnityEngine_Object_FindAnyObjectByType<ARGestureInteractor>__);
  return;
}


