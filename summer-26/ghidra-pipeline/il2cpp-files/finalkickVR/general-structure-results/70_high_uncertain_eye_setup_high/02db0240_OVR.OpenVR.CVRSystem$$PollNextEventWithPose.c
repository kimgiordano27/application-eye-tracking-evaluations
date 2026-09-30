/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$PollNextEventWithPose
ENTRY_POINT: 02db0240
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 OVR_OpenVR_CVRSystem__PollNextEventWithPose(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000027;
  
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
                    /* catch() { ... } // from try @ 02db0218 with catch @ 02db024c */
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
                    /* try { // try from 02db025c to 02eb027b has its CatchHandler @ 02db0294 */
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
                    /* catch() { ... } // from try @ 02db0220 with catch @ 02db0264 */
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
                    /* try { // try from 02db027c to 02eb0297 has its CatchHandler @ 02daff98 */
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02db025c with catch @ 02db0294
                        */
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    uVar1 = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    OVRP_1_86_0_ovrp_GetCurrentDetachedInteractionProfile_mA2899B8CD22E54E24FF4F9B5D8DE15357ADB5FB6
              (uVar1,unaff_x29 + -0x14,0);
  }
  return *(undefined4 *)(unaff_x29 + -0x14);
}


