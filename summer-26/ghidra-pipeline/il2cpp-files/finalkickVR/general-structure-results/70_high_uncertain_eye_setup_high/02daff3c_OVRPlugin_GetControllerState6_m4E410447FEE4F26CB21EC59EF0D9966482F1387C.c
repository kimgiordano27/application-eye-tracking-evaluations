/*
FUNCTION_NAME: OVRPlugin_GetControllerState6_m4E410447FEE4F26CB21EC59EF0D9966482F1387C
ENTRY_POINT: 02daff3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_GetControllerState6_m4E410447FEE4F26CB21EC59EF0D9966482F1387C
               (void *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1ec [100];
  undefined1 auStack_188 [100];
  undefined1 auStack_124 [100];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  byte local_b1;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_9c [108];
  undefined8 local_30;
  undefined4 local_24;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_8BBE66A1FC631CA10DD5B83C200A7BEE3CF9D8C782B22934839AA15CA4DF35B8
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
                    /* catch() { ... } // from try @ 02dafeb0 with catch @ 02daff48 */
                    /* try { // try from 02daff58 to 02eaff77 has its CatchHandler @ 02daff94 */
                    /* catch() { ... } // from try @ 02dafeb8 with catch @ 02daff60 */
                    /* try { // try from 02daff78 to 02eaff97 has its CatchHandler @ 02dafb90 */
  local_24 = param_2;
  local_30 = param_3;
  if ((OVRPlugin_GetControllerState6_m4E410447FEE4F26CB21EC59EF0D9966482F1387C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_8BBE66A1FC631CA10DD5B83C200A7BEE3CF9D8C782B22934839AA15CA4DF35B8
              );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02daff58 with catch @ 02daff94
                        */
                    /* try { // try from 02daff98 to 02eb010b has its CatchHandler @ 02daff98
                       catch() { ... } // from try @ 02daff98 with catch @ 02daff98
                       catch() { ... } // from try @ 02db01d0 with catch @ 02daff98
                       catch() { ... } // from try @ 02db0224 with catch @ 02daff98
                       catch() { ... } // from try @ 02db027c with catch @ 02daff98 */
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetControllerState6_m4E410447FEE4F26CB21EC59EF0D9966482F1387C::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_9c,0,0x6c);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_a8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_b0 = *puVar3;
  local_b1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_a8,local_b0,0);
  local_b1 = local_b1 & 1;
  if (local_b1 == 0) {
    local_c0 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRPlugin_GetControllerState5_mAA377A20B26D6410B559B2C579384E0E80F2A2F3(local_c0);
    memcpy(auStack_124,auStack_188,100);
    memset(param_1,0,0x6c);
    memcpy(auStack_1ec,auStack_124,100);
    ControllerState6__ctor_m964086D25C1FA69D64BCBCAE9DB77AC33701809D(param_1,auStack_1ec,0);
  }
  else {
    il2cpp_codegen_initobj(auStack_9c,0x6c);
    local_b8 = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    local_bc = OVRP_1_83_0_ovrp_GetControllerState6_m2B2D1858BEFCF2EBA5B2B17D698AAB57214E9836
                         (local_b8,auStack_9c,0);
    memcpy(param_1,auStack_9c,0x6c);
  }
  return;
}


