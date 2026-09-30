/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Ssse3$$hadds_epi16
ENTRY_POINT: 056fc1b4
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x056fc524) */
/* WARNING: Removing unreachable block (ram,0x056fc8a4) */
/* WARNING: Removing unreachable block (ram,0x056fc3b8) */

undefined8
Unity_Burst_Intrinsics_X86_Ssse3__hadds_epi16(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
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
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_056fc1d4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_056fc1d4:
  (*(code *)*puVar4)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02cbedc4(unaff_x23);
  }
  if ((unaff_w25 != 0xe) && (unaff_w25 != 0)) {
    return 1;
  }
  if (unaff_x21 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  in_stack_00000050 = System_Collections_Generic_List<FocusController_FocusedElement>__get_Item();
  lVar5 = FUN_056fddbc();
  if (lVar5 == 0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  iVar3 = FUN_043daf40(lVar5,*(undefined8 *)PTR_DAT_066240b0);
  if (0 < iVar3) {
    plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce360);
    FUN_04dc5d24(plVar6,0);
    lVar5 = FUN_056fddbc();
    if (lVar5 != 0) {
      plVar7 = (long *)FUN_043db518(lVar5,*(undefined8 *)PTR_DAT_066240a8);
      puVar2 = PTR_DAT_065cb5e0;
      puVar1 = PTR_DAT_065c8d08;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar5 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_056fc2cc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar1,0);
LAB_056fc2cc:
        uVar11 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        if ((uVar11 & 1) == 0) goto LAB_056fc348;
        lVar5 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
              goto FUN_056fc328;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)FUN_02ce0a7c(plVar7,*(long *)puVar2,0);
FUN_056fc328:
        uVar8 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        FUN_056d268c(plVar6,uVar8,0);
      } while( true );
    }
    goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  }
  goto LAB_056fc3d4;
LAB_056fc348:
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_056fc3a0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,0);
LAB_056fc3a0:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  if (plVar6 == (long *)0x0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
  uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
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
  uVar11 = FUN_02c6d228();
  iVar3 = in_stack_00000048;
  if ((uVar11 & 1) == 0) {
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_065c8918);
    lVar5 = FUN_02ce7ad4(uVar8,8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_066240c0);
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar5 + 0x20) = uVar8;
    if ((DAT_06a7708d & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a7708d = 1;
    }
    lVar10 = *(long *)(unaff_x20 + 0x10);
    if (lVar10 == 0) {
      lVar10 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
    }
    if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(long *)(lVar5 + 0x28) = lVar10;
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_066240c8);
    if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar5 + 0x30) = uVar8;
    if ((DAT_06a77089 & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a77089 = 1;
    }
    lVar10 = *(long *)(unaff_x20 + 0x18);
    if (lVar10 == 0) {
      lVar10 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
    }
    if (*(uint *)(lVar5 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(long *)(lVar5 + 0x38) = lVar10;
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_066240d0);
    if (*(uint *)(lVar5 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar5 + 0x40) = uVar8;
    if ((DAT_06a7708e & 1) == 0) {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
      DAT_06a7708e = 1;
    }
    lVar10 = *(long *)(unaff_x20 + 0x20);
    if (lVar10 == 0) {
      lVar10 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
    }
    if (*(uint *)(lVar5 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(long *)(lVar5 + 0x48) = lVar10;
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_066240d8);
    if (*(uint *)(lVar5 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar5 + 0x50) = uVar8;
    uVar8 = FUN_05747b5c(-in_stack_00000048,0);
    if (*(uint *)(lVar5 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined8 *)(lVar5 + 0x58) = uVar8;
    uVar8 = FUN_04db97ac(lVar5,0);
    thunk_FUN_02c7737c(PTR_DAT_06623fe0);
    uVar9 = thunk_FUN_02cea894();
    FUN_05748450(uVar9,-iVar3,uVar8,0);
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_066240b8);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar9,uVar8);
  }
  uVar11 = FUN_04f7b8cc(in_stack_00000068,0,0);
  uVar8 = in_stack_00000068;
  if ((uVar11 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_065c9178 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04e58354(uVar8,0);
    in_stack_00000068 = 0;
  }
  uVar8 = in_stack_00000040;
  uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06615f78);
  FUN_053dfaac(uVar9,uVar8,1,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar9;
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  if (*(char *)(unaff_x19 + 0x78) != '\0') {
    FUN_056fb2f0();
  }
  uVar8 = in_stack_00000038;
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  *(int *)(unaff_x19 + 0x2c) = in_stack_00000048;
  if (*(char *)(unaff_x20 + 0x69) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar8,&stack0x0000008c,0);
    lVar5 = *(long *)(unaff_x20 + 0xa8);
    if (lVar5 == 0) {
      lVar5 = FUN_04dd6ee0(0);
    }
    uVar8 = in_stack_00000030;
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
    FUN_04ec17c4(uVar9,uVar8,2,1,0x2000,0);
    plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5ae8);
    FUN_04e89150(plVar6,uVar9,lVar5,0);
    if (plVar6 == (long *)0x0) {
Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    (**(code **)(*plVar6 + 0x328))(plVar6,1,*(undefined8 *)(*plVar6 + 0x330));
    *(long **)(unaff_x19 + 0xb8) = plVar6;
  }
  uVar8 = in_stack_00000020;
  if (*(char *)(unaff_x20 + 0x6a) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar8,&stack0x0000008c,0);
    puVar1 = PTR_DAT_065e5a70;
    lVar5 = *(long *)(unaff_x20 + 0x70);
    if (lVar5 == 0) {
      if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6f9d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
        DAT_06a6f9d1 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    }
    uVar8 = in_stack_00000028;
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
    FUN_04ec17c4(uVar9,uVar8,1,1,0x2000,0);
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
    FUN_04e84808(uVar8,uVar9,lVar5,1,0);
    *(undefined8 *)(unaff_x19 + 0xb0) = uVar8;
  }
  uVar8 = in_stack_00000010;
  if (*(char *)(unaff_x20 + 0x6b) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    thunk_FUN_02cb2398(uVar8,&stack0x0000008c,0);
    puVar1 = PTR_DAT_065e5a70;
    lVar5 = *(long *)(unaff_x20 + 0x78);
    if (lVar5 == 0) {
      if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if (DAT_06a6f9d1 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
        DAT_06a6f9d1 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    }
    uVar8 = in_stack_00000018;
    uVar9 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
    FUN_04ec17c4(uVar9,uVar8,1,1,0x2000,0);
    uVar8 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
    FUN_04e84808(uVar8,uVar9,lVar5,1,0);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar8;
  }
  return 1;
}


