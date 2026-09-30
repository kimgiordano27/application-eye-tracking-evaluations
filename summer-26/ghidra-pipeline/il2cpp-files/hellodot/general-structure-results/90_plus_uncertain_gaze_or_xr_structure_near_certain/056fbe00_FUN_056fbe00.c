/*
FUNCTION_NAME: FUN_056fbe00
ENTRY_POINT: 056fbe00
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x056fc524) */
/* WARNING: Removing unreachable block (ram,0x056fc3b8) */
/* WARNING: Removing unreachable block (ram,0x056fc8a4) */
/* WARNING: Removing unreachable block (ram,0x056fc850) */
/* WARNING: Removing unreachable block (ram,0x056fc1ec) */

undefined8 FUN_056fbe00(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_54;
  
  if ((DAT_06a77081 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066240a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066240b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065db6d0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cfd90);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cb5e0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9448);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d9a38);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9440);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9438);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9178);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065f1670);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06615f78);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce440);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5ae8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce360);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3778);
    DAT_06a77081 = 1;
  }
  puVar2 = PTR_DAT_065c9440;
  puVar3 = PTR_DAT_065c8a48;
  local_70 = 0;
  local_54 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_2 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  if (((*(long *)(param_2 + 0x70) != 0) &&
      (puVar14 = PTR_DAT_06624090, *(char *)(param_2 + 0x6a) == '\0')) ||
     ((*(long *)(param_2 + 0x78) != 0 &&
      (puVar14 = PTR_DAT_06624088, *(char *)(param_2 + 0x6b) == '\0')))) {
    uVar12 = thunk_FUN_02c7737c(puVar14);
    uVar12 = FUN_04d9c760(uVar12,0);
    thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
    uVar13 = thunk_FUN_02cea894();
    FUN_04f30dfc(uVar13,uVar12,0);
LAB_056fc914:
    uVar12 = thunk_FUN_02c7737c(PTR_DAT_066240b8);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar13,uVar12);
  }
  if (*(char *)(param_1 + 200) != '\0') {
    plVar9 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(param_1,0);
    FUN_028be474();
    uVar12 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    thunk_FUN_02c7737c(PTR_DAT_065de2c8);
    uVar13 = thunk_FUN_02cea894();
    FUN_04f3f918(uVar13,uVar12,0);
    goto LAB_056fc914;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(long *)(param_2 + 0x90) != 0) {
    lVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065c9438);
    System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
              (lVar8,*(undefined8 *)puVar2);
    plVar9 = (long *)FUN_056fd8a0(param_2);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
      puVar6 = PTR_DAT_065e3778;
      puVar5 = PTR_DAT_065db6d0;
      puVar4 = PTR_DAT_065c9448;
      puVar14 = PTR_DAT_065c8d08;
      puVar2 = PTR_DAT_065c8688;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar17 = *plVar9;
        lVar15 = *(long *)puVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_056fc04c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar15,0);
LAB_056fc04c:
        uVar18 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar18 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_02cea798(plVar9,*(undefined8 *)puVar3);
          if (plVar9 == (long *)0x0) goto LAB_056fc1e0;
          lVar15 = *plVar9;
          uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar18 == 0) goto LAB_056fc1b8;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_056fc1a0;
        }
        lVar17 = *plVar9;
        lVar15 = *(long *)puVar14;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar10 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_056fc0ac;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar15,1);
