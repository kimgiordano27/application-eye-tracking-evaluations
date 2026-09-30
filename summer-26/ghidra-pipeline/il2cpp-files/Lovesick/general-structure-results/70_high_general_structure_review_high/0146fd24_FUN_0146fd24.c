/*
FUNCTION_NAME: FUN_0146fd24
ENTRY_POINT: 0146fd24
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01470154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0146fd24(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  
  if ((DAT_03776afb & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f7148);
    thunk_FUN_00d48444(System_Globalization_CompareInfo_var);
    thunk_FUN_00d48444(
                      Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
    thunk_FUN_00d48444(StringLiteral_892);
    thunk_FUN_00d48444(Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter_TypeInfo);
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
    DAT_03776afb = 1;
  }
  puVar2 = StringLiteral_302;
  puVar3 = Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__;
  puVar1 = Method_System_Globalization_CompareInfo_IndexOfCore__;
  if (param_6 != 0) {
    iVar10 = *(int *)(param_5 + 0x18);
    uVar7 = FUN_0267e21c(param_6,*(undefined8 *)
                                  Method_UnityEngine_GameObject_GetComponentInChildren<Collider>__,0
                        );
    if (iVar10 == 0) {
      if ((uVar7 & 1) != 0) {
        fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0);
        uVar12 = 2;
        if (fVar11 != 0.0) {
          uVar12 = 1;
        }
        *(undefined4 *)(param_5 + 0x18) = uVar12;
      }
    }
    else if ((uVar7 & 1) != 0) {
      fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0);
      puVar3 = Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter_TypeInfo;
      iVar10 = 2;
      if (fVar11 != 0.0) {
        iVar10 = 1;
      }
      if (iVar10 != *(int *)(param_5 + 0x18)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar3,0);
      }
    }
    iVar10 = *(int *)(param_5 + 0x1c);
    uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
    if (iVar10 == 0) {
      if ((uVar7 & 1) != 0) {
        fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
        uVar12 = 2;
        if (fVar11 != 0.0) {
          uVar12 = 1;
        }
        *(undefined4 *)(param_5 + 0x1c) = uVar12;
      }
    }
    else if ((uVar7 & 1) != 0) {
      fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
      puVar1 = PTR_DAT_033f7148;
      iVar10 = 2;
      if (fVar11 != 0.0) {
        iVar10 = 1;
      }
      if (iVar10 != *(int *)(param_5 + 0x1c)) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_026610e4(*(undefined8 *)puVar1,0);
      }
    }
    if (param_7 != 0) {
      uVar7 = FUN_015fe250(param_7,*(undefined8 *)
                                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass61_0_<DOJump>b__0__
                           ,0);
      puVar4 = StringLiteral_8885;
      puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__;
      puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      puVar1 = PTR_DAT_033f45c0;
      if ((uVar7 & 1) != 0) {
        *(undefined4 *)(param_5 + 0x70) = 0;
        puVar3 = Method_System_Activator_CreateInstance__;
        uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
        if ((uVar7 & 1) == 0) {
          *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(param_5 + 0x7c);
          *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x74);
        }
        else {
          uVar12 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
          *(undefined4 *)(param_5 + 0x20) = uVar12;
          *(undefined4 *)(param_5 + 0x24) = param_2;
          *(undefined4 *)(param_5 + 0x28) = param_3;
          *(undefined4 *)(param_5 + 0x2c) = param_4;
        }
        uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar3,0);
        puVar1 = StringLiteral_892;
        if (((((uVar7 & 1) != 0) &&
             (uVar7 = FUN_0267e21c(param_6,*(undefined8 *)StringLiteral_892,0),
             puVar2 = System_Globalization_CompareInfo_var, (uVar7 & 1) != 0)) &&
            (uVar7 = FUN_0267e21c(param_6,*(undefined8 *)System_Globalization_CompareInfo_var,0),
            (uVar7 & 1) != 0)) &&
           ((fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar3,0), fVar11 == 1.0 &&
            (fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0), fVar11 == 1.0)))) {
          *(undefined1 *)(param_5 + 0x30) = 1;
          fVar11 = (float)FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0);
          if (fVar11 < _LAB_028aa024) {
            fVar11 = _LAB_028aa024;
          }
          *(float *)(param_5 + 0x34) = fVar11;
          return;
        }
        *(undefined1 *)(param_5 + 0x30) = 0;
        *(undefined4 *)(param_5 + 0x34) = 0x3f000000;
        return;
      }
      uVar7 = FUN_015fe250(param_7,*(undefined8 *)
                                    Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,0);
      puVar1 = 
      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__;
      if ((uVar7 & 1) == 0) {
        uVar7 = FUN_015fe250(param_7,*(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                             ,0);
        if ((uVar7 & 1) == 0) {
          uVar7 = FUN_015fe250(param_7,*(undefined8 *)StringLiteral_12470,0);
          if ((uVar7 & 1) == 0) {
            uVar7 = FUN_015fe250(param_7,*(undefined8 *)
                                          Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                                 ,0);
            puVar1 = Method_System_Threading_EventWaitHandle_Reset__;
            if ((uVar7 & 1) == 0) {
              *(undefined4 *)(param_5 + 0x70) = 5;
              return;
            }
            *(undefined4 *)(param_5 + 0x70) = 3;
            puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
            bVar6 = FUN_0267e394(param_6,*(undefined8 *)puVar1,0);
            *(byte *)(param_5 + 0x5c) = bVar6 & 1;
            uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar3,0);
            if ((uVar7 & 1) != 0) {
              uVar12 = FUN_0267d928(param_6,*(undefined8 *)puVar3,0);
              *(undefined4 *)(param_5 + 0x60) = uVar12;
              *(undefined4 *)(param_5 + 100) = param_2;
              *(undefined4 *)(param_5 + 0x68) = param_3;
              *(undefined4 *)(param_5 + 0x6c) = param_4;
              return;
            }
            *(undefined8 *)(param_5 + 0x7c) = *(undefined8 *)(param_5 + 0xe8);
            *(undefined8 *)(param_5 + 0x74) = *(undefined8 *)(param_5 + 0xe0);
            return;
          }
          *(undefined4 *)(param_5 + 0x70) = 4;
          uVar7 = FUN_0267e21c(param_6,param_7,0);
          puVar1 = OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
          if ((uVar7 & 1) == 0) {
            *(undefined4 *)(param_5 + 0x58) = *(undefined4 *)(param_5 + 0xa0);
            return;
          }
          uVar7 = FUN_0267e21c(param_6,*(undefined8 *)
                                        OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo
                               ,0);
          if ((uVar7 & 1) == 0) {
            return;
          }
          uVar12 = FUN_0267f5a0(param_6,*(undefined8 *)puVar1,0);
          *(undefined4 *)(param_5 + 0x58) = uVar12;
          return;
        }
        *(undefined4 *)(param_5 + 0x70) = 2;
        puVar2 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
        uVar8 = FUN_0267dbbc(param_6,*(undefined8 *)puVar1,0);
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
        }
        bVar6 = FUN_02681b9c(uVar8,0,0);
        *(byte *)(param_5 + 0x54) = bVar6 & 1;
        uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar2,0);
        uVar12 = 0;
        if ((uVar7 & 1) != 0) {
          uVar12 = FUN_0267f5a0(param_6,*(undefined8 *)puVar2,0);
        }
        *(undefined4 *)(param_5 + 0x50) = uVar12;
        uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar4,0);
        bVar5 = *(int *)(param_5 + 0x18) == 1;
        if ((uVar7 & 1) == 0) {
          if (!bVar5) {
            return;
          }
          *(undefined4 *)(param_5 + 0x38) = 0;
          return;
        }
      }
      else {
        *(undefined4 *)(param_5 + 0x70) = 1;
        *(undefined8 *)(param_5 + 0x44) = *(undefined8 *)(param_5 + 0x90);
        *(undefined8 *)(param_5 + 0x3c) = *(undefined8 *)(param_5 + 0x88);
        puVar1 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__;
        uVar8 = FUN_0267dbbc(param_6,*(undefined8 *)puVar2,0);
        lVar9 = *(long *)puVar3;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar9);
        }
        bVar6 = FUN_02681b9c(uVar8,0,0);
        *(byte *)(param_5 + 0x4c) = bVar6 & 1;
        uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar1,0);
        if ((uVar7 & 1) == 0) {
          param_4 = 0x3f800000;
          uVar12 = 0;
          param_2 = 0;
          param_3 = 0;
        }
        else {
          uVar12 = FUN_0267d928(param_6,*(undefined8 *)puVar1,0);
        }
        *(undefined4 *)(param_5 + 0x3c) = uVar12;
        *(undefined4 *)(param_5 + 0x40) = param_2;
        *(undefined4 *)(param_5 + 0x44) = param_3;
        *(undefined4 *)(param_5 + 0x48) = param_4;
        uVar7 = FUN_0267e21c(param_6,*(undefined8 *)puVar4,0);
        bVar5 = *(int *)(param_5 + 0x18) == 2;
        if ((uVar7 & 1) == 0) {
          if (!bVar5) {
            return;
          }
          *(undefined4 *)(param_5 + 0x38) = 0x3f800000;
          return;
        }
      }
      if (bVar5) {
        uVar12 = FUN_0267f5a0(param_6,*(undefined8 *)puVar4,0);
        *(undefined4 *)(param_5 + 0x38) = uVar12;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


