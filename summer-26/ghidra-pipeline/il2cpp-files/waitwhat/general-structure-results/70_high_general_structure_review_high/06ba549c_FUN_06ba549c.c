/*
FUNCTION_NAME: FUN_06ba549c
ENTRY_POINT: 06ba549c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5
*/


void FUN_06ba549c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long *param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong extraout_x1;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_2c0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined1 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_124 [4];
  undefined8 local_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((DAT_07560323 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
                );
    FUN_03188a78(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_get_Item__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>__ctor__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(Method_System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_Add__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Contains__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_IndexOf__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_RemoveAt__);
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                );
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__);
    FUN_03188a78(PTR_DAT_070f3520);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_SwapElements__);
    FUN_03188a78(Method_UnityEngine_InputSystem_InputControlList<InputControl>_ToArray__);
    DAT_07560323 = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__;
  iVar1 = *(int *)(param_5 + 0x34);
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  auVar20 = ZEXT816(0);
  local_124[0] = 0;
  local_130 = 0;
  local_138 = 0;
  puStack_118 = (undefined1 *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (4 < iVar1) {
    if (iVar1 < 7) {
      if (iVar1 == 5) {
        if (*(long *)(param_5 + 0x18) != 0) {
          uVar16 = FUN_06b20f88(*(long *)(param_5 + 0x18),0);
          auVar4._8_8_ = local_e0._8_8_;
          auVar4._0_8_ = local_e0._0_8_;
          auVar20._8_8_ = local_e0._8_8_;
          auVar20._0_8_ = local_e0._0_8_;
          if ((param_6 != 0) && (auVar20 = auVar4, *(long *)(param_6 + 0x18) != 0)) {
            uVar19 = param_2;
            uVar15 = param_3;
            uVar18 = param_4;
            uVar17 = FUN_04b3494c(*(long *)(param_6 + 0x18),
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__
                                 );
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_Add__
                        + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            fVar14 = (float)FUN_06ba64b8(uVar16,param_2,param_3,param_4,uVar17,uVar19,uVar15,uVar18)
            ;
            auVar20._8_8_ = local_e0._8_8_;
            auVar20._0_8_ = local_e0._0_8_;
            if (*(long *)(param_6 + 0x18) != 0) {
              FUN_04b34a38(*(long *)(param_6 + 0x18),
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                          );
              goto LAB_06ba5f10;
            }
          }
        }
      }
      else {
        if (iVar1 != 6) {
          return;
        }
        if ((param_6 != 0) && (*(long *)(param_6 + 0x18) != 0)) {
          FUN_04b34994(*(long *)(param_6 + 0x18),
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlList<InputControl>_RemoveAt__);
          auVar20._8_8_ = local_e0._8_8_;
          auVar20._0_8_ = local_e0._0_8_;
          if (*(long *)(param_6 + 0x18) != 0) {
            fVar14 = (float)FUN_04b3494c(*(long *)(param_6 + 0x18),
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__
                                        );
            puVar5 = 
            Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
            ;
            lVar7 = *(long *)
                     Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
            ;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_031e5338();
              lVar7 = *(long *)puVar5;
            }
            if (fVar14 == **(float **)(lVar7 + 0xb8)) {
              if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_06b7c0fc(0);
              return;
            }
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_Add__
                        + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
LAB_06ba5f10:
            auVar20 = FUN_06ba6150(fVar14,param_2,param_3,param_4,param_1);
            if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_06b7c040(auVar20._0_8_,auVar20._8_8_,0);
            return;
          }
        }
      }
    }
    else if (iVar1 == 7) {
      if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06b7c318(0);
      uVar8 = FUN_069bb974(extraout_x1,extraout_x1 >> 0x20,0x18,2,0);
      thunk_FUN_069b9868(uVar8,0);
      thunk_FUN_0699b178(0,0,0,0,DAT_012e3c3c,1,1,0);
      auVar20._8_8_ = local_e0._8_8_;
      auVar20._0_8_ = local_e0._0_8_;
      if (param_6 != 0) {
        lVar7 = *(long *)(param_6 + 0x20);
        uVar8 = thunk_FUN_069b97e0(0);
        auVar3._8_8_ = local_e0._8_8_;
        auVar3._0_8_ = local_e0._0_8_;
        auVar20._8_8_ = local_e0._8_8_;
        auVar20._0_8_ = local_e0._0_8_;
        if (lVar7 != 0) {
          lVar12 = *(long *)(lVar7 + 0x10);
          lVar13 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_get_Item__;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          auVar20 = auVar3;
          if (lVar12 != 0) {
            uVar6 = *(uint *)(lVar7 + 0x18);
            if (uVar6 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar6 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar8;
              return;
            }
            FUN_042e4a64(lVar7,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
    else if (iVar1 == 8) {
      if ((param_6 != 0) && (*(long *)(param_6 + 0x20) != 0)) {
        iVar1 = *(int *)(*(long *)(param_6 + 0x20) + 0x18);
        iVar2 = iVar1 + -1;
        if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_0698f888(0 < iVar2,0);
        puVar5 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__;
        auVar20._8_8_ = local_e0._8_8_;
        auVar20._0_8_ = local_e0._0_8_;
        if (*(long *)(param_6 + 0x20) != 0) {
          uVar8 = FUN_042e47a4(*(long *)(param_6 + 0x20),iVar1 + -2,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__
                              );
          uVar9 = thunk_FUN_069b97e0(0);
          if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)PTR_DAT_070c1b68);
          }
          uVar6 = FUN_069d8404(uVar8,uVar9,0);
          FUN_0698f9b8(uVar6 & 1,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlList<InputControl>_SwapElements__
                       ,0);
          auVar20._8_8_ = local_e0._8_8_;
          auVar20._0_8_ = local_e0._0_8_;
          if (*(long *)(param_6 + 0x20) != 0) {
            uVar8 = FUN_042e47a4(*(long *)(param_6 + 0x20),iVar2,*(undefined8 *)puVar5);
            uVar11 = FUN_069d69b8(uVar8,0,0);
            if ((uVar11 & 1) != 0) {
              FUN_069ba12c(uVar8,0);
            }
            auVar20._8_8_ = local_e0._8_8_;
            auVar20._0_8_ = local_e0._0_8_;
            if (*(long *)(param_6 + 0x20) != 0) {
              FUN_042e61ac(*(long *)(param_6 + 0x20),iVar2,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_InputControlList<InputControl>__ctor__);
              return;
            }
          }
        }
      }
    }
    else {
      if (iVar1 != 9) {
        return;
      }
      if ((param_6 != 0) && (lVar7 = *(long *)(param_6 + 0x20), lVar7 != 0)) {
        uVar8 = FUN_042e47a4(lVar7,*(int *)(lVar7 + 0x18) + -1,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__)
        ;
        auVar20._8_8_ = local_e0._8_8_;
        auVar20._0_8_ = local_e0._0_8_;
        lVar7 = *(long *)(param_6 + 0x20);
        if (lVar7 != 0) {
          uVar9 = FUN_042e47a4(lVar7,*(int *)(lVar7 + 0x18) + -2,*(undefined8 *)puVar5);
          uVar10 = thunk_FUN_069b97e0(0);
          if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)PTR_DAT_070c1b68);
          }
          uVar6 = FUN_069d8404(uVar8,uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
          }
          FUN_0698f9b8(uVar6 & 1,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlList<InputControl>_ToArray__,0);
          FUN_06ba65cc(0,param_5,uVar8,uVar9);
          return;
        }
      }
    }
    goto LAB_06ba6048;
  }
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      if (*(long *)(param_5 + 0x18) == 0) goto LAB_06ba6048;
      uVar16 = FUN_06b206b8(*(long *)(param_5 + 0x18),0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_Add__
                  + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      local_e0 = FUN_06ba6150(uVar16,param_2,param_3,param_4,param_1);
      if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      auVar20 = FUN_06b7c318(0);
      uVar11 = FUN_0699c574(local_e0,auVar20._0_8_,auVar20._8_8_,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
    }
    else {
      local_e0 = auVar20;
      if (iVar1 != 2) {
        return;
      }
    }
    puVar5 = PTR_DAT_070f3520;
    if (*param_7 != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06b7c464(&local_d0,0);
    puStack_118 = puStack_c8;
    local_120 = local_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uVar8 = thunk_FUN_0698c318(0);
    uVar9 = thunk_FUN_069b97e0(0);
    auVar20 = local_e0;
    if ((param_6 != 0) && (*(long *)(param_6 + 0x18) != 0)) {
      iVar1 = *(int *)(*(long *)(param_6 + 0x18) + 0x18);
      if (1 < iVar1) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_06b7c0fc(0);
      }
      auVar20 = local_e0;
      if (*(long *)(param_5 + 0x18) != 0) {
        FUN_06b20800(&local_d0,*(long *)(param_5 + 0x18),0);
        auVar20 = local_e0;
        if (*(long *)(param_5 + 0x18) != 0) {
          FUN_06b20f88(*(long *)(param_5 + 0x18),0);
          puStack_178 = puStack_c8;
          local_180 = local_d0;
          uStack_168 = uStack_b8;
          uStack_170 = uStack_c0;
          uStack_158 = uStack_a8;
          local_160 = local_b0;
          uStack_148 = uStack_98;
          uStack_150 = uStack_a0;
          FUN_06a2fdc8(local_124,&local_180,0);
          lVar7 = *(long *)(param_5 + 0x60);
          local_d0 = 0;
          puStack_c8 = local_124;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03188cd8();
          }
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          FUN_06a2fe0c(puStack_c8,0);
          FUN_0698cf40(uVar8,0);
          thunk_FUN_069b9868(uVar9,0);
          auVar20 = local_e0;
          if (*(long *)(param_6 + 0x10) == 0) goto LAB_06ba6048;
          FUN_04b339bc(&local_d0,*(long *)(param_6 + 0x10),
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_InputControlList<InputControl>_Contains__);
          puStack_1b8 = puStack_c8;
          local_1c0 = local_d0;
          uStack_1a8 = uStack_b8;
          uStack_1b0 = uStack_c0;
          uStack_198 = uStack_a8;
          local_1a0 = local_b0;
          uStack_188 = uStack_98;
          uStack_190 = uStack_a0;
          FUN_0699ae58(&local_1c0,0);
          puStack_1f8 = puStack_118;
          local_200 = local_120;
          uStack_1e8 = uStack_108;
          uStack_1f0 = uStack_110;
          uStack_1d8 = uStack_f8;
          local_1e0 = local_100;
          uStack_1c8 = uStack_e8;
          uStack_1d0 = uStack_f0;
          uVar8 = uStack_110;
          uVar9 = uStack_f0;
          FUN_0699af1c(&local_200,0);
          uVar19 = (undefined4)uVar9;
          uVar16 = (undefined4)uVar8;
          if (iVar1 < 2) {
            return;
          }
          auVar20 = local_e0;
          if (*(long *)(param_6 + 0x18) == 0) goto LAB_06ba6048;
          uVar15 = FUN_04b3494c(*(long *)(param_6 + 0x18),
                                *(undefined8 *)
                                 Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__
                               );
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_Add__
                      + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          auVar20 = FUN_06ba6150(uVar15,uVar16,uVar19,param_4,param_1);
          lVar7 = *(long *)puVar5;
          goto LAB_06ba5ffc;
        }
      }
    }