LAB_056fc0ac:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018();
        }
        plVar11 = (long *)thunk_FUN_02cea9e8();
        plVar16 = (long *)plVar11[1];
        if (plVar16 != (long *)0x0) {
          plVar11 = (long *)*plVar11;
          if ((plVar11 != (long *)0x0) && (*plVar11 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018();
          }
          if (*plVar16 != *(long *)puVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018(plVar16);
          }
          uVar12 = FUN_04db9398(plVar11,*(undefined8 *)puVar6,plVar16,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar15 = *(long *)(lVar8 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          }
          else {
            FUN_039683cc(lVar8,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
    goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  }
  goto LAB_056fc20c;
LAB_056fc348:
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_056fc3a0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar10 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar3,0);
LAB_056fc3a0:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if (plVar9 == (long *)0x0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  uVar12 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  *(undefined8 *)(param_2 + 0x18) = uVar12;
  goto LAB_056fc3d4;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_056fc1a0:
    if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_056fc1d4;
    }
  }
LAB_056fc1b8:
  puVar10 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar3,0);
LAB_056fc1d4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_056fc1e0:
  if (lVar8 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  local_90 = System_Collections_Generic_List<FocusController_FocusedElement>__get_Item
                       (lVar8,*(undefined8 *)PTR_DAT_065d9a38);
LAB_056fc20c:
  lVar8 = FUN_056fddbc(param_2);
  if (lVar8 != 0) {
    iVar7 = FUN_043daf40(lVar8,*(undefined8 *)PTR_DAT_066240b0);
    if (iVar7 < 1) {
LAB_056fc3d4:
      local_b0 = 0;
      local_a8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      if (*(char *)(param_2 + 0x69) == '\0') {
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        local_a8 = thunk_FUN_02cb1f08(0);
        local_b0 = 0;
      }
      else {
        FUN_056fd6ac(&local_a8,&local_b0,1);
      }
      if (*(char *)(param_2 + 0x6a) == '\0') {
        local_b8 = 0;
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        local_c0 = thunk_FUN_02cb1f5c(0);
      }
      else {
        FUN_056fd6ac(&local_b8,&local_c0,0);
      }
      if (*(char *)(param_2 + 0x6b) == '\0') {
        local_c8 = 0;
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        local_d0 = thunk_FUN_02cb1eb8(0);
      }
      else {
        FUN_056fd6ac(&local_c8,&local_d0,0);
      }
      FUN_056fd584(param_2,&local_a0);
      uVar18 = FUN_02c6d228(param_2,local_a8,local_c0,local_d0,&local_a0);
      if ((uVar18 & 1) == 0) {
        iVar7 = (int)uStack_98;
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_065c8918);
        lVar8 = FUN_02ce7ad4(uVar12,8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_066240c0);
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(undefined8 *)(lVar8 + 0x20) = uVar12;
        if ((DAT_06a7708d & 1) == 0) {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
          DAT_06a7708d = 1;
        }
        lVar15 = *(long *)(param_2 + 0x10);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(long *)(lVar8 + 0x28) = lVar15;
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_066240c8);
        if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(undefined8 *)(lVar8 + 0x30) = uVar12;
        if ((DAT_06a77089 & 1) == 0) {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
          DAT_06a77089 = 1;
        }
        lVar15 = *(long *)(param_2 + 0x18);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(long *)(lVar8 + 0x38) = lVar15;
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_066240d0);
        if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(undefined8 *)(lVar8 + 0x40) = uVar12;
        if ((DAT_06a7708e & 1) == 0) {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
          DAT_06a7708e = 1;
        }
        lVar15 = *(long *)(param_2 + 0x20);
        if (lVar15 == 0) {
          lVar15 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
        }
        if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(long *)(lVar8 + 0x48) = lVar15;
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_066240d8);
        if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(undefined8 *)(lVar8 + 0x50) = uVar12;
        uVar12 = FUN_05747b5c(-(int)uStack_98,0);
        if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(undefined8 *)(lVar8 + 0x58) = uVar12;
        uVar12 = FUN_04db97ac(lVar8,0);
        thunk_FUN_02c7737c(PTR_DAT_06623fe0);
        uVar13 = thunk_FUN_02cea894();
        FUN_05748450(uVar13,-iVar7,uVar12,0);
        uVar12 = thunk_FUN_02c7737c(PTR_DAT_066240b8);
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar13,uVar12);
      }
      uVar18 = FUN_04f7b8cc(local_78,0,0);
      uVar12 = local_78;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_065c9178 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_04e58354(uVar12,0);
        local_78 = 0;
      }
      uVar12 = local_a0;
      uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06615f78);
      FUN_053dfaac(uVar13,uVar12,1,0);
      *(undefined8 *)(param_1 + 0x38) = uVar13;
      *(undefined1 *)(param_1 + 0x30) = 1;
      if (*(char *)(param_1 + 0x78) != '\0') {
        FUN_056fb2f0(param_1);
      }
      uVar12 = local_a8;
      *(undefined1 *)(param_1 + 0x28) = 1;
      *(int *)(param_1 + 0x2c) = (int)uStack_98;
      if (*(char *)(param_2 + 0x69) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        thunk_FUN_02cb2398(uVar12,&local_54,0);
        lVar8 = *(long *)(param_2 + 0xa8);
        if (lVar8 == 0) {
          lVar8 = FUN_04dd6ee0(0);
        }
        uVar12 = local_b0;
        uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
        FUN_04ec17c4(uVar13,uVar12,2,1,0x2000,0);
        plVar9 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5ae8);
        FUN_04e89150(plVar9,uVar13,lVar8,0);
        if (plVar9 == (long *)0x0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
        (**(code **)(*plVar9 + 0x328))(plVar9,1,*(undefined8 *)(*plVar9 + 0x330));
        *(long **)(param_1 + 0xb8) = plVar9;
      }
      uVar12 = local_c0;
      if (*(char *)(param_2 + 0x6a) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        thunk_FUN_02cb2398(uVar12,&local_54,0);
        puVar3 = PTR_DAT_065e5a70;
        lVar8 = *(long *)(param_2 + 0x70);
        if (lVar8 == 0) {
          if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (DAT_06a6f9d1 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
            DAT_06a6f9d1 = '\x01';
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar8 = *(long *)puVar3;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        }
        uVar12 = local_b8;
        uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
        FUN_04ec17c4(uVar13,uVar12,1,1,0x2000,0);
        uVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
        FUN_04e84808(uVar12,uVar13,lVar8,1,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar12;
      }
      uVar12 = local_d0;
      if (*(char *)(param_2 + 0x6b) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        thunk_FUN_02cb2398(uVar12,&local_54,0);
        puVar3 = PTR_DAT_065e5a70;
        lVar8 = *(long *)(param_2 + 0x78);
        if (lVar8 == 0) {
          if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if (DAT_06a6f9d1 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
            DAT_06a6f9d1 = '\x01';
          }
          lVar8 = *(long *)puVar3;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar8 = *(long *)puVar3;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
        }
        uVar12 = local_c8;
        uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
        FUN_04ec17c4(uVar13,uVar12,1,1,0x2000,0);
        uVar12 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
        FUN_04e84808(uVar12,uVar13,lVar8,1,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar12;
      }
      return 1;
    }
    plVar9 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce360);
    FUN_04dc5d24(plVar9,0);
    lVar8 = FUN_056fddbc(param_2);
    if (lVar8 != 0) {
      plVar11 = (long *)FUN_043db518(lVar8,*(undefined8 *)PTR_DAT_066240a8);
      puVar14 = PTR_DAT_065cb5e0;
      puVar2 = PTR_DAT_065c8d08;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar8 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_056fc2cc;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar2,0);
LAB_056fc2cc:
        uVar18 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar18 & 1) == 0) goto LAB_056fc348;
        lVar8 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar14) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto FUN_056fc328;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar14,0);
FUN_056fc328:
        uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        FUN_056d268c(plVar9,uVar12,0);
      } while( true );
    }
  }
Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


