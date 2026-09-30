/*
FUNCTION_NAME: OVRSceneManager$$QueryForExistingAnchorsTransform
ENTRY_POINT: 02ceb3ec
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneManager__QueryForExistingAnchorsTransform(undefined8 param_1)

{
  ulong uVar1;
  Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *pRVar2;
  long unaff_x29;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 uStack0000000000000068;
  
  uStack0000000000000064 = *(undefined4 *)(unaff_x29 + -0x34);
                    /* catch(type#1 @ 0474a728) { ... } // from try @ 02ceb368 with catch @ 02ceb3f4
                        */
  uStack0000000000000060 = *(undefined4 *)(unaff_x29 + -0x38);
  uStack0000000000000058 = *(undefined8 *)(unaff_x29 + -0x40);
  uStack0000000000000068 = param_1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__)
  ;
                    /* try { // try from 02ceb420 to 02deb427 has its CatchHandler @ 02ceb564 */
                    /* try { // try from 02ceb428 to 02deb42b has its CatchHandler @ 02ceb57c */
                    /* try { // try from 02ceb42c to 02deb573 has its CatchHandler @ 02ceb2e0 */
  uVar1 = CAPI_ovr_Challenges_GetEntriesByIds_m5E314D44CD9F4B63B0EB680D6A54F19F25BB0FF8
                    (uStack0000000000000058,uStack0000000000000060,uStack0000000000000064,
                     uStack0000000000000068,*(undefined4 *)(unaff_x29 + -0x5c),0);
  pRVar2 = (Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 *)
           il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_42__);
  Request_1__ctor_m817E3B0B1C617AE840330CA1A48671FD32386F00
            (pRVar2,uVar1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_41__);
  *(Request_1_t073EA18B3EA44E7A485A942C707F4414DF52BFB6 **)(unaff_x29 + -8) = pRVar2;
  return *(undefined8 *)(unaff_x29 + -8);
}


