/*
FUNCTION_NAME: FUN_01470a80
ENTRY_POINT: 01470a80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_01470a80(long param_1,long param_2)

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
  int iVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_03776afe & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(
                      Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(StringLiteral_892);
    thunk_FUN_00d48444(PTR_DAT_033f45c0);
    thunk_FUN_00d48444(Method_System_Globalization_CompareInfo_IndexOfCore__);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__);
    thunk_FUN_00d48444(Method_System_Activator_CreateInstance__);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8885);
    thunk_FUN_00d48444(OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12470);
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    DAT_03776afe = 1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (param_2 == 0) goto LAB_0147114c;
    uVar13 = 0;
    if (*(int *)(param_1 + 0x18) != 2) {
      uVar13 = 0x3f800000;
    }
    FUN_0267f168(uVar13,param_2,
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__,0);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (param_2 == 0) goto LAB_0147114c;
  }
  else {
    if (param_2 == 0) goto LAB_0147114c;
    uVar13 = 0;
    if (*(int *)(param_1 + 0x1c) != 2) {
      uVar13 = 0x3f800000;
    }
    FUN_0267f168(uVar13,param_2,*(undefined8 *)Method_System_Globalization_CompareInfo_IndexOfCore__
                 ,0);
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)
                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__
                       ,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar5 = StringLiteral_7349;
  puVar1 = PTR_DAT_033f45c0;
  uVar7 = FUN_02681b9c(uVar6,0,0);
  puVar4 = Method_System_Activator_CreateInstance__;
  if ((uVar7 & 1) == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0xbc);
    local_60 = *(undefined8 *)(param_1 + 0xb4);
    lVar11 = *(long *)(param_1 + 0x10);
    uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_60);
    if ((lVar11 == 0) ||
       (plVar8 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar1,uVar6,0), plVar8 == (long *)0x0))
    goto LAB_0147114c;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_01471150;
    uVar6 = *(undefined8 *)puVar1;
    puVar9 = (undefined4 *)thunk_FUN_00d624a0();
    FUN_0267da4c(*puVar9,puVar9[1],puVar9[2],puVar9[3],param_2,uVar6,0);
  }
  else {
    FUN_0267da4c(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                 *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),param_2,
                 *(undefined8 *)puVar1,0);
    fVar12 = (float)FUN_0267f5a0(param_2,*(undefined8 *)puVar4,0);
    if (((fVar12 == 1.0) &&
        (fVar12 = (float)FUN_0267f5a0(param_2,*(undefined8 *)StringLiteral_892,0),
        puVar1 = System_Globalization_CompareInfo_var, fVar12 == 1.0)) &&
       (uVar7 = FUN_0267e21c(param_2,*(undefined8 *)System_Globalization_CompareInfo_var,0),
       (uVar7 & 1) != 0)) {
      FUN_0267f168(0x3f000000,param_2,*(undefined8 *)puVar1,0);
    }
  }
  puVar4 = StringLiteral_8885;
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__;
  iVar10 = *(int *)(param_1 + 0x18);
  if (iVar10 == 2) {
    uVar7 = FUN_0267e21c(param_2,*(undefined8 *)
                                  Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0);
    if ((uVar7 & 1) != 0) {
      uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar1 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__;
      uVar7 = FUN_02681b9c(uVar6,0,0);
      if ((uVar7 & 1) == 0) {
        uStack_58 = *(undefined8 *)(param_1 + 0xd8);
        local_60 = *(undefined8 *)(param_1 + 0xd0);
        lVar11 = *(long *)(param_1 + 0x10);
        uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_60);
        if ((lVar11 == 0) ||
           (plVar8 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar1,uVar6,0),
           plVar8 == (long *)0x0)) goto LAB_0147114c;
        if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) goto LAB_01471150;
        uVar6 = *(undefined8 *)puVar1;
        puVar9 = (undefined4 *)thunk_FUN_00d624a0();
        FUN_0267da4c(*puVar9,puVar9[1],puVar9[2],puVar9[3],param_2,uVar6,0);
        uVar13 = *(undefined4 *)(param_1 + 0x38);
      }
      else {
        FUN_0267da4c(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                     *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),param_2,
                     *(undefined8 *)puVar1,0);
        uVar13 = *(undefined4 *)(param_1 + 0x9c);
      }
      FUN_0267f168(uVar13,param_2,*(undefined8 *)puVar4,0);
    }
    iVar10 = *(int *)(param_1 + 0x18);
  }
  puVar1 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
  if ((iVar10 == 1) &&
     (uVar7 = FUN_0267e21c(param_2,*(undefined8 *)
                                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                           ,0), (uVar7 & 1) != 0)) {
    uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar3 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
    uVar7 = FUN_02681b9c(uVar6,0,0);
    puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
    if ((uVar7 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 0x10);
      local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_1 + 0xc4));
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo,
                                 &local_60);
      if ((lVar11 == 0) ||
         (plVar8 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar3,uVar6,0), plVar8 == (long *)0x0
         )) goto LAB_0147114c;
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_01471150;
      uVar6 = *(undefined8 *)puVar3;
      puVar9 = (undefined4 *)thunk_FUN_00d624a0();
      FUN_0267f168(*puVar9,param_2,uVar6,0);
      uVar13 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      FUN_0267f168(*(undefined4 *)(param_1 + 0x84),param_2,*(undefined8 *)puVar3,0);
      uVar13 = *(undefined4 *)(param_1 + 0x98);
    }
    FUN_0267f168(uVar13,param_2,*(undefined8 *)puVar4,0);
  }
  puVar3 = StringLiteral_12470;
  puVar4 = 
  Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
  ;
  uVar7 = FUN_0267e21c(param_2,*(undefined8 *)StringLiteral_12470,0);
  puVar1 = OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
  if (((uVar7 & 1) != 0) &&
     (uVar7 = FUN_0267e21c(param_2,*(undefined8 *)
                                    OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo,0
                          ), (uVar7 & 1) != 0)) {
    uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_02681b9c(uVar6,0,0);
    FUN_0267f168(*(undefined4 *)(param_1 + 0xa0),param_2,*(undefined8 *)puVar1,0);
  }
  uVar7 = FUN_0267e21c(param_2,*(undefined8 *)puVar4,0);
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
  if (((uVar7 & 1) != 0) &&
     (uVar7 = FUN_0267e21c(param_2,*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__,0),
     puVar3 = Method_System_Threading_EventWaitHandle_Reset__, (uVar7 & 1) != 0)) {
    uVar6 = FUN_0267dbbc(param_2,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar7 = FUN_02681b9c(uVar6,0,0);
    if ((uVar7 & 1) == 0) {
      FUN_0267e350(param_2,*(undefined8 *)puVar3,0);
      uStack_58 = *(undefined8 *)(param_1 + 0xe8);
      local_60 = *(undefined8 *)(param_1 + 0xe0);
      lVar11 = *(long *)(param_1 + 0x10);
      uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&local_60);
      if ((lVar11 == 0) ||
         (plVar8 = (long *)FUN_0146a764(lVar11,*(undefined8 *)puVar1,uVar6,0), plVar8 == (long *)0x0
         )) {
LAB_0147114c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
LAB_01471150:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      uVar6 = *(undefined8 *)puVar1;
      puVar9 = (undefined4 *)thunk_FUN_00d624a0();
      uVar14 = *puVar9;
      uVar13 = puVar9[1];
      uVar15 = puVar9[2];
      uVar16 = puVar9[3];
    }
    else {
      FUN_0267e30c(param_2,*(undefined8 *)puVar3,0);
      uVar6 = *(undefined8 *)puVar1;
      uVar14 = 0x3f800000;
      uVar13 = uVar14;
      uVar15 = uVar14;
      uVar16 = uVar14;
    }
    FUN_0267da4c(uVar14,uVar13,uVar15,uVar16,param_2,uVar6,0);
  }
  return;
}


