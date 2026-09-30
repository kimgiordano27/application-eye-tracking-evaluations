/*
FUNCTION_NAME: Unity.VisualScripting.UnaryOperatorHandler$$Operate
ENTRY_POINT: 036aa51c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_UnaryOperatorHandler__Operate
               (long param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               float param_6)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  long in_x9;
  long lVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar38;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar39;
  long *plVar40;
  long lVar41;
  long *unaff_x28;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float unaff_s10;
  float unaff_s11;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  ulong unaff_d13;
  undefined4 uVar62;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  ulong in_stack_00000068;
  int iStack0000000000000074;
  byte bStack0000000000000078;
  byte bStack000000000000007c;
  float fStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float in_stack_000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  float in_stack_00000100;
  undefined8 in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000124;
  undefined8 in_stack_00000128;
  float in_stack_00000130;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack0000000000000140;
  float in_stack_00000150;
  long *in_stack_00000168;
  undefined8 in_stack_00000170;
  long *in_stack_00000178;
  float in_stack_00000180;
  undefined8 in_stack_00000188;
  long *in_stack_00000190;
  undefined8 in_stack_00000198;
  float fStack00000000000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  float in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  long in_stack_00000fb8;
  uint in_stack_0000104c;
  uint in_stack_00001068;
  undefined8 in_stack_00001070;
  undefined8 in_stack_00001078;
  float in_stack_00001080;
  undefined8 in_stack_00001088;
  char in_stack_00001094;
  float in_stack_00001098;
  uint in_stack_0000109c;
  
  fStack0000000000000124 = param_4;
  fStack0000000000000114 = param_6;
code_r0x036aa51c:
  param_1 = param_1 + in_x9 * unaff_x24;
  *(float *)(param_1 + 0x134) = param_5;
  *(float *)(param_1 + 0x138) = unaff_s10;
  *(float *)(param_1 + 0x13c) = param_2;
  if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 == 0)) goto LAB_036afadc;
  uVar46 = *unaff_x20;
  lVar41 = (long)(int)uVar46;
  if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
  lVar27 = lVar24 + lVar41 * unaff_x24;
  *(int *)(lVar27 + 0x140) = (int)unaff_x19[200];
  fVar49 = *(float *)(unaff_x19 + 0x9b);
  uVar18 = (ulong)(uint)fVar49;
  fVar47 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar27 + 0x15c) =
       (unaff_s11 - fStack0000000000000124) / (fStack0000000000000114 - unaff_s15);
  *(float *)(lVar27 + 0x14c) = (in_stack_00000180 - fVar49) + fVar47;
  fVar43 = (float)unaff_d13;
  in_stack_00000130 = in_stack_00000130 * fVar43;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    in_stack_00000130 = in_stack_00000130 / in_stack_00000150;
    in_stack_00000128._4_4_ = (in_stack_00000128._4_4_ * fVar43) / in_stack_00000150;
  }
  else {
    in_stack_00000128._4_4_ = in_stack_00000128._4_4_ * fVar43;
  }
  uVar15 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar46 == uVar15)) {
    in_stack_00000128._4_4_ = fVar47 + in_stack_00000128._4_4_;
    in_stack_00000130 = fVar47 + in_stack_00000130;
    fVar58 = in_stack_00000128._4_4_;
    fVar50 = in_stack_00000130;
    if (fVar47 != 0.0) {
      fVar50 = (in_stack_00000130 - fVar47) / *(float *)((long)unaff_x19 + 0x404);
      fVar58 = (in_stack_00000128._4_4_ - fVar47) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar50 <= in_stack_00000130) {
        fVar50 = in_stack_00000130;
      }
      if (in_stack_00000128._4_4_ <= fVar58) {
        fVar58 = in_stack_00000128._4_4_;
      }
    }
    lVar24 = lVar24 + lVar41 * unaff_x24;
    fVar47 = fVar50;
    if (fVar50 <= *(float *)(unaff_x19 + 0x99)) {
      fVar47 = *(float *)(unaff_x19 + 0x99);
    }
    fVar44 = fVar58;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar58) {
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar44;
    *(float *)(unaff_x19 + 0x99) = fVar47;
    *(float *)(lVar24 + 0x154) = fVar50;
    *(float *)(lVar24 + 0x158) = fVar58;
    *(float *)(lVar24 + 0x148) = in_stack_00000130 - fVar49;
    *(float *)(unaff_x19 + 0x98) = in_stack_00000130 - fVar49;
    *(float *)(lVar24 + 0x150) = in_stack_00000128._4_4_ - fVar49;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000128._4_4_ - fVar49;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar47;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar47 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar49 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      in_stack_00000150 = (fVar43 * fVar49) / in_stack_00000150;
      uVar18 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar47 <= in_stack_00000150) {
        fVar47 = in_stack_00000150;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar47;
    }
    if ((float)uVar18 == 0.0) {
      fVar47 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= in_stack_00000130) {
        fVar47 = in_stack_00000130;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar47;
    }
  }
  else {
    fVar47 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + lVar41 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar47;
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar47 = fVar47 - fVar49;
    *(float *)(lVar24 + 0x148) = fVar47;
    *(float *)(lVar24 + 0x158) = fVar50;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    fVar50 = fVar50 - fVar49;
    *(float *)(lVar24 + 0x150) = fVar50;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
  }
  lVar24 = *unaff_x28;
  if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_036afadc;
  uVar52 = *unaff_x20;
  if (*(uint *)(lVar41 + 0x18) <= uVar52) goto LAB_036afbe8;
  lVar41 = lVar41 + (long)(int)uVar52 * unaff_x24;
  *(undefined1 *)(lVar41 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  iVar14 = (int)unaff_x24;
  uVar42 = in_stack_0000109c;
  if ((in_stack_0000109c == 9) ||
     (((((unaff_w21 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)) &&
       (in_stack_0000109c != 0xad)) ||
      (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar41 + 0x194) = 1;
    pfVar28 = _fStack00000000000000a8;
    pfVar31 = _fStack00000000000000b0;
    if (unaff_w23 != 0) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar24 + 0x60);
      pfVar28 = (float *)(lVar24 + 100);
    }
    fVar49 = *pfVar31;
    fVar50 = *pfVar28;
    fVar47 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar49) - fVar50;
    bVar9 = true;
    if ((fVar47 <= in_stack_00000108._4_4_) && (bVar9 = false, !NAN(fVar47))) {
      bVar9 = fVar47 == -1.0;
    }
    if (!bVar9) {
      in_stack_00000108._4_4_ = fVar47;
    }
    fVar47 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar47 = (float)FUN_0396af88(&stack0x00001050,0);
      uVar18 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_0000109c != 0xad) {
      in_stack_00000100 = fVar43;
    }
    fVar59 = (float)uVar18;
    fVar43 = 0.0;
    if ((0.0 < fVar59) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar52 = *unaff_x20;
    fVar43 = (*(float *)(unaff_x19 + 0x97) - (fVar45 - fVar59)) + fVar43;
    if (fStack00000000000000c8 < fVar43) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
      }
      puVar7 = PTR_DAT_03d9c920;
      uVar20 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar54 = *(float *)(unaff_x19 + 0x59);
        if (((fVar54 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar59)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar47 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar43) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar47 <= fVar54) {
            fVar47 = fVar54;
          }
          goto LAB_036ad184;
        }
        fVar59 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar43 = *(float *)(unaff_x19 + 0x4a);
        uVar18 = (ulong)(uint)fVar43;
        if ((fVar43 < fVar59) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar47 = (fVar59 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar47 <= DAT_00b55428) {
            fVar47 = DAT_00b55428;
          }
          fVar49 = (fVar59 - fVar47) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar59;
          fVar47 = DAT_00b556b4;
          if (fVar49 != INFINITY) {
            fVar47 = (float)(int)fVar49 / 20.0;
          }
          if (fVar47 <= fVar43) {
            fVar47 = fVar43;
          }
          goto LAB_036acc94;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar24 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar24 = *(long *)puVar7;
        }
        lVar41 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar41 + 0x1580) == 0) {
LAB_036acbbc:
          uVar20 = DAT_00b92750;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_00001068 = 0xffffffff;
        }
        else {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar41 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar41 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
          iVar11 = FUN_036ecf20();
LAB_036ab020:
          iVar12 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar12;
          in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
          in_stack_00001068 = iVar11 - 1;
          uVar20 = CONCAT44(0x2026,iVar12);
        }
        goto LAB_036a9250;
      default:
        goto switchD_036aaa24_caseD_2;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
LAB_036aabc0:
        in_stack_00001068 = FUN_036ecf20();
        break;
      case 5:
        if ((uVar52 == 0) || ((int)in_stack_00001068 < 0)) {
          *unaff_x20 = 0;
          in_stack_00001068 = 0xffffffff;
        }
        else {
          fVar47 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          if (fStack00000000000000c8 < fVar47 - fVar45) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar18 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar24 = NEON_rev64(uVar18,4);
          unaff_x19[0x99] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          uVar20 = in_stack_00001088;
        }
        goto LAB_036a9250;
      case 6:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar19 = FUN_0391f968(lVar24,0,0);
        if ((uVar19 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar20,*(undefined8 *)(*plVar40 + 0x560));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_036afadc;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_036aad90:
      uVar20 = CONCAT44(3,uVar52);
      goto LAB_036a9250;
    }
switchD_036aaa24_caseD_2:
    puVar7 = PTR_DAT_03d9c920;
    fVar43 = 1.0 - fVar44;
    uVar18 = (ulong)(uint)fVar43;
    fVar58 = ABS(fVar58) + fVar47 * fVar43 * in_stack_00000100;
    fVar47 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar47 = DAT_00b55374;
    }
    fVar45 = fVar47 * in_stack_00000108._4_4_;
    if (fVar58 <= fVar45) {
LAB_036ab54c:
      if (in_stack_0000109c == 0xad) {
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0)) goto LAB_036afadc;
        if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
          *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
          goto LAB_036ab6c0;
        }
      }
      else if (in_stack_0000109c == 9) {
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_036afadc;
        uVar52 = *unaff_x20;
        if (uVar52 < *(uint *)(lVar41 + 0x18)) {
          *(undefined1 *)(lVar41 + (long)(int)uVar52 * unaff_x24 + 0x194) = 0;
          *(uint *)((long)unaff_x19 + 0x4a4) = uVar52;
          lVar41 = *(long *)(lVar24 + 0x50);
          if (lVar41 == 0) goto LAB_036afadc;
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar41 + 0x18)) {
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
            goto LAB_036ab5c8;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))(fVar45,in_stack_000000d0);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
        }
        uVar52 = *unaff_x20;
        if ((in_stack_00000068 & 1) != 0) {
          *(uint *)(in_stack_00000088 + 0x1f0) = uVar52;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar52;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 == 0))
        goto LAB_036afadc;
        if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
          in_stack_00000068 = 0;
          *(float *)(lVar24 + 0x60) = fVar49;
          *(float *)(lVar24 + 100) = fVar50;
          goto LAB_036ab6c0;
        }
      }
      goto LAB_036afbe8;
    }
    if (((char)unaff_x19[0x5b] == '\0') || (uVar52 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar44 < fVar45) {
          fVar49 = fVar58 / fVar43;
          if (fVar44 <= 0.0) {
            fVar49 = fVar58;
          }
          fVar44 = fVar44 + (fVar58 - fVar47 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar49;
          goto LAB_036afb6c;
        }
        fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar18 = (ulong)(uint)fVar43;
        fVar45 = *(float *)(unaff_x19 + 0x4a);
        if (fVar43 <= fVar45) goto LAB_036aab40;
LAB_036afae0:
        fVar47 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar47 <= DAT_00b55428) {
          fVar47 = DAT_00b55428;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar43;
        fVar49 = (fVar43 - fVar47) * 20.0 + 0.5;
        fVar47 = DAT_00b556b4;
        if (fVar49 != INFINITY) {
          fVar47 = (float)(int)fVar49 / 20.0;
        }
        if (fVar47 <= fVar45) {
          fVar47 = fVar45;
        }
LAB_036acc94:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar47;
        return;
      }
LAB_036aab40:
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar24 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar24 = *(long *)puVar7;
        }
        lVar41 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar41 + 0x1580) != 0) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar41 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar41 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x00000550,&stack0x000010a0,0x378);
          goto LAB_036ab014;
        }
        goto LAB_036acbbc;
      }
      if (iVar11 != 6) {
        if (iVar11 == 3) {
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          goto LAB_036aabc0;
        }
        goto LAB_036ab54c;
      }
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      lVar24 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar19 = FUN_0391f968(lVar24,0,0);
      if ((uVar19 & 1) != 0) {
        plVar40 = (long *)unaff_x19[0x5d];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar40 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar40 + 0x558))(plVar40,uVar20,*(undefined8 *)(*plVar40 + 0x560));
        lVar24 = unaff_x19[0x5d];
        if (lVar24 == 0) goto LAB_036afadc;
        *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar40 = (long *)unaff_x19[0x5d];
        if (plVar40 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
LAB_036ab13c:
      uVar20 = CONCAT44(3,*unaff_x20);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar43 = *(float *)(unaff_x19 + 0x9b);
        fVar44 = 0.0;
        if ((0.0 < fVar43) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar44 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar44 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar24 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar24 == 0) goto LAB_036afadc;
        fVar43 = *(float *)(unaff_x19 + 0x9b);
        fVar44 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = PTR_DAT_03d9c920;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_036afadc;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar24 + 0x18) <= uVar32) ||
         (uVar5 = uVar32 - 1, *(uint *)(lVar24 + 0x18) <= uVar5)) goto LAB_036afbe8;
      uVar18 = (ulong)(uint)(fVar44 + *(float *)(unaff_x19 + 0x97));
      fVar59 = (fVar44 + *(float *)(unaff_x19 + 0x97) + fVar43) -
               *(float *)(lVar24 + (long)(int)uVar32 * unaff_x24 + 0x158);
      if (((bStack000000000000007c & 1) != 0 ||
           *(short *)(lVar24 + (long)(int)uVar5 * (long)iVar14 + 0x20) != 0xad) ||
         ((fStack00000000000000c8 <= fVar59 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar24 + (long)(int)uVar32 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000007c = 1;
          uVar20 = in_stack_00001088;
        }
        else {
          if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar45 <= fVar44) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar18 = (ulong)(uint)fVar43;
              fVar45 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar45 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_036afae0;
              goto LAB_036ab340;
            }
LAB_036afb7c:
            fVar49 = fVar58;
            if (0.0 < fVar44) {
              fVar49 = fVar58 / (1.0 - fVar44);
            }
            fVar44 = fVar44 + (fVar58 - fVar47 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar49;
LAB_036afb6c:
            if (fVar45 <= fVar44) {
              fVar44 = fVar45;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar44;
            return;
          }
LAB_036ab340:
          lVar24 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar24 = *(long *)puVar7;
          }
          iVar11 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
          if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
             (((bStack0000000000000078 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            in_stack_00001068 = FUN_036ecf20();
            if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
            goto LAB_036afadc;
            uVar32 = *unaff_x20 - 1;
            if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_036afbe8;
            iStack0000000000000034 = iVar11;
            if (*(short *)(lVar24 + (long)(int)uVar32 * (long)iVar14 + 0x20) == 0xad) {
              bStack000000000000007c = 0;
              *unaff_x20 = uVar32;
              in_stack_00001068 = in_stack_00001068 - 1;
              uVar20 = CONCAT44(0x2d,uVar32);
              goto LAB_036a9250;
            }
          }
          if (fVar59 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
            uVar18 = unaff_d13;
            FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                         fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar45 = fStack00000000000000c8;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar43 = *(float *)(unaff_x19 + 0x59);
              if ((fVar43 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar47 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar59) / (float)((int)unaff_x19[0x95] + 1)) /
                         in_stack_00000058._4_4_;
                if (fVar47 <= fVar43) {
                  fVar47 = fVar43;
                }
LAB_036ad184:
                *(float *)((long)unaff_x19 + 700) = fVar47;
                return;
              }
              fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar44 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_036afb7c;
              fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar18 = (ulong)(uint)fVar43;
              fVar45 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar45 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_036afae0;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_036ab4e4_caseD_0;
            case 1:
              lVar24 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar24 = *(long *)PTR_DAT_03d9c920;
              }
              lVar41 = *(long *)(lVar24 + 0xb8);
              if (*(int *)(lVar41 + 0x1580) == 0) {
                bStack000000000000007c = 0;
                goto LAB_036acbbc;
              }
              if (*(int *)(lVar24 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar41 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              }
              FUN_0217900c(&stack0x000010a0,lVar41 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
              memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
              iVar11 = FUN_036ecf20();
              bStack000000000000007c = 0;
              goto LAB_036ab020;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              in_stack_00001068 = FUN_036ecf20();
              bStack000000000000007c = 0;
              goto LAB_036aad90;
            case 5:
              *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
              uVar18 = unaff_d13;
              FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                           fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              break;
            case 6:
              lVar24 = unaff_x19[0x5d];
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar19 = FUN_0391f968(lVar24,0,0);
              if ((uVar19 & 1) != 0) {
                plVar40 = (long *)unaff_x19[0x5d];
                uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar40 == (long *)0x0) goto LAB_036afadc;
                (**(code **)(*plVar40 + 0x558))(plVar40,uVar20,*(undefined8 *)(*plVar40 + 0x560));
                lVar24 = unaff_x19[0x5d];
                if (lVar24 == 0) goto LAB_036afadc;
                *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
                FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar40 = (long *)unaff_x19[0x5d];
                if (plVar40 == (long *)0x0) goto LAB_036afadc;
                (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              }
              bStack000000000000007c = 0;
              goto LAB_036ab13c;
            default:
              bStack000000000000007c = 0;
              goto LAB_036ab54c;
            }
          }
          bStack0000000000000078 = 1;
          bStack000000000000007c = 0;
          in_stack_00000068 = 1;
          uVar20 = in_stack_00001088;
        }
      }
      else {
        bStack000000000000007c = 0;
        uVar20 = CONCAT44(0x2d,uVar5);
        *unaff_x20 = uVar5;
        in_stack_00001068 = in_stack_00001068 - 1;
      }
    }
  }
  else {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar49 = (float)uVar18;
      fVar47 = 0.0;
      if ((0.0 < fVar49) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar18 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar49)) + fVar47)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar19 = FUN_0391f968(lVar24,0,0);
        if ((uVar19 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 != (long *)0x0) {
            (**(code **)(*plVar40 + 0x558))(plVar40,uVar20,*(undefined8 *)(*plVar40 + 0x560));
            lVar24 = unaff_x19[0x5d];
            if (lVar24 != 0) {
              *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
              FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar40 = (long *)unaff_x19[0x5d];
              if (plVar40 != (long *)0x0) {
                (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                goto LAB_036aad90;
              }
            }
          }
          goto LAB_036afadc;
        }
        goto LAB_036aad90;
      }
    }
    if ((((in_stack_0000109c - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_0000109c - 10 < 2)) || (in_stack_0000109c == 0xa0)) {
LAB_036ab188:
      if (((in_stack_0000109c != 0xad) && (in_stack_0000109c != 0x200b)) &&
         (in_stack_0000109c != 0x2060)) {
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x50), lVar41 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdea78(in_stack_0000109c,0);
      if ((uVar18 & 1) != 0) goto LAB_036ab188;
    }
    if (in_stack_0000109c == 0xa0) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x50), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
LAB_036ab6c0:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar47 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar43 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar49 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar49 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
      fVar58 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar24 + 0x2c);
      fVar50 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
      fVar44 = *_fStack00000000000000b0;
      fVar50 = fVar58 * (fVar47 / (float)iVar11) * fVar43 * fVar49 * fVar45 * fVar50;
      fVar47 = *_fStack00000000000000a8;
      if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0)) goto LAB_036afadc;
        uVar52 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar52) goto LAB_036afbe8;
        if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
        fVar49 = *(float *)(lVar24 + (long)(int)uVar52 * (long)iVar14 + 0x60);
        iVar11 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
        fVar58 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
        lVar24 = unaff_x19[0xca];
        fVar43 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
        fVar45 = *(float *)((long)unaff_x19 + 0x404);
        fVar59 = *(float *)(lVar24 + 0x2c);
        fVar50 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x50), lVar24 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar44 = *(float *)(lVar24 + 0x60);
        fVar47 = *(float *)(lVar24 + 100);
        fVar50 = fVar45 * (fVar49 / (float)iVar11) * fVar58 * fVar43 * fVar59 * fVar50;
      }
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      fVar49 = 0.0;
      fVar43 = 0.0;
      if ((0.0 < fVar58) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar59 = *(float *)(unaff_x19 + 0x97);
      fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar45 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
        goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,lVar24,0);
        fVar49 = (float)FUN_0396af88(&stack0x00000fc0,0);
      }
      puVar7 = PTR_DAT_03d9c920;
      fVar56 = *(float *)(unaff_x19 + 0x6c);
      fVar47 = (fStack00000000000000a4 - fVar44) - fVar47;
      bVar9 = true;
      if ((fVar56 <= fVar47) && (bVar9 = false, !NAN(fVar56))) {
        bVar9 = fVar56 == -1.0;
      }
      if (!bVar9) {
        fVar47 = fVar56;
      }
      fVar44 = 1.0;
      if ((uVar30 & 0x18) != 0) {
        fVar44 = DAT_00b55374;
      }
      if (((fVar59 - (fVar54 - fVar58)) + fVar43 < fStack00000000000000c8) &&
         (ABS(fVar45) + fVar50 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar44 * fVar47)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        lVar24 = *(long *)(*(long *)puVar7 + 0xb8);
        uVar20 = *(undefined8 *)PTR_DAT_03d9c8c8;
        memcpy(&stack0x000010a0,(void *)(lVar24 + 0x788),0x378);
        FUN_02178ef4(lVar24 + 0x11f0,&stack0x000010a0,uVar20);
      }
    }
    lVar24 = *in_stack_00000190;
    if (lVar24 == 0) goto LAB_036afadc;
    lVar41 = *(long *)(lVar24 + 0x38);
    unaff_d13 = _fStack0000000000000140 & 0xffffffff;
    if (lVar41 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    uVar52 = *(uint *)(unaff_x19 + 0x95);
    lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar41 + 100) = uVar52;
    *(int *)(lVar41 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_036afadc;
LAB_036aba84:
      if (*(uint *)(lVar24 + 0x18) <= uVar52) goto LAB_036afbe8;
      *(int *)(lVar24 + (long)(int)uVar52 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar52) goto LAB_036afbe8;
      if (*(int *)(lVar24 + (long)(int)uVar52 * 0x5c + 0x24) == 1) goto LAB_036aba84;
    }
    if (in_stack_0000109c == 9) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar47 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar43 = *(float *)(unaff_x19 + 200);
      fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar47 = fStack0000000000000140 * fVar47 * fVar49;
      fVar49 = fVar47 * (float)(int)(fVar43 / fVar47);
      uVar18 = (ulong)(uint)fVar49;
      if (fVar49 <= fVar43) {
        fVar49 = fVar43 + fVar47;
      }
LAB_036abca4:
      *(float *)(unaff_x19 + 200) = fVar49;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar43 = 1.0;
        }
        else {
          fVar43 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
        }
        fVar49 = *(float *)(unaff_x19 + 200);
        fVar50 = (float)FUN_0396af88(&stack0x00001050,0);
        if (unaff_x19[0x20] != 0) {
          fVar47 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar49 = fVar49 + fVar47 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fStack0000000000000140 *
                                     (fStack0000000000000138 + fVar43 * fVar50) +
                                     in_stack_000000f0 *
                                     (in_stack_000000e0._4_4_ +
                                     fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar49;
          goto joined_r0x036abbe8;
        }
        goto LAB_036afadc;
      }
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fStack0000000000000140 * fStack0000000000000138 +
               in_stack_000000f0 *
               (in_stack_000000e0._4_4_ +
               fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
      uVar18 = (ulong)(uint)fVar49;
      fVar49 = *(float *)(unaff_x19 + 200) - fVar49;
      *(float *)(unaff_x19 + 200) = fVar49;
      if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
        fVar47 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar18 = (ulong)(uint)fVar47;
        fVar49 = fVar49 - fVar47;
        goto LAB_036abca4;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar47 = *(float *)(unaff_x19 + 200);
      fVar49 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                        in_stack_000000f0 *
                        (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar49;
joined_r0x036abbe8:
      if ((in_stack_0000109c == 0x200b) || (uVar18 = (ulong)(uint)fVar47, unaff_w21 != 0)) {
        fVar47 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar18 = (ulong)(uint)fVar47;
        fVar49 = fVar49 + fVar47;
        goto LAB_036abca4;
      }
    }
    lVar24 = *in_stack_00000190;
    if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_036afadc;
    uVar52 = *unaff_x20;
    uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
    if (uVar30 <= uVar52) goto LAB_036afbe8;
    *(float *)(lVar41 + (long)(int)uVar52 * unaff_x24 + 0x144) = fVar49;
    uVar32 = in_stack_0000109c;
    if ((int)in_stack_0000109c < 0xd) {
      if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
      if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) ||
         ((float)uVar52 == in_stack_00000090._4_4_)) goto LAB_036abd48;
    }
    else {
      if (1 < in_stack_0000109c - 0x2028) {
        if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
        uVar18 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar52 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
      }
LAB_036abd48:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar47 = *(float *)(unaff_x19 + 0x99);
        fVar49 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar47 = fVar47 - fVar49;
        if (((fStack0000000000000060 < ABS(fVar47)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_036ed624(fVar47);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar47;
          *(float *)(unaff_x19 + 0x9b) = fVar47 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = PTR_DAT_03d9c920;
          lVar24 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar24 = *(long *)puVar7;
          }
          lVar41 = *(long *)(lVar24 + 0xb8);
          if (*(int *)(lVar41 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar41 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            }
            FUN_0217900c(&stack0x000010a0,lVar41 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
            memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
            puVar7 = PTR_DAT_03d9c920;
            lVar24 = *(long *)PTR_DAT_03d9c920;
            memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000001d0,0x378);
            thunk_FUN_01b4f09c(*(long *)(lVar24 + 0xb8) + 0x818,0);
            lVar24 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar24 + 0x7bc) = fVar47 + *(float *)(lVar24 + 0x7bc);
            *(float *)(lVar24 + 0x800) = fVar47 + *(float *)(lVar24 + 0x800);
            uVar20 = *(undefined8 *)PTR_DAT_03d9c8c8;
            memcpy(&stack0x000010a0,(void *)(lVar24 + 0x788),0x378);
            FUN_02178ef4(lVar24 + 0x11f0,&stack0x000010a0,uVar20);
          }
        }
      }
      fVar43 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar49 = *(float *)((long)unaff_x19 + 0x4cc) - fVar43;
      fVar47 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar47 = fVar49;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar47;
      fVar50 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_00001094 == '\0') {
        in_stack_00001098 = fVar47;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_00001094 = '\x01';
      }
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x50), lVar41 == 0)) goto LAB_036afadc;
      uVar52 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar41 + 0x18) <= uVar52) goto LAB_036afbe8;
      lVar27 = unaff_x19[0x93];
      lVar17 = lVar41 + (long)(int)uVar52 * 0x5c;
      *(int *)(lVar17 + 0x34) = (int)lVar27;
      uVar30 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar27 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
      *(uint *)(lVar17 + 0x38) = uVar30;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar11 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
      *(int *)(lVar17 + 0x40) = iVar11;
      *(int *)(lVar17 + 0x24) = (*(int *)(lVar17 + 0x3c) - *(int *)(lVar17 + 0x34)) + 1;
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_036afbe8;
      uVar62 = *(undefined4 *)(lVar24 + (long)(int)uVar30 * (long)iVar14 + 0x11c);
      lVar41 = lVar41 + (long)(int)uVar52 * 0x5c;
      *(float *)(lVar41 + 0x70) = fVar49;
      *(undefined4 *)(lVar41 + 0x6c) = uVar62;
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x50), lVar41 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
      fVar50 = fVar50 - fVar43;
      uVar18 = (ulong)(uint)fVar50;
      lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar41 + 0x74) =
           *(undefined4 *)
            (lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar41 + 0x78) = fVar50;
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      lVar17 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar41 = lVar27 + lVar17 * 0x5c;
      *(float *)(lVar41 + 0x44) =
           *(float *)(lVar41 + 0x74) - fStack0000000000000140 * in_stack_00000170._4_4_;
      *(float *)(lVar41 + 0x5c) = in_stack_00000108._4_4_;
      if (*(int *)(lVar41 + 0x24) == 1) {
        *(int *)(lVar27 + lVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0))
      goto LAB_036afadc;
      lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
      if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
      if ((*(char *)(lVar41 + lVar39 * unaff_x24 + 0x194) == '\0') &&
         (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_036afbe8;
      lVar27 = lVar27 + lVar17 * 0x5c;
      fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (in_stack_000000f0 *
                (in_stack_000000e0._4_4_ +
                fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar47 = -fVar43;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar47 = fVar43;
      }
      *(float *)(lVar27 + 0x58) = *(float *)(lVar41 + lVar39 * unaff_x24 + 0x144) + fVar47;
      *(float *)(lVar27 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar27 + 0x54) = fVar49;
      *(float *)(lVar27 + 0x48) = fStack0000000000000064 + (fVar50 - fVar49);
      *(float *)(lVar27 + 0x4c) = fVar50;
      if ((int)in_stack_0000109c < 0x2d) {
        if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
          lVar24 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar11 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar11;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar24 == 0) || (*(long *)(lVar24 + 0x50) == 0)) goto LAB_036afadc;
          if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar11) {
            FUN_036ed7dc();
            lVar24 = unaff_x19[0x6d];
            if (lVar24 == 0) goto LAB_036afadc;
          }
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 == 0) goto LAB_036afadc;
          if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
            fVar47 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
            if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
              if ((in_stack_0000109c == 0x2029) || (fVar49 = 0.0, in_stack_0000109c == 10)) {
                fVar49 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar22 = 0;
              fVar49 = fVar47 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       in_stack_00000058._4_4_ *
                       (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
                       in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar49) +
                       *(float *)(unaff_x19 + 0x9b);
            }
            else {
              if ((in_stack_0000109c == 0x2029) || (fVar49 = 0.0, in_stack_0000109c == 10)) {
                fVar49 = *(float *)((long)unaff_x19 + 0x2cc);
              }
              uVar22 = 1;
              fVar49 = *(float *)(unaff_x19 + 0x9b) +
                       *(float *)(unaff_x19 + 0x58) +
                       in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar49);
            }
            *(float *)(unaff_x19 + 0x9b) = fVar49;
            *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
            puVar7 = PTR_DAT_03d9c920;
            lVar24 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar24 = *(long *)puVar7;
            }
            uVar20 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x9a) = fVar47;
            uVar18 = NEON_rev64(uVar20,4);
            unaff_x19[0x99] = uVar18;
            *(float *)(unaff_x19 + 200) =
                 *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
            FUN_036ed2b4();
            FUN_036ed2b4();
            bStack0000000000000078 = 1;
            *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
            in_stack_00000068 = 1;
            uVar20 = in_stack_00001088;
            goto LAB_036a9250;
          }
          goto LAB_036afbe8;
        }
        if (in_stack_0000109c == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
          in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar32 = 3;
        }
      }
      else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d)) goto LAB_036ac1c4;
    }
LAB_036ac2f4:
    uVar52 = *unaff_x20;
    if (uVar30 <= uVar52) goto LAB_036afbe8;
    if (*(char *)(lVar41 + (long)(int)uVar52 * unaff_x24 + 0x194) != '\0') {
      lVar41 = lVar41 + (long)(int)uVar52 * unaff_x24;
      uVar19 = *(ulong *)(lVar41 + 0x11c);
      uVar18 = *(ulong *)(in_stack_00000088 + 0x230);
      *(ulong *)(in_stack_00000088 + 0x230) =
           uVar18 ^ (uVar18 ^ uVar19) &
                    ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar18 < (float)uVar19));
      uVar19 = *(ulong *)(in_stack_00000088 + 0x238);
      uVar18 = *(ulong *)(lVar41 + 0x128);
      *(ulong *)(in_stack_00000088 + 0x238) =
           uVar19 ^ (uVar19 ^ uVar18) &
                    ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar19 >> 0x20)),
                              -(uint)((float)uVar18 < (float)uVar19));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
      lVar41 = *(long *)(lVar24 + 0x58);
      if (lVar41 == 0) goto LAB_036afadc;
      iVar11 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar41 + 0x18) < iVar11) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52e84((long *)(lVar24 + 0x58),iVar11,1,*(undefined8 *)PTR_DAT_03d9c890);
        lVar24 = *in_stack_00000190;
        if (lVar24 == 0) goto LAB_036afadc;
      }
      lVar41 = *(long *)(lVar24 + 0x58);
      if (lVar41 == 0) goto LAB_036afadc;
      uVar30 = *(uint *)(unaff_x19 + 0x96);
      lVar27 = (long)(int)uVar30;
      uVar52 = *(uint *)(lVar41 + 0x18);
      if (uVar52 <= uVar30) goto LAB_036afbe8;
      lVar17 = lVar41 + lVar27 * 0x14;
      fVar49 = *(float *)(lVar17 + 0x30);
      uVar18 = (ulong)(uint)fVar49;
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar47 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar47 = fVar49;
      }
      *(float *)(lVar17 + 0x30) = fVar47;
      uVar32 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar32 == 0 && uVar30 == 0) {
        *(uint *)(lVar41 + (ulong)uVar30 * 0x14 + 0x20) = uVar32;
      }
      else {
        uVar5 = uVar32 - 1;
        if (0 < (int)uVar32) {
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_036afbe8;
          if (uVar30 != *(uint *)(lVar24 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar30 - 1 < uVar52) {
              *(uint *)(lVar41 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar41 + 0x20 + lVar27 * 0x14) = uVar32;
              goto LAB_036ac564;
            }
            goto LAB_036afbe8;
          }
        }
        if ((float)uVar32 == in_stack_00000090._4_4_) {
          *(float *)(lVar41 + lVar27 * 0x14 + 0x24) = in_stack_00000090._4_4_;
        }
      }
    }
LAB_036ac564:
    puVar7 = PTR_DAT_03d9c920;
    if (((char)unaff_x19[0x5b] == '\0') &&
       ((6 < *(uint *)(unaff_x19 + 0x5c) ||
        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
    if ((unaff_w21 == 0) &&
       (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) && (in_stack_0000109c != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_036ac660:
        if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101)) &&
             (0x1d < in_stack_0000109c - 0xa961)) || (uVar19 = FUN_036fbce8(0), (uVar19 & 1) != 0))
           && ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
                (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))))
        goto LAB_036ac6e8;
        lVar24 = FUN_036fbb7c(0);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_036afadc;
        uVar52 = FUN_0254f914(*(long *)(lVar24 + 0x10),in_stack_0000109c,
                              *(undefined8 *)PTR_DAT_03d9c860);
        if ((int)in_stack_00000090._4_4_ <= (int)*unaff_x20) {
          if ((uVar52 & 1) == 0) {
LAB_036ac8e4:
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_036ed2b4();
            goto LAB_036ac91c;
          }
LAB_036ac84c:
          if (uVar46 != uVar15 || ((bStack0000000000000078 ^ 0xff) & 1) != 0) goto LAB_036ac920;
          if (unaff_w21 != 0) goto LAB_036ac868;
          goto LAB_036ac8a0;
        }
        lVar24 = FUN_036fbb7c(0);
        if (((lVar24 == 0) || (*in_stack_00000190 == 0)) ||
           (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar41 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
        if (*(long *)(lVar24 + 0x18) == 0) goto LAB_036afadc;
        uVar19 = FUN_0254f914(*(long *)(lVar24 + 0x18),
                              *(undefined2 *)
                               (lVar41 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20),
                              *(undefined8 *)PTR_DAT_03d9c860);
        if ((uVar52 & 1) != 0) goto LAB_036ac84c;
        if ((uVar19 & 1) == 0) goto LAB_036ac8e4;
        if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
        if (unaff_w21 != 0) {
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
      }
      else {
        if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
LAB_036ac6f8:
        if ((bStack000000000000007c & 1) == 0 && in_stack_0000109c == 0xad) goto LAB_036ac868;
LAB_036ac8a0:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
      }
      bStack0000000000000078 = 1;
    }
    else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_036ac6e8:
      if ((bStack0000000000000078 & 1) != 0) {
        if (unaff_w21 == 0) goto LAB_036ac6f8;
LAB_036ac868:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        goto LAB_036ac8a0;
      }
LAB_036ac91c:
      bStack0000000000000078 = 0;
    }
    else {
      if (((in_stack_0000109c - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_0000109c == 0xa0 || (in_stack_0000109c == 0x2060)))) goto LAB_036ac660;
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      bStack0000000000000078 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
    }
LAB_036ac920:
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036ed2b4();
    *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
    uVar20 = in_stack_00001088;
  }
LAB_036a9250:
  do {
    in_stack_00000100 = (float)unaff_d13;
    in_stack_00001068 = in_stack_00001068 + 1;
    lVar24 = unaff_x19[0x8f];
    if (lVar24 == 0) goto LAB_036afadc;
    if ((int)*(uint *)(lVar24 + 0x18) <= (int)in_stack_00001068) {
LAB_036acbd8:
      fVar47 = (float)uVar18;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar47 = DAT_00b552b8,
         DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar47 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar49 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar47 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar43 = (*(float *)((long)unaff_x19 + 0x23c) - fVar47) * 0.5;
          if (fVar43 <= DAT_00b55428) {
            fVar43 = DAT_00b55428;
          }
          *(float *)(unaff_x19 + 0x48) = fVar47;
          fVar43 = (fVar47 + fVar43) * 20.0 + 0.5;
          fVar47 = DAT_00b556b4;
          if (fVar43 != INFINITY) {
            fVar47 = (float)(int)fVar43 / 20.0;
          }
          if (fVar49 <= fVar47) {
            fVar47 = fVar49;
          }
          goto LAB_036acc94;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar7 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar20 = FUN_0303de64(in_stack_00000038,0);
        uVar16 = FUN_03052638(_fStack0000000000000040,0);
        uVar20 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar20,*(undefined8 *)PTR_DAT_03d9c938
                              ,uVar16,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar20,0);
      }
      puVar8 = PTR_DAT_03d9c920;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar42 == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_036acd60;
      }
      lVar24 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar8;
      }
      plVar40 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
      lVar24 = **(long **)(lVar24 + 0xb8);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
      iVar14 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x60), lVar24 == 0))
      goto LAB_036afadc;
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa40c(lVar24 + 0x20,0,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      iVar11 = (int)unaff_x19[0x4e];
      in_stack_00000108._4_4_ =
           **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      in_stack_000000f8 =
           *(long **)(*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                     + 1);
      lVar24 = unaff_x19[0xe3];
      in_stack_000000d0 = in_stack_00000108._4_4_;
      _fStack00000000000000c8 = (ulong)in_stack_000000f8;
      if (iVar11 < 0x401) {
        if (iVar11 == 0x100) {
          if (lVar24 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_036afbe8;
          uVar20 = *(undefined8 *)(lVar24 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar41 = *(long *)(*in_stack_00000190 + 0x58), lVar41 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            fVar47 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar47 = *(float *)(unaff_x19 + 0x97);
          }
          in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
          fVar47 = (0.0 - fVar47) - fStack0000000000000020;
        }
        else if (iVar11 == 0x200) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
          in_stack_000000d0 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar24 = *(long *)(*in_stack_00000190 + 0x58), lVar24 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
            in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
            fVar47 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) +
                      *(float *)(lVar24 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
            fVar47 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar11 != 0x400) goto LAB_036ad288;
          if (lVar24 == 0) goto LAB_036afadc;
          if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
          uVar20 = *(undefined8 *)(lVar24 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar41 = *(long *)(*in_stack_00000190 + 0x58), lVar41 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            in_stack_00001098 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
          fVar47 = fStack0000000000000024 + (0.0 - in_stack_00001098);
        }
LAB_036ad278:
        _fStack00000000000000c8 =
             CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar47);
      }
      else if (iVar11 == 0x800) {
        if (lVar24 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
        fVar47 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30)
                      ) * 0.5 + 0.0);
        in_stack_000000d0 = fVar47;
      }
      else {
        if (iVar11 == 0x1000) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
            uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            in_stack_000000d0 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            fVar47 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_036ad278;
          }
          goto LAB_036afbe8;
        }
        if (iVar11 == 0x2000) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
          fVar47 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          _fStack00000000000000c8 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar24 + 0x24) +
                        (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar47);
          in_stack_000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        }
      }
LAB_036ad288:
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      uVar20 = FUN_03afb088(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar7);
      }
      uVar18 = FUN_03922f24(uVar20,0,0);
      lVar24 = FUN_036dfed8();
      if (lVar24 == 0) goto LAB_036afadc;
      FUN_0392a7f0(lVar24,0);
      *(float *)(unaff_x19 + 0xe2) = fVar47;
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      iVar11 = FUN_03afa68c(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      fVar49 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
      uVar62 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
      }
      if (DAT_03ff747c == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03d9c888);
        DAT_03ff747c = '\x01';
      }
      puVar7 = PTR_DAT_03d9c888;
      lVar24 = *(long *)PTR_DAT_03d9c888;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar7;
      }
      puVar25 = *(undefined4 **)(lVar24 + 0xb8);
      uVar19 = (ulong)(uint)puVar25[1];
      uVar51 = (ulong)(uint)puVar25[2];
      uVar53 = (ulong)(uint)puVar25[3];
      FUN_036c214c(*puVar25,uVar19,uVar51,uVar53,&stack0x00001070,0x4000ffff,0);
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar24 = *in_stack_00000190;
      if (lVar24 == 0) goto LAB_036afadc;
      uVar46 = *unaff_x20;
      if ((int)uVar46 < 1) {
        in_stack_000000e0._4_4_ = 0.0;
        iVar14 = 0;
        goto LAB_036af524;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      fVar47 = ABS(fVar47);
      fVar43 = 1.0;
      if ((uVar18 & 1) == 0) {
        fVar43 = fVar47;
      }
      if (lVar24 == 0) goto LAB_036afadc;
      bVar10 = false;
      bVar6 = false;
      _fStack0000000000000138 = 0;
      bVar9 = false;
      in_stack_000000e0._4_4_ = 0.0;
      fStack000000000000002c = 0.0;
      in_stack_00000170._4_4_ = 0.0;
      iStack0000000000000074 = 0;
      lVar41 = 0x2e0;
      fVar58 = 0.0;
      fVar50 = 0.0;
      fStack00000000000000d4 = fStack00000000000000e8;
      fStack00000000000000d8 = fStack00000000000000ec;
      fStack0000000000000114 = *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
      _bStack0000000000000078 = fStack00000000000000ec;
      fStack00000000000000a4 = fStack00000000000000ec;
      fStack00000000000000a8 = fStack00000000000000e8;
      fStack0000000000000110 = 0.0;
      in_stack_00000090._4_4_ = 0.0;
      fStack000000000000004c = 0.0;
      fStack00000000000000b0 = 0.0;
      fStack0000000000000040 = 0.0;
      _bStack000000000000007c = in_stack_000000c0._4_4_;
      fStack0000000000000080 = fStack00000000000000e8;
      fStack00000000000000a0 = (float)in_stack_000000c0._4_4_;
      uVar15 = 1;
      uVar52 = 0;
      goto LAB_036ad4b0;
    }
    if (*(uint *)(lVar24 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
    in_stack_0000109c = *(uint *)(lVar24 + (long)(int)in_stack_00001068 * 0xc + 0x20);
    if (in_stack_0000109c == 0) goto LAB_036acbd8;
    if (5 < in_stack_00000188._4_4_) {
      uVar20 = FUN_0303de64(&stack0x0000109c,0);
      uVar16 = FUN_0303de64(&stack0x00001068,0);
      uVar20 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar20,*(undefined8 *)PTR_DAT_03d9c940,
                            uVar16,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f2e04(uVar20,0);
      uVar20 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_0000109c != 0x3c)) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
      thunk_FUN_01b4f09c(in_stack_00000178);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar19 = FUN_036e7318();
      if (((uVar19 & 1) != 0) &&
         (in_stack_00001068 = in_stack_0000104c, uVar42 = in_stack_0000109c,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    uVar46 = *unaff_x20;
    if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
    lVar27 = (long)(int)uVar46;
    cVar23 = *(char *)(lVar24 + lVar27 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar41 = unaff_x19[0x24];
    if ((uint)uVar20 == uVar46) {
      in_stack_0000109c = (uint)((ulong)uVar20 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_0000109c == 0x2026) {
        *(long *)(lVar24 + lVar27 * unaff_x24 + 0x30) = unaff_x19[0xca];
        thunk_FUN_01b4f09c();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar24 + 0x2c) = 0;
        *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
        thunk_FUN_01b4f09c();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        thunk_FUN_01b4f09c();
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0)) goto LAB_036afadc;
        uVar46 = *unaff_x20;
        if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
        unaff_w23 = 1;
        *(int *)(lVar24 + (long)(int)uVar46 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        uVar20 = CONCAT44(3,uVar46 + 1);
      }
      else if (in_stack_0000109c == 3) {
        if ((*in_stack_00000178 == 0) || (lVar17 = FUN_036c835c(*in_stack_00000178,0), lVar17 == 0))
        goto LAB_036afadc;
        uVar16 = FUN_0262f3a4(lVar17,3,*(undefined8 *)PTR_DAT_03d9c870);
        if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
        *(undefined8 *)(lVar24 + lVar27 * unaff_x24 + 0x30) = uVar16;
        thunk_FUN_01b4f09c();
        uVar46 = *(uint *)((long)unaff_x19 + 0x494);
        unaff_w23 = 1;
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
      else {
        unaff_w23 = 1;
      }
    }
    else {
      unaff_w23 = 0;
    }
    if (((int)uVar46 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)uVar46 * (long)iVar14;
      *(undefined1 *)(lVar24 + 0x194) = 0;
      *(undefined2 *)(lVar24 + 0x20) = 0x200b;
      *(undefined4 *)(lVar24 + 100) = 0;
      *unaff_x20 = uVar46 + 1;
      uVar42 = in_stack_0000109c;
      goto LAB_036a9250;
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 == 0) {
      uVar46 = *(uint *)((long)unaff_x19 + 0x25c);
      if ((uVar46 >> 4 & 1) == 0) {
        if ((uVar46 >> 3 & 1) == 0) {
          in_stack_00000150 = 1.0;
          if ((uVar46 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar19 = FUN_02fdd9e8(in_stack_0000109c,0);
            if ((uVar19 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar46 = FUN_02fddc48(in_stack_0000109c,0);
              in_stack_0000109c = uVar46 & 0xffff;
              in_stack_00000150 = fStack0000000000000028;
            }
          }
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_02fdd92c(in_stack_0000109c,0);
          in_stack_00000150 = 1.0;
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar46 = FUN_02fdddc0(in_stack_0000109c,0);
            goto LAB_036a9658;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdd9e8(in_stack_0000109c,0);
        in_stack_00000150 = 1.0;
        if ((uVar19 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar46 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
          in_stack_00000150 = 1.0;
          in_stack_0000109c = uVar46 & 0xffff;
        }
      }
      iVar11 = *(int *)((long)unaff_x19 + 0x644);
    }
    else {
      in_stack_00000150 = 1.0;
    }
    uVar42 = in_stack_0000109c;
    if (iVar11 != 0) {
      if (iVar11 != 1) {
        lVar24 = *in_stack_00000190;
        fVar47 = 0.0;
        if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
          fVar47 = in_stack_00000100;
        }
        in_stack_00000180 = 0.0;
        if (lVar24 == 0) goto LAB_036afadc;
        in_stack_00000130 = 0.0;
        in_stack_00000128._4_4_ = 0.0;
        goto LAB_036a9b50;
      }
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar24 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar24 == 0))
      goto LAB_036afadc;
      lVar24 = FUN_02b59714(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar7 = PTR_DAT_03d9c920;
      if (lVar24 != 0) {
        if (in_stack_0000109c == 0x3c) {
          in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar27 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar27 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar47 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_0396ac24(&stack0x00000fe0,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
        fVar43 = (float)FUN_0396ac34(&stack0x00000fe0,0);
        fVar49 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar49 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar49 = (fVar47 / (float)iVar11) * fVar43 * fVar49;
        iVar11 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
        fVar47 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          iVar11 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar43 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
          in_stack_00000128._4_4_ = fStack00000000000000a0;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            in_stack_00000128._4_4_ = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_036afadc;
          fVar50 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
          FUN_0396b140(&stack0x000010a0,*(long *)(lVar24 + 0x20),0);
          fVar58 = (float)FUN_0396af70(&stack0x00000fc0,0);
          if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
          fVar45 = *(float *)(lVar24 + 0x2c);
          fVar44 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          in_stack_00000130 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar59 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar54 = *(float *)((long)unaff_x19 + 0x404);
          in_stack_00000180 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_036afadc;
          in_stack_00000180 = fVar49 * fVar59 * fVar54 * in_stack_00000180;
          in_stack_00000128._4_4_ = (fVar47 / (float)iVar11) * fVar43 * in_stack_00000128._4_4_;
          in_stack_00000100 = in_stack_00000128._4_4_ * (fVar50 / fVar58) * fVar45 * fVar44;
          in_stack_00000128._4_4_ = in_stack_00000128._4_4_ / in_stack_00000100;
          in_stack_00000130 = in_stack_00000128._4_4_ * in_stack_00000130;
          fVar47 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
          in_stack_00000128._4_4_ = in_stack_00000128._4_4_ * fVar47;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          iVar11 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          fVar43 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
          fVar58 = *(float *)(lVar24 + 0x2c);
          fVar50 = fStack00000000000000a0;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar50 = 1.0;
          }
          fVar44 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
          in_stack_00000130 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          fVar45 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          fVar59 = *(float *)((long)unaff_x19 + 0x404);
          in_stack_00000180 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
          in_stack_00000180 = fVar49 * fVar45 * fVar59 * in_stack_00000180;
          in_stack_00000100 = (fVar47 / (float)iVar11) * fVar43 * fVar50 * fVar58 * fVar44;
          in_stack_00000128._4_4_ = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
        }
        *in_stack_000000f8 = lVar24;
        thunk_FUN_01b4f09c(in_stack_000000f8,lVar24);
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar24 + 0x2c) = 1;
        *(float *)(lVar24 + 0x160) = in_stack_00000100;
        *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
        thunk_FUN_01b4f09c();
        if ((*in_stack_00000190 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
        thunk_FUN_01b4f09c();
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        in_stack_00000170._4_4_ = 0.0;
        *(int *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar41;
        goto FUN_036a9b34;
      }
      goto LAB_036a9250;
    }
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
  } while (*in_stack_000000f8 == 0);
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_00000178 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  thunk_FUN_01b4f09c(in_stack_00000178);
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_00000168 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  thunk_FUN_01b4f09c();
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar15 = *unaff_x20;
  uVar46 = *(uint *)(lVar24 + 0x18);
  if (uVar46 <= uVar15) goto LAB_036afbe8;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + (long)(int)uVar15 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_036a9778:
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar47 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
    lVar24 = unaff_x19[0x20];
  }
  else {
    lVar41 = unaff_x19[0x8f];
    if (lVar41 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar41 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
    if ((*(int *)(lVar41 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
       (uVar15 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
    if (uVar46 <= uVar15 - 1) goto LAB_036afbe8;
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar47 = *(float *)(lVar24 + (long)(int)(uVar15 - 1) * (long)iVar14 + 0x60);
    iVar11 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
    lVar24 = *in_stack_00000178;
  }
  if (lVar24 == 0) goto LAB_036afadc;
  fVar43 = (float)FUN_0396ac34(lVar24 + 0x50,0);
  fVar49 = fStack00000000000000a0;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar49 = 1.0;
  }
  in_stack_00000128._4_4_ = 0.0;
  in_stack_00000130 = 0.0;
  if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_00000130 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_00000128._4_4_ = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
  }
  lVar24 = unaff_x19[0xc9];
  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
  fVar50 = *(float *)((long)unaff_x19 + 0x404);
  fVar58 = *(float *)(lVar24 + 0x2c);
  in_stack_00000100 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar44 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar45 = *(float *)((long)unaff_x19 + 0x404);
  in_stack_00000180 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
  lVar24 = unaff_x19[0x6d];
  if ((lVar24 == 0) || (lVar41 = *(long *)(lVar24 + 0x38), lVar41 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar41 = lVar41 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar41 + 0x2c) = 0;
  fVar49 = ((in_stack_00000150 * fVar47) / (float)iVar11) * fVar43 * fVar49;
  in_stack_00000100 = fVar49 * fVar50 * fVar58 * in_stack_00000100;
  *(float *)(lVar41 + 0x160) = in_stack_00000100;
  uVar46 = *(uint *)(unaff_x19 + 0x24);
  in_stack_00000180 = fVar49 * fVar44 * fVar45 * in_stack_00000180;
  if (uVar46 == 0) {
    in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar41 = unaff_x19[0xe1];
    if (lVar41 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar41 + 0x18) <= uVar46) goto LAB_036afbe8;
    lVar41 = *(long *)(lVar41 + (long)(int)uVar46 * 8 + 0x20);
    if (lVar41 == 0) goto LAB_036afadc;
    in_stack_00000170._4_4_ = *(float *)(lVar41 + 0x10c);
  }
FUN_036a9b34:
  fVar47 = 0.0;
  if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
    fVar47 = in_stack_00000100;
  }
LAB_036a9b50:
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_stack_0000109c;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar46 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)uVar46 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar24 + 0x184) = in_stack_000001d8;
  *(undefined8 *)(lVar24 + 0x17c) = in_stack_000001d0;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar24,0);
  puVar7 = StringLiteral_455;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar46 = FUN_02fdb080(in_stack_0000109c,0);
    unaff_w21 = uVar46 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar46 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar46 << 0x20;
    fVar43 = 0.0;
    fVar49 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar52 = *unaff_x20;
    uVar15 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar52 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar52 + 1) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar52 + 1) * (long)iVar14 + 0x30);
      if ((((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar41 = *(long *)(*in_stack_00000178 + 0x128), lVar41 == 0)) ||
         (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)) goto LAB_036afadc;
      uVar18 = FUN_02630bd0(lVar41,uVar15 | *(int *)(lVar24 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar62 = 0;
      if ((uVar18 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar46 << 0x20;
        fVar43 = 0.0;
        fVar49 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar62 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar49 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar43 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar46 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar46,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar52 = *unaff_x20;
    }
    else {
      uVar62 = 0;
      _fStack0000000000000138 = (ulong)uVar46 << 0x20;
      fVar43 = 0.0;
      fVar49 = 0.0;
    }
    if (0 < (int)uVar52) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar52 - 1) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar52 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar41 = *(long *)(*in_stack_00000178 + 0x128), lVar41 == 0 ||
          (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)))) goto LAB_036afadc;
      uVar18 = FUN_02630bd0(lVar41,*(uint *)(lVar24 + 0x28) | uVar15 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar18 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar48 = (undefined4)_fStack0000000000000138;
        fVar49 = (float)FUN_036d2d10(fVar49,fVar43,_fStack0000000000000138 & 0xffffffff,uVar62,
                                     *(undefined4 *)(in_stack_00000fb8 + 0x28),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          fStack000000000000013c = 0.0;
        }
        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar48);
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar58 = *(float *)(unaff_x19 + 200);
    fVar50 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar58 = fVar58 - fVar47 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar58;
    if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar58 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar50 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000098 = 0.0;
  if (fVar50 != 0.0) {
    fVar58 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar44 = (float)FUN_0396af78(&stack0x00001050,0);
    in_stack_00000098 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar50 * 0.5 - fVar47 * (fVar58 * 0.5 + fVar44));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_0391f968(lVar24,0,0);
    in_stack_000000d0 = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar24 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar24 == 0) goto LAB_036afadc;
      uVar18 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      in_stack_000000d0 = 0.0;
      if ((uVar18 & 1) != 0) {
        lVar24 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar24 == 0) goto LAB_036afadc;
        fVar50 = (float)FUN_03900954(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar58 = *(float *)(*in_stack_00000178 + 0x1b0);
        in_stack_000000d0 =
             (float)FUN_03900954(*in_stack_00000168,
                                 *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        in_stack_000000d0 = in_stack_000000d0 * fVar50 * fVar58 * 0.25;
        if (fVar50 < in_stack_00000170._4_4_ + in_stack_000000d0) {
          in_stack_00000170._4_4_ = fVar50 - in_stack_000000d0;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_000000e0._4_4_ = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_0391f968(lVar24,0,0);
    in_stack_000000e0._4_4_ = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar24 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar24 == 0) goto LAB_036afadc;
      uVar18 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
      if ((uVar18 & 1) != 0) {
        lVar24 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar24 == 0) goto LAB_036afadc;
        uVar18 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
        if ((uVar18 & 1) != 0) {
          lVar24 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar24 != 0) {
            fVar50 = (float)FUN_03900954(lVar24,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
            if ((*in_stack_00000178 != 0) && (*in_stack_00000168 != 0)) {
              fVar58 = *(float *)(*in_stack_00000178 + 0x1a8);
              in_stack_000000d0 =
                   (float)FUN_03900954(*in_stack_00000168,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
              in_stack_000000d0 = in_stack_000000d0 * fVar50 * fVar58 * 0.25;
              if (fVar50 < in_stack_00000170._4_4_ + in_stack_000000d0) {
                in_stack_00000170._4_4_ = fVar50 - in_stack_000000d0;
              }
              goto LAB_036aa254;
            }
          }
          goto LAB_036afadc;
        }
      }
    }
    in_stack_000000d0 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar50 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar47 * (fVar49 + ((fVar50 - in_stack_00000170._4_4_) - in_stack_000000d0));
  fVar49 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar43 = *(float *)((long)unaff_x19 + 0x61c) +
           ((in_stack_00000180 + fVar47 * (fVar43 + in_stack_00000170._4_4_ + fVar49)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar49 = (float)FUN_0396af70(&stack0x00001050,0);
  unaff_s10 = fVar43 - fVar47 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar49);
  fVar49 = (float)FUN_0396af68(&stack0x00001050,0);
  param_5 = fStack0000000000000124 +
            (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
            fVar47 * (in_stack_000000d0 + in_stack_000000d0 +
                     in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar49);
  fVar49 = fStack0000000000000124;
  unaff_s11 = param_5;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar58 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar49 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar45 = fVar58 * fVar47 * (in_stack_000000d0 + in_stack_00000170._4_4_ + fVar49);
    fVar49 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar50 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar43 = fVar43 + 0.0;
    unaff_s10 = unaff_s10 + 0.0;
    fVar44 = fStack0000000000000124 + fVar45;
    fVar58 = fVar58 * fVar47 * (((fVar49 - fVar50) - in_stack_00000170._4_4_) - in_stack_000000d0);
    fVar50 = param_5 + fVar45;
    fVar45 = (fVar45 - fVar58) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar58) - fVar45;
    param_5 = (param_5 + fVar58) - fVar45;
    fVar49 = fVar44 - fVar45;
    unaff_s11 = fVar50 - fVar45;
  }
  _fStack0000000000000140 = (ulong)(uint)fVar47;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar50 = 0.0;
    param_2 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000110 = 0.0;
    unaff_s15 = unaff_s10;
    fStack0000000000000114 = fVar43;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar60 = (unaff_s10 + fVar43) * 0.5;
    fVar56 = (unaff_s11 + fStack0000000000000124) * 0.5;
    fVar43 = fVar43 - fVar60;
    fStack0000000000000110 = 0.0;
    fVar44 = fVar43;
    fVar49 = (float)FUN_03911ddc(fVar49 - fVar56,_fStack0000000000000080,0);
    fVar49 = fVar56 + fVar49;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar54 = unaff_s10 - fVar60;
    fVar50 = 0.0;
    fVar45 = fVar54;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar56,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar56 + fStack0000000000000124;
    fVar50 = fVar50 + 0.0;
    fVar58 = 0.0;
    fVar59 = (float)FUN_03911ddc(unaff_s11 - fVar56,_fStack0000000000000080,0);
    unaff_s11 = fVar56 + fVar59;
    fVar43 = fVar60 + fVar43;
    fVar58 = fVar58 + 0.0;
    param_2 = 0.0;
    param_5 = (float)FUN_03911ddc(param_5 - fVar56,_fStack0000000000000080,0);
    param_5 = fVar56 + param_5;
    unaff_s10 = fVar60 + fVar54;
    param_2 = param_2 + 0.0;
    unaff_s15 = fVar60 + fVar45;
    fStack0000000000000114 = fVar60 + fVar44;
  }
  in_stack_00000128 = CONCAT44(in_stack_00000128._4_4_,fVar49);
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar24 = *(long *)(*in_stack_00000190 + 0x38);
  unaff_d13 = (ulong)(uint)fVar47;
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar24 + 0x120) = unaff_s15;
  *(float *)(lVar24 + 0x124) = fVar50;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x110) = fVar49;
  *(float *)(lVar24 + 0x114) = fStack0000000000000114;
  *(float *)(lVar24 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = unaff_s11;
  *(float *)(lVar24 + 300) = fVar43;
  *(float *)(lVar24 + 0x130) = fVar58;
  if ((*in_stack_00000190 == 0) || (param_1 = *(long *)(*in_stack_00000190 + 0x38), param_1 == 0))
  goto LAB_036afadc;
  in_x9 = (long)(int)*unaff_x20;
  unaff_x28 = in_stack_00000190;
  in_stack_00001088 = uVar20;
  if (*(uint *)(param_1 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  goto code_r0x036aa51c;
LAB_036ad4b0:
  uVar46 = uVar15 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x50), lVar27 == 0))
  goto LAB_036afadc;
  lVar39 = (long)(int)uVar46;
  lVar17 = lVar24 + lVar39 * 0x178;
  uVar30 = *(uint *)(lVar17 + 100);
  if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_036afbe8;
  lVar37 = (long)(int)uVar30;
  lVar27 = lVar27 + lVar37 * 0x5c;
  lVar33 = *(long *)(lVar17 + 0x38);
  uVar3 = *(ushort *)(lVar17 + 0x20);
  uVar32 = *(uint *)(lVar27 + 0x3c);
  uVar42 = *(uint *)(lVar27 + 0x68);
  iVar2 = *(int *)(lVar27 + 0x20);
  iVar12 = *(int *)(lVar27 + 0x28);
  iVar13 = *(int *)(lVar27 + 0x2c);
  uVar5 = *(uint *)(lVar27 + 0x40);
  lVar17 = (long)(int)uVar5;
  fVar59 = *(float *)(lVar27 + 0x4c);
  fVar56 = *(float *)(lVar27 + 0x54);
  fVar44 = *(float *)(lVar27 + 0x58);
  fVar57 = *(float *)(lVar27 + 0x5c);
  fVar60 = *(float *)(lVar27 + 0x60);
  fVar55 = *(float *)(lVar27 + 0x6c);
  fVar61 = *(float *)(lVar27 + 0x70);
  fVar45 = *(float *)(lVar27 + 0x74);
  fVar54 = *(float *)(lVar27 + 0x78);
  uVar36 = (uint)uVar3;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar60 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar44;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar60 + fVar57 * 0.5) - fVar44 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar57 + fVar60) - fVar44;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar57 + fVar60;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar42 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar32 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fde5f4(uVar4,0);
      if ((uVar18 & 1) == 0) {
        bVar1 = (int)uVar30 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar44 <= fVar57) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar60;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar57 + fVar60;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar15 == 1) || (uVar30 != uVar52)) || (uVar46 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar60;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar57 + fVar60;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar36,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar60 = -fVar44;
        if (cVar23 != '\0') {
          fVar60 = fVar44;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar32) goto LAB_036afbe8;
        iVar13 = (int)*(char *)(lVar24 + (long)(int)uVar32 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar13 + -1;
        if (iVar13 < 1) {
          fVar44 = 1.0;
          iVar13 = 1;
        }
        else {
          fVar44 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar36 == 9) {
LAB_036af498:
          fVar44 = 1.0 - fVar44;
        }
        else {
          if (uVar36 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_02fdea78(uVar36,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar18 & 1) != 0) goto LAB_036af498;
          }
          iVar13 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar12;
        }
        fVar44 = ((fVar57 + fVar60) * fVar44) / (float)iVar13;
        if (cVar23 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar44;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar44;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar44 = fVar55 + fVar45;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar42 <= uVar46) goto LAB_036afbe8;
  lVar27 = lVar24 + lVar39 * 0x178;
  fVar57 = in_stack_000000d0 + in_stack_00000108._4_4_;
  fVar44 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar60 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar27 + 0x194) == '\0') goto LAB_036adf70;
  iVar12 = *(int *)(lVar24 + lVar39 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_036add84;
  fVar58 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar30,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar24 + lVar39 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar58 = 1.0;
    break;
  case 1:
    fVar54 = *(float *)(lVar24 + lVar39 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar45 = (in_stack_00000108._4_4_ + fVar54) - *(float *)(in_stack_00000088 + 0x230);
      fVar54 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar45 = fVar45 - fVar55;
    *(float *)(lVar26 + 0x84) = fVar58 + (fVar54 - fVar55) / fVar45;
    *(float *)(lVar26 + 0xac) = fVar58 + (*(float *)(lVar26 + 0x98) - fVar55) / fVar45;
    *(float *)(lVar26 + 0xd4) = fVar58 + (*(float *)(lVar26 + 0xc0) - fVar55) / fVar45;
    fVar58 = fVar58 + (*(float *)(lVar26 + 0xe8) - fVar55) / fVar45;
    break;
  case 2:
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar54 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar45 = (in_stack_00000108._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar26 + 0x84) = fVar58 + fVar45 / fVar54;
    *(float *)(lVar26 + 0xac) =
         fVar58 + ((in_stack_00000108._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar58 + ((in_stack_00000108._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar58 = fVar58 + ((in_stack_00000108._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar24 + lVar39 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar54 = fVar54 - fVar61;
      fVar45 = fVar58 + (*(float *)(lVar26 + 0x74) - fVar61) / fVar54;
      fVar54 = fVar58 + (*(float *)(lVar26 + 0x9c) - fVar61) / fVar54;
      *(float *)(lVar26 + 0x88) = fVar45;
      *(float *)(lVar26 + 0xb0) = fVar54;
      *(float *)(lVar26 + 0xd8) = fVar45;
      *(float *)(lVar26 + 0x100) = fVar54;
      break;
    case 2:
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar45 = fVar58 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar45;
      fVar54 = *(float *)(unaff_x19 + 0x9c);
      fVar55 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar45;
      fVar45 = fVar58 + (*(float *)(lVar26 + 0x9c) - fVar54) / (fVar55 - fVar54);
      *(float *)(lVar26 + 0xb0) = fVar45;
      *(float *)(lVar26 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar42 <= uVar46) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar45 = *(float *)(lVar26 + 0x15c);
    fVar54 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar45) * 0.5;
    fVar55 = fVar58 + *(float *)(lVar26 + 0x88) * fVar45 + fVar54;
    fVar58 = fVar58 + fVar54 + *(float *)(lVar26 + 0xb0) * fVar45;
    *(float *)(lVar26 + 0x84) = fVar55;
    *(float *)(lVar26 + 0xac) = fVar55;
    *(float *)(lVar26 + 0xd4) = fVar58;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar24 + lVar39 * 0x178 + 0xfc) = fVar58;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar46) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar39 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar46 < uVar42) {
      lVar26 = lVar24 + lVar39 * 0x178;
      fVar59 = fVar59 - fVar56;
      fVar58 = (*(float *)(lVar26 + 0x74) - fVar56) / fVar59;
      fVar59 = (*(float *)(lVar26 + 0x9c) - fVar56) / fVar59;
      *(float *)(lVar26 + 0x88) = fVar58;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar42 <= uVar46) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar58 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar58;
    fVar59 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar26 + 0xb0) = fVar59;
    *(float *)(lVar26 + 0xd8) = fVar59;
    *(float *)(lVar26 + 0x100) = fVar58;
    break;
  case 3:
    if (uVar42 <= uVar46) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar39 * 0x178;
    fVar59 = *(float *)(lVar26 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar59) * 0.5;
    fVar58 = *(float *)(lVar26 + 0x84) / fVar59 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar26 + 0xd4) / fVar59;
    *(float *)(lVar26 + 0x88) = fVar58;
    *(float *)(lVar26 + 0xb0) = fVar45;
    *(float *)(lVar26 + 0x100) = fVar58;
    *(float *)(lVar26 + 0xd8) = fVar45;
  }
  if (uVar42 <= uVar46) goto LAB_036afbe8;
  lVar26 = lVar24 + lVar39 * 0x178;
  fVar58 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar39 * 0x178 + 400) & 1) != 0)) {
    fVar58 = -fVar58;
  }
  fVar45 = fVar47;
  if (((iVar11 == 2) || (fVar45 = fVar43, iVar11 == 1)) || (fVar45 = fVar47 / fVar49, iVar11 == 0))
  {
    fVar58 = fVar45 * fVar58;
  }
  lVar26 = lVar24 + lVar39 * 0x178;
  fVar59 = *(float *)(lVar26 + 0x88);
  fVar54 = *(float *)(lVar26 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar54 != INFINITY) {
    fVar45 = (float)(int)fVar54;
  }
  fVar55 = *(float *)(lVar26 + 0xd4);
  fVar61 = *(float *)(lVar26 + 0xd8);
  fVar56 = -2.1474836e+09;
  if (fVar59 != INFINITY) {
    fVar56 = (float)(int)fVar59;
  }
  uVar48 = FUN_036f2b00(fVar54 - fVar45,fVar59 - fVar56);
  *(undefined4 *)(lVar26 + 0x84) = uVar48;
  if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
  fVar61 = fVar61 - fVar56;
  *(float *)(lVar26 + 0x88) = fVar58;
  uVar48 = FUN_036f2b00(fVar54 - fVar45,fVar61);
  *(undefined4 *)(lVar24 + lVar39 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
  fVar55 = fVar55 - fVar45;
  *(float *)(lVar24 + lVar39 * 0x178 + 0xb0) = fVar58;
  fVar45 = (float)FUN_036f2b00(fVar55,fVar61);
  *(float *)(lVar26 + 0xd4) = fVar45;
  if (*(uint *)(lVar24 + 0x18) <= uVar46) goto LAB_036afbe8;
  *(float *)(lVar26 + 0xd8) = fVar58;
  uVar48 = FUN_036f2b00(fVar55,fVar59 - fVar56);
  *(undefined4 *)(lVar24 + lVar39 * 0x178 + 0xfc) = uVar48;
  uVar42 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar42 <= uVar46) goto LAB_036afbe8;
  *(float *)(lVar24 + lVar39 * 0x178 + 0x100) = fVar58;
LAB_036add84:
  if (((int)uVar46 < (int)unaff_x19[0x65]) &&
     ((int)in_stack_000000e0._4_4_ < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar46) goto LAB_036afbe8;
      lVar27 = lVar24 + lVar39 * 0x178;
      *(ulong *)(lVar27 + 0x70) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0x70));
      *(float *)(lVar27 + 0x78) = fVar60 + *(float *)(lVar27 + 0x78);
      *(ulong *)(lVar27 + 0x98) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0x98));
      *(float *)(lVar27 + 0xa0) = fVar60 + *(float *)(lVar27 + 0xa0);
      *(ulong *)(lVar27 + 0xc0) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0xc0));
      *(float *)(lVar27 + 200) = fVar60 + *(float *)(lVar27 + 200);
      *(ulong *)(lVar27 + 0xe8) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar27 + 0xe8));
      *(float *)(lVar27 + 0xf0) = fVar60 + *(float *)(lVar27 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar46 < uVar42) {
        if (*(uint *)(lVar24 + lVar39 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar27 = lVar24 + lVar39 * 0x178;
          *(ulong *)(lVar27 + 0x70) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0x70));
          *(float *)(lVar27 + 0x78) = fVar60 + *(float *)(lVar27 + 0x78);
          *(ulong *)(lVar27 + 0x98) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0x98));
          *(float *)(lVar27 + 0xa0) = fVar60 + *(float *)(lVar27 + 0xa0);
          *(ulong *)(lVar27 + 0xc0) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0xc0));
          *(float *)(lVar27 + 200) = fVar60 + *(float *)(lVar27 + 200);
          *(ulong *)(lVar27 + 0xe8) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                        fVar57 + (float)*(undefined8 *)(lVar27 + 0xe8));
          *(float *)(lVar27 + 0xf0) = fVar60 + *(float *)(lVar27 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar42 <= uVar46) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar42 = *(uint *)(lVar24 + 0x18);
  }
  puVar7 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar48 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar26 = lVar24 + lVar39 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar48;
  if (uVar42 <= uVar46) goto LAB_036afbe8;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar26 = lVar24 + lVar39 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar48;
  *(undefined1 *)(lVar27 + 0x194) = 0;
LAB_036adf28:
  if (iVar12 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar29)();
  }
  else if (iVar12 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar39 * 0x178;
  uVar20 = *(undefined8 *)(lVar27 + 0x11c);
  *(undefined8 *)(lVar27 + 0x11c) =
       CONCAT44(fVar44 + (float)((ulong)uVar20 >> 0x20),fVar57 + (float)uVar20);
  *(float *)(lVar27 + 0x124) = fVar60 + *(float *)(lVar27 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar39 * 0x178;
  *(ulong *)(lVar27 + 0x110) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0x110) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar27 + 0x110));
  *(float *)(lVar27 + 0x118) = fVar60 + *(float *)(lVar27 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar39 * 0x178;
  *(ulong *)(lVar27 + 0x128) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar27 + 0x128) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar27 + 0x128));
  *(float *)(lVar27 + 0x130) = fVar60 + *(float *)(lVar27 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar39 * 0x178;
  *(float *)(lVar27 + 0x134) = fVar57 + *(float *)(lVar27 + 0x134);
  *(ulong *)(lVar27 + 0x138) =
       CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar27 + 0x138) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar27 + 0x138));
  lVar27 = *in_stack_00000190;
  if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x38), lVar26 == 0)) goto LAB_036afadc;
  uVar42 = *(uint *)(lVar26 + 0x18);
  if (uVar42 <= uVar46) goto LAB_036afbe8;
  lVar34 = lVar26 + lVar39 * 0x178;
  uVar19 = CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar45 = fVar44 + *(float *)(lVar34 + 0x150);
  uVar51 = (ulong)(uint)fVar45;
  uVar53 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar45;
  *(ulong *)(lVar34 + 0x140) = uVar19;
  *(ulong *)(lVar34 + 0x148) = uVar53;
  if (uVar30 == uVar52) {
    uVar52 = *unaff_x20 - 1;
    if (uVar46 == uVar52) goto LAB_036ae17c;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar34 = (long)(int)uVar52;
    lVar35 = lVar27 + lVar34 * 0x5c;
    uVar53 = (ulong)(uint)*(float *)(lVar35 + 0x58);
    fVar45 = fVar44 + *(float *)(lVar35 + 0x54);
    uVar19 = (ulong)(uint)fVar45;
    fVar59 = fVar57 + *(float *)(lVar35 + 0x58);
    uVar51 = (ulong)(uint)fVar59;
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar44 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar45;
    *(float *)(lVar35 + 0x58) = fVar59;
    if (uVar42 <= *(uint *)(lVar35 + 0x34)) goto LAB_036afbe8;
    uVar48 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar27 = lVar27 + lVar34 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar45;
    *(undefined4 *)(lVar27 + 0x6c) = uVar48;
    lVar27 = *in_stack_00000190;
    if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x50), lVar26 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_036afadc;
    uVar52 = *(uint *)(lVar26 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar26 = lVar26 + lVar34 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar52 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar52 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar46 == uVar52) {
      lVar27 = *in_stack_00000190;
      if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x50), lVar26 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
      lVar34 = lVar26 + lVar37 * 0x5c;
      uVar53 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar19 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar45 = fVar44 + *(float *)(lVar34 + 0x54);
      fVar57 = fVar57 + *(float *)(lVar34 + 0x58);
      uVar51 = (ulong)(uint)fVar57;
      *(ulong *)(lVar34 + 0x4c) = uVar19;
      *(float *)(lVar34 + 0x54) = fVar45;
      *(float *)(lVar34 + 0x58) = fVar57;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_036afbe8;
      uVar48 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar45;
      *(undefined4 *)(lVar26 + 0x6c) = uVar48;
      lVar27 = *in_stack_00000190;
      if ((lVar27 == 0) || (lVar26 = *(long *)(lVar27 + 0x50), lVar26 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      uVar52 = *(uint *)(lVar26 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_036afbe8;
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar52 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar18 = FUN_02fddb80(uVar36,0);
  if (((((uVar18 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar6) {
      if (((uVar15 != 1) && ((int)uVar46 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar46 < (int)*unaff_x20 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar15 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar24 + lVar41 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fddb80(uVar4,0);
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar24 + lVar41 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_02fddb80(uVar4,0);
          if ((uVar18 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar15 != 1) {
LAB_036aeea4:
        bVar6 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fddab4(uVar36,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdb080(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar18 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar46 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fddb80(uVar36,0);
      iVar12 = (int)fStack0000000000000138;
      if ((uVar18 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar12 = uVar15 - 2;
    }
    lVar27 = *in_stack_00000190;
    if (lVar27 == 0) goto LAB_036afadc;
    lVar26 = *(long *)(lVar27 + 0x40);
    if (lVar26 == 0) goto LAB_036afadc;
    uVar52 = *(uint *)(lVar27 + 0x24);
    iVar13 = *(int *)(lVar26 + 0x18);
    if (iVar13 < (int)(uVar52 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar27 + 0x40),iVar13 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar27 = *in_stack_00000190;
      if (lVar27 == 0) goto LAB_036afadc;
    }
    lVar27 = *(long *)(lVar27 + 0x40);
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar27 = lVar27 + (long)(int)uVar52 * 0x18;
    *(long **)(lVar27 + 0x20) = unaff_x19;
    *(float *)(lVar27 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar27 + 0x2c) = iVar12;
    *(int *)(lVar27 + 0x30) = (iVar12 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar27 = unaff_x19[0x6d];
    if (lVar27 == 0) goto LAB_036afadc;
    lVar26 = *(long *)(lVar27 + 0x50);
    *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
    lVar26 = lVar26 + lVar37 * 0x5c;
    bVar6 = false;
    in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000170._4_4_ = (float)uVar46;
    }
    if (uVar46 == *unaff_x20 - 1) {
      lVar27 = *in_stack_00000190;
      if (lVar27 == 0) goto LAB_036afadc;
      lVar26 = *(long *)(lVar27 + 0x40);
      if (lVar26 == 0) goto LAB_036afadc;
      uVar52 = *(uint *)(lVar27 + 0x24);
      iVar12 = *(int *)(lVar26 + 0x18);
      if (iVar12 < (int)(uVar52 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar27 + 0x40),iVar12 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar27 = *in_stack_00000190;
        if (lVar27 == 0) goto LAB_036afadc;
      }
      lVar27 = *(long *)(lVar27 + 0x40);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar52) goto LAB_036afbe8;
      lVar27 = lVar27 + (long)(int)uVar52 * 0x18;
      *(long **)(lVar27 + 0x20) = unaff_x19;
      *(float *)(lVar27 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar27 + 0x2c) = uVar46;
      *(uint *)(lVar27 + 0x30) = uVar15 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar27 = unaff_x19[0x6d];
      if (lVar27 == 0) goto LAB_036afadc;
      lVar26 = *(long *)(lVar27 + 0x50);
      *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
      lVar26 = lVar26 + lVar37 * 0x5c;
      in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar6 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  uVar52 = *(uint *)(lVar27 + 0x18);
  if (uVar52 <= uVar46) goto LAB_036afbe8;
  if ((*(byte *)(lVar27 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_036ae3d8:
      if (uVar52 <= uVar15 - 2) goto LAB_036afbe8;
      lVar37 = *unaff_x19;
      uVar52 = *(uint *)(lVar27 + lVar41 + -0x330);
      uVar48 = *(undefined4 *)(lVar27 + lVar41 + -0x2f8);
LAB_036ae924:
      pcVar29 = *(code **)(lVar37 + 0x908);
LAB_036ae92c:
      uVar53 = (ulong)uVar52;
      uVar19 = (ulong)(uint)_bStack0000000000000078;
      uVar51 = (ulong)_bStack000000000000007c;
      (*pcVar29)(fStack0000000000000080,uVar19,uVar51,uVar53,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar48);
      puVar7 = PTR_DAT_03d9c920;
      lVar27 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar27 = *(long *)puVar7;
      }
LAB_036ae980:
      bVar10 = false;
      fVar50 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar10 = false;
    }
  }
  else {
    lVar27 = lVar27 + lVar39 * 0x178;
    iVar12 = *(int *)(lVar27 + 0x68);
    *(int *)(lVar27 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar46) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar12 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_02fdb080(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar18 & 1) == 0)) {
      lVar27 = *in_stack_00000190;
      if ((lVar27 == 0) || (lVar37 = *(long *)(lVar27 + 0x38), lVar37 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar46) goto LAB_036afbe8;
      fVar45 = *(float *)(lVar37 + lVar39 * 0x178 + 0x160);
      if (fVar50 <= fVar45) {
        fVar50 = fVar45;
      }
      if (fStack0000000000000110 <= ABS(fVar58)) {
        fStack0000000000000110 = ABS(fVar58);
      }
      if (iVar12 != iStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar27 = *in_stack_00000190;
          if (lVar27 == 0) goto LAB_036afadc;
          lVar37 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar37 + 0x15a8);
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar59 = *(float *)(lVar27 + lVar39 * 0x178 + 0x14c);
      fVar45 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar59 = fVar59 + fVar50 * fVar45;
      if (fVar59 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar59;
      }
      uVar19 = (ulong)(uint)fStack0000000000000114;
      iStack0000000000000074 = iVar12;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar46)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar46 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar36,0);
        if ((uVar18 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar39 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar27 + 0x160);
      fStack0000000000000080 = *(float *)(lVar27 + 0x11c);
      uVar51 = (ulong)(uint)fStack0000000000000080;
      bVar10 = fVar50 != 0.0;
      fVar45 = in_stack_00000090._4_4_;
      if (bVar10) {
        fVar45 = fVar50;
      }
      fVar50 = fVar45;
      uVar62 = *(undefined4 *)(lVar27 + 0x168);
      _bStack000000000000007c = 0;
      fVar45 = fVar58;
      if (bVar10) {
        fVar45 = fStack0000000000000110;
      }
      uVar19 = (ulong)(uint)fVar45;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        if (uVar46 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar39 * 0x178;
          lVar37 = *unaff_x19;
          uVar52 = *(uint *)(lVar27 + 0x128);
          uVar48 = *(undefined4 *)(lVar27 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar46 == uVar32) || ((int)uVar5 <= (int)uVar46)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar36,0);
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        lVar37 = lVar39;
        uVar52 = uVar46;
        if (uVar36 == 0x200b || (uVar18 & 1) != 0) {
          lVar37 = lVar17;
          uVar52 = uVar5;
        }
        if (uVar52 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar37 * 0x178;
          uVar52 = *(uint *)(lVar27 + 0x128);
          uVar48 = *(undefined4 *)(lVar27 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        uVar52 = *(uint *)(lVar27 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar46 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar15) goto LAB_036afbe8;
      uVar18 = FUN_036c0e18(uVar62,*(undefined4 *)(lVar27 + lVar41),0);
      if ((uVar18 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0)) {
          if (uVar46 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar39 * 0x178;
            uVar53 = (ulong)*(uint *)(lVar27 + 0x128);
            uVar51 = (ulong)_bStack000000000000007c;
            uVar19 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar19,uVar51,uVar53,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar27 + 0x160));
            puVar7 = PTR_DAT_03d9c920;
            lVar27 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar27 = *(long *)puVar7;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar10 = true;
  }
LAB_036ae99c:
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
  if (lVar33 == 0) goto LAB_036afadc;
  uVar52 = *(uint *)(lVar27 + lVar39 * 0x178 + 400);
  fVar45 = (float)FUN_0396ad04(lVar33 + 0x50,0);
  if ((uVar52 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar15 - 2) goto LAB_036afbe8;
      uVar52 = *(uint *)(lVar27 + lVar41 + -0x330);
      fVar44 = *(float *)(lVar27 + lVar41 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar53 = (ulong)uVar52;
      uVar19 = (ulong)(uint)fStack00000000000000a4;
      uVar51 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar29)(fStack00000000000000a8,uVar19,uVar51,uVar53,
                 fStack00000000000000b0 * fVar45 + fVar44,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar27 = *in_stack_00000190;
    if ((lVar27 == 0) || (lVar37 = *(long *)(lVar27 + 0x38), lVar37 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar37 + 0x18) <= uVar46) goto LAB_036afbe8;
    *(int *)(lVar37 + lVar39 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar46) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar46)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar46 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar36,0);
        if ((uVar18 & 1) != 0) goto LAB_036aeb20;
        lVar27 = *in_stack_00000190;
        if (lVar27 == 0) goto LAB_036afadc;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar39 * 0x178;
      fStack000000000000004c = *(float *)(lVar27 + 0x60);
      fStack0000000000000040 = *(float *)(lVar27 + 0x14c);
      uVar19 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar27 + 0x11c);
      uVar51 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar27 + 0x160);
      fStack00000000000000a4 = fVar45 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar52 = *unaff_x20;
    if (uVar52 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        if (uVar46 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar39 * 0x178;
          lVar17 = *unaff_x19;
          uVar52 = *(uint *)(lVar27 + 0x128);
          fVar44 = *(float *)(lVar27 + 0x14c);
LAB_036aec8c:
          pcVar29 = *(code **)(lVar17 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar46 == uVar32) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar36,0);
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        uVar52 = *(uint *)(lVar27 + 0x18);
        if (uVar36 == 0x200b || (uVar18 & 1) != 0) {
          if (uVar52 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar17 = lVar39;
          if (uVar52 <= uVar46) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar27 = lVar27 + lVar17 * 0x178;
        fVar44 = *(float *)(lVar27 + 0x14c);
        uVar52 = *(uint *)(lVar27 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar46 < (int)uVar52) {
      lVar27 = *in_stack_00000190;
      if ((lVar27 != 0) && (lVar37 = *(long *)(lVar27 + 0x38), lVar37 != 0)) {
        if (uVar15 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lVar41 + -0x108) == fStack000000000000004c) {
            fVar59 = *(float *)(lVar37 + lVar41 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar19 = (ulong)(uint)fStack0000000000000040;
            uVar18 = FUN_036c122c(fVar44 + fVar59,uVar19,0);
            if ((uVar18 & 1) != 0) {
              uVar52 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar27 = *in_stack_00000190;
            if (lVar27 == 0) goto LAB_036afadc;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar52 = *(uint *)(lVar27 + 0x18);
            if ((int)uVar46 <= (int)uVar5) goto LAB_036aef20;
            if (uVar5 < uVar52) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar46 < (int)uVar52) {
      iVar12 = FUN_03922ce0(lVar33,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar15) goto LAB_036afbe8;
      lVar27 = *(long *)(lVar24 + lVar41 + -0x130);
      if (lVar27 == 0) goto LAB_036afadc;
      iVar13 = FUN_03922ce0(lVar27,0);
      if (iVar12 != iVar13) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        if (uVar15 - 2 < *(uint *)(lVar27 + 0x18)) {
          lVar17 = *unaff_x19;
          uVar52 = *(uint *)(lVar27 + lVar41 + -0x330);
          fVar44 = *(float *)(lVar27 + lVar41 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  uVar52 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar52 <= uVar46) goto LAB_036afbe8;
  if ((*(byte *)(lVar27 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar51 = (ulong)in_stack_000000c0._4_4_;
      uVar19 = (ulong)(uint)fStack00000000000000ec;
      uVar53 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar19,uVar51,uVar53,fStack00000000000000d8,uVar51);
    }
LAB_036aefe8:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar46) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar27 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar46)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar46 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar36,0);
        if ((uVar18 & 1) != 0) goto LAB_036aefe8;
      }
      puVar7 = PTR_DAT_03d9c920;
      lVar17 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar17 = *(long *)puVar7;
      }
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      uVar52 = (uint)*(undefined8 *)(lVar27 + 0x18);
      if (uVar52 <= uVar46) goto LAB_036afbe8;
      lVar17 = *(long *)(lVar17 + 0xb8);
      lVar33 = lVar27 + lVar39 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar17 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar17 + 0x159c);
      in_stack_00001080 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar17 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar17 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar52 <= uVar46) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar39 * 0x178;
    fVar45 = *(float *)(lVar27 + 0x128);
    fVar56 = *(float *)(lVar27 + 0x188);
    uVar16 = *(undefined8 *)(lVar27 + 0x17c);
    fVar55 = *(float *)(lVar27 + 0x184);
    uVar20 = *(undefined8 *)(lVar27 + 0x184);
    fVar60 = *(float *)(lVar27 + 0x18c);
    fVar44 = *(float *)(lVar27 + 0x11c);
    fVar59 = *(float *)(lVar27 + 0x148);
    fVar54 = *(float *)(lVar27 + 0x150);
    in_stack_00000198 = uVar16;
    fStack00000000000001a0 = fVar55;
    fStack00000000000001a4 = fVar56;
    in_stack_000001a8 = fVar60;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar18 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar27 = *(long *)PTR_DAT_03d9c888;
    if ((uVar18 & 1) == 0) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar27);
      }
      fVar45 = fVar45 + (float)in_stack_00001078;
      uVar51 = (ulong)(uint)fVar45;
      fVar44 = fVar44 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar59 = fVar59 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar53 = (ulong)(uint)fVar59;
      if (fVar44 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar44;
      }
      if (fVar54 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar54 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar45) {
        fStack00000000000000d4 = fVar45;
      }
      uVar19 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar59) {
        fStack00000000000000d8 = fVar59;
      }
    }
    else {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar27);
      }
      fVar44 = (fVar44 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar53 = (ulong)(uint)fVar44;
      if (fVar54 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar54;
      }
      uVar19 = (ulong)(uint)fStack00000000000000ec;
      uVar51 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar59) {
        fStack00000000000000d8 = fVar59;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar19,uVar51,uVar53,fStack00000000000000d8,uVar51);
      fStack00000000000000ec = fVar54 - fVar60;
      fStack00000000000000d4 = fVar45 + fVar55;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar59 + fVar56;
      fStack00000000000000e8 = fVar44;
      in_stack_00001070 = uVar16;
      in_stack_00001078 = uVar20;
      in_stack_00001080 = fVar60;
    }
    if (((*unaff_x20 == 1) || (uVar46 == uVar32)) || (((int)uVar5 <= (int)uVar46 || (!bVar1)))) {
      uVar51 = (ulong)in_stack_000000c0._4_4_;
      uVar19 = (ulong)(uint)fStack00000000000000ec;
      uVar53 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar19,uVar51,uVar53,fStack00000000000000d8,uVar51);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar46 = *unaff_x20;
  lVar41 = lVar41 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar46 <= (int)uVar15;
  uVar15 = uVar15 + 1;
  uVar52 = uVar30;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar24 = *in_stack_00000190;
  if (lVar24 != 0) {
    iVar14 = uVar30 + 1;
    plVar40 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar24 + 0x18) = uVar46;
    lVar41 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar14;
    if ((int)uVar46 < 1 || in_stack_000000e0._4_4_ == 0.0) {
      in_stack_000000e0._4_4_ = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar41;
    *(float *)(lVar24 + 0x24) = in_stack_000000e0._4_4_;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar18 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar18 & 1) == 0)) {
LAB_036acd60:
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      return;
    }
    lVar24 = unaff_x19[0xdf];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar24 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar14 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_036afadc;
      uVar46 = FUN_03afacb8(lVar24,0);
      FUN_03afacf4(lVar24,uVar46 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x60), lVar24 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar20 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar46 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar24 = *in_stack_00000190;
                              if (lVar24 != 0) {
                                lVar27 = 0;
                                lVar41 = 0;
                                do {
                                  uVar18 = lVar41 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar18)
                                  goto LAB_036acd60;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar40 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  FUN_036fa544(lVar24 + lVar27 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  uVar16 = *(undefined8 *)(lVar24 + lVar41 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar21 = FUN_03922f24(uVar16,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar24 = *(long *)(*in_stack_00000190 + 0x60), lVar24 == 0
                                         )) break;
                                      if (*(int *)(*plVar40 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                      FUN_036fa678(lVar24 + lVar27 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_0390262c(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_03902830(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_039028dc(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_03902a3c(lVar24,*(undefined8 *)(lVar17 + lVar27 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_03702ba4(lVar24,0), lVar24 == 0)) break;
                                    FUN_03904ddc(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_039add2c(lVar24,0);
                                    lVar17 = unaff_x19[0xe1];
                                    if (lVar17 == 0) break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar17 = *(long *)(lVar17 + lVar41 * 8 + 0x28);
                                    if ((lVar17 == 0) ||
                                       (uVar16 = FUN_03702ba4(lVar17,0), lVar24 == 0)) break;
                                    FUN_03af8c9c(lVar24,uVar16,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_039add2c(lVar24,0), lVar24 == 0)) break;
                                    FUN_03af8894(uVar20,uVar19,uVar51,uVar53,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar41 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_039add2c(lVar24,0), lVar24 == 0)) break;
                                    FUN_03af87d0(lVar24,uVar46 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    plVar38 = *(long **)(lVar24 + lVar41 * 8 + 0x28);
                                    uVar15 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar38 == (long *)0x0) break;
                                    (**(code **)(*plVar38 + 0x2c8))
                                              (plVar38,uVar15 & 1,*(undefined8 *)(*plVar38 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *in_stack_00000190;
                                  lVar41 = lVar41 + 1;
                                  lVar27 = lVar27 + 0x50;
                                } while (lVar24 != 0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036afadc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


