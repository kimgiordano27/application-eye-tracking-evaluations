/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 0913cfd4
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar9;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
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
  ulong in_stack_00000130;
  float fStack0000000000000138;
  float fStack000000000000013c;
  ulong in_stack_00000140;
  float fStack0000000000000148;
  float fStack000000000000014c;
  ulong in_stack_00000150;
  float in_stack_00000158;
  ulong in_stack_00000160;
  float in_stack_00000168;
  ulong in_stack_00000170;
  float fStack0000000000000178;
  float fStack000000000000017c;
  ulong in_stack_00000180;
  float in_stack_00000188;
  
  if (**(long **)(param_1 + 0xb8) == 0) goto LAB_0913dfb0;
  fVar25 = *(float *)(**(long **)(param_1 + 0xb8) + 0x58);
  if (*(char *)(unaff_x25 + 0xc4a) == '\0') {
    FUN_04947ee4();
    param_1 = *unaff_x20;
    *(undefined1 *)(unaff_x25 + 0xc4a) = 1;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x20;
  }
  if (**(long **)(param_1 + 0xb8) == 0) goto LAB_0913dfb0;
  fVar27 = *(float *)(**(long **)(param_1 + 0xb8) + 0x5c);
  if (*(char *)(unaff_x25 + 0xc4a) == '\0') {
    FUN_04947ee4();
    param_1 = *unaff_x20;
    *(undefined1 *)(unaff_x25 + 0xc4a) = 1;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x20;
  }
  if (**(long **)(param_1 + 0xb8) == 0) goto LAB_0913dfb0;
  fVar27 = fVar27 * DAT_01df4cc4;
  fVar17 = *(float *)(**(long **)(param_1 + 0xb8) + 0x60) * DAT_01df512c;
  fVar21 = DAT_01df512c;
  FUN_0a16a898(fVar25 * DAT_01df4cc4,fVar27,fVar17,0);
  if ((unaff_x22 & 1) != 0) {
    if ((unaff_x24 & 1) == 0) {
      if (unaff_x19[6] == 0) goto LAB_0913dfb0;
      FUN_0a18a59c(unaff_x19[6],0);
      lVar9 = unaff_x19[6];
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (*(char *)(unaff_x25 + 0xc4a) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac56b00);
        *(undefined1 *)(unaff_x25 + 0xc4a) = 1;
      }
      lVar6 = *unaff_x20;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar6 = *unaff_x20;
      }
      lVar6 = **(long **)(lVar6 + 0xb8);
      if ((lVar6 == 0) || (lVar9 == 0)) goto LAB_0913dfb0;
      fVar27 = *(float *)(lVar6 + 0x68);
      fVar17 = *(float *)(lVar6 + 0x6c);
      FUN_0a1897d4(*(undefined4 *)(lVar6 + 100),fVar27,fVar17,lVar9,0);
