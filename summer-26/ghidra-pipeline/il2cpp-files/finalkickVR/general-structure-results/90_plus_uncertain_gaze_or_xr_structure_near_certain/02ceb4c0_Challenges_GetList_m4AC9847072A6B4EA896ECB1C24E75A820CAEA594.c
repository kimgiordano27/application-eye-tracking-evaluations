/*
FUNCTION_NAME: Challenges_GetList_m4AC9847072A6B4EA896ECB1C24E75A820CAEA594
ENTRY_POINT: 02ceb4c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *
Challenges_GetList_m4AC9847072A6B4EA896ECB1C24E75A820CAEA594(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  
  puVar1 = Method_System_Collections_Generic_List<Vector3>_get_Item__;
  if ((Challenges_GetList_m4AC9847072A6B4EA896ECB1C24E75A820CAEA594::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_45__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)Method_OVRPlugin_<>c_<_cctor>b__653_46__);
    Challenges_GetList_m4AC9847072A6B4EA896ECB1C24E75A820CAEA594::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar2 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  if ((bVar2 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02ceb574 with catch @ 02ceb5e4
                        */
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar4 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    local_18 = (Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 02ceb420 with catch @ 02ceb564 */
    uVar5 = ChallengeOptions_op_Explicit_m8D9EF61F1317D6A4D0182426D8926DE62AEA9411(param_1);
                    /* try { // try from 02ceb574 to 02deb593 has its CatchHandler @ 02ceb5e4 */
                    /* catch() { ... } // from try @ 02ceb428 with catch @ 02ceb57c */
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
                    /* try { // try from 02ceb594 to 02deb5e7 has its CatchHandler @ 02ceb2e0 */
    uVar3 = CAPI_ovr_Challenges_GetList_m636FE9C7E4FCB1EF0D803657027C529A0AC27220(uVar5,param_2,0);
    local_18 = (Request_1_tBA32CA55FA630F870F3D661A040F82BBE5F77411 *)
               il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_46__);
    Request_1__ctor_m742479814847CC386A783A3C448108836651C211
              (local_18,uVar3,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_45__);
  }
  return local_18;
}


