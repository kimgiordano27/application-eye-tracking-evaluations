/*
FUNCTION_NAME: Virtence.OpenTypeCS.DefaultEncoding$$CharToGlyphIndex
ENTRY_POINT: 02dd24cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Virtence_OpenTypeCS_DefaultEncoding__CharToGlyphIndex
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x29;
  ulong *puStack0000000000000008;
  byte bStack000000000000001f;
  
  *(undefined8 *)(unaff_x29 + -8) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  puStack0000000000000008 = param_1;
  if ((UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(param_1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    UnityOpenXR_OnSessionExiting_m5A219E00988AF17792094B9D1E4B31F8FBC50DB1::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar2,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f != 0) {
    uVar1 = *(undefined8 *)(unaff_x29 + -8);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
    OVRP_1_71_0_ovrp_UnityOpenXR_OnSessionExiting_m96D792305E0AC78FCE1108E81761615DFC70DCF7(uVar1,0)
    ;
  }
  return;
}


