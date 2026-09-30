/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 04ffd1e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__PollNextEventWithPose__Invoke
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar7;
  long unaff_x25;
  long *unaff_x26;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  ulong in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  ulong in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  ulong in_stack_00000110;
  undefined4 in_stack_00000118;
  ulong in_stack_00000120;
  undefined4 in_stack_00000128;
  
  FUN_05c9b4fc();
  if (unaff_x19[6] == 0) goto LAB_04ffdda0;
  lVar7 = unaff_x19[5];
  FUN_05c9c2ec(unaff_x19[6],0);
  if (lVar7 == 0) goto LAB_04ffdda0;
  FUN_05c9c3b0(lVar7,0);
  if (unaff_x19[6] == 0) goto LAB_04ffdda0;
  lVar7 = unaff_x19[7];
  FUN_05c9c2ec(unaff_x19[6],0);
  if (lVar7 == 0) goto LAB_04ffdda0;
  FUN_05c9c3b0(lVar7,0);
  if ((unaff_x21 & 1) != 0) {
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar7 = *unaff_x20;
    }
    puVar1 = PTR_DAT_06323680;
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x120) == 2) {
      if (DAT_066c1d97 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1d97 = '\x01';
      }
      puVar6 = *(ulong **)(*(long *)PTR_DAT_06312438 + 0xb8);
      in_stack_00000120 = *puVar6;
      in_stack_00000118 = (undefined4)puVar6[1];
      in_stack_00000110 = *puVar6;
      in_stack_00000128 = in_stack_00000118;
      if (DAT_066c1d9a == '\0') {
        FUN_02b3c81c(PTR_DAT_06312cd8);
        DAT_066c1d9a = '\x01';
      }
      puVar6 = *(ulong **)(*(long *)PTR_DAT_06312cd8 + 0xb8);
      _uStack0000000000000108 = puVar6[1];
      in_stack_00000100 = *puVar6;
      in_stack_000000f0 = *puVar6;
      uStack00000000000000f8 = (undefined4)puVar6[1];
      uStack00000000000000fc = (undefined4)(_uStack0000000000000108 >> 0x20);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04ff44d4(4,4,3,0xffffffff,&stack0x00000120);
      if ((uVar4 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(in_stack_00000120 & 0xffffffff,in_stack_00000120._4_4_,in_stack_00000128,
                     unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04ff44d4(5,4,4,0xffffffff,&stack0x00000110);
      if ((uVar4 & 1) != 0) {
        if (unaff_x19[9] == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(in_stack_00000110 & 0xffffffff,in_stack_00000110._4_4_,in_stack_00000118,
                     unaff_x19[9],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04ff486c(4,5,3,0xffffffff,&stack0x00000100);
      if ((uVar4 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_04ffdda0;
        FUN_05c9c3b0(in_stack_00000100 & 0xffffffff,in_stack_00000100._4_4_,uStack0000000000000108,
                     uStack000000000000010c,unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04ff486c(5,5,4,0xffffffff,&stack0x000000f0);
      if ((uVar4 & 1) != 0) {
        lVar7 = unaff_x19[9];
        if (lVar7 == 0) goto LAB_04ffdda0;
        uVar4 = in_stack_000000f0 & 0xffffffff;
        goto LAB_04ffd8fc;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06323680 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar2 = FUN_050383a8(1,0);
      iVar3 = FUN_050383a8(2,0);
      if (uVar2 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = 0x20;
        uVar4 = FUN_050380d0(0x20,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar2 = FUN_050380d0(1,0);
          uVar2 = uVar2 & 1;
        }
      }
      if (iVar3 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar3 = 0x40;
        uVar4 = FUN_050380d0(0x40,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          uVar4 = FUN_050380d0(2,0);
          iVar3 = 2;
          if ((uVar4 & 1) == 0) {
            iVar3 = 0;
          }
        }
      }
      lVar7 = unaff_x19[8];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_050384ac(uVar2,0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      FUN_05c9b4fc(lVar7,0);
      lVar7 = unaff_x19[9];
      FUN_050384ac(iVar3,0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      FUN_05c9b4fc(lVar7,0);
      lVar7 = unaff_x19[8];
      FUN_05038f6c(uVar2,0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      FUN_05c9c3b0(lVar7,0);
      lVar7 = unaff_x19[9];
      FUN_05038f6c(iVar3,0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      FUN_05c9c3b0(lVar7,0);
      iVar3 = FUN_050382bc(0,0);
      if (iVar3 == 1) {
        lVar7 = unaff_x19[4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_050384ac(0x20,0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9a068(lVar7,0);
        if (unaff_x19[8] == 0) goto LAB_04ffdda0;
        lVar7 = unaff_x19[0xd];
        FUN_05c9dc9c(unaff_x19[8],0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(lVar7,0);
        if (unaff_x19[8] == 0) goto LAB_04ffdda0;
        lVar7 = unaff_x19[0xd];
        FUN_05c9c2ec(unaff_x19[8],0);
        uVar8 = FUN_05c7b504(0);
        uVar14 = param_3;
        uVar18 = param_4;
        uVar12 = param_2;
        uVar9 = FUN_05038f6c(0x20,0);
        FUN_02cf3b08(uVar8,param_2,param_3,param_4,uVar9,uVar12,uVar14,uVar18,0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9c3b0(lVar7,0);
        lVar7 = unaff_x19[10];
        FUN_02c52d64(0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(lVar7,0);
        lVar7 = unaff_x19[10];
      }
      else {
        if (iVar3 == 2) {
          lVar7 = unaff_x19[10];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_050384ac(1,0);
          if (lVar7 == 0) goto LAB_04ffdda0;
          FUN_05c9b4fc(lVar7,0);
          lVar7 = unaff_x19[10];
          FUN_05038f6c(1,0);
        }
        else {
          lVar7 = unaff_x19[10];
          FUN_02c52d64(0);
          if (lVar7 == 0) goto LAB_04ffdda0;
          FUN_05c9b4fc(lVar7,0);
          lVar7 = unaff_x19[10];
          FUN_02d81684(0);
        }
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9c3b0(lVar7,0);
        lVar7 = unaff_x19[0xd];
        FUN_02c52d64(0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(lVar7,0);
        lVar7 = unaff_x19[0xd];
      }
      FUN_02d81684(0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      FUN_05c9c3b0(lVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_050382bc(1,0);
      if (iVar3 == 1) {
        lVar7 = unaff_x19[4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_050384ac(0x40,0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9a068(lVar7,0);
        if (unaff_x19[9] == 0) goto LAB_04ffdda0;
        lVar7 = unaff_x19[0xf];
        FUN_05c9dc9c(unaff_x19[9],0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(lVar7,0);
        if (unaff_x19[9] == 0) goto LAB_04ffdda0;
        lVar7 = unaff_x19[0xf];
        FUN_05c9c2ec(unaff_x19[9],0);
        uVar8 = FUN_05c7b504(0);
        uVar14 = param_3;
        uVar18 = param_4;
        uVar12 = param_2;
        uVar9 = FUN_05038f6c(0x40,0);
        FUN_02cf3b08(uVar8,param_2,param_3,param_4,uVar9,uVar12,uVar14,uVar18,0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9c3b0(lVar7,0);
        lVar7 = unaff_x19[0xb];
        FUN_02c52d64(0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(lVar7,0);
        lVar7 = unaff_x19[0xb];
      }
      else {
        if (iVar3 == 2) {
          lVar7 = unaff_x19[0xb];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_050384ac(2,0);
          if (lVar7 == 0) goto LAB_04ffdda0;
          FUN_05c9b4fc(lVar7,0);
          lVar7 = unaff_x19[0xb];
          FUN_05038f6c(2,0);
        }
        else {
          lVar7 = unaff_x19[0xb];
          FUN_02c52d64(0);
          if (lVar7 == 0) goto LAB_04ffdda0;
          FUN_05c9b4fc(lVar7,0);
          lVar7 = unaff_x19[0xb];
          FUN_02d81684(0);
        }
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9c3b0(lVar7,0);
        lVar7 = unaff_x19[0xf];
        FUN_02c52d64(0);
        if (lVar7 == 0) goto LAB_04ffdda0;
        FUN_05c9b4fc(lVar7,0);
        lVar7 = unaff_x19[0xf];
      }
      uVar4 = FUN_02d81684(0);
      if (lVar7 == 0) goto LAB_04ffdda0;
LAB_04ffd8fc:
      FUN_05c9c3b0(uVar4,lVar7,0);
    }
    if (unaff_x19[0x12] == 0) goto LAB_04ffdda0;
    FUN_05c9b4fc(unaff_s8,unaff_s9,unaff_x19[0x12],0);
    FUN_04ff443c(&stack0x00000080);
    uVar2 = in_stack_00000098;
    uVar21 = uStack0000000000000094;
    uVar20 = uStack0000000000000090;
    uVar19 = uStack000000000000008c;
    uVar9 = uStack0000000000000088;
    uVar12 = uStack0000000000000084;
    uVar14 = uStack0000000000000080;
    FUN_04ff443c(&stack0x00000080);
    uVar15 = uStack0000000000000088;
    uVar8 = uStack0000000000000084;
    uVar18 = uStack0000000000000080;
    lVar7 = *unaff_x20;
    uStack0000000000000078 = uStack0000000000000094;
    uStack000000000000007c = uStack0000000000000090;
    uVar4 = (ulong)in_stack_00000098;
    uStack0000000000000070 = uStack000000000000008c;
    uStack0000000000000074 = in_stack_00000098;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      uVar4 = thunk_FUN_02b9ad44(uVar4,uStack0000000000000084);
      lVar7 = *unaff_x20;
    }
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x120) == 2) {
      uVar16 = uVar15;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(uVar4,uVar8);
        uVar16 = uVar15;
      }
      FUN_0504491c(&stack0x00000080,4,0);
      uVar2 = in_stack_00000098;
      uVar21 = uStack0000000000000094;
      uVar20 = uStack0000000000000090;
      uVar19 = uStack000000000000008c;
      uVar9 = uStack0000000000000088;
      uVar12 = uStack0000000000000084;
      uVar14 = uStack0000000000000080;
      FUN_0504491c(&stack0x00000080,5,0);
      uVar15 = uStack0000000000000088;
      uVar18 = uStack0000000000000080;
      if (unaff_x19[0x10] == 0) goto LAB_04ffdda0;
      lVar7 = unaff_x19[4];
      uStack0000000000000078 = uStack0000000000000094;
      uStack000000000000007c = uStack0000000000000090;
      uStack0000000000000074 = in_stack_00000098;
      uVar8 = uStack0000000000000090;
      FUN_05c9bf94(unaff_x19[0x10],0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      uVar10 = FUN_05c9dc9c(lVar7,0);
      if (unaff_x19[0x11] == 0) goto LAB_04ffdda0;
      lVar7 = unaff_x19[4];
      uVar17 = uVar16;
      uVar13 = uVar8;
      FUN_05c9bf94(unaff_x19[0x11],0);
      if (lVar7 == 0) goto LAB_04ffdda0;
      uVar11 = FUN_05c9dc9c(lVar7,0);
      if (unaff_x19[4] == 0) goto LAB_04ffdda0;
      uStack0000000000000070 = uStack000000000000008c;
      FUN_05c9a10c(unaff_x19[4],0);
      FUN_05c7b504(0);
      if (unaff_x19[0x10] == 0) goto LAB_04ffdda0;
      FUN_05c9a10c(unaff_x19[0x10],0);
      if (unaff_x19[4] == 0) goto LAB_04ffdda0;
      FUN_05c9a10c(unaff_x19[4],0);
      FUN_05c7b504(0);
      if (unaff_x19[0x11] == 0) goto LAB_04ffdda0;
      FUN_05c9a10c(unaff_x19[0x11],0);
      FUN_05044804(uVar10,uVar8,uVar16,uVar11,uVar13,uVar17,0);
      uVar8 = uStack0000000000000084;
    }
    if (unaff_x19[0x11] == 0) goto LAB_04ffdda0;
    FUN_05c9b4fc(uVar18,uVar8,uVar15,unaff_x19[0x11],0);
    if (unaff_x19[0x11] == 0) goto LAB_04ffdda0;
    FUN_05c9c3b0(uStack0000000000000070,uStack000000000000007c,uStack0000000000000078,
                 uStack0000000000000074,unaff_x19[0x11],0);
    if (unaff_x19[0x10] == 0) goto LAB_04ffdda0;
    FUN_05c9b4fc(uVar14,uVar12,uVar9,unaff_x19[0x10],0);
    if (unaff_x19[0x10] == 0) goto LAB_04ffdda0;
    FUN_05c9c3b0(uVar19,uVar20,uVar21,uVar2,unaff_x19[0x10],0);
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (*(char *)(unaff_x25 + 0x3b0) == '\0') {
    FUN_02b3c81c(PTR_DAT_063234c8);
    *(undefined1 *)(unaff_x25 + 0x3b0) = 1;
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *unaff_x20;
  }
  if (**(long **)(lVar7 + 0xb8) == 0) {
LAB_04ffdda0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(char *)(**(long **)(lVar7 + 0xb8) + 0x11e) != '\0') {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar7 = FUN_0504884c(0);
    if (lVar7 != 0) {
      if (unaff_x19[6] == 0) goto LAB_04ffdda0;
      uVar5 = FUN_05c89340(unaff_x19[6],0);
      FUN_05fb65c0(lVar7,uVar5,0,0);
      FUN_05fb65c0(lVar7,unaff_x19[8],1,0);
      FUN_05fb65c0(lVar7,unaff_x19[9],2,0);
    }
  }
  (**(code **)(*unaff_x19 + 0x1f8))();
  (**(code **)(*unaff_x19 + 0x1e8))();
  return;
}


