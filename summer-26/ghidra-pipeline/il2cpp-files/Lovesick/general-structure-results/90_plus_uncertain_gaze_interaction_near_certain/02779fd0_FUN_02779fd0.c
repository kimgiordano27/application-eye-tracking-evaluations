/*
FUNCTION_NAME: FUN_02779fd0
ENTRY_POINT: 02779fd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 218
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_02779fd0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined4 uStack_27f;
  undefined3 uStack_27b;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_250;
  undefined4 uStack_24f;
  undefined3 uStack_24b;
  undefined8 local_240;
  long lStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  long local_200;
  ulong uStack_1f8;
  long local_1e0;
  long lStack_1d8;
  long local_1c0;
  long lStack_1b8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar14 = param_1;
  if ((DAT_0378862b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_DivInstruction_DivInt16_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8869);
    thunk_FUN_00d48444(StringLiteral_9204);
    thunk_FUN_00d48444(Autohand_HandGameObjectEvent_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_STMAudioClipData>_get_Item__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiPathDataChannel<int,_int>_Evaluate__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
    thunk_FUN_00d48444(Meta_WitAi_Requests_VRequest_<>c__DisplayClass99_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_Resize<OVRPlugin_Quatf>__);
    thunk_FUN_00d48444(PTR_DAT_033eff40);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<STMSoundClipData_AutoClip>_Find__);
    thunk_FUN_00d48444(PTR_DAT_033ef080);
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__
                      );
    thunk_FUN_00d48444(StringLiteral_4895);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_Clear__
                      );
    thunk_FUN_00d48444(Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
    thunk_FUN_00d48444(System_Func<float[],_Vector2>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Expression_TypeIs__);
    lVar14 = thunk_FUN_00d48444(
                               Method_System_Collections_Generic_Dictionary<string,_JSONNode>_TryGetValue__
                               );
    DAT_0378862b = 1;
  }
  local_b0 = 0;
  lStack_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  lStack_d8 = 0;
  local_e0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar16 = *(long *)(param_1 + 0x50);
  uVar19 = *(int *)(param_1 + 0x60) + 1;
  *(uint *)(param_1 + 0x60) = uVar19;
  *(uint *)(param_1 + 0x68) = uVar19;
  if (lVar16 != 0) {
    uVar18 = (uint)*(undefined8 *)(lVar16 + 0x18);
    iVar13 = 0;
    if ((long)(int)uVar18 != 0) {
      iVar13 = (int)((long)(ulong)uVar19 / (long)(int)uVar18);
    }
    uVar19 = uVar19 - iVar13 * uVar18;
    if (uVar18 <= uVar19) {
UnityEngine_UI_Slider__set_onValueChanged:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    FUN_0277ce24(lVar14,*(undefined4 *)(lVar16 + (long)(int)uVar19 * 4 + 0x20));
    lVar14 = *(long *)(param_1 + 0x50);
    if (lVar14 == 0) goto LAB_0277a7a4;
    if (*(uint *)(lVar14 + 0x18) <= uVar19) goto UnityEngine_UI_Slider__set_onValueChanged;
    *(undefined4 *)(lVar14 + (long)(int)uVar19 * 4 + 0x20) = 0;
  }
  lVar14 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 100) = 1;
  if (lVar14 != 0) {
    uVar19 = *(uint *)(lVar14 + 0x18);
    uVar18 = 0;
    if (uVar19 != 0) {
      uVar18 = *(uint *)(param_1 + 0x60) / uVar19;
    }
    FUN_0132138c(lVar14,*(uint *)(param_1 + 0x60) - uVar18 * uVar19,&local_240,
                 *(undefined8 *)
                  Method_Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_OnApplicationQuitting__);
    lVar14 = local_240;
    puVar8 = StringLiteral_4895;
    puVar7 = Method_System_Array_Resize<OVRPlugin_Quatf>__;
    puVar6 = Method_Obi_ObiPathDataChannel<int,_int>_Evaluate__;
    puVar20 = (undefined8 *)
              Method_System_Collections_Generic_Dictionary<string,_STMAudioClipData>_get_Item__;
    puVar5 = System_Linq_Expressions_Interpreter_DivInstruction_DivInt16_TypeInfo;
    puVar4 = Autohand_HandGameObjectEvent_TypeInfo;
    puVar3 = PTR_DAT_033eff40;
    if (local_240 != 0) {
      FUN_01323390(local_240,&local_240,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<STMSoundClipData_AutoClip>_Find__);
      uStack_c8 = CONCAT44(uStack_224,uStack_228);
      local_d0 = CONCAT44(uStack_22c,local_230);
      uStack_b8 = CONCAT44(uStack_214,uStack_218);
      local_c0 = CONCAT44(uStack_21c,uStack_220);
      local_b0 = CONCAT44(uStack_20c,uStack_210);
      lStack_d8 = lStack_238;
      local_e0 = local_240;
      while (uVar15 = FUN_012b894c(&local_e0,*(undefined8 *)puVar4), (uVar15 & 1) != 0) {
        FUN_00ce49fc(&local_240,&local_e0,*(undefined8 *)puVar6);
        local_f0 = CONCAT44(uStack_22c,local_230);
        lVar16 = CONCAT44(uStack_224,uStack_228);
        lStack_f8 = lStack_238;
        local_100 = local_240;
        if ((uStack_220 & 1) == 0) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar16 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0x20) + 0x40);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lStack_1d8 = lStack_238;
          local_1e0 = local_240;
          FUN_02779754(lVar16,&local_1e0);
        }
        else {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar16 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar16 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lStack_1b8 = lStack_238;
          local_1c0 = local_240;
          FUN_02779754(lVar16,&local_1c0);
        }
      }
      FUN_012b8948(&local_e0,*(undefined8 *)puVar5);
      lVar16 = *(long *)puVar7;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar15 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
      if ((uVar15 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar13 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar13) {
          FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar13,0);
        }
      }
      if ((*(long *)(param_1 + 0x40) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
        uVar19 = *(uint *)(*(long *)(param_1 + 0x40) + 0x18);
        uVar18 = 0;
        if (uVar19 != 0) {
          uVar18 = *(uint *)(param_1 + 0x60) / uVar19;
        }
        FUN_0132138c(*(long *)(param_1 + 0x48),*(uint *)(param_1 + 0x60) - uVar18 * uVar19,
                     &local_240,*(undefined8 *)puVar8);
        lVar16 = local_240;
        if (local_240 != 0) {
          FUN_01323390(local_240,&local_240,*(undefined8 *)puVar3);
          memcpy(&local_160,&local_240,0x60);
          puVar22 = (undefined8 *)StringLiteral_9204;
          do {
            do {
              uVar15 = FUN_012b894c(&local_160,*puVar22);
              if ((uVar15 & 1) == 0) {
                FUN_012b8948(&local_160,*(undefined8 *)StringLiteral_8869);
                lVar14 = *(long *)Meta_WitAi_Requests_VRequest_<>c__DisplayClass99_0_TypeInfo;
                *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                uVar15 = FUN_00da5b18(*(undefined8 *)
                                       (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
                if ((uVar15 & 1) == 0) {
                  *(undefined4 *)(lVar16 + 0x18) = 0;
                }
                else {
                  iVar13 = *(int *)(lVar16 + 0x18);
                  *(undefined4 *)(lVar16 + 0x18) = 0;
                  if (0 < iVar13) {
                    FUN_0179519c(*(undefined8 *)(lVar16 + 0x10),0,iVar13,0);
                  }
                }
                FUN_0277ceac(param_1);
                if (*(long *)(lVar2 + 0x28) == local_68) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              FUN_00ce4afc(&local_240,&local_160,*puVar20);
              uVar15 = uStack_1f8;
              lVar12 = local_200;
              uVar11 = uStack_218;
              uVar10 = local_230;
              lVar9 = lStack_238;
              uStack_78 = CONCAT44(uStack_220,uStack_224);
              local_80 = CONCAT44(uStack_228,uStack_22c);
              local_70 = uStack_21c;
              uStack_98 = CONCAT44(uStack_208,uStack_20c);
              local_a0 = CONCAT44(uStack_210,uStack_214);
              local_90 = local_204;
              if (lStack_238 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            } while ((*(int *)(lStack_238 + 0x5c) != (int)local_240) ||
                    (*(int *)(lStack_238 + 0x58) != local_240._4_4_));
            if (*(long *)(lStack_238 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar17 = *(long *)(*(long *)(lStack_238 + 0x50) + 0x18);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            puVar23 = (undefined8 *)(lStack_238 + 0x18);
            puVar20 = (undefined8 *)(lStack_238 + 0x1c);
            FUN_01344298(&local_170,*(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),
                         *(undefined4 *)puVar23,*(undefined4 *)puVar20,
                         *(undefined8 *)
                          Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__)
            ;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar17 = *(long *)(lVar12 + 0x18);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01344298(&local_180,*(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),
                         uVar10,*(undefined4 *)puVar20,
                         *(undefined8 *)
                          Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__)
            ;
            DigitalOpus_MB_Core_MatAndTransformToMerged__GetMaterialName
                      (&local_180,local_170,uStack_168,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<MB3_MultiMeshCombiner_CombinedMesh>_Clear__
                      );
            if (*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01282738(*(long *)(lVar12 + 0x18),uVar10,*(undefined4 *)puVar20,
                         *(undefined8 *)
                          Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                        );
            puVar3 = Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__;
            if ((uVar15 & 1) != 0) {
              if (*(long *)(lVar9 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar17 = *(long *)(*(long *)(lVar9 + 0x50) + 0x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01344298(&local_190,*(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),
                           *(undefined4 *)(lVar9 + 0x30),*(undefined4 *)(lVar9 + 0x34),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
              lVar17 = *(long *)(lVar12 + 0x20);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01344298(&local_1a0,*(undefined8 *)(lVar17 + 0x20),*(undefined8 *)(lVar17 + 0x28),
                           uVar11,*(undefined4 *)(lVar9 + 0x34),*(undefined8 *)puVar3);
              iVar13 = FUN_01344a5c(&local_1a0,
                                    *(undefined8 *)
                                     Method_System_Linq_Expressions_Expression_TypeIs__);
              if (0 < iVar13) {
                uVar1 = *(undefined4 *)puVar23;
                iVar21 = 0;
                do {
                  DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                            (&local_190,iVar21,&local_240,
                             *(undefined8 *)System_Func<float[],_Vector2>_TypeInfo);
                  local_240 = CONCAT62(local_240._2_6_,
                                       (short)local_240 + ((short)uVar10 - (short)uVar1));
                  FUN_013444d4(&local_1a0,iVar21,&local_240,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<string,_JSONNode>_TryGetValue__
                              );
                  iVar21 = iVar21 + 1;
                } while (iVar13 != iVar21);
              }
              if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_01282738(*(long *)(lVar12 + 0x20),uVar11,*(undefined4 *)(lVar9 + 0x34),
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__)
              ;
              puVar22 = (undefined8 *)StringLiteral_9204;
            }
            puVar3 = System_Collections_Generic_Dictionary<string,_string>_TypeInfo;
            uStack_258 = *(undefined8 *)(lVar9 + 0x50);
            uStack_268 = *(undefined8 *)(lVar9 + 0x20);
            local_270 = *puVar23;
            local_260 = *(undefined8 *)(lVar9 + 0x28);
            local_250 = 1;
            uStack_24b = 0;
            uStack_24f = 0;
            FUN_00ce442c(lVar14,&local_270,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<string,_string>_TypeInfo);
            uStack_288 = *(undefined8 *)(lVar9 + 0x50);
            local_290 = *(undefined8 *)(lVar9 + 0x40);
            uStack_298 = *(undefined8 *)(lVar9 + 0x38);
            local_2a0 = *(undefined8 *)(lVar9 + 0x30);
            local_280 = 0;
            uStack_27b = 0;
            uStack_27f = 0;
            FUN_00ce442c(lVar14,&local_2a0,*(undefined8 *)puVar3);
            *(undefined4 *)(lVar9 + 0x18) = uVar10;
            *(undefined4 *)(lVar9 + 0x2c) = local_70;
            *(undefined8 *)(lVar9 + 0x24) = uStack_78;
            *puVar20 = local_80;
            *(undefined4 *)(lVar9 + 0x30) = uVar11;
            *(long *)(lVar9 + 0x50) = lVar12;
            *(undefined4 *)(lVar9 + 0x5c) = 0;
            *(undefined4 *)(lVar9 + 0x44) = local_90;
            *(undefined8 *)(lVar9 + 0x3c) = uStack_98;
            *(undefined8 *)(lVar9 + 0x34) = local_a0;
            puVar20 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_STMAudioClipData>_get_Item__
            ;
          } while( true );
        }
      }
    }
  }
LAB_0277a7a4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


