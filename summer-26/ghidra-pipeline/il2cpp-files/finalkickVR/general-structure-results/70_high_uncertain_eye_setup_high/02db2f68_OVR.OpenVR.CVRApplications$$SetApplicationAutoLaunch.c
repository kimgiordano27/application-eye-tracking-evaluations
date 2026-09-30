/*
FUNCTION_NAME: OVR.OpenVR.CVRApplications$$SetApplicationAutoLaunch
ENTRY_POINT: 02db2f68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte OVR_OpenVR_CVRApplications__SetApplicationAutoLaunch(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  byte bStack000000000000001f;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  puStack0000000000000010 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
                    /* try { // try from 02db2f74 to 02eb2fab has its CatchHandler @ 02db2f00 */
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02db2f64 with catch @ 02db2f80
                        */
  if ((OVRPlugin_ResetDefaultExternalCamera_mABA1DDF03790F2D8CABBDFF98204604AE9D674B6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_ResetDefaultExternalCamera_mABA1DDF03790F2D8CABBDFF98204604AE9D674B6::
    s_Il2CppMethodInitialized = 1;
  }
                    /* try { // try from 02db2fac to 02eb2fb3 has its CatchHandler @ 02db2fdc */
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
                    /* try { // try from 02db2fb4 to 02eb2fb7 has its CatchHandler @ 02db2ff4 */
                    /* try { // try from 02db2fb8 to 02eb2feb has its CatchHandler @ 02db2f00 */
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
                    /* catch() { ... } // from try @ 02db2fac with catch @ 02db2fdc */
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar4,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    iVar2 = OVRP_1_44_0_ovrp_ResetDefaultExternalCamera_mDBA95D95F3AFEB36FD5F82741140F62B81B00B51(0)
    ;
    if (iVar2 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 1;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


