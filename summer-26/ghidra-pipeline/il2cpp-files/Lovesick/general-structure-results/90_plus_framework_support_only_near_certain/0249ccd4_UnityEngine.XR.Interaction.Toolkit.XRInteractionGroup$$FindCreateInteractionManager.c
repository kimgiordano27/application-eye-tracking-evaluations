/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractionGroup$$FindCreateInteractionManager
ENTRY_POINT: 0249ccd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_Interaction_Toolkit_XRInteractionGroup__FindCreateInteractionManager(void)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int in_w8;
  long *unaff_x19;
  long *unaff_x21;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_0268fd4c();
    if (lVar5 == 0) goto LAB_0249cf10;
    lVar5 = FUN_010e5800(lVar5,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
    unaff_x19[0xdd] = lVar5;
  }
  lVar5 = unaff_x19[0x73];
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(lVar5,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3618);
    if (lVar5 == 0) goto LAB_0249cf10;
    FUN_02669c18(lVar5,0);
    unaff_x19[0x73] = lVar5;
    FUN_0268c458(lVar5,0x3d,0);
    puVar3 = UnityEngine_Hash128___TypeInfo;
    if (unaff_x19[0xdd] == 0) goto LAB_0249cf10;
    FUN_02666150(unaff_x19[0xdd],unaff_x19[0x73],0);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar5 == 0) goto LAB_0249cf10;
    FUN_024f15bc();
    unaff_x19[0x6c] = lVar5;
  }
  puVar3 = StringLiteral_10650;
  if (unaff_x19[0xdd] != 0) {
    FUN_0268c458(unaff_x19[0xdd],0x3f,0);
    FUN_024df8b8();
    (**(code **)(*unaff_x19 + 0x6c8))();
    if (unaff_x19[0x8e] == 0) {
      lVar5 = FUN_00da4fb8(*(undefined8 *)
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<TileData>__
                           ,*(undefined4 *)((long)unaff_x19 + 0x6f4));
      unaff_x19[0x8e] = lVar5;
    }
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      FUN_024aad34(lVar5,0);
      unaff_x19[200] = lVar5;
      *(undefined1 *)(unaff_x19 + 0xde) = 1;
      lVar5 = FUN_010c3404();
      if (lVar5 != 0) {
        uVar4 = *(ulong *)(lVar5 + 0x18);
        if (uVar4 != 0) {
          if (unaff_x19[0xe0] == 0) goto LAB_0249cf10;
          iVar1 = (int)uVar4 + 1;
          if (*(int *)(unaff_x19[0xe0] + 0x18) < iVar1) {
            FUN_010afdd4(unaff_x19 + 0xe0,iVar1,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000937_PostfixBurstDelegate_var
                        );
          }
          if (0 < (int)uVar4) {
            uVar9 = 0;
            do {
              if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_0249cf0c:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar10 = (long *)unaff_x19[0xe0];
              if (plVar10 == (long *)0x0) goto LAB_0249cf10;
              lVar8 = *(long *)(lVar5 + 0x20 + uVar9 * 8);
              if ((lVar8 != 0) &&
                 (lVar6 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
                uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar7,0);
              }
              uVar2 = uVar9 + 1;
              if (*(uint *)(plVar10 + 3) <= uVar2) goto LAB_0249cf0c;
              plVar10[uVar9 + 5] = lVar8;
              uVar9 = uVar2;
            } while ((uVar4 & 0xffffffff) != uVar2);
          }
        }
        *(undefined1 *)(unaff_x19 + 0x6d) = 1;
        *(undefined1 *)((long)unaff_x19 + 0x3f5) = 1;
        return;
      }
    }
  }
LAB_0249cf10:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


