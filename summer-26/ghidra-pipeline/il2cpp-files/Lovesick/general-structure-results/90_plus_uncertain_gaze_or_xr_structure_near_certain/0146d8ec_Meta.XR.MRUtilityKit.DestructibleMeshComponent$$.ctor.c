/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent$$.ctor
ENTRY_POINT: 0146d8ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 224
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_5
*/


void Meta_XR_MRUtilityKit_DestructibleMeshComponent___ctor(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((DAT_03776aee & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12470);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776aee = 1;
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_2 == 0) goto LAB_0146dd88;
  uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)PTR_DAT_033ec030,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar5 = StringLiteral_7349;
  puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
  uVar7 = FUN_02681b9c(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
    if ((lVar10 == 0) ||
       (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar1,uVar6,0), plVar8 == (long *)0x0))
    goto LAB_0146dd88;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_0146dd8c;
    uVar6 = *(undefined8 *)puVar1;
    puVar9 = (undefined4 *)thunk_FUN_00d624a0();
    uVar11 = *puVar9;
    uVar12 = puVar9[1];
    uVar13 = puVar9[2];
    uVar14 = puVar9[3];
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x50);
    uVar12 = *(undefined4 *)(param_1 + 0x54);
    uVar13 = *(undefined4 *)(param_1 + 0x58);
    uVar14 = *(undefined4 *)(param_1 + 0x5c);
    uVar6 = *(undefined8 *)puVar1;
  }
  FUN_0267da4c(uVar11,uVar12,uVar13,uVar14,param_2,uVar6,0);
  uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)
                                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                       ,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar3 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  uVar7 = FUN_02681b9c(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1);
    if ((lVar10 == 0) ||
       (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar3,uVar6,0), plVar8 == (long *)0x0))
    goto LAB_0146dd88;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146dd8c;
    uVar6 = *(undefined8 *)puVar3;
    puVar9 = (undefined4 *)thunk_FUN_00d624a0();
    uVar11 = *puVar9;
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)puVar3;
  }
  FUN_0267f168(uVar11,param_2,uVar6,0);
  uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)
                                Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar7 = FUN_02681b9c(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
    if (lVar10 == 0) goto LAB_0146dd88;
    plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                                  ,uVar6,0);
    if (plVar8 == (long *)0x0) goto LAB_0146dd88;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146dd8c;
    uVar6 = *(undefined8 *)puVar3;
    puVar9 = (undefined4 *)thunk_FUN_00d624a0();
    FUN_0267f168(*puVar9,param_2,uVar6,0);
  }
  puVar3 = 
  Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
  ;
  puVar1 = OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
  uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)StringLiteral_12470,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar4 = Method_System_Threading_EventWaitHandle_Reset__;
  FUN_02681b9c(uVar6,0,0);
  FUN_0267f168(*(undefined4 *)(param_1 + 0x68),param_2,*(undefined8 *)puVar1,0);
  uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
  uVar7 = FUN_02681b9c(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
    FUN_0267e350(param_2,*(undefined8 *)puVar4,0);
    lVar10 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
    if ((lVar10 == 0) ||
       (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar2,uVar6,0), plVar8 == (long *)0x0))
    {
LAB_0146dd88:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
LAB_0146dd8c:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    uVar6 = *(undefined8 *)puVar2;
    puVar9 = (undefined4 *)thunk_FUN_00d624a0();
    uVar14 = *puVar9;
    uVar11 = puVar9[1];
    uVar12 = puVar9[2];
    uVar13 = puVar9[3];
  }
  else {
    FUN_0267e30c(param_2,*(undefined8 *)puVar4,0);
    uVar6 = *(undefined8 *)puVar2;
    uVar14 = 0x3f800000;
    uVar11 = uVar14;
    uVar12 = uVar14;
    uVar13 = uVar14;
  }
  FUN_0267da4c(uVar14,uVar11,uVar12,uVar13,param_2,uVar6,0);
  return;
}


