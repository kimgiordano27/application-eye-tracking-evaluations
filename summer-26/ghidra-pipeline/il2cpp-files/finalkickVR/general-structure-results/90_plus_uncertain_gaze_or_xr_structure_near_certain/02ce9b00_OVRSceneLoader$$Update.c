/*
FUNCTION_NAME: OVRSceneLoader$$Update
ENTRY_POINT: 02ce9b00
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneLoader__Update(void)

{
  ulong uVar1;
  Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB *pRVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined4 uStack0000000000000044;
  byte bStack0000000000000057;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 uStack0000000000000068;
  
  il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_31__);
  il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_32__);
  Leaderboards_GetEntriesByIds_m5F9D4144308EDA1552825F2B056906E32036FEF5::s_Il2CppMethodInitialized
       = 1;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined4 *)(unaff_x29 + -0x4c) = 0;
  *(undefined4 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined4 *)(unaff_x29 + -0x5c) = 0;
  uStack0000000000000064 = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  bStack0000000000000057 =
       Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  bStack0000000000000057 = bStack0000000000000057 & 1;
  if (bStack0000000000000057 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    uVar5 = *(undefined8 *)(lVar3 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    uStack0000000000000044 = *(undefined4 *)(unaff_x29 + -0x14);
    if (*(long *)(unaff_x29 + -0x20) == 0) {
      *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x20);
      *(undefined4 *)(unaff_x29 + -0x4c) = *(undefined4 *)(unaff_x29 + -0x18);
      *(undefined4 *)(unaff_x29 + -0x50) = uStack0000000000000044;
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(unaff_x29 + -0x10);
      *(undefined4 *)(unaff_x29 + -0x5c) = 0;
      uStack0000000000000068 = *(undefined8 *)(unaff_x29 + -0x48);
      uStack0000000000000064 = *(undefined4 *)(unaff_x29 + -0x4c);
      uStack0000000000000060 = *(undefined4 *)(unaff_x29 + -0x50);
      uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x58);
    }
    else {
      *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x20);
      *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0x18);
      *(undefined4 *)(unaff_x29 + -0x38) = uStack0000000000000044;
      *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x10);
      pvVar4 = *(void **)(unaff_x29 + -0x20);
      NullCheck(pvVar4);
      *(int *)(unaff_x29 + -0x5c) = (int)*(undefined8 *)((long)pvVar4 + 0x18);
      uStack0000000000000068 = *(undefined8 *)(unaff_x29 + -0x30);
      uStack0000000000000064 = *(undefined4 *)(unaff_x29 + -0x34);
      uStack0000000000000060 = *(undefined4 *)(unaff_x29 + -0x38);
      uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x40);
    }
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar1 = CAPI_ovr_Leaderboard_GetEntriesByIds_m3E1A4CB25D982E3E6B6928D3CBEFD515671FD0E9
                      (uStack0000000000000058,uStack0000000000000060,uStack0000000000000064,
                       uStack0000000000000068,*(undefined4 *)(unaff_x29 + -0x5c),0);
    pRVar2 = (Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB *)
             il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_32__);
    Request_1__ctor_mF3F3A93EF4B30665D632CD8E28A95FB4F2A10DC7
              (pRVar2,uVar1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_31__);
    *(Request_1_tA777A989996B87A89AA7597FC22C01C3F69C90EB **)(unaff_x29 + -8) = pRVar2;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


