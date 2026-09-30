/*
FUNCTION_NAME: FUN_0146c928
ENTRY_POINT: 0146c928
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_17;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
FUN_0146c928(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  
  if ((DAT_03776ae6 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7349);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5916);
    thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ec030);
    thunk_FUN_00d48444(Method_System_Threading_EventWaitHandle_Reset__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12470);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_InputProcessor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                      );
    DAT_03776ae6 = 1;
  }
  if ((param_7 == 0) || (*(long *)(param_7 + 0x10) == 0)) {
LAB_0146cd84:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),*(undefined8 *)StringLiteral_12470,0);
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((uVar4 & 1) != 0) {
    uVar10 = 0;
    uVar9 = 0x3f000000;
    goto LAB_0146ced0;
  }
  if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146cd84;
  uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),*(undefined8 *)PTR_DAT_033ec030,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146cd84;
    uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                         *(undefined8 *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                         ,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_02681b9c(param_6,0,0);
      puVar2 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
      if ((uVar4 & 1) != 0) {
        if (param_6 == 0) goto LAB_0146cd84;
        uVar4 = FUN_0267e21c(param_6,*(undefined8 *)
                                      OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo,0);
        if ((uVar4 & 1) != 0) {
          auVar8 = FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0);
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
          ;
          uVar10 = auVar8._8_8_;
          uVar9 = auVar8._0_8_;
          uVar4 = FUN_0267e21c(param_6,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                               ,0);
          uVar7 = 0x3f800000;
          if ((uVar4 & 1) != 0) {
            uVar7 = FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0);
          }
          puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
          lVar6 = *(long *)(param_5 + 0x10);
          local_78 = auVar8._0_4_;
          uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                      System_Runtime_InteropServices_InAttribute_TypeInfo,&local_78)
          ;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0146af84(lVar6,param_6,*(undefined8 *)puVar2,uVar5);
          lVar6 = *(long *)(param_5 + 0x10);
          local_64 = uVar7;
          uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,&local_64);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0146af84(lVar6,param_6,*(undefined8 *)puVar3,uVar5);
          goto LAB_0146ced0;
        }
      }
      uVar10 = 0;
      uVar9 = 0;
      goto LAB_0146ced0;
    }
    if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146cd84;
    uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                         *(undefined8 *)UnityEngine_InputSystem_InputProcessor_TypeInfo,0);
    uVar9 = 0;
    uVar10 = 0;
    if ((uVar4 & 1) != 0) goto LAB_0146ced0;
    if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146cd84;
    uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),*(undefined8 *)StringLiteral_5916,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = 0;
      uVar9 = 0x3f800000;
      goto LAB_0146ced0;
    }
    if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146cd84;
    uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                         *(undefined8 *)
                          Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                         ,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_7 + 0x10) == 0) goto LAB_0146cd84;
      uVar4 = FUN_015fe250(*(long *)(param_7 + 0x10),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                           ,0);
      if ((uVar4 & 1) != 0) goto LAB_0146ced0;
    }
    else {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_02681b9c(param_6,0,0);
      if ((uVar4 & 1) != 0) {
        if (param_6 != 0) {
          uVar4 = FUN_0267e394(param_6,*(undefined8 *)
                                        Method_System_Threading_EventWaitHandle_Reset__,0);
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
          if (((uVar4 & 1) != 0) &&
             (uVar4 = FUN_0267e21c(param_6,*(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__,0),
             (uVar4 & 1) != 0)) {
            auVar8 = FUN_0267d928(param_6,*(undefined8 *)puVar2,0);
            uVar10 = auVar8._8_8_;
            uVar9 = auVar8._0_8_;
            lVar6 = *(long *)(param_5 + 0x10);
            local_78 = auVar8._0_4_;
            uStack_74 = param_2;
            local_70 = param_3;
            uStack_6c = param_4;
            uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_7349,&local_78);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0146af84(lVar6,param_6,*(undefined8 *)puVar2,uVar5);
          }
          goto LAB_0146ced0;
        }
        goto LAB_0146cd84;
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_02681b9c(param_6,0,0);
    if ((uVar4 & 1) != 0) {
      if (param_6 == 0) goto LAB_0146cd84;
      uVar4 = FUN_0267e21c(param_6,*(undefined8 *)CollisionSound_<SoundPlayBuffer>d__14_TypeInfo,0);
      if ((uVar4 & 1) != 0) {
        uVar10 = 0;
        uVar9 = 0x3f800000;
        goto LAB_0146ced0;
      }
    }
  }
  uVar9 = 0x3f800000;
  uVar10 = 0;
LAB_0146ced0:
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = uVar9;
  return auVar8;
}


