/*
FUNCTION_NAME: FUN_05f66e6c
ENTRY_POINT: 05f66e6c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05f67918) */

void FUN_05f66e6c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  long **pplStack_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_70;
  long *local_68;
  
  auVar23._8_8_ = param_5;
  auVar23._0_8_ = param_4;
  if ((bRam0000000006e946e7 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_02e3ca1c(PTR_DAT_06ab5e90);
    FUN_02e3ca1c(PTR_DAT_06ab5f10);
    FUN_02e3ca1c(PTR_DAT_06ab5f18);
    FUN_02e3ca1c(PTR_DAT_06ab5e98);
    FUN_02e3ca1c(MessagePipe_SingletonMessageBrokerCore<TMessage>_var);
    FUN_02e3ca1c(UnityEngine_SliderHandler_var);
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var);
    FUN_02e3ca1c(PTR_DAT_06ab16a0);
    FUN_02e3ca1c(UnityEngine_UIElements_StyleVariable_var);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_var);
    FUN_02e3ca1c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var);
    FUN_02e3ca1c(System_Xml_Schema_XmlAtomicValue_Union_var);
    FUN_02e3ca1c(PTR_DAT_06ab5ea8);
    FUN_02e3ca1c(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var);
    bRam0000000006e946e7 = 1;
  }
  puVar3 = PTR_DAT_06ab5f18;
  puVar1 = PTR_DAT_06ab5f10;
  puVar2 = PTR_DAT_06ab5e90;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (param_3 != 0) {
    lVar8 = FUN_05eaedc0(param_3,*(undefined8 *)PTR_DAT_06ab5e98);
    uVar9 = FUN_05eaedc0(param_3,*(undefined8 *)puVar3);
    lVar10 = FUN_05eaedc0(param_3,*(undefined8 *)puVar2);
    uVar11 = FUN_05eaedc0(param_3,*(undefined8 *)puVar1);
    if (*(long *)(param_1 + 0xb8) != 0) {
      uVar12 = FUN_05f47f2c(*(long *)(param_1 + 0xb8),0);
      if ((uVar12 & 1) == 0) {
        bVar5 = 0;
      }
      else {
        if (*(long *)(param_1 + 0xb8) == 0) goto LAB_05f67910;
        bVar5 = TMPro_MultipleSubstitutionRecord__set_substituteGlyphIDs
                          (*(long *)(param_1 + 0xb8),0);
        bVar5 = bVar5 ^ 1;
      }
      uVar20 = *(undefined8 *)(param_1 + 0x40);
      uVar13 = FUN_05eafd40(param_1,0);
      if (param_2 != 0) {
        local_68 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>
                                     (param_2,uVar20,&local_70,uVar13,
                                      *(undefined8 *)
                                       System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var,0xf0
                                      ,*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_var
                                     );
        pplStack_c8 = &local_68;
        local_d0 = 0;
        if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar21 = *(long *)(*(long *)(param_1 + 0xb8) + 0x40);
        *(long *)(local_70 + 0x10) = lVar21;
        thunk_FUN_02ee2be8((long *)(local_70 + 0x10),lVar21);
        puVar2 = PTR_DAT_06ab16a0;
        lVar14 = *(long *)(param_1 + 0xb8);
        if (lVar14 != 0) {
          uVar12 = 0;
          do {
            iVar6 = FUN_05f47fb0(lVar14,0);
            plVar4 = local_68;
            if ((long)iVar6 <= (long)uVar12) {
              if (*(int *)(*(long *)UnityEngine_UIElements_StyleVariable_var + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_05f35df8(plVar4,lVar8,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_05ed1550(lVar8,lVar21,0);
              plVar4 = local_68;
              if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              *(undefined8 *)(local_70 + 0x18) = param_6;
              *(undefined8 *)(local_70 + 0x20) = param_7;
              puVar1 = PTR_DAT_06ab07f8;
              if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lVar21 = *local_68;
              lVar14 = *(long *)puVar2;
              uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar12 == 0) goto LAB_05f673c4;
              piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              goto LAB_05f673ac;
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uStack_a8 = *(undefined8 *)(lVar10 + 0x100);
            local_b0 = *(undefined8 *)(lVar10 + 0xf8);
            local_a0 = *(undefined8 *)(lVar10 + 0x108);
            uStack_88 = *(undefined8 *)(lVar10 + 0x120);
            local_90 = *(undefined8 *)(lVar10 + 0x118);
            local_80 = *(undefined4 *)(lVar10 + 0x128);
            uStack_98 = 0;
            if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar15 = FUN_05f47ed8(*(long *)(param_1 + 0xb8),0);
            lVar14 = *(long *)(param_1 + 0xb8);
            if (uVar12 == (uVar15 & 0xffffffff)) {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              if (*(char *)(lVar14 + 0x17) == '\0') goto LAB_05f67140;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              auVar22 = FUN_05ed15c4(lVar8,0);
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
LAB_05f67294:
              lVar14 = lVar21 + uVar12 * 0x10;
              *(long *)(lVar14 + 0x20) = auVar22._0_8_;
            }
            else {
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
LAB_05f67140:
              uVar15 = FUN_05f47efc(lVar14,0);
              if ((bVar5 & uVar12 == (uVar15 & 0xffffffff)) != 0) {
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                auVar22 = FUN_05ed1764(lVar8,0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cccc();
                }
                goto LAB_05f67294;
              }
              if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              uVar15 = FUN_05f47ee0(*(long *)(param_1 + 0xb8),0);
              if (uVar12 != (uVar15 & 0xffffffff)) {
                if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                uVar7 = FUN_05f48008(*(long *)(param_1 + 0xb8),uVar12 & 0xffffffff,0);
                FUN_0624d1fc(&local_b0,uVar7,0);
                lVar14 = *(long *)MessagePipe_SingletonMessageBrokerCore<TMessage>_var;
                uStack_108 = uStack_a8;
                local_110 = local_b0;
                uStack_f8 = uStack_98;
                uStack_100 = local_a0;
                uStack_e8 = uStack_88;
                local_f0 = local_90;
                local_e0 = local_80;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                  lVar14 = *(long *)MessagePipe_SingletonMessageBrokerCore<TMessage>_var;
                }
                lVar14 = **(long **)(lVar14 + 0xb8);
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                if (*(uint *)(lVar14 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cccc();
                }
                uVar13 = *(undefined8 *)(lVar14 + uVar12 * 8 + 0x20);
                if (*(int *)(*(long *)PTR_DAT_06ab5ea8 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                uStack_128 = uStack_e8;
                local_130 = local_f0;
                uStack_148 = uStack_108;
                local_150 = local_110;
                uStack_138 = uStack_f8;
                uStack_140 = uStack_100;
                local_120 = local_e0;
                auVar22 = FUN_05f2fcd8(param_2,&local_150,uVar13,1,0,1,0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3cccc();
                }
                goto LAB_05f67294;
              }
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              if (*(uint *)(lVar21 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              lVar14 = lVar21 + uVar12 * 0x10;
              *(undefined8 *)(lVar14 + 0x20) = param_4;
              auVar22 = auVar23;
            }
            plVar4 = local_68;
            *(long *)(lVar14 + 0x28) = auVar22._8_8_;
            if (*(uint *)(lVar21 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            lVar18 = *local_68;
            lVar14 = *(long *)puVar2;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == lVar14) {
                  puVar16 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_05f67308;
                }
                uVar15 = uVar15 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar15 != 0);
            }
            puVar16 = (undefined8 *)FUN_02e759c0(local_68,lVar14,0);
LAB_05f67308:
            (*(code *)*puVar16)(plVar4,auVar22._0_8_,auVar22._8_8_,uVar12 & 0xffffffff,2,puVar16[1])
            ;
            lVar14 = *(long *)(param_1 + 0xb8);
            uVar12 = uVar12 + 1;
          } while (lVar14 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
    }
  }
LAB_05f67910:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar19 = piVar19 + 4;
    if (uVar12 == 0) break;
LAB_05f673ac:
    if (*(long *)(piVar19 + -2) == lVar14) {
      puVar16 = (undefined8 *)(lVar21 + (long)(*piVar19 + 4) * 0x10 + 0x138);
      goto LAB_05f673e4;
    }
  }
LAB_05f673c4:
  puVar16 = (undefined8 *)FUN_02e759c0(local_68,lVar14,4);
LAB_05f673e4:
  (*(code *)*puVar16)(plVar4,param_6,param_7,2,puVar16[1]);
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(param_1 + 0xb8);
  thunk_FUN_02ee2be8();
  FUN_05f669e4(param_1,&local_70,0,param_2,uVar9,lVar10,uVar11,1);
  plVar4 = local_68;
  lVar10 = local_70;
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar14 = *local_68;
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
        puVar16 = (undefined8 *)(lVar14 + (long)(*piVar19 + 9) * 0x10 + 0x138);
        goto LAB_05f6748c;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar16 = (undefined8 *)FUN_02e759c0(local_68,*(long *)puVar1,9);
LAB_05f6748c:
  (*(code *)*puVar16)(plVar4,lVar10 + 0x30,puVar16[1]);
  plVar4 = local_68;
  lVar10 = local_70;
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar14 = *local_68;
  uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
        puVar16 = (undefined8 *)(lVar14 + (long)(*piVar19 + 9) * 0x10 + 0x138);
        goto LAB_05f674fc;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar16 = (undefined8 *)FUN_02e759c0(local_68,*(long *)puVar1,9);
LAB_05f674fc:
  (*(code *)*puVar16)(plVar4,lVar10 + 0x3c,puVar16[1]);
  plVar4 = local_68;
  if ((param_8 & 1) != 0) {
    local_c0 = FUN_05ed15c4(lVar8,0);
    puVar2 = UnityEngine_SliderHandler_var;
    lVar10 = *(long *)UnityEngine_SliderHandler_var;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar10 = *(long *)puVar2;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar14 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    uVar7 = **(undefined4 **)(lVar10 + 0xb8);
    if (uVar12 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
          puVar16 = (undefined8 *)(lVar14 + (long)(*piVar19 + 3) * 0x10 + 0x138);
          goto LAB_05f675a4;
        }
        uVar12 = uVar12 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)puVar1,3);
LAB_05f675a4:
    (*(code *)*puVar16)(plVar4,local_c0,uVar7,puVar16[1]);
    plVar4 = local_68;
    if ((bVar5 & 1) != 0) {
      auVar23 = FUN_05ed1764(lVar8,0);
      lVar8 = *(long *)puVar2;
      local_c0 = auVar23;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar8 = *(long *)puVar2;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar10 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 4);
      if (uVar12 != 0) {
        piVar19 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
            puVar16 = (undefined8 *)(lVar10 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_05f67644;
          }
          uVar12 = uVar12 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)FUN_02e759c0(plVar4,*(long *)puVar1,3);
LAB_05f67644:
      (*(code *)*puVar16)(plVar4,local_c0,uVar7,puVar16[1]);
    }
  }
  plVar4 = local_68;
  puVar2 = System_Xml_Schema_XmlAtomicValue_Union_var;
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar8 = *local_68;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
        puVar16 = (undefined8 *)(lVar8 + (long)(*piVar19 + 0xb) * 0x10 + 0x138);
        goto LAB_05f676b8;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar16 = (undefined8 *)FUN_02e759c0(local_68,*(long *)puVar1,0xb);
LAB_05f676b8:
  (*(code *)*puVar16)(plVar4,0,puVar16[1]);
  plVar4 = local_68;
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar8 = *local_68;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
        puVar16 = (undefined8 *)(lVar8 + (long)(*piVar19 + 0xc) * 0x10 + 0x138);
        goto LAB_05f67720;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  puVar16 = (undefined8 *)FUN_02e759c0(local_68,*(long *)puVar1,0xc);
LAB_05f67720:
  (*(code *)*puVar16)(plVar4,1,puVar16[1]);
  plVar4 = local_68;
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar8 = *(long *)puVar2;
  }
  puVar16 = *(undefined8 **)(lVar8 + 0xb8);
  lVar10 = puVar16[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      puVar16 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar9 = *puVar16;
    lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)
                                 UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_04b2178c(lVar10,uVar9,
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var,0);
    plVar17 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar17 = lVar10;
    thunk_FUN_02ee2be8(plVar17,lVar10);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  lVar8 = *plVar4;
  lVar14 = *(long *)
            UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var;
  uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar12 != 0) {
    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar8 = lVar8 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_05f6780c;
      }
      uVar12 = uVar12 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar12 != 0);
  }
  lVar8 = FUN_02e759c0(plVar4);
LAB_05f6780c:
  lVar8 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar8 + 8),lVar14);
  (**(code **)(lVar8 + 8))(plVar4,lVar10,lVar8);
  plVar4 = local_68;
  if (local_68 != (long *)0x0) {
    lVar8 = *local_68;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06a2ef10) {
          puVar16 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05f67890;
        }
        uVar12 = uVar12 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar12 != 0);
    }
    puVar16 = (undefined8 *)FUN_02e759c0(local_68,*(long *)PTR_DAT_06a2ef10,0);
LAB_05f67890:
    (*(code *)*puVar16)(plVar4,puVar16[1]);
  }
  return;
}


