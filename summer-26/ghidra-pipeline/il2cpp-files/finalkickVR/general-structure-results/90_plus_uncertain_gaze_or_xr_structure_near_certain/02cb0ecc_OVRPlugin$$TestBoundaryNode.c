/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryNode
ENTRY_POINT: 02cb0ecc
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


undefined8 OVRPlugin__TestBoundaryNode(void)

{
  byte bVar1;
  ulong uVar2;
  Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *pRVar3;
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
    uVar2 = CAPI_ovr_User_GetLoggedInUser_m5B647D128F634C0069C6EE042BB0608E02135778(0);
    pRVar3 = (Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_UnityEngine_InputSystem_InputManager_<>c_<MakeDeviceNameUnique>b__145_0__
                       );
    Request_1__ctor_mC37C0892538E3DB6433BDCC19B82FCBD0F2EC03D
              (pRVar3,uVar2,
               *(MethodInfo **)
                Method_UnityEngine_UI_InputField_<MouseDragOutsideRect>d__196_System_Collections_IEnumerator_Reset__
              );
    *(Request_1_tDEBBCEA56ECDB50CF2277C79EB69671802236259 **)(unaff_x29 + -8) = pRVar3;
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