LAB_0913d3bc:
      if (unaff_x19[6] == 0) goto LAB_0913dfb0;
      lVar9 = unaff_x19[5];
      FUN_0a189744(unaff_x19[6],0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a1897d4(lVar9,0);
      if (unaff_x19[6] == 0) goto LAB_0913dfb0;
      lVar9 = unaff_x19[7];
      FUN_0a189744(unaff_x19[6],0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a1897d4(lVar9,0);
      if (unaff_x19[6] == 0) goto LAB_0913dfb0;
      lVar9 = unaff_x19[5];
      FUN_0a18a4e0(unaff_x19[6],0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a18a59c(lVar9,0);
      if (unaff_x19[6] == 0) goto LAB_0913dfb0;
      lVar9 = unaff_x19[7];
      uVar5 = FUN_0a18a4e0(unaff_x19[6],0);
      if (lVar9 == 0) goto LAB_0913dfb0;
    }
    else {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      puVar1 = PTR_DAT_0ac0def8;
      in_stack_00000180 = **(ulong **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
      fVar27 = *(float *)(*(ulong **)(*(long *)PTR_DAT_0ac0def8 + 0xb8) + 1);
      in_stack_00000188 = fVar27;
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0f100);
        DAT_0b31f57b = '\x01';
      }
      puVar2 = PTR_DAT_0ac0f100;
      _fStack0000000000000178 = (*(ulong **)(*(long *)PTR_DAT_0ac0f100 + 0xb8))[1];
      in_stack_00000170 = **(ulong **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_091346e4(2,4,2,0xffffffff,&stack0x00000180);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[6] == 0) goto LAB_0913dfb0;
        fVar27 = (float)(in_stack_00000180 >> 0x20);
        fVar17 = in_stack_00000188;
        FUN_0a1897d4(in_stack_00000180 & 0xffffffff,in_stack_00000180 >> 0x20,in_stack_00000188,
                     unaff_x19[6],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_09134a7c(2,5,2,0xffffffff,&stack0x00000170);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[6] == 0) goto LAB_0913dfb0;
        fVar27 = (float)(in_stack_00000170 >> 0x20);
        fVar17 = fStack0000000000000178;
        fVar21 = fStack000000000000017c;
        FUN_0a18a59c(in_stack_00000170 & 0xffffffff,in_stack_00000170 >> 0x20,fStack0000000000000178
                     ,fStack000000000000017c,unaff_x19[6],0);
      }
      if ((unaff_x23 & 1) != 0) goto LAB_0913d3bc;
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      puVar8 = *(ulong **)(*(long *)puVar1 + 0xb8);
      in_stack_00000160 = *puVar8;
      in_stack_00000158 = *(float *)(puVar8 + 1);
      in_stack_00000150 = *puVar8;
      in_stack_00000168 = in_stack_00000158;
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0f100);
        DAT_0b31f57b = '\x01';
      }
      puVar8 = *(ulong **)(*(long *)puVar2 + 0xb8);
      _fStack0000000000000148 = puVar8[1];
      in_stack_00000140 = *puVar8;
      uVar5 = *puVar8;
      fVar17 = *(float *)(puVar8 + 1);
      fStack000000000000013c = (float)(_fStack0000000000000148 >> 0x20);
      in_stack_00000130 = uVar5;
      fStack0000000000000138 = fVar17;
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      fVar27 = (float)uVar5;
      uVar5 = FUN_091346e4(0,4,0,0xffffffff,&stack0x00000160);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[5] == 0) goto LAB_0913dfb0;
        fVar27 = (float)(in_stack_00000160 >> 0x20);
        fVar17 = in_stack_00000168;
        FUN_0a1897d4(in_stack_00000160 & 0xffffffff,in_stack_00000160 >> 0x20,in_stack_00000168,
                     unaff_x19[5],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_091346e4(1,4,1,0xffffffff,&stack0x00000150);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[7] == 0) goto LAB_0913dfb0;
        fVar27 = (float)(in_stack_00000150 >> 0x20);
        fVar17 = in_stack_00000158;
        FUN_0a1897d4(in_stack_00000150 & 0xffffffff,in_stack_00000150 >> 0x20,in_stack_00000158,
                     unaff_x19[7],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_09134a7c(0,5,0,0xffffffff,&stack0x00000140);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[5] == 0) goto LAB_0913dfb0;
        fVar27 = (float)(in_stack_00000140 >> 0x20);
        fVar17 = fStack0000000000000148;
        fVar21 = fStack000000000000014c;
        FUN_0a18a59c(in_stack_00000140 & 0xffffffff,in_stack_00000140 >> 0x20,fStack0000000000000148
                     ,fStack000000000000014c,unaff_x19[5],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_09134a7c(1,5,1,0xffffffff,&stack0x00000130);
      if ((uVar5 & 1) == 0) goto LAB_0913d44c;
      lVar9 = unaff_x19[7];
      if (lVar9 == 0) goto LAB_0913dfb0;
      uVar5 = in_stack_00000130 & 0xffffffff;
      fVar17 = fStack0000000000000138;
      fVar21 = fStack000000000000013c;
      fVar27 = in_stack_00000130._4_4_;
    }
    FUN_0a18a59c(uVar5,lVar9,0);
  }
