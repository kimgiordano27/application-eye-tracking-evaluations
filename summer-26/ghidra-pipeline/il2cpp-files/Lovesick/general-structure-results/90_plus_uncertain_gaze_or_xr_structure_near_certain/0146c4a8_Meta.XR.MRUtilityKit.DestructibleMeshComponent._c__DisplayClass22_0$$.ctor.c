/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent.<>c__DisplayClass22_0$$.ctor
ENTRY_POINT: 0146c4a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 122
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_3;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


void Meta_XR_MRUtilityKit_DestructibleMeshComponent_<>c__DisplayClass22_0___ctor(long param_1)

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
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x30));
  thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__
                    );
  thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
  thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_12470);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                    );
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<Animator>__);
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                    );
  *(undefined1 *)(unaff_x21 + 0xae5) = 1;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x19 != 0) {
    uVar6 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar5 = StringLiteral_7349;
    puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
    uVar7 = FUN_02681b9c(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
      if ((lVar10 == 0) ||
         (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar1,uVar6), plVar8 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_0146c924;
      puVar9 = (undefined4 *)thunk_FUN_00d624a0();
      FUN_0267da4c(*puVar9,puVar9[1],puVar9[2],puVar9[3]);
    }
    else {
      FUN_0267da4c(*(undefined4 *)(unaff_x20 + 0x5c),*(undefined4 *)(unaff_x20 + 0x60),
                   *(undefined4 *)(unaff_x20 + 100),*(undefined4 *)(unaff_x20 + 0x68));
      fVar11 = (float)FUN_0267f5a0();
      if (fVar11 == 1.0) {
        FUN_0267f168(0x3f000000);
      }
    }
    uVar6 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
    puVar3 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
    uVar7 = FUN_02681b9c(uVar6,0,0);
    puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
    if ((uVar7 & 1) == 0) {
      lVar10 = *(long *)(unaff_x20 + 0x10);
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo)
      ;
      if ((lVar10 == 0) ||
         (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar3,uVar6), plVar8 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146c924;
      puVar9 = (undefined4 *)thunk_FUN_00d624a0();
      FUN_0267f168(*puVar9);
      in_stack_00000018._4_4_ = *(undefined4 *)(unaff_x20 + 0xa0);
      lVar10 = *(long *)(unaff_x20 + 0x10);
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
      if ((lVar10 == 0) ||
         (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar4,uVar6), plVar8 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146c924;
      puVar9 = (undefined4 *)thunk_FUN_00d624a0();
      uVar12 = *puVar9;
    }
    else {
      FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x6c));
      FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x74));
      uVar12 = *(undefined4 *)(unaff_x20 + 0x70);
    }
    FUN_0267f168(uVar12);
    uVar6 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar7 = FUN_02681b9c(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x78));
    }
    uVar6 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
    uVar7 = FUN_02681b9c(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      FUN_0267e350();
      lVar10 = *(long *)(unaff_x20 + 0x10);
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5);
      if ((lVar10 == 0) ||
         (plVar8 = (long *)FUN_0146a764(lVar10,*(undefined8 *)puVar2,uVar6), plVar8 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
LAB_0146c924:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar9 = (undefined4 *)thunk_FUN_00d624a0();
      uVar12 = *puVar9;
      uVar13 = puVar9[1];
      uVar14 = puVar9[2];
      uVar15 = puVar9[3];
    }
    else {
      FUN_0267e30c();
      uVar12 = *(undefined4 *)(unaff_x20 + 0x7c);
      uVar13 = *(undefined4 *)(unaff_x20 + 0x80);
      uVar14 = *(undefined4 *)(unaff_x20 + 0x84);
      uVar15 = *(undefined4 *)(unaff_x20 + 0x88);
    }
    FUN_0267da4c(uVar12,uVar13,uVar14,uVar15);
    return;
  }
LAB_0146c920:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


