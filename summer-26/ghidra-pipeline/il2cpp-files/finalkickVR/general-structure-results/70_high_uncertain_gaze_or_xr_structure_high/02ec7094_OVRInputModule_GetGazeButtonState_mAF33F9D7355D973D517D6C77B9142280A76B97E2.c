/*
FUNCTION_NAME: OVRInputModule_GetGazeButtonState_mAF33F9D7355D973D517D6C77B9142280A76B97E2
ENTRY_POINT: 02ec7094
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_6;functionality_gaze_retrieval_or_extraction
*/


undefined4 OVRInputModule_GetGazeButtonState_mAF33F9D7355D973D517D6C77B9142280A76B97E2(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 local_14;
  
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  if ((OVRInputModule_GetGazeButtonState_mAF33F9D7355D973D517D6C77B9142280A76B97E2::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    OVRInputModule_GetGazeButtonState_mAF33F9D7355D973D517D6C77B9142280A76B97E2::
    s_Il2CppMethodInitialized = 1;
  }
  bVar5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2
                    (*(undefined4 *)(param_1 + 0x7c),0);
  if ((bVar5 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar5 = OVRInput_GetDown_mEC4F71AEC93D3AF1A041934CA4C61680C6DB9AC7(uVar1,0x80000000,0);
    bVar5 = bVar5 & 1;
  }
  else {
    bVar5 = 1;
  }
  bVar6 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F
                    (*(undefined4 *)(param_1 + 0x7c),0);
  if ((bVar6 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    bVar6 = OVRInput_GetUp_m66B13613FF16CBAB8B0A77A5ADCFD1A3A68F3898(uVar1,0x80000000,0);
    bVar6 = bVar6 & 1;
  }
  else {
    bVar6 = 1;
  }
  bVar7 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3();
  bVar3 = bVar5 != 0 || (bVar7 & 1) != 0;
  bVar5 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0,0);
  bVar4 = bVar6 != 0 || (bVar5 & 1) != 0;
  if (bVar3 && bVar4) {
    local_14 = 2;
  }
  else if (bVar3) {
    local_14 = 0;
  }
  else if (bVar4) {
    local_14 = 1;
  }
  else {
    local_14 = 3;
  }
  return local_14;
}