LAB_06ba6048:
    local_e0 = auVar20;
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (iVar1 == 3) {
    if ((param_6 == 0) || (*(long *)(param_5 + 0x18) == 0)) goto LAB_06ba6048;
    lVar7 = *(long *)(param_6 + 0x10);
    FUN_06b20800(&local_240,*(long *)(param_5 + 0x18),0);
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    if (lVar7 == 0) goto LAB_06ba6048;
    puStack_c8 = puStack_238;
    local_d0 = local_240;
    uStack_b8 = uStack_228;
    uStack_c0 = uStack_230;
    uStack_a8 = uStack_218;
    local_b0 = local_220;
    uStack_98 = uStack_208;
    uStack_a0 = uStack_210;
    FUN_04b33ae0(lVar7,&local_d0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                );
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_06ba6048;
    FUN_06b20800(&local_d0,*(long *)(param_5 + 0x18),0);
    puStack_278 = puStack_c8;
    local_280 = local_d0;
    uStack_268 = uStack_b8;
    uStack_270 = uStack_c0;
    uStack_258 = uStack_a8;
    local_260 = local_b0;
    uStack_248 = uStack_98;
    uStack_250 = uStack_a0;
    uVar8 = uStack_c0;
    uVar9 = uStack_a0;
    FUN_0699ae58(&local_280,0);
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    uVar19 = (undefined4)uVar9;
    uVar16 = (undefined4)uVar8;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_06ba6048;
    local_130 = *(undefined8 *)(*(long *)(param_5 + 0x18) + 0x440);
    lVar7 = FUN_06b2d21c(&local_130,0);
    puVar5 = 
    Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
    ;
    if (lVar7 == 0) {
      lVar7 = *(long *)
               Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
      ;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *(long *)puVar5;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      fVar14 = *(float *)(lVar7 + 0x10);
      uVar16 = *(undefined4 *)(lVar7 + 0x14);
      uVar19 = *(undefined4 *)(lVar7 + 0x18);
      param_4 = *(undefined4 *)(lVar7 + 0x1c);
    }
    else {
      fVar14 = (float)FUN_06b20f88(lVar7,0);
    }
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_06ba6048;
    FUN_04b34a38(fVar14,uVar16,uVar19,param_4,*(long *)(param_6 + 0x18),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                );
  }
  else {
    if (iVar1 != 4) {
      return;
    }
    if ((param_6 == 0) || (*(long *)(param_6 + 0x10) == 0)) goto LAB_06ba6048;
    FUN_04b33a10(&local_d0,*(long *)(param_6 + 0x10),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_IndexOf__);
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x10) == 0) goto LAB_06ba6048;
    FUN_04b339bc(&local_d0,*(long *)(param_6 + 0x10),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_Contains__);
    puStack_2b8 = puStack_c8;
    local_2c0 = local_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    local_2a0 = local_b0;
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uVar8 = uStack_c0;
    uVar9 = uStack_a0;
    FUN_0699ae58(&local_2c0,0);
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    uVar19 = (undefined4)uVar9;
    uVar16 = (undefined4)uVar8;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_06ba6048;
    FUN_04b34994(*(long *)(param_6 + 0x18),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_RemoveAt__);
    auVar20._8_8_ = local_e0._8_8_;
    auVar20._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) goto LAB_06ba6048;
    fVar14 = (float)FUN_04b3494c(*(long *)(param_6 + 0x18),
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_Dispose__
                                );
    puVar5 = 
    Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
    ;
    lVar7 = *(long *)
             Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
    ;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar7 = *(long *)puVar5;
    }
    if (fVar14 == **(float **)(lVar7 + 0xb8)) {
      if (*(int *)(*(long *)PTR_DAT_070f3520 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_06b7c0fc(0);
      return;
    }
  }
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_Add__ +
              0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  auVar20 = FUN_06ba6150(fVar14,uVar16,uVar19,param_4,param_1);
  lVar7 = *(long *)PTR_DAT_070f3520;
LAB_06ba5ffc:
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_06b7c040(auVar20._0_8_,auVar20._8_8_,0);
  return;
}


