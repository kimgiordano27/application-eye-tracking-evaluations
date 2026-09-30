/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Ssse3$$hadd_epi16
ENTRY_POINT: 056fc128
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x056fc524) */
/* WARNING: Removing unreachable block (ram,0x056fc850) */
/* WARNING: Removing unreachable block (ram,0x056fc3b8) */
/* WARNING: Removing unreachable block (ram,0x056fc8a4) */
/* WARNING: Removing unreachable block (ram,0x056fc1ec) */

undefined8
Unity_Burst_Intrinsics_X86_Ssse3__hadd_epi16(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int in_w10;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000068;
  
  do {
    *(int *)(unaff_x21 + 0x1c) = in_w10;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    }
    else {
      FUN_039683cc();
    }
    do {
      lVar10 = *unaff_x22;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x23) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_056fc04c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_056fc04c:
      uVar12 = (*(code *)*puVar5)();
      if ((uVar12 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_02cea798();
        if (plVar6 == (long *)0x0) goto LAB_056fc1e0;
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_056fc1b8;
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_056fc1a0;
      }
      lVar10 = *unaff_x22;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x23) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_056fc0ac;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_056fc0ac:
      plVar6 = (long *)(*(code *)*puVar5)();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x25 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018();
      }
      plVar6 = (long *)thunk_FUN_02cea9e8();
      plVar9 = (long *)plVar6[1];
    } while (plVar9 == (long *)0x0);
    plVar6 = (long *)*plVar6;
    if ((plVar6 != (long *)0x0) && (*plVar6 != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018();
    }
    if (*plVar9 != *unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar9);
    }
    param_3 = FUN_04db9398(plVar6,*unaff_x27,plVar9,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    param_1 = *(long *)(unaff_x21 + 0x10);
    in_w10 = *(int *)(unaff_x21 + 0x1c) + 1;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_056fc1a0:
    if (*(long *)(piVar13 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_056fc1d4;
    }
  }
LAB_056fc1b8:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar6,*unaff_x24,0);
LAB_056fc1d4:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_056fc1e0:
  if (unaff_x21 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  in_stack_00000050 = System_Collections_Generic_List<FocusController_FocusedElement>__get_Item();
  lVar10 = FUN_056fddbc();
  if (lVar10 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  iVar4 = FUN_043daf40(lVar10,*(undefined8 *)PTR_DAT_066240b0);
  if (0 < iVar4) {
    plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce360);
    FUN_04dc5d24(plVar6,0);
    lVar10 = FUN_056fddbc();
    if (lVar10 != 0) {
      plVar9 = (long *)FUN_043db518(lVar10,*(undefined8 *)PTR_DAT_066240a8);
      puVar3 = PTR_DAT_065cb5e0;
      puVar2 = PTR_DAT_065c8d08;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar10 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_056fc2cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,0);
LAB_056fc2cc:
        uVar12 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        if ((uVar12 & 1) == 0) goto LAB_056fc348;
        lVar10 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto FUN_056fc328;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar3,0);
FUN_056fc328:
        uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
        FUN_056d268c(plVar6,uVar7,0);
      } while( true );
    }
    goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  }
  goto LAB_056fc3d4;
