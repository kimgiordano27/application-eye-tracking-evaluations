/*
FUNCTION_NAME: UnityEngine.EventSystems.OVRInputModule$$DeactivateModule
ENTRY_POINT: 02dc1790
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
UnityEngine_EventSystems_OVRInputModule__DeactivateModule(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  ulong *puStack0000000000000008;
  byte bStack000000000000001f;
  
  puStack0000000000000008 = *(ulong **)(param_1 + 0x280);
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000008);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetNativeOpenXRSession_m9310783676B3E115D4B3509CBE45D89BD61FC1BD::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
    iVar1 = OVRP_1_55_0_ovrp_GetNativeOpenXRHandles_mB3A15EB19386343313029577213D7E7CBB5C5215
                      (unaff_x29 + -0x18,unaff_x29 + -0x20,0);
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x20);
      goto LAB_02dc1878;
    }
  }
  *(undefined8 *)(unaff_x29 + -8) = 0;
LAB_02dc1878:
  return *(undefined8 *)(unaff_x29 + -8);
}


