/*
FUNCTION_NAME: Oculus.Interaction.TouchShadowHand$$get_TotalIterations
ENTRY_POINT: 05047d50
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


long Oculus_Interaction_TouchShadowHand__get_TotalIterations(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined2 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar6 = FUN_05048970();
  lVar7 = FUN_05048970();
  uVar8 = FUN_05017030(uVar6,0);
  if ((uVar8 & 1) == 0) {
    plVar9 = *(long **)(unaff_x19 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_05048450;
    lVar10 = (**(code **)(*plVar9 + 0x178))(plVar9,uVar6,*(undefined8 *)(*plVar9 + 0x180));
    if (lVar10 != 0) {
      if ((unaff_w21 != 2) &&
         (uVar8 = FUN_05048a7c(*(undefined8 *)(lVar10 + 0x30),0x40), (uVar8 & 1) == 0)) {
        if ((*(ulong *)(lVar10 + 0x30) & 0xff) == 0) {
          uVar8 = 0;
        }
        else {
          _uStack0000000000000008 = 0;
          Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                    (&stack0x00000008,(uint)(*(ulong *)(lVar10 + 0x30) >> 0x20) | 0x40,
                     *(undefined8 *)PTR_DAT_065ff0e8);
          uVar8 = _uStack0000000000000008;
        }
        *(ulong *)(lVar10 + 0x30) = uVar8;
      }
      if ((unaff_x22 & 1) == 0) {
        return lVar10;
      }
      if ((0xff < *(ushort *)(lVar10 + 0x20)) && ((*(ushort *)(lVar10 + 0x20) & 0xff) != 0)) {
        return lVar10;
      }
      _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
      FUN_03c80878(&stack0x00000008,1,*(undefined8 *)PTR_DAT_065cc870);
      *(undefined2 *)(lVar10 + 0x20) = uStack0000000000000008;
      return lVar10;
    }
  }
  puVar2 = PTR_DAT_06601258;
  uVar14 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06601260);
  FUN_04a5632c();
  uVar8 = FUN_033c3210(uVar14,uVar6,*(undefined8 *)puVar2);
  if ((uVar8 & 1) != 0) {
    thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
    FUN_028be084();
    uVar14 = FUN_04ef45ec(0);
    FUN_028be474();
    plVar9 = *(long **)(unaff_x20 + 0x10);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_06601280);
LAB_05048740:
    uVar6 = FUN_05017038(uVar6,uVar14,plVar9,0);
    thunk_FUN_02c7737c(PTR_DAT_065e5438);
    uVar14 = thunk_FUN_02cea894();
    FUN_04fba52c(uVar14,uVar6,0);
    uVar6 = thunk_FUN_02c7737c(PTR_DAT_06601288);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar14,uVar6);
  }
  plVar9 = (long *)Oculus_Interaction_TouchHandGrabInteractor__InjectHoverLocation();
  puVar2 = PTR_DAT_06600848;
  if (plVar9 == (long *)0x0) goto LAB_05048450;
  lVar10 = *plVar9;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar8 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06600848) {
        puVar11 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05047e9c;
      }
      uVar8 = uVar8 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06600848,0);
LAB_05047e9c:
  plVar9 = (long *)(*(code *)*puVar11)(plVar9,uVar6,puVar11[1]);
  puVar3 = PTR_DAT_06601270;
  if (plVar9 == (long *)0x0) goto LAB_05048450;
  lVar10 = plVar9[0xe];
  if (lVar10 == 0) {
    lVar10 = plVar9[0xf];
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066010b8);
  FUN_05041894();
  uVar14 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_05048b54(uVar14,uVar15,uVar6);
  uVar6 = Oculus_Interaction_TouchHandGrabInteractor__InjectOptionalCurlDeltaThreshold();
  if (lVar7 != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05048450;
    *(long *)(*(long *)(unaff_x19 + 0x30) + 0x10) = lVar7;
  }
  if ((unaff_x22 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x30);
    _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffffffff0000;
    uVar6 = FUN_03c80878(&stack0x00000008,1,*(undefined8 *)PTR_DAT_065cc870);
    if (lVar7 == 0) goto LAB_05048450;
    *(undefined2 *)(lVar7 + 0x20) = uStack0000000000000008;
  }
  lVar7 = *(long *)(unaff_x19 + 0x30);
  uVar6 = FUN_050487c4(uVar6,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar7 == 0) goto LAB_05048450;
  *(undefined8 *)(lVar7 + 0x18) = uVar6;
  lVar7 = *(long *)(unaff_x19 + 0x30);
  uVar6 = FUN_05048874(uVar6,*(undefined8 *)(unaff_x20 + 0x10));
  if (lVar7 == 0) goto LAB_05048450;
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  if (lVar10 == 0) {
    switch(*(undefined4 *)((long)plVar9 + 0x24)) {
    case 1:
      lVar7 = FUN_06207204();
      return lVar7;
    case 2:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x20;
      if (unaff_w21 != 2) {
        uVar5 = 0x60;
      }
      _uStack0000000000000008 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar7 == 0) goto LAB_05048450;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar6 = FUN_05048970();
      if (lVar7 == 0) goto LAB_05048450;
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_065dd190 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_03458c78(uVar6,*(undefined8 *)PTR_DAT_06601268);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_065dd170 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar6 = FUN_05013718(uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
      }
      uVar8 = FUN_04f497f4(uVar6,0,0);
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x30);
        uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06600fb8);
        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                  (uVar6,*(undefined8 *)PTR_DAT_06600fc0);
        if (lVar7 == 0) goto LAB_05048450;
        *(undefined8 *)(lVar7 + 0x98) = uVar6;
        if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05048450;
        plVar9 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
        uVar6 = FUN_05047b5c();
        if (plVar9 == (long *)0x0) goto LAB_05048450;
        lVar7 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06600ff0) {
              puVar11 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_050486f0;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_06600ff0,2);
LAB_050486f0:
        (*(code *)*puVar11)(plVar9,uVar6,puVar11[1]);
      }
      break;
    case 3:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar5 = Oculus_Interaction_Axis1DFingerUseAPI__Start
                        (uVar6,*(undefined8 *)(unaff_x20 + 0x10),unaff_w21);
      _uStack0000000000000008 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar7 == 0) goto LAB_05048450;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05048450;
      uVar8 = *(ulong *)(*(long *)(unaff_x19 + 0x30) + 0x30);
      if (((uVar8 >> 0x20 == 4) && ((uVar8 & 0xff) != 0)) &&
         (uVar8 = FUN_050180a4(*(undefined8 *)(unaff_x20 + 0x10),0), (uVar8 & 1) != 0)) {
        plVar9 = *(long **)(unaff_x20 + 0x10);
        uVar6 = *(undefined8 *)PTR_DAT_065dce50;
        if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar6 = FUN_04f3fb68(uVar6,0);
        if (plVar9 == (long *)0x0) goto LAB_05048450;
        uVar8 = (**(code **)(*plVar9 + 0x1f8))(plVar9,uVar6,1,*(undefined8 *)(*plVar9 + 0x200));
        if ((uVar8 & 1) == 0) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ff188);
          System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                    (uVar6,*(undefined8 *)PTR_DAT_065ff180);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0xe0) = uVar6;
            uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_065dce40 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            lVar7 = FUN_05008edc(uVar6,0);
            puVar4 = PTR_DAT_065ff1e8;
            puVar3 = PTR_DAT_065dd180;
            puVar2 = PTR_DAT_065cf270;
            if ((lVar7 != 0) && (lVar10 = *(long *)(lVar7 + 0x20), lVar10 != 0)) {
              uVar8 = 0;
              while( true ) {
                if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar8) goto LAB_05047fa0;
                lVar10 = *(long *)(lVar7 + 0x18);
                if (lVar10 == 0) break;
                if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c84();
                }
                uVar6 = *(undefined8 *)(lVar10 + uVar8 * 8 + 0x20);
                uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                uVar6 = FUN_04f6551c(uVar14,uVar6,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_02cd038c(*(long *)puVar3);
                }
                uVar6 = FUN_05066808(uVar6,0);
                if ((*(long *)(unaff_x19 + 0x30) == 0) ||
                   (plVar9 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xe0), plVar9 == (long *)0x0))
                break;
                lVar10 = *plVar9;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                      puVar11 = (undefined8 *)(lVar10 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                      goto LAB_05048434;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar11 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar4,2);
LAB_05048434:
                (*(code *)*puVar11)(plVar9,uVar6,puVar11[1]);
                lVar10 = *(long *)(lVar7 + 0x20);
                uVar8 = uVar8 + 1;
                if (lVar10 == 0) break;
              }
            }
          }
          goto LAB_05048450;
        }
      }
      break;
    case 4:
      lVar7 = plVar9[0xc];
      if (*(int *)(*(long *)PTR_DAT_065dd170 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_05000e54(lVar7,0);
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x41;
      if (unaff_w21 == 2) {
        uVar5 = 1;
      }
      uVar6 = *(undefined8 *)PTR_DAT_065ff0e8;
      if ((uVar8 & 1) == 0) {
        uVar5 = 1;
      }
      goto LAB_05047f90;
    case 5:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar7 == 0) goto LAB_05048450;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
      uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_065dd170 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05013938(uVar6,&stack0x00000018,&stack0x00000010,0);
      uVar6 = in_stack_00000018;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_04f497f4(uVar6,0,0);
      if ((uVar8 & 1) != 0) {
        plVar9 = (long *)Oculus_Interaction_TouchHandGrabInteractor__InjectHoverLocation();
        uVar6 = in_stack_00000018;
        if (plVar9 == (long *)0x0) goto LAB_05048450;
        lVar7 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0504869c;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,0);
LAB_0504869c:
        lVar7 = (*(code *)*puVar11)(plVar9,uVar6,puVar11[1]);
        if (lVar7 == 0) goto LAB_05048450;
        if (*(int *)(lVar7 + 0x24) == 3) {
          lVar7 = *(long *)(unaff_x19 + 0x30);
          uVar6 = FUN_05047b5c();
          if (lVar7 == 0) goto LAB_05048450;
          *(undefined8 *)(lVar7 + 0xc0) = uVar6;
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_05047ff8_caseD_6;
    case 7:
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar5 = 0x10;
      if (unaff_w21 != 2) {
        uVar5 = 0x50;
      }
      _uStack0000000000000008 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&stack0x00000008,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar7 == 0) goto LAB_05048450;
      *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
      lVar7 = *(long *)(unaff_x19 + 0x30);
      uVar6 = FUN_05048970();
      if (lVar7 == 0) goto LAB_05048450;
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
      bVar1 = *(byte *)(*(long *)PTR_DAT_066003b0 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_066003b0))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar9);
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05048450;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
      FUN_028be084();
      uVar14 = FUN_04ef45ec(0);
      uVar6 = thunk_FUN_02c7737c(PTR_DAT_06601290);
      goto LAB_05048740;
    }
  }
  else {
switchD_05047ff8_caseD_6:
    lVar7 = *(long *)(unaff_x19 + 0x30);
    uVar5 = 0x7f;
    uVar6 = *(undefined8 *)PTR_DAT_065ff0e8;
LAB_05047f90:
    _uStack0000000000000008 = 0;
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
              (&stack0x00000008,uVar5,uVar6);
    if (lVar7 == 0) goto LAB_05048450;
    *(ulong *)(lVar7 + 0x30) = _uStack0000000000000008;
  }
LAB_05047fa0:
  lVar7 = FUN_050477ac();
  if (lVar7 != 0) {
    return *(long *)(lVar7 + 0x18);
  }
LAB_05048450:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