LAB_0913d44c:
  if ((unaff_x21 & 1) != 0) {
    lVar9 = *unaff_x20;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar9 = *unaff_x20;
    }
    puVar1 = PTR_DAT_0ac57f78;
    if (*(int *)(*(long *)(lVar9 + 0xb8) + 0x120) == 2) {
      if (DAT_0b31f3e7 == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        DAT_0b31f3e7 = '\x01';
      }
      puVar8 = *(ulong **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
      in_stack_00000120 = *puVar8;
      in_stack_00000118 = (undefined4)puVar8[1];
      in_stack_00000110 = *puVar8;
      in_stack_00000128 = in_stack_00000118;
      if (DAT_0b31f57b == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0f100);
        DAT_0b31f57b = '\x01';
      }
      puVar8 = *(ulong **)(*(long *)PTR_DAT_0ac0f100 + 0xb8);
      _uStack0000000000000108 = puVar8[1];
      in_stack_00000100 = *puVar8;
      in_stack_000000f0 = *puVar8;
      uStack00000000000000f8 = (undefined4)puVar8[1];
      uStack00000000000000fc = (undefined4)(_uStack0000000000000108 >> 0x20);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_091346e4(4,4,3,0xffffffff,&stack0x00000120);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(in_stack_00000120 & 0xffffffff,in_stack_00000120._4_4_,in_stack_00000128,
                     unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_091346e4(5,4,4,0xffffffff,&stack0x00000110);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[9] == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(in_stack_00000110 & 0xffffffff,in_stack_00000110._4_4_,in_stack_00000118,
                     unaff_x19[9],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_09134a7c(4,5,3,0xffffffff,&stack0x00000100);
      if ((uVar5 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_0913dfb0;
        FUN_0a18a59c(in_stack_00000100 & 0xffffffff,in_stack_00000100._4_4_,uStack0000000000000108,
                     uStack000000000000010c,unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar5 = FUN_09134a7c(5,5,4,0xffffffff,&stack0x000000f0);
      if ((uVar5 & 1) != 0) {
        lVar9 = unaff_x19[9];
        if (lVar9 == 0) goto LAB_0913dfb0;
        uVar5 = in_stack_000000f0 & 0xffffffff;
        goto LAB_0913db0c;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0ac57f78 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar3 = FUN_09177e88(1,0);
      iVar4 = FUN_09177e88(2,0);
      if (uVar3 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar3 = 0x20;
        uVar5 = FUN_09177bb0(0x20,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar3 = FUN_09177bb0(1,0);
          uVar3 = uVar3 & 1;
        }
      }
      if (iVar4 == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        iVar4 = 0x40;
        uVar5 = FUN_09177bb0(0x40,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar5 = FUN_09177bb0(2,0);
          iVar4 = 2;
          if ((uVar5 & 1) == 0) {
            iVar4 = 0;
          }
        }
      }
      lVar9 = unaff_x19[8];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_09177f8c(uVar3,0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a1897d4(lVar9,0);
      lVar9 = unaff_x19[9];
      FUN_09177f8c(iVar4,0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a1897d4(lVar9,0);
      lVar9 = unaff_x19[8];
      FUN_09178a4c(uVar3,0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a18a59c(lVar9,0);
      lVar9 = unaff_x19[9];
      FUN_09178a4c(iVar4,0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a18a59c(lVar9,0);
      iVar4 = FUN_09177d9c(0,0);
      if (iVar4 == 1) {
        lVar9 = unaff_x19[4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_09177f8c(0x20,0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a188410(lVar9,0);
        if (unaff_x19[8] == 0) goto LAB_0913dfb0;
        lVar9 = unaff_x19[0xd];
        FUN_0a18bc88(unaff_x19[8],0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(lVar9,0);
        if (unaff_x19[8] == 0) goto LAB_0913dfb0;
        lVar9 = unaff_x19[0xd];
        FUN_0a18a4e0(unaff_x19[8],0);
        uVar10 = FUN_0a16a578(0);
        fVar25 = fVar17;
        fVar22 = fVar21;
        fVar14 = fVar27;
        uVar11 = FUN_09178a4c(0x20,0);
        FUN_08af10a0(uVar10,fVar27,fVar17,fVar21,uVar11,fVar14,fVar25,fVar22,0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a18a59c(lVar9,0);
        lVar9 = unaff_x19[10];
        FUN_09032890(0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(lVar9,0);
        lVar9 = unaff_x19[10];
      }
      else {
        if (iVar4 == 2) {
          lVar9 = unaff_x19[10];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_09177f8c(1,0);
          if (lVar9 == 0) goto LAB_0913dfb0;
          FUN_0a1897d4(lVar9,0);
          lVar9 = unaff_x19[10];
          FUN_09178a4c(1,0);
        }
        else {
          lVar9 = unaff_x19[10];
          FUN_09032890(0);
          if (lVar9 == 0) goto LAB_0913dfb0;
          FUN_0a1897d4(lVar9,0);
          lVar9 = unaff_x19[10];
          FUN_091499e4(0);
        }
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a18a59c(lVar9,0);
        lVar9 = unaff_x19[0xd];
        FUN_09032890(0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(lVar9,0);
        lVar9 = unaff_x19[0xd];
      }
      FUN_091499e4(0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      FUN_0a18a59c(lVar9,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      iVar4 = FUN_09177d9c(1,0);
      if (iVar4 == 1) {
        lVar9 = unaff_x19[4];
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_09177f8c(0x40,0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a188410(lVar9,0);
        if (unaff_x19[9] == 0) goto LAB_0913dfb0;
        lVar9 = unaff_x19[0xf];
        FUN_0a18bc88(unaff_x19[9],0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(lVar9,0);
        if (unaff_x19[9] == 0) goto LAB_0913dfb0;
        lVar9 = unaff_x19[0xf];
        FUN_0a18a4e0(unaff_x19[9],0);
        uVar10 = FUN_0a16a578(0);
        fVar25 = fVar17;
        fVar22 = fVar21;
        fVar14 = fVar27;
        uVar11 = FUN_09178a4c(0x40,0);
        FUN_08af10a0(uVar10,fVar27,fVar17,fVar21,uVar11,fVar14,fVar25,fVar22,0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a18a59c(lVar9,0);
        lVar9 = unaff_x19[0xb];
        FUN_09032890(0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(lVar9,0);
        lVar9 = unaff_x19[0xb];
      }
      else {
        if (iVar4 == 2) {
          lVar9 = unaff_x19[0xb];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_09177f8c(2,0);
          if (lVar9 == 0) goto LAB_0913dfb0;
          FUN_0a1897d4(lVar9,0);
          lVar9 = unaff_x19[0xb];
          FUN_09178a4c(2,0);
        }
        else {
          lVar9 = unaff_x19[0xb];
          FUN_09032890(0);
          if (lVar9 == 0) goto LAB_0913dfb0;
          FUN_0a1897d4(lVar9,0);
          lVar9 = unaff_x19[0xb];
          FUN_091499e4(0);
        }
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a18a59c(lVar9,0);
        lVar9 = unaff_x19[0xf];
        FUN_09032890(0);
        if (lVar9 == 0) goto LAB_0913dfb0;
        FUN_0a1897d4(lVar9,0);
        lVar9 = unaff_x19[0xf];
      }
      uVar5 = FUN_091499e4(0);
      if (lVar9 == 0) goto LAB_0913dfb0;
LAB_0913db0c:
      FUN_0a18a59c(uVar5,lVar9,0);
    }
    if (unaff_x19[0x12] == 0) goto LAB_0913dfb0;
    FUN_0a1897d4(unaff_s8,unaff_s9,unaff_x19[0x12],0);
    FUN_0913464c(&stack0x00000080);
    uVar3 = in_stack_00000098;
    uVar26 = uStack0000000000000094;
    uVar24 = uStack0000000000000090;
    uVar23 = uStack000000000000008c;
    uVar29 = uStack0000000000000088;
    uVar28 = uStack0000000000000084;
    uVar10 = uStack0000000000000080;
    FUN_0913464c(&stack0x00000080);
    uVar18 = uStack0000000000000088;
    uVar15 = uStack0000000000000084;
    uVar11 = uStack0000000000000080;
    lVar9 = *unaff_x20;
    uStack0000000000000078 = uStack0000000000000094;
    uStack000000000000007c = uStack0000000000000090;
    uVar5 = (ulong)in_stack_00000098;
    uStack0000000000000070 = uStack000000000000008c;
    uStack0000000000000074 = in_stack_00000098;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      uVar5 = thunk_FUN_049a583c(uVar5,uStack0000000000000084);
      lVar9 = *unaff_x20;
    }
    if (*(int *)(*(long *)(lVar9 + 0xb8) + 0x120) == 2) {
      uVar19 = uVar18;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_049a583c(uVar5,uVar15);
        uVar19 = uVar18;
      }
      FUN_091843fc(&stack0x00000080,4,0);
      uVar3 = in_stack_00000098;
      uVar26 = uStack0000000000000094;
      uVar24 = uStack0000000000000090;
      uVar23 = uStack000000000000008c;
      uVar29 = uStack0000000000000088;
      uVar28 = uStack0000000000000084;
      uVar10 = uStack0000000000000080;
      FUN_091843fc(&stack0x00000080,5,0);
      uVar18 = uStack0000000000000088;
      uVar11 = uStack0000000000000080;
      if (unaff_x19[0x10] == 0) goto LAB_0913dfb0;
      lVar9 = unaff_x19[4];
      uStack0000000000000078 = uStack0000000000000094;
      uStack000000000000007c = uStack0000000000000090;
      uStack0000000000000074 = in_stack_00000098;
      uVar15 = uStack0000000000000090;
      FUN_0a18a1a0(unaff_x19[0x10],0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      uVar12 = FUN_0a18bc88(lVar9,0);
      if (unaff_x19[0x11] == 0) goto LAB_0913dfb0;
      lVar9 = unaff_x19[4];
      uVar20 = uVar19;
      uVar16 = uVar15;
      FUN_0a18a1a0(unaff_x19[0x11],0);
      if (lVar9 == 0) goto LAB_0913dfb0;
      uVar13 = FUN_0a18bc88(lVar9,0);
      if (unaff_x19[4] == 0) goto LAB_0913dfb0;
      uStack0000000000000070 = uStack000000000000008c;
      FUN_0a1884ac(unaff_x19[4],0);
      FUN_0a16a578(0);
      if (unaff_x19[0x10] == 0) goto LAB_0913dfb0;
      FUN_0a1884ac(unaff_x19[0x10],0);
      if (unaff_x19[4] == 0) goto LAB_0913dfb0;
      FUN_0a1884ac(unaff_x19[4],0);
      FUN_0a16a578(0);
      if (unaff_x19[0x11] == 0) goto LAB_0913dfb0;
      FUN_0a1884ac(unaff_x19[0x11],0);
      FUN_091842e4(uVar12,uVar15,uVar19,uVar13,uVar16,uVar20,0);
      uVar15 = uStack0000000000000084;
    }
    if (unaff_x19[0x11] == 0) goto LAB_0913dfb0;
    FUN_0a1897d4(uVar11,uVar15,uVar18,unaff_x19[0x11],0);
    if (unaff_x19[0x11] == 0) goto LAB_0913dfb0;
    FUN_0a18a59c(uStack0000000000000070,uStack000000000000007c,uStack0000000000000078,
                 uStack0000000000000074,unaff_x19[0x11],0);
    if (unaff_x19[0x10] == 0) goto LAB_0913dfb0;
    FUN_0a1897d4(uVar10,uVar28,uVar29,unaff_x19[0x10],0);
    if (unaff_x19[0x10] == 0) goto LAB_0913dfb0;
    FUN_0a18a59c(uVar23,uVar24,uVar26,uVar3,unaff_x19[0x10],0);
  }
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (*(char *)(unaff_x25 + 0xc4a) == '\0') {
    FUN_04947ee4(PTR_DAT_0ac56b00);
    *(undefined1 *)(unaff_x25 + 0xc4a) = 1;
  }
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar9 = *unaff_x20;
  }
  if (**(long **)(lVar9 + 0xb8) == 0) {
LAB_0913dfb0:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(char *)(**(long **)(lVar9 + 0xb8) + 0x11e) != '\0') {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar9 = FUN_091882a8(0);
    if (lVar9 != 0) {
      if (unaff_x19[6] == 0) goto LAB_0913dfb0;
      uVar7 = FUN_0a17834c(unaff_x19[6],0);
      FUN_0a495078(lVar9,uVar7,0,0);
      FUN_0a495078(lVar9,unaff_x19[8],1,0);
      FUN_0a495078(lVar9,unaff_x19[9],2,0);
    }
  }
  (**(code **)(*unaff_x19 + 0x1f8))();
  (**(code **)(*unaff_x19 + 0x1e8))();
  return;
}


