/*
FUNCTION_NAME: FUN_05047b5c
ENTRY_POINT: 05047b5c
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


long FUN_05047b5c(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_06601250;
  if ((DAT_06a70108 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cf270);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601258);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce50);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601260);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff1e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06600ff0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06600848);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd180);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066003b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06600070);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066010b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601268);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd190);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff180);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06600fc0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06600fb8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff188);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc868);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff0e0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc870);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff0e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ff0f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cd610);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd170);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601270);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601278);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06601250);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd048);
    DAT_06a70108 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04f7383c(lVar6,0);
  puVar2 = PTR_DAT_065dd048;
  if (lVar6 == 0) goto LAB_05048450;
  *(undefined8 *)(lVar6 + 0x10) = param_2;
  FUN_0501746c(param_2,*(undefined8 *)puVar2,0);
  uVar7 = FUN_05048970(param_1,*(undefined8 *)(lVar6 + 0x10),0);
  lVar8 = FUN_05048970(param_1,*(undefined8 *)(lVar6 + 0x10),1);
  uVar9 = FUN_05017030(uVar7,0);
  if ((uVar9 & 1) == 0) {
    plVar10 = *(long **)(param_1 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_05048450;
    lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,uVar7,*(undefined8 *)(*plVar10 + 0x180));
    if (lVar11 != 0) {
      if ((param_3 != 2) &&
         (uVar9 = FUN_05048a7c(*(undefined8 *)(lVar11 + 0x30),0x40), (uVar9 & 1) == 0)) {
        if ((*(ulong *)(lVar11 + 0x30) & 0xff) == 0) {
          uVar9 = 0;
        }
        else {
          local_78 = 0;
          Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                    (&local_78,(uint)(*(ulong *)(lVar11 + 0x30) >> 0x20) | 0x40,
                     *(undefined8 *)PTR_DAT_065ff0e8);
          uVar9 = local_78;
        }
        *(ulong *)(lVar11 + 0x30) = uVar9;
      }
      if ((param_4 & 1) == 0) {
        return lVar11;
      }
      if ((0xff < *(ushort *)(lVar11 + 0x20)) && ((*(ushort *)(lVar11 + 0x20) & 0xff) != 0)) {
        return lVar11;
      }
      local_78 = local_78 & 0xffffffffffff0000;
      FUN_03c80878(&local_78,1,*(undefined8 *)PTR_DAT_065cc870);
      *(undefined2 *)(lVar11 + 0x20) = (undefined2)local_78;
      return lVar11;
    }
  }
  puVar3 = PTR_DAT_06601278;
  puVar2 = PTR_DAT_06601258;
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06601260);
  FUN_04a5632c(uVar7,lVar6,*(undefined8 *)puVar3,0);
  uVar9 = FUN_033c3210(uVar16,uVar7,*(undefined8 *)puVar2);
  if ((uVar9 & 1) != 0) {
    thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
    FUN_028be084();
    uVar16 = FUN_04ef45ec(0);
    FUN_028be474(lVar6);
    plVar10 = *(long **)(lVar6 + 0x10);
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_06601280);
LAB_05048740:
    uVar7 = FUN_05017038(uVar7,uVar16,plVar10,0);
    thunk_FUN_02c7737c(PTR_DAT_065e5438);
    uVar16 = thunk_FUN_02cea894();
    FUN_04fba52c(uVar16,uVar7,0);
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_06601288);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar16,uVar7);
  }
  plVar10 = (long *)Oculus_Interaction_TouchHandGrabInteractor__InjectHoverLocation(param_1);
  puVar2 = PTR_DAT_06600848;
  if (plVar10 == (long *)0x0) goto LAB_05048450;
  lVar11 = *plVar10;
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar9 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06600848) {
        puVar12 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_05047e9c;
      }
      uVar9 = uVar9 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_06600848,0);
LAB_05047e9c:
  plVar10 = (long *)(*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
  puVar3 = PTR_DAT_06601270;
  if (plVar10 == (long *)0x0) goto LAB_05048450;
  lVar11 = plVar10[0xe];
  if (lVar11 == 0) {
    lVar11 = plVar10[0xf];
  }
  uVar17 = *(undefined8 *)(lVar6 + 0x10);
  uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_066010b8);
  FUN_05041894();
  uVar16 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_05048b54(uVar16,uVar17,uVar7);
  uVar7 = Oculus_Interaction_TouchHandGrabInteractor__InjectOptionalCurlDeltaThreshold
                    (param_1,uVar16);
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05048450;
    *(long *)(*(long *)(param_1 + 0x30) + 0x10) = lVar8;
  }
  if ((param_4 & 1) != 0) {
    lVar8 = *(long *)(param_1 + 0x30);
    local_78 = local_78 & 0xffffffffffff0000;
    uVar7 = FUN_03c80878(&local_78,1,*(undefined8 *)PTR_DAT_065cc870);
    if (lVar8 == 0) goto LAB_05048450;
    *(undefined2 *)(lVar8 + 0x20) = (undefined2)local_78;
  }
  lVar8 = *(long *)(param_1 + 0x30);
  uVar7 = FUN_050487c4(uVar7,*(undefined8 *)(lVar6 + 0x10));
  if (lVar8 == 0) goto LAB_05048450;
  *(undefined8 *)(lVar8 + 0x18) = uVar7;
  lVar8 = *(long *)(param_1 + 0x30);
  uVar7 = FUN_05048874(uVar7,*(undefined8 *)(lVar6 + 0x10));
  if (lVar8 == 0) goto LAB_05048450;
  *(undefined8 *)(lVar8 + 0x28) = uVar7;
  if (lVar11 == 0) {
    switch(*(undefined4 *)((long)plVar10 + 0x24)) {
    case 1:
      lVar6 = FUN_06207204();
      return lVar6;
    case 2:
      lVar8 = *(long *)(param_1 + 0x30);
      uVar5 = 0x20;
      if (param_3 != 2) {
        uVar5 = 0x60;
      }
      local_78 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&local_78,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar8 == 0) goto LAB_05048450;
      *(ulong *)(lVar8 + 0x30) = local_78;
      lVar8 = *(long *)(param_1 + 0x30);
      uVar7 = FUN_05048970(param_1,*(undefined8 *)(lVar6 + 0x10),0);
      if (lVar8 == 0) goto LAB_05048450;
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_065dd190 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar8 = FUN_03458c78(uVar7,*(undefined8 *)PTR_DAT_06601268);
      if (lVar8 == 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = (uint)(*(char *)(lVar8 + 0x68) == '\0') << 1;
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_065dd170 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_05013718(uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c(*(long *)PTR_DAT_065c89e8);
      }
      uVar9 = FUN_04f497f4(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x30);
        uVar16 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06600fb8);
        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                  (uVar16,*(undefined8 *)PTR_DAT_06600fc0);
        if (lVar6 == 0) goto LAB_05048450;
        *(undefined8 *)(lVar6 + 0x98) = uVar16;
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_05048450;
        plVar10 = *(long **)(*(long *)(param_1 + 0x30) + 0x98);
        uVar7 = FUN_05047b5c(param_1,uVar7,iVar15,0);
        if (plVar10 == (long *)0x0) goto LAB_05048450;
        lVar6 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06600ff0) {
              puVar12 = (undefined8 *)(lVar6 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_050486f0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_06600ff0,2);
LAB_050486f0:
        (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
      }
      break;
    case 3:
      lVar8 = *(long *)(param_1 + 0x30);
      uVar5 = Oculus_Interaction_Axis1DFingerUseAPI__Start
                        (uVar7,*(undefined8 *)(lVar6 + 0x10),param_3);
      local_78 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&local_78,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar8 == 0) goto LAB_05048450;
      *(ulong *)(lVar8 + 0x30) = local_78;
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_05048450;
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x30);
      if (((uVar9 >> 0x20 == 4) && ((uVar9 & 0xff) != 0)) &&
         (uVar9 = FUN_050180a4(*(undefined8 *)(lVar6 + 0x10),0), (uVar9 & 1) != 0)) {
        plVar10 = *(long **)(lVar6 + 0x10);
        uVar7 = *(undefined8 *)PTR_DAT_065dce50;
        if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f3fb68(uVar7,0);
        if (plVar10 == (long *)0x0) goto LAB_05048450;
        uVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,uVar7,1,*(undefined8 *)(*plVar10 + 0x200));
        if ((uVar9 & 1) == 0) {
          lVar8 = *(long *)(param_1 + 0x30);
          uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ff188);
          System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                    (uVar7,*(undefined8 *)PTR_DAT_065ff180);
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0xe0) = uVar7;
            uVar7 = *(undefined8 *)(lVar6 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_065dce40 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            lVar8 = FUN_05008edc(uVar7,0);
            puVar4 = PTR_DAT_065ff1e8;
            puVar3 = PTR_DAT_065dd180;
            puVar2 = PTR_DAT_065cf270;
            if ((lVar8 != 0) && (lVar11 = *(long *)(lVar8 + 0x20), lVar11 != 0)) {
              uVar9 = 0;
              while( true ) {
                if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar9) goto LAB_05047fa0;
                lVar11 = *(long *)(lVar8 + 0x18);
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c84();
                }
                uVar7 = *(undefined8 *)(lVar11 + uVar9 * 8 + 0x20);
                uVar16 = *(undefined8 *)(lVar6 + 0x10);
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                uVar7 = FUN_04f6551c(uVar16,uVar7,0);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_02cd038c(*(long *)puVar3);
                }
                uVar7 = FUN_05066808(uVar7,0);
                if ((*(long *)(param_1 + 0x30) == 0) ||
                   (plVar10 = *(long **)(*(long *)(param_1 + 0x30) + 0xe0), plVar10 == (long *)0x0))
                break;
                lVar11 = *plVar10;
                uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                      puVar12 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                      goto LAB_05048434;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar12 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar4,2);
LAB_05048434:
                (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
                lVar11 = *(long *)(lVar8 + 0x20);
                uVar9 = uVar9 + 1;
                if (lVar11 == 0) break;
              }
            }
          }
          goto LAB_05048450;
        }
      }
      break;
    case 4:
      lVar6 = plVar10[0xc];
      if (*(int *)(*(long *)PTR_DAT_065dd170 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar9 = FUN_05000e54(lVar6,0);
      lVar6 = *(long *)(param_1 + 0x30);
      uVar5 = 0x41;
      if (param_3 == 2) {
        uVar5 = 1;
      }
      uVar7 = *(undefined8 *)PTR_DAT_065ff0e8;
      if ((uVar9 & 1) == 0) {
        uVar5 = 1;
      }
      goto LAB_05047f90;
    case 5:
      lVar8 = *(long *)(param_1 + 0x30);
      uVar5 = 0x10;
      if (param_3 != 2) {
        uVar5 = 0x50;
      }
      local_78 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&local_78,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar8 == 0) goto LAB_05048450;
      *(ulong *)(lVar8 + 0x30) = local_78;
      uVar7 = *(undefined8 *)(lVar6 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_065dd170 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05013938(uVar7,&uStack_68,&local_70,0);
      uVar7 = uStack_68;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar9 = FUN_04f497f4(uVar7,0,0);
      if ((uVar9 & 1) != 0) {
        plVar10 = (long *)Oculus_Interaction_TouchHandGrabInteractor__InjectHoverLocation(param_1);
        uVar7 = uStack_68;
        if (plVar10 == (long *)0x0) goto LAB_05048450;
        lVar6 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar6 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0504869c;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)puVar2,0);
LAB_0504869c:
        lVar6 = (*(code *)*puVar12)(plVar10,uVar7,puVar12[1]);
        if (lVar6 == 0) goto LAB_05048450;
        if (*(int *)(lVar6 + 0x24) == 3) {
          lVar6 = *(long *)(param_1 + 0x30);
          uVar7 = FUN_05047b5c(param_1,local_70,0,0);
          if (lVar6 == 0) goto LAB_05048450;
          *(undefined8 *)(lVar6 + 0xc0) = uVar7;
        }
      }
      break;
    case 6:
    case 8:
      goto switchD_05047ff8_caseD_6;
    case 7:
      lVar8 = *(long *)(param_1 + 0x30);
      uVar5 = 0x10;
      if (param_3 != 2) {
        uVar5 = 0x50;
      }
      local_78 = 0;
      Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
                (&local_78,uVar5,*(undefined8 *)PTR_DAT_065ff0e8);
      if (lVar8 == 0) goto LAB_05048450;
      *(ulong *)(lVar8 + 0x30) = local_78;
      lVar8 = *(long *)(param_1 + 0x30);
      uVar7 = FUN_05048970(param_1,*(undefined8 *)(lVar6 + 0x10),0);
      if (lVar8 == 0) goto LAB_05048450;
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
      bVar1 = *(byte *)(*(long *)PTR_DAT_066003b0 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_066003b0)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar10);
      }
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_05048450;
      *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xd0) = 1;
      break;
    default:
      thunk_FUN_02c7737c(PTR_DAT_065dc0d8);
      FUN_028be084();
      uVar16 = FUN_04ef45ec(0);
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_06601290);
      goto LAB_05048740;
    }
  }
  else {
switchD_05047ff8_caseD_6:
    lVar6 = *(long *)(param_1 + 0x30);
    uVar5 = 0x7f;
    uVar7 = *(undefined8 *)PTR_DAT_065ff0e8;
LAB_05047f90:
    local_78 = 0;
    Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__get_Value
              (&local_78,uVar5,uVar7);
    if (lVar6 == 0) goto LAB_05048450;
    *(ulong *)(lVar6 + 0x30) = local_78;
  }
LAB_05047fa0:
  lVar6 = FUN_050477ac(param_1);
  if (lVar6 != 0) {
    return *(long *)(lVar6 + 0x18);
  }
LAB_05048450:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


