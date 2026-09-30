/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._PollNextEventWithPose$$Invoke
ENTRY_POINT: 069e0c0c
PROGRAM: DirtBikerVR-libil2cpp.so
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
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
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
  
  FUN_07cac71c(param_5,0);
  if ((unaff_x21 & 1) != 0) {
    lVar4 = *unaff_x20;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar4 = *unaff_x20;
    }
    puVar1 = PTR_DAT_0849ad18;
    if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x120) == 2) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      puVar7 = *(ulong **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      in_stack_00000120 = *puVar7;
      in_stack_00000118 = (undefined4)puVar7[1];
      in_stack_00000110 = *puVar7;
      in_stack_00000128 = in_stack_00000118;
      if (DAT_08974d8a == '\0') {
        FUN_03a8a718(PTR_DAT_08486860);
        DAT_08974d8a = '\x01';
      }
      puVar7 = *(ulong **)(*(long *)PTR_DAT_08486860 + 0xb8);
      _uStack0000000000000108 = puVar7[1];
      in_stack_00000100 = *puVar7;
      in_stack_000000f0 = *puVar7;
      uStack00000000000000f8 = (undefined4)puVar7[1];
      uStack00000000000000fc = (undefined4)(_uStack0000000000000108 >> 0x20);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_069d7eac(4,4,3,0xffffffff,&stack0x00000120);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_069e1778;
        FUN_07cab7ec(in_stack_00000120 & 0xffffffff,in_stack_00000120._4_4_,in_stack_00000128,
                     unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_069d7eac(5,4,4,0xffffffff,&stack0x00000110);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[9] == 0) goto LAB_069e1778;
        FUN_07cab7ec(in_stack_00000110 & 0xffffffff,in_stack_00000110._4_4_,in_stack_00000118,
                     unaff_x19[9],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_069d8244(4,5,3,0xffffffff,&stack0x00000100);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_069e1778;
        FUN_07cac71c(in_stack_00000100 & 0xffffffff,in_stack_00000100._4_4_,uStack0000000000000108,
                     uStack000000000000010c,unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_069d8244(5,5,4,0xffffffff,&stack0x000000f0);
      if ((uVar5 & 1) != 0) {
        lVar4 = unaff_x19[9];
        if (lVar4 == 0) goto LAB_069e1778;
        uVar5 = in_stack_000000f0 & 0xffffffff;
        goto LAB_069e12d4;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0849ad18 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_06a1bd84(1,0);
      iVar3 = FUN_06a1bd84(2,0);
      if (uVar2 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar2 = 0x20;
        uVar5 = FUN_06a1baac(0x20,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar2 = FUN_06a1baac(1,0);
          uVar2 = uVar2 & 1;
        }
      }
      if (iVar3 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        iVar3 = 0x40;
        uVar5 = FUN_06a1baac(0x40,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar5 = FUN_06a1baac(2,0);
          iVar3 = 2;
          if ((uVar5 & 1) == 0) {
            iVar3 = 0;
          }
        }
      }
      lVar4 = unaff_x19[8];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_06a1be88(uVar2,0);
      if (lVar4 == 0) goto LAB_069e1778;
      FUN_07cab7ec(lVar4,0);
      lVar4 = unaff_x19[9];
      FUN_06a1be88(iVar3,0);
      if (lVar4 == 0) goto LAB_069e1778;
      FUN_07cab7ec(lVar4,0);
      lVar4 = unaff_x19[8];
      FUN_06a1c948(uVar2,0);
      if (lVar4 == 0) goto LAB_069e1778;
      FUN_07cac71c(lVar4,0);
      lVar4 = unaff_x19[9];
      FUN_06a1c948(iVar3,0);
      if (lVar4 == 0) goto LAB_069e1778;
      FUN_07cac71c(lVar4,0);
      iVar3 = FUN_06a1bc98(0,0);
      if (iVar3 == 1) {
        lVar4 = unaff_x19[4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_06a1be88(0x20,0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cade68(lVar4,0);
        if (unaff_x19[8] == 0) goto LAB_069e1778;
        lVar4 = unaff_x19[0xd];
        FUN_07cadf5c(unaff_x19[8],0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cab7ec(lVar4,0);
        if (unaff_x19[8] == 0) goto LAB_069e1778;
        lVar4 = unaff_x19[0xd];
        FUN_07cac65c(unaff_x19[8],0);
        uVar8 = FUN_07c8abb0(0);
        uVar14 = param_3;
        uVar18 = param_4;
        uVar12 = param_2;
        uVar9 = FUN_06a1c948(0x20,0);
        FUN_03ba72fc(uVar8,param_2,param_3,param_4,uVar9,uVar12,uVar14,uVar18,0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cac71c(lVar4,0);
        lVar4 = unaff_x19[10];
        FUN_03ba7370(0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cab7ec(lVar4,0);
        lVar4 = unaff_x19[10];
      }
      else {
        if (iVar3 == 2) {
          lVar4 = unaff_x19[10];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_06a1be88(1,0);
          if (lVar4 == 0) goto LAB_069e1778;
          FUN_07cab7ec(lVar4,0);
          lVar4 = unaff_x19[10];
          FUN_06a1c948(1,0);
        }
        else {
          lVar4 = unaff_x19[10];
          FUN_03ba7370(0);
          if (lVar4 == 0) goto LAB_069e1778;
          FUN_07cab7ec(lVar4,0);
          lVar4 = unaff_x19[10];
          FUN_03bcb794(0);
        }
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cac71c(lVar4,0);
        lVar4 = unaff_x19[0xd];
        FUN_03ba7370(0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cab7ec(lVar4,0);
        lVar4 = unaff_x19[0xd];
      }
      FUN_03bcb794(0);
      if (lVar4 == 0) goto LAB_069e1778;
      FUN_07cac71c(lVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      iVar3 = FUN_06a1bc98(1,0);
      if (iVar3 == 1) {
        lVar4 = unaff_x19[4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_06a1be88(0x40,0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cade68(lVar4,0);
        if (unaff_x19[9] == 0) goto LAB_069e1778;
        lVar4 = unaff_x19[0xf];
        FUN_07cadf5c(unaff_x19[9],0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cab7ec(lVar4,0);
        if (unaff_x19[9] == 0) goto LAB_069e1778;
        lVar4 = unaff_x19[0xf];
        FUN_07cac65c(unaff_x19[9],0);
        uVar8 = FUN_07c8abb0(0);
        uVar14 = param_3;
        uVar18 = param_4;
        uVar12 = param_2;
        uVar9 = FUN_06a1c948(0x40,0);
        FUN_03ba72fc(uVar8,param_2,param_3,param_4,uVar9,uVar12,uVar14,uVar18,0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cac71c(lVar4,0);
        lVar4 = unaff_x19[0xb];
        FUN_03ba7370(0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cab7ec(lVar4,0);
        lVar4 = unaff_x19[0xb];
      }
      else {
        if (iVar3 == 2) {
          lVar4 = unaff_x19[0xb];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_06a1be88(2,0);
          if (lVar4 == 0) goto LAB_069e1778;
          FUN_07cab7ec(lVar4,0);
          lVar4 = unaff_x19[0xb];
          FUN_06a1c948(2,0);
        }
        else {
          lVar4 = unaff_x19[0xb];
          FUN_03ba7370(0);
          if (lVar4 == 0) goto LAB_069e1778;
          FUN_07cab7ec(lVar4,0);
          lVar4 = unaff_x19[0xb];
          FUN_03bcb794(0);
        }
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cac71c(lVar4,0);
        lVar4 = unaff_x19[0xf];
        FUN_03ba7370(0);
        if (lVar4 == 0) goto LAB_069e1778;
        FUN_07cab7ec(lVar4,0);
        lVar4 = unaff_x19[0xf];
      }
      uVar5 = FUN_03bcb794(0);
      if (lVar4 == 0) goto LAB_069e1778;
LAB_069e12d4:
      FUN_07cac71c(uVar5,lVar4,0);
    }
    if (unaff_x19[0x12] == 0) goto LAB_069e1778;
    FUN_07cab7ec(unaff_s8,unaff_s9,unaff_x19[0x12],0);
    FUN_069d7e14(&stack0x00000080);
    uVar2 = in_stack_00000098;
    uVar21 = uStack0000000000000094;
    uVar20 = uStack0000000000000090;
    uVar19 = uStack000000000000008c;
    uVar9 = uStack0000000000000088;
    uVar12 = uStack0000000000000084;
    uVar14 = uStack0000000000000080;
    FUN_069d7e14(&stack0x00000080);
    uVar15 = uStack0000000000000088;
    uVar8 = uStack0000000000000084;
    uVar18 = uStack0000000000000080;
    lVar4 = *unaff_x20;
    uStack0000000000000078 = uStack0000000000000094;
    uStack000000000000007c = uStack0000000000000090;
    uVar5 = (ulong)in_stack_00000098;
    uStack0000000000000070 = uStack000000000000008c;
    uStack0000000000000074 = in_stack_00000098;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      uVar5 = thunk_FUN_03ae8be4(uVar5,uStack0000000000000084);
      lVar4 = *unaff_x20;
    }
    if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x120) == 2) {
      uVar16 = uVar15;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(uVar5,uVar8);
        uVar16 = uVar15;
      }
      FUN_06a282f8(&stack0x00000080,4,0);
      uVar2 = in_stack_00000098;
      uVar21 = uStack0000000000000094;
      uVar20 = uStack0000000000000090;
      uVar19 = uStack000000000000008c;
      uVar9 = uStack0000000000000088;
      uVar12 = uStack0000000000000084;
      uVar14 = uStack0000000000000080;
      FUN_06a282f8(&stack0x00000080,5,0);
      uVar15 = uStack0000000000000088;
      uVar18 = uStack0000000000000080;
      if (unaff_x19[0x10] == 0) goto LAB_069e1778;
      lVar4 = unaff_x19[4];
      uStack0000000000000078 = uStack0000000000000094;
      uStack000000000000007c = uStack0000000000000090;
      uStack0000000000000074 = in_stack_00000098;
      uVar8 = uStack0000000000000090;
      FUN_07cac280(unaff_x19[0x10],0);
      if (lVar4 == 0) goto LAB_069e1778;
      uVar10 = FUN_07cadf5c(lVar4,0);
      if (unaff_x19[0x11] == 0) goto LAB_069e1778;
      lVar4 = unaff_x19[4];
      uVar17 = uVar16;
      uVar13 = uVar8;
      FUN_07cac280(unaff_x19[0x11],0);
      if (lVar4 == 0) goto LAB_069e1778;
      uVar11 = FUN_07cadf5c(lVar4,0);
      if (unaff_x19[4] == 0) goto LAB_069e1778;
      uStack0000000000000070 = uStack000000000000008c;
      FUN_07cac4e0(unaff_x19[4],0);
      FUN_07c8abb0(0);
      if (unaff_x19[0x10] == 0) goto LAB_069e1778;
      FUN_07cac4e0(unaff_x19[0x10],0);
      if (unaff_x19[4] == 0) goto LAB_069e1778;
      FUN_07cac4e0(unaff_x19[4],0);
      FUN_07c8abb0(0);
      if (unaff_x19[0x11] == 0) goto LAB_069e1778;
      FUN_07cac4e0(unaff_x19[0x11],0);
      FUN_06a281e0(uVar10,uVar8,uVar16,uVar11,uVar13,uVar17,0);
      uVar8 = uStack0000000000000084;
    }
    if (unaff_x19[0x11] == 0) goto LAB_069e1778;
    FUN_07cab7ec(uVar18,uVar8,uVar15,unaff_x19[0x11],0);
    if (unaff_x19[0x11] == 0) goto LAB_069e1778;
    FUN_07cac71c(uStack0000000000000070,uStack000000000000007c,uStack0000000000000078,
                 uStack0000000000000074,unaff_x19[0x11],0);
    if (unaff_x19[0x10] == 0) goto LAB_069e1778;
    FUN_07cab7ec(uVar14,uVar12,uVar9,unaff_x19[0x10],0);
    if (unaff_x19[0x10] == 0) goto LAB_069e1778;
    FUN_07cac71c(uVar19,uVar20,uVar21,uVar2,unaff_x19[0x10],0);
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (*(char *)(unaff_x25 + 0xb13) == '\0') {
    FUN_03a8a718(PTR_DAT_08488c38);
    *(undefined1 *)(unaff_x25 + 0xb13) = 1;
  }
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar4 = *unaff_x20;
  }
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_069e1778:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(char *)(**(long **)(lVar4 + 0xb8) + 0x11e) != '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    lVar4 = FUN_06a2c228(0);
    if (lVar4 != 0) {
      if (unaff_x19[6] == 0) goto LAB_069e1778;
      uVar6 = FUN_07c98f88(unaff_x19[6],0);
      FUN_07fd5820(lVar4,uVar6,0,0);
      FUN_07fd5820(lVar4,unaff_x19[8],1,0);
      FUN_07fd5820(lVar4,unaff_x19[9],2,0);
    }
  }
  (**(code **)(*unaff_x19 + 0x1f8))();
  (**(code **)(*unaff_x19 + 0x1e8))();
  return;
}


