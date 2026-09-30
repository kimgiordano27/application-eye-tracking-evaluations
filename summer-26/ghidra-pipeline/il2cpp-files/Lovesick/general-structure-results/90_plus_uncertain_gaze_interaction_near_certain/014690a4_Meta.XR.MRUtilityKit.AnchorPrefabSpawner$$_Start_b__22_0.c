/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$<Start>b__22_0
ENTRY_POINT: 014690a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 179
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


undefined1  [16]
Meta_XR_MRUtilityKit_AnchorPrefabSpawner__<Start>b__22_0
          (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  thunk_FUN_00d48444(SharedMaterialDataStorage_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__
                    );
  thunk_FUN_00d48444(StringLiteral_5916);
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__);
  thunk_FUN_00d48444(CollisionSound_<SoundPlayBuffer>d__14_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033ec030);
  thunk_FUN_00d48444(StringLiteral_1362);
  thunk_FUN_00d48444(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
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
  thunk_FUN_00d48444(System_Collections_Generic_ICollection<TimelineClip>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                    );
  *(undefined1 *)(unaff_x21 + 0xaca) = 1;
  puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x20 == 0) {
LAB_014695e8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(char *)(unaff_x20 + 0x18) != '\0') {
    return ZEXT816(0x3f000000);
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
  uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_033ec030,0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
    uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__,
                         0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c();
      if ((uVar7 & 1) != 0) {
        if (unaff_x19 == 0) goto LAB_014695e8;
        uVar7 = FUN_0267e21c();
        if ((uVar7 & 1) != 0) {
          auVar9 = FUN_0267d928();
          uVar15 = auVar9._8_8_;
          uVar7 = FUN_0267e21c();
          auVar3._8_8_ = uVar15;
          auVar3._0_8_ = auVar9._0_8_;
          if ((uVar7 & 1) != 0) {
            FUN_0267f5a0();
            auVar1._8_8_ = uVar15;
            auVar1._0_8_ = auVar9._0_8_;
            return auVar1;
          }
          return auVar3;
        }
      }
      goto LAB_0146958c;
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
    uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)
                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                         ,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c();
      if ((uVar7 & 1) != 0) {
        if (unaff_x19 == 0) goto LAB_014695e8;
        uVar7 = FUN_0267e21c();
        if ((uVar7 & 1) != 0) {
          auVar10 = FUN_0267f5a0();
          uVar15 = auVar10._8_8_;
          uVar7 = FUN_0267e21c();
          auVar9._8_8_ = uVar15;
          auVar9._0_8_ = auVar10._0_8_;
          if ((uVar7 & 1) != 0) {
            FUN_0267f5a0();
            auVar2._8_8_ = uVar15;
            auVar2._0_8_ = auVar10._0_8_;
            return auVar2;
          }
          return auVar9;
        }
      }
      goto LAB_0146958c;
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
    uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)UnityEngine_InputSystem_InputProcessor_TypeInfo,0);
    uVar14 = 0;
    if ((uVar7 & 1) != 0) {
      return ZEXT816(0);
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
    uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),*(undefined8 *)StringLiteral_5916,0);
    if ((uVar7 & 1) != 0) goto LAB_014693ec;
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
    uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),
                         *(undefined8 *)
                          Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                         ,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_014695e8;
      uVar7 = FUN_015fe250(*(long *)(unaff_x20 + 0x10),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                           ,0);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar14;
      if ((uVar7 & 1) != 0) {
        return auVar10 << 0x40;
      }
    }
    else {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar7 = FUN_02681b9c();
      if ((uVar7 & 1) != 0) {
        if (unaff_x19 == 0) goto LAB_014695e8;
        uVar7 = FUN_0267e21c();
        if ((uVar7 & 1) != 0) {
          uVar7 = FUN_0267e21c();
          if (((uVar7 & 1) == 0) || (uVar7 = FUN_0267e21c(), (uVar7 & 1) == 0)) {
            auVar9 = FUN_0267f5a0();
            return auVar9;
          }
          fVar8 = (float)FUN_0267d928();
          fVar11 = param_2;
          fVar12 = param_3;
          fVar13 = param_4;
          auVar9 = FUN_0267d928();
          uVar15 = auVar9._8_8_;
          auVar10 = FUN_0267f5a0();
          auVar5._8_8_ = uVar15;
          auVar5._0_8_ = auVar9._0_8_;
          auVar4._8_8_ = uVar15;
          auVar4._0_8_ = auVar9._0_8_;
          if (DAT_028aa020 <=
              param_4 * param_4 + param_3 * param_3 + fVar8 * fVar8 + param_2 * param_2) {
            return auVar4;
          }
          fVar8 = auVar9._0_4_ + -1.0;
          if ((fVar13 + -1.0) * (fVar13 + -1.0) +
              (fVar12 + -1.0) * (fVar12 + -1.0) + fVar8 * fVar8 + (fVar11 + -1.0) * (fVar11 + -1.0)
              < DAT_028aa020) {
            return auVar10;
          }
          return auVar5;
        }
      }
    }
  }
  else {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_02681b9c();
    if ((uVar7 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_014695e8;
      uVar7 = FUN_0267e21c();
      if ((uVar7 & 1) != 0) goto LAB_014693ec;
    }
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_02681b9c();
    if ((uVar7 & 1) != 0) {
      if (unaff_x19 == 0) goto LAB_014695e8;
      uVar7 = FUN_0267e21c();
      if ((uVar7 & 1) != 0) {
LAB_014693ec:
        return ZEXT816(0x3f800000);
      }
    }
  }
LAB_0146958c:
  return ZEXT816(0x3f800000);
}


