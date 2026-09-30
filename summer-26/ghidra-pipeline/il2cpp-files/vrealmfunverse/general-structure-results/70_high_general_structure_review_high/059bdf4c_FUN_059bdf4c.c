/*
FUNCTION_NAME: FUN_059bdf4c
ENTRY_POINT: 059bdf4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_059bdf4c(long param_1,undefined8 param_2,long *param_3)

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
  undefined4 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  byte bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
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
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
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
  
  if ((DAT_066d3a83 & 1) == 0) {
    FUN_02b3c81c(Method_Autohand_AutoHandExtensions_CanFindObjectsOfType<HandProjector>__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(PTR_DAT_0631f0a0);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_Array_Resize<RichTextTagAttribute>__);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<PropertyStreamHandle>_get_IsCreated__);
    FUN_02b3c81c(PTR_DAT_0631ec68);
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    FUN_02b3c81c(PTR_DAT_063203a0);
    FUN_02b3c81c(PTR_DAT_06322210);
    FUN_02b3c81c(Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__);
    FUN_02b3c81c(Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_OpenFileAsync__);
    DAT_066d3a83 = 1;
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
    lVar10 = FUN_0590661c(*param_3,*(undefined8 *)
                                    Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                         );
    uVar5 = FUN_0599e714(param_3 + 1,0);
    if (param_1 != 0) {
      FUN_059bea20(param_1,lVar10,param_1 + 0xc0,uVar5 & 1,0);
      if (*(long *)(param_1 + 0xc0) != 0) {
        uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
        if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar11 = FUN_05c8e378(uVar19,0,0);
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)Method_System_Threading_Tasks_Task<byte[]>_ConfigureAwait__ + 0xe4)
              == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_0596b1cc(&local_190,param_3,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          lVar13 = FUN_05914c04(lVar10,0);
          if (lVar13 == 0) {
            uVar6 = 0;
            local_a0 = CONCAT44(uStack_16c,local_170);
            puVar16 = &local_c0;
            uStack_b8 = uStack_188;
            local_c0 = local_190;
            uStack_a8 = uStack_178;
            uStack_b0 = uStack_180;
          }
          else {
            local_d0 = CONCAT44(uStack_16c,local_170);
            uStack_e8 = uStack_188;
            local_f0 = local_190;
            uStack_d8 = uStack_178;
            uStack_e0 = uStack_180;
            if (lVar10 == 0) goto LAB_059be8b8;
            uVar6 = thunk_FUN_058fdbcc(lVar13,*(undefined1 *)(lVar10 + 0x1e0),0);
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
          FUN_058571fc(&local_150,0);
          lVar20 = **(long **)(*(long *)
                                Method_Unity_Collections_NativeArray<PropertyStreamHandle>_get_IsCreated__
                              + 0xb8);
          plVar12 = (long *)FUN_0599d0b4(param_3,0);
          if ((lVar10 != 0) && (plVar14 = *(long **)(lVar10 + 0x1d8), plVar14 != (long *)0x0)) {
            lVar22 = *plVar12;
            plVar12 = (long *)(param_1 + 0xb8);
            lVar21 = *plVar12;
            lVar15 = (**(code **)(*plVar14 + 0x1c8))
                               (plVar14,lVar22,*(undefined8 *)(*plVar14 + 0x1d0));
            if (lVar21 == lVar15) {
              plVar14 = (long *)FUN_0599ee74(param_3 + 1,0);
              if (*plVar14 == 0) goto LAB_059be8b8;
              lVar15 = FUN_05915608(*plVar14,0);
              *plVar12 = lVar15;
              thunk_FUN_02bb0e9c(plVar12,lVar15);
            }
            uVar19 = FUN_0590759c(param_1,0);
            FUN_05814ccc(local_84,lVar22,uVar19,0);
            local_160 = 0;
            puStack_158 = local_84;
            if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar15 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            thunk_FUN_05c5ab14(lVar15,0,0);
            uVar7 = FUN_05928120(lVar10,0);
            if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_05cb607c(lVar22,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ +
                                         0xb8) + 0x134,uVar7 & 1,0);
            if ((uVar5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_06322210 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar15 = FUN_0582d9c4(0);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar19 = FUN_033d907c(*(long *)(lVar15 + 0x10),
                                    *(undefined8 *)
                                     Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<SortDirection>__ctor__
                                   );
              auVar26 = FUN_05928454(lVar10,0);
              uVar8 = FUN_0592854c(lVar10,0);
              if (*(int *)(*(long *)PTR_DAT_063203a0 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_0599b984(auVar26._0_8_,auVar26._8_8_,uVar8,uVar19,&local_98,0);
              if ((lVar13 == 0) ||
                 (uVar11 = FUN_058fdbcc(lVar13,*(undefined1 *)(lVar10 + 0x1e0),0), (uVar11 & 1) == 0
                 )) {
                bVar23 = 2;
              }
              else {
                bVar23 = 0;
              }
              bVar2 = *(byte *)(lVar10 + 0x1ac);
              uVar8 = FUN_0592854c(lVar10,0);
              uVar4 = local_90;
              uVar11 = local_98;
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
              uVar24 = local_98._4_4_;
              uVar25 = local_90._4_4_;
              uVar5 = FUN_059285dc(lVar10,0);
              if (*(int *)(*(long *)Method_System_Array_Resize<RichTextTagAttribute>__ + 0xe4) == 0)
              {
                thunk_FUN_02b9ad44();
              }
              FUN_059bdd50(uVar11 & 0xffffffff,uVar24,uVar4 & 0xffffffff,uVar25,uVar8,uVar19,
                           bVar23 | bVar2 ^ 1,uVar5 & 1);
            }
            if (uVar6 == 0) {
              uVar11 = FUN_05c511d8(0);
              if (((uVar11 & 1) == 0) || (uVar11 = FUN_059282c8(lVar10,0), (uVar11 & 1) == 0)) {
                uVar11 = FUN_059282c8(lVar10,0);
                if ((uVar11 & 1) == 0) {
                  iVar9 = (uint)*(byte *)(lVar10 + 0x18c) << 1;
                }
                else {
                  iVar9 = 2;
                }
                if (*(long *)(lVar10 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar11 = FUN_057ec748(*(long *)(lVar10 + 0x1a0),0);
                iVar1 = 0;
                if ((uVar11 & 1) == 0) {
                  iVar1 = iVar9;
                }
                puVar16 = (undefined8 *)FUN_0599d0b4(param_3,0);
                uVar19 = *puVar16;
                if (*(int *)(*(long *)PTR_DAT_0631f0a0 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_0586a860(0,0,0,0,uVar19,lVar20,iVar1,0,0,0,0xffffffff,0xffffffff,0);
                puVar16 = (undefined8 *)FUN_0599d0b4(param_3,0);
                puVar3 = Method_System_Collections_Generic_List<XmlSchema>__ctor__;
                uVar19 = *puVar16;
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<XmlSchema>__ctor__ +
                            0xe4) == 0) {
                  thunk_FUN_02b9ad44(*(long *)
                                      Method_System_Collections_Generic_List<XmlSchema>__ctor__);
                }
                if (DAT_066d355c == '\0') {
                  FUN_02b3c81c(Method_System_Collections_Generic_List<XmlSchema>__ctor__);
                  DAT_066d355c = '\x01';
                }
                lVar13 = *(long *)puVar3;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar13 = *(long *)puVar3;
                }
                if (**(long **)(lVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                puVar16 = (undefined8 *)(**(long **)(lVar13 + 0xb8) + 0x10);
                *puVar16 = uVar19;
                thunk_FUN_02bb0e9c(puVar16,uVar19);
                uVar19 = *(undefined8 *)(param_1 + 0xc0);
                lVar13 = *plVar12;
                uVar18 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
                if (*(int *)(*(long *)Method_System_Array_Resize<RichTextTagAttribute>__ + 0xe4) ==
                    0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_059beacc(uVar18,uVar19,lVar13,lVar20,lVar10);
                if (*(long *)(lVar10 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_0591c4b0(*(long *)(lVar10 + 0x1d8),lVar20,lVar20,0);
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_0631ec68 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_05cac198(&local_190,2,0);
                uStack_1b8 = uStack_188;
                local_1c0 = local_190;
                uStack_1a8 = uStack_178;
                uStack_1b0 = uStack_180;
                FUN_05cb8060(lVar22,&local_1c0,2,0,2,3,0);
                lVar10 = *plVar12;
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uStack_218 = *(undefined8 *)(lVar20 + 0x30);
                local_220 = *(undefined8 *)(lVar20 + 0x28);
                uStack_208 = *(undefined8 *)(lVar20 + 0x40);
                uStack_210 = *(undefined8 *)(lVar20 + 0x38);
                local_200 = *(undefined8 *)(lVar20 + 0x48);
                uStack_1e8 = *(undefined8 *)(lVar10 + 0x30);
                local_1f0 = *(undefined8 *)(lVar10 + 0x28);
                uStack_1d8 = *(undefined8 *)(lVar10 + 0x40);
                uStack_1e0 = *(undefined8 *)(lVar10 + 0x38);
                local_1d0 = *(undefined8 *)(lVar10 + 0x48);
                FUN_05cbe0e0(lVar22,&local_1f0,&local_220,0);
              }
            }
            else {
              if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar20 = *(long *)(*plVar12 + 0x18);
              if ((lVar20 == 0) || (iVar9 = FUN_05c680c0(lVar20,0), iVar9 != 1)) {
                if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                puVar17 = (undefined4 *)(*(long *)(param_1 + 0xc0) + 0x50);
              }
              else {
                if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                puVar17 = (undefined4 *)(*(long *)(param_1 + 0xc0) + 0x54);
              }
              lVar20 = *plVar12;
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar8 = *puVar17;
              if (*(char *)(lVar20 + 0xa8) == '\0') {
                if (DAT_066c1e91 == '\0') {
                  FUN_02b3c81c(PTR_DAT_063132f8);
                  DAT_066c1e91 = '\x01';
                }
                uVar24 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 8);
                uVar25 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 0xc);
              }
              else {
                FUN_05857484(&local_190,lVar20,0);
                if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_05857484(&local_190,*plVar12,0);
                uVar24 = local_170;
                uVar25 = uStack_16c;
              }
              if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar20 = *plVar12;
              uVar19 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
              if (*(int *)(*(long *)
                            Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__ +
                          0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_05864c88(uVar24,uVar25,0,0,lVar22,lVar20,uVar19,uVar8,0);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar10 = *(long *)(lVar10 + 0x1d8);
              puVar16 = (undefined8 *)FUN_058fdbb4(lVar13,0);
              uVar19 = *puVar16;
              puVar16 = (undefined8 *)FUN_058fdbbc(lVar13,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_0591c4b0(lVar10,uVar19,*puVar16,0);
            }
            FUN_05814cd4(local_84,0);
            return;
          }
        }
        else {
          plVar12 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,2);
          lVar10 = *(long *)(param_1 + 0xc0);
          if (lVar10 != 0) {
            uStack_188 = *(undefined8 *)(lVar10 + 0x50);
            local_190 = *(undefined8 *)(lVar10 + 0x48);
            lVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                               (*(undefined8 *)
                                 Method_Autohand_AutoHandExtensions_CanFindObjectsOfType<HandProjector>__
                                ,&local_190);
            if (plVar12 != (long *)0x0) {
              if ((lVar10 != 0) &&
                 (lVar13 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)
                 ) {
LAB_059be8c0:
                uVar19 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar19,0);
              }
              if ((int)plVar12[3] != 0) {
                plVar12[4] = lVar10;
                thunk_FUN_02bb0e9c(plVar12 + 4,lVar10);
                plVar14 = (long *)thunk_FUN_02b4c898(param_1,0);
                if (plVar14 == (long *)0x0) goto LAB_059be8b8;
                lVar10 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
                if ((lVar10 != 0) &&
                   (lVar13 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar13 == 0)) goto LAB_059be8c0;
                if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
                  plVar12[5] = lVar10;
                  thunk_FUN_02bb0e9c(plVar12 + 5,lVar10);
                  if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  FUN_05c45180(*(undefined8 *)
                                Method_Unity_IO_LowLevel_Unsafe_AsyncReadManager_OpenFileAsync__,
                               plVar12,0);
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
          }
        }
      }
    }
  }
LAB_059be8b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


