/*
FUNCTION_NAME: Unity.VisualScripting.SubtractionHandler.<>c$$<.ctor>b__0_98
ENTRY_POINT: 036a9f10
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


void Unity_VisualScripting_SubtractionHandler_<>c__<_ctor>b__0_98(float param_1)

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
  undefined8 uVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  float *pfVar26;
  code *pcVar27;
  float *pfVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar35;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar36;
  long lVar37;
  long *plVar38;
  uint unaff_w26;
  long lVar39;
  long *unaff_x28;
  uint uVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  ulong uVar48;
  ulong uVar49;
  float fVar50;
  uint uVar51;
  ulong uVar52;
  float fVar53;
  float unaff_s8;
  float fVar54;
  uint uVar55;
  ulong unaff_d9;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float unaff_s11;
  float fVar60;
  float unaff_s13;
  float fVar61;
  undefined4 uVar62;
  float fVar63;
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
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000124;
  undefined8 in_stack_00000128;
  float in_stack_00000130;
  float fStack0000000000000138;
  float fStack000000000000013c;
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
  
code_r0x036a9f10:
  *(float *)(unaff_x19 + 200) = param_1 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
  fVar53 = unaff_s13;
  uVar19 = in_stack_00001088;
LAB_036a9f24:
  fVar56 = *(float *)(unaff_x19 + 0x56);
  fVar43 = 0.0;
  if (fVar56 != 0.0) {
    fVar43 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar44 = (float)FUN_0396af78(&stack0x00001050,0);
    fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar56 * 0.5 - fVar53 * (fVar43 * 0.5 + fVar44));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar43;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar37 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_0391f968(lVar37,0,0);
    fVar44 = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar37 = *in_stack_00000168;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar37 == 0) goto LAB_036afadc;
      uVar18 = FUN_038ffa04(lVar37,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      fVar44 = 0.0;
      if ((uVar18 & 1) != 0) {
        lVar37 = *in_stack_00000168;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar37 == 0) goto LAB_036afadc;
        fVar56 = (float)FUN_03900954(lVar37,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar57 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar44 = (float)FUN_03900954(*in_stack_00000168,
                                     *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        fVar44 = fVar44 * fVar56 * fVar57 * 0.25;
        if (fVar56 < in_stack_00000170._4_4_ + fVar44) {
          in_stack_00000170._4_4_ = fVar56 - fVar44;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fStack00000000000000e4 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar37 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_0391f968(lVar37,0,0);
    fStack00000000000000e4 = 0.0;
    if ((uVar18 & 1) != 0) {
      lVar37 = *in_stack_00000168;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar37 == 0) goto LAB_036afadc;
      uVar18 = FUN_038ffa04(lVar37,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      if ((uVar18 & 1) != 0) {
        lVar37 = *in_stack_00000168;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar37 == 0) goto LAB_036afadc;
        uVar18 = FUN_038ffa04(lVar37,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
        if ((uVar18 & 1) != 0) {
          lVar37 = *in_stack_00000168;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar37 != 0) {
            fVar56 = (float)FUN_03900954(lVar37,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54)
                                         ,0);
            if ((*in_stack_00000178 != 0) && (*in_stack_00000168 != 0)) {
              fVar57 = *(float *)(*in_stack_00000178 + 0x1a8);
              fVar44 = (float)FUN_03900954(*in_stack_00000168,
                                           *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
              fVar44 = fVar44 * fVar56 * fVar57 * 0.25;
              if (fVar56 < in_stack_00000170._4_4_ + fVar44) {
                in_stack_00000170._4_4_ = fVar56 - fVar44;
              }
              goto LAB_036aa254;
            }
          }
          goto LAB_036afadc;
        }
      }
    }
    fVar44 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar56 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar53 * (unaff_s8 + ((fVar56 - in_stack_00000170._4_4_) - fVar44));
  fVar56 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar63 = *(float *)((long)unaff_x19 + 0x61c) +
           ((in_stack_00000180 + fVar53 * ((float)unaff_d9 + in_stack_00000170._4_4_ + fVar56)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar56 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar58 = fVar63 - fVar53 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar56);
  fVar56 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar50 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar53 * (fVar44 + fVar44 + in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar56);
  fVar56 = fStack0000000000000124;
  fVar57 = fVar50;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar45 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar56 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar54 = fVar45 * fVar53 * (fVar44 + in_stack_00000170._4_4_ + fVar56);
    fVar56 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar57 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar63 = fVar63 + 0.0;
    fVar58 = fVar58 + 0.0;
    fVar41 = fStack0000000000000124 + fVar54;
    fVar45 = fVar45 * fVar53 * (((fVar56 - fVar57) - in_stack_00000170._4_4_) - fVar44);
    fVar57 = fVar50 + fVar45;
    fVar46 = (fVar54 - fVar45) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar45) - fVar46;
    fVar50 = (fVar50 + fVar54) - fVar46;
    fVar56 = fVar41 - fVar46;
    fVar57 = fVar57 - fVar46;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar45 = 0.0;
    fVar46 = 0.0;
    fVar54 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar41 = fVar58;
    fStack0000000000000114 = fVar63;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar61 = (fVar58 + fVar63) * 0.5;
    fVar59 = (fVar50 + fStack0000000000000124) * 0.5;
    fVar63 = fVar63 - fVar61;
    fStack0000000000000110 = 0.0;
    fVar60 = fVar63;
    fVar56 = (float)FUN_03911ddc(fVar56 - fVar59,_fStack0000000000000080,0);
    fVar56 = fVar59 + fVar56;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar58 = fVar58 - fVar61;
    fVar45 = 0.0;
    fVar41 = fVar58;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar59,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar59 + fStack0000000000000124;
    fVar45 = fVar45 + 0.0;
    fVar54 = 0.0;
    fVar50 = (float)FUN_03911ddc(fVar50 - fVar59,_fStack0000000000000080,0);
    fVar50 = fVar59 + fVar50;
    fVar63 = fVar61 + fVar63;
    fVar54 = fVar54 + 0.0;
    fVar46 = 0.0;
    fVar57 = (float)FUN_03911ddc(fVar57 - fVar59,_fStack0000000000000080,0);
    fVar57 = fVar59 + fVar57;
    fVar58 = fVar61 + fVar58;
    fVar46 = fVar46 + 0.0;
    fVar41 = fVar61 + fVar41;
    fStack0000000000000114 = fVar61 + fVar60;
  }
  if (*unaff_x28 == 0) goto LAB_036afadc;
  lVar37 = *(long *)(*unaff_x28 + 0x38);
  uVar18 = (ulong)(uint)fVar53;
  if (lVar37 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar37 + 0x120) = fVar41;
  *(float *)(lVar37 + 0x124) = fVar45;
  if ((*unaff_x28 == 0) || (lVar37 = *(long *)(*unaff_x28 + 0x38), lVar37 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x110) = fVar56;
  *(float *)(lVar37 + 0x114) = fStack0000000000000114;
  *(float *)(lVar37 + 0x118) = fStack0000000000000110;
  if ((*unaff_x28 == 0) || (lVar37 = *(long *)(*unaff_x28 + 0x38), lVar37 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x128) = fVar50;
  *(float *)(lVar37 + 300) = fVar63;
  *(float *)(lVar37 + 0x130) = fVar54;
  if ((*unaff_x28 == 0) || (lVar37 = *(long *)(*unaff_x28 + 0x38), lVar37 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar37 + 0x134) = fVar57;
  *(float *)(lVar37 + 0x138) = fVar58;
  *(float *)(lVar37 + 0x13c) = fVar46;
  if ((*unaff_x28 == 0) || (lVar37 = *(long *)(*unaff_x28 + 0x38), lVar37 == 0)) goto LAB_036afadc;
  uVar42 = *unaff_x20;
  lVar39 = (long)(int)uVar42;
  if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar37 + lVar39 * unaff_x24;
  *(int *)(lVar25 + 0x140) = (int)unaff_x19[200];
  fVar63 = *(float *)(unaff_x19 + 0x9b);
  uVar48 = (ulong)(uint)fVar63;
  fVar57 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar25 + 0x15c) = (fVar50 - fStack0000000000000124) / (fStack0000000000000114 - fVar41)
  ;
  *(float *)(lVar25 + 0x14c) = (in_stack_00000180 - fVar63) + fVar57;
  in_stack_00000130 = in_stack_00000130 * fVar53;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    in_stack_00000130 = in_stack_00000130 / in_stack_00000150;
    in_stack_00000128._4_4_ = (in_stack_00000128._4_4_ * fVar53) / in_stack_00000150;
  }
  else {
    in_stack_00000128._4_4_ = in_stack_00000128._4_4_ * fVar53;
  }
  uVar15 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar42 == uVar15)) {
    in_stack_00000128._4_4_ = fVar57 + in_stack_00000128._4_4_;
    in_stack_00000130 = fVar57 + in_stack_00000130;
    fVar58 = in_stack_00000128._4_4_;
    fVar50 = in_stack_00000130;
    if (fVar57 != 0.0) {
      fVar50 = (in_stack_00000130 - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      fVar58 = (in_stack_00000128._4_4_ - fVar57) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar50 <= in_stack_00000130) {
        fVar50 = in_stack_00000130;
      }
      if (in_stack_00000128._4_4_ <= fVar58) {
        fVar58 = in_stack_00000128._4_4_;
      }
    }
    lVar37 = lVar37 + lVar39 * unaff_x24;
    fVar57 = fVar50;
    if (fVar50 <= *(float *)(unaff_x19 + 0x99)) {
      fVar57 = *(float *)(unaff_x19 + 0x99);
    }
    fVar45 = fVar58;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar58) {
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
    *(float *)(unaff_x19 + 0x99) = fVar57;
    *(float *)(lVar37 + 0x154) = fVar50;
    *(float *)(lVar37 + 0x158) = fVar58;
    *(float *)(lVar37 + 0x148) = in_stack_00000130 - fVar63;
    *(float *)(unaff_x19 + 0x98) = in_stack_00000130 - fVar63;
    *(float *)(lVar37 + 0x150) = in_stack_00000128._4_4_ - fVar63;
    *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000128._4_4_ - fVar63;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar57;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar50 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      in_stack_00000150 = (fVar53 * fVar50) / in_stack_00000150;
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar57 <= in_stack_00000150) {
        fVar57 = in_stack_00000150;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
    }
    if ((float)uVar48 == 0.0) {
      fVar57 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= in_stack_00000130) {
        fVar57 = in_stack_00000130;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar57;
    }
  }
  else {
    fVar57 = *(float *)(unaff_x19 + 0x99);
    lVar37 = lVar37 + lVar39 * unaff_x24;
    *(float *)(lVar37 + 0x154) = fVar57;
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar57 = fVar57 - fVar63;
    *(float *)(lVar37 + 0x148) = fVar57;
    *(float *)(lVar37 + 0x158) = fVar50;
    *(float *)(unaff_x19 + 0x98) = fVar57;
    fVar50 = fVar50 - fVar63;
    *(float *)(lVar37 + 0x150) = fVar50;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
  }
  lVar37 = *unaff_x28;
  if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0)) goto LAB_036afadc;
  uVar51 = *unaff_x20;
  if (*(uint *)(lVar39 + 0x18) <= uVar51) goto LAB_036afbe8;
  lVar39 = lVar39 + (long)(int)uVar51 * unaff_x24;
  *(undefined1 *)(lVar39 + 0x194) = 0;
  uVar55 = *(uint *)(unaff_x19 + 0x4f);
  iVar14 = (int)unaff_x24;
  uVar40 = in_stack_0000109c;
  if (((in_stack_0000109c == 9) ||
      ((((unaff_w21 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)) &&
       (in_stack_0000109c != 0xad)))) ||
     (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
      (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
    *(undefined1 *)(lVar39 + 0x194) = 1;
    pfVar26 = _fStack00000000000000a8;
    pfVar28 = _fStack00000000000000b0;
    if (unaff_w23 != 0) {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar28 = (float *)(lVar37 + 0x60);
      pfVar26 = (float *)(lVar37 + 100);
    }
    fVar50 = *pfVar28;
    fVar63 = *pfVar26;
    fVar57 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar50) - fVar63;
    bVar9 = true;
    if ((fVar57 <= in_stack_00000108._4_4_) && (bVar9 = false, !NAN(fVar57))) {
      bVar9 = fVar57 == -1.0;
    }
    if (!bVar9) {
      in_stack_00000108._4_4_ = fVar57;
    }
    fVar57 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar57 = (float)FUN_0396af88(&stack0x00001050,0);
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar41 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_0000109c != 0xad) {
      unaff_s11 = fVar53;
    }
    fVar54 = (float)uVar48;
    fVar46 = 0.0;
    if ((0.0 < fVar54) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar51 = *unaff_x20;
    fVar46 = (*(float *)(unaff_x19 + 0x97) - (fVar41 - fVar54)) + fVar46;
    if (fStack00000000000000c8 < fVar46) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar51;
      }
      puVar7 = PTR_DAT_03d9c920;
      in_stack_00001088 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar60 = *(float *)(unaff_x19 + 0x59);
        if (((fVar60 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar54)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar53 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar46) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar53 <= fVar60) {
            fVar53 = fVar60;
          }
          goto LAB_036ad184;
        }
        fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        uVar48 = (ulong)(uint)fVar46;
        if ((fVar46 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar53 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar53 <= DAT_00b55428) {
            fVar53 = DAT_00b55428;
          }
          fVar43 = (fVar54 - fVar53) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar54;
          fVar53 = DAT_00b556b4;
          if (fVar43 != INFINITY) {
            fVar53 = (float)(int)fVar43 / 20.0;
          }
          if (fVar53 <= fVar46) {
            fVar53 = fVar46;
          }
          goto LAB_036acc94;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar37 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar37 = *(long *)puVar7;
        }
        lVar39 = *(long *)(lVar37 + 0xb8);
        if (*(int *)(lVar39 + 0x1580) == 0) {
LAB_036acbbc:
          in_stack_00001088 = DAT_00b92750;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_00001068 = 0xffffffff;
        }
        else {
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar39 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar39 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
          iVar11 = FUN_036ecf20();
LAB_036ab020:
          iVar12 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar12;
          in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
          in_stack_00001068 = iVar11 - 1;
          in_stack_00001088 = CONCAT44(0x2026,iVar12);
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
        if ((uVar51 == 0) || ((int)in_stack_00001068 < 0)) {
          *unaff_x20 = 0;
          in_stack_00001068 = 0xffffffff;
        }
        else {
          fVar43 = *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          if (fStack00000000000000c8 < fVar43 - fVar41) break;
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar48 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar37 = NEON_rev64(uVar48,4);
          unaff_x19[0x99] = lVar37;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          in_stack_00001088 = uVar19;
        }
        goto LAB_036a9250;
      case 6:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar37 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar18 = FUN_0391f968(lVar37,0,0);
        if ((uVar18 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar38 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar38 + 0x558))(plVar38,uVar19,*(undefined8 *)(*plVar38 + 0x560));
          lVar37 = unaff_x19[0x5d];
          if (lVar37 == 0) goto LAB_036afadc;
          *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar38 = (long *)unaff_x19[0x5d];
          if (plVar38 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_036aad90:
      in_stack_00001088 = CONCAT44(3,uVar51);
      goto LAB_036a9250;
    }
switchD_036aaa24_caseD_2:
    puVar7 = PTR_DAT_03d9c920;
    fVar41 = 1.0 - fVar45;
    uVar48 = (ulong)(uint)fVar41;
    fVar58 = ABS(fVar58) + fVar57 * fVar41 * unaff_s11;
    fVar57 = 1.0;
    if ((uVar55 & 0x18) != 0) {
      fVar57 = DAT_00b55374;
    }
    fVar46 = fVar57 * in_stack_00000108._4_4_;
    if (fVar58 <= fVar46) {
LAB_036ab54c:
      if (in_stack_0000109c == 0xad) {
        if ((*in_stack_00000190 != 0) &&
           (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 != 0)) {
          if (*unaff_x20 < *(uint *)(lVar37 + 0x18)) {
            *(undefined1 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
            goto LAB_036ab6c0;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
      if (in_stack_0000109c != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))(fVar46,fVar44);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
        }
        uVar51 = *unaff_x20;
        if ((in_stack_00000068 & 1) != 0) {
          *(uint *)(in_stack_00000088 + 0x1f0) = uVar51;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar51;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] != 0) && (lVar37 = *(long *)(unaff_x19[0x6d] + 0x50), lVar37 != 0)) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            in_stack_00000068 = 0;
            *(float *)(lVar37 + 0x60) = fVar50;
            *(float *)(lVar37 + 100) = fVar63;
            goto LAB_036ab6c0;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
      lVar37 = *in_stack_00000190;
      if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0)) goto LAB_036afadc;
      uVar51 = *unaff_x20;
      if (uVar51 < *(uint *)(lVar39 + 0x18)) {
        *(undefined1 *)(lVar39 + (long)(int)uVar51 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar51;
        lVar39 = *(long *)(lVar37 + 0x50);
        if (lVar39 != 0) {
          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(int *)(lVar39 + 0x2c) = *(int *)(lVar39 + 0x2c) + 1;
            goto LAB_036ab5c8;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
      goto LAB_036afbe8;
    }
    if (((char)unaff_x19[0x5b] == '\0') || (uVar51 == *(uint *)(unaff_x19 + 0x93))) {
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar46 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar45 < fVar46) {
          fVar53 = fVar58 / fVar41;
          if (fVar45 <= 0.0) {
            fVar53 = fVar58;
          }
          fVar45 = fVar45 + (fVar58 - fVar57 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar53;
          goto LAB_036afb6c;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar48 = (ulong)(uint)fVar45;
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        if (fVar45 <= fVar46) goto LAB_036aab40;
LAB_036afae0:
        fVar53 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar53 <= DAT_00b55428) {
          fVar53 = DAT_00b55428;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar45;
        fVar43 = (fVar45 - fVar53) * 20.0 + 0.5;
        fVar53 = DAT_00b556b4;
        if (fVar43 != INFINITY) {
          fVar53 = (float)(int)fVar43 / 20.0;
        }
        if (fVar53 <= fVar46) {
          fVar53 = fVar46;
        }
LAB_036acc94:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar53;
        return;
      }
LAB_036aab40:
      iVar11 = (int)unaff_x19[0x5c];
      if (iVar11 == 1) {
        lVar37 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar37 = *(long *)puVar7;
        }
        lVar39 = *(long *)(lVar37 + 0xb8);
        if (*(int *)(lVar39 + 0x1580) != 0) {
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar39 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar39 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
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
      lVar37 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar18 = FUN_0391f968(lVar37,0,0);
      if ((uVar18 & 1) != 0) {
        plVar38 = (long *)unaff_x19[0x5d];
        uVar19 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar38 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar38 + 0x558))(plVar38,uVar19,*(undefined8 *)(*plVar38 + 0x560));
        lVar37 = unaff_x19[0x5d];
        if (lVar37 == 0) goto LAB_036afadc;
        *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar38 = (long *)unaff_x19[0x5d];
        if (plVar38 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
LAB_036ab13c:
      in_stack_00001088 = CONCAT44(3,*unaff_x20);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
        lVar37 = *in_stack_00000190;
        if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar39 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        fVar41 = 0.0;
        if ((0.0 < fVar45) && (fVar41 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar41 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar41 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar39 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar41 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar37 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar37 == 0) goto LAB_036afadc;
        fVar45 = *(float *)(unaff_x19 + 0x9b);
        fVar41 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
      }
      puVar7 = PTR_DAT_03d9c920;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_036afadc;
      uVar29 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar37 + 0x18) <= uVar29) ||
         (uVar5 = uVar29 - 1, *(uint *)(lVar37 + 0x18) <= uVar5)) goto LAB_036afbe8;
      uVar48 = (ulong)(uint)(fVar41 + *(float *)(unaff_x19 + 0x97));
      fVar41 = (fVar41 + *(float *)(unaff_x19 + 0x97) + fVar45) -
               *(float *)(lVar37 + (long)(int)uVar29 * unaff_x24 + 0x158);
      if (((bStack000000000000007c & 1) != 0 ||
           *(short *)(lVar37 + (long)(int)uVar5 * (long)iVar14 + 0x20) != 0xad) ||
         ((fStack00000000000000c8 <= fVar41 && ((int)unaff_x19[0x5c] != 0)))) {
        if (*(short *)(lVar37 + (long)(int)uVar29 * unaff_x24 + 0x20) == 0xad) {
          bStack000000000000007c = 1;
          in_stack_00001088 = uVar19;
        }
        else {
          if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
            fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
            fVar46 = *(float *)(unaff_x19 + 0x5a) / 100.0;
            if ((fVar46 <= fVar45) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
              fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar48 = (ulong)(uint)fVar45;
              fVar46 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar46 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_036afae0;
              goto LAB_036ab340;
            }
LAB_036afb7c:
            fVar53 = fVar58;
            if (0.0 < fVar45) {
              fVar53 = fVar58 / (1.0 - fVar45);
            }
            fVar45 = fVar45 + (fVar58 - fVar57 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar53;
LAB_036afb6c:
            if (fVar46 <= fVar45) {
              fVar45 = fVar46;
            }
            *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
            return;
          }
LAB_036ab340:
          lVar37 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar37 = *(long *)puVar7;
          }
          iVar11 = *(int *)(*(long *)(lVar37 + 0xb8) + 0xe78);
          if (((iVar11 != iStack0000000000000034) && (iVar11 != -1)) &&
             (((bStack0000000000000078 ^ 1) & 1) == 0)) {
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            in_stack_00001068 = FUN_036ecf20();
            if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
            goto LAB_036afadc;
            uVar29 = *unaff_x20 - 1;
            if (*(uint *)(lVar37 + 0x18) <= uVar29) goto LAB_036afbe8;
            iStack0000000000000034 = iVar11;
            if (*(short *)(lVar37 + (long)(int)uVar29 * (long)iVar14 + 0x20) == 0xad) {
              bStack000000000000007c = 0;
              *unaff_x20 = uVar29;
              in_stack_00001068 = in_stack_00001068 - 1;
              in_stack_00001088 = CONCAT44(0x2d,uVar29);
              goto LAB_036a9250;
            }
          }
          if (fVar41 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
            FUN_036ed998(in_stack_00000058._4_4_,uVar18,in_stack_000000f0,
                         *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
                         fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
            uVar48 = uVar18;
          }
          else {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
            }
            fVar46 = fStack00000000000000c8;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar45 = *(float *)(unaff_x19 + 0x59);
              if ((fVar45 < *(float *)((long)unaff_x19 + 700)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar53 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar41) / (float)((int)unaff_x19[0x95] + 1)) /
                         in_stack_00000058._4_4_;
                if (fVar53 <= fVar45) {
                  fVar53 = fVar45;
                }
LAB_036ad184:
                *(float *)((long)unaff_x19 + 700) = fVar53;
                return;
              }
              fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
              fVar46 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if ((fVar45 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_036afb7c;
              fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar48 = (ulong)(uint)fVar45;
              fVar46 = *(float *)(unaff_x19 + 0x4a);
              if ((fVar46 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
              goto LAB_036afae0;
            }
            switch((int)unaff_x19[0x5c]) {
            case 0:
            case 2:
            case 4:
              goto switchD_036ab4e4_caseD_0;
            case 1:
              lVar37 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar37 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar37 = *(long *)PTR_DAT_03d9c920;
              }
              lVar39 = *(long *)(lVar37 + 0xb8);
              if (*(int *)(lVar39 + 0x1580) == 0) {
                bStack000000000000007c = 0;
                goto LAB_036acbbc;
              }
              if (*(int *)(lVar37 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar39 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
              }
              FUN_0217900c(&stack0x000010a0,lVar39 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
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
              FUN_036ed998(in_stack_00000058._4_4_,uVar18,in_stack_000000f0,
                           *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
                           fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined4 *)(unaff_x19 + 0x9b) = 0;
              *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
              uVar48 = uVar18;
              break;
            case 6:
              lVar37 = unaff_x19[0x5d];
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar18 = FUN_0391f968(lVar37,0,0);
              if ((uVar18 & 1) != 0) {
                plVar38 = (long *)unaff_x19[0x5d];
                uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar38 == (long *)0x0) goto LAB_036afadc;
                (**(code **)(*plVar38 + 0x558))(plVar38,uVar19,*(undefined8 *)(*plVar38 + 0x560));
                lVar37 = unaff_x19[0x5d];
                if (lVar37 == 0) goto LAB_036afadc;
                *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
                FUN_036dfca8(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar38 = (long *)unaff_x19[0x5d];
                if (plVar38 == (long *)0x0) goto LAB_036afadc;
                (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
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
          in_stack_00001088 = uVar19;
        }
      }
      else {
        bStack000000000000007c = 0;
        in_stack_00001088 = CONCAT44(0x2d,uVar5);
        *unaff_x20 = uVar5;
        in_stack_00001068 = in_stack_00001068 - 1;
      }
    }
  }
  else {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar57 = (float)uVar48;
      fVar44 = 0.0;
      if ((0.0 < fVar57) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar48 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar57)) + fVar44)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar51;
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar37 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar18 = FUN_0391f968(lVar37,0,0);
        if ((uVar18 & 1) != 0) {
          plVar38 = (long *)unaff_x19[0x5d];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar38 != (long *)0x0) {
            (**(code **)(*plVar38 + 0x558))(plVar38,uVar19,*(undefined8 *)(*plVar38 + 0x560));
            lVar37 = unaff_x19[0x5d];
            if (lVar37 != 0) {
              *(int *)(lVar37 + 0x400) = (int)unaff_x19[0x80];
              FUN_036dfca8(lVar37,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar38 = (long *)unaff_x19[0x5d];
              if (plVar38 != (long *)0x0) {
                (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
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
        lVar37 = *in_stack_00000190;
        if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x50), lVar39 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar39 + 0x2c) = *(int *)(lVar39 + 0x2c) + 1;
        *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
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
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x50), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar37 + 0x20) = *(int *)(lVar37 + 0x20) + 1;
    }
LAB_036ab6c0:
    if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar44 = *(float *)(unaff_x19 + 0x3d);
      iVar11 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar50 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar37 = unaff_x19[0xca];
      fVar57 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar57 = 1.0;
      }
      if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto LAB_036afadc;
      fVar58 = *(float *)((long)unaff_x19 + 0x404);
      fVar41 = *(float *)(lVar37 + 0x2c);
      fVar63 = (float)FUN_0396b17c(*(long *)(lVar37 + 0x20),0);
      fVar45 = *_fStack00000000000000b0;
      fVar63 = fVar58 * (fVar44 / (float)iVar11) * fVar50 * fVar57 * fVar41 * fVar63;
      fVar44 = *_fStack00000000000000a8;
      if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93]))
      {
        if ((*in_stack_00000190 == 0) ||
           (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0)) goto LAB_036afadc;
        uVar51 = *(int *)((long)unaff_x19 + 0x494) - 1;
        if (*(uint *)(lVar37 + 0x18) <= uVar51) goto LAB_036afbe8;
        if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
        fVar57 = *(float *)(lVar37 + (long)(int)uVar51 * (long)iVar14 + 0x60);
        iVar11 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
        if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
        fVar58 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
        lVar37 = unaff_x19[0xca];
        fVar50 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar50 = 1.0;
        }
        if ((lVar37 == 0) || (*(long *)(lVar37 + 0x20) == 0)) goto LAB_036afadc;
        fVar41 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = *(float *)(lVar37 + 0x2c);
        fVar63 = (float)FUN_0396b17c(*(long *)(lVar37 + 0x20),0);
        if ((*in_stack_00000190 == 0) ||
           (lVar37 = *(long *)(*in_stack_00000190 + 0x50), lVar37 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        fVar45 = *(float *)(lVar37 + 0x60);
        fVar44 = *(float *)(lVar37 + 100);
        fVar63 = fVar41 * (fVar57 / (float)iVar11) * fVar58 * fVar50 * fVar46 * fVar63;
      }
      fVar58 = *(float *)(unaff_x19 + 0x9b);
      fVar57 = 0.0;
      fVar50 = 0.0;
      if ((0.0 < fVar58) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar50 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      fVar46 = *(float *)(unaff_x19 + 0x97);
      fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
      fVar41 = *(float *)(unaff_x19 + 200);
      if ((char)unaff_x19[0x1e] == '\0') {
        if ((unaff_x19[0xca] == 0) || (lVar37 = *(long *)(unaff_x19[0xca] + 0x20), lVar37 == 0))
        goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,lVar37,0);
        fVar57 = (float)FUN_0396af88(&stack0x00000fc0,0);
      }
      puVar7 = PTR_DAT_03d9c920;
      fVar60 = *(float *)(unaff_x19 + 0x6c);
      fVar44 = (fStack00000000000000a4 - fVar45) - fVar44;
      bVar9 = true;
      if ((fVar60 <= fVar44) && (bVar9 = false, !NAN(fVar60))) {
        bVar9 = fVar60 == -1.0;
      }
      if (!bVar9) {
        fVar44 = fVar60;
      }
      fVar45 = 1.0;
      if ((uVar55 & 0x18) != 0) {
        fVar45 = DAT_00b55374;
      }
      if (((fVar46 - (fVar54 - fVar58)) + fVar50 < fStack00000000000000c8) &&
         (ABS(fVar41) + fVar63 * fVar57 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
          fVar45 * fVar44)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        lVar37 = *(long *)(*(long *)puVar7 + 0xb8);
        uVar16 = *(undefined8 *)PTR_DAT_03d9c8c8;
        memcpy(&stack0x000010a0,(void *)(lVar37 + 0x788),0x378);
        FUN_02178ef4(lVar37 + 0x11f0,&stack0x000010a0,uVar16);
      }
    }
    lVar37 = *in_stack_00000190;
    if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar39 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    uVar51 = *(uint *)(unaff_x19 + 0x95);
    lVar39 = lVar39 + (long)(int)*unaff_x20 * unaff_x24;
    *(uint *)(lVar39 + 100) = uVar51;
    *(int *)(lVar39 + 0x68) = (int)unaff_x19[0x96];
    if (((unaff_w23 & 1) == 0) &&
       ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_036afadc;
LAB_036aba84:
      if (*(uint *)(lVar37 + 0x18) <= uVar51) goto LAB_036afbe8;
      *(int *)(lVar37 + (long)(int)uVar51 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    else {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar51) goto LAB_036afbe8;
      if (*(int *)(lVar37 + (long)(int)uVar51 * 0x5c + 0x24) == 1) goto LAB_036aba84;
    }
    if (in_stack_0000109c == 9) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar43 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar57 = *(float *)(unaff_x19 + 200);
      fVar44 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
      fVar44 = fVar53 * fVar43 * fVar44;
      fVar43 = fVar44 * (float)(int)(fVar57 / fVar44);
      uVar48 = (ulong)(uint)fVar43;
      if (fVar43 <= fVar57) {
        fVar43 = fVar57 + fVar44;
      }
LAB_036abca4:
      *(float *)(unaff_x19 + 200) = fVar43;
    }
    else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
      if ((char)unaff_x19[0x1e] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar57 = 1.0;
        }
        else {
          fVar57 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
        }
        fVar43 = *(float *)(unaff_x19 + 200);
        fVar50 = (float)FUN_0396af88(&stack0x00001050,0);
        if (unaff_x19[0x20] != 0) {
          fVar44 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
          fVar43 = fVar43 + fVar44 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                     fVar53 * (fStack0000000000000138 + fVar57 * fVar50) +
                                     in_stack_000000f0 *
                                     (fStack00000000000000e4 +
                                     fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
          *(float *)(unaff_x19 + 200) = fVar43;
          goto joined_r0x036abbe8;
        }
        goto LAB_036afadc;
      }
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (*(float *)((long)unaff_x19 + 0x2ac) +
               fVar53 * fStack0000000000000138 +
               in_stack_000000f0 *
               (fStack00000000000000e4 +
               fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
      uVar48 = (ulong)(uint)fVar43;
      fVar43 = *(float *)(unaff_x19 + 200) - fVar43;
      *(float *)(unaff_x19 + 200) = fVar43;
      if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
        fVar44 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar48 = (ulong)(uint)fVar44;
        fVar43 = fVar43 - fVar44;
        goto LAB_036abca4;
      }
    }
    else {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar44 = *(float *)(unaff_x19 + 200);
      fVar43 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                        (*(float *)((long)unaff_x19 + 0x2ac) +
                        (*(float *)(unaff_x19 + 0x56) - fVar43) +
                        in_stack_000000f0 *
                        (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar43;
joined_r0x036abbe8:
      if ((in_stack_0000109c == 0x200b) || (uVar48 = (ulong)(uint)fVar44, unaff_w21 != 0)) {
        fVar44 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
        uVar48 = (ulong)(uint)fVar44;
        fVar43 = fVar43 + fVar44;
        goto LAB_036abca4;
      }
    }
    lVar37 = *in_stack_00000190;
    if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0)) goto LAB_036afadc;
    uVar51 = *unaff_x20;
    uVar55 = (uint)*(undefined8 *)(lVar39 + 0x18);
    if (uVar55 <= uVar51) goto LAB_036afbe8;
    *(float *)(lVar39 + (long)(int)uVar51 * unaff_x24 + 0x144) = fVar43;
    uVar29 = in_stack_0000109c;
    if ((int)in_stack_0000109c < 0xd) {
      if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
      if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) ||
         ((float)uVar51 == in_stack_00000090._4_4_)) goto LAB_036abd48;
    }
    else {
      if (1 < in_stack_0000109c - 0x2028) {
        if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
        uVar48 = 0;
        *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
        if ((float)uVar51 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
      }
LAB_036abd48:
      if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
        fVar43 = *(float *)(unaff_x19 + 0x99);
        fVar44 = *(float *)(unaff_x19 + 0x9a);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar43 = fVar43 - fVar44;
        if (((fStack0000000000000060 < ABS(fVar43)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
           && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
          FUN_036ed624(fVar43);
          *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar43;
          *(float *)(unaff_x19 + 0x9b) = fVar43 + *(float *)(unaff_x19 + 0x9b);
          puVar7 = PTR_DAT_03d9c920;
          lVar37 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar37 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar37 = *(long *)puVar7;
          }
          lVar39 = *(long *)(lVar37 + 0xb8);
          if (*(int *)(lVar39 + 0x7ac) == (int)unaff_x19[0x95]) {
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar39 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            }
            FUN_0217900c(&stack0x000010a0,lVar39 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
            memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
            puVar7 = PTR_DAT_03d9c920;
            lVar37 = *(long *)PTR_DAT_03d9c920;
            memcpy((void *)(*(long *)(lVar37 + 0xb8) + 0x788),&stack0x000001d0,0x378);
            thunk_FUN_01b4f09c(*(long *)(lVar37 + 0xb8) + 0x818,0);
            lVar37 = *(long *)(*(long *)puVar7 + 0xb8);
            *(float *)(lVar37 + 0x7bc) = fVar43 + *(float *)(lVar37 + 0x7bc);
            *(float *)(lVar37 + 0x800) = fVar43 + *(float *)(lVar37 + 0x800);
            uVar16 = *(undefined8 *)PTR_DAT_03d9c8c8;
            memcpy(&stack0x000010a0,(void *)(lVar37 + 0x788),0x378);
            FUN_02178ef4(lVar37 + 0x11f0,&stack0x000010a0,uVar16);
          }
        }
      }
      fVar57 = *(float *)(unaff_x19 + 0x9b);
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
      fVar44 = *(float *)((long)unaff_x19 + 0x4cc) - fVar57;
      fVar43 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar43 = fVar44;
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
      fVar50 = *(float *)(unaff_x19 + 0x99);
      if (in_stack_00001094 == '\0') {
        in_stack_00001098 = fVar43;
      }
      if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
         (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
          ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
        in_stack_00001094 = '\x01';
      }
      lVar37 = *in_stack_00000190;
      if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x50), lVar39 == 0)) goto LAB_036afadc;
      uVar51 = *(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar39 + 0x18) <= uVar51) goto LAB_036afbe8;
      lVar25 = unaff_x19[0x93];
      lVar17 = lVar39 + (long)(int)uVar51 * 0x5c;
      *(int *)(lVar17 + 0x34) = (int)lVar25;
      uVar55 = *(uint *)(unaff_x19 + 0x93);
      if ((int)lVar25 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
        uVar55 = *(uint *)((long)unaff_x19 + 0x49c);
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar55;
      *(uint *)(lVar17 + 0x38) = uVar55;
      *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
      *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
      iVar11 = *(int *)((long)unaff_x19 + 0x49c);
      if ((int)uVar55 <= *(int *)((long)unaff_x19 + 0x4a4)) {
        iVar11 = *(int *)((long)unaff_x19 + 0x4a4);
      }
      *(int *)((long)unaff_x19 + 0x4a4) = iVar11;
      *(int *)(lVar17 + 0x40) = iVar11;
      *(int *)(lVar17 + 0x24) = (*(int *)(lVar17 + 0x3c) - *(int *)(lVar17 + 0x34)) + 1;
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar55) goto LAB_036afbe8;
      uVar62 = *(undefined4 *)(lVar37 + (long)(int)uVar55 * (long)iVar14 + 0x11c);
      lVar39 = lVar39 + (long)(int)uVar51 * 0x5c;
      *(float *)(lVar39 + 0x70) = fVar44;
      *(undefined4 *)(lVar39 + 0x6c) = uVar62;
      lVar37 = *in_stack_00000190;
      if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x50), lVar39 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
      fVar50 = fVar50 - fVar57;
      uVar48 = (ulong)(uint)fVar50;
      lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(undefined4 *)(lVar39 + 0x74) =
           *(undefined4 *)
            (lVar37 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
      *(float *)(lVar39 + 0x78) = fVar50;
      lVar37 = *in_stack_00000190;
      if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      lVar17 = (long)(int)*(uint *)(unaff_x19 + 0x95);
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar39 = lVar25 + lVar17 * 0x5c;
      *(float *)(lVar39 + 0x44) = *(float *)(lVar39 + 0x74) - fVar53 * in_stack_00000170._4_4_;
      *(float *)(lVar39 + 0x5c) = in_stack_00000108._4_4_;
      if (*(int *)(lVar39 + 0x24) == 1) {
        *(int *)(lVar25 + lVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
      }
      if ((*in_stack_00000178 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0))
      goto LAB_036afadc;
      lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
      uVar55 = (uint)*(undefined8 *)(lVar39 + 0x18);
      if (uVar55 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
      if ((*(char *)(lVar39 + lVar36 * unaff_x24 + 0x194) == '\0') &&
         (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar55 <= *(uint *)(unaff_x19 + 0x94)))
      goto LAB_036afbe8;
      lVar25 = lVar25 + lVar17 * 0x5c;
      fVar57 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (in_stack_000000f0 *
                (fStack00000000000000e4 +
                fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
               *(float *)((long)unaff_x19 + 0x2ac));
      fVar43 = -fVar57;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar43 = fVar57;
      }
      *(float *)(lVar25 + 0x58) = *(float *)(lVar39 + lVar36 * unaff_x24 + 0x144) + fVar43;
      *(float *)(lVar25 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
      *(float *)(lVar25 + 0x54) = fVar44;
      *(float *)(lVar25 + 0x48) = fStack0000000000000064 + (fVar50 - fVar44);
      *(float *)(lVar25 + 0x4c) = fVar50;
      if ((int)in_stack_0000109c < 0x2d) {
        if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
          lVar37 = unaff_x19[0x6d];
          *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
          iVar11 = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x95) = iVar11;
          *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
          if ((lVar37 != 0) && (*(long *)(lVar37 + 0x50) != 0)) {
            if (*(int *)(*(long *)(lVar37 + 0x50) + 0x18) <= iVar11) {
              FUN_036ed7dc();
              lVar37 = unaff_x19[0x6d];
              if (lVar37 == 0) goto LAB_036afadc;
            }
            lVar37 = *(long *)(lVar37 + 0x38);
            if (lVar37 != 0) {
              if (*unaff_x20 < *(uint *)(lVar37 + 0x18)) {
                fVar43 = *(float *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                  if ((in_stack_0000109c == 0x2029) || (fVar44 = 0.0, in_stack_0000109c == 10)) {
                    fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar21 = 0;
                  fVar44 = fVar43 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                           in_stack_00000058._4_4_ *
                           (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
                           in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar44) +
                           *(float *)(unaff_x19 + 0x9b);
                }
                else {
                  if ((in_stack_0000109c == 0x2029) || (fVar44 = 0.0, in_stack_0000109c == 10)) {
                    fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  }
                  uVar21 = 1;
                  fVar44 = *(float *)(unaff_x19 + 0x9b) +
                           *(float *)(unaff_x19 + 0x58) +
                           in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar44);
                }
                *(float *)(unaff_x19 + 0x9b) = fVar44;
                *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar21;
                puVar7 = PTR_DAT_03d9c920;
                lVar37 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar37 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar37 = *(long *)puVar7;
                }
                uVar16 = *(undefined8 *)(*(long *)(lVar37 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x9a) = fVar43;
                uVar48 = NEON_rev64(uVar16,4);
                unaff_x19[0x99] = uVar48;
                *(float *)(unaff_x19 + 200) =
                     *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                FUN_036ed2b4();
                FUN_036ed2b4();
                bStack0000000000000078 = 1;
                *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                in_stack_00000068 = 1;
                in_stack_00001088 = uVar19;
                goto LAB_036a9250;
              }
              goto LAB_036afbe8;
            }
          }
          goto LAB_036afadc;
        }
        if (in_stack_0000109c == 3) {
          if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
          in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
          uVar29 = 3;
        }
      }
      else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d)) goto LAB_036ac1c4;
    }
LAB_036ac2f4:
    uVar51 = *unaff_x20;
    if (uVar55 <= uVar51) goto LAB_036afbe8;
    if (*(char *)(lVar39 + (long)(int)uVar51 * unaff_x24 + 0x194) != '\0') {
      lVar39 = lVar39 + (long)(int)uVar51 * unaff_x24;
      uVar48 = *(ulong *)(lVar39 + 0x11c);
      uVar18 = *(ulong *)(in_stack_00000088 + 0x230);
      *(ulong *)(in_stack_00000088 + 0x230) =
           uVar18 ^ (uVar18 ^ uVar48) &
                    ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) < (float)(uVar48 >> 0x20)),
                              -(uint)((float)uVar18 < (float)uVar48));
      uVar18 = *(ulong *)(in_stack_00000088 + 0x238);
      uVar48 = *(ulong *)(lVar39 + 0x128);
      *(ulong *)(in_stack_00000088 + 0x238) =
           uVar18 ^ (uVar18 ^ uVar48) &
                    ~CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar18 >> 0x20)),
                              -(uint)((float)uVar48 < (float)uVar18));
    }
    if (((int)unaff_x19[0x5c] == 5) &&
       ((0xd < uVar29 || ((1 << (ulong)(uVar29 & 0x1f) & 0x2c00U) == 0)))) {
      lVar39 = *(long *)(lVar37 + 0x58);
      if (lVar39 == 0) goto LAB_036afadc;
      iVar11 = (int)unaff_x19[0x96] + 1;
      if (*(int *)(lVar39 + 0x18) < iVar11) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52e84((long *)(lVar37 + 0x58),iVar11,1,*(undefined8 *)PTR_DAT_03d9c890);
        lVar37 = *in_stack_00000190;
        if (lVar37 == 0) goto LAB_036afadc;
      }
      lVar39 = *(long *)(lVar37 + 0x58);
      if (lVar39 == 0) goto LAB_036afadc;
      uVar55 = *(uint *)(unaff_x19 + 0x96);
      lVar25 = (long)(int)uVar55;
      uVar51 = *(uint *)(lVar39 + 0x18);
      if (uVar51 <= uVar55) goto LAB_036afbe8;
      lVar17 = lVar39 + lVar25 * 0x14;
      fVar44 = *(float *)(lVar17 + 0x30);
      uVar48 = (ulong)(uint)fVar44;
      *(undefined4 *)(lVar17 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
      fVar43 = *(float *)((long)unaff_x19 + 0x4c4);
      if (fVar44 <= *(float *)((long)unaff_x19 + 0x4c4)) {
        fVar43 = fVar44;
      }
      *(float *)(lVar17 + 0x30) = fVar43;
      uVar29 = *(uint *)((long)unaff_x19 + 0x494);
      if (uVar29 == 0 && uVar55 == 0) {
        *(uint *)(lVar39 + (ulong)uVar55 * 0x14 + 0x20) = uVar29;
      }
      else {
        uVar5 = uVar29 - 1;
        if (0 < (int)uVar29) {
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar37 + 0x18) <= uVar5) goto LAB_036afbe8;
          if (uVar55 != *(uint *)(lVar37 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) + 0x68)) {
            if (uVar55 - 1 < uVar51) {
              *(uint *)(lVar39 + 0x20 + (long)(int)(uVar55 - 1) * 0x14 + 4) = uVar5;
              *(uint *)(lVar39 + 0x20 + lVar25 * 0x14) = uVar29;
              goto LAB_036ac564;
            }
            goto LAB_036afbe8;
          }
        }
        if ((float)uVar29 == in_stack_00000090._4_4_) {
          *(float *)(lVar39 + lVar25 * 0x14 + 0x24) = in_stack_00000090._4_4_;
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
             (0x1d < in_stack_0000109c - 0xa961)) || (uVar18 = FUN_036fbce8(0), (uVar18 & 1) != 0))
           && ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
                (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))))
        goto LAB_036ac6e8;
        lVar37 = FUN_036fbb7c(0);
        if ((lVar37 == 0) || (*(long *)(lVar37 + 0x10) == 0)) goto LAB_036afadc;
        uVar51 = FUN_0254f914(*(long *)(lVar37 + 0x10),in_stack_0000109c,
                              *(undefined8 *)PTR_DAT_03d9c860);
        if ((int)in_stack_00000090._4_4_ <= (int)*unaff_x20) {
          if ((uVar51 & 1) == 0) {
LAB_036ac8e4:
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_036ed2b4();
            goto LAB_036ac91c;
          }
LAB_036ac84c:
          if (uVar42 != uVar15 || ((bStack0000000000000078 ^ 0xff) & 1) != 0) goto LAB_036ac920;
          if (unaff_w21 != 0) goto LAB_036ac868;
          goto LAB_036ac8a0;
        }
        lVar37 = FUN_036fbb7c(0);
        if (((lVar37 == 0) || (*in_stack_00000190 == 0)) ||
           (lVar39 = *(long *)(*in_stack_00000190 + 0x38), lVar39 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar39 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
        if (*(long *)(lVar37 + 0x18) == 0) goto LAB_036afadc;
        uVar18 = FUN_0254f914(*(long *)(lVar37 + 0x18),
                              *(undefined2 *)
                               (lVar39 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20),
                              *(undefined8 *)PTR_DAT_03d9c860);
        if ((uVar51 & 1) != 0) goto LAB_036ac84c;
        if ((uVar18 & 1) == 0) goto LAB_036ac8e4;
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
    in_stack_00001088 = uVar19;
  }
LAB_036a9250:
  do {
    in_stack_00001068 = in_stack_00001068 + 1;
    lVar37 = unaff_x19[0x8f];
    if (lVar37 == 0) goto LAB_036afadc;
    if ((int)*(uint *)(lVar37 + 0x18) <= (int)in_stack_00001068) {
LAB_036acbd8:
      fVar53 = (float)uVar48;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar53 = DAT_00b552b8,
         DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar53 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar43 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar53 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar56 = (*(float *)((long)unaff_x19 + 0x23c) - fVar53) * 0.5;
          if (fVar56 <= DAT_00b55428) {
            fVar56 = DAT_00b55428;
          }
          *(float *)(unaff_x19 + 0x48) = fVar53;
          fVar56 = (fVar53 + fVar56) * 20.0 + 0.5;
          fVar53 = DAT_00b556b4;
          if (fVar56 != INFINITY) {
            fVar53 = (float)(int)fVar56 / 20.0;
          }
          if (fVar43 <= fVar53) {
            fVar53 = fVar43;
          }
          goto LAB_036acc94;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar7 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar19 = FUN_0303de64(in_stack_00000038,0);
        uVar16 = FUN_03052638(_fStack0000000000000040,0);
        uVar19 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar19,*(undefined8 *)PTR_DAT_03d9c938
                              ,uVar16,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar19,0);
      }
      puVar8 = PTR_DAT_03d9c920;
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar40 == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_036acd60;
      }
      lVar37 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar37 = *(long *)puVar8;
      }
      plVar38 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
      lVar37 = **(long **)(lVar37 + 0xb8);
      if (lVar37 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
      iVar14 = *(int *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x60), lVar37 == 0))
      goto LAB_036afadc;
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar37 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa40c(lVar37 + 0x20,0,0);
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
      lVar37 = unaff_x19[0xe3];
      _fStack00000000000000c8 = (ulong)in_stack_000000f8;
      fStack00000000000000d0 = in_stack_00000108._4_4_;
      if (iVar11 < 0x401) {
        if (iVar11 == 0x100) {
          if (lVar37 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar37 + 0x18) < 2) goto LAB_036afbe8;
          uVar19 = *(undefined8 *)(lVar37 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar39 = *(long *)(*in_stack_00000190 + 0x58), lVar39 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar39 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            fVar53 = *(float *)(lVar39 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar53 = *(float *)(unaff_x19 + 0x97);
          }
          fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar37 + 0x2c);
          fVar53 = (0.0 - fVar53) - fStack0000000000000020;
        }
        else if (iVar11 == 0x200) {
          if (lVar37 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_036afbe8;
          fStack00000000000000d0 = (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
          uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar37 + 0x24) +
                            (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar37 = *(long *)(*in_stack_00000190 + 0x58), lVar37 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar37 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            lVar37 = lVar37 + (long)(int)uStack0000000000000030 * 0x14;
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
            fVar53 = ((fStack0000000000000020 + *(float *)(lVar37 + 0x28) +
                      *(float *)(lVar37 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
            fVar53 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar11 != 0x400) goto LAB_036ad288;
          if (lVar37 == 0) goto LAB_036afadc;
          if (*(int *)(lVar37 + 0x18) == 0) goto LAB_036afbe8;
          uVar19 = *(undefined8 *)(lVar37 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar39 = *(long *)(*in_stack_00000190 + 0x58), lVar39 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar39 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            in_stack_00001098 = *(float *)(lVar39 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar37 + 0x20);
          fVar53 = fStack0000000000000024 + (0.0 - in_stack_00001098);
        }
LAB_036ad278:
        _fStack00000000000000c8 =
             CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar53);
      }
      else if (iVar11 == 0x800) {
        if (lVar37 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_036afbe8;
        fVar53 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar37 + 0x24) + (float)*(undefined8 *)(lVar37 + 0x30)
                      ) * 0.5 + 0.0);
        fStack00000000000000d0 = fVar53;
      }
      else {
        if (iVar11 == 0x1000) {
          if (lVar37 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar37 + 0x18) != 1) && (*(int *)(lVar37 + 0x18) != 0)) {
            uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar37 + 0x24) +
                              (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5);
            fStack00000000000000d0 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
            fVar53 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_036ad278;
          }
          goto LAB_036afbe8;
        }
        if (iVar11 == 0x2000) {
          if (lVar37 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar37 + 0x18) == 1) || (*(int *)(lVar37 + 0x18) == 0)) goto LAB_036afbe8;
          fVar53 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          _fStack00000000000000c8 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar37 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar37 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar37 + 0x24) +
                        (float)*(undefined8 *)(lVar37 + 0x30)) * 0.5 + fVar53);
          fStack00000000000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar37 + 0x20) + *(float *)(lVar37 + 0x2c)) * 0.5;
        }
      }
LAB_036ad288:
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      uVar19 = FUN_03afb088(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar7);
      }
      uVar18 = FUN_03922f24(uVar19,0,0);
      lVar37 = FUN_036dfed8();
      if (lVar37 == 0) goto LAB_036afadc;
      FUN_0392a7f0(lVar37,0);
      *(float *)(unaff_x19 + 0xe2) = fVar53;
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      iVar11 = FUN_03afa68c(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      fVar43 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
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
      lVar37 = *(long *)PTR_DAT_03d9c888;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar37 = *(long *)puVar7;
      }
      puVar23 = *(undefined4 **)(lVar37 + 0xb8);
      uVar48 = (ulong)(uint)puVar23[1];
      uVar49 = (ulong)(uint)puVar23[2];
      uVar52 = (ulong)(uint)puVar23[3];
      FUN_036c214c(*puVar23,uVar48,uVar49,uVar52,&stack0x00001070,0x4000ffff,0);
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar37 = *in_stack_00000190;
      if (lVar37 == 0) goto LAB_036afadc;
      uVar42 = *unaff_x20;
      if ((int)uVar42 < 1) {
        fStack00000000000000e4 = 0.0;
        iVar14 = 0;
        goto LAB_036af524;
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      fVar53 = ABS(fVar53);
      fVar56 = 1.0;
      if ((uVar18 & 1) == 0) {
        fVar56 = fVar53;
      }
      if (lVar37 == 0) goto LAB_036afadc;
      bVar10 = false;
      bVar6 = false;
      _fStack0000000000000138 = 0;
      bVar9 = false;
      fStack00000000000000e4 = 0.0;
      fStack000000000000002c = 0.0;
      in_stack_00000170._4_4_ = 0.0;
      iStack0000000000000074 = 0;
      lVar39 = 0x2e0;
      fVar57 = 0.0;
      fVar44 = 0.0;
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
      uVar51 = 0;
      goto LAB_036ad4b0;
    }
    if (*(uint *)(lVar37 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
    in_stack_0000109c = *(uint *)(lVar37 + (long)(int)in_stack_00001068 * 0xc + 0x20);
    if (in_stack_0000109c == 0) goto LAB_036acbd8;
    if (5 < in_stack_00000188._4_4_) {
      uVar19 = FUN_0303de64(&stack0x0000109c,0);
      uVar16 = FUN_0303de64(&stack0x00001068,0);
      uVar19 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar19,*(undefined8 *)PTR_DAT_03d9c940,
                            uVar16,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f2e04(uVar19,0);
      in_stack_00001088 = CONCAT44(3,*unaff_x20);
    }
    if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_0000109c != 0x3c)) {
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar37 + 0x2c);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar37 + 0x58);
      unaff_x19[0x20] = *(long *)(lVar37 + 0x38);
      thunk_FUN_01b4f09c(in_stack_00000178);
    }
    else {
      *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      uVar18 = FUN_036e7318();
      if (((uVar18 & 1) != 0) &&
         (in_stack_00001068 = in_stack_0000104c, uVar40 = in_stack_0000109c,
         *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
    }
    if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
    goto LAB_036afadc;
    uVar42 = *unaff_x20;
    if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
    lVar25 = (long)(int)uVar42;
    unaff_w26 = (uint)*(byte *)(lVar37 + lVar25 * unaff_x24 + 0x5c);
    *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
    lVar39 = unaff_x19[0x24];
    if ((uint)in_stack_00001088 == uVar42) {
      in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
      if (in_stack_0000109c == 0x2026) {
        *(long *)(lVar37 + lVar25 * unaff_x24 + 0x30) = unaff_x19[0xca];
        thunk_FUN_01b4f09c();
        if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar37 + 0x2c) = 0;
        *(long *)(lVar37 + 0x38) = unaff_x19[0xcb];
        thunk_FUN_01b4f09c();
        if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
        thunk_FUN_01b4f09c();
        if ((*in_stack_00000190 == 0) ||
           (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0)) goto LAB_036afadc;
        uVar42 = *unaff_x20;
        if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
        unaff_w23 = 1;
        *(int *)(lVar37 + (long)(int)uVar42 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        in_stack_00001088 = CONCAT44(3,uVar42 + 1);
      }
      else if (in_stack_0000109c == 3) {
        if ((*in_stack_00000178 == 0) || (lVar17 = FUN_036c835c(*in_stack_00000178,0), lVar17 == 0))
        goto LAB_036afadc;
        uVar19 = FUN_0262f3a4(lVar17,3,*(undefined8 *)PTR_DAT_03d9c870);
        if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
        *(undefined8 *)(lVar37 + lVar25 * unaff_x24 + 0x30) = uVar19;
        thunk_FUN_01b4f09c();
        uVar42 = *(uint *)((long)unaff_x19 + 0x494);
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
    if (((int)uVar42 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar37 = lVar37 + (long)(int)uVar42 * (long)iVar14;
      *(undefined1 *)(lVar37 + 0x194) = 0;
      *(undefined2 *)(lVar37 + 0x20) = 0x200b;
      *(undefined4 *)(lVar37 + 100) = 0;
      *unaff_x20 = uVar42 + 1;
      uVar40 = in_stack_0000109c;
      goto LAB_036a9250;
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar11 == 0) {
      uVar42 = *(uint *)((long)unaff_x19 + 0x25c);
      if ((uVar42 >> 4 & 1) == 0) {
        if ((uVar42 >> 3 & 1) == 0) {
          in_stack_00000150 = 1.0;
          if ((uVar42 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_02fdd9e8(in_stack_0000109c,0);
            if ((uVar18 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar42 = FUN_02fddc48(in_stack_0000109c,0);
              in_stack_0000109c = uVar42 & 0xffff;
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
          uVar18 = FUN_02fdd92c(in_stack_0000109c,0);
          in_stack_00000150 = 1.0;
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar42 = FUN_02fdddc0(in_stack_0000109c,0);
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
        uVar18 = FUN_02fdd9e8(in_stack_0000109c,0);
        in_stack_00000150 = 1.0;
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar42 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
          in_stack_00000150 = 1.0;
          in_stack_0000109c = uVar42 & 0xffff;
        }
      }
      iVar11 = *(int *)((long)unaff_x19 + 0x644);
    }
    else {
      in_stack_00000150 = 1.0;
    }
    uVar40 = in_stack_0000109c;
    if (iVar11 != 0) {
      if (iVar11 != 1) {
        lVar37 = *in_stack_00000190;
        unaff_s13 = 0.0;
        if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
          unaff_s13 = fVar53;
        }
        in_stack_00000180 = 0.0;
        if (lVar37 == 0) goto LAB_036afadc;
        in_stack_00000130 = 0.0;
        in_stack_00000128 = 0;
        unaff_s11 = fVar53;
        goto LAB_036a9b50;
      }
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar37 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar37 == 0))
      goto LAB_036afadc;
      lVar37 = FUN_02b59714(lVar37,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar7 = PTR_DAT_03d9c920;
      if (lVar37 != 0) {
        if (in_stack_0000109c == 0x3c) {
          in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
        }
        else {
          lVar25 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar25 = *(long *)puVar7;
          }
          *(undefined4 *)((long)unaff_x19 + 0x1bc) =
               *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0x68);
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar53 = *(float *)(unaff_x19 + 0x3d);
        memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
        iVar11 = FUN_0396ac24(&stack0x00000fe0,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
        fVar44 = (float)FUN_0396ac34(&stack0x00000fe0,0);
        fVar43 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar43 = (fVar53 / (float)iVar11) * fVar44 * fVar43;
        iVar11 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
        fVar53 = *(float *)(unaff_x19 + 0x3d);
        if (iVar11 < 1) {
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          iVar11 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar57 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
          fVar44 = fStack00000000000000a0;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar44 = 1.0;
          }
          if (unaff_x19[0x20] == 0) goto LAB_036afadc;
          fVar50 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
          if (*(long *)(lVar37 + 0x20) == 0) goto LAB_036afadc;
          FUN_0396b140(&stack0x000010a0,*(long *)(lVar37 + 0x20),0);
          fVar63 = (float)FUN_0396af70(&stack0x00000fc0,0);
          if (*(long *)(lVar37 + 0x20) == 0) goto LAB_036afadc;
          fVar45 = *(float *)(lVar37 + 0x2c);
          fVar58 = (float)FUN_0396b17c(*(long *)(lVar37 + 0x20),0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          in_stack_00000130 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar41 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar46 = *(float *)((long)unaff_x19 + 0x404);
          in_stack_00000180 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
          if (unaff_x19[0x20] == 0) goto LAB_036afadc;
          in_stack_00000180 = fVar43 * fVar41 * fVar46 * in_stack_00000180;
          fVar44 = (fVar53 / (float)iVar11) * fVar57 * fVar44;
          unaff_s11 = fVar44 * (fVar50 / fVar63) * fVar45 * fVar58;
          fVar44 = fVar44 / unaff_s11;
          in_stack_00000130 = fVar44 * in_stack_00000130;
          fVar53 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
          fVar44 = fVar44 * fVar53;
        }
        else {
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          iVar11 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          fVar44 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
          if (*(long *)(lVar37 + 0x20) == 0) goto LAB_036afadc;
          fVar50 = *(float *)(lVar37 + 0x2c);
          fVar57 = fStack00000000000000a0;
          if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
            fVar57 = 1.0;
          }
          fVar63 = (float)FUN_0396b17c(*(long *)(lVar37 + 0x20),0);
          if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
          in_stack_00000130 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          fVar58 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
          if (*in_stack_000000b8 == 0) goto LAB_036afadc;
          fVar45 = *(float *)((long)unaff_x19 + 0x404);
          in_stack_00000180 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
          if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
          in_stack_00000180 = fVar43 * fVar58 * fVar45 * in_stack_00000180;
          unaff_s11 = (fVar53 / (float)iVar11) * fVar44 * fVar57 * fVar50 * fVar63;
          fVar44 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
        }
        *in_stack_000000f8 = lVar37;
        thunk_FUN_01b4f09c(in_stack_000000f8,lVar37);
        if ((*in_stack_00000190 == 0) ||
           (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar37 + 0x2c) = 1;
        *(float *)(lVar37 + 0x160) = unaff_s11;
        *(long *)(lVar37 + 0x40) = *in_stack_000000b8;
        thunk_FUN_01b4f09c();
        if ((*in_stack_00000190 == 0) ||
           (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
        thunk_FUN_01b4f09c();
        lVar37 = *in_stack_00000190;
        if ((lVar37 == 0) || (lVar25 = *(long *)(lVar37 + 0x38), lVar25 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        in_stack_00000170._4_4_ = 0.0;
        in_stack_00000128 = CONCAT44(fVar44,fVar56);
        *(int *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
        *(int *)(unaff_x19 + 0x24) = (int)lVar39;
        goto FUN_036a9b34;
      }
      goto LAB_036a9250;
    }
    if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
  } while (*in_stack_000000f8 == 0);
  if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_00000178 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  thunk_FUN_01b4f09c(in_stack_00000178);
  if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_00000168 = *(long *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  thunk_FUN_01b4f09c();
  if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  uVar15 = *unaff_x20;
  uVar42 = *(uint *)(lVar37 + 0x18);
  if (uVar42 <= uVar15) goto LAB_036afbe8;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar37 + (long)(int)uVar15 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 == 0) {
LAB_036a9778:
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar53 = *(float *)(unaff_x19 + 0x3d);
    iVar11 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
    lVar37 = unaff_x19[0x20];
  }
  else {
    lVar39 = unaff_x19[0x8f];
    if (lVar39 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar39 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
    if ((*(int *)(lVar39 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
       (uVar15 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
    if (uVar42 <= uVar15 - 1) goto LAB_036afbe8;
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar53 = *(float *)(lVar37 + (long)(int)(uVar15 - 1) * (long)iVar14 + 0x60);
    iVar11 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
    lVar37 = *in_stack_00000178;
  }
  if (lVar37 == 0) goto LAB_036afadc;
  fVar44 = (float)FUN_0396ac34(lVar37 + 0x50,0);
  fVar43 = fStack00000000000000a0;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar43 = 1.0;
  }
  uVar62 = 0;
  in_stack_00000130 = 0.0;
  if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_00000130 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    uVar62 = FUN_0396ac94(*in_stack_00000178 + 0x50,0);
  }
  lVar37 = unaff_x19[0xc9];
  if (lVar37 == 0) goto LAB_036afadc;
  in_stack_00000128 = CONCAT44(uVar62,fVar56);
  if (*(long *)(lVar37 + 0x20) == 0) goto LAB_036afadc;
  fVar57 = *(float *)((long)unaff_x19 + 0x404);
  fVar50 = *(float *)(lVar37 + 0x2c);
  fVar56 = (float)FUN_0396b17c(*(long *)(lVar37 + 0x20),0);
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar63 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar58 = *(float *)((long)unaff_x19 + 0x404);
  in_stack_00000180 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
  lVar37 = unaff_x19[0x6d];
  if ((lVar37 == 0) || (lVar39 = *(long *)(lVar37 + 0x38), lVar39 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar39 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar39 = lVar39 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar39 + 0x2c) = 0;
  fVar43 = ((in_stack_00000150 * fVar53) / (float)iVar11) * fVar44 * fVar43;
  unaff_s11 = fVar43 * fVar57 * fVar50 * fVar56;
  *(float *)(lVar39 + 0x160) = unaff_s11;
  uVar42 = *(uint *)(unaff_x19 + 0x24);
  in_stack_00000180 = fVar43 * fVar63 * fVar58 * in_stack_00000180;
  if (uVar42 == 0) {
    in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
  }
  else {
    lVar39 = unaff_x19[0xe1];
    if (lVar39 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar39 + 0x18) <= uVar42) goto LAB_036afbe8;
    lVar39 = *(long *)(lVar39 + (long)(int)uVar42 * 8 + 0x20);
    if (lVar39 == 0) goto LAB_036afadc;
    in_stack_00000170._4_4_ = *(float *)(lVar39 + 0x10c);
  }
FUN_036a9b34:
  unaff_s13 = 0.0;
  if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
    unaff_s13 = unaff_s11;
  }
LAB_036a9b50:
  lVar37 = *(long *)(lVar37 + 0x38);
  if (lVar37 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar37 = lVar37 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar37 + 0x20) = (short)in_stack_0000109c;
  *(int *)(lVar37 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar37 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar37 = *(long *)(unaff_x19[0x6d] + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  uVar42 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar37 = lVar37 + (long)(int)uVar42 * unaff_x24;
  *(undefined4 *)(lVar37 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar37 + 0x184) = in_stack_000001d8;
  *(undefined8 *)(lVar37 + 0x17c) = in_stack_000001d0;
  if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar37 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar37 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar37 = *(long *)(unaff_x19[0xc9] + 0x20), lVar37 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar37,0);
  unaff_x22 = (long *)StringLiteral_455;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar42 = FUN_02fdb080(in_stack_0000109c,0);
    unaff_w21 = uVar42 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar42 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar42 << 0x20;
    unaff_d9 = 0;
    unaff_s8 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar51 = *unaff_x20;
    uVar15 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar51 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar51 + 1) goto LAB_036afbe8;
      lVar37 = *(long *)(lVar37 + (long)(int)(uVar51 + 1) * (long)iVar14 + 0x30);
      if ((((lVar37 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar39 = *(long *)(*in_stack_00000178 + 0x128), lVar39 == 0)) ||
         (lVar39 = *(long *)(lVar39 + 0x18), lVar39 == 0)) goto LAB_036afadc;
      uVar18 = FUN_02630bd0(lVar39,uVar15 | *(int *)(lVar37 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar62 = 0;
      if ((uVar18 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar42 << 0x20;
        uVar55 = 0;
        unaff_s8 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar62 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        unaff_s8 = *(float *)(in_stack_00000fb8 + 0x14);
        uVar55 = *(uint *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar42 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar42,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar51 = *unaff_x20;
    }
    else {
      uVar62 = 0;
      _fStack0000000000000138 = (ulong)uVar42 << 0x20;
      uVar55 = 0;
      unaff_s8 = 0.0;
    }
    unaff_d9 = (ulong)uVar55;
    if (0 < (int)uVar51) {
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x38), lVar37 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar51 - 1) goto LAB_036afbe8;
      lVar37 = *(long *)(lVar37 + (ulong)(uVar51 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar37 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar39 = *(long *)(*in_stack_00000178 + 0x128), lVar39 == 0 ||
          (lVar39 = *(long *)(lVar39 + 0x18), lVar39 == 0)))) goto LAB_036afadc;
      uVar18 = FUN_02630bd0(lVar39,*(uint *)(lVar37 + 0x28) | uVar15 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar18 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar47 = (undefined4)_fStack0000000000000138;
        unaff_s8 = (float)FUN_036d2d10(unaff_s8,unaff_d9,_fStack0000000000000138 & 0xffffffff,uVar62
                                       ,*(undefined4 *)(in_stack_00000fb8 + 0x28),
                                       *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                       *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                       *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          fStack000000000000013c = 0.0;
        }
        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar47);
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
  }
  unaff_x28 = in_stack_00000190;
  fVar53 = unaff_s13;
  uVar19 = in_stack_00001088;
  if ((char)unaff_x19[0x1e] != '\0') {
    param_1 = *(float *)(unaff_x19 + 200);
    fVar43 = (float)FUN_0396af88(&stack0x00001050,0);
    param_1 = param_1 - unaff_s13 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = param_1;
    if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) goto code_r0x036a9f10;
  }
  goto LAB_036a9f24;
LAB_036ad4b0:
  uVar42 = uVar15 - 1;
  if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
  goto LAB_036afadc;
  lVar36 = (long)(int)uVar42;
  lVar17 = lVar37 + lVar36 * 0x178;
  uVar55 = *(uint *)(lVar17 + 100);
  if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
  lVar34 = (long)(int)uVar55;
  lVar25 = lVar25 + lVar34 * 0x5c;
  lVar30 = *(long *)(lVar17 + 0x38);
  uVar3 = *(ushort *)(lVar17 + 0x20);
  uVar29 = *(uint *)(lVar25 + 0x3c);
  uVar40 = *(uint *)(lVar25 + 0x68);
  iVar2 = *(int *)(lVar25 + 0x20);
  iVar12 = *(int *)(lVar25 + 0x28);
  iVar13 = *(int *)(lVar25 + 0x2c);
  uVar5 = *(uint *)(lVar25 + 0x40);
  lVar17 = (long)(int)uVar5;
  fVar58 = *(float *)(lVar25 + 0x4c);
  fVar41 = *(float *)(lVar25 + 0x54);
  fVar50 = *(float *)(lVar25 + 0x58);
  fVar60 = *(float *)(lVar25 + 0x5c);
  fVar46 = *(float *)(lVar25 + 0x60);
  fVar54 = *(float *)(lVar25 + 0x6c);
  fVar59 = *(float *)(lVar25 + 0x70);
  fVar63 = *(float *)(lVar25 + 0x74);
  fVar45 = *(float *)(lVar25 + 0x78);
  uVar33 = (uint)uVar3;
  if ((int)uVar40 < 9) {
    switch(uVar40) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar46 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar50;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar46 + fVar60 * 0.5) - fVar50 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar60 + fVar46) - fVar50;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar60 + fVar46;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar40 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar37 + 0x18) <= uVar29) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar37 + (long)(int)uVar29 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fde5f4(uVar4,0);
      if ((uVar18 & 1) == 0) {
        bVar1 = (int)uVar55 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar50 <= fVar60) && (!bVar1 && uVar40 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar60 + fVar46;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar15 == 1) || (uVar55 != uVar51)) || (uVar42 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar60 + fVar46;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar33,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar22 = (char)unaff_x19[0x1e];
        fVar46 = -fVar50;
        if (cVar22 != '\0') {
          fVar46 = fVar50;
        }
        if (*(uint *)(lVar37 + 0x18) <= uVar29) goto LAB_036afbe8;
        iVar13 = (int)*(char *)(lVar37 + (long)(int)uVar29 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar13 + -1;
        if (iVar13 < 1) {
          fVar50 = 1.0;
          iVar13 = 1;
        }
        else {
          fVar50 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar33 == 9) {
LAB_036af498:
          fVar50 = 1.0 - fVar50;
        }
        else {
          if (uVar33 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_02fdea78(uVar33,0);
            cVar22 = (char)unaff_x19[0x1e];
            if ((uVar18 & 1) != 0) goto LAB_036af498;
          }
          iVar13 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar12;
        }
        fVar50 = ((fVar60 + fVar46) * fVar50) / (float)iVar13;
        if (cVar22 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar50;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar50;
        }
      }
    }
  }
  else if (uVar40 == 0x20) {
    fVar50 = fVar54 + fVar63;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar37 + lVar36 * 0x178;
  fVar60 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar50 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar46 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar25 + 0x194) == '\0') goto LAB_036adf70;
  iVar12 = *(int *)(lVar37 + lVar36 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_036add84;
  fVar57 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar55,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar24 = lVar37 + lVar36 * 0x178;
    *(undefined4 *)(lVar24 + 0x84) = 0;
    *(undefined4 *)(lVar24 + 0xac) = 0;
    *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
    fVar57 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar37 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar24 = lVar37 + lVar36 * 0x178;
      fVar63 = (in_stack_00000108._4_4_ + fVar45) - *(float *)(in_stack_00000088 + 0x230);
      fVar45 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar24 = lVar37 + lVar36 * 0x178;
    fVar63 = fVar63 - fVar54;
    *(float *)(lVar24 + 0x84) = fVar57 + (fVar45 - fVar54) / fVar63;
    *(float *)(lVar24 + 0xac) = fVar57 + (*(float *)(lVar24 + 0x98) - fVar54) / fVar63;
    *(float *)(lVar24 + 0xd4) = fVar57 + (*(float *)(lVar24 + 0xc0) - fVar54) / fVar63;
    fVar57 = fVar57 + (*(float *)(lVar24 + 0xe8) - fVar54) / fVar63;
    break;
  case 2:
    lVar24 = lVar37 + lVar36 * 0x178;
    fVar45 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar63 = (in_stack_00000108._4_4_ + *(float *)(lVar24 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar24 + 0x84) = fVar57 + fVar63 / fVar45;
    *(float *)(lVar24 + 0xac) =
         fVar57 + ((in_stack_00000108._4_4_ + *(float *)(lVar24 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar24 + 0xd4) =
         fVar57 + ((in_stack_00000108._4_4_ + *(float *)(lVar24 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar57 = fVar57 + ((in_stack_00000108._4_4_ + *(float *)(lVar24 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar24 = lVar37 + lVar36 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0;
      *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar24 = lVar37 + lVar36 * 0x178;
      fVar45 = fVar45 - fVar59;
      fVar63 = fVar57 + (*(float *)(lVar24 + 0x74) - fVar59) / fVar45;
      fVar45 = fVar57 + (*(float *)(lVar24 + 0x9c) - fVar59) / fVar45;
      *(float *)(lVar24 + 0x88) = fVar63;
      *(float *)(lVar24 + 0xb0) = fVar45;
      *(float *)(lVar24 + 0xd8) = fVar63;
      *(float *)(lVar24 + 0x100) = fVar45;
      break;
    case 2:
      lVar24 = lVar37 + lVar36 * 0x178;
      fVar63 = fVar57 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar24 + 0x88) = fVar63;
      fVar45 = *(float *)(unaff_x19 + 0x9c);
      fVar54 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar24 + 0xd8) = fVar63;
      fVar63 = fVar57 + (*(float *)(lVar24 + 0x9c) - fVar45) / (fVar54 - fVar45);
      *(float *)(lVar24 + 0xb0) = fVar63;
      *(float *)(lVar24 + 0x100) = fVar63;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
    }
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar37 + lVar36 * 0x178;
    fVar63 = *(float *)(lVar24 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar63) * 0.5;
    fVar54 = fVar57 + *(float *)(lVar24 + 0x88) * fVar63 + fVar45;
    fVar57 = fVar57 + fVar45 + *(float *)(lVar24 + 0xb0) * fVar63;
    *(float *)(lVar24 + 0x84) = fVar54;
    *(float *)(lVar24 + 0xac) = fVar54;
    *(float *)(lVar24 + 0xd4) = fVar57;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar37 + lVar36 * 0x178 + 0xfc) = fVar57;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar37 + lVar36 * 0x178;
    *(undefined4 *)(lVar24 + 0x88) = 0;
    *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0x100) = 0;
    break;
  case 1:
    if (uVar42 < uVar40) {
      lVar24 = lVar37 + lVar36 * 0x178;
      fVar58 = fVar58 - fVar41;
      fVar57 = (*(float *)(lVar24 + 0x74) - fVar41) / fVar58;
      fVar58 = (*(float *)(lVar24 + 0x9c) - fVar41) / fVar58;
      *(float *)(lVar24 + 0x88) = fVar57;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar37 + lVar36 * 0x178;
    fVar57 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar24 + 0x88) = fVar57;
    fVar58 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar24 + 0xb0) = fVar58;
    *(float *)(lVar24 + 0xd8) = fVar58;
    *(float *)(lVar24 + 0x100) = fVar57;
    break;
  case 3:
    if (uVar40 <= uVar42) goto LAB_036afbe8;
    lVar24 = lVar37 + lVar36 * 0x178;
    fVar58 = *(float *)(lVar24 + 0x15c);
    fVar63 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar58) * 0.5;
    fVar57 = *(float *)(lVar24 + 0x84) / fVar58 + fVar63;
    fVar63 = fVar63 + *(float *)(lVar24 + 0xd4) / fVar58;
    *(float *)(lVar24 + 0x88) = fVar57;
    *(float *)(lVar24 + 0xb0) = fVar63;
    *(float *)(lVar24 + 0x100) = fVar57;
    *(float *)(lVar24 + 0xd8) = fVar63;
  }
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  lVar24 = lVar37 + lVar36 * 0x178;
  fVar57 = *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar24 + 0x5c) == '\0') && ((*(byte *)(lVar37 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar57 = -fVar57;
  }
  fVar63 = fVar53;
  if (((iVar11 == 2) || (fVar63 = fVar56, iVar11 == 1)) || (fVar63 = fVar53 / fVar43, iVar11 == 0))
  {
    fVar57 = fVar63 * fVar57;
  }
  lVar24 = lVar37 + lVar36 * 0x178;
  fVar58 = *(float *)(lVar24 + 0x88);
  fVar45 = *(float *)(lVar24 + 0x84);
  fVar63 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar63 = (float)(int)fVar45;
  }
  fVar54 = *(float *)(lVar24 + 0xd4);
  fVar59 = *(float *)(lVar24 + 0xd8);
  fVar41 = -2.1474836e+09;
  if (fVar58 != INFINITY) {
    fVar41 = (float)(int)fVar58;
  }
  uVar47 = FUN_036f2b00(fVar45 - fVar63,fVar58 - fVar41);
  *(undefined4 *)(lVar24 + 0x84) = uVar47;
  if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
  fVar59 = fVar59 - fVar41;
  *(float *)(lVar24 + 0x88) = fVar57;
  uVar47 = FUN_036f2b00(fVar45 - fVar63,fVar59);
  *(undefined4 *)(lVar37 + lVar36 * 0x178 + 0xac) = uVar47;
  if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
  fVar54 = fVar54 - fVar63;
  *(float *)(lVar37 + lVar36 * 0x178 + 0xb0) = fVar57;
  fVar63 = (float)FUN_036f2b00(fVar54,fVar59);
  *(float *)(lVar24 + 0xd4) = fVar63;
  if (*(uint *)(lVar37 + 0x18) <= uVar42) goto LAB_036afbe8;
  *(float *)(lVar24 + 0xd8) = fVar57;
  uVar47 = FUN_036f2b00(fVar54,fVar58 - fVar41);
  *(undefined4 *)(lVar37 + lVar36 * 0x178 + 0xfc) = uVar47;
  uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  *(float *)(lVar37 + lVar36 * 0x178 + 0x100) = fVar57;
LAB_036add84:
  if (((int)uVar42 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000e4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar55 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar40 <= uVar42) goto LAB_036afbe8;
      lVar25 = lVar37 + lVar36 * 0x178;
      *(ulong *)(lVar25 + 0x70) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x70) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar25 + 0x70));
      *(float *)(lVar25 + 0x78) = fVar46 + *(float *)(lVar25 + 0x78);
      *(ulong *)(lVar25 + 0x98) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x98) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar25 + 0x98));
      *(float *)(lVar25 + 0xa0) = fVar46 + *(float *)(lVar25 + 0xa0);
      *(ulong *)(lVar25 + 0xc0) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0xc0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar25 + 0xc0));
      *(float *)(lVar25 + 200) = fVar46 + *(float *)(lVar25 + 200);
      *(ulong *)(lVar25 + 0xe8) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar25 + 0xe8));
      *(float *)(lVar25 + 0xf0) = fVar46 + *(float *)(lVar25 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar55 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar42 < uVar40) {
        if (*(uint *)(lVar37 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar25 = lVar37 + lVar36 * 0x178;
          *(ulong *)(lVar25 + 0x70) =
               CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x70) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar25 + 0x70));
          *(float *)(lVar25 + 0x78) = fVar46 + *(float *)(lVar25 + 0x78);
          *(ulong *)(lVar25 + 0x98) =
               CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x98) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar25 + 0x98));
          *(float *)(lVar25 + 0xa0) = fVar46 + *(float *)(lVar25 + 0xa0);
          *(ulong *)(lVar25 + 0xc0) =
               CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0xc0) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar25 + 0xc0));
          *(float *)(lVar25 + 200) = fVar46 + *(float *)(lVar25 + 200);
          *(ulong *)(lVar25 + 0xe8) =
               CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0xe8) >> 0x20),
                        fVar60 + (float)*(undefined8 *)(lVar25 + 0xe8));
          *(float *)(lVar25 + 0xf0) = fVar46 + *(float *)(lVar25 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar40 = *(uint *)(lVar37 + 0x18);
  }
  puVar7 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar47 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar24 = lVar37 + lVar36 * 0x178;
  *(undefined8 *)(lVar24 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar24 + 0x78) = uVar47;
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar24 = lVar37 + lVar36 * 0x178;
  *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar24 + 0xa0) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar24 + 200) = uVar47;
  uVar47 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar24 + 0xf0) = uVar47;
  *(undefined1 *)(lVar25 + 0x194) = 0;
LAB_036adf28:
  if (iVar12 == 0) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar27)();
  }
  else if (iVar12 == 1) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar25 + lVar36 * 0x178;
  uVar19 = *(undefined8 *)(lVar25 + 0x11c);
  *(undefined8 *)(lVar25 + 0x11c) =
       CONCAT44(fVar50 + (float)((ulong)uVar19 >> 0x20),fVar60 + (float)uVar19);
  *(float *)(lVar25 + 0x124) = fVar46 + *(float *)(lVar25 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar25 + lVar36 * 0x178;
  *(ulong *)(lVar25 + 0x110) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x110) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar25 + 0x110));
  *(float *)(lVar25 + 0x118) = fVar46 + *(float *)(lVar25 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar25 + lVar36 * 0x178;
  *(ulong *)(lVar25 + 0x128) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar25 + 0x128) >> 0x20),
                fVar60 + (float)*(undefined8 *)(lVar25 + 0x128));
  *(float *)(lVar25 + 0x130) = fVar46 + *(float *)(lVar25 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar25 + lVar36 * 0x178;
  *(float *)(lVar25 + 0x134) = fVar60 + *(float *)(lVar25 + 0x134);
  *(ulong *)(lVar25 + 0x138) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar25 + 0x138) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar25 + 0x138));
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x38), lVar24 == 0)) goto LAB_036afadc;
  uVar40 = *(uint *)(lVar24 + 0x18);
  if (uVar40 <= uVar42) goto LAB_036afbe8;
  lVar31 = lVar24 + lVar36 * 0x178;
  uVar48 = CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar31 + 0x140) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar31 + 0x140));
  fVar63 = fVar50 + *(float *)(lVar31 + 0x150);
  uVar49 = (ulong)(uint)fVar63;
  uVar52 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar31 + 0x148) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar31 + 0x148));
  *(float *)(lVar31 + 0x150) = fVar63;
  *(ulong *)(lVar31 + 0x140) = uVar48;
  *(ulong *)(lVar31 + 0x148) = uVar52;
  if (uVar55 == uVar51) {
    uVar51 = *unaff_x20 - 1;
    if (uVar42 == uVar51) goto LAB_036ae17c;
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar51) goto LAB_036afbe8;
    lVar31 = (long)(int)uVar51;
    lVar32 = lVar25 + lVar31 * 0x5c;
    uVar52 = (ulong)(uint)*(float *)(lVar32 + 0x58);
    fVar63 = fVar50 + *(float *)(lVar32 + 0x54);
    uVar48 = (ulong)(uint)fVar63;
    fVar58 = fVar60 + *(float *)(lVar32 + 0x58);
    uVar49 = (ulong)(uint)fVar58;
    *(ulong *)(lVar32 + 0x4c) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                  fVar50 + (float)*(undefined8 *)(lVar32 + 0x4c));
    *(float *)(lVar32 + 0x54) = fVar63;
    *(float *)(lVar32 + 0x58) = fVar58;
    if (uVar40 <= *(uint *)(lVar32 + 0x34)) goto LAB_036afbe8;
    uVar47 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
    lVar25 = lVar25 + lVar31 * 0x5c;
    *(float *)(lVar25 + 0x70) = fVar63;
    *(undefined4 *)(lVar25 + 0x6c) = uVar47;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar51) goto LAB_036afbe8;
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    uVar51 = *(uint *)(lVar24 + lVar31 * 0x5c + 0x40);
    if (*(uint *)(lVar25 + 0x18) <= uVar51) goto LAB_036afbe8;
    lVar24 = lVar24 + lVar31 * 0x5c;
    *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar25 + (long)(int)uVar51 * 0x178 + 0x128);
    *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    uVar51 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar42 == uVar51) {
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar31 = lVar24 + lVar34 * 0x5c;
      uVar52 = (ulong)(uint)*(float *)(lVar31 + 0x58);
      uVar48 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar31 + 0x4c) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar31 + 0x4c));
      fVar63 = fVar50 + *(float *)(lVar31 + 0x54);
      fVar60 = fVar60 + *(float *)(lVar31 + 0x58);
      uVar49 = (ulong)(uint)fVar60;
      *(ulong *)(lVar31 + 0x4c) = uVar48;
      *(float *)(lVar31 + 0x54) = fVar63;
      *(float *)(lVar31 + 0x58) = fVar60;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(lVar31 + 0x34)) goto LAB_036afbe8;
      uVar47 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar31 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar34 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar63;
      *(undefined4 *)(lVar24 + 0x6c) = uVar47;
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar24 = *(long *)(lVar25 + 0x50), lVar24 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_036afadc;
      uVar51 = *(uint *)(lVar24 + lVar34 * 0x5c + 0x40);
      if (*(uint *)(lVar25 + 0x18) <= uVar51) goto LAB_036afbe8;
      lVar24 = lVar24 + lVar34 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar25 + (long)(int)uVar51 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar18 = FUN_02fddb80(uVar33,0);
  if (((((uVar18 & 1) == 0) && (1 < uVar33 - 0x2010)) && (uVar33 != 0xad)) && (uVar33 != 0x2d)) {
    if (bVar6) {
      if (((uVar15 != 1) && ((int)uVar42 < (int)(*(uint *)(lVar37 + 0x18) - 1))) &&
         (((int)uVar42 < (int)*unaff_x20 && ((uVar33 == 0x2019 || (uVar33 == 0x27)))))) {
        if (*(uint *)(lVar37 + 0x18) <= uVar15 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar37 + lVar39 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fddb80(uVar4,0);
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar37 + 0x18) <= uVar15) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar37 + lVar39 + -0x148);
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
      uVar18 = FUN_02fddab4(uVar33,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdb080(uVar33,0);
        if (((uVar33 != 0x200b) && ((uVar18 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar42 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fddb80(uVar33,0);
      iVar12 = (int)fStack0000000000000138;
      if ((uVar18 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar12 = uVar15 - 2;
    }
    lVar25 = *in_stack_00000190;
    if (lVar25 == 0) goto LAB_036afadc;
    lVar24 = *(long *)(lVar25 + 0x40);
    if (lVar24 == 0) goto LAB_036afadc;
    uVar51 = *(uint *)(lVar25 + 0x24);
    iVar13 = *(int *)(lVar24 + 0x18);
    if (iVar13 < (int)(uVar51 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar25 + 0x40),iVar13 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar25 = *in_stack_00000190;
      if (lVar25 == 0) goto LAB_036afadc;
    }
    lVar25 = *(long *)(lVar25 + 0x40);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar51) goto LAB_036afbe8;
    lVar25 = lVar25 + (long)(int)uVar51 * 0x18;
    *(long **)(lVar25 + 0x20) = unaff_x19;
    *(float *)(lVar25 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar25 + 0x2c) = iVar12;
    *(int *)(lVar25 + 0x30) = (iVar12 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar25 = unaff_x19[0x6d];
    if (lVar25 == 0) goto LAB_036afadc;
    lVar24 = *(long *)(lVar25 + 0x50);
    *(int *)(lVar25 + 0x24) = *(int *)(lVar25 + 0x24) + 1;
    if (lVar24 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar24 = lVar24 + lVar34 * 0x5c;
    bVar6 = false;
    fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
    *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000170._4_4_ = (float)uVar42;
    }
    if (uVar42 == *unaff_x20 - 1) {
      lVar25 = *in_stack_00000190;
      if (lVar25 == 0) goto LAB_036afadc;
      lVar24 = *(long *)(lVar25 + 0x40);
      if (lVar24 == 0) goto LAB_036afadc;
      uVar51 = *(uint *)(lVar25 + 0x24);
      iVar12 = *(int *)(lVar24 + 0x18);
      if (iVar12 < (int)(uVar51 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar25 + 0x40),iVar12 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar25 = *in_stack_00000190;
        if (lVar25 == 0) goto LAB_036afadc;
      }
      lVar25 = *(long *)(lVar25 + 0x40);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar51) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)uVar51 * 0x18;
      *(long **)(lVar25 + 0x20) = unaff_x19;
      *(float *)(lVar25 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar25 + 0x2c) = uVar42;
      *(uint *)(lVar25 + 0x30) = uVar15 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar25 = unaff_x19[0x6d];
      if (lVar25 == 0) goto LAB_036afadc;
      lVar24 = *(long *)(lVar25 + 0x50);
      *(int *)(lVar25 + 0x24) = *(int *)(lVar25 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar24 = lVar24 + lVar34 * 0x5c;
      fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar6 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar51 = *(uint *)(lVar25 + 0x18);
  if (uVar51 <= uVar42) goto LAB_036afbe8;
  if ((*(byte *)(lVar25 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_036ae3d8:
      if (uVar51 <= uVar15 - 2) goto LAB_036afbe8;
      lVar34 = *unaff_x19;
      uVar51 = *(uint *)(lVar25 + lVar39 + -0x330);
      uVar47 = *(undefined4 *)(lVar25 + lVar39 + -0x2f8);
LAB_036ae924:
      pcVar27 = *(code **)(lVar34 + 0x908);
LAB_036ae92c:
      uVar52 = (ulong)uVar51;
      uVar48 = (ulong)(uint)_bStack0000000000000078;
      uVar49 = (ulong)_bStack000000000000007c;
      (*pcVar27)(fStack0000000000000080,uVar48,uVar49,uVar52,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar47);
      puVar7 = PTR_DAT_03d9c920;
      lVar25 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar25 = *(long *)puVar7;
      }
LAB_036ae980:
      bVar10 = false;
      fVar44 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar10 = false;
    }
  }
  else {
    lVar25 = lVar25 + lVar36 * 0x178;
    iVar12 = *(int *)(lVar25 + 0x68);
    *(int *)(lVar25 + 0x16c) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar55)) ||
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
    uVar18 = FUN_02fdb080(uVar33,0);
    if ((uVar33 != 0x200b) && ((uVar18 & 1) == 0)) {
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar34 = *(long *)(lVar25 + 0x38), lVar34 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar34 + 0x18) <= uVar42) goto LAB_036afbe8;
      fVar63 = *(float *)(lVar34 + lVar36 * 0x178 + 0x160);
      if (fVar44 <= fVar63) {
        fVar44 = fVar63;
      }
      if (fStack0000000000000110 <= ABS(fVar57)) {
        fStack0000000000000110 = ABS(fVar57);
      }
      if (iVar12 != iStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *in_stack_00000190;
          if (lVar25 == 0) goto LAB_036afadc;
          lVar34 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar34 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar34 + 0x15a8);
      }
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar58 = *(float *)(lVar25 + lVar36 * 0x178 + 0x14c);
      fVar63 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar58 = fVar58 + fVar44 * fVar63;
      if (fVar58 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar58;
      }
      uVar48 = (ulong)(uint)fStack0000000000000114;
      iStack0000000000000074 = iVar12;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar33 == 0xd) || ((uVar33 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar42)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar42 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar33,0);
        if ((uVar18 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar25 = lVar25 + lVar36 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar25 + 0x160);
      fStack0000000000000080 = *(float *)(lVar25 + 0x11c);
      uVar49 = (ulong)(uint)fStack0000000000000080;
      bVar10 = fVar44 != 0.0;
      fVar63 = in_stack_00000090._4_4_;
      if (bVar10) {
        fVar63 = fVar44;
      }
      fVar44 = fVar63;
      uVar62 = *(undefined4 *)(lVar25 + 0x168);
      _bStack000000000000007c = 0;
      fVar63 = fVar57;
      if (bVar10) {
        fVar63 = fStack0000000000000110;
      }
      uVar48 = (ulong)(uint)fVar63;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar63;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        if (uVar42 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + lVar36 * 0x178;
          lVar34 = *unaff_x19;
          uVar51 = *(uint *)(lVar25 + 0x128);
          uVar47 = *(undefined4 *)(lVar25 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar42 == uVar29) || ((int)uVar5 <= (int)uVar42)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar33,0);
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        lVar34 = lVar36;
        uVar51 = uVar42;
        if (uVar33 == 0x200b || (uVar18 & 1) != 0) {
          lVar34 = lVar17;
          uVar51 = uVar5;
        }
        if (uVar51 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + lVar34 * 0x178;
          uVar51 = *(uint *)(lVar25 + 0x128);
          uVar47 = *(undefined4 *)(lVar25 + 0x160);
          pcVar27 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        uVar51 = *(uint *)(lVar25 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar42 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar15) goto LAB_036afbe8;
      uVar18 = FUN_036c0e18(uVar62,*(undefined4 *)(lVar25 + lVar39),0);
      if ((uVar18 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0)) {
          if (uVar42 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + lVar36 * 0x178;
            uVar52 = (ulong)*(uint *)(lVar25 + 0x128);
            uVar49 = (ulong)_bStack000000000000007c;
            uVar48 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar48,uVar49,uVar52,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar25 + 0x160));
            puVar7 = PTR_DAT_03d9c920;
            lVar25 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar25 = *(long *)puVar7;
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
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
  if (lVar30 == 0) goto LAB_036afadc;
  uVar51 = *(uint *)(lVar25 + lVar36 * 0x178 + 400);
  fVar63 = (float)FUN_0396ad04(lVar30 + 0x50,0);
  if ((uVar51 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar15 - 2) goto LAB_036afbe8;
      uVar51 = *(uint *)(lVar25 + lVar39 + -0x330);
      fVar50 = *(float *)(lVar25 + lVar39 + -0x30c);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar52 = (ulong)uVar51;
      uVar48 = (ulong)(uint)fStack00000000000000a4;
      uVar49 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar27)(fStack00000000000000a8,uVar48,uVar49,uVar52,
                 fStack00000000000000b0 * fVar63 + fVar50,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar34 = *(long *)(lVar25 + 0x38), lVar34 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar34 + 0x18) <= uVar42) goto LAB_036afbe8;
    *(int *)(lVar34 + lVar36 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar55)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar34 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar33 == 0xd) || ((uVar33 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar42)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar42 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar33,0);
        if ((uVar18 & 1) != 0) goto LAB_036aeb20;
        lVar25 = *in_stack_00000190;
        if (lVar25 == 0) goto LAB_036afadc;
      }
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar25 = lVar25 + lVar36 * 0x178;
      fStack000000000000004c = *(float *)(lVar25 + 0x60);
      fStack0000000000000040 = *(float *)(lVar25 + 0x14c);
      uVar48 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar25 + 0x11c);
      uVar49 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar25 + 0x160);
      fStack00000000000000a4 = fVar63 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar51 = *unaff_x20;
    if (uVar51 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        if (uVar42 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + lVar36 * 0x178;
          lVar17 = *unaff_x19;
          uVar51 = *(uint *)(lVar25 + 0x128);
          fVar50 = *(float *)(lVar25 + 0x14c);
LAB_036aec8c:
          pcVar27 = *(code **)(lVar17 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar42 == uVar29) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar33,0);
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        uVar51 = *(uint *)(lVar25 + 0x18);
        if (uVar33 == 0x200b || (uVar18 & 1) != 0) {
          if (uVar51 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar17 = lVar36;
          if (uVar51 <= uVar42) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar25 = lVar25 + lVar17 * 0x178;
        fVar50 = *(float *)(lVar25 + 0x14c);
        uVar51 = *(uint *)(lVar25 + 0x128);
        pcVar27 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar42 < (int)uVar51) {
      lVar25 = *in_stack_00000190;
      if ((lVar25 != 0) && (lVar34 = *(long *)(lVar25 + 0x38), lVar34 != 0)) {
        if (uVar15 < *(uint *)(lVar34 + 0x18)) {
          if (*(float *)(lVar34 + lVar39 + -0x108) == fStack000000000000004c) {
            fVar58 = *(float *)(lVar34 + lVar39 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar48 = (ulong)(uint)fStack0000000000000040;
            uVar18 = FUN_036c122c(fVar50 + fVar58,uVar48,0);
            if ((uVar18 & 1) != 0) {
              uVar51 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar25 = *in_stack_00000190;
            if (lVar25 == 0) goto LAB_036afadc;
          }
          lVar25 = *(long *)(lVar25 + 0x38);
          if (lVar25 != 0) {
            uVar51 = *(uint *)(lVar25 + 0x18);
            if ((int)uVar42 <= (int)uVar5) goto LAB_036aef20;
            if (uVar5 < uVar51) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar42 < (int)uVar51) {
      iVar12 = FUN_03922ce0(lVar30,0);
      if (*(uint *)(lVar37 + 0x18) <= uVar15) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar37 + lVar39 + -0x130);
      if (lVar25 == 0) goto LAB_036afadc;
      iVar13 = FUN_03922ce0(lVar25,0);
      if (iVar12 != iVar13) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        if (uVar15 - 2 < *(uint *)(lVar25 + 0x18)) {
          lVar17 = *unaff_x19;
          uVar51 = *(uint *)(lVar25 + lVar39 + -0x330);
          fVar50 = *(float *)(lVar25 + lVar39 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar51 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar51 <= uVar42) goto LAB_036afbe8;
  if ((*(byte *)(lVar25 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar49 = (ulong)in_stack_000000c0._4_4_;
      uVar48 = (ulong)(uint)fStack00000000000000ec;
      uVar52 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar48,uVar49,uVar52,fStack00000000000000d8,uVar49);
    }
LAB_036aefe8:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar55)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar25 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar33 == 0xd) || ((uVar33 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar42)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar42 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar33,0);
        if ((uVar18 & 1) != 0) goto LAB_036aefe8;
      }
      puVar7 = PTR_DAT_03d9c920;
      lVar17 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar17 = *(long *)puVar7;
      }
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      uVar51 = (uint)*(undefined8 *)(lVar25 + 0x18);
      if (uVar51 <= uVar42) goto LAB_036afbe8;
      lVar17 = *(long *)(lVar17 + 0xb8);
      lVar30 = lVar25 + lVar36 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar30 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar30 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar17 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar17 + 0x159c);
      in_stack_00001080 = *(float *)(lVar30 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar17 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar17 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar51 <= uVar42) goto LAB_036afbe8;
    lVar25 = lVar25 + lVar36 * 0x178;
    fVar63 = *(float *)(lVar25 + 0x128);
    fVar41 = *(float *)(lVar25 + 0x188);
    uVar16 = *(undefined8 *)(lVar25 + 0x17c);
    fVar54 = *(float *)(lVar25 + 0x184);
    uVar19 = *(undefined8 *)(lVar25 + 0x184);
    fVar46 = *(float *)(lVar25 + 0x18c);
    fVar50 = *(float *)(lVar25 + 0x11c);
    fVar58 = *(float *)(lVar25 + 0x148);
    fVar45 = *(float *)(lVar25 + 0x150);
    in_stack_00000198 = uVar16;
    fStack00000000000001a0 = fVar54;
    fStack00000000000001a4 = fVar41;
    in_stack_000001a8 = fVar46;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar18 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar25 = *(long *)PTR_DAT_03d9c888;
    if ((uVar18 & 1) == 0) {
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar25);
      }
      fVar63 = fVar63 + (float)in_stack_00001078;
      uVar49 = (ulong)(uint)fVar63;
      fVar50 = fVar50 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar58 = fVar58 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar52 = (ulong)(uint)fVar58;
      if (fVar50 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar50;
      }
      if (fVar45 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar45 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar63) {
        fStack00000000000000d4 = fVar63;
      }
      uVar48 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar58) {
        fStack00000000000000d8 = fVar58;
      }
    }
    else {
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar25);
      }
      fVar50 = (fVar50 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar52 = (ulong)(uint)fVar50;
      if (fVar45 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar45;
      }
      uVar48 = (ulong)(uint)fStack00000000000000ec;
      uVar49 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar58) {
        fStack00000000000000d8 = fVar58;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar48,uVar49,uVar52,fStack00000000000000d8,uVar49);
      fStack00000000000000ec = fVar45 - fVar46;
      fStack00000000000000d4 = fVar63 + fVar54;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar58 + fVar41;
      fStack00000000000000e8 = fVar50;
      in_stack_00001070 = uVar16;
      in_stack_00001078 = uVar19;
      in_stack_00001080 = fVar46;
    }
    if (((*unaff_x20 == 1) || (uVar42 == uVar29)) || (((int)uVar5 <= (int)uVar42 || (!bVar1)))) {
      uVar49 = (ulong)in_stack_000000c0._4_4_;
      uVar48 = (ulong)(uint)fStack00000000000000ec;
      uVar52 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar48,uVar49,uVar52,fStack00000000000000d8,uVar49);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar42 = *unaff_x20;
  lVar39 = lVar39 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar42 <= (int)uVar15;
  uVar15 = uVar15 + 1;
  uVar51 = uVar55;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar37 = *in_stack_00000190;
  if (lVar37 != 0) {
    iVar14 = uVar55 + 1;
    plVar38 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar37 + 0x18) = uVar42;
    lVar39 = unaff_x19[0xd4];
    *(int *)(lVar37 + 0x2c) = iVar14;
    if ((int)uVar42 < 1 || fStack00000000000000e4 == 0.0) {
      fStack00000000000000e4 = 1.4013e-45;
    }
    *(int *)(lVar37 + 0x1c) = (int)lVar39;
    *(float *)(lVar37 + 0x24) = fStack00000000000000e4;
    *(int *)(lVar37 + 0x30) = (int)unaff_x19[0x96] + 1;
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
    lVar37 = unaff_x19[0xdf];
    if (lVar37 != 0) {
      (**(code **)(lVar37 + 0x18))
                (*(undefined8 *)(lVar37 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar37 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar14 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar14 != 0x19) {
      lVar37 = unaff_x19[0xe5];
      if (lVar37 == 0) goto LAB_036afadc;
      uVar42 = FUN_03afacb8(lVar37,0);
      FUN_03afacf4(lVar37,uVar42 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar37 = *(long *)(*in_stack_00000190 + 0x60), lVar37 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar38 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar37 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar37 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
        if (*(int *)(lVar37 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
            if (*(int *)(lVar37 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
                if (*(int *)(lVar37 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar37 = *(long *)(unaff_x19[0x6d] + 0x60), lVar37 != 0)) {
                    if (*(int *)(lVar37 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar37 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar19 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar42 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar37 = *in_stack_00000190;
                              if (lVar37 != 0) {
                                lVar25 = 0;
                                lVar39 = 0;
                                do {
                                  uVar18 = lVar39 + 1;
                                  if ((long)*(int *)(lVar37 + 0x34) <= (long)uVar18)
                                  goto LAB_036acd60;
                                  lVar37 = *(long *)(lVar37 + 0x60);
                                  if (lVar37 == 0) break;
                                  if (*(int *)(*plVar38 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  FUN_036fa544(lVar37 + lVar25 + 0x70,0);
                                  lVar37 = unaff_x19[0xe1];
                                  if (lVar37 == 0) break;
                                  if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  uVar16 = *(undefined8 *)(lVar37 + lVar39 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar20 = FUN_03922f24(uVar16,0,0);
                                  if ((uVar20 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar37 = *(long *)(*in_stack_00000190 + 0x60), lVar37 == 0
                                         )) break;
                                      if (*(int *)(*plVar38 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                      FUN_036fa678(lVar37 + lVar25 + 0x70,1,0);
                                    }
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if (lVar37 == 0) break;
                                    lVar37 = FUN_03702ba4(lVar37,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar37 == 0) break;
                                    FUN_0390262c(lVar37,*(undefined8 *)(lVar17 + lVar25 + 0x80),0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if (lVar37 == 0) break;
                                    lVar37 = FUN_03702ba4(lVar37,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar37 == 0) break;
                                    FUN_03902830(lVar37,*(undefined8 *)(lVar17 + lVar25 + 0x98),0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if (lVar37 == 0) break;
                                    lVar37 = FUN_03702ba4(lVar37,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar37 == 0) break;
                                    FUN_039028dc(lVar37,*(undefined8 *)(lVar17 + lVar25 + 0xa0),0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if (lVar37 == 0) break;
                                    lVar37 = FUN_03702ba4(lVar37,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar17 = *(long *)(*in_stack_00000190 + 0x60), lVar17 == 0))
                                    break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar37 == 0) break;
                                    FUN_03902a3c(lVar37,*(undefined8 *)(lVar17 + lVar25 + 0xa8),0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if ((lVar37 == 0) ||
                                       (lVar37 = FUN_03702ba4(lVar37,0), lVar37 == 0)) break;
                                    FUN_03904ddc(lVar37,0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if (lVar37 == 0) break;
                                    lVar37 = FUN_039add2c(lVar37,0);
                                    lVar17 = unaff_x19[0xe1];
                                    if (lVar17 == 0) break;
                                    if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar17 = *(long *)(lVar17 + lVar39 * 8 + 0x28);
                                    if ((lVar17 == 0) ||
                                       (uVar16 = FUN_03702ba4(lVar17,0), lVar37 == 0)) break;
                                    FUN_03af8c9c(lVar37,uVar16,0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if ((lVar37 == 0) ||
                                       (lVar37 = FUN_039add2c(lVar37,0), lVar37 == 0)) break;
                                    FUN_03af8894(uVar19,uVar48,uVar49,uVar52,lVar37,0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar37 = *(long *)(lVar37 + lVar39 * 8 + 0x28);
                                    if ((lVar37 == 0) ||
                                       (lVar37 = FUN_039add2c(lVar37,0), lVar37 == 0)) break;
                                    FUN_03af87d0(lVar37,uVar42 & 1,0);
                                    lVar37 = unaff_x19[0xe1];
                                    if (lVar37 == 0) break;
                                    if (*(uint *)(lVar37 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    plVar35 = *(long **)(lVar37 + lVar39 * 8 + 0x28);
                                    uVar15 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar35 == (long *)0x0) break;
                                    (**(code **)(*plVar35 + 0x2c8))
                                              (plVar35,uVar15 & 1,*(undefined8 *)(*plVar35 + 0x2d0))
                                    ;
                                  }
                                  lVar37 = *in_stack_00000190;
                                  lVar39 = lVar39 + 1;
                                  lVar25 = lVar25 + 0x50;
                                } while (lVar37 != 0);
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


