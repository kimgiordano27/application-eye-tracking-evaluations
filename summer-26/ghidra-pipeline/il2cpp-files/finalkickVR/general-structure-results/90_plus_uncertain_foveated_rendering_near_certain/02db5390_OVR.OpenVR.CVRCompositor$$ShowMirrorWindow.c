/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ShowMirrorWindow
ENTRY_POINT: 02db5390
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_foveation_hits_3;functionality_foveated_rendering
*/


undefined4 OVR_OpenVR_CVRCompositor__ShowMirrorWindow(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x29;
  ulong *in_stack_00000008;
  ulong *puStack0000000000000010;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  
  puStack0000000000000010 = *(ulong **)(param_1 + 0xe20);
                    /* try { // try from 02db5394 to 02eb53cb has its CatchHandler @ 02db523c */
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02db5380 with catch @ 02db53a0
                        */
  if ((OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000010);
    OVRPlugin_get_foveatedRenderingLevel_m8B8134F1AE0303260244A9470036283CCEEBC2DB::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
                    /* try { // try from 02db53cc to 02eb53d3 has its CatchHandler @ 02db53f4 */
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
                    /* try { // try from 02db53d4 to 02eb53d7 has its CatchHandler @ 02db540c */
                    /* try { // try from 02db53d8 to 02eb5403 has its CatchHandler @ 02db523c */
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar2,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    bStack0000000000000026 =
         OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(0);
    bStack0000000000000026 = bStack0000000000000026 & 1;
    if (bStack0000000000000026 != 0) {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      OVRP_1_21_0_ovrp_GetTiledMultiResLevel_m246E37CB5071A0914E5BD2A4B7227892CA6F47C5
                (unaff_x29 + -0x14,0);
      *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x14);
      goto LAB_02db5484;
    }
  }
  *(undefined4 *)(unaff_x29 + -4) = 0;
LAB_02db5484:
  return *(undefined4 *)(unaff_x29 + -4);
}


