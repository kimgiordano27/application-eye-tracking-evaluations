/*
FUNCTION_NAME: Unity.Burst.Intrinsics.X86.Ssse3$$hsub_epi16
ENTRY_POINT: 056fc28c
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056fc524) */
/* WARNING: Removing unreachable block (ram,0x056fc3b8) */
/* WARNING: Removing unreachable block (ram,0x056fc8a4) */
/* WARNING: Removing unreachable block (ram,0x056fc850) */

undefined8
Unity_Burst_Intrinsics_X86_Ssse3__hsub_epi16(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong in_x9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  undefined8 in_stack_00000068;
  
  do {
    if (in_x9 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == param_3) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_056fc2cc;
        }
        in_x9 = in_x9 - 1;
        piVar10 = piVar10 + 4;
      } while (in_x9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_056fc2cc:
    uVar4 = (*(code *)*puVar3)();
    if ((uVar4 & 1) == 0) break;
    lVar8 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_056fc280;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_056fc280:
    (*(code *)*puVar3)();
    FUN_056d268c();
    param_1 = *unaff_x21;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar8 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_056fc3a0;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_056fc3a0:
    (*(code *)*puVar3)();
  }
  if (unaff_x22 != (long *)0x0) {
    uVar5 = (**(code **)(*unaff_x22 + 0x168))();
    *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
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
    uVar4 = FUN_02c6d228();
    iVar2 = in_stack_00000048;
    if ((uVar4 & 1) == 0) {
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_065c8918);
      lVar8 = FUN_02ce7ad4(uVar5,8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_066240c0);
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(lVar8 + 0x20) = uVar5;
      if ((DAT_06a7708d & 1) == 0) {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
        DAT_06a7708d = 1;
      }
      lVar9 = *(long *)(unaff_x20 + 0x10);
      if (lVar9 == 0) {
        lVar9 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
      }
      if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(long *)(lVar8 + 0x28) = lVar9;
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_066240c8);
      if (*(uint *)(lVar8 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(lVar8 + 0x30) = uVar5;
      if ((DAT_06a77089 & 1) == 0) {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
        DAT_06a77089 = 1;
      }
      lVar9 = *(long *)(unaff_x20 + 0x18);
      if (lVar9 == 0) {
        lVar9 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
      }
      if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(long *)(lVar8 + 0x38) = lVar9;
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_066240d0);
      if (*(uint *)(lVar8 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(lVar8 + 0x40) = uVar5;
      if ((DAT_06a7708e & 1) == 0) {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
        DAT_06a7708e = 1;
      }
      lVar9 = *(long *)(unaff_x20 + 0x20);
      if (lVar9 == 0) {
        lVar9 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
      }
      if (*(uint *)(lVar8 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(long *)(lVar8 + 0x48) = lVar9;
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_066240d8);
      if (*(uint *)(lVar8 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(lVar8 + 0x50) = uVar5;
      uVar5 = FUN_05747b5c(-in_stack_00000048,0);
      if (*(uint *)(lVar8 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      *(undefined8 *)(lVar8 + 0x58) = uVar5;
      uVar5 = FUN_04db97ac(lVar8,0);
      thunk_FUN_02c7737c(PTR_DAT_06623fe0);
      uVar6 = thunk_FUN_02cea894();
      FUN_05748450(uVar6,-iVar2,uVar5,0);
      uVar5 = thunk_FUN_02c7737c(PTR_DAT_066240b8);
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar6,uVar5);
    }
    uVar4 = FUN_04f7b8cc(in_stack_00000068,0,0);
    uVar5 = in_stack_00000068;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_065c9178 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04e58354(uVar5,0);
      in_stack_00000068 = 0;
    }
    uVar5 = in_stack_00000040;
    uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06615f78);
    FUN_053dfaac(uVar6,uVar5,1,0);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
    if (*(char *)(unaff_x19 + 0x78) != '\0') {
      FUN_056fb2f0();
    }
    uVar5 = in_stack_00000038;
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    *(int *)(unaff_x19 + 0x2c) = in_stack_00000048;
    if (*(char *)(unaff_x20 + 0x69) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      thunk_FUN_02cb2398(uVar5,&stack0x0000008c,0);
      lVar8 = *(long *)(unaff_x20 + 0xa8);
      if (lVar8 == 0) {
        lVar8 = FUN_04dd6ee0(0);
      }
      uVar5 = in_stack_00000030;
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
      FUN_04ec17c4(uVar6,uVar5,2,1,0x2000,0);
      plVar7 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e5ae8);
      FUN_04e89150(plVar7,uVar6,lVar8,0);
      if (plVar7 == (long *)0x0) goto Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity;
      (**(code **)(*plVar7 + 0x328))(plVar7,1,*(undefined8 *)(*plVar7 + 0x330));
      *(long **)(unaff_x19 + 0xb8) = plVar7;
    }
    uVar5 = in_stack_00000020;
    if (*(char *)(unaff_x20 + 0x6a) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      thunk_FUN_02cb2398(uVar5,&stack0x0000008c,0);
      puVar1 = PTR_DAT_065e5a70;
      lVar8 = *(long *)(unaff_x20 + 0x70);
      if (lVar8 == 0) {
        if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (DAT_06a6f9d1 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
          DAT_06a6f9d1 = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
      }
      uVar5 = in_stack_00000028;
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
      FUN_04ec17c4(uVar6,uVar5,1,1,0x2000,0);
      uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
      FUN_04e84808(uVar5,uVar6,lVar8,1,0);
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar5;
    }
    uVar5 = in_stack_00000010;
    if (*(char *)(unaff_x20 + 0x6b) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      thunk_FUN_02cb2398(uVar5,&stack0x0000008c,0);
      puVar1 = PTR_DAT_065e5a70;
      lVar8 = *(long *)(unaff_x20 + 0x78);
      if (lVar8 == 0) {
        if (*(int *)(*(long *)PTR_DAT_065e5a70 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        if (DAT_06a6f9d1 == '\0') {
          AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5a70);
          DAT_06a6f9d1 = '\x01';
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
          lVar8 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
      }
      uVar5 = in_stack_00000018;
      uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065cfd90);
      FUN_04ec17c4(uVar6,uVar5,1,1,0x2000,0);
      uVar5 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce440);
      FUN_04e84808(uVar5,uVar6,lVar8,1,0);
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar5;
    }
    return 1;
  }
Unity_XR_OpenVR_OpenVRHMD__get_rightEyeVelocity:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


