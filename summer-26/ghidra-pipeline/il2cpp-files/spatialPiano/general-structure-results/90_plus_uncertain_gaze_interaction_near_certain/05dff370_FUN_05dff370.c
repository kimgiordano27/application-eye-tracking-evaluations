/*
FUNCTION_NAME: FUN_05dff370
ENTRY_POINT: 05dff370
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 202
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void FUN_05dff370(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  byte bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_84 [4];
  
  if ((DAT_06bc3ddb & 1) == 0) {
    FUN_02f08768(Method_System_Reflection_SignatureByRefType_GetArrayRank__);
    FUN_02f08768(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                );
    FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(PTR_DAT_067c9e50);
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<TemporalAA_TaaPassData>__
                );
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__);
    FUN_02f08768(PTR_DAT_067c97a8);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02f08768(PTR_DAT_067cb280);
    FUN_02f08768(PTR_DAT_067cdbd8);
    FUN_02f08768(Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__);
    FUN_02f08768(Method_System_RuntimeTypeHandle_GetObjectData__);
    DAT_06bc3ddb = 1;
  }
  local_84[0] = 0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (*param_3 != 0) {
    lVar10 = FUN_05d4c208(*param_3,*(undefined8 *)
                                    Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    uVar5 = FUN_05de08b0(param_3 + 1,0);
    if (param_1 != 0) {
      FUN_05dffe1c(param_1,lVar10,param_1 + 0xc0,uVar5 & 1,0);
      if (*(long *)(param_1 + 0xc0) != 0) {
        uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_060f245c(uVar19,0,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)
                        Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          FUN_05dae168(&local_190,param_3,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__ + 0xe4
                      ) == 0) {
            thunk_FUN_02f6670c();
          }
          lVar13 = FUN_05d5a440(lVar10,0);
          if (lVar13 == 0) {
            uVar6 = 0;
            local_a0 = local_170;
            puVar16 = &local_c0;
            uStack_b8 = uStack_188;
            local_c0 = local_190;
            uStack_a8 = uStack_178;
            uStack_b0 = uStack_180;
          }
          else {
            local_d0 = local_170;
            uStack_e8 = uStack_188;
            local_f0 = local_190;
            uStack_d8 = uStack_178;
            uStack_e0 = uStack_180;
            if (lVar10 == 0) goto LAB_05dffcac;
            uVar6 = thunk_FUN_05d43a98(lVar13,*(undefined1 *)(lVar10 + 0x1e0),0);
            puVar16 = &local_f0;
            uVar6 = uVar6 & 1;
          }
          uStack_148 = puVar16[1];
          local_150 = *puVar16;
          uStack_138 = puVar16[3];
          uStack_140 = puVar16[2];
          local_130 = puVar16[4];
          local_120 = local_150;
          uStack_118 = uStack_148;
          uStack_110 = uStack_140;
          uStack_108 = uStack_138;
          local_100 = local_130;
          FUN_05c9caa8(&local_150,0);
          lVar17 = **(long **)(*(long *)Method_UnityEngine_UI_FontUpdateTracker_RebuildForFont__ +
                              0xb8);
          plVar12 = (long *)FUN_05ddf250(param_3,0);
          if ((lVar10 != 0) && (plVar14 = *(long **)(lVar10 + 0x1d8), plVar14 != (long *)0x0)) {
            lVar22 = *plVar12;
            lVar20 = *(long *)(param_1 + 0xb8);
            lVar15 = (**(code **)(*plVar14 + 0x1c8))
                               (plVar14,lVar22,*(undefined8 *)(*plVar14 + 0x1d0));
            if (lVar20 == lVar15) {
              plVar12 = (long *)FUN_05de1004(param_3 + 1,0);
              if (*plVar12 == 0) goto LAB_05dffcac;
              uVar19 = FUN_05d5add8(*plVar12,0);
              *(undefined8 *)(param_1 + 0xb8) = uVar19;
            }
            uVar19 = FUN_05d4d060(param_1,0);
            FUN_05c5cb48(local_84,lVar22,uVar19,0);
            local_160 = 0;
            puStack_158 = local_84;
            if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar15 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            thunk_FUN_060bed68(lVar15,0,0);
            uVar7 = FUN_05d6d114(lVar10,0);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            FUN_06116fac(lVar22,*(long *)(*(long *)
                                           Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                         + 0xb8) + 0x134,uVar7 & 1,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_067cdbd8 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              lVar15 = FUN_05c74700(0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar19 = FUN_035eb4b0(*(long *)(lVar15 + 0x10),
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_PanelEventHandler_OnElementFocus__
                                   );
              auVar26 = FUN_05d6d448(lVar10,0);
              uVar8 = FUN_05d6d540(lVar10,0);
              if (*(int *)(*(long *)PTR_DAT_067cb280 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05dddc0c(auVar26._0_8_,auVar26._8_8_,uVar8,uVar19,&local_98,0);
              if ((lVar13 == 0) ||
                 (uVar11 = FUN_05d43a98(lVar13,*(undefined1 *)(lVar10 + 0x1e0),0), (uVar11 & 1) == 0
                 )) {
                bVar23 = 2;
              }
              else {
                bVar23 = 0;
              }
              bVar2 = *(byte *)(lVar10 + 0x1ac);
              uVar8 = FUN_05d6d540(lVar10,0);
              uVar4 = local_90;
              uVar11 = local_98;
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
              uVar24 = local_98._4_4_;
              uVar25 = local_90._4_4_;
              uVar5 = FUN_05d6d5d0(lVar10,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<TemporalAA_TaaPassData>__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05dff174(uVar11 & 0xffffffff,uVar24,uVar4 & 0xffffffff,uVar25,uVar8,uVar19,
                           bVar23 | bVar2 ^ 1,uVar5 & 1);
            }
            if (uVar6 == 0) {
              uVar11 = FUN_060b5d40(0);
              if (((uVar11 & 1) == 0) || (uVar11 = FUN_05d6d2bc(lVar10,0), (uVar11 & 1) == 0)) {
                uVar11 = FUN_05d6d2bc(lVar10,0);
                if ((uVar11 & 1) == 0) {
                  iVar9 = (uint)*(byte *)(lVar10 + 0x18c) << 1;
                }
                else {
                  iVar9 = 2;
                }
                if (*(long *)(lVar10 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uVar11 = FUN_05c35d3c(*(long *)(lVar10 + 0x1a0),0);
                iVar1 = 0;
                if ((uVar11 & 1) == 0) {
                  iVar1 = iVar9;
                }
                puVar16 = (undefined8 *)FUN_05ddf250(param_3,0);
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uStack_188 = *(undefined8 *)(lVar17 + 0x30);
                local_190 = *(undefined8 *)(lVar17 + 0x28);
                uVar19 = *puVar16;
                uStack_178 = *(undefined8 *)(lVar17 + 0x40);
                uStack_180 = *(undefined8 *)(lVar17 + 0x38);
                local_170 = *(undefined8 *)(lVar17 + 0x48);
                if (*(int *)(*(long *)PTR_DAT_067c9e50 + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9e50);
                }
                local_230 = local_170;
                uStack_248 = uStack_188;
                local_250 = local_190;
                uStack_238 = uStack_178;
                uStack_240 = uStack_180;
                FUN_05caec54(0,0,0,0,uVar19,&local_250,iVar1,0,0,0);
                puVar16 = (undefined8 *)FUN_05ddf250(param_3,0);
                puVar3 = Method_System_DateTimeOffset_ValidateStyles__;
                uVar19 = *puVar16;
                if (*(int *)(*(long *)Method_System_DateTimeOffset_ValidateStyles__ + 0xe4) == 0) {
                  thunk_FUN_02f6670c(*(long *)Method_System_DateTimeOffset_ValidateStyles__);
                }
                if (DAT_06bc38b4 == '\0') {
                  FUN_02f08768(Method_System_DateTimeOffset_ValidateStyles__);
                  DAT_06bc38b4 = '\x01';
                }
                lVar13 = *(long *)puVar3;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar13 = *(long *)puVar3;
                }
                puVar3 = 
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<TemporalAA_TaaPassData>__
                ;
                lVar13 = **(long **)(lVar13 + 0xb8);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                *(undefined8 *)(lVar13 + 0x10) = uVar19;
                uVar19 = *(undefined8 *)(param_1 + 0xb8);
                uVar21 = *(undefined8 *)(param_1 + 0xc0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_05dffeac(lVar13,uVar21,uVar19,lVar17,lVar10);
                if (*(long *)(lVar10 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                FUN_05d61b54(*(long *)(lVar10 + 0x1d8),lVar17,lVar17,0);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_067c97a8 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_0610d14c(&local_190,2,0);
                local_1a0 = local_170;
                uStack_1b8 = uStack_188;
                local_1c0 = local_190;
                uStack_1a8 = uStack_178;
                uStack_1b0 = uStack_180;
                FUN_06118f90(lVar22,&local_1c0,2,0,2,3,0);
                lVar10 = *(long *)(param_1 + 0xb8);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uStack_218 = *(undefined8 *)(lVar17 + 0x30);
                local_220 = *(undefined8 *)(lVar17 + 0x28);
                uStack_208 = *(undefined8 *)(lVar17 + 0x40);
                uStack_210 = *(undefined8 *)(lVar17 + 0x38);
                local_200 = *(undefined8 *)(lVar17 + 0x48);
                uStack_1e8 = *(undefined8 *)(lVar10 + 0x30);
                local_1f0 = *(undefined8 *)(lVar10 + 0x28);
                uStack_1d8 = *(undefined8 *)(lVar10 + 0x40);
                uStack_1e0 = *(undefined8 *)(lVar10 + 0x38);
                local_1d0 = *(undefined8 *)(lVar10 + 0x48);
                FUN_0611f010(lVar22,&local_1f0,&local_220,0);
              }
            }
            else {
              if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar17 = *(long *)(*(long *)(param_1 + 0xb8) + 0x18);
              if ((lVar17 == 0) || (iVar9 = FUN_060cbf28(lVar17,0), iVar9 != 1)) {
                if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                puVar18 = (undefined4 *)(*(long *)(param_1 + 0xc0) + 0x50);
              }
              else {
                if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                puVar18 = (undefined4 *)(*(long *)(param_1 + 0xc0) + 0x54);
              }
              lVar17 = *(long *)(param_1 + 0xb8);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar8 = *puVar18;
              if (*(char *)(lVar17 + 0xa8) == '\0') {
                if (DAT_06bb8a4a == '\0') {
                  FUN_02f08768(PTR_DAT_067c9848);
                  DAT_06bb8a4a = '\x01';
                }
                uVar24 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 8);
                uVar25 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_067c9848 + 0xb8) + 0xc);
              }
              else {
                FUN_05c9cc94(&local_190,lVar17,0);
                if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uVar24 = (undefined4)local_170;
                FUN_05c9cc94(&local_190,*(long *)(param_1 + 0xb8),0);
                uVar25 = local_170._4_4_;
              }
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              uVar21 = *(undefined8 *)(param_1 + 0xb8);
              uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
              if (*(int *)(*(long *)
                            Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString64Bytes>__
                          + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_05caa088(uVar24,uVar25,0,0,lVar22,uVar21,uVar19,uVar8,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar10 = *(long *)(lVar10 + 0x1d8);
              puVar16 = (undefined8 *)FUN_05d43a80(lVar13,0);
              uVar19 = *puVar16;
              puVar16 = (undefined8 *)FUN_05d43a88(lVar13,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_05d61b54(lVar10,uVar19,*puVar16,0);
            }
            FUN_05c5cb50(local_84,0);
            return;
          }
        }
        else {
          plVar12 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,2);
          lVar10 = *(long *)(param_1 + 0xc0);
          if (lVar10 != 0) {
            uStack_188 = *(undefined8 *)(lVar10 + 0x50);
            local_190 = *(undefined8 *)(lVar10 + 0x48);
            lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)
                                         Method_System_Reflection_SignatureByRefType_GetArrayRank__,
                                        &local_190);
            if (plVar12 != (long *)0x0) {
              if ((lVar10 != 0) &&
                 (lVar13 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)
                 ) {
LAB_05dffcb4:
                uVar19 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                FUN_02f0888c(uVar19,0);
              }
              if ((int)plVar12[3] != 0) {
                plVar12[4] = lVar10;
                plVar14 = (long *)thunk_FUN_02f1863c(param_1,0);
                if (plVar14 == (long *)0x0) goto LAB_05dffcac;
                lVar10 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                if ((lVar10 != 0) &&
                   (lVar13 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar13 == 0)) goto LAB_05dffcb4;
                puVar3 = PTR_DAT_067c8f48;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                  plVar12[5] = lVar10;
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  FUN_060a9df0(*(undefined8 *)Method_System_RuntimeTypeHandle_GetObjectData__,
                               plVar12,0);
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02f089d0();
            }
          }
        }
      }
    }
  }
LAB_05dffcac:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


