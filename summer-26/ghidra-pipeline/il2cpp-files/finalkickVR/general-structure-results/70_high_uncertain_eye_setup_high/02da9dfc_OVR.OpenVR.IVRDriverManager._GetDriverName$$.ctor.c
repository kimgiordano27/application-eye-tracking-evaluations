/*
FUNCTION_NAME: OVR.OpenVR.IVRDriverManager._GetDriverName$$.ctor
ENTRY_POINT: 02da9dfc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 OVR_OpenVR_IVRDriverManager__GetDriverName___ctor(undefined8 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000010;
  ulong *puStack0000000000000018;
  byte bStack0000000000000027;
  
  puStack0000000000000018 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  if ((OVRPlugin_get_systemRegion_m664F38F33BF9D3BACE25644BF4D48D1ED3D1A8A6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    OVRPlugin_get_systemRegion_m664F38F33BF9D3BACE25644BF4D48D1ED3D1A8A6::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
  bVar1 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  *(byte *)(unaff_x29 + -0x11) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x11) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
    uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    *(undefined8 *)(unaff_x29 + -0x20) = uVar3;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
                    /* catch() { ... } // from try @ 02da9d68 with catch @ 02da9e90 */
                    /* try { // try from 02da9ea0 to 02ea9ebf has its CatchHandler @ 02da9ec8 */
    bStack0000000000000027 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                   (*(undefined8 *)(unaff_x29 + -0x20),*puVar4,0);
                    /* catch() { ... } // from try @ 02da9d70 with catch @ 02da9ea8 */
    bStack0000000000000027 = bStack0000000000000027 & 1;
    if (bStack0000000000000027 != 0) {
                    /* try { // try from 02da9ec0 to 02ea9ecb has its CatchHandler @ 02da9c60 */
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02da9ea0 with catch @ 02da9ec8
                        */
      uVar2 = OVRP_1_5_0_ovrp_GetSystemRegion_m4A8AD5B1D69F5F1172B3330A42D844391FD38C53(0);
      *(undefined4 *)(unaff_x29 + -4) = uVar2;
      goto LAB_02da9ee4;
    }
  }
  *(undefined4 *)(unaff_x29 + -4) = 0;
LAB_02da9ee4:
  return *(undefined4 *)(unaff_x29 + -4);
}


