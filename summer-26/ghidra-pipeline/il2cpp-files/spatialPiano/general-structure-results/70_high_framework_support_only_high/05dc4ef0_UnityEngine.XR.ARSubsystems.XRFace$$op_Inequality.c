/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRFace$$op_Inequality
ENTRY_POINT: 05dc4ef0
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


void UnityEngine_XR_ARSubsystems_XRFace__op_Inequality(long param_1,undefined8 param_2)

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
  undefined8 *unaff_x29;
  undefined8 in_stack_00000048;
  
                    /* try { // try from 05dc4f00 to 05ec4f03 has its CatchHandler @ 05dc4f20 */
  uVar5 = thunk_FUN_02f45270(**(undefined8 **)(param_1 + 0xdd8));
                    /* try { // try from 05dc4f04 to 05ec4f23 has its CatchHandler @ 05dc4c54 */
                    /* catch() { ... } // from try @ 05dc4f00 with catch @ 05dc4f20 */
                    /* try { // try from 05dc4f24 to 05ec4f2b has its CatchHandler @ 05dc4f34 */
                    /* try { // try from 05dc4f2c to 05ec4f37 has its CatchHandler @ 05dc4c54 */
  FUN_05dfc26c(uVar5,10,1,0xfa,param_2);
                    /* catch() { ... } // from try @ 05dc4f24 with catch @ 05dc4f34 */
  *(undefined8 *)(unaff_x19 + 0x198) = uVar5;
                    /* try { // try from 05dc4f38 to 05ec4fc3 has its CatchHandler @ 05dc4f38
                       catch() { ... } // from try @ 05dc4f38 with catch @ 05dc4f38
                       catch() { ... } // from try @ 05dc5024 with catch @ 05dc4f38
                       catch() { ... } // from try @ 05dc5054 with catch @ 05dc4f38
                       catch() { ... } // from try @ 05dc5084 with catch @ 05dc4f38
                       catch() { ... } // from try @ 05dc50a8 with catch @ 05dc4f38 */
  uVar5 = FUN_06126ea0(0);
  uVar7 = *(undefined4 *)(unaff_x20 + 0x60);
  uVar8 = *unaff_x22;
  uVar1 = *(undefined4 *)(unaff_x22 + 1);
  uVar6 = thunk_FUN_02f45270(*unaff_x29);
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