LAB_056fc348:
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_056fc3a0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*unaff_x24,0);
LAB_056fc3a0:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  if (plVar6 == (long *)0x0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
LAB_056fc3d4:
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(char *)(unaff_x20 + 0x69) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    in_stack_00000038 = thunk_FUN_02cb1f08(0);
    in_stack_00000030 = 0;
  }
  else {
    FUN_056fd6ac(&stack0x00000038,&stack0x00000030,1);
  }
  if (*(char *)(unaff_x20 + 0x6a) == '\0') {
    in_stack_00000028 = 0;
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    in_stack_00000020 = thunk_FUN_02cb1f5c(0);
  }
  else {
    FUN_056fd6ac(&stack0x00000028,&stack0x00000020,0);
  }
  if (*(char *)(unaff_x20 + 0x6b) == '\0') {
    in_stack_00000018 = 0;
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    in_stack_00000010 = thunk_FUN_02cb1eb8(0);
  }
  else {
    FUN_056fd6ac(&stack0x00000018,&stack0x00000010,0);
  }
  FUN_056fd584();
  uVar12 = FUN_02c6d228();
  iVar4 = in_stack_00000048;
  if ((uVar12 & 1) == 0) {
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_065c8918);
    lVar10 = FUN_02ce7ad4(uVar7,8);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_066240c0);
    if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar7;
    if ((DAT_06a7708d & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a7708d = 1;
    }
    lVar11 = *(long *)(unaff_x20 + 0x10);
    if (lVar11 == 0) {
      lVar11 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
    }
    if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(long *)(lVar10 + 0x28) = lVar11;
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_066240c8);
    if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar10 + 0x30) = uVar7;
    if ((DAT_06a77089 & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a77089 = 1;
    }
    lVar11 = *(long *)(unaff_x20 + 0x18);
    if (lVar11 == 0) {
      lVar11 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
    }
    if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(long *)(lVar10 + 0x38) = lVar11;
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_066240d0);
    if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar10 + 0x40) = uVar7;
    if ((DAT_06a7708e & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a7708e = 1;
    }
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if (lVar11 == 0) {
      lVar11 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
    }
    if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(long *)(lVar10 + 0x48) = lVar11;
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_066240d8);
    if (*(uint *)(lVar10 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar10 + 0x50) = uVar7;
    uVar7 = FUN_05747b5c(-in_stack_00000048,0);
    if (7 < *(uint *)(lVar10 + 0x18)) {
      *(undefined8 *)(lVar10 + 0x58) = uVar7;
      uVar7 = FUN_04db97ac(lVar10,0);
      thunk_FUN_02c7737c(PTR_DAT_06623fe0);
      uVar8 = thunk_FUN_02cea894();
      FUN_05748450(uVar8,-iVar4,uVar7,0);
      uVar7 = thunk_FUN_02c7737c(PTR_DAT_066240b8);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar8,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  uVar12 = FUN_04f7b8cc(in_stack_00000068,0,0);
  uVar7 = in_stack_00000068;
  if ((uVar12 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_065c9178 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04e58354(uVar7,0);
    in_stack_00000068 = 0;
  }
  uVar7 = in_stack_00000040;
  uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06615f78);
  FUN_053dfaac(uVar8,uVar7,1,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar8;
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  if (*(char *)(unaff_x19 + 0x78) != '\0') {
    FUN_056fb2f0();
  }
  uVar7 = in_stack_00000038;
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  *(int *)(unaff_x19 + 0x2c) = in_stack_00000048;
  if (*(char *)(unaff_x20 + 0x69) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar7,&stack0x0000008c,0);
    lVar10 = *(long *)(unaff_x20 + 0xa8);
    if (lVar10 == 0) {
      lVar10 = FUN_04dd6ee0(0);
    }
    uVar7 = in_stack_00000030;
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
    FUN_04ec17c4(uVar8,uVar7,2,1,0x2000,0);
    plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5ae8);
    FUN_04e89150(plVar6,uVar8,lVar10,0);
    if (plVar6 == (long *)0x0) {
Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    (**(code **)(*plVar6 + 0x328))(plVar6,1,*(undefined8 *)(*plVar6 + 0x330));
    *(long **)(unaff_x19 + 0xb8) = plVar6;
  }
  uVar7 = in_stack_00000020;
  if (*(char *)(unaff_x20 + 0x6a) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar7,&stack0x0000008c,0);
    puVar2 = PTR_DAT_065e5a70;
    lVar10 = *(long *)(unaff_x20 + 0x70);
    if (lVar10 == 0) {
      if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6f9d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
        DAT_06a6f9d1 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    }
    uVar7 = in_stack_00000028;
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
    FUN_04ec17c4(uVar8,uVar7,1,1,0x2000,0);
    uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
    FUN_04e84808(uVar7,uVar8,lVar10,1,0);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar7;
  }
  uVar7 = in_stack_00000010;
  if (*(char *)(unaff_x20 + 0x6b) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar7,&stack0x0000008c,0);
    puVar2 = PTR_DAT_065e5a70;
    lVar10 = *(long *)(unaff_x20 + 0x78);
    if (lVar10 == 0) {
      if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6f9d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
        DAT_06a6f9d1 = '\x01';
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar10 = *(long *)puVar2;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
    }
    uVar7 = in_stack_00000018;
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
    FUN_04ec17c4(uVar8,uVar7,1,1,0x2000,0);
    uVar7 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
    FUN_04e84808(uVar7,uVar8,lVar10,1,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar7;
  }
  return 1;
}


