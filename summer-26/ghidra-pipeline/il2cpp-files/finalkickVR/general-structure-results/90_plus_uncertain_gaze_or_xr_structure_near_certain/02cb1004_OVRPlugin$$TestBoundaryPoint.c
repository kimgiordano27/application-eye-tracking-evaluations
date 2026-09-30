/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryPoint
ENTRY_POINT: 02cb1004
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRPlugin__TestBoundaryPoint(void)

{
  byte bVar1;
  ulong uVar2;
  Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 *pRVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  
  bVar1 = Core_IsInitialized_mE325D95C21CFC9CE94AA55841CDFF49BDE8916AA_inline((MethodInfo *)0x0);
  *(byte *)(unaff_x29 + -0x11) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x11) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    lVar4 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar5,0);
    *(undefined8 *)(unaff_x29 + -8) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_get_binding__
              );
    uVar2 = CAPI_ovr_RichPresence_GetDestinations_m939AC6FF3B1C12A024416B86AD36B08633C36DE6(0);
    pRVar3 = (Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_CheckValid__
                       );
    Request_1__ctor_m0E647EB385F1DD3AA82CAA8A4F985901C4A27555
              (pRVar3,uVar2,
               *(MethodInfo **)
                Method_UnityEngine_InputSystem_InputManager_<ListControlLayouts>d__75_System_Collections_IEnumerator_Reset__
              );
    *(Request_1_t71AE8EF5496FB058CC1DE0C0B18E96BCA82CD326 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


