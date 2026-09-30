/*
FUNCTION_NAME: OVR.OpenVR.CVRChaperoneSetup$$.ctor
ENTRY_POINT: 02db3aa4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVR_OpenVR_CVRChaperoneSetup___ctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  ulong *in_stack_00000010;
  byte bStack000000000000001f;
  
  if ((OVRPlugin_GetInsightPassthroughInitializationState_m3E668E023B953E8204B732EBCD358FAC7B7660C4
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetInsightPassthroughInitializationState_m3E668E023B953E8204B732EBCD358FAC7B7660C4::
    s_Il2CppMethodInitialized = 1;
  }
                    /* try { // try from 02db3ad4 to 02eb3ae3 has its CatchHandler @ 02db3af0 */
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
                    /* try { // try from 02db3ae4 to 02eb3b1b has its CatchHandler @ 02db3a70 */
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02db3ad4 with catch @ 02db3af0
                        */
  *(undefined8 *)(unaff_x29 + -0x18) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
                    /* try { // try from 02db3b1c to 02eb3b23 has its CatchHandler @ 02db3b4c */
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar3,0);
  bStack000000000000001f = bStack000000000000001f & 1;
                    /* try { // try from 02db3b24 to 02eb3b27 has its CatchHandler @ 02db3b64 */
                    /* try { // try from 02db3b28 to 02eb3b5b has its CatchHandler @ 02db3a70 */
  if (bStack000000000000001f == 0) {
                    /* try { // try from 02db3b5c to 02eb3b7b has its CatchHandler @ 02db3b84 */
    *(undefined4 *)(unaff_x29 + -4) = 0xfffffc14;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar1 = OVRP_1_66_0_ovrp_GetInsightPassthroughInitializationState_mD07BE893A072BBCC8CB2E9F7826939DD26D4C943
                      (0);
                    /* catch() { ... } // from try @ 02db3b1c with catch @ 02db3b4c */
    *(undefined4 *)(unaff_x29 + -4) = uVar1;
  }
                    /* catch() { ... } // from try @ 02db3b24 with catch @ 02db3b64 */
  return *(undefined4 *)(unaff_x29 + -4);
}


