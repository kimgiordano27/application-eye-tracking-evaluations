/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 01a3c800
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVRPermissionsRequester__ShouldRequestPermission(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x22 + 0x4a8);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_TransformExtensions_SetLayerRecursively__)
    ;
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_22__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MeshSubsetCombineUtility_MeshContainer>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Oculus_Platform_Message_Callback<User>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033edd48);
    thunk_FUN_00d48444(StringLiteral_6739);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    *(undefined1 *)(unaff_x19 + 0xc1b) = 1;
  }
  lVar2 = *plVar6;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *plVar6;
  }
  puVar1 = Method_UnityEngine_XR_ARFoundation_TransformExtensions_SetLayerRecursively__;
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *plVar6;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 == 0) goto LAB_01a3c990;
    FUN_012d239c(lVar3,uVar4,*(undefined8 *)PTR_DAT_033edd48,0);
    lVar2 = *plVar6;
    *(long *)(*(long *)(lVar2 + 0xb8) + 0x18) = lVar3;
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *plVar6;
  }
  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_22__;
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar5 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *plVar6;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar5 == 0) goto LAB_01a3c990;
    FUN_012d24b0(lVar5,uVar4,*(undefined8 *)StringLiteral_6739,0);
    *(long *)(*(long *)(*plVar6 + 0xb8) + 0x20) = lVar5;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)Oculus_Platform_Message_Callback<User>_TypeInfo);
  if (lVar2 != 0) {
    FUN_013626f0(lVar2,3,lVar3,lVar5,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<MeshSubsetCombineUtility_MeshContainer>_GetEnumerator__
                );
    return lVar2;
  }
LAB_01a3c990:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


