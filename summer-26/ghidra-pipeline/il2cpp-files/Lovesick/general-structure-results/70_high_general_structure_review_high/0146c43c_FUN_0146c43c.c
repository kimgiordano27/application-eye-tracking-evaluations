/*
FUNCTION_NAME: FUN_0146c43c
ENTRY_POINT: 0146c43c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_0146c43c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  
  if ((DAT_03776ae5 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__
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
    DAT_03776ae5 = 1;
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (param_2 != 0) {
    uVar7 = FUN_0267dbbc(param_2,*(undefined8 *)PTR_DAT_033ec030,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar6 = StringLiteral_7349;
    puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
    uVar8 = FUN_02681b9c(uVar7,0,0);
    puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<IInputInteraction>__;
    if ((uVar8 & 1) == 0) {
      uStack_58 = *(undefined8 *)(param_1 + 0x94);
      local_60 = *(undefined8 *)(param_1 + 0x8c);
      lVar11 = *(long *)(param_1 + 0x10);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_60);
      if ((lVar11 == 0) ||
         (plVar9 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar1,uVar7), plVar9 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) goto LAB_0146c924;
      uVar7 = *(undefined8 *)puVar1;
      puVar10 = (undefined4 *)thunk_FUN_00d624a0();
      FUN_0267da4c(*puVar10,puVar10[1],puVar10[2],puVar10[3],param_2,uVar7,0);
    }
    else {
      FUN_0267da4c(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                   *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),param_2,
                   *(undefined8 *)puVar1,0);
      fVar12 = (float)FUN_0267f5a0(param_2,*(undefined8 *)puVar3,0);
      if (fVar12 == 1.0) {
        FUN_0267f168(0x3f000000,param_2,*(undefined8 *)System_Globalization_CompareInfo_var,0);
      }
    }
    uVar7 = FUN_0267dbbc(param_2,*(undefined8 *)
                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                         ,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
    puVar3 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
    uVar8 = FUN_02681b9c(uVar7,0,0);
    puVar5 = Method_UnityEngine_Component_GetComponentsInChildren<Animator>__;
    puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
    if ((uVar8 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 0x10);
      local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0x9c));
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo,
                                 &local_60);
      if ((lVar11 == 0) ||
         (plVar9 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar3,uVar7), plVar9 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146c924;
      uVar7 = *(undefined8 *)puVar3;
      puVar10 = (undefined4 *)thunk_FUN_00d624a0();
      FUN_0267f168(*puVar10,param_2,uVar7,0);
      local_44 = *(undefined4 *)(param_1 + 0xa0);
      lVar11 = *(long *)(param_1 + 0x10);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_44);
      if ((lVar11 == 0) ||
         (plVar9 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar4,uVar7), plVar9 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146c924;
      uVar7 = *(undefined8 *)puVar4;
      puVar10 = (undefined4 *)thunk_FUN_00d624a0();
      uVar13 = *puVar10;
    }
    else {
      FUN_0267f168(*(undefined4 *)(param_1 + 0x6c),param_2,*(undefined8 *)puVar3,0);
      FUN_0267f168(*(undefined4 *)(param_1 + 0x74),param_2,*(undefined8 *)puVar5,0);
      uVar13 = *(undefined4 *)(param_1 + 0x70);
      uVar7 = *(undefined8 *)puVar4;
    }
    FUN_0267f168(uVar13,param_2,uVar7,0);
    uVar7 = FUN_0267dbbc(param_2,*(undefined8 *)StringLiteral_12470,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar1 = 
    Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
    ;
    uVar8 = FUN_02681b9c(uVar7,0,0);
    if ((uVar8 & 1) != 0) {
      FUN_0267f168(*(undefined4 *)(param_1 + 0x78),param_2,
                   *(undefined8 *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo,0);
    }
    puVar3 = Method_System_Threading_EventWaitHandle_Reset__;
    uVar7 = FUN_0267dbbc(param_2,*(undefined8 *)puVar1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
    uVar8 = FUN_02681b9c(uVar7,0,0);
    if ((uVar8 & 1) == 0) {
      FUN_0267e350(param_2,*(undefined8 *)puVar3,0);
      uStack_58 = *(undefined8 *)(param_1 + 0xac);
      local_60 = *(undefined8 *)(param_1 + 0xa4);
      lVar11 = *(long *)(param_1 + 0x10);
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_60);
      if ((lVar11 == 0) ||
         (plVar9 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar2,uVar7), plVar9 == (long *)0x0))
      goto LAB_0146c920;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
LAB_0146c924:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      uVar7 = *(undefined8 *)puVar2;
      puVar10 = (undefined4 *)thunk_FUN_00d624a0();
      uVar13 = *puVar10;
      uVar14 = puVar10[1];
      uVar15 = puVar10[2];
      uVar16 = puVar10[3];
    }
    else {
      FUN_0267e30c(param_2,*(undefined8 *)puVar3,0);
      uVar13 = *(undefined4 *)(param_1 + 0x7c);
      uVar14 = *(undefined4 *)(param_1 + 0x80);
      uVar15 = *(undefined4 *)(param_1 + 0x84);
      uVar16 = *(undefined4 *)(param_1 + 0x88);
      uVar7 = *(undefined8 *)puVar2;
    }
    FUN_0267da4c(uVar13,uVar14,uVar15,uVar16,param_2,uVar7,0);
    return;
  }
LAB_0146c920:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


