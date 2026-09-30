/*
FUNCTION_NAME: FUN_0249cb70
ENTRY_POINT: 0249cb70
PROGRAM: Lovesick-libil2cpp.so
SCORE: 213
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0249cb70(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long local_48;
  
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar3 = PTR_DAT_033eb500;
  if ((DAT_03782603 & 1) == 0) {
    thunk_FUN_00d48444(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000937_PostfixBurstDelegate_var
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleValue>_get_Count__);
    thunk_FUN_00d48444(PTR_DAT_033eb500);
    thunk_FUN_00d48444(StringLiteral_7419);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>__ctor__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10650);
    thunk_FUN_00d48444(UnityEngine_Hash128___TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<TileData>__
                      );
    DAT_03782603 = 1;
  }
  FUN_010c2c5c(param_1,&local_48,*(undefined8 *)puVar3);
  lVar6 = local_48;
  param_1[0xdc] = local_48;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_0268fd4c(param_1,0);
    if (lVar6 == 0) goto LAB_0249cf10;
    lVar6 = FUN_010e5800(lVar6,*(undefined8 *)
                                Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>__ctor__
                        );
    param_1[0xdc] = lVar6;
  }
  puVar3 = Method_System_Collections_Generic_List<StyleValue>_get_Count__;
  lVar6 = FUN_024c93e0(param_1,0);
  param_1[0x6f] = lVar6;
  lVar6 = FUN_0249b7f8(param_1);
  param_1[0x6e] = lVar6;
  FUN_010c2c5c(param_1,&local_48,*(undefined8 *)puVar3);
  param_1[0xdd] = local_48;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(local_48,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_0268fd4c(param_1,0);
    if (lVar6 == 0) goto LAB_0249cf10;
    lVar6 = FUN_010e5800(lVar6,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    param_1[0xdd] = lVar6;
  }
  lVar6 = param_1[0x73];
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_0268b4e0(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
    if (lVar6 == 0) goto LAB_0249cf10;
    FUN_02669c18(lVar6,0);
    param_1[0x73] = lVar6;
    FUN_0268c458(lVar6,0x3d,0);
    puVar3 = UnityEngine_Hash128___TypeInfo;
    if (param_1[0xdd] == 0) goto LAB_0249cf10;
    FUN_02666150(param_1[0xdd],param_1[0x73],0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar6 == 0) goto LAB_0249cf10;
    FUN_024f15bc(lVar6,param_1,0);
    param_1[0x6c] = lVar6;
  }
  puVar3 = StringLiteral_10650;
  if (param_1[0xdd] != 0) {
    FUN_0268c458(param_1[0xdd],0x3f,0);
    FUN_024df8b8(param_1,0);
    (**(code **)(*param_1 + 0x6c8))(param_1,*(undefined8 *)(*param_1 + 0x6d0));
    if (param_1[0x8e] == 0) {
      lVar6 = FUN_00da4fb8(*(undefined8 *)
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<TileData>__
                           ,*(undefined4 *)((long)param_1 + 0x6f4));
      param_1[0x8e] = lVar6;
    }
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = StringLiteral_7419;
    if (lVar6 != 0) {
      FUN_024aad34(lVar6,0);
      param_1[200] = lVar6;
      *(undefined1 *)(param_1 + 0xde) = 1;
      lVar6 = FUN_010c3404(param_1,*(undefined8 *)puVar3);
      if (lVar6 != 0) {
        uVar5 = *(ulong *)(lVar6 + 0x18);
        if (uVar5 != 0) {
          if (param_1[0xe0] == 0) goto LAB_0249cf10;
          iVar1 = (int)uVar5 + 1;
          if (*(int *)(param_1[0xe0] + 0x18) < iVar1) {
            FUN_010afdd4(param_1 + 0xe0,iVar1,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000937_PostfixBurstDelegate_var
                        );
          }
          if (0 < (int)uVar5) {
            uVar10 = 0;
            do {
              if (*(uint *)(lVar6 + 0x18) <= uVar10) {
LAB_0249cf0c:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar11 = (long *)param_1[0xe0];
              if (plVar11 == (long *)0x0) goto LAB_0249cf10;
              lVar9 = *(long *)(lVar6 + 0x20 + uVar10 * 8);
              if ((lVar9 != 0) &&
                 (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
                uVar8 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar8,0);
              }
              uVar2 = uVar10 + 1;
              if (*(uint *)(plVar11 + 3) <= uVar2) goto LAB_0249cf0c;
              plVar11[uVar10 + 5] = lVar9;
              uVar10 = uVar2;
            } while ((uVar5 & 0xffffffff) != uVar2);
          }
        }
        *(undefined1 *)(param_1 + 0x6d) = 1;
        *(undefined1 *)((long)param_1 + 0x3f5) = 1;
        return;
      }
    }
  }
LAB_0249cf10:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


