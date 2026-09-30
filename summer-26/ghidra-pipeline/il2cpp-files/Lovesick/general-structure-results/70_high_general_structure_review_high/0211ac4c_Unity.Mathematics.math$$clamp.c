/*
FUNCTION_NAME: Unity.Mathematics.math$$clamp
ENTRY_POINT: 0211ac4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_math__clamp(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *puVar19;
  ulong uVar20;
  uint uVar21;
  undefined8 *unaff_x27;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long *in_stack_00000028;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  int iStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_00000330;
  long in_stack_00000370;
  long in_stack_00000410;
  long in_stack_00000450;
  
  puVar19 = *(undefined8 **)(unaff_x19 + 0x618);
  FUN_01320e50(param_2,*param_1);
  lVar4 = thunk_FUN_00d62348(*puVar19);
  puVar12 = PTR_DAT_033f4ae0;
  if (lVar4 != 0) {
    FUN_01320e50(lVar4,*(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
    puVar12 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_InstantiateLayout__;
    if (lVar5 != 0) {
      FUN_01320e50(lVar5,*(undefined8 *)
                          Method_System_Collections_Generic_List<List<InputBinding>>__ctor__);
      lVar14 = *in_stack_00000028;
      if ((lVar14 == 0) || (uVar17 = *(ulong *)(lVar14 + 0x18), (int)uVar17 < 1)) {
LAB_0211b010:
        lVar14 = in_stack_00000028[1];
        if ((lVar14 == 0) || (uVar17 = *(ulong *)(lVar14 + 0x18), (int)uVar17 < 1)) {
LAB_0211b480:
          puVar1 = Method_System_UInt16_CompareTo__;
          puVar12 = UnityEngine_Rendering_Universal_RenderingData_TypeInfo;
          if (0 < *(int *)(param_2 + 0x18)) {
            iVar2 = 0;
            do {
              FUN_0132138c(param_2,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
              lVar14 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
              FUN_0132138c(lVar4,iVar2,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
              if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
              lVar8 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                                   *(undefined8 *)puVar12);
              FUN_0132138c(lVar5,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
              if ((CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) ||
                 (uVar7 = FUN_01325140(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),
                                       *(undefined8 *)puVar1), lVar14 == 0)) goto LAB_0211b5a0;
              *(long *)(lVar14 + 0x28) = lVar8;
              *(undefined8 *)(lVar14 + 0x30) = uVar7;
              if (lVar8 == 0) goto LAB_0211b5a0;
              iVar3 = *(int *)(lVar8 + 0x18);
              if (0 < iVar3) {
                lVar9 = 0;
                do {
                  lVar18 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
                  if (lVar18 == 0) goto LAB_0211b5a0;
                  lVar9 = lVar9 + 1;
                  *(long *)(lVar18 + 200) = lVar14;
                } while ((int)lVar9 < iVar3);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_2 + 0x18));
          }
          FUN_01325140(param_2,*(undefined8 *)
                                Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                      );
          return;
        }
        uVar20 = 0;
        do {
          if (*(uint *)(lVar14 + 0x18) <= uVar20) {
LAB_0211b5a4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar14 = lVar14 + uVar20 * 0x20;
          uVar7 = *(undefined8 *)(lVar14 + 0x20);
          uVar13 = *(undefined8 *)(lVar14 + 0x28);
          lVar8 = *(long *)(lVar14 + 0x30);
          lVar14 = *(long *)(lVar14 + 0x38);
          uVar6 = FUN_015ff8a0(uVar7,0);
          if ((uVar6 & 1) != 0) {
            iStack00000000000001a0 = (int)uVar20 + 1;
            uVar7 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      );
            uVar7 = thunk_FUN_00d61fa0(uVar7,&stack0x000001a0);
            puVar12 = Method_System_Collections_Generic_List<KerningPair>__ctor__;
LAB_0211b680:
            uVar13 = thunk_FUN_00d48444(puVar12);
            uVar7 = FUN_015f6780(uVar13,uVar7,0);
LAB_0211b5e8:
            thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
            uVar13 = thunk_FUN_00d62348();
            FUN_00ac2be8();
            FUN_017713a8(uVar13,uVar7,0);
            uVar7 = thunk_FUN_00d48444(
                                      Method_DigitalOpus_MB_Core_MB3_MeshBakerGrouperBehaviour_<>c__DisplayClass2_0_<DoClustering>b__0__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar13,uVar7);
          }
          if (0 < *(int *)(param_2 + 0x18)) {
            iVar2 = 0;
            do {
              FUN_0132138c(param_2,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
              if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
              iVar3 = FUN_015fd224(*(undefined8 *)
                                    (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10)
                                   ,uVar7,3,0);
              if (iVar3 == 0) {
                FUN_0132138c(param_2,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
                if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto LAB_0211b1e4;
                break;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_2 + 0x18));
          }
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                                    );
          if (lVar9 == 0) break;
          *(undefined4 *)(lVar9 + 0x58) = 0xffffffff;
          FUN_017b46ec(lVar9,0);
          *(undefined8 *)(lVar9 + 0x10) = uVar7;
          uVar6 = FUN_015ff8a0(uVar13,0);
          uVar11 = 0;
          if ((uVar6 & 1) == 0) {
            uVar11 = uVar13;
          }
          *(undefined8 *)(lVar9 + 0x18) = uVar11;
          iVar2 = *(int *)(param_2 + 0x18);
          FUN_00c5cd68(param_2,lVar9,
                       *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
          if (lVar9 == 0) break;
          FUN_01320e50(lVar9,*(undefined8 *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
          FUN_00c5cf58(lVar4,lVar9,*(undefined8 *)System_Nullable<bool>_var);
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__
                                    );
          if (lVar9 == 0) break;
          FUN_01320e50(lVar9,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__)
          ;
          FUN_00c5d148(lVar5,lVar9,*(undefined8 *)PTR_DAT_033f0e00);
LAB_0211b1e4:
          if (lVar8 != 0) {
            if (lVar8 == 0) break;
            uVar6 = *(ulong *)(lVar8 + 0x18);
            if (0 < (int)uVar6) {
              uVar15 = 0;
              do {
                if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_0211b5a4;
                memcpy(&stack0x00000330,(void *)(lVar8 + uVar15 * 0x48 + 0x20),0x48);
                uVar10 = FUN_015ff8a0(in_stack_00000330,0);
                if ((uVar10 & 1) != 0) {
                  iStack00000000000001a0 = (int)uVar20 + 1;
                  uVar13 = thunk_FUN_00d48444(
                                             Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                             );
                  uVar13 = thunk_FUN_00d61fa0(uVar13,&stack0x000001a0);
                  uVar11 = thunk_FUN_00d48444(
                                             Method_System_Collections_Generic_Dictionary<string,_GSTU_Cell>_get_Item__
                                             );
                  uVar7 = FUN_01600b5c(uVar11,uVar13,uVar7,0);
                  goto LAB_0211b5e8;
                }
                lVar9 = FUN_0211e494(&stack0x00000330,0);
                FUN_0132138c(lVar4,iVar2,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
                if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
                FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),lVar9,
                             *(undefined8 *)PTR_DAT_033f5968);
                if (in_stack_00000370 != 0) {
                  FUN_0132138c(lVar5,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
                  if (0 < (int)*(ulong *)(in_stack_00000370 + 0x18)) {
                    lVar18 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
                    uVar10 = 0;
                    uVar16 = *(ulong *)(in_stack_00000370 + 0x18) & 0xffffffff;
                    puVar19 = (undefined8 *)(in_stack_00000370 + 0x20);
                    do {
                      if (uVar16 <= uVar10) goto LAB_0211b5a4;
                      uVar13 = puVar19[4];
                      uVar22 = puVar19[7];
                      uVar11 = puVar19[6];
                      uVar24 = puVar19[1];
                      uVar23 = *puVar19;
                      uVar26 = puVar19[3];
                      uVar25 = puVar19[2];
                      unaff_x27[0x3f] = puVar19[5];
                      unaff_x27[0x3e] = uVar13;
                      unaff_x27[0x41] = uVar22;
                      unaff_x27[0x40] = uVar11;
                      unaff_x27[0x3b] = uVar24;
                      unaff_x27[0x3a] = uVar23;
                      unaff_x27[0x3d] = uVar26;
                      unaff_x27[0x3c] = uVar25;
                      FUN_0211e2ec(&stack0x000001a0,&stack0x000002f0);
                      unaff_x27[0x35] = unaff_x27[0x11];
                      unaff_x27[0x34] = unaff_x27[0x10];
                      unaff_x27[0x37] = unaff_x27[0x13];
                      unaff_x27[0x36] = unaff_x27[0x12];
                      unaff_x27[0x39] = unaff_x27[0x15];
                      unaff_x27[0x38] = unaff_x27[0x14];
                      unaff_x27[0x31] = in_stack_000001e0;
                      unaff_x27[0x30] = in_stack_000001d8;
                      unaff_x27[0x33] = in_stack_000001f0;
                      unaff_x27[0x32] = in_stack_000001e8;
                      if (lVar9 == 0) goto LAB_0211b5a0;
                      uVar13 = *(undefined8 *)(lVar9 + 0x10);
                      unaff_x27[0x11] = unaff_x27[0x35];
                      unaff_x27[0x10] = unaff_x27[0x34];
                      unaff_x27[0x13] = unaff_x27[0x37];
                      unaff_x27[0x12] = unaff_x27[0x36];
                      unaff_x27[0x15] = unaff_x27[0x39];
                      unaff_x27[0x14] = unaff_x27[0x38];
                      unaff_x27[0xd] = unaff_x27[0x31];
                      unaff_x27[0xc] = unaff_x27[0x30];
                      unaff_x27[0xf] = unaff_x27[0x33];
                      unaff_x27[0xe] = unaff_x27[0x32];
                      if (lVar18 == 0) goto LAB_0211b5a0;
                      in_stack_000000c8 = unaff_x27[0x11];
                      in_stack_000000c0 = unaff_x27[0x10];
                      in_stack_000000d8 = unaff_x27[0x13];
                      in_stack_000000d0 = unaff_x27[0x12];
                      in_stack_000000e8 = unaff_x27[0x15];
                      in_stack_000000e0 = unaff_x27[0x14];
                      in_stack_00000100 = unaff_x27[0xd];
                      in_stack_000000f8 = unaff_x27[0xc];
                      in_stack_00000110 = unaff_x27[0xf];
                      in_stack_00000108 = unaff_x27[0xe];
                      in_stack_000000f0 = uVar13;
                      FUN_00c5d528(lVar18,&stack0x000000c0,*(undefined8 *)puVar12);
                      uVar16 = (ulong)*(uint *)(in_stack_00000370 + 0x18);
                      uVar10 = uVar10 + 1;
                      puVar19 = puVar19 + 8;
                    } while ((long)uVar10 < (long)(int)*(uint *)(in_stack_00000370 + 0x18));
                  }
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 != (uVar6 & 0xffffffff));
            }
          }
          if (lVar14 == 0) {
            uVar21 = 0;
          }
          else {
            if (lVar14 == 0) break;
            uVar21 = *(uint *)(lVar14 + 0x18);
          }
          FUN_0132138c(lVar5,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
          if (0 < (int)uVar21) {
            if (lVar14 == 0) break;
            lVar8 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
            uVar6 = 0;
            puVar19 = (undefined8 *)(lVar14 + 0x20);
            do {
              if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_0211b5a4;
              uVar7 = puVar19[4];
              uVar11 = puVar19[7];
              uVar13 = puVar19[6];
              uVar23 = puVar19[1];
              uVar22 = *puVar19;
              uVar25 = puVar19[3];
              uVar24 = puVar19[2];
              unaff_x27[0x2d] = puVar19[5];
              unaff_x27[0x2c] = uVar7;
              unaff_x27[0x2f] = uVar11;
              unaff_x27[0x2e] = uVar13;
              unaff_x27[0x29] = uVar23;
              unaff_x27[0x28] = uVar22;
              unaff_x27[0x2b] = uVar25;
              unaff_x27[0x2a] = uVar24;
              FUN_0211e2ec(&stack0x00000200,&stack0x00000260);
              memcpy(&stack0x000001a0,&stack0x00000200,0x58);
              if (lVar8 == 0) goto LAB_0211b5a0;
              memcpy(&stack0x00000068,&stack0x000001a0,0x58);
              FUN_00c5d528(lVar8,&stack0x00000068,*(undefined8 *)puVar12);
              uVar6 = uVar6 + 1;
              puVar19 = puVar19 + 8;
            } while (uVar21 != uVar6);
          }
          uVar20 = uVar20 + 1;
          if (uVar20 == (uVar17 & 0xffffffff)) goto LAB_0211b480;
          lVar14 = in_stack_00000028[1];
        } while (lVar14 != 0);
      }
      else {
        uVar20 = 0;
        while( true ) {
          if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_0211b5a4;
          memcpy(&stack0x00000410,(void *)(lVar14 + uVar20 * 0x48 + 0x20),0x48);
          uVar6 = FUN_015ff8a0(in_stack_00000410,0);
          if ((uVar6 & 1) != 0) {
            iStack00000000000001a0 = (int)uVar20 + 1;
            uVar7 = thunk_FUN_00d48444(
                                      Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      );
            uVar7 = thunk_FUN_00d61fa0(uVar7,&stack0x000001a0);
            puVar12 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_SetResult__
            ;
            goto LAB_0211b680;
          }
          if (in_stack_00000410 == 0) break;
          iVar2 = FUN_016047a8(in_stack_00000410,0x2f,0);
          if (iVar2 == -1) {
            uVar7 = 0;
            lVar14 = in_stack_00000410;
          }
          else {
            uVar7 = FUN_01601d40(in_stack_00000410,0,iVar2,0);
            lVar14 = FUN_01603ec8(in_stack_00000410,iVar2 + 1,0);
            uVar6 = FUN_015ff8a0(lVar14,0);
            if ((uVar6 & 1) != 0) {
              uVar7 = thunk_FUN_00d48444(PTR_DAT_033f15c8);
              uVar13 = thunk_FUN_00d48444(SaveServerInterface_<StoreSaveCoroutine>d__15_TypeInfo);
              uVar7 = FUN_01600424(uVar7,in_stack_00000410,uVar13,0);
              goto LAB_0211b5e8;
            }
          }
          if (0 < *(int *)(param_2 + 0x18)) {
            iVar2 = 0;
            do {
              FUN_0132138c(param_2,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
              if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) goto LAB_0211b5a0;
              iVar3 = FUN_015fd224(*(undefined8 *)
                                    (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) + 0x10)
                                   ,uVar7,3,0);
              if (iVar3 == 0) {
                FUN_0132138c(param_2,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033ec188);
                if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) != 0) goto LAB_0211aec8;
                break;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(param_2 + 0x18));
          }
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                      System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_TypeInfo
                                    );
          if (lVar8 == 0) break;
          *(undefined4 *)(lVar8 + 0x58) = 0xffffffff;
          FUN_017b46ec(lVar8,0);
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
          iVar2 = *(int *)(param_2 + 0x18);
          FUN_00c5cd68(param_2,lVar8,
                       *(undefined8 *)Method_Meta_WitAi_Requests_AudioStreamHandler_DecodeAsync__);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3866);
          if (lVar8 == 0) break;
          FUN_01320e50(lVar8,*(undefined8 *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      );
          FUN_00c5cf58(lVar4,lVar8,*(undefined8 *)System_Nullable<bool>_var);
          lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Collections_Generic_List<IntervalTreeNode>_Clear__
                                    );
          if (lVar8 == 0) break;
          FUN_01320e50(lVar8,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddw_high_u16__)
          ;
          FUN_00c5d148(lVar5,lVar8,*(undefined8 *)PTR_DAT_033f0e00);
LAB_0211aec8:
          lVar14 = FUN_0211e494(&stack0x00000410,lVar14);
          FUN_0132138c(lVar4,iVar2,&stack0x000001a0,*(undefined8 *)StringLiteral_13262);
          if (CONCAT44(uStack00000000000001a4,iStack00000000000001a0) == 0) break;
          FUN_00c5d338(CONCAT44(uStack00000000000001a4,iStack00000000000001a0),lVar14,
                       *(undefined8 *)PTR_DAT_033f5968);
          if (in_stack_00000450 != 0) {
            FUN_0132138c(lVar5,iVar2,&stack0x000001a0,*(undefined8 *)PTR_DAT_033f1b50);
            if (0 < (int)*(ulong *)(in_stack_00000450 + 0x18)) {
              lVar8 = CONCAT44(uStack00000000000001a4,iStack00000000000001a0);
              uVar6 = 0;
              uVar15 = *(ulong *)(in_stack_00000450 + 0x18) & 0xffffffff;
              puVar19 = (undefined8 *)(in_stack_00000450 + 0x20);
              do {
                if (uVar15 <= uVar6) goto LAB_0211b5a4;
                uVar7 = puVar19[4];
                uVar11 = puVar19[7];
                uVar13 = puVar19[6];
                uVar23 = puVar19[1];
                uVar22 = *puVar19;
                uVar25 = puVar19[3];
                uVar24 = puVar19[2];
                unaff_x27[0x5b] = puVar19[5];
                unaff_x27[0x5a] = uVar7;
                unaff_x27[0x5d] = uVar11;
                unaff_x27[0x5c] = uVar13;
                unaff_x27[0x57] = uVar23;
                unaff_x27[0x56] = uVar22;
                unaff_x27[0x59] = uVar25;
                unaff_x27[0x58] = uVar24;
                FUN_0211e2ec(&stack0x000001a0,&stack0x000003d0);
                unaff_x27[0x51] = unaff_x27[0x11];
                unaff_x27[0x50] = unaff_x27[0x10];
                unaff_x27[0x53] = unaff_x27[0x13];
                unaff_x27[0x52] = unaff_x27[0x12];
                unaff_x27[0x55] = unaff_x27[0x15];
                unaff_x27[0x54] = unaff_x27[0x14];
                unaff_x27[0x4d] = in_stack_000001e0;
                unaff_x27[0x4c] = in_stack_000001d8;
                unaff_x27[0x4f] = in_stack_000001f0;
                unaff_x27[0x4e] = in_stack_000001e8;
                if (lVar14 == 0) goto LAB_0211b5a0;
                uVar7 = *(undefined8 *)(lVar14 + 0x10);
                unaff_x27[0x11] = unaff_x27[0x51];
                unaff_x27[0x10] = unaff_x27[0x50];
                unaff_x27[0x13] = unaff_x27[0x53];
                unaff_x27[0x12] = unaff_x27[0x52];
                unaff_x27[0x15] = unaff_x27[0x55];
                unaff_x27[0x14] = unaff_x27[0x54];
                unaff_x27[0xd] = unaff_x27[0x4d];
                unaff_x27[0xc] = unaff_x27[0x4c];
                unaff_x27[0xf] = unaff_x27[0x4f];
                unaff_x27[0xe] = unaff_x27[0x4e];
                if (lVar8 == 0) goto LAB_0211b5a0;
                in_stack_00000160 = unaff_x27[0xd];
                in_stack_00000158 = unaff_x27[0xc];
                in_stack_00000170 = unaff_x27[0xf];
                in_stack_00000168 = unaff_x27[0xe];
                uVar13 = *(undefined8 *)puVar12;
                unaff_x27[1] = unaff_x27[0x11];
                *unaff_x27 = unaff_x27[0x10];
                unaff_x27[3] = unaff_x27[0x13];
                unaff_x27[2] = unaff_x27[0x12];
                unaff_x27[5] = unaff_x27[0x15];
                unaff_x27[4] = unaff_x27[0x14];
                in_stack_00000150 = uVar7;
                FUN_00c5d528(lVar8,&stack0x00000120,uVar13);
                uVar15 = (ulong)*(uint *)(in_stack_00000450 + 0x18);
                uVar6 = uVar6 + 1;
                puVar19 = puVar19 + 8;
              } while ((long)uVar6 < (long)(int)*(uint *)(in_stack_00000450 + 0x18));
            }
          }
          uVar20 = uVar20 + 1;
          if (uVar20 == (uVar17 & 0xffffffff)) goto LAB_0211b010;
          lVar14 = *in_stack_00000028;
          if (lVar14 == 0) break;
        }
      }
    }
  }
LAB_0211b5a0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


