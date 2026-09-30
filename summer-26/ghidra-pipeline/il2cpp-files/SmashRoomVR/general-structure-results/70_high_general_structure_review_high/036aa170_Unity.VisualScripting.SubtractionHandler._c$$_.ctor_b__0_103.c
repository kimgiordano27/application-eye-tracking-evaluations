/*
FUNCTION_NAME: Unity.VisualScripting.SubtractionHandler.<>c$$<.ctor>b__0_103
ENTRY_POINT: 036aa170
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


void Unity_VisualScripting_SubtractionHandler_<>c__<_ctor>b__0_103(long param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  undefined4 *puVar24;
  long lVar25;
  long *in_x9;
  long lVar26;
  float *pfVar27;
  code *pcVar28;
  float *pfVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar36;
  long *unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar37;
  long lVar38;
  long *plVar39;
  uint unaff_w26;
  long lVar40;
  long *unaff_x28;
  uint uVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  ulong uVar49;
  ulong uVar50;
  float fVar51;
  uint uVar52;
  ulong uVar53;
  float unaff_s8;
  float fVar54;
  uint uVar55;
  float fVar56;
  ulong unaff_d9;
  float fVar57;
  float fVar58;
  float fVar59;
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
  float in_stack_00000098;
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
  float in_stack_00000100;
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
  
  while( true ) {
    lVar38 = *in_x9;
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (lVar38 == 0) break;
    fVar43 = (float)FUN_03900954(lVar38,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
    if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) break;
    fVar57 = *(float *)(*in_stack_00000178 + 0x1b0);
    fVar44 = (float)FUN_03900954(*in_stack_00000168,
                                 *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
    fVar44 = fVar44 * fVar43 * fVar57 * 0.25;
    if (fVar43 < in_stack_00000170._4_4_ + fVar44) {
      in_stack_00000170._4_4_ = fVar43 - fVar44;
    }
    do {
      do {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fStack00000000000000e4 = *(float *)(*in_stack_00000178 + 0x1b4);
        fVar43 = unaff_s13;
        uVar20 = in_stack_00001088;
LAB_036aa254:
        fStack0000000000000124 = *(float *)(unaff_x19 + 200);
        fVar57 = (float)FUN_0396af78(&stack0x00001050,0);
        fStack0000000000000124 =
             fStack0000000000000124 +
             (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             fVar43 * (unaff_s8 + ((fVar57 - in_stack_00000170._4_4_) - fVar44));
        fVar57 = (float)FUN_0396af80(&stack0x00001050,0);
        fVar63 = *(float *)((long)unaff_x19 + 0x61c) +
                 ((in_stack_00000180 + fVar43 * ((float)unaff_d9 + in_stack_00000170._4_4_ + fVar57)
                  ) - *(float *)(unaff_x19 + 0x9b));
        fVar57 = (float)FUN_0396af70(&stack0x00001050,0);
        fVar58 = fVar63 - fVar43 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar57);
        fVar57 = (float)FUN_0396af68(&stack0x00001050,0);
        fVar51 = fStack0000000000000124 +
                 (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                 fVar43 * (fVar44 + fVar44 +
                          in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar57);
        fVar57 = fStack0000000000000124;
        fVar46 = fVar51;
        if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
          fVar45 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
          fVar57 = (float)FUN_0396af80(&stack0x00001050,0);
          fVar54 = fVar45 * fVar43 * (fVar44 + in_stack_00000170._4_4_ + fVar57);
          fVar57 = (float)FUN_0396af80(&stack0x00001050,0);
          fVar46 = (float)FUN_0396af70(&stack0x00001050,0);
          fVar63 = fVar63 + 0.0;
          fVar58 = fVar58 + 0.0;
          fVar60 = fStack0000000000000124 + fVar54;
          fVar45 = fVar45 * fVar43 * (((fVar57 - fVar46) - in_stack_00000170._4_4_) - fVar44);
          fVar46 = fVar51 + fVar45;
          fVar47 = (fVar54 - fVar45) * 0.5;
          fStack0000000000000124 = (fStack0000000000000124 + fVar45) - fVar47;
          fVar51 = (fVar51 + fVar54) - fVar47;
          fVar57 = fVar60 - fVar47;
          fVar46 = fVar46 - fVar47;
        }
        if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
          fVar45 = 0.0;
          fVar47 = 0.0;
          fVar54 = 0.0;
          fStack0000000000000110 = 0.0;
          fVar60 = fVar58;
          fStack0000000000000114 = fVar63;
        }
        else {
          thunk_FUN_03910e24(_fStack0000000000000080,0);
          fVar61 = (fVar58 + fVar63) * 0.5;
          fVar59 = (fVar51 + fStack0000000000000124) * 0.5;
          fVar63 = fVar63 - fVar61;
          fStack0000000000000110 = 0.0;
          fVar56 = fVar63;
          fVar57 = (float)FUN_03911ddc(fVar57 - fVar59,_fStack0000000000000080,0);
          fVar57 = fVar59 + fVar57;
          fStack0000000000000110 = fStack0000000000000110 + 0.0;
          fVar58 = fVar58 - fVar61;
          fVar45 = 0.0;
          fVar60 = fVar58;
          fStack0000000000000124 =
               (float)FUN_03911ddc(fStack0000000000000124 - fVar59,_fStack0000000000000080,0);
          fStack0000000000000124 = fVar59 + fStack0000000000000124;
          fVar45 = fVar45 + 0.0;
          fVar54 = 0.0;
          fVar51 = (float)FUN_03911ddc(fVar51 - fVar59,_fStack0000000000000080,0);
          fVar51 = fVar59 + fVar51;
          fVar63 = fVar61 + fVar63;
          fVar54 = fVar54 + 0.0;
          fVar47 = 0.0;
          fVar46 = (float)FUN_03911ddc(fVar46 - fVar59,_fStack0000000000000080,0);
          fVar46 = fVar59 + fVar46;
          fVar58 = fVar61 + fVar58;
          fVar47 = fVar47 + 0.0;
          fVar60 = fVar61 + fVar60;
          fStack0000000000000114 = fVar61 + fVar56;
        }
        if (*unaff_x28 == 0) goto LAB_036afadc;
        lVar38 = *(long *)(*unaff_x28 + 0x38);
        uVar19 = (ulong)(uint)fVar43;
        if (lVar38 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar38 + 0x11c) = fStack0000000000000124;
        *(float *)(lVar38 + 0x120) = fVar60;
        *(float *)(lVar38 + 0x124) = fVar45;
        if ((*unaff_x28 == 0) || (lVar38 = *(long *)(*unaff_x28 + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar38 + 0x110) = fVar57;
        *(float *)(lVar38 + 0x114) = fStack0000000000000114;
        *(float *)(lVar38 + 0x118) = fStack0000000000000110;
        if ((*unaff_x28 == 0) || (lVar38 = *(long *)(*unaff_x28 + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar38 + 0x128) = fVar51;
        *(float *)(lVar38 + 300) = fVar63;
        *(float *)(lVar38 + 0x130) = fVar54;
        if ((*unaff_x28 == 0) || (lVar38 = *(long *)(*unaff_x28 + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
        *(float *)(lVar38 + 0x134) = fVar46;
        *(float *)(lVar38 + 0x138) = fVar58;
        *(float *)(lVar38 + 0x13c) = fVar47;
        if ((*unaff_x28 == 0) || (lVar38 = *(long *)(*unaff_x28 + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        uVar42 = *unaff_x20;
        lVar40 = (long)(int)uVar42;
        if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
        lVar26 = lVar38 + lVar40 * unaff_x24;
        *(int *)(lVar26 + 0x140) = (int)unaff_x19[200];
        fVar63 = *(float *)(unaff_x19 + 0x9b);
        uVar49 = (ulong)(uint)fVar63;
        fVar46 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar26 + 0x15c) =
             (fVar51 - fStack0000000000000124) / (fStack0000000000000114 - fVar60);
        *(float *)(lVar26 + 0x14c) = (in_stack_00000180 - fVar63) + fVar46;
        in_stack_00000130 = in_stack_00000130 * fVar43;
        if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          in_stack_00000130 = in_stack_00000130 / in_stack_00000150;
          in_stack_00000128._4_4_ = (in_stack_00000128._4_4_ * fVar43) / in_stack_00000150;
        }
        else {
          in_stack_00000128._4_4_ = in_stack_00000128._4_4_ * fVar43;
        }
        uVar16 = *(uint *)(unaff_x19 + 0x93);
        if ((unaff_w21 == 0) || (uVar42 == uVar16)) {
          in_stack_00000128._4_4_ = fVar46 + in_stack_00000128._4_4_;
          in_stack_00000130 = fVar46 + in_stack_00000130;
          fVar58 = in_stack_00000128._4_4_;
          fVar51 = in_stack_00000130;
          if (fVar46 != 0.0) {
            fVar51 = (in_stack_00000130 - fVar46) / *(float *)((long)unaff_x19 + 0x404);
            fVar58 = (in_stack_00000128._4_4_ - fVar46) / *(float *)((long)unaff_x19 + 0x404);
            if (fVar51 <= in_stack_00000130) {
              fVar51 = in_stack_00000130;
            }
            if (in_stack_00000128._4_4_ <= fVar58) {
              fVar58 = in_stack_00000128._4_4_;
            }
          }
          lVar38 = lVar38 + lVar40 * unaff_x24;
          fVar46 = fVar51;
          if (fVar51 <= *(float *)(unaff_x19 + 0x99)) {
            fVar46 = *(float *)(unaff_x19 + 0x99);
          }
          fVar45 = fVar58;
          if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar58) {
            fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
          }
          *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
          *(float *)(unaff_x19 + 0x99) = fVar46;
          *(float *)(lVar38 + 0x154) = fVar51;
          *(float *)(lVar38 + 0x158) = fVar58;
          *(float *)(lVar38 + 0x148) = in_stack_00000130 - fVar63;
          *(float *)(unaff_x19 + 0x98) = in_stack_00000130 - fVar63;
          *(float *)(lVar38 + 0x150) = in_stack_00000128._4_4_ - fVar63;
          *(float *)((long)unaff_x19 + 0x4c4) = in_stack_00000128._4_4_ - fVar63;
          if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
            *(float *)(unaff_x19 + 0x97) = fVar46;
            if (unaff_x19[0x20] == 0) goto LAB_036afadc;
            fVar46 = *(float *)((long)unaff_x19 + 0x4bc);
            fVar51 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
            in_stack_00000150 = (fVar43 * fVar51) / in_stack_00000150;
            uVar49 = (ulong)*(uint *)(unaff_x19 + 0x9b);
            if (fVar46 <= in_stack_00000150) {
              fVar46 = in_stack_00000150;
            }
            *(float *)((long)unaff_x19 + 0x4bc) = fVar46;
          }
          if ((float)uVar49 == 0.0) {
            fVar46 = *(float *)(in_stack_00000088 + 0x208);
            if (*(float *)(in_stack_00000088 + 0x208) <= in_stack_00000130) {
              fVar46 = in_stack_00000130;
            }
            *(float *)(in_stack_00000088 + 0x208) = fVar46;
          }
        }
        else {
          fVar46 = *(float *)(unaff_x19 + 0x99);
          lVar38 = lVar38 + lVar40 * unaff_x24;
          *(float *)(lVar38 + 0x154) = fVar46;
          fVar51 = *(float *)((long)unaff_x19 + 0x4cc);
          fVar46 = fVar46 - fVar63;
          *(float *)(lVar38 + 0x148) = fVar46;
          *(float *)(lVar38 + 0x158) = fVar51;
          *(float *)(unaff_x19 + 0x98) = fVar46;
          fVar51 = fVar51 - fVar63;
          *(float *)(lVar38 + 0x150) = fVar51;
          *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
        }
        lVar38 = *unaff_x28;
        if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0)) goto LAB_036afadc;
        uVar52 = *unaff_x20;
        if (*(uint *)(lVar40 + 0x18) <= uVar52) goto LAB_036afbe8;
        lVar40 = lVar40 + (long)(int)uVar52 * unaff_x24;
        *(undefined1 *)(lVar40 + 0x194) = 0;
        uVar55 = *(uint *)(unaff_x19 + 0x4f);
        iVar15 = (int)unaff_x24;
        uVar41 = in_stack_0000109c;
        if (((in_stack_0000109c == 9) ||
            ((((unaff_w21 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)) &&
             (in_stack_0000109c != 0xad)))) ||
           (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
            (*(int *)((long)unaff_x19 + 0x644) == 1)))) {
          *(undefined1 *)(lVar40 + 0x194) = 1;
          pfVar27 = _fStack00000000000000a8;
          pfVar29 = _fStack00000000000000b0;
          if (unaff_w23 != 0) {
            lVar38 = *(long *)(lVar38 + 0x50);
            if (lVar38 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
            lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            pfVar29 = (float *)(lVar38 + 0x60);
            pfVar27 = (float *)(lVar38 + 100);
          }
          fVar51 = *pfVar29;
          fVar63 = *pfVar27;
          fVar46 = *(float *)(unaff_x19 + 0x6c);
          fVar58 = *(float *)(unaff_x19 + 200);
          in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar51) - fVar63;
          bVar10 = true;
          if ((fVar46 <= in_stack_00000108._4_4_) && (bVar10 = false, !NAN(fVar46))) {
            bVar10 = fVar46 == -1.0;
          }
          if (!bVar10) {
            in_stack_00000108._4_4_ = fVar46;
          }
          fVar46 = 0.0;
          if ((char)unaff_x19[0x1e] == '\0') {
            fVar46 = (float)FUN_0396af88(&stack0x00001050,0);
            uVar49 = (ulong)*(uint *)(unaff_x19 + 0x9b);
          }
          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar60 = *(float *)((long)unaff_x19 + 0x4cc);
          if (in_stack_0000109c != 0xad) {
            in_stack_00000100 = fVar43;
          }
          fVar54 = (float)uVar49;
          fVar47 = 0.0;
          if ((0.0 < fVar54) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          uVar52 = *unaff_x20;
          fVar47 = (*(float *)(unaff_x19 + 0x97) - (fVar60 - fVar54)) + fVar47;
          if (fStack00000000000000c8 < fVar47) {
            if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
              *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
            }
            puVar8 = PTR_DAT_03d9c920;
            in_stack_00001088 = DAT_00b92750;
            if ((char)unaff_x19[0x47] != '\0') {
              fVar56 = *(float *)(unaff_x19 + 0x59);
              if (((fVar56 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar54)) &&
                 (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar43 = *(float *)((long)unaff_x19 + 700) +
                         ((in_stack_00000018._4_4_ - fVar47) / (float)(int)unaff_x19[0x95]) /
                         in_stack_00000058._4_4_;
                if (fVar43 <= fVar56) {
                  fVar43 = fVar56;
                }
                goto LAB_036ad184;
              }
              fVar54 = *(float *)((long)unaff_x19 + 0x1e4);
              fVar47 = *(float *)(unaff_x19 + 0x4a);
              uVar49 = (ulong)(uint)fVar47;
              if ((fVar47 < fVar54) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                fVar43 = (fVar54 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                if (fVar43 <= DAT_00b55428) {
                  fVar43 = DAT_00b55428;
                }
                fVar44 = (fVar54 - fVar43) * 20.0 + 0.5;
                *(float *)((long)unaff_x19 + 0x23c) = fVar54;
                fVar43 = DAT_00b556b4;
                if (fVar44 != INFINITY) {
                  fVar43 = (float)(int)fVar44 / 20.0;
                }
                if (fVar43 <= fVar47) {
                  fVar43 = fVar47;
                }
                goto LAB_036acc94;
              }
            }
            switch((int)unaff_x19[0x5c]) {
            case 1:
              lVar38 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar38 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar38 = *(long *)puVar8;
              }
              lVar40 = *(long *)(lVar38 + 0xb8);
              if (*(int *)(lVar40 + 0x1580) == 0) {
LAB_036acbbc:
                in_stack_00001088 = DAT_00b92750;
                unaff_x20[0] = 0;
                unaff_x20[1] = 0;
                in_stack_00001068 = 0xffffffff;
              }
              else {
                if (*(int *)(lVar38 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar40 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                }
                FUN_0217900c(&stack0x000010a0,lVar40 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
                memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
                iVar12 = FUN_036ecf20();
LAB_036ab020:
                iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
                *(int *)((long)unaff_x19 + 0x494) = iVar13;
                in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
                in_stack_00001068 = iVar12 - 1;
                in_stack_00001088 = CONCAT44(0x2026,iVar13);
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
                fVar44 = *(float *)(unaff_x19 + 0x99);
                if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                in_stack_00001068 = FUN_036ecf20();
                if (fStack00000000000000c8 < fVar44 - fVar60) break;
                *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
                uVar49 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                lVar38 = NEON_rev64(uVar49,4);
                unaff_x19[0x99] = lVar38;
                *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
                *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                in_stack_00001088 = uVar20;
              }
              goto LAB_036a9250;
            case 6:
              if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              in_stack_00001068 = FUN_036ecf20();
              lVar38 = unaff_x19[0x5d];
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar19 = FUN_0391f968(lVar38,0,0);
              if ((uVar19 & 1) != 0) {
                plVar39 = (long *)unaff_x19[0x5d];
                uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar39 == (long *)0x0) goto LAB_036afadc;
                (**(code **)(*plVar39 + 0x558))(plVar39,uVar20,*(undefined8 *)(*plVar39 + 0x560));
                lVar38 = unaff_x19[0x5d];
                if (lVar38 == 0) goto LAB_036afadc;
                *(int *)(lVar38 + 0x400) = (int)unaff_x19[0x80];
                FUN_036dfca8(lVar38,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                plVar39 = (long *)unaff_x19[0x5d];
                if (plVar39 == (long *)0x0) goto LAB_036afadc;
                (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              }
            }
LAB_036aad90:
            in_stack_00001088 = CONCAT44(3,uVar52);
            goto LAB_036a9250;
          }
switchD_036aaa24_caseD_2:
          puVar8 = PTR_DAT_03d9c920;
          fVar60 = 1.0 - fVar45;
          uVar49 = (ulong)(uint)fVar60;
          fVar58 = ABS(fVar58) + fVar46 * fVar60 * in_stack_00000100;
          fVar46 = 1.0;
          if ((uVar55 & 0x18) != 0) {
            fVar46 = DAT_00b55374;
          }
          fVar47 = fVar46 * in_stack_00000108._4_4_;
          if (fVar58 <= fVar47) {
LAB_036ab54c:
            if (in_stack_0000109c == 0xad) {
              if ((*in_stack_00000190 != 0) &&
                 (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 != 0)) {
                if (*unaff_x20 < *(uint *)(lVar38 + 0x18)) {
                  *(undefined1 *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
                  goto LAB_036ab6c0;
                }
                goto LAB_036afbe8;
              }
              goto LAB_036afadc;
            }
            if (in_stack_0000109c != 9) {
              if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                (**(code **)(*unaff_x19 + 0x8c8))(fVar47,fVar44);
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
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar38 = *(long *)(unaff_x19[0x6d] + 0x50), lVar38 != 0)) {
                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar38 + 0x18)) {
                  lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  in_stack_00000068 = 0;
                  *(float *)(lVar38 + 0x60) = fVar51;
                  *(float *)(lVar38 + 100) = fVar63;
                  goto LAB_036ab6c0;
                }
                goto LAB_036afbe8;
              }
              goto LAB_036afadc;
            }
            lVar38 = *in_stack_00000190;
            if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0))
            goto LAB_036afadc;
            uVar52 = *unaff_x20;
            if (uVar52 < *(uint *)(lVar40 + 0x18)) {
              *(undefined1 *)(lVar40 + (long)(int)uVar52 * unaff_x24 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x4a4) = uVar52;
              lVar40 = *(long *)(lVar38 + 0x50);
              if (lVar40 != 0) {
                if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar40 + 0x18)) {
                  lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                  *(int *)(lVar40 + 0x2c) = *(int *)(lVar40 + 0x2c) + 1;
                  goto LAB_036ab5c8;
                }
                goto LAB_036afbe8;
              }
              goto LAB_036afadc;
            }
            goto LAB_036afbe8;
          }
          if (((char)unaff_x19[0x5b] == '\0') || (uVar52 == *(uint *)(unaff_x19 + 0x93))) {
            if (((char)unaff_x19[0x47] != '\0') &&
               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
              fVar47 = *(float *)(unaff_x19 + 0x5a) / 100.0;
              if (fVar45 < fVar47) {
                fVar43 = fVar58 / fVar60;
                if (fVar45 <= 0.0) {
                  fVar43 = fVar58;
                }
                fVar45 = fVar45 + (fVar58 - fVar46 * (in_stack_00000108._4_4_ + DAT_00b5556c)) /
                                  fVar43;
                goto LAB_036afb6c;
              }
              fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
              uVar49 = (ulong)(uint)fVar45;
              fVar47 = *(float *)(unaff_x19 + 0x4a);
              if (fVar45 <= fVar47) goto LAB_036aab40;
LAB_036afae0:
              fVar43 = (fVar45 - *(float *)(unaff_x19 + 0x48)) * 0.5;
              if (fVar43 <= DAT_00b55428) {
                fVar43 = DAT_00b55428;
              }
              *(float *)((long)unaff_x19 + 0x23c) = fVar45;
              fVar44 = (fVar45 - fVar43) * 20.0 + 0.5;
              fVar43 = DAT_00b556b4;
              if (fVar44 != INFINITY) {
                fVar43 = (float)(int)fVar44 / 20.0;
              }
              if (fVar43 <= fVar47) {
                fVar43 = fVar47;
              }
LAB_036acc94:
              *(float *)((long)unaff_x19 + 0x1e4) = fVar43;
              return;
            }
LAB_036aab40:
            iVar12 = (int)unaff_x19[0x5c];
            if (iVar12 == 1) {
              lVar38 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar38 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar38 = *(long *)puVar8;
              }
              lVar40 = *(long *)(lVar38 + 0xb8);
              if (*(int *)(lVar40 + 0x1580) != 0) {
                if (*(int *)(lVar38 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar40 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                }
                FUN_0217900c(&stack0x000010a0,lVar40 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
                memcpy(&stack0x00000550,&stack0x000010a0,0x378);
                goto LAB_036ab014;
              }
              goto LAB_036acbbc;
            }
            if (iVar12 != 6) {
              if (iVar12 == 3) {
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
            lVar38 = unaff_x19[0x5d];
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar19 = FUN_0391f968(lVar38,0,0);
            if ((uVar19 & 1) != 0) {
              plVar39 = (long *)unaff_x19[0x5d];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar39 == (long *)0x0) goto LAB_036afadc;
              (**(code **)(*plVar39 + 0x558))(plVar39,uVar20,*(undefined8 *)(*plVar39 + 0x560));
              lVar38 = unaff_x19[0x5d];
              if (lVar38 == 0) goto LAB_036afadc;
              *(int *)(lVar38 + 0x400) = (int)unaff_x19[0x80];
              FUN_036dfca8(lVar38,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar39 = (long *)unaff_x19[0x5d];
              if (plVar39 == (long *)0x0) goto LAB_036afadc;
              (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
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
              lVar38 = *in_stack_00000190;
              if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0))
              goto LAB_036afadc;
              if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
              fVar45 = *(float *)(unaff_x19 + 0x9b);
              fVar60 = 0.0;
              if ((0.0 < fVar45) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                fVar60 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
              }
              fVar60 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                       *(float *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                       (fVar60 - *(float *)((long)unaff_x19 + 0x4cc)) +
                       in_stack_00000058._4_4_ *
                       (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
            }
            else {
              lVar38 = unaff_x19[0x6d];
              *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
              if (lVar38 == 0) goto LAB_036afadc;
              fVar45 = *(float *)(unaff_x19 + 0x9b);
              fVar60 = *(float *)(unaff_x19 + 0x58) +
                       in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
            }
            puVar8 = PTR_DAT_03d9c920;
            lVar38 = *(long *)(lVar38 + 0x38);
            if (lVar38 == 0) goto LAB_036afadc;
            uVar30 = *(uint *)((long)unaff_x19 + 0x494);
            if ((*(uint *)(lVar38 + 0x18) <= uVar30) ||
               (uVar6 = uVar30 - 1, *(uint *)(lVar38 + 0x18) <= uVar6)) goto LAB_036afbe8;
            uVar49 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x97));
            fVar60 = (fVar60 + *(float *)(unaff_x19 + 0x97) + fVar45) -
                     *(float *)(lVar38 + (long)(int)uVar30 * unaff_x24 + 0x158);
            if (((bStack000000000000007c & 1) != 0 ||
                 *(short *)(lVar38 + (long)(int)uVar6 * (long)iVar15 + 0x20) != 0xad) ||
               ((fStack00000000000000c8 <= fVar60 && ((int)unaff_x19[0x5c] != 0)))) {
              if (*(short *)(lVar38 + (long)(int)uVar30 * unaff_x24 + 0x20) == 0xad) {
                bStack000000000000007c = 1;
                in_stack_00001088 = uVar20;
              }
              else {
                if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                  fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
                  fVar47 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                  if ((fVar47 <= fVar45) ||
                     ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                    fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
                    uVar49 = (ulong)(uint)fVar45;
                    fVar47 = *(float *)(unaff_x19 + 0x4a);
                    if ((fVar47 < fVar45) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                    goto LAB_036afae0;
                    goto LAB_036ab340;
                  }
LAB_036afb7c:
                  fVar43 = fVar58;
                  if (0.0 < fVar45) {
                    fVar43 = fVar58 / (1.0 - fVar45);
                  }
                  fVar45 = fVar45 + (fVar58 - fVar46 * (in_stack_00000108._4_4_ + DAT_00b5556c)) /
                                    fVar43;
LAB_036afb6c:
                  if (fVar47 <= fVar45) {
                    fVar45 = fVar47;
                  }
                  *(float *)((long)unaff_x19 + 0x2d4) = fVar45;
                  return;
                }
LAB_036ab340:
                lVar38 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar38 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar38 = *(long *)puVar8;
                }
                iVar12 = *(int *)(*(long *)(lVar38 + 0xb8) + 0xe78);
                if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
                   (((bStack0000000000000078 ^ 1) & 1) == 0)) {
                  if (*(int *)(lVar38 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  in_stack_00001068 = FUN_036ecf20();
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0)) goto LAB_036afadc;
                  uVar30 = *unaff_x20 - 1;
                  if (*(uint *)(lVar38 + 0x18) <= uVar30) goto LAB_036afbe8;
                  iStack0000000000000034 = iVar12;
                  if (*(short *)(lVar38 + (long)(int)uVar30 * (long)iVar15 + 0x20) == 0xad) {
                    bStack000000000000007c = 0;
                    *unaff_x20 = uVar30;
                    in_stack_00001068 = in_stack_00001068 - 1;
                    in_stack_00001088 = CONCAT44(0x2d,uVar30);
                    goto LAB_036a9250;
                  }
                }
                if (fVar60 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
                  FUN_036ed998(in_stack_00000058._4_4_,uVar19,in_stack_000000f0,
                               *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
                               fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
                  uVar49 = uVar19;
                }
                else {
                  if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                    *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                         *(undefined4 *)((long)unaff_x19 + 0x494);
                  }
                  fVar47 = fStack00000000000000c8;
                  if ((char)unaff_x19[0x47] != '\0') {
                    fVar45 = *(float *)(unaff_x19 + 0x59);
                    if ((fVar45 < *(float *)((long)unaff_x19 + 700)) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                      fVar43 = *(float *)((long)unaff_x19 + 700) +
                               ((in_stack_00000018._4_4_ - fVar60) /
                               (float)((int)unaff_x19[0x95] + 1)) / in_stack_00000058._4_4_;
                      if (fVar43 <= fVar45) {
                        fVar43 = fVar45;
                      }
LAB_036ad184:
                      *(float *)((long)unaff_x19 + 700) = fVar43;
                      return;
                    }
                    fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
                    fVar47 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                    if ((fVar45 < fVar47) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                    goto LAB_036afb7c;
                    fVar45 = *(float *)((long)unaff_x19 + 0x1e4);
                    uVar49 = (ulong)(uint)fVar45;
                    fVar47 = *(float *)(unaff_x19 + 0x4a);
                    if ((fVar47 < fVar45) &&
                       (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                    goto LAB_036afae0;
                  }
                  switch((int)unaff_x19[0x5c]) {
                  case 0:
                  case 2:
                  case 4:
                    goto switchD_036ab4e4_caseD_0;
                  case 1:
                    lVar38 = *(long *)PTR_DAT_03d9c920;
                    if (*(int *)(lVar38 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar38 = *(long *)PTR_DAT_03d9c920;
                    }
                    lVar40 = *(long *)(lVar38 + 0xb8);
                    if (*(int *)(lVar40 + 0x1580) == 0) {
                      bStack000000000000007c = 0;
                      goto LAB_036acbbc;
                    }
                    if (*(int *)(lVar38 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar40 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                    }
                    FUN_0217900c(&stack0x000010a0,lVar40 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
                    memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
                    iVar12 = FUN_036ecf20();
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
                    FUN_036ed998(in_stack_00000058._4_4_,uVar19,in_stack_000000f0,
                                 *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
                                 fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                    *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                    *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
                    *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                    uVar49 = uVar19;
                    break;
                  case 6:
                    lVar38 = unaff_x19[0x5d];
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar19 = FUN_0391f968(lVar38,0,0);
                    if ((uVar19 & 1) != 0) {
                      plVar39 = (long *)unaff_x19[0x5d];
                      uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar39 == (long *)0x0) goto LAB_036afadc;
                      (**(code **)(*plVar39 + 0x558))
                                (plVar39,uVar20,*(undefined8 *)(*plVar39 + 0x560));
                      lVar38 = unaff_x19[0x5d];
                      if (lVar38 == 0) goto LAB_036afadc;
                      *(int *)(lVar38 + 0x400) = (int)unaff_x19[0x80];
                      FUN_036dfca8(lVar38,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                      plVar39 = (long *)unaff_x19[0x5d];
                      if (plVar39 == (long *)0x0) goto LAB_036afadc;
                      (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0))
                      ;
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
                in_stack_00001088 = uVar20;
              }
            }
            else {
              bStack000000000000007c = 0;
              in_stack_00001088 = CONCAT44(0x2d,uVar6);
              *unaff_x20 = uVar6;
              in_stack_00001068 = in_stack_00001068 - 1;
            }
          }
        }
        else {
          if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
            fVar46 = (float)uVar49;
            fVar44 = 0.0;
            if ((0.0 < fVar46) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            uVar49 = _fStack00000000000000c8 & 0xffffffff;
            if (fStack00000000000000c8 <
                (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar46)) +
                fVar44) {
              if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                *(uint *)((long)unaff_x19 + 0x2e4) = uVar52;
              }
              if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              in_stack_00001068 = FUN_036ecf20();
              lVar38 = unaff_x19[0x5d];
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  );
              }
              uVar19 = FUN_0391f968(lVar38,0,0);
              if ((uVar19 & 1) != 0) {
                plVar39 = (long *)unaff_x19[0x5d];
                uVar20 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar39 != (long *)0x0) {
                  (**(code **)(*plVar39 + 0x558))(plVar39,uVar20,*(undefined8 *)(*plVar39 + 0x560));
                  lVar38 = unaff_x19[0x5d];
                  if (lVar38 != 0) {
                    *(int *)(lVar38 + 0x400) = (int)unaff_x19[0x80];
                    FUN_036dfca8(lVar38,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                    plVar39 = (long *)unaff_x19[0x5d];
                    if (plVar39 != (long *)0x0) {
                      (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0))
                      ;
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
              lVar38 = *in_stack_00000190;
              if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x50), lVar40 == 0))
              goto LAB_036afadc;
              if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
              lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              *(int *)(lVar40 + 0x2c) = *(int *)(lVar40 + 0x2c) + 1;
              *(int *)(lVar38 + 0x20) = *(int *)(lVar38 + 0x20) + 1;
            }
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar19 = FUN_02fdea78(in_stack_0000109c,0);
            if ((uVar19 & 1) != 0) goto LAB_036ab188;
          }
          if (in_stack_0000109c == 0xa0) {
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x50), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
            lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
            *(int *)(lVar38 + 0x20) = *(int *)(lVar38 + 0x20) + 1;
          }
LAB_036ab6c0:
          if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
            if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
            fVar44 = *(float *)(unaff_x19 + 0x3d);
            iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
            if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
            fVar51 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
            lVar38 = unaff_x19[0xca];
            fVar46 = fStack00000000000000a0;
            if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
              fVar46 = 1.0;
            }
            if ((lVar38 == 0) || (*(long *)(lVar38 + 0x20) == 0)) goto LAB_036afadc;
            fVar58 = *(float *)((long)unaff_x19 + 0x404);
            fVar60 = *(float *)(lVar38 + 0x2c);
            fVar63 = (float)FUN_0396b17c(*(long *)(lVar38 + 0x20),0);
            fVar45 = *_fStack00000000000000b0;
            fVar63 = fVar58 * (fVar44 / (float)iVar12) * fVar51 * fVar46 * fVar60 * fVar63;
            fVar44 = *_fStack00000000000000a8;
            if ((in_stack_0000109c == 10) &&
               (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
              if ((*in_stack_00000190 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
              uVar52 = *(int *)((long)unaff_x19 + 0x494) - 1;
              if (*(uint *)(lVar38 + 0x18) <= uVar52) goto LAB_036afbe8;
              if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
              fVar46 = *(float *)(lVar38 + (long)(int)uVar52 * (long)iVar15 + 0x60);
              iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
              if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
              fVar58 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
              lVar38 = unaff_x19[0xca];
              fVar51 = fStack00000000000000a0;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar51 = 1.0;
              }
              if ((lVar38 == 0) || (*(long *)(lVar38 + 0x20) == 0)) goto LAB_036afadc;
              fVar60 = *(float *)((long)unaff_x19 + 0x404);
              fVar47 = *(float *)(lVar38 + 0x2c);
              fVar63 = (float)FUN_0396b17c(*(long *)(lVar38 + 0x20),0);
              if ((*in_stack_00000190 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000190 + 0x50), lVar38 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
              lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
              fVar45 = *(float *)(lVar38 + 0x60);
              fVar44 = *(float *)(lVar38 + 100);
              fVar63 = fVar60 * (fVar46 / (float)iVar12) * fVar58 * fVar51 * fVar47 * fVar63;
            }
            fVar58 = *(float *)(unaff_x19 + 0x9b);
            fVar46 = 0.0;
            fVar51 = 0.0;
            if ((0.0 < fVar58) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
              fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
            }
            fVar47 = *(float *)(unaff_x19 + 0x97);
            fVar54 = *(float *)((long)unaff_x19 + 0x4cc);
            fVar60 = *(float *)(unaff_x19 + 200);
            if ((char)unaff_x19[0x1e] == '\0') {
              if ((unaff_x19[0xca] == 0) ||
                 (lVar38 = *(long *)(unaff_x19[0xca] + 0x20), lVar38 == 0)) goto LAB_036afadc;
              FUN_0396b140(&stack0x000010a0,lVar38,0);
              fVar46 = (float)FUN_0396af88(&stack0x00000fc0,0);
            }
            puVar8 = PTR_DAT_03d9c920;
            fVar56 = *(float *)(unaff_x19 + 0x6c);
            fVar44 = (fStack00000000000000a4 - fVar45) - fVar44;
            bVar10 = true;
            if ((fVar56 <= fVar44) && (bVar10 = false, !NAN(fVar56))) {
              bVar10 = fVar56 == -1.0;
            }
            if (!bVar10) {
              fVar44 = fVar56;
            }
            fVar45 = 1.0;
            if ((uVar55 & 0x18) != 0) {
              fVar45 = DAT_00b55374;
            }
            if (((fVar47 - (fVar54 - fVar58)) + fVar51 < fStack00000000000000c8) &&
               (ABS(fVar60) + fVar63 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
                fVar45 * fVar44)) {
              if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_036ed2b4();
              lVar38 = *(long *)(*(long *)puVar8 + 0xb8);
              uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
              memcpy(&stack0x000010a0,(void *)(lVar38 + 0x788),0x378);
              FUN_02178ef4(lVar38 + 0x11f0,&stack0x000010a0,uVar17);
            }
          }
          lVar38 = *in_stack_00000190;
          if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
          uVar52 = *(uint *)(unaff_x19 + 0x95);
          lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
          *(uint *)(lVar40 + 100) = uVar52;
          *(int *)(lVar40 + 0x68) = (int)unaff_x19[0x96];
          if (((unaff_w23 & 1) == 0) &&
             ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0))
             )) {
            lVar38 = *(long *)(lVar38 + 0x50);
            if (lVar38 == 0) goto LAB_036afadc;
LAB_036aba84:
            if (*(uint *)(lVar38 + 0x18) <= uVar52) goto LAB_036afbe8;
            *(int *)(lVar38 + (long)(int)uVar52 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
          }
          else {
            lVar38 = *(long *)(lVar38 + 0x50);
            if (lVar38 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= uVar52) goto LAB_036afbe8;
            if (*(int *)(lVar38 + (long)(int)uVar52 * 0x5c + 0x24) == 1) goto LAB_036aba84;
          }
          if (in_stack_0000109c == 9) {
            if (*in_stack_00000178 == 0) goto LAB_036afadc;
            fVar44 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
            if (*in_stack_00000178 == 0) goto LAB_036afadc;
            fVar51 = *(float *)(unaff_x19 + 200);
            fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
            fVar44 = fVar43 * fVar44 * fVar46;
            fVar46 = fVar44 * (float)(int)(fVar51 / fVar44);
            uVar49 = (ulong)(uint)fVar46;
            if (fVar46 <= fVar51) {
              fVar46 = fVar51 + fVar44;
            }
LAB_036abca4:
            *(float *)(unaff_x19 + 200) = fVar46;
          }
          else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
            if ((char)unaff_x19[0x1e] == '\0') {
              if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                fVar51 = 1.0;
              }
              else {
                fVar51 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
              }
              fVar46 = *(float *)(unaff_x19 + 200);
              fVar63 = (float)FUN_0396af88(&stack0x00001050,0);
              if (unaff_x19[0x20] != 0) {
                fVar44 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                fVar46 = fVar46 + fVar44 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                           fVar43 * (fStack0000000000000138 + fVar51 * fVar63) +
                                           in_stack_000000f0 *
                                           (fStack00000000000000e4 +
                                           fStack000000000000013c +
                                           *(float *)(unaff_x19[0x20] + 0x1ac)));
                *(float *)(unaff_x19 + 200) = fVar46;
                goto joined_r0x036abbe8;
              }
              goto LAB_036afadc;
            }
            if (*in_stack_00000178 == 0) goto LAB_036afadc;
            fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                     (*(float *)((long)unaff_x19 + 0x2ac) +
                     fVar43 * fStack0000000000000138 +
                     in_stack_000000f0 *
                     (fStack00000000000000e4 +
                     fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
            uVar49 = (ulong)(uint)fVar46;
            fVar46 = *(float *)(unaff_x19 + 200) - fVar46;
            *(float *)(unaff_x19 + 200) = fVar46;
            if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
              fVar44 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
              uVar49 = (ulong)(uint)fVar44;
              fVar46 = fVar46 - fVar44;
              goto LAB_036abca4;
            }
          }
          else {
            if (*in_stack_00000178 == 0) goto LAB_036afadc;
            fVar44 = *(float *)(unaff_x19 + 200);
            fVar46 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                              (*(float *)((long)unaff_x19 + 0x2ac) +
                              (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                              in_stack_000000f0 *
                              (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
            *(float *)(unaff_x19 + 200) = fVar46;
joined_r0x036abbe8:
            if ((in_stack_0000109c == 0x200b) || (uVar49 = (ulong)(uint)fVar44, unaff_w21 != 0)) {
              fVar44 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
              uVar49 = (ulong)(uint)fVar44;
              fVar46 = fVar46 + fVar44;
              goto LAB_036abca4;
            }
          }
          lVar38 = *in_stack_00000190;
          if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0)) goto LAB_036afadc;
          uVar52 = *unaff_x20;
          uVar55 = (uint)*(undefined8 *)(lVar40 + 0x18);
          if (uVar55 <= uVar52) goto LAB_036afbe8;
          *(float *)(lVar40 + (long)(int)uVar52 * unaff_x24 + 0x144) = fVar46;
          uVar30 = in_stack_0000109c;
          if ((int)in_stack_0000109c < 0xd) {
            if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
            if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) ||
               ((float)uVar52 == in_stack_00000090._4_4_)) goto LAB_036abd48;
          }
          else {
            if (1 < in_stack_0000109c - 0x2028) {
              if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
              uVar49 = 0;
              *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
              if ((float)uVar52 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
            }
LAB_036abd48:
            if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
              fVar44 = *(float *)(unaff_x19 + 0x99);
              fVar46 = *(float *)(unaff_x19 + 0x9a);
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              fVar44 = fVar44 - fVar46;
              if (((fStack0000000000000060 < ABS(fVar44)) &&
                  (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                 (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                FUN_036ed624(fVar44);
                *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar44;
                *(float *)(unaff_x19 + 0x9b) = fVar44 + *(float *)(unaff_x19 + 0x9b);
                puVar8 = PTR_DAT_03d9c920;
                lVar38 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar38 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar38 = *(long *)puVar8;
                }
                lVar40 = *(long *)(lVar38 + 0xb8);
                if (*(int *)(lVar40 + 0x7ac) == (int)unaff_x19[0x95]) {
                  if (*(int *)(lVar38 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar40 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                  }
                  FUN_0217900c(&stack0x000010a0,lVar40 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
                  memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
                  puVar8 = PTR_DAT_03d9c920;
                  lVar38 = *(long *)PTR_DAT_03d9c920;
                  memcpy((void *)(*(long *)(lVar38 + 0xb8) + 0x788),&stack0x000001d0,0x378);
                  thunk_FUN_01b4f09c(*(long *)(lVar38 + 0xb8) + 0x818,0);
                  lVar38 = *(long *)(*(long *)puVar8 + 0xb8);
                  *(float *)(lVar38 + 0x7bc) = fVar44 + *(float *)(lVar38 + 0x7bc);
                  *(float *)(lVar38 + 0x800) = fVar44 + *(float *)(lVar38 + 0x800);
                  uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
                  memcpy(&stack0x000010a0,(void *)(lVar38 + 0x788),0x378);
                  FUN_02178ef4(lVar38 + 0x11f0,&stack0x000010a0,uVar17);
                }
              }
            }
            fVar51 = *(float *)(unaff_x19 + 0x9b);
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
            fVar46 = *(float *)((long)unaff_x19 + 0x4cc) - fVar51;
            fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
            if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
              fVar44 = fVar46;
            }
            *(float *)((long)unaff_x19 + 0x4c4) = fVar44;
            fVar63 = *(float *)(unaff_x19 + 0x99);
            if (in_stack_00001094 == '\0') {
              in_stack_00001098 = fVar44;
            }
            if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
               (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
              in_stack_00001094 = '\x01';
            }
            lVar38 = *in_stack_00000190;
            if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x50), lVar40 == 0))
            goto LAB_036afadc;
            uVar52 = *(uint *)(unaff_x19 + 0x95);
            if (*(uint *)(lVar40 + 0x18) <= uVar52) goto LAB_036afbe8;
            lVar26 = unaff_x19[0x93];
            lVar18 = lVar40 + (long)(int)uVar52 * 0x5c;
            *(int *)(lVar18 + 0x34) = (int)lVar26;
            uVar55 = *(uint *)(unaff_x19 + 0x93);
            if ((int)lVar26 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
              uVar55 = *(uint *)((long)unaff_x19 + 0x49c);
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar55;
            *(uint *)(lVar18 + 0x38) = uVar55;
            *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
            *(undefined4 *)(lVar18 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
            iVar12 = *(int *)((long)unaff_x19 + 0x49c);
            if ((int)uVar55 <= *(int *)((long)unaff_x19 + 0x4a4)) {
              iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
            }
            *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
            *(int *)(lVar18 + 0x40) = iVar12;
            *(int *)(lVar18 + 0x24) = (*(int *)(lVar18 + 0x3c) - *(int *)(lVar18 + 0x34)) + 1;
            *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
            lVar38 = *(long *)(lVar38 + 0x38);
            if (lVar38 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= uVar55) goto LAB_036afbe8;
            uVar62 = *(undefined4 *)(lVar38 + (long)(int)uVar55 * (long)iVar15 + 0x11c);
            lVar40 = lVar40 + (long)(int)uVar52 * 0x5c;
            *(float *)(lVar40 + 0x70) = fVar46;
            *(undefined4 *)(lVar40 + 0x6c) = uVar62;
            lVar38 = *in_stack_00000190;
            if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x50), lVar40 == 0))
            goto LAB_036afadc;
            if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
            lVar38 = *(long *)(lVar38 + 0x38);
            if (lVar38 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
            fVar63 = fVar63 - fVar51;
            uVar49 = (ulong)(uint)fVar63;
            lVar40 = lVar40 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
            *(undefined4 *)(lVar40 + 0x74) =
                 *(undefined4 *)
                  (lVar38 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
            *(float *)(lVar40 + 0x78) = fVar63;
            lVar38 = *in_stack_00000190;
            if ((lVar38 == 0) || (lVar26 = *(long *)(lVar38 + 0x50), lVar26 == 0))
            goto LAB_036afadc;
            lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x95);
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
            lVar40 = lVar26 + lVar18 * 0x5c;
            *(float *)(lVar40 + 0x44) = *(float *)(lVar40 + 0x74) - fVar43 * in_stack_00000170._4_4_
            ;
            *(float *)(lVar40 + 0x5c) = in_stack_00000108._4_4_;
            if (*(int *)(lVar40 + 0x24) == 1) {
              *(int *)(lVar26 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
            }
            if ((*in_stack_00000178 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0))
            goto LAB_036afadc;
            lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
            uVar55 = (uint)*(undefined8 *)(lVar40 + 0x18);
            if (uVar55 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
            if ((*(char *)(lVar40 + lVar37 * unaff_x24 + 0x194) == '\0') &&
               (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x94),
               uVar55 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_036afbe8;
            lVar26 = lVar26 + lVar18 * 0x5c;
            fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                     (in_stack_000000f0 *
                      (fStack00000000000000e4 +
                      fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
                     *(float *)((long)unaff_x19 + 0x2ac));
            fVar44 = -fVar51;
            if ((char)unaff_x19[0x1e] != '\0') {
              fVar44 = fVar51;
            }
            *(float *)(lVar26 + 0x58) = *(float *)(lVar40 + lVar37 * unaff_x24 + 0x144) + fVar44;
            *(float *)(lVar26 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
            *(float *)(lVar26 + 0x54) = fVar46;
            *(float *)(lVar26 + 0x48) = fStack0000000000000064 + (fVar63 - fVar46);
            *(float *)(lVar26 + 0x4c) = fVar63;
            if ((int)in_stack_0000109c < 0x2d) {
              if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
                if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_036ed2b4();
                lVar38 = unaff_x19[0x6d];
                *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                iVar12 = (int)unaff_x19[0x95] + 1;
                *(int *)(unaff_x19 + 0x95) = iVar12;
                *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                if ((lVar38 != 0) && (*(long *)(lVar38 + 0x50) != 0)) {
                  if (*(int *)(*(long *)(lVar38 + 0x50) + 0x18) <= iVar12) {
                    FUN_036ed7dc();
                    lVar38 = unaff_x19[0x6d];
                    if (lVar38 == 0) goto LAB_036afadc;
                  }
                  lVar38 = *(long *)(lVar38 + 0x38);
                  if (lVar38 != 0) {
                    if (*unaff_x20 < *(uint *)(lVar38 + 0x18)) {
                      fVar44 = *(float *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
                      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                        if ((in_stack_0000109c == 0x2029) || (fVar46 = 0.0, in_stack_0000109c == 10)
                           ) {
                          fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                        }
                        uVar22 = 0;
                        fVar46 = fVar44 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                 in_stack_00000058._4_4_ *
                                 (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
                                 in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar46) +
                                 *(float *)(unaff_x19 + 0x9b);
                      }
                      else {
                        if ((in_stack_0000109c == 0x2029) || (fVar46 = 0.0, in_stack_0000109c == 10)
                           ) {
                          fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                        }
                        uVar22 = 1;
                        fVar46 = *(float *)(unaff_x19 + 0x9b) +
                                 *(float *)(unaff_x19 + 0x58) +
                                 in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar46);
                      }
                      *(float *)(unaff_x19 + 0x9b) = fVar46;
                      *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
                      puVar8 = PTR_DAT_03d9c920;
                      lVar38 = *(long *)PTR_DAT_03d9c920;
                      if (*(int *)(lVar38 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar38 = *(long *)puVar8;
                      }
                      uVar17 = *(undefined8 *)(*(long *)(lVar38 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 0x9a) = fVar44;
                      uVar49 = NEON_rev64(uVar17,4);
                      unaff_x19[0x99] = uVar49;
                      *(float *)(unaff_x19 + 200) =
                           *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
                      FUN_036ed2b4();
                      FUN_036ed2b4();
                      bStack0000000000000078 = 1;
                      *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                      in_stack_00000068 = 1;
                      in_stack_00001088 = uVar20;
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
                uVar30 = 3;
              }
            }
            else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d))
            goto LAB_036ac1c4;
          }
LAB_036ac2f4:
          uVar52 = *unaff_x20;
          if (uVar55 <= uVar52) goto LAB_036afbe8;
          if (*(char *)(lVar40 + (long)(int)uVar52 * unaff_x24 + 0x194) != '\0') {
            lVar40 = lVar40 + (long)(int)uVar52 * unaff_x24;
            uVar49 = *(ulong *)(lVar40 + 0x11c);
            uVar19 = *(ulong *)(in_stack_00000088 + 0x230);
            *(ulong *)(in_stack_00000088 + 0x230) =
                 uVar19 ^ (uVar19 ^ uVar49) &
                          ~CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar49 >> 0x20)),
                                    -(uint)((float)uVar19 < (float)uVar49));
            uVar19 = *(ulong *)(in_stack_00000088 + 0x238);
            uVar49 = *(ulong *)(lVar40 + 0x128);
            *(ulong *)(in_stack_00000088 + 0x238) =
                 uVar19 ^ (uVar19 ^ uVar49) &
                          ~CONCAT44(-(uint)((float)(uVar49 >> 0x20) < (float)(uVar19 >> 0x20)),
                                    -(uint)((float)uVar49 < (float)uVar19));
          }
          if (((int)unaff_x19[0x5c] == 5) &&
             ((0xd < uVar30 || ((1 << (ulong)(uVar30 & 0x1f) & 0x2c00U) == 0)))) {
            lVar40 = *(long *)(lVar38 + 0x58);
            if (lVar40 == 0) goto LAB_036afadc;
            iVar12 = (int)unaff_x19[0x96] + 1;
            if (*(int *)(lVar40 + 0x18) < iVar12) {
              if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52e84((long *)(lVar38 + 0x58),iVar12,1,*(undefined8 *)PTR_DAT_03d9c890);
              lVar38 = *in_stack_00000190;
              if (lVar38 == 0) goto LAB_036afadc;
            }
            lVar40 = *(long *)(lVar38 + 0x58);
            if (lVar40 == 0) goto LAB_036afadc;
            uVar55 = *(uint *)(unaff_x19 + 0x96);
            lVar26 = (long)(int)uVar55;
            uVar52 = *(uint *)(lVar40 + 0x18);
            if (uVar52 <= uVar55) goto LAB_036afbe8;
            lVar18 = lVar40 + lVar26 * 0x14;
            fVar46 = *(float *)(lVar18 + 0x30);
            uVar49 = (ulong)(uint)fVar46;
            *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
            fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
            if (fVar46 <= *(float *)((long)unaff_x19 + 0x4c4)) {
              fVar44 = fVar46;
            }
            *(float *)(lVar18 + 0x30) = fVar44;
            uVar30 = *(uint *)((long)unaff_x19 + 0x494);
            if (uVar30 == 0 && uVar55 == 0) {
              *(uint *)(lVar40 + (ulong)uVar55 * 0x14 + 0x20) = uVar30;
            }
            else {
              uVar6 = uVar30 - 1;
              if (0 < (int)uVar30) {
                lVar38 = *(long *)(lVar38 + 0x38);
                if (lVar38 == 0) goto LAB_036afadc;
                if (*(uint *)(lVar38 + 0x18) <= uVar6) goto LAB_036afbe8;
                if (uVar55 != *(uint *)(lVar38 + (ulong)uVar6 * (unaff_x24 & 0xffffffff) + 0x68)) {
                  if (uVar55 - 1 < uVar52) {
                    *(uint *)(lVar40 + 0x20 + (long)(int)(uVar55 - 1) * 0x14 + 4) = uVar6;
                    *(uint *)(lVar40 + 0x20 + lVar26 * 0x14) = uVar30;
                    goto LAB_036ac564;
                  }
                  goto LAB_036afbe8;
                }
              }
              if ((float)uVar30 == in_stack_00000090._4_4_) {
                *(float *)(lVar40 + lVar26 * 0x14 + 0x24) = in_stack_00000090._4_4_;
              }
            }
          }
LAB_036ac564:
          puVar8 = PTR_DAT_03d9c920;
          if (((char)unaff_x19[0x5b] == '\0') &&
             ((6 < *(uint *)(unaff_x19 + 0x5c) ||
              ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
          goto LAB_036ac920;
          if ((unaff_w21 == 0) &&
             (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) &&
              (in_stack_0000109c != 0xad)))) {
            if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_036ac660:
              if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101))
                   && (0x1d < in_stack_0000109c - 0xa961)) ||
                  (uVar19 = FUN_036fbce8(0), (uVar19 & 1) != 0)) &&
                 ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
                   (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))))
              goto LAB_036ac6e8;
              lVar38 = FUN_036fbb7c(0);
              if ((lVar38 == 0) || (*(long *)(lVar38 + 0x10) == 0)) goto LAB_036afadc;
              uVar52 = FUN_0254f914(*(long *)(lVar38 + 0x10),in_stack_0000109c,
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
                if (uVar42 != uVar16 || ((bStack0000000000000078 ^ 0xff) & 1) != 0)
                goto LAB_036ac920;
                if (unaff_w21 != 0) goto LAB_036ac868;
                goto LAB_036ac8a0;
              }
              lVar38 = FUN_036fbb7c(0);
              if (((lVar38 == 0) || (*in_stack_00000190 == 0)) ||
                 (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar40 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
              if (*(long *)(lVar38 + 0x18) == 0) goto LAB_036afadc;
              uVar19 = FUN_0254f914(*(long *)(lVar38 + 0x18),
                                    *(undefined2 *)
                                     (lVar40 + (long)(int)(*unaff_x20 + 1) * (long)iVar15 + 0x20),
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
            *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
          }
LAB_036ac920:
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_036ed2b4();
          *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
          in_stack_00001088 = uVar20;
        }
LAB_036a9250:
        do {
          in_stack_00001068 = in_stack_00001068 + 1;
          lVar38 = unaff_x19[0x8f];
          if (lVar38 == 0) goto LAB_036afadc;
          if ((int)*(uint *)(lVar38 + 0x18) <= (int)in_stack_00001068) {
LAB_036acbd8:
            fVar43 = (float)uVar49;
            if (((char)unaff_x19[0x47] != '\0') &&
               (fVar43 = DAT_00b552b8,
               DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
              fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
              fVar44 = *(float *)((long)unaff_x19 + 0x254);
              if ((fVar43 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
                  *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                }
                fVar57 = (*(float *)((long)unaff_x19 + 0x23c) - fVar43) * 0.5;
                if (fVar57 <= DAT_00b55428) {
                  fVar57 = DAT_00b55428;
                }
                *(float *)(unaff_x19 + 0x48) = fVar43;
                fVar57 = (fVar43 + fVar57) * 20.0 + 0.5;
                fVar43 = DAT_00b556b4;
                if (fVar57 != INFINITY) {
                  fVar43 = (float)(int)fVar57 / 20.0;
                }
                if (fVar44 <= fVar43) {
                  fVar43 = fVar44;
                }
                goto LAB_036acc94;
              }
            }
            *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
            puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
            if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
              uVar20 = FUN_0303de64(in_stack_00000038,0);
              uVar17 = FUN_03052638(_fStack0000000000000040,0);
              uVar20 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar20,
                                    *(undefined8 *)PTR_DAT_03d9c938,uVar17,0);
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  );
              }
              FUN_038f2acc(uVar20,0);
            }
            puVar9 = PTR_DAT_03d9c920;
            if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar41 == 3)))) {
              (**(code **)(*unaff_x19 + 0x948))();
              goto LAB_036acd60;
            }
            lVar38 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar38 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar38 = *(long *)puVar9;
            }
            plVar39 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
            lVar38 = **(long **)(lVar38 + 0xb8);
            if (lVar38 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
            iVar15 = *(int *)(lVar38 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x60), lVar38 == 0)) goto LAB_036afadc;
            if (*(int *)(*(long *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (*(int *)(lVar38 + 0x18) == 0) goto LAB_036afbe8;
            FUN_036fa40c(lVar38 + 0x20,0,0);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            iVar12 = (int)unaff_x19[0x4e];
            in_stack_00000108._4_4_ =
                 **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            in_stack_000000f8 =
                 *(long **)(*(float **)
                             (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
            ;
            lVar38 = unaff_x19[0xe3];
            _fStack00000000000000c8 = (ulong)in_stack_000000f8;
            fStack00000000000000d0 = in_stack_00000108._4_4_;
            if (iVar12 < 0x401) {
              if (iVar12 == 0x100) {
                if (lVar38 == 0) goto LAB_036afadc;
                if (*(uint *)(lVar38 + 0x18) < 2) goto LAB_036afbe8;
                uVar20 = *(undefined8 *)(lVar38 + 0x30);
                if ((int)unaff_x19[0x5c] == 5) {
                  if ((*in_stack_00000190 == 0) ||
                     (lVar40 = *(long *)(*in_stack_00000190 + 0x58), lVar40 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
                  fVar43 = *(float *)(lVar40 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
                }
                else {
                  fVar43 = *(float *)(unaff_x19 + 0x97);
                }
                fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar38 + 0x2c);
                fVar43 = (0.0 - fVar43) - fStack0000000000000020;
              }
              else if (iVar12 == 0x200) {
                if (lVar38 == 0) goto LAB_036afadc;
                if ((*(int *)(lVar38 + 0x18) == 1) || (*(int *)(lVar38 + 0x18) == 0))
                goto LAB_036afbe8;
                fStack00000000000000d0 =
                     (*(float *)(lVar38 + 0x20) + *(float *)(lVar38 + 0x2c)) * 0.5;
                uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar38 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar38 + 0x24) +
                                  (float)*(undefined8 *)(lVar38 + 0x30)) * 0.5);
                if ((int)unaff_x19[0x5c] == 5) {
                  if ((*in_stack_00000190 == 0) ||
                     (lVar38 = *(long *)(*in_stack_00000190 + 0x58), lVar38 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
                  lVar38 = lVar38 + (long)(int)uStack0000000000000030 * 0x14;
                  fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
                  fVar43 = ((fStack0000000000000020 + *(float *)(lVar38 + 0x28) +
                            *(float *)(lVar38 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
                }
                else {
                  fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
                  fVar43 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) +
                            in_stack_00001098) - fStack0000000000000024) * -0.5 + 0.0;
                }
              }
              else {
                if (iVar12 != 0x400) goto LAB_036ad288;
                if (lVar38 == 0) goto LAB_036afadc;
                if (*(int *)(lVar38 + 0x18) == 0) goto LAB_036afbe8;
                uVar20 = *(undefined8 *)(lVar38 + 0x24);
                if ((int)unaff_x19[0x5c] == 5) {
                  if ((*in_stack_00000190 == 0) ||
                     (lVar40 = *(long *)(*in_stack_00000190 + 0x58), lVar40 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar40 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
                  in_stack_00001098 =
                       *(float *)(lVar40 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
                }
                fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar38 + 0x20);
                fVar43 = fStack0000000000000024 + (0.0 - in_stack_00001098);
              }
LAB_036ad278:
              _fStack00000000000000c8 =
                   CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar43);
            }
            else if (iVar12 == 0x800) {
              if (lVar38 == 0) goto LAB_036afadc;
              if ((*(int *)(lVar38 + 0x18) == 1) || (*(int *)(lVar38 + 0x18) == 0))
              goto LAB_036afbe8;
              fVar43 = fStack000000000000002c + 0.0 +
                       (*(float *)(lVar38 + 0x20) + *(float *)(lVar38 + 0x2c)) * 0.5;
              _fStack00000000000000c8 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar38 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar38 + 0x24) +
                            (float)*(undefined8 *)(lVar38 + 0x30)) * 0.5 + 0.0);
              fStack00000000000000d0 = fVar43;
            }
            else {
              if (iVar12 == 0x1000) {
                if (lVar38 == 0) goto LAB_036afadc;
                if ((*(int *)(lVar38 + 0x18) != 1) && (*(int *)(lVar38 + 0x18) != 0)) {
                  uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar38 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar38 + 0x24) +
                                    (float)*(undefined8 *)(lVar38 + 0x30)) * 0.5);
                  fStack00000000000000d0 =
                       fStack000000000000002c + 0.0 +
                       (*(float *)(lVar38 + 0x20) + *(float *)(lVar38 + 0x2c)) * 0.5;
                  fVar43 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                                  *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
                  goto LAB_036ad278;
                }
                goto LAB_036afbe8;
              }
              if (iVar12 == 0x2000) {
                if (lVar38 == 0) goto LAB_036afadc;
                if ((*(int *)(lVar38 + 0x18) == 1) || (*(int *)(lVar38 + 0x18) == 0))
                goto LAB_036afbe8;
                fVar43 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                               fStack0000000000000024) * 0.5;
                _fStack00000000000000c8 =
                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar38 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar38 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar38 + 0x24) +
                              (float)*(undefined8 *)(lVar38 + 0x30)) * 0.5 + fVar43);
                fStack00000000000000d0 =
                     fStack000000000000002c + 0.0 +
                     (*(float *)(lVar38 + 0x20) + *(float *)(lVar38 + 0x2c)) * 0.5;
              }
            }
LAB_036ad288:
            if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
            uVar20 = FUN_03afb088(unaff_x19[0xe5],0);
            if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar8);
            }
            uVar19 = FUN_03922f24(uVar20,0,0);
            lVar38 = FUN_036dfed8();
            if (lVar38 == 0) goto LAB_036afadc;
            FUN_0392a7f0(lVar38,0);
            *(float *)(unaff_x19 + 0xe2) = fVar43;
            if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
            iVar12 = FUN_03afa68c(unaff_x19[0xe5],0);
            if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
            fVar44 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
            uVar62 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
            }
            if (DAT_03ff747c == '\0') {
              thunk_FUN_01ad9084(PTR_DAT_03d9c888);
              DAT_03ff747c = '\x01';
            }
            puVar8 = PTR_DAT_03d9c888;
            lVar38 = *(long *)PTR_DAT_03d9c888;
            if (*(int *)(lVar38 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar38 = *(long *)puVar8;
            }
            puVar24 = *(undefined4 **)(lVar38 + 0xb8);
            uVar49 = (ulong)(uint)puVar24[1];
            uVar50 = (ulong)(uint)puVar24[2];
            uVar53 = (ulong)(uint)puVar24[3];
            FUN_036c214c(*puVar24,uVar49,uVar50,uVar53,&stack0x00001070,0x4000ffff,0);
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            lVar38 = *in_stack_00000190;
            if (lVar38 == 0) goto LAB_036afadc;
            uVar42 = *unaff_x20;
            if ((int)uVar42 < 1) {
              fStack00000000000000e4 = 0.0;
              iVar15 = 0;
              goto LAB_036af524;
            }
            lVar38 = *(long *)(lVar38 + 0x38);
            fVar43 = ABS(fVar43);
            fVar57 = 1.0;
            if ((uVar19 & 1) == 0) {
              fVar57 = fVar43;
            }
            if (lVar38 == 0) goto LAB_036afadc;
            bVar11 = false;
            bVar7 = false;
            _fStack0000000000000138 = 0;
            bVar10 = false;
            fStack00000000000000e4 = 0.0;
            fStack000000000000002c = 0.0;
            in_stack_00000170._4_4_ = 0.0;
            iStack0000000000000074 = 0;
            lVar40 = 0x2e0;
            fVar51 = 0.0;
            fVar46 = 0.0;
            fStack00000000000000d4 = fStack00000000000000e8;
            fStack00000000000000d8 = fStack00000000000000ec;
            fStack0000000000000114 =
                 *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
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
            uVar16 = 1;
            uVar52 = 0;
            goto LAB_036ad4b0;
          }
          if (*(uint *)(lVar38 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
          in_stack_0000109c = *(uint *)(lVar38 + (long)(int)in_stack_00001068 * 0xc + 0x20);
          if (in_stack_0000109c == 0) goto LAB_036acbd8;
          if (5 < in_stack_00000188._4_4_) {
            uVar20 = FUN_0303de64(&stack0x0000109c,0);
            uVar17 = FUN_0303de64(&stack0x00001068,0);
            uVar20 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar20,
                                  *(undefined8 *)PTR_DAT_03d9c940,uVar17,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                );
            }
            FUN_038f2e04(uVar20,0);
            in_stack_00001088 = CONCAT44(3,*unaff_x20);
          }
          if ((*(char *)((long)unaff_x19 + 0x302) == '\0') || (in_stack_0000109c != 0x3c)) {
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
            lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
            *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar38 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar38 + 0x58);
            unaff_x19[0x20] = *(long *)(lVar38 + 0x38);
            thunk_FUN_01b4f09c(in_stack_00000178);
          }
          else {
            *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            uVar19 = FUN_036e7318();
            if (((uVar19 & 1) != 0) &&
               (in_stack_00001068 = in_stack_0000104c, uVar41 = in_stack_0000109c,
               *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
          }
          if ((unaff_x19[0x6d] == 0) || (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0))
          goto LAB_036afadc;
          uVar42 = *unaff_x20;
          if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
          lVar26 = (long)(int)uVar42;
          bVar3 = *(byte *)(lVar38 + lVar26 * unaff_x24 + 0x5c);
          unaff_w26 = (uint)bVar3;
          *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
          lVar40 = unaff_x19[0x24];
          if ((uint)in_stack_00001088 == uVar42) {
            in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
            *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
            if (in_stack_0000109c == 0x2026) {
              *(long *)(lVar38 + lVar26 * unaff_x24 + 0x30) = unaff_x19[0xca];
              thunk_FUN_01b4f09c();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
              lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)(lVar38 + 0x2c) = 0;
              *(long *)(lVar38 + 0x38) = unaff_x19[0xcb];
              thunk_FUN_01b4f09c();
              if ((unaff_x19[0x6d] == 0) ||
                 (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
              *(long *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
              thunk_FUN_01b4f09c();
              if ((*in_stack_00000190 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
              uVar42 = *unaff_x20;
              if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
              unaff_w23 = 1;
              *(int *)(lVar38 + (long)(int)uVar42 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
              in_stack_00001088 = CONCAT44(3,uVar42 + 1);
            }
            else if (in_stack_0000109c == 3) {
              if ((*in_stack_00000178 == 0) ||
                 (lVar18 = FUN_036c835c(*in_stack_00000178,0), lVar18 == 0)) goto LAB_036afadc;
              uVar20 = FUN_0262f3a4(lVar18,3,*(undefined8 *)PTR_DAT_03d9c870);
              if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
              *(undefined8 *)(lVar38 + lVar26 * unaff_x24 + 0x30) = uVar20;
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
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
            lVar38 = lVar38 + (long)(int)uVar42 * (long)iVar15;
            *(undefined1 *)(lVar38 + 0x194) = 0;
            *(undefined2 *)(lVar38 + 0x20) = 0x200b;
            *(undefined4 *)(lVar38 + 100) = 0;
            *unaff_x20 = uVar42 + 1;
            uVar41 = in_stack_0000109c;
            goto LAB_036a9250;
          }
          iVar12 = *(int *)((long)unaff_x19 + 0x644);
          if (iVar12 == 0) {
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
                  uVar19 = FUN_02fdd9e8(in_stack_0000109c,0);
                  if ((uVar19 & 1) != 0) {
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
                uVar19 = FUN_02fdd92c(in_stack_0000109c,0);
                in_stack_00000150 = 1.0;
                if ((uVar19 & 1) != 0) {
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
              uVar19 = FUN_02fdd9e8(in_stack_0000109c,0);
              in_stack_00000150 = 1.0;
              if ((uVar19 & 1) != 0) {
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
            iVar12 = *(int *)((long)unaff_x19 + 0x644);
          }
          else {
            in_stack_00000150 = 1.0;
          }
          uVar41 = in_stack_0000109c;
          if (iVar12 != 0) {
            if (iVar12 != 1) {
              lVar38 = *in_stack_00000190;
              unaff_s13 = 0.0;
              if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
                unaff_s13 = fVar43;
              }
              in_stack_00000180 = 0.0;
              if (lVar38 == 0) goto LAB_036afadc;
              in_stack_00000130 = 0.0;
              in_stack_00000128 = 0;
              in_stack_00000100 = fVar43;
              goto LAB_036a9b50;
            }
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
            *in_stack_000000b8 = *(long *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
            thunk_FUN_01b4f09c();
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
            *(undefined4 *)((long)unaff_x19 + 0x6a4) =
                 *(undefined4 *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
            if ((unaff_x19[0xd3] == 0) || (lVar38 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar38 == 0))
            goto LAB_036afadc;
            lVar38 = FUN_02b59714(lVar38,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                                  *(undefined8 *)PTR_DAT_03d9c878);
            puVar8 = PTR_DAT_03d9c920;
            if (lVar38 != 0) {
              if (in_stack_0000109c == 0x3c) {
                in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
              }
              else {
                lVar26 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar26 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar26 = *(long *)puVar8;
                }
                *(undefined4 *)((long)unaff_x19 + 0x1bc) =
                     *(undefined4 *)(*(long *)(lVar26 + 0xb8) + 0x68);
              }
              if (unaff_x19[0x20] == 0) goto LAB_036afadc;
              fVar43 = *(float *)(unaff_x19 + 0x3d);
              memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
              iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
              if (*in_stack_00000178 == 0) goto LAB_036afadc;
              memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
              fVar46 = (float)FUN_0396ac34(&stack0x00000fe0,0);
              fVar44 = fStack00000000000000a0;
              if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                fVar44 = 1.0;
              }
              if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
              fVar44 = (fVar43 / (float)iVar12) * fVar46 * fVar44;
              iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
              fVar43 = *(float *)(unaff_x19 + 0x3d);
              if (iVar12 < 1) {
                if (*in_stack_00000178 == 0) goto LAB_036afadc;
                iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
                if (*in_stack_00000178 == 0) goto LAB_036afadc;
                fVar51 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
                fVar46 = fStack00000000000000a0;
                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                  fVar46 = 1.0;
                }
                if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                fVar63 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
                if (*(long *)(lVar38 + 0x20) == 0) goto LAB_036afadc;
                FUN_0396b140(&stack0x000010a0,*(long *)(lVar38 + 0x20),0);
                fVar58 = (float)FUN_0396af70(&stack0x00000fc0,0);
                if (*(long *)(lVar38 + 0x20) == 0) goto LAB_036afadc;
                fVar60 = *(float *)(lVar38 + 0x2c);
                fVar45 = (float)FUN_0396b17c(*(long *)(lVar38 + 0x20),0);
                if (*in_stack_00000178 == 0) goto LAB_036afadc;
                in_stack_00000130 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
                if (*in_stack_00000178 == 0) goto LAB_036afadc;
                fVar47 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
                if (*in_stack_00000178 == 0) goto LAB_036afadc;
                fVar54 = *(float *)((long)unaff_x19 + 0x404);
                in_stack_00000180 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
                if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                in_stack_00000180 = fVar44 * fVar47 * fVar54 * in_stack_00000180;
                fVar46 = (fVar43 / (float)iVar12) * fVar51 * fVar46;
                in_stack_00000100 = fVar46 * (fVar63 / fVar58) * fVar60 * fVar45;
                fVar46 = fVar46 / in_stack_00000100;
                in_stack_00000130 = fVar46 * in_stack_00000130;
                fVar43 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
                fVar46 = fVar46 * fVar43;
              }
              else {
                if (*in_stack_000000b8 == 0) goto LAB_036afadc;
                iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
                if (*in_stack_000000b8 == 0) goto LAB_036afadc;
                fVar46 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
                if (*(long *)(lVar38 + 0x20) == 0) goto LAB_036afadc;
                fVar63 = *(float *)(lVar38 + 0x2c);
                fVar51 = fStack00000000000000a0;
                if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                  fVar51 = 1.0;
                }
                fVar58 = (float)FUN_0396b17c(*(long *)(lVar38 + 0x20),0);
                if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
                in_stack_00000130 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
                if (*in_stack_000000b8 == 0) goto LAB_036afadc;
                fVar45 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
                if (*in_stack_000000b8 == 0) goto LAB_036afadc;
                fVar60 = *(float *)((long)unaff_x19 + 0x404);
                in_stack_00000180 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
                if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
                in_stack_00000180 = fVar44 * fVar45 * fVar60 * in_stack_00000180;
                in_stack_00000100 = (fVar43 / (float)iVar12) * fVar46 * fVar51 * fVar63 * fVar58;
                fVar46 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
              }
              *in_stack_000000f8 = lVar38;
              thunk_FUN_01b4f09c(in_stack_000000f8,lVar38);
              if ((*in_stack_00000190 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
              lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)(lVar38 + 0x2c) = 1;
              *(float *)(lVar38 + 0x160) = in_stack_00000100;
              *(long *)(lVar38 + 0x40) = *in_stack_000000b8;
              thunk_FUN_01b4f09c();
              if ((*in_stack_00000190 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
              if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
              *(long *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
              thunk_FUN_01b4f09c();
              lVar38 = *in_stack_00000190;
              if ((lVar38 == 0) || (lVar26 = *(long *)(lVar38 + 0x38), lVar26 == 0))
              goto LAB_036afadc;
              if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
              in_stack_00000170._4_4_ = 0.0;
              in_stack_00000128 = CONCAT44(fVar46,fVar57);
              *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
              *(int *)(unaff_x19 + 0x24) = (int)lVar40;
              goto FUN_036a9b34;
            }
            goto LAB_036a9250;
          }
          if ((*in_stack_00000190 == 0) ||
             (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
          *in_stack_000000f8 = *(long *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
          thunk_FUN_01b4f09c(in_stack_000000f8);
        } while (*in_stack_000000f8 == 0);
        if ((*in_stack_00000190 == 0) ||
           (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *in_stack_00000178 = *(long *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
        thunk_FUN_01b4f09c(in_stack_00000178);
        if ((*in_stack_00000190 == 0) ||
           (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *in_stack_00000168 = *(long *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
        thunk_FUN_01b4f09c();
        if ((*in_stack_00000190 == 0) ||
           (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
        uVar16 = *unaff_x20;
        uVar42 = *(uint *)(lVar38 + 0x18);
        if (uVar42 <= uVar16) goto LAB_036afbe8;
        *(undefined4 *)(unaff_x19 + 0x24) =
             *(undefined4 *)(lVar38 + (long)(int)uVar16 * unaff_x24 + 0x58);
        if (unaff_w23 == 0) {
LAB_036a9778:
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar43 = *(float *)(unaff_x19 + 0x3d);
          iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
          lVar38 = unaff_x19[0x20];
        }
        else {
          lVar40 = unaff_x19[0x8f];
          if (lVar40 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar40 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
          if ((*(int *)(lVar40 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
             (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
          if (uVar42 <= uVar16 - 1) goto LAB_036afbe8;
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          fVar43 = *(float *)(lVar38 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
          iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
          lVar38 = *in_stack_00000178;
        }
        if (lVar38 == 0) goto LAB_036afadc;
        fVar46 = (float)FUN_0396ac34(lVar38 + 0x50,0);
        fVar44 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar44 = 1.0;
        }
        uVar62 = 0;
        in_stack_00000130 = 0.0;
        if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          in_stack_00000130 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
          if (*in_stack_00000178 == 0) goto LAB_036afadc;
          uVar62 = FUN_0396ac94(*in_stack_00000178 + 0x50,0);
        }
        lVar38 = unaff_x19[0xc9];
        if (lVar38 == 0) goto LAB_036afadc;
        in_stack_00000128 = CONCAT44(uVar62,fVar57);
        if (*(long *)(lVar38 + 0x20) == 0) goto LAB_036afadc;
        fVar57 = *(float *)((long)unaff_x19 + 0x404);
        fVar51 = *(float *)(lVar38 + 0x2c);
        in_stack_00000100 = (float)FUN_0396b17c(*(long *)(lVar38 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar63 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar58 = *(float *)((long)unaff_x19 + 0x404);
        in_stack_00000180 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        lVar38 = unaff_x19[0x6d];
        if ((lVar38 == 0) || (lVar40 = *(long *)(lVar38 + 0x38), lVar40 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar40 = lVar40 + (long)(int)*unaff_x20 * unaff_x24;
        *(undefined4 *)(lVar40 + 0x2c) = 0;
        fVar44 = ((in_stack_00000150 * fVar43) / (float)iVar12) * fVar46 * fVar44;
        in_stack_00000100 = fVar44 * fVar57 * fVar51 * in_stack_00000100;
        *(float *)(lVar40 + 0x160) = in_stack_00000100;
        uVar42 = *(uint *)(unaff_x19 + 0x24);
        in_stack_00000180 = fVar44 * fVar63 * fVar58 * in_stack_00000180;
        if (uVar42 == 0) {
          in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
        }
        else {
          lVar40 = unaff_x19[0xe1];
          if (lVar40 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar40 + 0x18) <= uVar42) goto LAB_036afbe8;
          lVar40 = *(long *)(lVar40 + (long)(int)uVar42 * 8 + 0x20);
          if (lVar40 == 0) goto LAB_036afadc;
          in_stack_00000170._4_4_ = *(float *)(lVar40 + 0x10c);
        }
FUN_036a9b34:
        unaff_s13 = 0.0;
        if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
          unaff_s13 = in_stack_00000100;
        }
LAB_036a9b50:
        lVar38 = *(long *)(lVar38 + 0x38);
        if (lVar38 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        lVar38 = lVar38 + (long)(int)*unaff_x20 * unaff_x24;
        *(short *)(lVar38 + 0x20) = (short)in_stack_0000109c;
        *(int *)(lVar38 + 0x60) = (int)unaff_x19[0x3d];
        *(undefined4 *)(lVar38 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
        if ((unaff_x19[0x6d] == 0) || (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(int *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
        if ((unaff_x19[0x6d] == 0) || (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(undefined4 *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
             *(undefined4 *)((long)unaff_x19 + 0x15c);
        if ((unaff_x19[0x6d] == 0) || (lVar38 = *(long *)(unaff_x19[0x6d] + 0x38), lVar38 == 0))
        goto LAB_036afadc;
        uVar42 = *unaff_x20;
        FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
        if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
        lVar38 = lVar38 + (long)(int)uVar42 * unaff_x24;
        *(undefined4 *)(lVar38 + 0x18c) = in_stack_000001e0;
        *(undefined8 *)(lVar38 + 0x184) = in_stack_000001d8;
        *(undefined8 *)(lVar38 + 0x17c) = in_stack_000001d0;
        if ((*in_stack_00000190 == 0) ||
           (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar38 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        *(undefined4 *)(lVar38 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
             *(undefined4 *)((long)unaff_x19 + 0x25c);
        if ((unaff_x19[0xc9] == 0) || (lVar38 = *(long *)(unaff_x19[0xc9] + 0x20), lVar38 == 0))
        goto LAB_036afadc;
        FUN_0396b140(&stack0x000001d0,lVar38,0);
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
          uVar52 = *unaff_x20;
          uVar16 = *(uint *)(*in_stack_000000f8 + 0x28);
          if ((int)uVar52 < (int)in_stack_00000090._4_4_) {
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= uVar52 + 1) goto LAB_036afbe8;
            lVar38 = *(long *)(lVar38 + (long)(int)(uVar52 + 1) * (long)iVar15 + 0x30);
            if ((((lVar38 == 0) || (*in_stack_00000178 == 0)) ||
                (lVar40 = *(long *)(*in_stack_00000178 + 0x128), lVar40 == 0)) ||
               (lVar40 = *(long *)(lVar40 + 0x18), lVar40 == 0)) goto LAB_036afadc;
            uVar19 = FUN_02630bd0(lVar40,uVar16 | *(int *)(lVar38 + 0x28) << 0x10,&stack0x00000fb8,
                                  *(undefined8 *)PTR_DAT_03d9c868);
            uVar62 = 0;
            if ((uVar19 & 1) == 0) {
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
            uVar52 = *unaff_x20;
          }
          else {
            uVar62 = 0;
            _fStack0000000000000138 = (ulong)uVar42 << 0x20;
            uVar55 = 0;
            unaff_s8 = 0.0;
          }
          unaff_d9 = (ulong)uVar55;
          if (0 < (int)uVar52) {
            if ((*in_stack_00000190 == 0) ||
               (lVar38 = *(long *)(*in_stack_00000190 + 0x38), lVar38 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar38 + 0x18) <= uVar52 - 1) goto LAB_036afbe8;
            lVar38 = *(long *)(lVar38 + (ulong)(uVar52 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
            if (((lVar38 == 0) || (*in_stack_00000178 == 0)) ||
               ((lVar40 = *(long *)(*in_stack_00000178 + 0x128), lVar40 == 0 ||
                (lVar40 = *(long *)(lVar40 + 0x18), lVar40 == 0)))) goto LAB_036afadc;
            uVar19 = FUN_02630bd0(lVar40,*(uint *)(lVar38 + 0x28) | uVar16 << 0x10,&stack0x00000fb8,
                                  *(undefined8 *)PTR_DAT_03d9c868);
            if ((uVar19 & 1) != 0) {
              if (in_stack_00000fb8 == 0) goto LAB_036afadc;
              uVar48 = (undefined4)_fStack0000000000000138;
              unaff_s8 = (float)FUN_036d2d10(unaff_s8,unaff_d9,_fStack0000000000000138 & 0xffffffff,
                                             uVar62,*(undefined4 *)(in_stack_00000fb8 + 0x28),
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
          fVar44 = *(float *)(unaff_x19 + 200);
          fVar43 = (float)FUN_0396af88(&stack0x00001050,0);
          fVar44 = fVar44 - unaff_s13 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
          *(float *)(unaff_x19 + 200) = fVar44;
          if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
            *(float *)(unaff_x19 + 200) =
                 fVar44 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
          }
        }
        fVar43 = *(float *)(unaff_x19 + 0x56);
        in_stack_00000098 = 0.0;
        if (fVar43 != 0.0) {
          fVar44 = (float)FUN_0396af68(&stack0x00001050,0);
          fVar57 = (float)FUN_0396af78(&stack0x00001050,0);
          in_stack_00000098 =
               (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
               (fVar43 * 0.5 - unaff_s13 * (fVar44 * 0.5 + fVar57));
          *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
        }
        unaff_x28 = in_stack_00000190;
        if (((*(int *)((long)unaff_x19 + 0x644) != 0) || (bVar3 != 0)) ||
           ((*(byte *)((long)unaff_x19 + 0x25c) & 1) == 0)) {
          lVar38 = *in_stack_00000168;
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_0391f968(lVar38,0,0);
          fStack00000000000000e4 = 0.0;
          fVar43 = unaff_s13;
          uVar20 = in_stack_00001088;
          if ((uVar19 & 1) == 0) {
LAB_036aa0ec:
            fVar44 = 0.0;
          }
          else {
            lVar38 = *in_stack_00000168;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar38 == 0) goto LAB_036afadc;
            uVar19 = FUN_038ffa04(lVar38,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
            if ((uVar19 & 1) == 0) goto LAB_036aa0ec;
            lVar38 = *in_stack_00000168;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar38 == 0) goto LAB_036afadc;
            uVar19 = FUN_038ffa04(lVar38,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
            if ((uVar19 & 1) == 0) goto LAB_036aa0ec;
            lVar38 = *in_stack_00000168;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar38 == 0) goto LAB_036afadc;
            fVar57 = (float)FUN_03900954(lVar38,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54)
                                         ,0);
            if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
            fVar46 = *(float *)(*in_stack_00000178 + 0x1a8);
            fVar44 = (float)FUN_03900954(*in_stack_00000168,
                                         *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
            fVar44 = fVar44 * fVar57 * fVar46 * 0.25;
            if (fVar57 < in_stack_00000170._4_4_ + fVar44) {
              in_stack_00000170._4_4_ = fVar57 - fVar44;
            }
          }
          goto LAB_036aa254;
        }
        lVar38 = *in_stack_00000168;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_0391f968(lVar38,0,0);
        fVar44 = 0.0;
      } while ((uVar19 & 1) == 0);
      lVar38 = *in_stack_00000168;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar38 == 0) goto LAB_036afadc;
      uVar19 = FUN_038ffa04(lVar38,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
    } while ((uVar19 & 1) == 0);
    param_1 = *unaff_x22;
    in_x9 = in_stack_00000168;
  }
LAB_036afadc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_036ad4b0:
  uVar42 = uVar16 - 1;
  if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x50), lVar26 == 0))
  goto LAB_036afadc;
  lVar37 = (long)(int)uVar42;
  lVar18 = lVar38 + lVar37 * 0x178;
  uVar55 = *(uint *)(lVar18 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar55) goto LAB_036afbe8;
  lVar35 = (long)(int)uVar55;
  lVar26 = lVar26 + lVar35 * 0x5c;
  lVar31 = *(long *)(lVar18 + 0x38);
  uVar4 = *(ushort *)(lVar18 + 0x20);
  uVar30 = *(uint *)(lVar26 + 0x3c);
  uVar41 = *(uint *)(lVar26 + 0x68);
  iVar2 = *(int *)(lVar26 + 0x20);
  iVar13 = *(int *)(lVar26 + 0x28);
  iVar14 = *(int *)(lVar26 + 0x2c);
  uVar6 = *(uint *)(lVar26 + 0x40);
  lVar18 = (long)(int)uVar6;
  fVar45 = *(float *)(lVar26 + 0x4c);
  fVar47 = *(float *)(lVar26 + 0x54);
  fVar63 = *(float *)(lVar26 + 0x58);
  fVar59 = *(float *)(lVar26 + 0x5c);
  fVar54 = *(float *)(lVar26 + 0x60);
  fVar56 = *(float *)(lVar26 + 0x6c);
  fVar61 = *(float *)(lVar26 + 0x70);
  fVar58 = *(float *)(lVar26 + 0x74);
  fVar60 = *(float *)(lVar26 + 0x78);
  uVar34 = (uint)uVar4;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar54 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar63;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar54 + fVar59 * 0.5) - fVar63 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar59 + fVar54) - fVar63;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar59 + fVar54;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar41 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar4 < 0xad) {
      if ((uVar4 != 3) && (uVar4 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar4 != 0xad) && ((uVar4 != 0x200b && (uVar4 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar38 + 0x18) <= uVar30) goto LAB_036afbe8;
      uVar5 = *(undefined2 *)(lVar38 + (long)(int)uVar30 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fde5f4(uVar5,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar55 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar63 <= fVar59) && (!bVar1 && uVar41 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar54;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar59 + fVar54;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar16 == 1) || (uVar55 != uVar52)) || (uVar42 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar54;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar59 + fVar54;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar34,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar54 = -fVar63;
        if (cVar23 != '\0') {
          fVar54 = fVar63;
        }
        if (*(uint *)(lVar38 + 0x18) <= uVar30) goto LAB_036afbe8;
        iVar14 = (int)*(char *)(lVar38 + (long)(int)uVar30 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar63 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar63 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar34 == 9) {
LAB_036af498:
          fVar63 = 1.0 - fVar63;
        }
        else {
          if (uVar34 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar19 = FUN_02fdea78(uVar34,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar19 & 1) != 0) goto LAB_036af498;
          }
          iVar14 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar13;
        }
        fVar63 = ((fVar59 + fVar54) * fVar63) / (float)iVar14;
        if (cVar23 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar63;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar63;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar63 = fVar56 + fVar58;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar38 + 0x18);
  if (uVar41 <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar38 + lVar37 * 0x178;
  fVar59 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar63 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar54 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_036adf70;
  iVar13 = *(int *)(lVar38 + lVar37 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_036add84;
  fVar51 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar55,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar25 = lVar38 + lVar37 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar51 = 1.0;
    break;
  case 1:
    fVar60 = *(float *)(lVar38 + lVar37 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar25 = lVar38 + lVar37 * 0x178;
      fVar58 = (in_stack_00000108._4_4_ + fVar60) - *(float *)(in_stack_00000088 + 0x230);
      fVar60 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar25 = lVar38 + lVar37 * 0x178;
    fVar58 = fVar58 - fVar56;
    *(float *)(lVar25 + 0x84) = fVar51 + (fVar60 - fVar56) / fVar58;
    *(float *)(lVar25 + 0xac) = fVar51 + (*(float *)(lVar25 + 0x98) - fVar56) / fVar58;
    *(float *)(lVar25 + 0xd4) = fVar51 + (*(float *)(lVar25 + 0xc0) - fVar56) / fVar58;
    fVar51 = fVar51 + (*(float *)(lVar25 + 0xe8) - fVar56) / fVar58;
    break;
  case 2:
    lVar25 = lVar38 + lVar37 * 0x178;
    fVar60 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar58 = (in_stack_00000108._4_4_ + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar25 + 0x84) = fVar51 + fVar58 / fVar60;
    *(float *)(lVar25 + 0xac) =
         fVar51 + ((in_stack_00000108._4_4_ + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar51 + ((in_stack_00000108._4_4_ + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar51 = fVar51 + ((in_stack_00000108._4_4_ + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar25 = lVar38 + lVar37 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = lVar38 + lVar37 * 0x178;
      fVar60 = fVar60 - fVar61;
      fVar58 = fVar51 + (*(float *)(lVar25 + 0x74) - fVar61) / fVar60;
      fVar60 = fVar51 + (*(float *)(lVar25 + 0x9c) - fVar61) / fVar60;
      *(float *)(lVar25 + 0x88) = fVar58;
      *(float *)(lVar25 + 0xb0) = fVar60;
      *(float *)(lVar25 + 0xd8) = fVar58;
      *(float *)(lVar25 + 0x100) = fVar60;
      break;
    case 2:
      lVar25 = lVar38 + lVar37 * 0x178;
      fVar58 = fVar51 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar25 + 0x88) = fVar58;
      fVar60 = *(float *)(unaff_x19 + 0x9c);
      fVar56 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar25 + 0xd8) = fVar58;
      fVar58 = fVar51 + (*(float *)(lVar25 + 0x9c) - fVar60) / (fVar56 - fVar60);
      *(float *)(lVar25 + 0xb0) = fVar58;
      *(float *)(lVar25 + 0x100) = fVar58;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar41 = (uint)*(undefined8 *)(lVar38 + 0x18);
    }
    if (uVar41 <= uVar42) goto LAB_036afbe8;
    lVar25 = lVar38 + lVar37 * 0x178;
    fVar58 = *(float *)(lVar25 + 0x15c);
    fVar60 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar58) * 0.5;
    fVar56 = fVar51 + *(float *)(lVar25 + 0x88) * fVar58 + fVar60;
    fVar51 = fVar51 + fVar60 + *(float *)(lVar25 + 0xb0) * fVar58;
    *(float *)(lVar25 + 0x84) = fVar56;
    *(float *)(lVar25 + 0xac) = fVar56;
    *(float *)(lVar25 + 0xd4) = fVar51;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar38 + lVar37 * 0x178 + 0xfc) = fVar51;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar41 <= uVar42) goto LAB_036afbe8;
    lVar25 = lVar38 + lVar37 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (uVar42 < uVar41) {
      lVar25 = lVar38 + lVar37 * 0x178;
      fVar45 = fVar45 - fVar47;
      fVar51 = (*(float *)(lVar25 + 0x74) - fVar47) / fVar45;
      fVar45 = (*(float *)(lVar25 + 0x9c) - fVar47) / fVar45;
      *(float *)(lVar25 + 0x88) = fVar51;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar41 <= uVar42) goto LAB_036afbe8;
    lVar25 = lVar38 + lVar37 * 0x178;
    fVar51 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar25 + 0x88) = fVar51;
    fVar45 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar25 + 0xb0) = fVar45;
    *(float *)(lVar25 + 0xd8) = fVar45;
    *(float *)(lVar25 + 0x100) = fVar51;
    break;
  case 3:
    if (uVar41 <= uVar42) goto LAB_036afbe8;
    lVar25 = lVar38 + lVar37 * 0x178;
    fVar45 = *(float *)(lVar25 + 0x15c);
    fVar58 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar45) * 0.5;
    fVar51 = *(float *)(lVar25 + 0x84) / fVar45 + fVar58;
    fVar58 = fVar58 + *(float *)(lVar25 + 0xd4) / fVar45;
    *(float *)(lVar25 + 0x88) = fVar51;
    *(float *)(lVar25 + 0xb0) = fVar58;
    *(float *)(lVar25 + 0x100) = fVar51;
    *(float *)(lVar25 + 0xd8) = fVar58;
  }
  if (uVar41 <= uVar42) goto LAB_036afbe8;
  lVar25 = lVar38 + lVar37 * 0x178;
  fVar51 = *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar38 + lVar37 * 0x178 + 400) & 1) != 0)) {
    fVar51 = -fVar51;
  }
  fVar58 = fVar43;
  if (((iVar12 == 2) || (fVar58 = fVar57, iVar12 == 1)) || (fVar58 = fVar43 / fVar44, iVar12 == 0))
  {
    fVar51 = fVar58 * fVar51;
  }
  lVar25 = lVar38 + lVar37 * 0x178;
  fVar45 = *(float *)(lVar25 + 0x88);
  fVar60 = *(float *)(lVar25 + 0x84);
  fVar58 = -2.1474836e+09;
  if (fVar60 != INFINITY) {
    fVar58 = (float)(int)fVar60;
  }
  fVar56 = *(float *)(lVar25 + 0xd4);
  fVar61 = *(float *)(lVar25 + 0xd8);
  fVar47 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar47 = (float)(int)fVar45;
  }
  uVar48 = FUN_036f2b00(fVar60 - fVar58,fVar45 - fVar47);
  *(undefined4 *)(lVar25 + 0x84) = uVar48;
  if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
  fVar61 = fVar61 - fVar47;
  *(float *)(lVar25 + 0x88) = fVar51;
  uVar48 = FUN_036f2b00(fVar60 - fVar58,fVar61);
  *(undefined4 *)(lVar38 + lVar37 * 0x178 + 0xac) = uVar48;
  if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
  fVar56 = fVar56 - fVar58;
  *(float *)(lVar38 + lVar37 * 0x178 + 0xb0) = fVar51;
  fVar58 = (float)FUN_036f2b00(fVar56,fVar61);
  *(float *)(lVar25 + 0xd4) = fVar58;
  if (*(uint *)(lVar38 + 0x18) <= uVar42) goto LAB_036afbe8;
  *(float *)(lVar25 + 0xd8) = fVar51;
  uVar48 = FUN_036f2b00(fVar56,fVar45 - fVar47);
  *(undefined4 *)(lVar38 + lVar37 * 0x178 + 0xfc) = uVar48;
  uVar41 = (uint)*(undefined8 *)(lVar38 + 0x18);
  if (uVar41 <= uVar42) goto LAB_036afbe8;
  *(float *)(lVar38 + lVar37 * 0x178 + 0x100) = fVar51;
LAB_036add84:
  if (((int)uVar42 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000e4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar55 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar41 <= uVar42) goto LAB_036afbe8;
      lVar26 = lVar38 + lVar37 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar54 + *(float *)(lVar26 + 0x78);
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar54 + *(float *)(lVar26 + 0xa0);
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar54 + *(float *)(lVar26 + 200);
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar54 + *(float *)(lVar26 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar55 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar42 < uVar41) {
        if (*(uint *)(lVar38 + lVar37 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar26 = lVar38 + lVar37 * 0x178;
          *(ulong *)(lVar26 + 0x70) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar26 + 0x70));
          *(float *)(lVar26 + 0x78) = fVar54 + *(float *)(lVar26 + 0x78);
          *(ulong *)(lVar26 + 0x98) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar26 + 0x98));
          *(float *)(lVar26 + 0xa0) = fVar54 + *(float *)(lVar26 + 0xa0);
          *(ulong *)(lVar26 + 0xc0) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar26 + 0xc0));
          *(float *)(lVar26 + 200) = fVar54 + *(float *)(lVar26 + 200);
          *(ulong *)(lVar26 + 0xe8) =
               CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar26 + 0xe8));
          *(float *)(lVar26 + 0xf0) = fVar54 + *(float *)(lVar26 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar41 <= uVar42) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar41 = *(uint *)(lVar38 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar48 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar25 = lVar38 + lVar37 * 0x178;
  *(undefined8 *)(lVar25 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar48;
  if (uVar41 <= uVar42) goto LAB_036afbe8;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar25 = lVar38 + lVar37 * 0x178;
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar48;
  uVar48 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar48;
  *(undefined1 *)(lVar26 + 0x194) = 0;
LAB_036adf28:
  if (iVar13 == 0) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar28)();
  }
  else if (iVar13 == 1) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar26 + lVar37 * 0x178;
  uVar20 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar63 + (float)((ulong)uVar20 >> 0x20),fVar59 + (float)uVar20);
  *(float *)(lVar26 + 0x124) = fVar54 + *(float *)(lVar26 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar26 + lVar37 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar54 + *(float *)(lVar26 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar26 + lVar37 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar54 + *(float *)(lVar26 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  lVar26 = lVar26 + lVar37 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar59 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar63 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *in_stack_00000190;
  if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x38), lVar25 == 0)) goto LAB_036afadc;
  uVar41 = *(uint *)(lVar25 + 0x18);
  if (uVar41 <= uVar42) goto LAB_036afbe8;
  lVar32 = lVar25 + lVar37 * 0x178;
  uVar49 = CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar32 + 0x140) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar32 + 0x140));
  fVar58 = fVar63 + *(float *)(lVar32 + 0x150);
  uVar50 = (ulong)(uint)fVar58;
  uVar53 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar32 + 0x148) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar32 + 0x148));
  *(float *)(lVar32 + 0x150) = fVar58;
  *(ulong *)(lVar32 + 0x140) = uVar49;
  *(ulong *)(lVar32 + 0x148) = uVar53;
  if (uVar55 == uVar52) {
    uVar52 = *unaff_x20 - 1;
    if (uVar42 == uVar52) goto LAB_036ae17c;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar32 = (long)(int)uVar52;
    lVar33 = lVar26 + lVar32 * 0x5c;
    uVar53 = (ulong)(uint)*(float *)(lVar33 + 0x58);
    fVar58 = fVar63 + *(float *)(lVar33 + 0x54);
    uVar49 = (ulong)(uint)fVar58;
    fVar45 = fVar59 + *(float *)(lVar33 + 0x58);
    uVar50 = (ulong)(uint)fVar45;
    *(ulong *)(lVar33 + 0x4c) =
         CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar33 + 0x4c));
    *(float *)(lVar33 + 0x54) = fVar58;
    *(float *)(lVar33 + 0x58) = fVar45;
    if (uVar41 <= *(uint *)(lVar33 + 0x34)) goto LAB_036afbe8;
    uVar48 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar32 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar58;
    *(undefined4 *)(lVar26 + 0x6c) = uVar48;
    lVar26 = *in_stack_00000190;
    if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_036afadc;
    uVar52 = *(uint *)(lVar25 + lVar32 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar25 = lVar25 + lVar32 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar52 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar52 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar42 == uVar52) {
      lVar26 = *in_stack_00000190;
      if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar32 = lVar25 + lVar35 * 0x5c;
      uVar53 = (ulong)(uint)*(float *)(lVar32 + 0x58);
      uVar49 = CONCAT44(fVar63 + (float)((ulong)*(undefined8 *)(lVar32 + 0x4c) >> 0x20),
                        fVar63 + (float)*(undefined8 *)(lVar32 + 0x4c));
      fVar58 = fVar63 + *(float *)(lVar32 + 0x54);
      fVar59 = fVar59 + *(float *)(lVar32 + 0x58);
      uVar50 = (ulong)(uint)fVar59;
      *(ulong *)(lVar32 + 0x4c) = uVar49;
      *(float *)(lVar32 + 0x54) = fVar58;
      *(float *)(lVar32 + 0x58) = fVar59;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar32 + 0x34)) goto LAB_036afbe8;
      uVar48 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar32 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar35 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar58;
      *(undefined4 *)(lVar25 + 0x6c) = uVar48;
      lVar26 = *in_stack_00000190;
      if ((lVar26 == 0) || (lVar25 = *(long *)(lVar26 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_036afadc;
      uVar52 = *(uint *)(lVar25 + lVar35 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_036afbe8;
      lVar25 = lVar25 + lVar35 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar52 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar19 = FUN_02fddb80(uVar34,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar34 - 0x2010)) && (uVar34 != 0xad)) && (uVar34 != 0x2d)) {
    if (bVar7) {
      if (((uVar16 != 1) && ((int)uVar42 < (int)(*(uint *)(lVar38 + 0x18) - 1))) &&
         (((int)uVar42 < (int)*unaff_x20 && ((uVar34 == 0x2019 || (uVar34 == 0x27)))))) {
        if (*(uint *)(lVar38 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
        uVar5 = *(undefined2 *)(lVar38 + lVar40 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fddb80(uVar5,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar38 + 0x18) <= uVar16) goto LAB_036afbe8;
          uVar5 = *(undefined2 *)(lVar38 + lVar40 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_02fddb80(uVar5,0);
          if ((uVar19 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar16 != 1) {
LAB_036aeea4:
        bVar7 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fddab4(uVar34,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdb080(uVar34,0);
        if (((uVar34 != 0x200b) && ((uVar19 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar42 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fddb80(uVar34,0);
      iVar13 = (int)fStack0000000000000138;
      if ((uVar19 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar13 = uVar16 - 2;
    }
    lVar26 = *in_stack_00000190;
    if (lVar26 == 0) goto LAB_036afadc;
    lVar25 = *(long *)(lVar26 + 0x40);
    if (lVar25 == 0) goto LAB_036afadc;
    uVar52 = *(uint *)(lVar26 + 0x24);
    iVar14 = *(int *)(lVar25 + 0x18);
    if (iVar14 < (int)(uVar52 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar26 + 0x40),iVar14 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar26 = *in_stack_00000190;
      if (lVar26 == 0) goto LAB_036afadc;
    }
    lVar26 = *(long *)(lVar26 + 0x40);
    if (lVar26 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_036afbe8;
    lVar26 = lVar26 + (long)(int)uVar52 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(float *)(lVar26 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar26 + 0x2c) = iVar13;
    *(int *)(lVar26 + 0x30) = (iVar13 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar26 = unaff_x19[0x6d];
    if (lVar26 == 0) goto LAB_036afadc;
    lVar25 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar25 = lVar25 + lVar35 * 0x5c;
    bVar7 = false;
    fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000170._4_4_ = (float)uVar42;
    }
    if (uVar42 == *unaff_x20 - 1) {
      lVar26 = *in_stack_00000190;
      if (lVar26 == 0) goto LAB_036afadc;
      lVar25 = *(long *)(lVar26 + 0x40);
      if (lVar25 == 0) goto LAB_036afadc;
      uVar52 = *(uint *)(lVar26 + 0x24);
      iVar13 = *(int *)(lVar25 + 0x18);
      if (iVar13 < (int)(uVar52 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar26 + 0x40),iVar13 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar26 = *in_stack_00000190;
        if (lVar26 == 0) goto LAB_036afadc;
      }
      lVar26 = *(long *)(lVar26 + 0x40);
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar52) goto LAB_036afbe8;
      lVar26 = lVar26 + (long)(int)uVar52 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(float *)(lVar26 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar26 + 0x2c) = uVar42;
      *(uint *)(lVar26 + 0x30) = uVar16 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar26 = unaff_x19[0x6d];
      if (lVar26 == 0) goto LAB_036afadc;
      lVar25 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar25 = lVar25 + lVar35 * 0x5c;
      fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar7 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  uVar52 = *(uint *)(lVar26 + 0x18);
  if (uVar52 <= uVar42) goto LAB_036afbe8;
  if ((*(byte *)(lVar26 + lVar37 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar52 <= uVar16 - 2) goto LAB_036afbe8;
      lVar35 = *unaff_x19;
      uVar52 = *(uint *)(lVar26 + lVar40 + -0x330);
      uVar48 = *(undefined4 *)(lVar26 + lVar40 + -0x2f8);
LAB_036ae924:
      pcVar28 = *(code **)(lVar35 + 0x908);
LAB_036ae92c:
      uVar53 = (ulong)uVar52;
      uVar49 = (ulong)(uint)_bStack0000000000000078;
      uVar50 = (ulong)_bStack000000000000007c;
      (*pcVar28)(fStack0000000000000080,uVar49,uVar50,uVar53,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar48);
      puVar8 = PTR_DAT_03d9c920;
      lVar26 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar26 = *(long *)puVar8;
      }
LAB_036ae980:
      bVar11 = false;
      fVar46 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar11 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar37 * 0x178;
    iVar13 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar55)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
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
    uVar19 = FUN_02fdb080(uVar34,0);
    if ((uVar34 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar26 = *in_stack_00000190;
      if ((lVar26 == 0) || (lVar35 = *(long *)(lVar26 + 0x38), lVar35 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar35 + 0x18) <= uVar42) goto LAB_036afbe8;
      fVar58 = *(float *)(lVar35 + lVar37 * 0x178 + 0x160);
      if (fVar46 <= fVar58) {
        fVar46 = fVar58;
      }
      if (fStack0000000000000110 <= ABS(fVar51)) {
        fStack0000000000000110 = ABS(fVar51);
      }
      if (iVar13 != iStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar26 = *in_stack_00000190;
          if (lVar26 == 0) goto LAB_036afadc;
          lVar35 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar35 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar35 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar45 = *(float *)(lVar26 + lVar37 * 0x178 + 0x14c);
      fVar58 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar45 = fVar45 + fVar46 * fVar58;
      if (fVar45 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar45;
      }
      uVar49 = (ulong)(uint)fStack0000000000000114;
      iStack0000000000000074 = iVar13;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar42)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar42 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdea78(uVar34,0);
        if ((uVar19 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar26 = lVar26 + lVar37 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar26 + 0x160);
      fStack0000000000000080 = *(float *)(lVar26 + 0x11c);
      uVar50 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar46 != 0.0;
      fVar58 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar58 = fVar46;
      }
      fVar46 = fVar58;
      uVar62 = *(undefined4 *)(lVar26 + 0x168);
      _bStack000000000000007c = 0;
      fVar58 = fVar51;
      if (bVar11) {
        fVar58 = fStack0000000000000110;
      }
      uVar49 = (ulong)(uint)fVar58;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar58;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0))
      {
        if (uVar42 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar37 * 0x178;
          lVar35 = *unaff_x19;
          uVar52 = *(uint *)(lVar26 + 0x128);
          uVar48 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar42 == uVar30) || ((int)uVar6 <= (int)uVar42)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fdb080(uVar34,0);
      if ((*in_stack_00000190 != 0) && (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0))
      {
        lVar35 = lVar37;
        uVar52 = uVar42;
        if (uVar34 == 0x200b || (uVar19 & 1) != 0) {
          lVar35 = lVar18;
          uVar52 = uVar6;
        }
        if (uVar52 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar35 * 0x178;
          uVar52 = *(uint *)(lVar26 + 0x128);
          uVar48 = *(undefined4 *)(lVar26 + 0x160);
          pcVar28 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0))
      {
        uVar52 = *(uint *)(lVar26 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar42 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar16) goto LAB_036afbe8;
      uVar19 = FUN_036c0e18(uVar62,*(undefined4 *)(lVar26 + lVar40),0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0)) {
          if (uVar42 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar37 * 0x178;
            uVar53 = (ulong)*(uint *)(lVar26 + 0x128);
            uVar50 = (ulong)_bStack000000000000007c;
            uVar49 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar49,uVar50,uVar53,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar26 + 0x160));
            puVar8 = PTR_DAT_03d9c920;
            lVar26 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar26 = *(long *)puVar8;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar11 = true;
  }
LAB_036ae99c:
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
  if (lVar31 == 0) goto LAB_036afadc;
  uVar52 = *(uint *)(lVar26 + lVar37 * 0x178 + 400);
  fVar58 = (float)FUN_0396ad04(lVar31 + 0x50,0);
  if ((uVar52 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
      uVar52 = *(uint *)(lVar26 + lVar40 + -0x330);
      fVar63 = *(float *)(lVar26 + lVar40 + -0x30c);
      pcVar28 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar53 = (ulong)uVar52;
      uVar49 = (ulong)(uint)fStack00000000000000a4;
      uVar50 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar28)(fStack00000000000000a8,uVar49,uVar50,uVar53,
                 fStack00000000000000b0 * fVar58 + fVar63,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar26 = *in_stack_00000190;
    if ((lVar26 == 0) || (lVar35 = *(long *)(lVar26 + 0x38), lVar35 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar35 + 0x18) <= uVar42) goto LAB_036afbe8;
    *(int *)(lVar35 + lVar37 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar55)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar35 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar42)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar42 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdea78(uVar34,0);
        if ((uVar19 & 1) != 0) goto LAB_036aeb20;
        lVar26 = *in_stack_00000190;
        if (lVar26 == 0) goto LAB_036afadc;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_036afbe8;
      lVar26 = lVar26 + lVar37 * 0x178;
      fStack000000000000004c = *(float *)(lVar26 + 0x60);
      fStack0000000000000040 = *(float *)(lVar26 + 0x14c);
      uVar49 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar26 + 0x11c);
      uVar50 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar26 + 0x160);
      fStack00000000000000a4 = fVar58 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar52 = *unaff_x20;
    if (uVar52 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0))
      {
        if (uVar42 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar37 * 0x178;
          lVar18 = *unaff_x19;
          uVar52 = *(uint *)(lVar26 + 0x128);
          fVar63 = *(float *)(lVar26 + 0x14c);
LAB_036aec8c:
          pcVar28 = *(code **)(lVar18 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar42 == uVar30) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar19 = FUN_02fdb080(uVar34,0);
      if ((*in_stack_00000190 != 0) && (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0))
      {
        uVar52 = *(uint *)(lVar26 + 0x18);
        if (uVar34 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar52 <= uVar6) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar18 = lVar37;
          if (uVar52 <= uVar42) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar26 = lVar26 + lVar18 * 0x178;
        fVar63 = *(float *)(lVar26 + 0x14c);
        uVar52 = *(uint *)(lVar26 + 0x128);
        pcVar28 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar42 < (int)uVar52) {
      lVar26 = *in_stack_00000190;
      if ((lVar26 != 0) && (lVar35 = *(long *)(lVar26 + 0x38), lVar35 != 0)) {
        if (uVar16 < *(uint *)(lVar35 + 0x18)) {
          if (*(float *)(lVar35 + lVar40 + -0x108) == fStack000000000000004c) {
            fVar45 = *(float *)(lVar35 + lVar40 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar49 = (ulong)(uint)fStack0000000000000040;
            uVar19 = FUN_036c122c(fVar63 + fVar45,uVar49,0);
            if ((uVar19 & 1) != 0) {
              uVar52 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar26 = *in_stack_00000190;
            if (lVar26 == 0) goto LAB_036afadc;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar52 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar42 <= (int)uVar6) goto LAB_036aef20;
            if (uVar6 < uVar52) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar42 < (int)uVar52) {
      iVar13 = FUN_03922ce0(lVar31,0);
      if (*(uint *)(lVar38 + 0x18) <= uVar16) goto LAB_036afbe8;
      lVar26 = *(long *)(lVar38 + lVar40 + -0x130);
      if (lVar26 == 0) goto LAB_036afadc;
      iVar14 = FUN_03922ce0(lVar26,0);
      if (iVar13 != iVar14) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar18 = *unaff_x19;
          uVar52 = *(uint *)(lVar26 + lVar40 + -0x330);
          fVar63 = *(float *)(lVar26 + lVar40 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
  goto LAB_036afadc;
  uVar52 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar52 <= uVar42) goto LAB_036afbe8;
  if ((*(byte *)(lVar26 + lVar37 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar50 = (ulong)in_stack_000000c0._4_4_;
      uVar49 = (ulong)(uint)fStack00000000000000ec;
      uVar53 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar49,uVar50,uVar53,fStack00000000000000d8,uVar50);
    }
LAB_036aefe8:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar42) || ((int)unaff_x19[0x66] < (int)uVar55)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar26 + lVar37 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar34 == 0xd) || ((uVar34 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar42)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar42 == uVar6) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdea78(uVar34,0);
        if ((uVar19 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar18 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar18 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
      goto LAB_036afadc;
      uVar52 = (uint)*(undefined8 *)(lVar26 + 0x18);
      if (uVar52 <= uVar42) goto LAB_036afbe8;
      lVar18 = *(long *)(lVar18 + 0xb8);
      lVar31 = lVar26 + lVar37 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar31 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar31 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar18 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar18 + 0x159c);
      in_stack_00001080 = *(float *)(lVar31 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar18 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar18 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar52 <= uVar42) goto LAB_036afbe8;
    lVar26 = lVar26 + lVar37 * 0x178;
    fVar58 = *(float *)(lVar26 + 0x128);
    fVar47 = *(float *)(lVar26 + 0x188);
    uVar17 = *(undefined8 *)(lVar26 + 0x17c);
    fVar56 = *(float *)(lVar26 + 0x184);
    uVar20 = *(undefined8 *)(lVar26 + 0x184);
    fVar54 = *(float *)(lVar26 + 0x18c);
    fVar63 = *(float *)(lVar26 + 0x11c);
    fVar45 = *(float *)(lVar26 + 0x148);
    fVar60 = *(float *)(lVar26 + 0x150);
    in_stack_00000198 = uVar17;
    fStack00000000000001a0 = fVar56;
    fStack00000000000001a4 = fVar47;
    in_stack_000001a8 = fVar54;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar19 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar26 = *(long *)PTR_DAT_03d9c888;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar26);
      }
      fVar58 = fVar58 + (float)in_stack_00001078;
      uVar50 = (ulong)(uint)fVar58;
      fVar63 = fVar63 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar45 = fVar45 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar53 = (ulong)(uint)fVar45;
      if (fVar63 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar63;
      }
      if (fVar60 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar60 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar58) {
        fStack00000000000000d4 = fVar58;
      }
      uVar49 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar45) {
        fStack00000000000000d8 = fVar45;
      }
    }
    else {
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar26);
      }
      fVar63 = (fVar63 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar53 = (ulong)(uint)fVar63;
      if (fVar60 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar60;
      }
      uVar49 = (ulong)(uint)fStack00000000000000ec;
      uVar50 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar45) {
        fStack00000000000000d8 = fVar45;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar49,uVar50,uVar53,fStack00000000000000d8,uVar50);
      fStack00000000000000ec = fVar60 - fVar54;
      fStack00000000000000d4 = fVar58 + fVar56;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar45 + fVar47;
      fStack00000000000000e8 = fVar63;
      in_stack_00001070 = uVar17;
      in_stack_00001078 = uVar20;
      in_stack_00001080 = fVar54;
    }
    if (((*unaff_x20 == 1) || (uVar42 == uVar30)) || (((int)uVar6 <= (int)uVar42 || (!bVar1)))) {
      uVar50 = (ulong)in_stack_000000c0._4_4_;
      uVar49 = (ulong)(uint)fStack00000000000000ec;
      uVar53 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar49,uVar50,uVar53,fStack00000000000000d8,uVar50);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar42 = *unaff_x20;
  lVar40 = lVar40 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar42 <= (int)uVar16;
  uVar16 = uVar16 + 1;
  uVar52 = uVar55;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar38 = *in_stack_00000190;
  if (lVar38 == 0) goto LAB_036afadc;
  iVar15 = uVar55 + 1;
  plVar39 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
  *(uint *)(lVar38 + 0x18) = uVar42;
  lVar40 = unaff_x19[0xd4];
  *(int *)(lVar38 + 0x2c) = iVar15;
  if ((int)uVar42 < 1 || fStack00000000000000e4 == 0.0) {
    fStack00000000000000e4 = 1.4013e-45;
  }
  *(int *)(lVar38 + 0x1c) = (int)lVar40;
  *(float *)(lVar38 + 0x24) = fStack00000000000000e4;
  *(int *)(lVar38 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_036acd60:
    if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036c03d8();
    return;
  }
  lVar38 = unaff_x19[0xdf];
  if (lVar38 != 0) {
    (**(code **)(lVar38 + 0x18))
              (*(undefined8 *)(lVar38 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar38 + 0x28));
  }
  if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
  iVar15 = FUN_03afacb8(unaff_x19[0xe5],0);
  if (iVar15 != 0x19) {
    lVar38 = unaff_x19[0xe5];
    if (lVar38 == 0) goto LAB_036afadc;
    uVar42 = FUN_03afacb8(lVar38,0);
    FUN_03afacf4(lVar38,uVar42 | 0x19,0);
  }
  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
    if ((*in_stack_00000190 == 0) || (lVar38 = *(long *)(*in_stack_00000190 + 0x60), lVar38 == 0))
    goto LAB_036afadc;
    if (*(int *)(*plVar39 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (*(int *)(lVar38 + 0x18) == 0) goto LAB_036afbe8;
    FUN_036fa678(lVar38 + 0x20,1,0);
  }
  if (unaff_x19[0x74] != 0) {
    FUN_03904fd4(unaff_x19[0x74],0);
    if ((unaff_x19[0x6d] != 0) && (lVar38 = *(long *)(unaff_x19[0x6d] + 0x60), lVar38 != 0)) {
      if (*(int *)(lVar38 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (unaff_x19[0x74] != 0) {
        FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar38 + 0x30),0);
        if ((unaff_x19[0x6d] != 0) && (lVar38 = *(long *)(unaff_x19[0x6d] + 0x60), lVar38 != 0)) {
          if (*(int *)(lVar38 + 0x18) == 0) goto LAB_036afbe8;
          if (unaff_x19[0x74] != 0) {
            FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar38 + 0x48),0);
            if ((unaff_x19[0x6d] != 0) && (lVar38 = *(long *)(unaff_x19[0x6d] + 0x60), lVar38 != 0))
            {
              if (*(int *)(lVar38 + 0x18) == 0) goto LAB_036afbe8;
              if (unaff_x19[0x74] != 0) {
                FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar38 + 0x50),0);
                if ((unaff_x19[0x6d] != 0) &&
                   (lVar38 = *(long *)(unaff_x19[0x6d] + 0x60), lVar38 != 0)) {
                  if (*(int *)(lVar38 + 0x18) == 0) goto LAB_036afbe8;
                  if (unaff_x19[0x74] != 0) {
                    FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar38 + 0x58),0);
                    if (unaff_x19[0x74] != 0) {
                      FUN_03904ddc(unaff_x19[0x74],0);
                      if (unaff_x19[0xe4] != 0) {
                        FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          uVar20 = FUN_03af892c(unaff_x19[0xe4],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar42 = FUN_03af8794(unaff_x19[0xe4],0);
                            lVar38 = *in_stack_00000190;
                            if (lVar38 != 0) {
                              lVar26 = 0;
                              lVar40 = 0;
                              do {
                                uVar19 = lVar40 + 1;
                                if ((long)*(int *)(lVar38 + 0x34) <= (long)uVar19)
                                goto LAB_036acd60;
                                lVar38 = *(long *)(lVar38 + 0x60);
                                if (lVar38 == 0) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_01ac7298();
                                }
                                if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                FUN_036fa544(lVar38 + lVar26 + 0x70,0);
                                lVar38 = unaff_x19[0xe1];
                                if (lVar38 == 0) break;
                                if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                uVar17 = *(undefined8 *)(lVar38 + lVar40 * 8 + 0x28);
                                if (*(int *)(*(long *)
                                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                            + 0xe0) == 0) {
                                  thunk_FUN_01ac7298();
                                }
                                uVar21 = FUN_03922f24(uVar17,0,0);
                                if ((uVar21 & 1) == 0) {
                                  if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar38 = *(long *)(*in_stack_00000190 + 0x60), lVar38 == 0))
                                    break;
                                    if (*(int *)(*plVar39 + 0xe0) == 0) {
                                      thunk_FUN_01ac7298();
                                    }
                                    if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                    FUN_036fa678(lVar38 + lVar26 + 0x70,1,0);
                                  }
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if (lVar38 == 0) break;
                                  lVar38 = FUN_03702ba4(lVar38,0);
                                  if ((*in_stack_00000190 == 0) ||
                                     (lVar18 = *(long *)(*in_stack_00000190 + 0x60), lVar18 == 0))
                                  break;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  if (lVar38 == 0) break;
                                  FUN_0390262c(lVar38,*(undefined8 *)(lVar18 + lVar26 + 0x80),0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if (lVar38 == 0) break;
                                  lVar38 = FUN_03702ba4(lVar38,0);
                                  if ((*in_stack_00000190 == 0) ||
                                     (lVar18 = *(long *)(*in_stack_00000190 + 0x60), lVar18 == 0))
                                  break;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  if (lVar38 == 0) break;
                                  FUN_03902830(lVar38,*(undefined8 *)(lVar18 + lVar26 + 0x98),0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if (lVar38 == 0) break;
                                  lVar38 = FUN_03702ba4(lVar38,0);
                                  if ((*in_stack_00000190 == 0) ||
                                     (lVar18 = *(long *)(*in_stack_00000190 + 0x60), lVar18 == 0))
                                  break;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  if (lVar38 == 0) break;
                                  FUN_039028dc(lVar38,*(undefined8 *)(lVar18 + lVar26 + 0xa0),0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if (lVar38 == 0) break;
                                  lVar38 = FUN_03702ba4(lVar38,0);
                                  if ((*in_stack_00000190 == 0) ||
                                     (lVar18 = *(long *)(*in_stack_00000190 + 0x60), lVar18 == 0))
                                  break;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  if (lVar38 == 0) break;
                                  FUN_03902a3c(lVar38,*(undefined8 *)(lVar18 + lVar26 + 0xa8),0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if ((lVar38 == 0) ||
                                     (lVar38 = FUN_03702ba4(lVar38,0), lVar38 == 0)) break;
                                  FUN_03904ddc(lVar38,0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if (lVar38 == 0) break;
                                  lVar38 = FUN_039add2c(lVar38,0);
                                  lVar18 = unaff_x19[0xe1];
                                  if (lVar18 == 0) break;
                                  if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar18 = *(long *)(lVar18 + lVar40 * 8 + 0x28);
                                  if ((lVar18 == 0) ||
                                     (uVar17 = FUN_03702ba4(lVar18,0), lVar38 == 0)) break;
                                  FUN_03af8c9c(lVar38,uVar17,0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if ((lVar38 == 0) ||
                                     (lVar38 = FUN_039add2c(lVar38,0), lVar38 == 0)) break;
                                  FUN_03af8894(uVar20,uVar49,uVar50,uVar53,lVar38,0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  lVar38 = *(long *)(lVar38 + lVar40 * 8 + 0x28);
                                  if ((lVar38 == 0) ||
                                     (lVar38 = FUN_039add2c(lVar38,0), lVar38 == 0)) break;
                                  FUN_03af87d0(lVar38,uVar42 & 1,0);
                                  lVar38 = unaff_x19[0xe1];
                                  if (lVar38 == 0) break;
                                  if (*(uint *)(lVar38 + 0x18) <= uVar19) goto LAB_036afbe8;
                                  plVar36 = *(long **)(lVar38 + lVar40 * 8 + 0x28);
                                  uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                  if (plVar36 == (long *)0x0) break;
                                  (**(code **)(*plVar36 + 0x2c8))
                                            (plVar36,uVar16 & 1,*(undefined8 *)(*plVar36 + 0x2d0));
                                }
                                lVar38 = *in_stack_00000190;
                                lVar40 = lVar40 + 1;
                                lVar26 = lVar26 + 0x50;
                              } while (lVar38 != 0);
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
  goto LAB_036afadc;
}


