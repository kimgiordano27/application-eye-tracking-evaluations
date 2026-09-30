/*
FUNCTION_NAME: FUN_040e8218
ENTRY_POINT: 040e8218
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_10;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_040e8218(void)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  uint uVar25;
  float *pfVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float *pfVar37;
  long in_x12;
  long lVar38;
  long unaff_x19;
  char cVar39;
  long unaff_x20;
  long unaff_x21;
  uint uVar40;
  long lVar41;
  long *plVar42;
  long *unaff_x22;
  undefined8 uVar43;
  byte unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint uVar44;
  uint unaff_w26;
  ulong unaff_x27;
  long *unaff_x28;
  uint *puVar45;
  uint *unaff_x29;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  ulong uVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_s13;
  float fVar69;
  float fVar70;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  float fStack0000000000000034;
  int *in_stack_00000038;
  float fStack0000000000000040;
  float fStack0000000000000044;
  long *in_stack_00000058;
  float fStack0000000000000060;
  uint uStack0000000000000064;
  long in_stack_00000068;
  void *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  float fStack0000000000000090;
  uint uStack0000000000000094;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  ulong in_stack_000000b0;
  undefined8 in_stack_000000c0;
  float fStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  byte bStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  undefined8 in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  undefined8 *in_stack_00000108;
  long in_stack_00000110;
  float in_stack_00000118;
  float fStack0000000000000120;
  undefined4 uStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  int iStack0000000000000138;
  undefined8 in_stack_00000140;
  float in_stack_00000148;
  float in_stack_00000150;
  float in_stack_00000158;
  float fStack000000000000015c;
  long *in_stack_00000160;
  uint uStack0000000000000168;
  undefined4 uStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  int iStack0000000000000178;
  float fStack000000000000017c;
  float in_stack_00000188;
  long *in_stack_00000190;
  float in_stack_000001a8;
  long *in_stack_000001b0;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  uint *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  uint in_stack_000011dc;
  uint in_stack_0000120c;
  undefined8 in_stack_00001288;
  char in_stack_00001294;
  float in_stack_00001298;
  uint in_stack_0000129c;
  long in_stack_00001638;
  
  lVar41 = unaff_x21;
  plVar42 = unaff_x22;
  puVar45 = unaff_x29;
code_r0x040e8218:
                    /* try { // try from 040e8224 to 041e822b has its CatchHandler @ 040e84a8 */
  if (in_stack_0000129c != 0x200b) {
    if (in_stack_0000129c == 9) {
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      fVar54 = (float)FUN_040cee68(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      bVar12 = FUN_040d20d8(*in_stack_000001c8,0);
      fVar55 = *(float *)(unaff_x19 + 0x2f4);
      fVar58 = unaff_s13 * fVar54 * (float)bVar12;
      fVar54 = fVar58 * (float)(int)(fVar55 / fVar58);
      if (fVar54 <= fVar55) {
        fVar54 = fVar55 + fVar58;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar54;
      in_x12 = 0x60;
      unaff_w25 = unaff_w26;
    }
    else {
      fVar54 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar54 == 0.0) {
        fVar55 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(lVar41 + 0xb6) == '\0') {
          fVar54 = (float)FUN_040cf0d4(&stack0x000011f0,0);
          fVar59 = *(float *)(unaff_x19 + 0x19a8);
          fVar58 = (float)FUN_040d1250(&stack0x000011e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar47 = (float)FUN_040d2098(*(long *)(unaff_x19 + 0x68),0);
            fVar55 = fVar55 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              unaff_s13 * (fVar54 * fVar59 + fVar58) +
                              in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar47));
            goto LAB_040e82f4;
          }
          goto thunk_FUN_01f08a3c;
        }
        fVar54 = (float)FUN_040d1250(&stack0x000011e0,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        fVar58 = (float)FUN_040d2098(*in_stack_000001c8,0);
        in_x12 = 0x60;
        fVar55 = fVar55 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          unaff_s13 * fVar54 +
                          in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar58));
        *(float *)(unaff_x19 + 0x2f4) = fVar55;
        if ((unaff_w25 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_040e83c4;
        fVar55 = fVar55 - in_stack_00000158 * *(float *)(lVar41 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        fVar55 = *(float *)(unaff_x19 + 0x2f4);
        fVar58 = (float)FUN_040d2098(*in_stack_000001c8,0);
        fVar55 = fVar55 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar54 - in_stack_000000f0._4_4_) +
                          in_stack_00000158 * (in_stack_00000188 + fVar58));
LAB_040e82f4:
        in_x12 = 0x60;
        *(float *)(unaff_x19 + 0x2f4) = fVar55;
        if ((unaff_w25 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_040e83c4;
        fVar55 = fVar55 + in_stack_00000158 * *(float *)(lVar41 + 0xc4);
      }
      in_x12 = 0x60;
      *(float *)(unaff_x19 + 0x2f4) = fVar55;
    }
  }
LAB_040e83c4:
  lVar30 = *plVar42;
  if (lVar30 == 0) goto thunk_FUN_01f08a3c;
  uVar14 = *puVar45;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
  *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000129c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(lVar41 + 0x74) == 5) &&
     (((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000129c - 0x2028)))) {
    lVar30 = *in_stack_00000058;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar29 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar30 + 0x18) < (int)(uVar29 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_04589410 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_02421ccc(in_stack_00000058,uVar29 + 1,1,*(undefined8 *)PTR_DAT_04589400);
      lVar30 = *in_stack_00000058;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar29 = *(uint *)(unaff_x19 + 0x350);
      in_x12 = 0x60;
      unaff_w25 = unaff_w26;
    }
    if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
    lVar33 = lVar30 + (long)(int)uVar29 * 0x14;
    *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar54 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar33 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar54 = *(float *)(lVar33 + 0x30);
    }
    *(float *)(lVar33 + 0x30) = fVar54;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar30 + (long)(int)uVar29 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar14 = *puVar45;
    *(uint *)(lVar30 + (long)(int)uVar29 * 0x14 + 0x24) = uVar14;
  }
  iVar17 = (int)unaff_x27;
  if (((in_stack_0000129c < 0xc) && ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000129c - 0x2028 < 2 ||
      (((unaff_w23 & in_stack_0000129c == 0x2d) != 0 || ((float)uVar14 == fStack00000000000000e4))))
     )) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar54 = *(float *)(unaff_x19 + 0x338);
      fVar55 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        in_x12 = 0x60;
      }
      fVar54 = fVar54 - fVar55;
      if (((fStack00000000000000ac < ABS(fVar54)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar50 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar16 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_040fdcc4(fVar54,uVar50,uVar16,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar54;
        *(float *)(unaff_x19 + 0x2e0) = fVar54 + *(float *)(unaff_x19 + 0x2e0);
        unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
        in_x12 = 0x60;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_027b2888(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_04589430);
          memcpy(&stack0x00000230,&stack0x000012a0,0x398);
          memcpy(in_stack_00000070,&stack0x00000230,0x398);
          thunk_FUN_01f51358(in_stack_00000028,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar54 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar54 + *(float *)(unaff_x19 + 0xb24);
          uVar43 = *(undefined8 *)PTR_DAT_04589438;
          memcpy(&stack0x000012a0,in_stack_00000070,0x398);
          FUN_027b2770(in_stack_00000080,&stack0x000012a0,uVar43);
          in_x12 = 0x60;
          unaff_w25 = unaff_w26;
        }
      }
    }
    fVar55 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar58 = *(float *)(unaff_x19 + 0x33c) - fVar55;
    fVar54 = *(float *)(unaff_x19 + 0x378);
    if (fVar58 <= *(float *)(unaff_x19 + 0x378)) {
      fVar54 = fVar58;
    }
    *(float *)(unaff_x19 + 0x378) = fVar54;
    fVar59 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001294 == '\0') {
      in_stack_00001298 = fVar54;
    }
    if ((*(char *)(lVar41 + 0xe8) != '\0') &&
       ((*(int *)(lVar41 + 0xd8) <= (int)*puVar45 ||
        (*(int *)(lVar41 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001294 = '\x01';
    }
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    iVar15 = *(int *)(unaff_x19 + 0x328);
    lVar33 = lVar30 + (int)uVar14 * in_x12;
    *(int *)(lVar33 + 0x38) = iVar15;
    uVar29 = *(uint *)(unaff_x19 + 0x328);
    if (iVar15 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar29 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar29;
    *(uint *)(lVar33 + 0x3c) = uVar29;
    iVar1 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar1;
    *(int *)(lVar33 + 0x40) = iVar1;
    iVar18 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar29 <= *(int *)(unaff_x19 + 0x334)) {
      iVar18 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar18;
    *(int *)(lVar33 + 0x44) = iVar18;
    *(int *)(lVar33 + 0x24) = (iVar1 - iVar15) + 1;
    *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar33 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar33 + 0x18) <= uVar29) goto LAB_040ec2e4;
    uVar50 = *(undefined4 *)(lVar33 + (long)(int)uVar29 * (long)iVar17 + 0x124);
    lVar30 = lVar30 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar30 + 0x74) = fVar58;
    *(undefined4 *)(lVar30 + 0x70) = uVar50;
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
    lVar33 = *in_stack_000001e8;
    if (lVar33 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_040ec2e4;
    uVar50 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
    fVar59 = fVar59 - fVar55;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar30 + 0x7c) = fVar59;
    *(undefined4 *)(lVar30 + 0x78) = uVar50;
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar33 = lVar30 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar33 + 0x48) = *(float *)(lVar33 + 0x78) - unaff_s13 * in_stack_000001a8;
    *(float *)(lVar33 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar33 + 0x24) == 1) {
      *(undefined4 *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
    fVar54 = (float)FUN_040d2098(*in_stack_000001c8,0);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_040ec2e4;
    lVar31 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar31 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar30 + lVar33 * unaff_x27 + 0x1a0) == '\0') &&
        (lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar29 = (uint)*(undefined8 *)(lVar31 + 0x18), uVar29 <= uVar14)) goto LAB_040ec2e4;
    fVar55 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) +
             in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar54));
    fVar54 = -fVar55;
    if (*(char *)(lVar41 + 0xb6) != '\0') {
      fVar54 = fVar55;
    }
    *(float *)(lVar31 + (long)(int)uVar14 * 0x60 + 0x5c) =
         *(float *)(lVar30 + lVar33 * unaff_x27 + 0x164) + fVar54;
    if (uVar29 <= uVar14) goto LAB_040ec2e4;
    lVar31 = lVar31 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar31 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar31 + 0x58) = fVar58;
    *(float *)(lVar31 + 0x4c) = fStack00000000000000a8 + (fVar59 - fVar58);
    *(float *)(lVar31 + 0x50) = fVar59;
    if ((int)in_stack_0000129c < 0x2d) {
      if (in_stack_0000129c - 10 < 2) {
LAB_040e89b0:
        FUN_040ef438();
        uVar14 = *(uint *)(unaff_x19 + 0x324);
        iVar15 = *(int *)(unaff_x19 + 0x340) + 1;
        *(int *)(unaff_x19 + 0x340) = iVar15;
        *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
        puVar45[8] = 0;
        puVar45[9] = 0;
        if (*(long *)(in_stack_000001c0 + 0x48) == 0) goto thunk_FUN_01f08a3c;
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar15) {
          if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_040fde44(iVar15,in_stack_000001c0,0);
          uVar14 = *puVar45;
        }
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (uVar14 < *(uint *)(lVar30 + 0x18)) {
          fVar54 = *(float *)(lVar30 + (long)(int)uVar14 * (long)iVar17 + 0x158);
          if (*(float *)(unaff_x19 + 0x2e4) == DAT_00c927ac) {
            if ((in_stack_0000129c == 0x2029) || (fVar55 = 0.0, in_stack_0000129c == 10)) {
              fVar55 = *(float *)(lVar41 + 0xcc);
            }
            uVar23 = 0;
            fVar55 = fVar54 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                     fStack0000000000000090 *
                     (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                     in_stack_00000158 * (*(float *)(lVar41 + 200) + fVar55) +
                     *(float *)(unaff_x19 + 0x2e0);
          }
          else {
            if ((in_stack_0000129c == 0x2029) || (fVar55 = 0.0, in_stack_0000129c == 10)) {
              fVar55 = *(float *)(lVar41 + 0xcc);
            }
            uVar23 = 1;
            fVar55 = *(float *)(unaff_x19 + 0x2e0) +
                     *(float *)(unaff_x19 + 0x2e4) +
                     in_stack_00000158 * (*(float *)(lVar41 + 200) + fVar55);
          }
          *(float *)(unaff_x19 + 0x2e0) = fVar55;
          *(float *)(unaff_x19 + 0x15ac) = fVar54;
          *(undefined1 *)(unaff_x19 + 0x2e8) = uVar23;
          *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
          *(float *)(unaff_x19 + 0x2f4) =
               *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
          FUN_040ef438();
          FUN_040ef438();
          *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
          goto LAB_040e8b8c;
        }
        goto LAB_040ec2e4;
      }
      if (in_stack_0000129c == 3) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto thunk_FUN_01f08a3c;
        in_stack_0000120c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
      }
    }
    else if ((in_stack_0000129c - 0x2028 < 2) || (in_stack_0000129c == 0x2d)) goto LAB_040e89b0;
  }
  else {
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
  }
  uVar14 = *puVar45;
  if (uVar14 < *(uint *)(lVar30 + 0x18)) {
    if (*(char *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x1a0) != '\0') {
      lVar30 = lVar30 + (long)(int)uVar14 * unaff_x27;
      uVar57 = *(ulong *)(unaff_x19 + 0x360);
      uVar61 = *(ulong *)(lVar30 + 0x124);
      *(ulong *)(unaff_x19 + 0x360) =
           uVar57 ^ (uVar57 ^ uVar61) &
                    ~CONCAT44(-(uint)((float)(uVar57 >> 0x20) < (float)(uVar61 >> 0x20)),
                              -(uint)((float)uVar57 < (float)uVar61));
      uVar57 = *(ulong *)(unaff_x19 + 0x368);
      uVar61 = *(ulong *)(lVar30 + 0x130);
      *(ulong *)(unaff_x19 + 0x368) =
           uVar57 ^ (uVar57 ^ uVar61) &
                    ~CONCAT44(-(uint)((float)(uVar61 >> 0x20) < (float)(uVar57 >> 0x20)),
                              -(uint)((float)uVar61 < (float)uVar57));
    }
    if ((uStack0000000000000094 != 0) ||
       ((*(uint *)(lVar41 + 0x74) < 7 &&
        ((1 << (ulong)(*(uint *)(lVar41 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
      if ((unaff_w25 == 0) &&
         (((in_stack_0000129c != 0x2d && (in_stack_0000129c != 0x200b)) &&
          (in_stack_0000129c != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_040e8cd4:
          if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar57 = FUN_040fe670(in_stack_0000129c,0);
          if ((uVar57 & 1) == 0) {
LAB_040e8d1c:
            if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar57 = FUN_040fe6e0(in_stack_0000129c,0);
            if ((uVar57 & 1) == 0) goto LAB_040e8e04;
            if (in_stack_00000068 == 0) goto thunk_FUN_01f08a3c;
          }
          else {
            if ((in_stack_00000068 == 0) ||
               (lVar30 = FUN_04101164(in_stack_00000068,0), lVar30 == 0)) goto thunk_FUN_01f08a3c;
            if (*(char *)(lVar30 + 0x28) != '\0') goto LAB_040e8d1c;
          }
          lVar30 = FUN_04101164(in_stack_00000068,0);
          if ((lVar30 == 0) || (lVar30 = FUN_0410356c(lVar30,0), lVar30 == 0))
          goto thunk_FUN_01f08a3c;
          uVar57 = FUN_02eed3b4(lVar30,in_stack_0000129c,*(undefined8 *)PTR_DAT_0457a818);
          if ((int)*puVar45 < (int)fStack00000000000000e4) {
            lVar30 = FUN_04101164(in_stack_00000068,0);
            if (lVar30 == 0) goto thunk_FUN_01f08a3c;
            lVar30 = FUN_0410386c(lVar30,0);
            lVar33 = *in_stack_000001e8;
            if (lVar33 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar33 + 0x18) <= *puVar45 + 1) goto LAB_040ec2e4;
            if (lVar30 == 0) goto thunk_FUN_01f08a3c;
            uVar61 = FUN_02eed3b4(lVar30,*(undefined2 *)
                                          (lVar33 + (long)(int)(*puVar45 + 1) * (long)iVar17 + 0x20)
                                  ,*(undefined8 *)PTR_DAT_0457a818);
            if ((uVar57 & 1) != 0)
            goto UnityEngine_UIElements_FocusController__GetFocusableParentForPointerEvent;
            if ((uVar61 & 1) == 0) goto LAB_040e930c;
            if ((bStack00000000000000e0 & 1) == 0) goto LAB_040e8e8c;
          }
          else {
            if ((uVar57 & 1) == 0) {
LAB_040e930c:
              FUN_040ef438();
              bStack00000000000000e0 = 0;
              goto LAB_040e8e9c;
            }
UnityEngine_UIElements_FocusController__GetFocusableParentForPointerEvent:
            if ((float)(uint)unaff_x20 != in_stack_000001b8._4_4_ ||
                ((bStack00000000000000e0 ^ 0xff) & 1) != 0) goto LAB_040e8e9c;
          }
          if (unaff_w25 != 0) {
            FUN_040ef438();
          }
        }
        else {
LAB_040e8e04:
          if ((bStack00000000000000e0 & 1) == 0) {
LAB_040e8e8c:
            bStack00000000000000e0 = 0;
            goto LAB_040e8e9c;
          }
          if ((unaff_w25 != 0 && in_stack_0000129c != 0xa0) ||
             ((in_stack_000000c0._4_1_ & 1) == 0 && in_stack_0000129c == 0xad)) {
            FUN_040ef438();
          }
        }
        FUN_040ef438();
        bStack00000000000000e0 = 1;
      }
      else {
        if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_040e8e04;
        if (((in_stack_0000129c - 0x2007 < 0x29) &&
            ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((in_stack_0000129c == 0xa0 || (in_stack_0000129c == 0x2060)))) goto LAB_040e8cd4;
        FUN_040ef438();
        bStack00000000000000e0 = 0;
        *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
      }
    }
LAB_040e8e9c:
    FUN_040ef438();
    *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
    uVar43 = in_stack_00001288;
    fVar54 = unaff_s13;
LAB_040e58d0:
    in_stack_0000120c = in_stack_0000120c + 1;
    lVar30 = *(long *)(unaff_x19 + 0x20);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if ((int)*(uint *)(lVar30 + 0x18) <= (int)in_stack_0000120c) {
LAB_040e9624:
      if ((((*(char *)(lVar41 + 0xa8) != '\0') &&
           (DAT_00c925e0 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
          (fVar54 = *_fStack00000000000000d8, fVar54 < *(float *)(lVar41 + 0xb0))) &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar55 = *(float *)(lVar41 + 0x108);
        if (*(float *)(unaff_x19 + 0x1594) < fVar55 / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x1594) = 0;
        }
        fVar58 = (*(float *)(unaff_x19 + 0x1598) - fVar54) * 0.5;
        if (fVar58 <= DAT_00c92764) {
          fVar58 = DAT_00c92764;
        }
        *(float *)(unaff_x19 + 0x159c) = fVar54;
        fVar58 = (fVar54 + fVar58) * 20.0 + 0.5;
        fVar54 = DAT_00c92a58;
        if (fVar58 != INFINITY) {
          fVar54 = (float)(int)fVar58 / 20.0;
        }
        if (fVar55 <= fVar54) {
          fVar54 = fVar55;
        }
        goto LAB_040e96e4;
      }
      unaff_x24[0x30] = '\x01';
      if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
        uVar43 = FUN_035683d0(in_stack_00000078,0);
        uVar19 = FUN_0357d06c(_fStack00000000000000d8,0);
        uVar43 = FUN_0340eee0(*(undefined8 *)PTR_DAT_04579ea0,uVar43,*(undefined8 *)PTR_DAT_04579e88
                              ,uVar19,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*unaff_x28);
        }
        FUN_0403ea2c(uVar43,0);
      }
      plVar20 = (long *)PTR_DAT_04588f98;
      plVar42 = (long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
      if ((*puVar45 == 0) || ((*puVar45 == 1 && (in_stack_0000129c == 3)))) {
        FUN_040f6b2c(1,in_stack_000001c0,0);
        goto LAB_040e4eec;
      }
      lVar41 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar41 == 0) goto thunk_FUN_01f08a3c;
      uVar14 = *(uint *)(unaff_x19 + 0x78);
      if (*(int *)(*(long *)PTR_DAT_04588f98 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_040ec2e4;
      FUN_040de418(lVar41 + (long)(int)uVar14 * 0x50 + 0x20,0,0);
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
        DAT_0482ee12 = '\x01';
      }
      iVar17 = *(int *)(in_stack_000001e0 + 0x70);
      in_stack_00000158 = **(float **)(*plVar42 + 0xb8);
      _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar42 + 0xb8) + 1);
      lVar41 = *(long *)(unaff_x19 + 0x50);
      _in_stack_00000118 = _in_stack_00000148;
      fStack0000000000000120 = in_stack_00000158;
      if (iVar17 < 0x421) {
        if (iVar17 < 0x205) {
          if (iVar17 < 0x109) {
            if ((iVar17 - 0x101U < 8) && ((1 << (ulong)(iVar17 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_040e9a84:
              if (lVar41 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar41 + 0x18) < 2) goto LAB_040ec2e4;
              uVar43 = *(undefined8 *)(lVar41 + 0x30);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar30 = *in_stack_00000058;
                if (lVar30 == 0) goto thunk_FUN_01f08a3c;
                if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000064) goto LAB_040ec2e4;
                fVar54 = *(float *)(lVar30 + (long)(int)uStack0000000000000064 * 0x14 + 0x28);
              }
              else {
                fVar54 = *(float *)(unaff_x19 + 0x374);
              }
              fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar41 + 0x2c);
              fStack0000000000000040 = (0.0 - fVar54) - fStack0000000000000044;
              goto LAB_040e9e24;
            }
          }
          else if (iVar17 < 0x121) {
            if ((iVar17 == 0x110) || (iVar17 == 0x120)) goto LAB_040e9a84;
          }
          else if ((iVar17 - 0x201U < 4) && (iVar17 - 0x201U != 2)) goto LAB_040e9d14;
        }
        else {
          if (iVar17 < 0x403) {
            if (iVar17 < 0x211) {
              if ((iVar17 == 0x208) || (iVar17 == 0x210)) goto LAB_040e9d14;
              goto LAB_040e9e34;
            }
            if (iVar17 != 0x220) {
              if (iVar17 - 0x401U < 2) goto LAB_040e9bc0;
              goto LAB_040e9e34;
            }
LAB_040e9d14:
            if (lVar41 == 0) goto thunk_FUN_01f08a3c;
            if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0)) goto LAB_040ec2e4;
            fStack0000000000000120 = (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
            uVar43 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar41 + 0x24) +
                              (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar41 = *in_stack_00000058;
              if (lVar41 == 0) goto thunk_FUN_01f08a3c;
              if (uStack0000000000000064 < *(uint *)(lVar41 + 0x18)) {
                lVar41 = lVar41 + (long)(int)uStack0000000000000064 * 0x14;
                fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
                fStack0000000000000040 =
                     ((fStack0000000000000044 + *(float *)(lVar41 + 0x28) +
                      *(float *)(lVar41 + 0x30)) - fStack0000000000000040) * -0.5 + 0.0;
                goto LAB_040e9e24;
              }
              goto LAB_040ec2e4;
            }
            fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
            fStack0000000000000040 =
                 ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x374) + in_stack_00001298) -
                 fStack0000000000000040) * -0.5 + 0.0;
          }
          else {
            if (iVar17 < 0x409) {
              if (iVar17 != 0x404) {
                bVar9 = iVar17 == 0x408;
                goto LAB_040e9bac;
              }
            }
            else if (iVar17 != 0x410) {
              bVar9 = iVar17 == 0x420;
LAB_040e9bac:
              if (!bVar9) goto LAB_040e9e34;
            }
LAB_040e9bc0:
            if (lVar41 == 0) goto thunk_FUN_01f08a3c;
            if (*(int *)(lVar41 + 0x18) == 0) goto LAB_040ec2e4;
            uVar43 = *(undefined8 *)(lVar41 + 0x24);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar30 = *in_stack_00000058;
              if (lVar30 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000064) goto LAB_040ec2e4;
              in_stack_00001298 =
                   *(float *)(lVar30 + (long)(int)uStack0000000000000064 * 0x14 + 0x30);
            }
            fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar41 + 0x20);
            fStack0000000000000040 = fStack0000000000000040 + (0.0 - in_stack_00001298);
          }
LAB_040e9e24:
          _in_stack_00000118 =
               CONCAT44((float)((ulong)uVar43 >> 0x20) + 0.0,(float)uVar43 + fStack0000000000000040)
          ;
        }
      }
      else if (iVar17 < 0x1005) {
        if (iVar17 < 0x809) {
          if ((iVar17 - 0x801U < 8) && ((1 << (ulong)(iVar17 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_040e99e8:
            if (lVar41 == 0) goto thunk_FUN_01f08a3c;
            if ((*(int *)(lVar41 + 0x18) != 1) && (*(int *)(lVar41 + 0x18) != 0)) {
              _in_stack_00000118 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar41 + 0x24) +
                            (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5 + 0.0);
              fStack0000000000000120 =
                   fStack0000000000000060 + 0.0 +
                   (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
              goto LAB_040e9e34;
            }
            goto LAB_040ec2e4;
          }
        }
        else if (iVar17 < 0x821) {
          if ((iVar17 == 0x810) || (iVar17 == 0x820)) goto LAB_040e99e8;
        }
        else if ((iVar17 - 0x1001U < 4) && (iVar17 - 0x1001U != 2)) goto LAB_040e9c7c;
      }
      else if (iVar17 < 0x2003) {
        if (iVar17 < 0x1011) {
          if ((iVar17 == 0x1008) || (iVar17 == 0x1010)) goto LAB_040e9c7c;
        }
        else {
          if (iVar17 == 0x1020) {
LAB_040e9c7c:
            if (lVar41 == 0) goto thunk_FUN_01f08a3c;
            if ((*(int *)(lVar41 + 0x18) != 1) && (*(int *)(lVar41 + 0x18) != 0)) {
              uVar43 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar41 + 0x24) +
                                (float)*(undefined8 *)(lVar41 + 0x30)) * 0.5);
              fStack0000000000000120 =
                   fStack0000000000000060 + 0.0 +
                   (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
              fStack0000000000000040 =
                   0.0 - ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x36c) +
                          *(float *)(unaff_x19 + 0x364)) - fStack0000000000000040) * 0.5;
              goto LAB_040e9e24;
            }
            goto LAB_040ec2e4;
          }
          if (iVar17 - 0x2001U < 2) goto LAB_040e9b24;
        }
      }
      else {
        if (iVar17 < 0x2009) {
          if (iVar17 != 0x2004) {
            iVar15 = 0x2008;
            goto LAB_040e9b0c;
          }
        }
        else if (iVar17 != 0x2010) {
          iVar15 = 0x2020;
LAB_040e9b0c:
          if (iVar17 != iVar15) goto LAB_040e9e34;
        }
LAB_040e9b24:
        if (lVar41 == 0) goto thunk_FUN_01f08a3c;
        if ((*(int *)(lVar41 + 0x18) == 1) || (*(int *)(lVar41 + 0x18) == 0)) goto LAB_040ec2e4;
        _in_stack_00000118 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar41 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar41 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar41 + 0x24) + (float)*(undefined8 *)(lVar41 + 0x30)
                      ) * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack0000000000000044) -
                                       fStack0000000000000040) * 0.5));
        fStack0000000000000120 =
             fStack0000000000000060 + 0.0 +
             (*(float *)(lVar41 + 0x20) + *(float *)(lVar41 + 0x2c)) * 0.5;
      }
LAB_040e9e34:
      uVar50 = FUN_01fdd4e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      FUN_01fdd4e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)PTR_DAT_045893e0);
      }
      FUN_040fa594(0);
      FUN_040fa764(&stack0x00001270,0x4000ffff,0);
      fVar54 = DAT_00c92980;
      uVar14 = *puVar45;
      if ((int)uVar14 < 1) {
        iVar17 = 0;
        iStack0000000000000138 = 0;
        goto LAB_040ec0a0;
      }
      lVar41 = *in_stack_000001e8;
      if (lVar41 == 0) goto thunk_FUN_01f08a3c;
      fStack0000000000000174 = 0.0;
      fStack00000000000000d8 = 0.0;
      fStack00000000000000a8 = 0.0;
      plVar20 = (long *)(in_stack_000001c0 + 0x38);
      in_stack_000000f0._4_4_ = 0.0;
      fStack00000000000000a0 = 0.0;
      uVar61 = (ulong)&stack0x00001270 | 4;
      bVar9 = false;
      fVar58 = 0.0;
      fVar55 = 0.0;
      uVar57 = (ulong)&stack0x000005f0 | 4;
      bVar8 = false;
      bVar10 = false;
      iStack0000000000000138 = 0;
      uStack0000000000000094 = 0;
      _uStack0000000000000168 = 0;
      in_stack_000000c0._4_4_ = 0;
      iStack0000000000000178 = 0;
      _in_stack_000001a8 = 0x2fc;
      fStack000000000000012c = fStack0000000000000128;
      fStack0000000000000130 = in_stack_00000140._4_4_;
      fStack00000000000000cc = in_stack_00000140._4_4_;
      uStack00000000000000d0 = uStack0000000000000124;
      fStack00000000000000d4 = fStack0000000000000128;
      fStack00000000000000e4 = in_stack_00000140._4_4_;
      fStack00000000000000e8 = fStack0000000000000128;
      _bStack00000000000000e0 = uStack0000000000000124;
      fStack000000000000015c = DAT_00c92980;
      uVar29 = 0;
      uVar28 = 1;
      goto LAB_040e9f88;
    }
    if (*(uint *)(lVar30 + 0x18) <= in_stack_0000120c) goto LAB_040ec2e4;
    uVar14 = *(uint *)(lVar30 + (long)(int)in_stack_0000120c * 0x10 + 0x24);
    if (uVar14 == 0) goto LAB_040e9624;
    in_stack_00001288 = uVar43;
    if (5 < in_stack_000001d8._4_4_) {
      uVar43 = FUN_035870e0(&stack0x0000129c,0);
      uVar19 = FUN_035683d0(&stack0x0000120c,0);
      uVar43 = FUN_0340eee0(*(undefined8 *)PTR_DAT_04579e80,uVar43,*(undefined8 *)PTR_DAT_04579e90,
                            uVar19,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x28);
      }
      FUN_0403ed64(uVar43,0);
      in_stack_00001288 = CONCAT44(3,*puVar45);
    }
    uVar43 = in_stack_00001288;
    in_stack_0000129c = uVar14;
    if (uVar14 == 0x1a) goto LAB_040e58d0;
    if ((uVar14 == 0x3c) && (*(char *)(lVar41 + 0xb5) != '\0')) {
      unaff_x24[0] = '\x01';
      unaff_x24[1] = '\x01';
      uVar57 = FUN_040efb00();
      if (((uVar57 & 1) != 0) && (in_stack_0000120c = in_stack_000011dc, *unaff_x24 == '\x01'))
      goto LAB_040e58d0;
    }
    else {
      lVar41 = *in_stack_000001e8;
      if (lVar41 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar41 + 0x18) <= *puVar45) goto LAB_040ec2e4;
      lVar41 = lVar41 + (long)(int)*puVar45 * unaff_x27;
      *unaff_x24 = *(char *)(lVar41 + 0x28);
      *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar41 + 0x60);
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar41 + 0x40);
      thunk_FUN_01f51358(in_stack_000001c8);
    }
    lVar41 = *in_stack_000001e8;
    if (lVar41 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *(uint *)(unaff_x19 + 0x324);
    if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = (long)(int)uVar14;
    uVar50 = *(undefined4 *)(unaff_x19 + 0x78);
    cVar24 = *(char *)(lVar41 + lVar30 * unaff_x27 + 100);
    unaff_x24[1] = '\0';
    if ((uint)in_stack_00001288 == uVar14) {
      in_stack_0000129c = (uint)((ulong)in_stack_00001288 >> 0x20);
      unaff_w23 = 1;
      *unaff_x24 = '\x01';
      if (in_stack_0000129c == 0x2026) {
        *(undefined8 *)(lVar41 + lVar30 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
        thunk_FUN_01f51358();
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
        lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
        *(undefined1 *)(lVar41 + 0x28) = 1;
        *(undefined8 *)(lVar41 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
        thunk_FUN_01f51358();
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
        *(undefined8 *)(lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
             *(undefined8 *)(unaff_x19 + 0x1a10);
        thunk_FUN_01f51358();
        lVar41 = *in_stack_000001e8;
        if (lVar41 == 0) goto thunk_FUN_01f08a3c;
        uVar14 = *puVar45;
        if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_040ec2e4;
        unaff_w23 = 1;
        *(undefined4 *)(lVar41 + (long)(int)uVar14 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x1a18);
        *(undefined1 *)(*(long *)(*(long *)PTR_DAT_045893f8 + 0xb8) + 8) = 1;
        in_stack_00001288 = CONCAT44(3,uVar14 + 1);
      }
      else if (in_stack_0000129c == 3) {
        if ((*in_stack_000001c8 == 0) || (lVar33 = FUN_040d1ec8(*in_stack_000001c8,0), lVar33 == 0))
        goto thunk_FUN_01f08a3c;
        uVar43 = FUN_02bd6170(lVar33,3,*(undefined8 *)PTR_DAT_04588b38);
        if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_040ec2e4;
        *(undefined8 *)(lVar41 + lVar30 * unaff_x27 + 0x30) = uVar43;
        thunk_FUN_01f51358();
        unaff_w23 = 1;
        *(undefined1 *)(*(long *)(*(long *)PTR_DAT_045893f8 + 0xb8) + 8) = 1;
        uVar14 = *puVar45;
      }
    }
    else {
      unaff_w23 = 0;
    }
    uVar43 = in_stack_00001288;
    lVar41 = in_stack_000001e0;
    if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000129c != 3)) {
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
      lVar30 = lVar30 + (long)(int)uVar14 * (long)iVar17;
      *(undefined1 *)(lVar30 + 0x1a0) = 0;
      *(undefined2 *)(lVar30 + 0x20) = 0x200b;
      *(undefined4 *)(lVar30 + 0x6c) = 0;
      *puVar45 = uVar14 + 1;
      goto LAB_040e58d0;
    }
    cVar39 = *unaff_x24;
    if (cVar39 == '\x01') {
      uVar14 = *(uint *)(unaff_x19 + 0x124);
      if ((uVar14 >> 4 & 1) == 0) {
        if ((uVar14 >> 3 & 1) == 0) {
          fStack000000000000017c = 1.0;
          if ((uVar14 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar57 = FUN_034fc51c(in_stack_0000129c,0);
            if ((uVar57 & 1) != 0) {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_034fc7fc(in_stack_0000129c,0);
              in_stack_0000129c = uVar14 & 0xffff;
              fStack000000000000017c = fStack0000000000000034;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar57 = FUN_034fc460(in_stack_0000129c,0);
          fStack000000000000017c = 1.0;
          if ((uVar57 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_034fc974(in_stack_0000129c,0);
            goto LAB_040e5a40;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar57 = FUN_034fc51c(in_stack_0000129c,0);
        fStack000000000000017c = 1.0;
        if ((uVar57 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_034fc7fc(in_stack_0000129c,0);
LAB_040e5a40:
          fStack000000000000017c = 1.0;
          in_stack_0000129c = uVar14 & 0xffff;
        }
      }
      cVar39 = *unaff_x24;
    }
    else {
      fStack000000000000017c = 1.0;
    }
    if (cVar39 == '\x01') {
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
      *in_stack_000001b0 = *(long *)(lVar30 + (long)(int)*puVar45 * unaff_x27 + 0x30);
      thunk_FUN_01f51358(in_stack_000001b0);
      if (*in_stack_000001b0 == 0) goto LAB_040e58d0;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
      *in_stack_000001c8 = *(long *)(lVar30 + (long)(int)*puVar45 * unaff_x27 + 0x40);
      thunk_FUN_01f51358(in_stack_000001c8);
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
      *in_stack_00000190 = *(long *)(lVar30 + (long)(int)*puVar45 * unaff_x27 + 0x58);
      thunk_FUN_01f51358();
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar29 = *puVar45;
      uVar14 = *(uint *)(lVar30 + 0x18);
      if (uVar14 <= uVar29) goto LAB_040ec2e4;
      *(undefined4 *)(unaff_x19 + 0x78) =
           *(undefined4 *)(lVar30 + (long)(int)uVar29 * unaff_x27 + 0x60);
      if (unaff_w23 == 0) {
LAB_040e5be0:
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        fVar55 = *(float *)(unaff_x19 + 0xf4);
        iVar15 = FUN_040ced70(*in_stack_000001c8 + 0xb0,0);
        lVar30 = *(long *)(unaff_x19 + 0x68);
      }
      else {
        lVar33 = *(long *)(unaff_x19 + 0x20);
        if (lVar33 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar33 + 0x18) <= in_stack_0000120c) goto LAB_040ec2e4;
        if ((*(int *)(lVar33 + (long)(int)in_stack_0000120c * 0x10 + 0x24) != 10) ||
           (uVar29 == *(uint *)(unaff_x19 + 0x328))) goto LAB_040e5be0;
        if (uVar14 <= uVar29 - 1) goto LAB_040ec2e4;
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        fVar55 = *(float *)(lVar30 + (long)(int)(uVar29 - 1) * (long)iVar17 + 0x68);
        iVar15 = FUN_040ced70(*in_stack_000001c8 + 0xb0,0);
        lVar30 = *in_stack_000001c8;
      }
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      fVar59 = (float)FUN_040ced80(lVar30 + 0xb0,0);
      fVar58 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar58 = 1.0;
      }
      fStack0000000000000170 = 0.0;
      fVar47 = 0.0;
      if ((unaff_w23 & in_stack_0000129c == 0x2026) == 0) {
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        fVar47 = (float)FUN_040ceda0(*in_stack_000001c8 + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        fStack0000000000000170 = (float)FUN_040cede0(*in_stack_000001c8 + 0xb0,0);
      }
      lVar30 = *(long *)(unaff_x19 + 0x1588);
      if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto thunk_FUN_01f08a3c;
      fVar67 = *(float *)(unaff_x19 + 0xf0);
      fVar46 = *(float *)(lVar30 + 0x2c);
      fVar54 = (float)FUN_040cf2c8(*(long *)(lVar30 + 0x20),0);
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      fVar48 = (float)FUN_040cedd0(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      fVar68 = *(float *)(unaff_x19 + 0xf0);
      fVar49 = (float)FUN_040ced80(*in_stack_000001c8 + 0xb0,0);
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar14 = *(uint *)(unaff_x19 + 0x324);
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
      lVar33 = lVar30 + (long)(int)uVar14 * unaff_x27;
      fVar58 = ((fStack000000000000017c * fVar55) / (float)iVar15) * fVar59 * fVar58;
      fVar54 = fVar58 * fVar67 * fVar46 * fVar54;
      *(undefined1 *)(lVar33 + 0x28) = 1;
      *(float *)(lVar33 + 0x16c) = fVar54;
      in_stack_000001a8 = *(float *)(unaff_x19 + 0xd8);
      fVar49 = fVar58 * fVar48 * fVar68 * fVar49;
LAB_040e6210:
      unaff_s13 = fVar54;
      if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
        unaff_s13 = 0.0;
      }
    }
    else {
      if (cVar39 == '\x02') {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
        plVar42 = *(long **)(lVar30 + (long)(int)*puVar45 * unaff_x27 + 0x30);
        if (plVar42 == (long *)0x0) goto thunk_FUN_01f08a3c;
        bVar12 = *(byte *)(*(long *)PTR_DAT_045893e8 + 0x130);
        if ((*(byte *)(*plVar42 + 0x130) < bVar12) ||
           (*(long *)(*(long *)(*plVar42 + 200) + (ulong)bVar12 * 8 + -8) !=
            *(long *)PTR_DAT_045893e8)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar42);
        }
        plVar20 = (long *)FUN_040dba78(plVar42,0);
        if (plVar20 == (long *)0x0) {
          plVar20 = (long *)0x0;
          *in_stack_00000160 = 0;
        }
        else {
          lVar30 = *(long *)PTR_DAT_04589018;
          bVar12 = *(byte *)(lVar30 + 0x130);
          if (*(byte *)(*plVar20 + 0x130) < bVar12) {
            plVar32 = (long *)0x0;
          }
          else {
            plVar32 = plVar20;
            if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar12 * 8 + -8) != lVar30) {
              plVar32 = (long *)0x0;
            }
          }
          *in_stack_00000160 = (long)plVar32;
          if (*(byte *)(*plVar20 + 0x130) < bVar12) {
            plVar20 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar12 * 8 + -8) != lVar30) {
            plVar20 = (long *)0x0;
          }
        }
        thunk_FUN_01f51358(in_stack_00000160,plVar20);
        iVar15 = FUN_040d30bc(plVar42,0);
        *(int *)(unaff_x19 + 0x157c) = iVar15;
        if (in_stack_0000129c == 0x3c) {
          in_stack_0000129c = iVar15 + 0xe000;
        }
        else {
          uVar16 = FUN_01fdd4e0(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          *(undefined4 *)(unaff_x19 + 0x1580) = uVar16;
        }
        if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
        fVar54 = *(float *)(unaff_x19 + 0xf4);
        FUN_040d1a24(&stack0x000012a0,*(long *)(unaff_x19 + 0x68),0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        iVar15 = FUN_040ced70(&stack0x00001210,0);
        if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
        FUN_040d1a24(&stack0x000012a0,*in_stack_000001c8,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar58 = (float)FUN_040ced80(&stack0x00001210,0);
        fVar55 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar55 = 1.0;
        }
        if (*in_stack_00000160 == 0) goto thunk_FUN_01f08a3c;
        fVar55 = (fVar54 / (float)iVar15) * fVar58 * fVar55;
        iVar15 = FUN_040ced70(*in_stack_00000160 + 0x48,0);
        fVar54 = *(float *)(unaff_x19 + 0xf4);
        if (iVar15 < 1) {
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          iVar15 = FUN_040ced70(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          fVar58 = (float)FUN_040ced80(*in_stack_000001c8 + 0xb0,0);
          fStack0000000000000170 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fStack0000000000000170 = 1.0;
          }
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          fVar59 = (float)FUN_040ceda0(*in_stack_000001c8 + 0xb0,0);
          if (plVar42[4] == 0) goto thunk_FUN_01f08a3c;
          FUN_040cf28c(&stack0x000012a0,plVar42[4],0);
          fVar67 = (float)FUN_040cf0bc(&stack0x000011c0,0);
          if (plVar42[4] == 0) goto thunk_FUN_01f08a3c;
          fVar46 = *(float *)((long)plVar42 + 0x2c);
          fVar48 = (float)FUN_040cf2c8(plVar42[4],0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          fVar47 = (float)FUN_040ceda0(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          fVar68 = (float)FUN_040cedd0(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          fVar65 = *(float *)(unaff_x19 + 0xf0);
          fVar49 = (float)FUN_040ced80(*in_stack_000001c8 + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
          fVar49 = fVar55 * fVar68 * fVar65 * fVar49;
          fStack0000000000000170 = (fVar54 / (float)iVar15) * fVar58 * fStack0000000000000170;
          fVar54 = fStack0000000000000170 * (fVar59 / fVar67) * fVar46 * fVar48;
          fStack0000000000000170 = fStack0000000000000170 / fVar54;
          fVar47 = fStack0000000000000170 * fVar47;
          fVar55 = (float)FUN_040cede0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fStack0000000000000170 = fStack0000000000000170 * fVar55;
        }
        else {
          if (*in_stack_00000160 == 0) goto thunk_FUN_01f08a3c;
          iVar15 = FUN_040ced70(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01f08a3c;
          fVar58 = (float)FUN_040ced80(*in_stack_00000160 + 0x48,0);
          if (plVar42[4] == 0) goto thunk_FUN_01f08a3c;
          fVar67 = *(float *)((long)plVar42 + 0x2c);
          fVar59 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar59 = 1.0;
          }
          fVar46 = (float)FUN_040cf2c8(plVar42[4],0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01f08a3c;
          fVar47 = (float)FUN_040ceda0(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01f08a3c;
          fVar48 = (float)FUN_040cedd0(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto thunk_FUN_01f08a3c;
          fVar68 = *(float *)(unaff_x19 + 0xf0);
          fVar49 = (float)FUN_040ced80(*in_stack_00000160 + 0x48,0);
          if (*(long *)(unaff_x19 + 0xe0) == 0) goto thunk_FUN_01f08a3c;
          fVar49 = fVar55 * fVar48 * fVar68 * fVar49;
          fVar54 = (fVar54 / (float)iVar15) * fVar58 * fVar59 * fVar67 * fVar46;
          fStack0000000000000170 = (float)FUN_040cede0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
        }
        *in_stack_000001b0 = (long)plVar42;
        thunk_FUN_01f51358(in_stack_000001b0,plVar42);
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_000001d0) goto LAB_040ec2e4;
        lVar30 = lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(undefined1 *)(lVar30 + 0x28) = 2;
        *(float *)(lVar30 + 0x16c) = fVar54;
        *(long *)(lVar30 + 0x48) = *in_stack_00000160;
        thunk_FUN_01f51358();
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_000001d0) goto LAB_040ec2e4;
        *(long *)(lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *in_stack_000001c8;
        thunk_FUN_01f51358();
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        uVar14 = *in_stack_000001d0;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
        *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar50;
        in_stack_000001a8 = 0.0;
        puVar45 = in_stack_000001d0;
        goto LAB_040e6210;
      }
      lVar30 = *in_stack_000001e8;
      unaff_s13 = fVar54;
      if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
        unaff_s13 = 0.0;
      }
      fVar49 = 0.0;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar14 = *puVar45;
      fVar47 = 0.0;
      fStack0000000000000170 = 0.0;
    }
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)uVar14 * (long)iVar17;
    *(short *)(lVar30 + 0x20) = (short)in_stack_0000129c;
    *(undefined4 *)(lVar30 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
    *(undefined4 *)(lVar30 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
    *(undefined4 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
         *(undefined4 *)(unaff_x19 + 0x1b0);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
    *(undefined4 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
         *(undefined4 *)(unaff_x19 + 0x1b4);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar19 = in_stack_00000108[1];
    uVar43 = *in_stack_00000108;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
    *(undefined4 *)(lVar30 + 0x198) = *(undefined4 *)(in_stack_00000108 + 2);
    *(undefined8 *)(lVar30 + 400) = uVar19;
    *(undefined8 *)(lVar30 + 0x188) = uVar43;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*puVar45 * unaff_x27;
    lVar33 = *(long *)(lVar30 + 0x38);
    *(undefined4 *)(lVar30 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
    if ((lVar33 == 0) &&
       ((*in_stack_000001b0 == 0 || (lVar33 = *(long *)(*in_stack_000001b0 + 0x20), lVar33 == 0))))
    goto thunk_FUN_01f08a3c;
    FUN_040cf28c(&stack0x000012a0,lVar33,0);
    if (in_stack_0000129c >> 0x10 == 0) {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_034f9bb4(in_stack_0000129c,0);
      unaff_w26 = uVar14 & 1;
    }
    else {
      unaff_w26 = 0;
    }
    uVar50 = 0;
    in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
    if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
      if (*in_stack_000001b0 == 0) goto thunk_FUN_01f08a3c;
      uVar14 = *puVar45;
      uVar29 = *(uint *)(*in_stack_000001b0 + 0x28);
      if ((int)uVar14 < (int)fStack00000000000000e4) {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar14 + 1) goto LAB_040ec2e4;
        lVar30 = *(long *)(lVar30 + (long)(int)(uVar14 + 1) * (long)iVar17 + 0x30);
        if ((((lVar30 == 0) || (*in_stack_000001c8 == 0)) ||
            (lVar33 = *(long *)(*in_stack_000001c8 + 0x170), lVar33 == 0)) ||
           (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)) goto thunk_FUN_01f08a3c;
        uVar57 = FUN_02bcba00(lVar33,uVar29 | *(int *)(lVar30 + 0x28) << 0x10,&stack0x00001190,
                              *(undefined8 *)PTR_DAT_045893c8);
        if ((uVar57 & 1) != 0) {
          FUN_040d159c(&stack0x000012a0,&stack0x00001190,0);
          uVar50 = FUN_040d1400(&stack0x00001170,0);
          uVar57 = FUN_040d15c4(&stack0x00001190,0);
          if ((uVar57 & 0x100) != 0) {
            in_stack_00000188 = 0.0;
          }
        }
        uVar14 = *puVar45;
      }
      if (0 < (int)uVar14) {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar14 - 1) goto LAB_040ec2e4;
        lVar30 = *(long *)(lVar30 + (ulong)(uVar14 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
        if (((lVar30 == 0) || (*in_stack_000001c8 == 0)) ||
           ((lVar33 = *(long *)(*in_stack_000001c8 + 0x170), lVar33 == 0 ||
            (lVar33 = *(long *)(lVar33 + 0x40), lVar33 == 0)))) goto thunk_FUN_01f08a3c;
        uVar57 = FUN_02bcba00(lVar33,*(uint *)(lVar30 + 0x28) | uVar29 << 0x10,&stack0x00001190,
                              *(undefined8 *)PTR_DAT_045893c8);
        if ((uVar57 & 1) != 0) {
          FUN_040d15b0(&stack0x000012a0,&stack0x00001190,0);
          FUN_040d1400(&stack0x00001170,0);
          FUN_040d1260(uVar50,0);
          uVar57 = FUN_040d15c4(&stack0x00001190,0);
          if ((uVar57 & 0x100) != 0) {
            in_stack_00000188 = 0.0;
          }
        }
      }
    }
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *puVar45;
    uVar50 = FUN_040d1250(&stack0x000011e0,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x160) = uVar50;
    if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar57 = FUN_040fe354(in_stack_0000129c,0);
    uVar14 = *puVar45;
    if ((uVar57 & 1) == 0) {
      if ((uVar57 & 1) == 0 && 0 < (int)uVar14) {
        uVar29 = *(uint *)(unaff_x19 + 0x19c4);
        if ((uVar29 == 0x80000000) || (uVar29 != uVar14 - 1)) {
          do {
            uVar29 = uVar14 - 1;
            if (((int)uVar14 < 1) || (uVar29 == *(uint *)(unaff_x19 + 0x19c4))) {
              uVar14 = *(uint *)(unaff_x19 + 0x19c4);
              if (uVar14 == 0x80000000) goto LAB_040e6630;
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
              lVar30 = *(long *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x30);
              if ((lVar30 == 0) || (lVar30 = FUN_040e0298(lVar30,0), lVar30 == 0))
              goto thunk_FUN_01f08a3c;
              uVar14 = FUN_040cf27c(lVar30,0);
              if (*in_stack_000001b0 == 0) goto thunk_FUN_01f08a3c;
              iVar15 = FUN_040d30bc(*in_stack_000001b0,0);
              if (((*in_stack_000001c8 == 0) ||
                  (lVar30 = FUN_040d2040(*in_stack_000001c8,0), lVar30 == 0)) ||
                 (*(long *)(lVar30 + 0x48) == 0)) goto thunk_FUN_01f08a3c;
              uVar61 = FUN_02bd17c8(*(long *)(lVar30 + 0x48),uVar14 | iVar15 << 0x10,
                                    &stack0x00001118,*(undefined8 *)PTR_DAT_045893d8);
              puVar45 = in_stack_000001d0;
              if ((uVar61 & 1) == 0) goto LAB_040e6630;
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto thunk_FUN_01f08a3c;
              if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_040ec2e4;
              fVar55 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                                 0x148);
              fVar67 = *(float *)(unaff_x19 + 0x2f4);
              FUN_040d1784(&stack0x00001118,0);
              fVar58 = (float)FUN_040d175c(&stack0x00001150,0);
              FUN_040d1794(&stack0x00001118,0);
              fVar59 = (float)FUN_040d176c(&stack0x00001148,0);
              FUN_040d1238(((fVar55 - fVar67) / unaff_s13 + fVar58) - fVar59,&stack0x000011e0,0);
              FUN_040d1784(&stack0x00001118,0);
              fVar55 = (float)FUN_040d1764(&stack0x00001150,0);
              puVar21 = &stack0x00001118;
              goto LAB_040e7bc8;
            }
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
            lVar30 = *(long *)(lVar30 + (ulong)uVar29 * (unaff_x27 & 0xffffffff) + 0x30);
            if ((lVar30 == 0) || (lVar30 = FUN_040e0298(lVar30,0), lVar30 == 0))
            goto thunk_FUN_01f08a3c;
            uVar14 = FUN_040cf27c(lVar30,0);
            if (*in_stack_000001b0 == 0) goto thunk_FUN_01f08a3c;
            iVar15 = FUN_040d30bc(*in_stack_000001b0,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar30 = FUN_040d2040(*in_stack_000001c8,0), lVar30 == 0)) ||
               (*(long *)(lVar30 + 0x50) == 0)) goto thunk_FUN_01f08a3c;
            uVar61 = FUN_02bd4878(*(long *)(lVar30 + 0x50),uVar14 | iVar15 << 0x10,&stack0x00001130,
                                  *(undefined8 *)PTR_DAT_045893d0);
            puVar45 = in_stack_000001d0;
            uVar14 = uVar29;
          } while ((uVar61 & 1) == 0);
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
          fVar67 = *(float *)(unaff_x19 + 0x2e0);
          fVar46 = *(float *)(unaff_x19 + 0x180);
          lVar30 = lVar30 + uVar29 * unaff_x27;
          fVar55 = *(float *)(unaff_x19 + 0x2f4);
          fVar48 = *(float *)(lVar30 + 0x148);
          fVar68 = *(float *)(lVar30 + 0x150);
          FUN_040d17a4(&stack0x00001130,0);
          fVar58 = (float)FUN_040d175c(&stack0x00001150,0);
          FUN_040d17b4(&stack0x00001130,0);
          fVar59 = (float)FUN_040d176c(&stack0x00001148,0);
          FUN_040d1238(((fVar48 - fVar55) / unaff_s13 + fVar58) - fVar59,&stack0x000011e0,0);
          FUN_040d17a4(&stack0x00001130,0);
          fVar55 = (float)FUN_040d1764(&stack0x00001150,0);
          FUN_040d17b4(&stack0x00001130,0);
          fVar58 = (float)FUN_040d1774(&stack0x00001148,0);
          FUN_040d1248(((fVar68 - ((fVar49 - fVar67) + fVar46)) / unaff_s13 + fVar55) - fVar58,
                       &stack0x000011e0,0);
          in_stack_00000188 = 0.0;
        }
        else {
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
          lVar30 = *(long *)(lVar30 + (long)(int)uVar29 * unaff_x27 + 0x30);
          if ((lVar30 == 0) || (lVar30 = FUN_040e0298(lVar30,0), lVar30 == 0))
          goto thunk_FUN_01f08a3c;
          uVar14 = FUN_040cf27c(lVar30,0);
          if (*in_stack_000001b0 == 0) goto thunk_FUN_01f08a3c;
          iVar15 = FUN_040d30bc(*in_stack_000001b0,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar30 = FUN_040d2040(*in_stack_000001c8,0), lVar30 == 0)) ||
             (*(long *)(lVar30 + 0x48) == 0)) goto thunk_FUN_01f08a3c;
          uVar61 = FUN_02bd17c8(*(long *)(lVar30 + 0x48),uVar14 | iVar15 << 0x10,&stack0x00001158,
                                *(undefined8 *)PTR_DAT_045893d8);
          puVar45 = in_stack_000001d0;
          if ((uVar61 & 1) != 0) {
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto thunk_FUN_01f08a3c;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_040ec2e4;
            fVar55 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar67 = *(float *)(unaff_x19 + 0x2f4);
            FUN_040d1784(&stack0x00001158,0);
            fVar58 = (float)FUN_040d175c(&stack0x00001150,0);
            FUN_040d1794(&stack0x00001158,0);
            fVar59 = (float)FUN_040d176c(&stack0x00001148,0);
            FUN_040d1238(((fVar55 - fVar67) / unaff_s13 + fVar58) - fVar59,&stack0x000011e0,0);
            FUN_040d1784(&stack0x00001158,0);
            fVar55 = (float)FUN_040d1764(&stack0x00001150,0);
            puVar21 = &stack0x00001158;
LAB_040e7bc8:
            FUN_040d1794(puVar21,0);
            fVar58 = (float)FUN_040d1774(&stack0x00001148,0);
            FUN_040d1248(fVar55 - fVar58,&stack0x000011e0,0);
            in_stack_00000188 = 0.0;
            puVar45 = in_stack_000001d0;
          }
        }
      }
    }
    else {
      *(uint *)(unaff_x19 + 0x19c4) = uVar14;
    }
LAB_040e6630:
    fVar55 = (float)FUN_040d1240(&stack0x000011e0,0);
    fVar58 = (float)FUN_040d1240(&stack0x000011e0,0);
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar67 = *(float *)(unaff_x19 + 0x2f4);
      fVar59 = (float)FUN_040cf0d4(&stack0x000011f0,0);
      fVar67 = fVar67 - unaff_s13 * fVar59 * (1.0 - *(float *)(unaff_x19 + 0x1594));
      *(float *)(unaff_x19 + 0x2f4) = fVar67;
      if ((unaff_w26 != 0) || (in_stack_0000129c == 0x200b)) {
        *(float *)(unaff_x19 + 0x2f4) =
             fVar67 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
    }
    fVar59 = *(float *)(unaff_x19 + 0x2f0);
    if (fVar59 == 0.0) {
      in_stack_000000f0._4_4_ = 0.0;
    }
    else {
      fVar67 = (float)FUN_040cf0b4(&stack0x000011f0,0);
      fVar46 = (float)FUN_040cf0c4(&stack0x000011f0,0);
      in_stack_000000f0._4_4_ =
           (1.0 - *(float *)(unaff_x19 + 0x1594)) *
           (fVar59 * 0.5 - unaff_s13 * (fVar67 * 0.5 + fVar46));
      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000f0._4_4_;
    }
    uVar14 = 0;
    if ((cVar24 == '\0') && (*unaff_x24 == '\x01')) {
      uVar14 = *(uint *)(unaff_x19 + 0x124) & 1;
    }
    lVar30 = *in_stack_00000190;
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar61 = FUN_04073094(lVar30,0,0);
    puVar7 = PTR_DAT_04588b50;
    if (uVar14 == 0) {
      in_stack_00000148 = 0.0;
      if ((uVar61 & 1) != 0) {
        lVar30 = *in_stack_00000190;
        if (*(int *)(*(long *)PTR_DAT_04588b50 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        uVar61 = FUN_0404e8a4(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
        if ((uVar61 & 1) != 0) {
          lVar30 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
          uVar61 = FUN_0404e8a4(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
          if ((uVar61 & 1) != 0) {
            lVar30 = *in_stack_00000190;
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar30 == 0) goto thunk_FUN_01f08a3c;
            fVar59 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar30,*(undefined4 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
            unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
            if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto thunk_FUN_01f08a3c;
            fVar46 = *(float *)(*in_stack_000001c8 + 0x188);
            fVar67 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (*in_stack_00000190,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
            fVar67 = fVar67 * fVar59 * fVar46 * 0.25;
            if (fVar59 < in_stack_000001a8 + fVar67) {
              in_stack_000001a8 = fVar59 - fVar67;
            }
            goto LAB_040e69b0;
          }
        }
      }
      fVar67 = 0.0;
      unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
    }
    else {
      fVar67 = 0.0;
      unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
      if ((uVar61 & 1) != 0) {
        lVar30 = *in_stack_00000190;
        if (*(int *)(*(long *)PTR_DAT_04588b50 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        uVar61 = FUN_0404e8a4(lVar30,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
        unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
        if ((uVar61 & 1) != 0) {
          lVar30 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
          fVar59 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (lVar30,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
          fVar46 = (float)FUN_040d20a8(*in_stack_000001c8,0);
          unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
          if (*in_stack_00000190 == 0) goto thunk_FUN_01f08a3c;
          fVar67 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
          fVar67 = fVar59 * fVar46 * 0.25 * fVar67;
          if (fVar59 < in_stack_000001a8 + fVar67) {
            in_stack_000001a8 = fVar59 - fVar67;
          }
        }
      }
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      in_stack_00000148 = (float)FUN_040d20b8(*in_stack_000001c8,0);
    }
LAB_040e69b0:
    fVar46 = *(float *)(unaff_x19 + 0x2f4);
    fVar59 = (float)FUN_040cf0c4(&stack0x000011f0,0);
    fVar68 = *(float *)(unaff_x19 + 0x19a8);
    fVar48 = (float)FUN_040d1230(&stack0x000011e0,0);
    fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      unaff_s13 * (fVar48 + ((fVar59 * fVar68 - in_stack_000001a8) - fVar67));
    fVar59 = (float)FUN_040cf0cc(&stack0x000011f0,0);
    fVar48 = (float)FUN_040d1240(&stack0x000011e0,0);
    fVar65 = *(float *)(unaff_x19 + 0x180) +
             ((fVar49 + unaff_s13 * (in_stack_000001a8 + fVar59 + fVar48)) -
             *(float *)(unaff_x19 + 0x2e0));
    fVar59 = (float)FUN_040cf0bc(&stack0x000011f0,0);
    fVar59 = fVar65 - unaff_s13 * (in_stack_000001a8 + in_stack_000001a8 + fVar59);
    fVar48 = (float)FUN_040cf0b4(&stack0x000011f0,0);
    fVar48 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      unaff_s13 *
                      (fVar67 + fVar67 +
                      in_stack_000001a8 + in_stack_000001a8 +
                      fVar48 * *(float *)(unaff_x19 + 0x19a8));
    in_stack_000001b8._4_4_ = fVar46;
    fVar68 = fVar48;
    if (((cVar24 == '\0') && (*unaff_x24 == '\x01')) &&
       ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
      if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
      iVar15 = *(int *)(unaff_x19 + 0x19a4);
      fVar53 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      fVar51 = (float)FUN_040cedd0(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto thunk_FUN_01f08a3c;
      fVar52 = *(float *)(unaff_x19 + 0xf0);
      fVar64 = *(float *)(unaff_x19 + 0x180);
      fVar68 = (float)iVar15 * fStack00000000000000ac;
      fVar70 = (float)FUN_040ced80(*in_stack_000001c8 + 0xb0,0);
      fVar70 = fVar70 * fVar52 * (fVar53 - (fVar51 + fVar64)) * 0.5;
      fVar53 = (float)FUN_040cf0cc(&stack0x000011f0,0);
      fVar52 = fVar68 * unaff_s13 * ((fVar67 + in_stack_000001a8 + fVar53) - fVar70);
      fVar53 = (float)FUN_040cf0cc(&stack0x000011f0,0);
      fVar51 = (float)FUN_040cf0bc(&stack0x000011f0,0);
      fVar65 = fVar65 + 0.0;
      fVar59 = fVar59 + 0.0;
      fVar68 = fVar68 * unaff_s13 * ((((fVar53 - fVar51) - in_stack_000001a8) - fVar67) - fVar70);
      in_stack_000001b8._4_4_ = fVar46 + fVar68;
      fVar68 = fVar48 + fVar68;
      fVar46 = fVar46 + fVar52;
      fVar48 = fVar48 + fVar52;
    }
    uVar43 = *in_stack_00000100;
    uVar19 = *in_stack_000000f8;
    if (DAT_0482ee0f == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__);
      DAT_0482ee0f = '\x01';
    }
    uVar56 = **(undefined8 **)
               (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8);
    uVar60 = (*(undefined8 **)
               (*(long *)Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__ + 0xb8))[1];
    fVar53 = 0.0;
    if (DAT_00c926ec <
        (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar60 >> 0x20) +
        (float)uVar19 * (float)uVar60 +
        (float)uVar43 * (float)uVar56 +
        (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar56 >> 0x20)) {
      fVar63 = 0.0;
      fVar64 = 0.0;
      fVar52 = 0.0;
      fVar51 = fVar65;
      fVar70 = fVar59;
    }
    else {
      FUN_04065230(&stack0x000012a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                   *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                   *(undefined4 *)(unaff_x19 + 0x19c0),0);
      fVar66 = (fVar48 + in_stack_000001b8._4_4_) * 0.5;
      fVar69 = (fVar59 + fVar65) * 0.5;
      fVar65 = fVar65 - fVar69;
      fVar52 = 0.0;
      fVar51 = fVar65;
      fVar46 = (float)FUN_04065130(fVar46 - fVar66,&stack0x000010d0,0);
      fVar46 = fVar66 + fVar46;
      fVar52 = fVar52 + 0.0;
      fVar70 = fVar59 - fVar69;
      fVar64 = 0.0;
      fVar59 = fVar70;
      in_stack_000001b8._4_4_ =
           (float)FUN_04065130(in_stack_000001b8._4_4_ - fVar66,&stack0x000010d0,0);
      in_stack_000001b8._4_4_ = fVar66 + in_stack_000001b8._4_4_;
      fVar59 = fVar69 + fVar59;
      fVar64 = fVar64 + 0.0;
      fVar63 = 0.0;
      fVar48 = (float)FUN_04065130(fVar48 - fVar66,&stack0x000010d0,0);
      fVar48 = fVar66 + fVar48;
      fVar65 = fVar69 + fVar65;
      fVar63 = fVar63 + 0.0;
      fVar53 = 0.0;
      fVar68 = (float)FUN_04065130(fVar68 - fVar66,&stack0x000010d0,0);
      fVar68 = fVar66 + fVar68;
      fVar53 = fVar53 + 0.0;
      fVar51 = fVar69 + fVar51;
      fVar70 = fVar69 + fVar70;
    }
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*puVar45 * unaff_x27;
    *(float *)(lVar30 + 0x128) = fVar59;
    *(float *)(lVar30 + 300) = fVar64;
    *(float *)(lVar30 + 0x124) = in_stack_000001b8._4_4_;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*puVar45 * unaff_x27;
    *(float *)(lVar30 + 0x118) = fVar46;
    *(float *)(lVar30 + 0x11c) = fVar51;
    *(float *)(lVar30 + 0x120) = fVar52;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*puVar45 * unaff_x27;
    *(float *)(lVar30 + 0x130) = fVar48;
    *(float *)(lVar30 + 0x134) = fVar65;
    *(float *)(lVar30 + 0x138) = fVar63;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= *puVar45) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*puVar45 * unaff_x27;
    *(float *)(lVar30 + 0x13c) = fVar68;
    *(float *)(lVar30 + 0x140) = fVar70;
    *(float *)(lVar30 + 0x144) = fVar53;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *puVar45;
    fVar68 = *(float *)(unaff_x19 + 0x2f4);
    fVar46 = (float)FUN_040d1230(&stack0x000011e0,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    *(float *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x148) = fVar68 + unaff_s13 * fVar46;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *puVar45;
    fVar65 = *(float *)(unaff_x19 + 0x2e0);
    fVar68 = *(float *)(unaff_x19 + 0x180);
    fVar46 = (float)FUN_040d1240(&stack0x000011e0,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    *(float *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x150) =
         (fVar49 - fVar65) + fVar68 + unaff_s13 * fVar46;
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *puVar45;
    unaff_x20 = (long)(int)uVar14;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    *(float *)(lVar30 + unaff_x20 * unaff_x27 + 0x168) =
         (fVar48 - in_stack_000001b8._4_4_) / (fVar51 - fVar59);
    fVar55 = unaff_s13 * (fVar47 + fVar55);
    if (*unaff_x24 == '\x01') {
      fVar55 = fVar55 / fStack000000000000017c;
      fVar58 = (unaff_s13 * (fStack0000000000000170 + fVar58)) / fStack000000000000017c;
    }
    else {
      fVar58 = unaff_s13 * (fStack0000000000000170 + fVar58);
    }
    in_stack_000001b8._4_4_ = *(float *)(unaff_x19 + 0x328);
    fVar59 = *(float *)(unaff_x19 + 0x180);
    bVar9 = (float)uVar14 == in_stack_000001b8._4_4_;
    bVar10 = unaff_w26 == 0;
    fVar55 = fVar59 + fVar55;
    if (bVar10 || bVar9) {
      fVar58 = fVar59 + fVar58;
      fVar47 = fVar55;
      fVar46 = fVar58;
      if (fVar59 != 0.0) {
        fVar47 = (fVar55 - fVar59) / *(float *)(unaff_x19 + 0xf0);
        fVar46 = (fVar58 - fVar59) / *(float *)(unaff_x19 + 0xf0);
        if (fVar47 <= fVar55) {
          fVar47 = fVar55;
        }
        if (fVar58 <= fVar46) {
          fVar46 = fVar58;
        }
      }
      lVar33 = lVar30 + unaff_x20 * unaff_x27;
      fVar59 = fVar47;
      if (fVar47 <= *(float *)(unaff_x19 + 0x338)) {
        fVar59 = *(float *)(unaff_x19 + 0x338);
      }
      fVar48 = fVar46;
      if (*(float *)(unaff_x19 + 0x33c) <= fVar46) {
        fVar48 = *(float *)(unaff_x19 + 0x33c);
      }
      *(float *)(unaff_x19 + 0x338) = fVar59;
      *(float *)(unaff_x19 + 0x33c) = fVar48;
      *(float *)(lVar33 + 0x158) = fVar47;
      *(float *)(lVar33 + 0x15c) = fVar46;
      fVar47 = *(float *)(unaff_x19 + 0x2e0);
      fVar46 = fVar55 - fVar47;
    }
    else {
      fVar59 = *(float *)(unaff_x19 + 0x338);
      lVar33 = lVar30 + unaff_x20 * unaff_x27;
      *(float *)(lVar33 + 0x158) = fVar59;
      fVar58 = *(float *)(unaff_x19 + 0x33c);
      *(float *)(lVar33 + 0x15c) = fVar58;
      fVar47 = *(float *)(unaff_x19 + 0x2e0);
      fVar46 = fVar59 - fVar47;
    }
    *(float *)(lVar33 + 0x14c) = fVar46;
    *(float *)(lVar30 + unaff_x20 * unaff_x27 + 0x154) = fVar58 - fVar47;
    *(float *)(unaff_x19 + 0x378) = fVar58 - fVar47;
    if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
      if (bVar10 || bVar9) {
        *(float *)(unaff_x19 + 0x374) = fVar59;
        if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01f08a3c;
        fVar58 = *(float *)(unaff_x19 + 0x370);
        fVar59 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
        fVar47 = *(float *)(unaff_x19 + 0x2e0);
        fStack000000000000017c = (unaff_s13 * fVar59) / fStack000000000000017c;
        if (fVar58 <= fStack000000000000017c) {
          fVar58 = fStack000000000000017c;
        }
        *(float *)(unaff_x19 + 0x370) = fVar58;
        if (fVar47 == 0.0) goto LAB_040e7440;
      }
    }
    else if ((bVar10 || bVar9) && fVar47 == 0.0) {
LAB_040e7440:
      fVar58 = *(float *)(unaff_x19 + 0x19c8);
      if (*(float *)(unaff_x19 + 0x19c8) <= fVar55) {
        fVar58 = fVar55;
      }
      *(float *)(unaff_x19 + 0x19c8) = fVar58;
    }
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *puVar45;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)uVar14 * unaff_x27;
    *(undefined1 *)(lVar30 + 0x1a0) = 0;
    uVar29 = *(uint *)(unaff_x19 + 0x158) & 0x18;
    if ((in_stack_0000129c != 9) &&
       ((((unaff_w26 != 0 || (in_stack_0000129c == 3)) ||
         ((in_stack_0000129c == 0x200b || (in_stack_0000129c == 0xad)))) &&
        (((in_stack_0000129c == 0xad & (in_stack_000000c0._4_1_ ^ 0xff)) == 0 &&
         (*unaff_x24 != '\x02')))))) {
      if (((in_stack_0000129c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
        fVar54 = 0.0;
        if ((0.0 < fVar47) && (fVar54 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar54 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        if (in_stack_00000118 <
            (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar47)) + fVar54) {
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = uVar14;
          }
          in_stack_0000120c = FUN_040ef794();
          goto UnityEngine_UIElements_FocusController___ctor;
        }
      }
      if ((((0x22 < in_stack_0000129c - 0x2007) ||
           ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
          (1 < in_stack_0000129c - 10)) && (in_stack_0000129c != 0xa0)) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar57 = FUN_034fd62c(in_stack_0000129c,0);
        if ((uVar57 & 1) == 0) goto LAB_040e7d80;
      }
      if ((in_stack_0000129c == 0xad) || (in_stack_0000129c == 0x200b)) goto LAB_040e7ea4;
      if (in_stack_0000129c != 0x2060) {
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
      }
LAB_040e7d80:
      if (in_stack_0000129c != 0xa0) goto LAB_040e7ea4;
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
      goto LAB_040e7ea4;
    }
    *(undefined1 *)(lVar30 + 0x1a0) = 1;
    pfVar26 = _fStack0000000000000130;
    pfVar37 = _iStack0000000000000138;
    if (unaff_w23 != 0) {
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar37 = (float *)(lVar30 + 100);
      pfVar26 = (float *)(lVar30 + 0x68);
    }
    fVar59 = *pfVar37;
    fVar58 = *pfVar26;
    fVar55 = *(float *)(unaff_x19 + 0x35c);
    fVar46 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar59) - fVar58;
    bVar9 = true;
    if ((fVar55 <= fStack0000000000000174) && (bVar9 = false, !NAN(fVar55))) {
      bVar9 = fVar55 == -1.0;
    }
    if (!bVar9) {
      fStack0000000000000174 = fVar55;
    }
    fVar55 = 0.0;
    fVar48 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar48 = (float)FUN_040cf0d4(&stack0x000011f0,0);
      fVar47 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar49 = *(float *)(unaff_x19 + 0x1594);
    fVar68 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000129c != 0xad) {
      fVar54 = unaff_s13;
    }
    if ((0.0 < fVar47) && (fVar55 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar55 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar14 = *in_stack_000001d0;
    fVar55 = (*(float *)(unaff_x19 + 0x374) - (fVar68 - fVar47)) + fVar55;
    if (in_stack_00000118 < fVar55) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar14;
      }
      uVar43 = DAT_00c8e018;
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar65 = *(float *)(in_stack_000001e0 + 0xd0);
        if (((fVar65 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar47)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar54 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000020._4_4_ - fVar55) / (float)*(int *)(unaff_x19 + 0x340)) /
                   fStack0000000000000090;
          if (fVar54 <= fVar65) {
            fVar54 = fVar65;
          }
          goto LAB_040ec194;
        }
        fVar47 = *_fStack00000000000000d8;
        fVar55 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar55 < fVar47) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar54 = (fVar47 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar54 <= DAT_00c92764) {
            fVar54 = DAT_00c92764;
          }
          fVar58 = (fVar47 - fVar54) * 20.0 + 0.5;
          fVar54 = DAT_00c92a58;
          if (fVar58 != INFINITY) {
            fVar54 = (float)(int)fVar58 / 20.0;
          }
          if (fVar54 <= fVar55) {
            fVar54 = fVar55;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar47;
          goto LAB_040e96e4;
        }
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 1:
        if (0 < *(int *)(unaff_x19 + 0x340)) {
          iVar15 = FUN_027b23ec(in_stack_00000080,*(undefined8 *)PTR_DAT_04589480);
          uVar43 = DAT_00c8e018;
          if (iVar15 == 0) {
            in_stack_0000120c = 0xffffffff;
            in_stack_000001d0[0] = 0;
            in_stack_000001d0[1] = 0;
            puVar45 = in_stack_000001d0;
            fVar54 = unaff_s13;
          }
          else {
            FUN_027b2888(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_04589430);
            memcpy(&stack0x00000d38,&stack0x000012a0,0x398);
            iVar15 = FUN_040ef794();
            in_stack_0000120c = iVar15 - 1;
            iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
            *(int *)(unaff_x19 + 0x324) = iVar15;
            uVar43 = CONCAT44(0x2026,iVar15);
            in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
            puVar45 = in_stack_000001d0;
            fVar54 = unaff_s13;
          }
          goto LAB_040e58d0;
        }
        break;
      case 3:
        in_stack_0000120c = FUN_040ef794();
        uVar43 = CONCAT44((int)((ulong)in_stack_00001288 >> 0x20),uVar14);
        puVar45 = in_stack_000001d0;
        fVar54 = unaff_s13;
        goto LAB_040e58d0;
      case 5:
        if (uVar14 == 0 || (int)in_stack_0000120c < 0) {
          in_stack_0000120c = 0xffffffff;
          *in_stack_000001d0 = 0;
          puVar45 = in_stack_000001d0;
          fVar54 = unaff_s13;
          goto LAB_040e58d0;
        }
        fVar54 = *(float *)(unaff_x19 + 0x338);
        in_stack_0000120c = FUN_040ef794();
        if (fVar54 - fVar68 <= in_stack_00000118) {
          *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
          *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
          *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
          *(undefined1 *)(unaff_x19 + 0x37c) = 1;
          *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
          *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
          *(undefined4 *)(unaff_x19 + 0x374) = 0;
          *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
          *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
          *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
          puVar45 = in_stack_000001d0;
          uVar43 = in_stack_00001288;
          fVar54 = unaff_s13;
          goto LAB_040e58d0;
        }
UnityEngine_UIElements_FocusController___ctor:
        puVar45 = in_stack_000001d0;
        uVar43 = CONCAT44(3,uVar14);
        fVar54 = unaff_s13;
        goto LAB_040e58d0;
      case 6:
        in_stack_0000120c = FUN_040ef794();
        uVar43 = CONCAT44(3,uVar14);
        puVar45 = in_stack_000001d0;
        fVar54 = unaff_s13;
        goto LAB_040e58d0;
      }
    }
    if ((uVar57 & 1) == 0) goto LAB_040e780c;
    fVar55 = ABS(fVar46) + fVar48 * (1.0 - fVar49) * fVar54;
    fVar54 = 1.0;
    if (uVar29 != 0) {
      fVar54 = DAT_00c926dc;
    }
    if (fVar55 <= fVar54 * fStack0000000000000174) goto LAB_040e780c;
    if ((uStack0000000000000094 == 0) || (uVar14 == *(uint *)(unaff_x19 + 0x328))) {
      if ((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar47 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar49 < fVar47) {
          fVar58 = fVar55 / (1.0 - fVar49);
          if (fVar49 <= 0.0) {
            fVar58 = fVar55;
          }
          fVar49 = fVar49 + (fVar55 - fVar54 * (fStack0000000000000174 + DAT_00c928e4)) / fVar58;
          goto LAB_040ec290;
        }
        fVar47 = *(float *)(in_stack_000001e0 + 0xac);
        fVar46 = *_fStack00000000000000d8;
        if (fVar47 < fVar46) goto LAB_040ec200;
      }
      iVar15 = *(int *)(in_stack_000001e0 + 0x74);
      if (iVar15 == 1) {
        iVar15 = FUN_027b23ec(in_stack_00000080,*(undefined8 *)PTR_DAT_04589480);
        uVar43 = DAT_00c8e018;
        if (iVar15 == 0) {
          in_stack_0000120c = 0xffffffff;
          in_stack_000001d0[0] = 0;
          in_stack_000001d0[1] = 0;
          puVar45 = in_stack_000001d0;
          fVar54 = unaff_s13;
        }
        else {
          FUN_027b2888(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_04589430);
          memcpy(&stack0x00000608,&stack0x000012a0,0x398);
          iVar15 = FUN_040ef794();
          in_stack_0000120c = iVar15 - 1;
          iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar15;
          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
          puVar45 = in_stack_000001d0;
          uVar43 = CONCAT44(0x2026,iVar15);
          fVar54 = unaff_s13;
        }
        goto LAB_040e58d0;
      }
      if (iVar15 == 6) {
        in_stack_0000120c = FUN_040ef794();
        uVar14 = *(uint *)(unaff_x19 + 0x324);
      }
      else {
        if (iVar15 != 3) goto LAB_040e780c;
        in_stack_0000120c = FUN_040ef794();
      }
      goto LAB_040e9008;
    }
    in_stack_0000120c = FUN_040ef794();
    if (*(float *)(unaff_x19 + 0x2e4) == DAT_00c927ac) {
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar28 = *in_stack_000001d0;
      if (*(uint *)(lVar30 + 0x18) <= uVar28) goto LAB_040ec2e4;
      fVar46 = *(float *)(unaff_x19 + 0x2e0);
      fVar47 = 0.0;
      if ((0.0 < fVar46) && (fVar47 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
        fVar47 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
      }
      fVar47 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
               *(float *)(lVar30 + (long)(int)uVar28 * unaff_x27 + 0x158) +
               (fVar47 - *(float *)(unaff_x19 + 0x33c)) +
               fStack0000000000000090 * (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0));
    }
    else {
      fVar47 = *(float *)(in_stack_000001e0 + 200);
      *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      fVar46 = *(float *)(unaff_x19 + 0x2e0);
      uVar28 = *(uint *)(unaff_x19 + 0x324);
      fVar47 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar47;
    }
    if ((*(uint *)(lVar30 + 0x18) <= uVar28) ||
       (uVar44 = uVar28 - 1, *(uint *)(lVar30 + 0x18) <= uVar44)) goto LAB_040ec2e4;
    fVar48 = (fVar47 + *(float *)(unaff_x19 + 0x374) + fVar46) -
             *(float *)(lVar30 + (long)(int)uVar28 * (long)iVar17 + 0x15c);
    if (((in_stack_000000c0._4_1_ & 1) == 0 &&
         *(short *)(lVar30 + (long)(int)uVar44 * (long)iVar17 + 0x20) == 0xad) &&
       ((fVar48 < in_stack_00000118 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
      in_stack_0000120c = in_stack_0000120c - 1;
      in_stack_000000c0._4_1_ = 0;
      *in_stack_000001d0 = uVar44;
      puVar45 = in_stack_000001d0;
      uVar43 = CONCAT44(0x2d,uVar44);
      fVar54 = unaff_s13;
      goto LAB_040e58d0;
    }
    if (*(short *)(lVar30 + (long)(int)uVar28 * unaff_x27 + 0x20) == 0xad) {
      in_stack_000000c0._4_1_ = 1;
      puVar45 = in_stack_000001d0;
      uVar43 = in_stack_00001288;
      fVar54 = unaff_s13;
      goto LAB_040e58d0;
    }
    if ((bStack00000000000000e0 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
      fVar49 = *(float *)(unaff_x19 + 0x1594);
      fVar47 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
      if ((fVar47 <= fVar49) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar46 = *_fStack00000000000000d8;
        fVar47 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar46 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_040e91b4;
LAB_040ec200:
        fVar54 = (fVar46 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar54 <= DAT_00c92764) {
          fVar54 = DAT_00c92764;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar46;
        fVar55 = (fVar46 - fVar54) * 20.0 + 0.5;
        fVar54 = DAT_00c92a58;
        if (fVar55 != INFINITY) {
          fVar54 = (float)(int)fVar55 / 20.0;
        }
        if (fVar54 <= fVar47) {
          fVar54 = fVar47;
        }
LAB_040e96e4:
        *(float *)(unaff_x19 + 0xec) = fVar54;
        goto LAB_040e4eec;
      }
LAB_040ec2a4:
      fVar58 = fVar55;
      if (0.0 < fVar49) {
        fVar58 = fVar55 / (1.0 - fVar49);
      }
      fVar49 = fVar49 + (fVar55 - fVar54 * (fStack0000000000000174 + DAT_00c928e4)) / fVar58;
LAB_040ec290:
      if (fVar47 <= fVar49) {
        fVar49 = fVar47;
      }
      *(float *)(unaff_x19 + 0x1594) = fVar49;
      goto LAB_040e4eec;
    }
LAB_040e91b4:
    iVar15 = *in_stack_00000038;
    if ((iVar15 != iStack0000000000000030) && ((bStack00000000000000e0 & iVar15 != -1) != 0)) {
      in_stack_0000120c = FUN_040ef794();
      unaff_x28 = (long *)Method_Unity_Collections_NativeArray<byte>_ToArray__;
      lVar30 = *(long *)(in_stack_000001c0 + 0x30);
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar28 = *in_stack_000001d0;
      uVar44 = uVar28 - 1;
      if (*(uint *)(lVar30 + 0x18) <= uVar44) goto LAB_040ec2e4;
      iStack0000000000000030 = iVar15;
      if (*(short *)(lVar30 + (long)(int)uVar44 * (long)iVar17 + 0x20) == 0xad) {
        in_stack_0000120c = in_stack_0000120c - 1;
        in_stack_000000c0._4_1_ = 0;
        *in_stack_000001d0 = uVar44;
        puVar45 = in_stack_000001d0;
        uVar43 = CONCAT44(0x2d,uVar44);
        fVar54 = unaff_s13;
        goto LAB_040e58d0;
      }
    }
    if (fVar48 <= in_stack_00000118) {
      FUN_040f9ccc(fStack0000000000000090,unaff_s13,in_stack_00000158,in_stack_00000148,
                   in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
      bStack00000000000000e0 = 1;
      in_stack_000000c0._4_1_ = 0;
      in_stack_000000b0 = 1;
      puVar45 = in_stack_000001d0;
      uVar43 = in_stack_00001288;
      fVar54 = unaff_s13;
      goto LAB_040e58d0;
    }
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar28;
    }
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar47 = *(float *)(in_stack_000001e0 + 0xd0);
      if ((fVar47 < *(float *)(unaff_x19 + 0x15b0)) &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar54 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000020._4_4_ - fVar48) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                 fStack0000000000000090;
        if (fVar54 <= fVar47) {
          fVar54 = fVar47;
        }
LAB_040ec194:
        *(float *)(unaff_x19 + 0x15b0) = fVar54;
        goto LAB_040e4eec;
      }
      fVar49 = *(float *)(unaff_x19 + 0x1594);
      fVar47 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
      if ((fVar49 < fVar47) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
      goto LAB_040ec2a4;
      fVar46 = *_fStack00000000000000d8;
      fVar47 = *(float *)(in_stack_000001e0 + 0xac);
      if ((fVar47 < fVar46) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
      goto LAB_040ec200;
    }
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 0:
    case 2:
    case 4:
      FUN_040f9ccc(fStack0000000000000090,unaff_s13,in_stack_00000158,in_stack_00000148,
                   in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
      break;
    case 1:
      iVar15 = FUN_027b23ec(in_stack_00000080,*(undefined8 *)PTR_DAT_04589480);
      uVar43 = DAT_00c8e018;
      if (iVar15 == 0) {
        in_stack_000000c0._4_1_ = 0;
        in_stack_000001d0[0] = 0;
        in_stack_000001d0[1] = 0;
        puVar45 = in_stack_000001d0;
        in_stack_0000120c = 0xffffffff;
        fVar54 = unaff_s13;
      }
      else {
        FUN_027b2888(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_04589430);
        memcpy(&stack0x000009a0,&stack0x000012a0,0x398);
        iVar18 = FUN_040ef794();
        in_stack_000000c0._4_1_ = 0;
        iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar15;
        in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
        puVar45 = in_stack_000001d0;
        in_stack_0000120c = iVar18 - 1;
        uVar43 = CONCAT44(0x2026,iVar15);
        fVar54 = unaff_s13;
      }
      goto LAB_040e58d0;
    case 3:
      in_stack_0000120c = FUN_040ef794();
      in_stack_000000c0._4_1_ = 0;
      goto LAB_040e9008;
    case 5:
      *(undefined1 *)(unaff_x19 + 0x37c) = 1;
      FUN_040f9ccc(fStack0000000000000090,unaff_s13,in_stack_00000158,in_stack_00000148,
                   in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
      *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
      *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
      *(undefined4 *)(unaff_x19 + 0x374) = 0;
      *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
      *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
      break;
    case 6:
      in_stack_000000c0._4_1_ = 0;
      uVar14 = uVar28;
LAB_040e9008:
      puVar45 = in_stack_000001d0;
      uVar43 = CONCAT44(3,uVar14);
      fVar54 = unaff_s13;
      goto LAB_040e58d0;
    default:
      goto switchD_040e9400_default;
    }
    in_stack_000000c0._4_1_ = 0;
    puVar45 = in_stack_000001d0;
LAB_040e8b8c:
    bStack00000000000000e0 = 1;
    in_stack_000000b0 = 1;
    uVar43 = in_stack_00001288;
    fVar54 = unaff_s13;
    goto LAB_040e58d0;
  }
  goto LAB_040ec2e4;
switchD_040e9400_default:
  in_stack_000000c0._4_1_ = 0;
  uVar14 = uVar28;
LAB_040e780c:
  if (unaff_w26 == 0) {
    if (in_stack_0000129c == 0xad) {
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
      *(undefined1 *)(lVar30 + (long)(int)uVar14 * (long)iVar17 + 0x1a0) = 0;
    }
    else {
      if (*unaff_x24 == '\x02') {
        FUN_040f4f28();
      }
      else if (*unaff_x24 == '\x01') {
        FUN_040f43bc(in_stack_000001a8,fVar67);
      }
      uVar14 = *in_stack_000001d0;
      if ((in_stack_000000b0 & 1) != 0) {
        *(uint *)(unaff_x19 + 0x330) = uVar14;
      }
      *(uint *)(unaff_x19 + 0x334) = uVar14;
      *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      in_stack_000000b0 = 0;
      *(float *)(lVar30 + 100) = fVar59;
      *(float *)(lVar30 + 0x68) = fVar58;
    }
  }
  else {
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    *(undefined1 *)(lVar30 + (long)(int)uVar14 * (long)iVar17 + 0x1a0) = 0;
    *(uint *)(unaff_x19 + 0x334) = uVar14;
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar14 = *(uint *)(lVar30 + 0x18);
    if (uVar14 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
    lVar33 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    iVar15 = *(int *)(lVar33 + 0x2c) + 1;
    *(int *)(lVar33 + 0x2c) = iVar15;
    *(int *)(unaff_x19 + 0x348) = iVar15;
    if (uVar14 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar30 + 100) = fVar59;
    *(float *)(lVar30 + 0x68) = fVar58;
    *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
  }
LAB_040e7ea4:
  bVar9 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar9 && unaff_w23 == 1) {
    bVar9 = in_stack_0000129c == 0x2d;
  }
  if (bVar9) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
    fVar54 = *(float *)(unaff_x19 + 0xf4);
    iVar15 = FUN_040ced70(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
    fVar58 = (float)FUN_040ced80(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar30 = *(long *)(unaff_x19 + 0x1a00);
    fVar55 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar55 = 1.0;
    }
    if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto thunk_FUN_01f08a3c;
    fVar47 = *(float *)(unaff_x19 + 0xf0);
    fVar46 = *(float *)(lVar30 + 0x2c);
    fVar59 = (float)FUN_040cf2c8(*(long *)(lVar30 + 0x20),0);
    fVar67 = *_iStack0000000000000138;
    fVar59 = fVar47 * (fVar54 / (float)iVar15) * fVar58 * fVar55 * fVar46 * fVar59;
    fVar54 = *_fStack0000000000000130;
    if ((in_stack_0000129c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      uVar14 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
      fVar55 = *(float *)(lVar30 + (long)(int)uVar14 * (long)iVar17 + 0x68);
      iVar17 = FUN_040ced70(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01f08a3c;
      fVar47 = (float)FUN_040ced80(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar30 = *(long *)(unaff_x19 + 0x1a00);
      fVar58 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar58 = 1.0;
      }
      if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto thunk_FUN_01f08a3c;
      fVar46 = *(float *)(unaff_x19 + 0xf0);
      fVar48 = *(float *)(lVar30 + 0x2c);
      fVar59 = (float)FUN_040cf2c8(*(long *)(lVar30 + 0x20),0);
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_040ec2e4;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar67 = *(float *)(lVar30 + 100);
      fVar54 = *(float *)(lVar30 + 0x68);
      fVar59 = fVar46 * (fVar55 / (float)iVar17) * fVar47 * fVar58 * fVar48 * fVar59;
    }
    fVar58 = *(float *)(unaff_x19 + 0x2f4);
    fVar55 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar30 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar30 == 0))
      goto thunk_FUN_01f08a3c;
      FUN_040cf28c(&stack0x000012a0,lVar30,0);
      fVar55 = (float)FUN_040cf0d4(&stack0x000011c0,0);
    }
    fVar47 = *(float *)(unaff_x19 + 0x35c);
    fVar54 = (fStack000000000000012c - fVar67) - fVar54;
    bVar9 = true;
    if ((fVar47 <= fVar54) && (bVar9 = false, !NAN(fVar47))) {
      bVar9 = fVar47 == -1.0;
    }
    if (!bVar9) {
      fVar54 = fVar47;
    }
    fVar47 = 1.0;
    if (uVar29 != 0) {
      fVar47 = DAT_00c926dc;
    }
    if (ABS(fVar58) + fVar59 * fVar55 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar47 * fVar54) {
      FUN_040ef438();
      uVar43 = *(undefined8 *)PTR_DAT_04589438;
      memcpy(&stack0x000012a0,in_stack_00000070,0x398);
      FUN_027b2770(in_stack_00000080,&stack0x000012a0,uVar43);
    }
  }
  in_x12 = 0x60;
  lVar30 = *in_stack_000001e8;
  if (lVar30 == 0) goto thunk_FUN_01f08a3c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_000001d0) goto LAB_040ec2e4;
  uVar14 = *(uint *)(unaff_x19 + 0x340);
  lVar30 = lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(uint *)(lVar30 + 0x6c) = uVar14;
  *(undefined4 *)(lVar30 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  plVar42 = in_stack_000001e8;
  unaff_w25 = unaff_w26;
  if ((unaff_w23 == 0) &&
     ((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
  }
  else {
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    puVar45 = in_stack_000001d0;
    if (*(int *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x24) != 1) goto code_r0x040e8218;
  }
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
  *(undefined4 *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  puVar45 = in_stack_000001d0;
  goto code_r0x040e8218;
LAB_040e9f88:
  do {
    uVar14 = uVar28 - 1;
    if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar31 = (long)(int)uVar14;
    lVar30 = lVar41 + lVar31 * 0x188;
    lVar33 = *(long *)(lVar30 + 0x40);
    uVar3 = *(ushort *)(lVar30 + 0x20);
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    bVar12 = FUN_034f9bb4(uVar3,0);
    if (*(uint *)(lVar41 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = *(long *)(in_stack_000001c0 + 0x48);
    uVar44 = (uint)uVar3;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar2 = *(uint *)(lVar41 + lVar31 * 0x188 + 0x6c);
    if (*(uint *)(lVar30 + 0x18) <= uVar2) goto LAB_040ec2e4;
    lVar34 = (long)(int)uVar2;
    lVar30 = lVar30 + lVar34 * 0x60;
    uVar5 = *(uint *)(lVar30 + 0x40);
    uVar40 = *(uint *)(lVar30 + 0x6c);
    iVar18 = *(int *)(lVar30 + 0x20);
    iVar17 = *(int *)(lVar30 + 0x28);
    iVar15 = *(int *)(lVar30 + 0x2c);
    uVar6 = *(uint *)(lVar30 + 0x44);
    lVar35 = (long)(int)uVar6;
    fVar46 = *(float *)(lVar30 + 0x50);
    fVar49 = *(float *)(lVar30 + 0x58);
    fVar59 = *(float *)(lVar30 + 0x5c);
    fVar47 = *(float *)(lVar30 + 0x60);
    fVar65 = *(float *)(lVar30 + 100);
    fVar68 = *(float *)(lVar30 + 0x70);
    fVar53 = *(float *)(lVar30 + 0x74);
    fVar67 = *(float *)(lVar30 + 0x78);
    fVar48 = *(float *)(lVar30 + 0x7c);
    if ((int)uVar40 < 0x421) {
      if ((int)uVar40 < 0x209) {
        if ((int)uVar40 < 0x111) {
          switch(uVar40) {
          case 0x101:
            goto switchD_040ea0e0_caseD_1001;
          case 0x102:
            goto switchD_040ea0e0_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_040ea0e0_caseD_1004;
          case 0x108:
            goto switchD_040ea0e0_caseD_1008;
          default:
            if (uVar40 == 0x110) goto switchD_040ea0e0_caseD_1008;
          }
        }
        else {
          switch(uVar40) {
          case 0x201:
            goto switchD_040ea0e0_caseD_1001;
          case 0x202:
            goto switchD_040ea0e0_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_040ea0e0_caseD_1004;
          case 0x208:
            goto switchD_040ea0e0_caseD_1008;
          default:
            if (uVar40 == 0x120) goto LAB_040ea244;
          }
        }
      }
      else if ((int)uVar40 < 0x405) {
        if ((int)uVar40 < 0x401) {
          if (uVar40 == 0x210) goto switchD_040ea0e0_caseD_1008;
          if (uVar40 == 0x220) goto LAB_040ea244;
        }
        else {
          if (uVar40 == 0x401) goto switchD_040ea0e0_caseD_1001;
          if (uVar40 == 0x402) goto switchD_040ea0e0_caseD_1002;
          if (uVar40 == 0x404) goto switchD_040ea0e0_caseD_1004;
        }
      }
      else {
        if ((uVar40 == 0x408) || (uVar40 == 0x410)) goto switchD_040ea0e0_caseD_1008;
        if (uVar40 == 0x420) goto LAB_040ea244;
      }
      goto switchD_040ea0e0_caseD_1003;
    }
    if (0x1008 < (int)uVar40) {
      if ((int)uVar40 < 0x2005) {
        if (0x2000 < (int)uVar40) {
          if (uVar40 == 0x2001) goto switchD_040ea0e0_caseD_1001;
          if (uVar40 == 0x2002) goto switchD_040ea0e0_caseD_1002;
          if (uVar40 == 0x2004) goto switchD_040ea0e0_caseD_1004;
          goto switchD_040ea0e0_caseD_1003;
        }
        if (uVar40 != 0x1010) {
          uVar25 = 0x1020;
          goto LAB_040ea204;
        }
      }
      else if ((uVar40 != 0x2008) && (uVar40 != 0x2010)) {
        uVar25 = 0x2020;
LAB_040ea204:
        if (uVar40 != uVar25) goto switchD_040ea0e0_caseD_1003;
LAB_040ea244:
        fVar59 = fVar68 + fVar67;
        goto LAB_040ea258;
      }
      goto switchD_040ea0e0_caseD_1008;
    }
    if ((int)uVar40 < 0x811) {
      switch(uVar40) {
      case 0x801:
        goto switchD_040ea0e0_caseD_1001;
      case 0x802:
        goto switchD_040ea0e0_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_040ea0e0_caseD_1004;
      case 0x808:
switchD_040ea0e0_caseD_1008:
        if ((int)uVar14 <= (int)uVar6) {
          if (uVar44 < 0xad) {
            if ((uVar44 != 3) && (uVar44 != 10)) goto LAB_040ea4f0;
          }
          else if ((uVar44 != 0xad) && ((uVar44 != 0x200b && (uVar44 != 0x2060)))) {
LAB_040ea4f0:
            if (*(uint *)(lVar41 + 0x18) <= uVar5) goto LAB_040ec2e4;
            uVar4 = *(undefined2 *)(lVar41 + (long)(int)uVar5 * 0x188 + 0x20);
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              plVar42 = (long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
            }
            uVar22 = FUN_034fd1a8(uVar4,0);
            if ((uVar22 & 1) == 0) {
              bVar11 = (int)uVar2 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar11 = false;
            }
            if ((fVar59 <= fVar47) && (!bVar11 && (uVar40 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar65;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar47 + fVar65;
              }
              goto LAB_040ea25c;
            }
            if ((uVar28 == 1) || (uVar2 != uVar29)) {
              cVar24 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar24 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar15 = (iVar15 - iVar18) - (uStack0000000000000094 & 1);
                fVar65 = -fVar59;
                if (cVar24 != '\0') {
                  fVar65 = fVar59;
                }
                if (iVar15 < 1) {
                  fVar59 = 1.0;
                }
                else {
                  fVar59 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar15 < 2) {
                  iVar15 = 1;
                }
                fVar47 = fVar47 + fVar65;
                if (uVar44 == 9) {
LAB_040ec014:
                  if (cVar24 != '\0') {
                    fVar47 = fVar47 * (1.0 - fVar59);
                    fVar65 = (float)iVar15;
FUN_040ec050:
                    in_stack_00000158 = in_stack_00000158 - fVar47 / fVar65;
                    break;
                  }
                  fVar65 = (float)iVar15;
                  fVar47 = fVar47 * (1.0 - fVar59);
                }
                else {
                  if (uVar44 != 0xa0) {
                    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar22 = FUN_034fd62c(uVar44,0);
                    cVar24 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar22 & 1) != 0) goto LAB_040ec014;
                  }
                  fVar47 = fVar47 * fVar59;
                  fVar65 = (float)(int)((iVar18 - (~uStack0000000000000094 & 1)) + iVar17);
                  if (cVar24 != '\0') goto FUN_040ec050;
                }
                in_stack_00000158 = in_stack_00000158 + fVar47 / fVar65;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar65;
            if (cVar24 != '\0') {
              in_stack_00000158 = fVar47 + fVar65;
            }
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uStack0000000000000094 = FUN_034fd62c(uVar44,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar40 == 0x810) goto switchD_040ea0e0_caseD_1008;
      }
    }
    else {
      switch(uVar40) {
      case 0x1001:
switchD_040ea0e0_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar65 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar59;
        }
        break;
      case 0x1002:
switchD_040ea0e0_caseD_1002:
LAB_040ea258:
        in_stack_00000158 = (fVar65 + fVar47 * 0.5) - fVar59 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_040ea0e0_caseD_1003;
      case 0x1004:
switchD_040ea0e0_caseD_1004:
        in_stack_00000158 = (fVar47 + fVar65) - fVar59;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar47 + fVar65;
        }
        break;
      case 0x1008:
        goto switchD_040ea0e0_caseD_1008;
      default:
        if (uVar40 == 0x820) goto LAB_040ea244;
        goto switchD_040ea0e0_caseD_1003;
      }
LAB_040ea25c:
      _in_stack_00000148 = 0;
    }
switchD_040ea0e0_caseD_1003:
    uVar40 = (uint)*(undefined8 *)(lVar41 + 0x18);
    if (uVar40 <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar41 + lVar31 * 0x188;
    fVar65 = fStack0000000000000120 + in_stack_00000158;
    fVar59 = (float)_in_stack_00000118 + (float)_in_stack_00000148;
    fVar47 = (float)((ulong)_in_stack_00000118 >> 0x20) + (float)((ulong)_in_stack_00000148 >> 0x20)
    ;
    if (*(char *)(lVar30 + 0x1a0) == '\0') goto LAB_040eaaf8;
    cVar24 = *(char *)(lVar41 + lVar31 * 0x188 + 0x28);
    if (cVar24 != '\x01') goto UnityEngine_UIElements_PanelSettings__set_scale;
    fVar58 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar2,1.0);
    plVar42 = (long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar58 = 1.0;
      lVar27 = lVar41 + lVar31 * 0x188;
      *(undefined4 *)(lVar27 + 0xbc) = 0;
      *(undefined4 *)(lVar27 + 0x94) = 0;
      *(undefined4 *)(lVar27 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar48 = *(float *)(lVar41 + lVar31 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar27 = lVar41 + lVar31 * 0x188;
        fVar67 = (in_stack_00000158 + fVar48) - *(float *)(unaff_x19 + 0x360);
        fVar48 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_040ea408;
      }
      lVar27 = lVar41 + lVar31 * 0x188;
      fVar67 = fVar67 - fVar68;
      *(float *)(lVar27 + 0xbc) = fVar58 + (fVar48 - fVar68) / fVar67;
      *(float *)(lVar27 + 0x94) = fVar58 + (*(float *)(lVar27 + 0x78) - fVar68) / fVar67;
      *(float *)(lVar27 + 0xe4) = fVar58 + (*(float *)(lVar27 + 200) - fVar68) / fVar67;
      fVar58 = fVar58 + (*(float *)(lVar27 + 0xf0) - fVar68) / fVar67;
      break;
    case 2:
      lVar27 = lVar41 + lVar31 * 0x188;
      fVar48 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar67 = (in_stack_00000158 + *(float *)(lVar27 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_040ea408:
      *(float *)(lVar27 + 0xbc) = fVar58 + fVar67 / fVar48;
      *(float *)(lVar27 + 0x94) =
           fVar58 + ((in_stack_00000158 + *(float *)(lVar27 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar27 + 0xe4) =
           fVar58 + ((in_stack_00000158 + *(float *)(lVar27 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar58 = fVar58 + ((in_stack_00000158 + *(float *)(lVar27 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar27 = lVar41 + lVar31 * 0x188;
        *(undefined4 *)(lVar27 + 0xc0) = 0;
        *(undefined4 *)(lVar27 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar27 + 0xe8) = 0;
        *(undefined4 *)(lVar27 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar48 = fVar48 - fVar53;
        lVar27 = lVar41 + lVar31 * 0x188;
        fVar67 = fVar58 + (*(float *)(lVar27 + 0xa4) - fVar53) / fVar48;
        fVar48 = fVar58 + (*(float *)(lVar27 + 0x7c) - fVar53) / fVar48;
        *(float *)(lVar27 + 0xc0) = fVar67;
        *(float *)(lVar27 + 0x98) = fVar48;
        *(float *)(lVar27 + 0xe8) = fVar67;
        *(float *)(lVar27 + 0x110) = fVar48;
        break;
      case 2:
        lVar27 = lVar41 + lVar31 * 0x188;
        fVar67 = fVar58 + (*(float *)(lVar27 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar27 + 0xc0) = fVar67;
        fVar48 = *(float *)(unaff_x19 + 0x364);
        fVar68 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar27 + 0xe8) = fVar67;
        fVar67 = fVar58 + (*(float *)(lVar27 + 0x7c) - fVar48) / (fVar68 - fVar48);
        *(float *)(lVar27 + 0x98) = fVar67;
        *(float *)(lVar27 + 0x110) = fVar67;
        break;
      case 3:
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ea2c(*(undefined8 *)PTR_DAT_04579e98,0);
        uVar40 = (uint)*(undefined8 *)(lVar41 + 0x18);
      }
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
      lVar27 = lVar41 + lVar31 * 0x188;
      fVar67 = *(float *)(lVar27 + 0x168);
      fVar48 = (1.0 - (*(float *)(lVar27 + 0xc0) + *(float *)(lVar27 + 0x98)) * fVar67) * 0.5;
      fVar68 = fVar58 + *(float *)(lVar27 + 0xc0) * fVar67 + fVar48;
      fVar58 = fVar58 + *(float *)(lVar27 + 0x98) * fVar67 + fVar48;
      *(float *)(lVar27 + 0xbc) = fVar68;
      *(float *)(lVar27 + 0x94) = fVar68;
      *(float *)(lVar27 + 0xe4) = fVar58;
      break;
    default:
      goto switchD_040ea340_default;
    }
    *(float *)(lVar41 + lVar31 * 0x188 + 0x10c) = fVar58;
switchD_040ea340_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
      lVar27 = lVar41 + lVar31 * 0x188;
      *(undefined4 *)(lVar27 + 0xc0) = 0;
      *(undefined4 *)(lVar27 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar40) {
        fVar46 = fVar46 - fVar49;
        lVar27 = lVar41 + lVar31 * 0x188;
        fVar58 = (*(float *)(lVar27 + 0xa4) - fVar49) / fVar46;
        fVar46 = (*(float *)(lVar27 + 0x7c) - fVar49) / fVar46;
        *(float *)(lVar27 + 0xc0) = fVar58;
        goto LAB_040ea7b8;
      }
      goto LAB_040ec2e4;
    case 2:
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
      lVar27 = lVar41 + lVar31 * 0x188;
      fVar58 = (*(float *)(lVar27 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar27 + 0xc0) = fVar58;
      fVar46 = (*(float *)(lVar27 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_040ea7b8:
      *(float *)(lVar27 + 0x98) = fVar46;
      *(float *)(lVar27 + 0xe8) = fVar46;
      *(float *)(lVar27 + 0x110) = fVar58;
      break;
    case 3:
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
      lVar27 = lVar41 + lVar31 * 0x188;
      fVar46 = *(float *)(lVar27 + 0x168);
      fVar67 = (1.0 - (*(float *)(lVar27 + 0xbc) + *(float *)(lVar27 + 0xe4)) / fVar46) * 0.5;
      fVar58 = *(float *)(lVar27 + 0xbc) / fVar46 + fVar67;
      fVar67 = *(float *)(lVar27 + 0xe4) / fVar46 + fVar67;
      *(float *)(lVar27 + 0xc0) = fVar58;
      *(float *)(lVar27 + 0x98) = fVar67;
      *(float *)(lVar27 + 0x110) = fVar58;
      *(float *)(lVar27 + 0xe8) = fVar67;
    }
    if (uVar40 <= uVar14) goto LAB_040ec2e4;
    lVar27 = lVar41 + lVar31 * 0x188;
    fVar58 = *(float *)(lVar27 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar27 + 100) == '\0') && ((*(byte *)(lVar41 + lVar31 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar58 = -fVar58;
    }
    lVar27 = lVar41 + lVar31 * 0x188;
    *(float *)(lVar27 + 0xb8) = fVar58;
    *(float *)(lVar27 + 0x90) = fVar58;
    *(float *)(lVar27 + 0xe0) = fVar58;
    *(float *)(lVar27 + 0x108) = fVar58;
    *(undefined4 *)(lVar27 + 0xbc) = 0x3f800000;
    *(float *)(lVar27 + 0xc0) = fVar58;
    *(undefined4 *)(lVar27 + 0x94) = 0x3f800000;
    *(float *)(lVar27 + 0x98) = fVar58;
    *(undefined4 *)(lVar27 + 0xe4) = 0x3f800000;
    *(float *)(lVar27 + 0xe8) = fVar58;
    *(undefined4 *)(lVar27 + 0x10c) = 0x3f800000;
    *(float *)(lVar27 + 0x110) = fVar58;
UnityEngine_UIElements_PanelSettings__set_scale:
    if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5))
        goto UnityEngine_UIElements_PanelSettings__set_referenceResolution;
        if (uVar14 < uVar40) {
          bVar11 = *(uint *)(lVar41 + lVar31 * 0x188 + 0x70) == uStack0000000000000064;
          goto LAB_040ea914;
        }
        goto LAB_040ec2e4;
      }
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
UnityEngine_UIElements_PanelSettings__set_screenMatchMode:
      lVar30 = lVar41 + lVar31 * 0x188;
      *(ulong *)(lVar30 + 0xa0) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 0xa0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar30 + 0xa0));
      *(float *)(lVar30 + 0xa8) = fVar47 + *(float *)(lVar30 + 0xa8);
      *(ulong *)(lVar30 + 0x78) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 0x78) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar30 + 0x78));
      *(float *)(lVar30 + 0x80) = fVar47 + *(float *)(lVar30 + 0x80);
      *(ulong *)(lVar30 + 200) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 200) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar30 + 200));
      *(float *)(lVar30 + 0xd0) = fVar47 + *(float *)(lVar30 + 0xd0);
      *(ulong *)(lVar30 + 0xf0) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 0xf0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar30 + 0xf0));
      *(float *)(lVar30 + 0xf8) = fVar47 + *(float *)(lVar30 + 0xf8);
    }
    else {
UnityEngine_UIElements_PanelSettings__set_referenceResolution:
      bVar11 = false;
LAB_040ea914:
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
      if (bVar11) goto UnityEngine_UIElements_PanelSettings__set_screenMatchMode;
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(plVar42);
        DAT_0482ee12 = '\x01';
        uVar40 = *(uint *)(lVar41 + 0x18);
      }
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      lVar27 = lVar41 + lVar31 * 0x188;
      *(undefined8 *)(lVar27 + 0xa0) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar27 + 0xa8) = uVar16;
      if (uVar40 <= uVar14) goto LAB_040ec2e4;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      lVar27 = lVar41 + lVar31 * 0x188;
      *(undefined8 *)(lVar27 + 0x78) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar27 + 0x80) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      *(undefined8 *)(lVar27 + 200) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar27 + 0xd0) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      *(undefined8 *)(lVar27 + 0xf0) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar27 + 0xf8) = uVar16;
      *(undefined1 *)(lVar30 + 0x1a0) = 0;
    }
    iVar17 = FUN_0404a834(0);
    if (iVar17 == 1) {
      cVar39 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar39 = '\0';
    }
    if (cVar24 == '\x01') {
      if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_040fc9ec(uVar14,cVar39 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar24 == '\x02') {
      if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_040fd424(uVar14,cVar39 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_040eaaf8:
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar30 + lVar31 * 0x188;
    uVar43 = *(undefined8 *)(lVar30 + 0x124);
    *(undefined8 *)(lVar30 + 0x124) =
         CONCAT44(fVar59 + (float)((ulong)uVar43 >> 0x20),fVar65 + (float)uVar43);
    *(float *)(lVar30 + 300) = fVar47 + *(float *)(lVar30 + 300);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar30 + lVar31 * 0x188;
    *(ulong *)(lVar30 + 0x118) =
         CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 0x118) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar30 + 0x118));
    *(float *)(lVar30 + 0x120) = fVar47 + *(float *)(lVar30 + 0x120);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar30 + lVar31 * 0x188;
    *(ulong *)(lVar30 + 0x130) =
         CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 0x130) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar30 + 0x130));
    *(float *)(lVar30 + 0x138) = fVar47 + *(float *)(lVar30 + 0x138);
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    lVar30 = lVar30 + lVar31 * 0x188;
    *(float *)(lVar30 + 0x13c) = fVar65 + *(float *)(lVar30 + 0x13c);
    *(ulong *)(lVar30 + 0x140) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar30 + 0x140) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar30 + 0x140));
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar40 = *(uint *)(lVar30 + 0x18);
    if (uVar40 <= uVar14) goto LAB_040ec2e4;
    lVar27 = lVar30 + lVar31 * 0x188;
    *(float *)(lVar27 + 0x148) = fVar65 + *(float *)(lVar27 + 0x148);
    *(float *)(lVar27 + 0x164) = fVar65 + *(float *)(lVar27 + 0x164);
    *(float *)(lVar27 + 0x154) = fVar59 + *(float *)(lVar27 + 0x154);
    uVar43 = *(undefined8 *)(lVar27 + 0x14c);
    *(undefined8 *)(lVar27 + 0x14c) =
         CONCAT44(fVar59 + (float)((ulong)uVar43 >> 0x20),fVar59 + (float)uVar43);
    if (uVar2 == uVar29) {
      uVar29 = *in_stack_000001d0 - 1;
      if (uVar14 == uVar29) goto LAB_040eacf0;
    }
    else {
      lVar27 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar27 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_040ec2e4;
      lVar36 = (long)(int)uVar29;
      lVar38 = lVar27 + lVar36 * 0x60;
      fVar47 = fVar59 + *(float *)(lVar38 + 0x58);
      *(ulong *)(lVar38 + 0x50) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar38 + 0x50) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar38 + 0x50));
      *(float *)(lVar38 + 0x58) = fVar47;
      *(float *)(lVar38 + 0x5c) = fVar65 + *(float *)(lVar38 + 0x5c);
      if (uVar40 <= *(uint *)(lVar38 + 0x38)) goto LAB_040ec2e4;
      uVar16 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar38 + 0x38) * 0x188 + 0x124);
      lVar27 = lVar27 + lVar36 * 0x60;
      *(float *)(lVar27 + 0x74) = fVar47;
      *(undefined4 *)(lVar27 + 0x70) = uVar16;
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto thunk_FUN_01f08a3c;
      uVar29 = *(uint *)(lVar30 + lVar36 * 0x60 + 0x44);
      if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_040ec2e4;
      lVar30 = lVar30 + lVar36 * 0x60;
      *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar29 * 0x188 + 0x130);
      *(undefined4 *)(lVar30 + 0x7c) = *(undefined4 *)(lVar30 + 0x50);
      uVar29 = *in_stack_000001d0 - 1;
LAB_040eacf0:
      if (uVar14 == uVar29) {
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar2) goto LAB_040ec2e4;
        lVar27 = lVar30 + lVar34 * 0x60;
        fVar47 = fVar59 + *(float *)(lVar27 + 0x58);
        *(ulong *)(lVar27 + 0x50) =
             CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar27 + 0x50) >> 0x20),
                      fVar59 + (float)*(undefined8 *)(lVar27 + 0x50));
        *(float *)(lVar27 + 0x58) = fVar47;
        *(float *)(lVar27 + 0x5c) = fVar65 + *(float *)(lVar27 + 0x5c);
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar27 + 0x38)) goto LAB_040ec2e4;
        uVar16 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar27 + 0x38) * 0x188 + 0x124);
        lVar30 = lVar30 + lVar34 * 0x60;
        *(float *)(lVar30 + 0x74) = fVar47;
        *(undefined4 *)(lVar30 + 0x70) = uVar16;
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar2) goto LAB_040ec2e4;
        lVar27 = *in_stack_000001e8;
        if (lVar27 == 0) goto thunk_FUN_01f08a3c;
        uVar29 = *(uint *)(lVar30 + lVar34 * 0x60 + 0x44);
        if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar34 * 0x60;
        *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar29 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar30 + 0x7c) = *(undefined4 *)(lVar30 + 0x50);
      }
    }
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar22 = FUN_034fc6b4(uVar44,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar28 == 1) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          bVar13 = FUN_034fc5e8(uVar44,0);
          if (((uVar44 == 0x200b) || (((bVar12 | bVar13 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_040eb71c;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar28 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar41 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001d0 && ((uVar44 == 0x2019 || (uVar44 == 0x27)))))) {
          if (*(uint *)(lVar41 + 0x18) <= uVar28 - 2) goto LAB_040ec2e4;
          uVar4 = *(undefined2 *)(lVar41 + _in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar22 = FUN_034fc6b4(uVar4,0);
          if ((uVar22 & 1) != 0) {
            if (*(uint *)(lVar41 + 0x18) <= uVar28) goto LAB_040ec2e4;
            uVar4 = *(undefined2 *)(lVar41 + _in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar22 = FUN_034fc6b4(uVar4,0);
            if ((uVar22 & 1) != 0) goto LAB_040eaed8;
          }
        }
LAB_040eb71c:
        if (uVar14 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar22 = FUN_034fc6b4(uVar44,0);
          fStack0000000000000170 = (float)uVar14;
          if ((uVar22 & 1) == 0) goto LAB_040eb758;
        }
        else {
LAB_040eb758:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar30 = *plVar20;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        uVar29 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar30 + 0x18);
        if (iVar17 < (int)(uVar29 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_04589410 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_02421b70(plVar20,iVar17 + 1,*(undefined8 *)PTR_DAT_04589408);
          lVar30 = *plVar20;
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
        lVar30 = lVar30 + (long)(int)uVar29 * 0xc;
        *(uint *)(lVar30 + 0x20) = uStack0000000000000168;
        *(float *)(lVar30 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar30 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar2) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar34 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar30 + 0x34) = *(int *)(lVar30 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar14;
      }
      if (uVar14 == *in_stack_000001d0 - 1) {
        lVar30 = *plVar20;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        uVar29 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar30 + 0x18);
        if (iVar17 < (int)(uVar29 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_04589410 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_02421b70(plVar20,iVar17 + 1,*(undefined8 *)PTR_DAT_04589408);
          lVar30 = *plVar20;
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar29) goto LAB_040ec2e4;
        lVar30 = lVar30 + (long)(int)uVar29 * 0xc;
        *(uint *)(lVar30 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar30 + 0x24) = uVar14;
        *(uint *)(lVar30 + 0x28) = uVar28 - uStack0000000000000168;
        lVar30 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar2) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar34 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar30 + 0x34) = *(int *)(lVar30 + 0x34) + 1;
      }
LAB_040eaed8:
      uStack000000000000016c = 1;
    }
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar29 = *(uint *)(lVar30 + 0x18);
    if (uVar29 <= uVar14) goto LAB_040ec2e4;
    if ((*(byte *)(lVar30 + lVar31 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar8) {
LAB_040eaf0c:
        if (uVar28 - 2 < uVar29) {
          uVar16 = *(undefined4 *)(lVar30 + _in_stack_000001a8 + -0x354);
          uVar62 = *(undefined4 *)(lVar30 + _in_stack_000001a8 + -0x318);
          goto LAB_040eb170;
        }
        goto LAB_040ec2e4;
      }
LAB_040eb0c8:
      bVar8 = false;
    }
    else {
      lVar34 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar34 == 0) goto thunk_FUN_01f08a3c;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto LAB_040ec2e4;
      iVar17 = *(int *)(lVar30 + lVar31 * 0x188 + 0x70);
      *(int *)(lVar30 + lVar31 * 0x188 + 0x178) =
           *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = iVar17 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (uVar44 != 0x200b && (bVar12 & 1) == 0) {
        fVar47 = *(float *)(lVar30 + lVar31 * 0x188 + 0x16c);
        if (fVar55 <= fVar47) {
          fVar55 = fVar47;
        }
        if (iVar17 != in_stack_000000c0._4_4_) {
          fStack000000000000015c = fVar54;
        }
        if (lVar33 == 0) goto thunk_FUN_01f08a3c;
        fVar47 = *(float *)(lVar30 + lVar31 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar58)) {
          fStack0000000000000174 = ABS(fVar58);
        }
        FUN_040d1a24(&stack0x000012a0,lVar33,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar67 = (float)FUN_040cee30(&stack0x00001210,0);
        fVar47 = fVar47 + fVar55 * fVar67;
        in_stack_000000c0._4_4_ = iVar17;
        if (fVar47 <= fStack000000000000015c) {
          fStack000000000000015c = fVar47;
        }
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (bVar8 || bVar11)) {
LAB_040eb0bc:
        if (!bVar8) goto LAB_040eb0c8;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar22 = FUN_034fd62c(uVar44,0);
          if ((uVar22 & 1) != 0) goto LAB_040eb0bc;
        }
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar31 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar30 + 0x16c);
        fStack00000000000000d4 = *(float *)(lVar30 + 0x124);
        bVar8 = fVar55 != 0.0;
        uVar50 = *(undefined4 *)(lVar30 + 0x174);
        fVar47 = fStack00000000000000d8;
        if (bVar8) {
          fVar47 = fVar55;
        }
        fVar55 = fVar47;
        uStack00000000000000d0 = 0;
        fVar47 = fVar58;
        if (bVar8) {
          fVar47 = fStack0000000000000174;
        }
        fStack00000000000000cc = fStack000000000000015c;
        fStack0000000000000174 = fVar47;
      }
      if (*in_stack_000001d0 == 1) {
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar31 * 0x188;
        uVar16 = *(undefined4 *)(lVar30 + 0x130);
        uVar62 = *(undefined4 *)(lVar30 + 0x16c);
LAB_040eb170:
        FUN_040f574c(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,uVar16,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar62);
      }
      else {
        if ((uVar14 == uVar5) || ((int)uVar6 <= (int)uVar14)) {
          lVar30 = *in_stack_000001e8;
          if (lVar30 != 0) {
            lVar34 = lVar31;
            uVar29 = uVar14;
            if (uVar44 == 0x200b || (bVar12 & 1) != 0) {
              lVar34 = lVar35;
              uVar29 = uVar6;
            }
            if (uVar29 < *(uint *)(lVar30 + 0x18)) {
              lVar30 = lVar30 + lVar34 * 0x188;
              uVar16 = *(undefined4 *)(lVar30 + 0x130);
              uVar62 = *(undefined4 *)(lVar30 + 0x16c);
              goto LAB_040eb170;
            }
            goto LAB_040ec2e4;
          }
          goto thunk_FUN_01f08a3c;
        }
        if (bVar11) {
          lVar30 = *in_stack_000001e8;
          if (lVar30 != 0) {
            uVar29 = *(uint *)(lVar30 + 0x18);
            goto LAB_040eaf0c;
          }
          goto thunk_FUN_01f08a3c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar14) {
LAB_040eb8d8:
          bVar8 = true;
          goto LAB_040eb1ac;
        }
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar28) goto LAB_040ec2e4;
        uVar22 = FUN_040d18fc(uVar50,*(undefined4 *)(lVar30 + _in_stack_000001a8),0);
        if ((uVar22 & 1) != 0) goto LAB_040eb8d8;
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar31 * 0x188;
        FUN_040f574c(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,
                     *(undefined4 *)(lVar30 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar30 + 0x16c));
      }
      fVar55 = 0.0;
      bVar8 = false;
      fStack000000000000015c = DAT_00c92980;
      fStack0000000000000174 = 0.0;
    }
LAB_040eb1ac:
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
    if (lVar33 == 0) goto thunk_FUN_01f08a3c;
    uVar29 = *(uint *)(lVar30 + lVar31 * 0x188 + 0x19c);
    FUN_040d1a24(&stack0x000012a0,lVar33,0);
    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
    fVar47 = (float)FUN_040cee50(&stack0x00001210,0);
    if ((uVar29 >> 6 & 1) == 0) {
      if (bVar10) {
        lVar30 = *in_stack_000001e8;
        if (lVar30 != 0) {
          if (uVar28 - 2 < *(uint *)(lVar30 + 0x18)) {
            fVar59 = *(float *)(lVar30 + _in_stack_000001a8 + -0x334);
            uVar16 = *(undefined4 *)(lVar30 + _in_stack_000001a8 + -0x354);
            goto LAB_040eb940;
          }
          goto LAB_040ec2e4;
        }
        goto thunk_FUN_01f08a3c;
      }
LAB_040eb334:
      bVar10 = false;
    }
    else {
      lVar30 = *in_stack_000001e8;
      if ((lVar30 == 0) || (lVar34 = *(long *)(unaff_x19 + 0x15b8), lVar34 == 0))
      goto thunk_FUN_01f08a3c;
      if ((*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar30 + 0x18) <= uVar14)) goto LAB_040ec2e4;
      *(int *)(lVar30 + lVar31 * 0x188 + 0x180) =
           *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar30 + lVar31 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (!(bool)(~bVar10 & (bVar11 ^ 1U)))) {
LAB_040eb32c:
        if (!bVar10) goto LAB_040eb334;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar22 = FUN_034fd62c(uVar44,0);
          if ((uVar22 & 1) != 0) goto LAB_040eb32c;
          lVar30 = *in_stack_000001e8;
          if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto LAB_040ec2e4;
        lVar30 = lVar30 + lVar31 * 0x188;
        fStack00000000000000a8 = *(float *)(lVar30 + 0x68);
        fStack00000000000000a0 = *(float *)(lVar30 + 0x150);
        fStack00000000000000e8 = *(float *)(lVar30 + 0x124);
        in_stack_000000f0._4_4_ = *(float *)(lVar30 + 0x16c);
        fStack00000000000000e4 = fVar47 * in_stack_000000f0._4_4_ + fStack00000000000000a0;
        _bStack00000000000000e0 = 0;
      }
      uVar29 = *in_stack_000001d0;
      if (uVar29 == 1) {
LAB_040eb538:
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto thunk_FUN_01f08a3c;
        if (*(uint *)(lVar34 + 0x18) <= uVar14) goto LAB_040ec2e4;
        lVar34 = lVar34 + lVar31 * 0x188;
      }
      else {
        lVar30 = lVar31;
        if (uVar14 == uVar5) {
          lVar34 = *in_stack_000001e8;
          if (lVar34 == 0) goto thunk_FUN_01f08a3c;
          uVar29 = uVar14;
          if ((uVar44 != 0x200b & (bVar12 ^ 1)) == 0) {
            lVar30 = lVar35;
            uVar29 = uVar6;
          }
          if (*(uint *)(lVar34 + 0x18) <= uVar29) goto LAB_040ec2e4;
        }
        else {
          if ((int)uVar29 <= (int)uVar14) {
LAB_040eb620:
            if ((int)uVar14 < (int)uVar29) {
              iVar17 = FUN_04076320(lVar33,0);
              if (*(uint *)(lVar41 + 0x18) <= uVar28) goto LAB_040ec2e4;
              lVar30 = *(long *)(lVar41 + _in_stack_000001a8 + -0x134);
              if (lVar30 == 0) goto thunk_FUN_01f08a3c;
              iVar15 = FUN_04076320(lVar30,0);
              if (iVar17 != iVar15) goto LAB_040eb538;
            }
            if (!bVar11) {
              bVar10 = true;
              goto LAB_040eb97c;
            }
            lVar30 = *in_stack_000001e8;
            if (lVar30 != 0) {
              if (uVar28 - 2 < *(uint *)(lVar30 + 0x18)) {
                fVar59 = *(float *)(lVar30 + _in_stack_000001a8 + -0x334);
                uVar16 = *(undefined4 *)(lVar30 + _in_stack_000001a8 + -0x354);
                goto LAB_040eb940;
              }
              goto LAB_040ec2e4;
            }
            goto thunk_FUN_01f08a3c;
          }
          lVar34 = *in_stack_000001e8;
          if (lVar34 == 0) goto thunk_FUN_01f08a3c;
          if (*(uint *)(lVar34 + 0x18) <= uVar28) goto LAB_040ec2e4;
          if (*(float *)(lVar34 + _in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar67 = *(float *)(lVar34 + _in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)PTR_DAT_045893f0 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar22 = FUN_040fa99c(fVar59 + fVar67,fStack00000000000000a0,0);
            if ((uVar22 & 1) != 0) {
              uVar29 = *in_stack_000001d0;
              goto LAB_040eb620;
            }
            lVar34 = *in_stack_000001e8;
            if (lVar34 == 0) goto thunk_FUN_01f08a3c;
          }
          uVar29 = uVar14;
          if ((int)uVar6 < (int)uVar14) {
            lVar30 = lVar35;
            uVar29 = uVar6;
          }
          if (*(uint *)(lVar34 + 0x18) <= uVar29) goto LAB_040ec2e4;
        }
        lVar34 = lVar34 + lVar30 * 0x188;
      }
      fVar59 = *(float *)(lVar34 + 0x150);
      uVar16 = *(undefined4 *)(lVar34 + 0x130);
LAB_040eb940:
      FUN_040f574c(fStack00000000000000e8,fStack00000000000000e4,_bStack00000000000000e0,uVar16,
                   in_stack_000000f0._4_4_ * fVar47 + fVar59,0,in_stack_000000f0._4_4_,
                   in_stack_000000f0._4_4_);
      bVar10 = false;
    }
LAB_040eb97c:
    lVar30 = *in_stack_000001e8;
    if (lVar30 == 0) goto thunk_FUN_01f08a3c;
    uVar29 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar29 <= uVar14) goto LAB_040ec2e4;
    if ((*(byte *)(lVar30 + lVar31 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar9) {
        FUN_040f65b0(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_040eba6c:
      bVar9 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar30 + lVar31 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (!bVar9) {
        if (((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) ||
           (((int)uVar6 < (int)uVar14 || (bVar11)))) goto LAB_040eba6c;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar22 = FUN_034fd62c(uVar44,0);
          if ((uVar22 & 1) != 0) goto LAB_040eba6c;
        }
        puVar7 = PTR_DAT_045893f0;
        lVar33 = *(long *)PTR_DAT_045893f0;
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar33 = *(long *)puVar7;
        }
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        uVar29 = (uint)*(undefined8 *)(lVar30 + 0x18);
        if (uVar29 <= uVar14) goto LAB_040ec2e4;
        pfVar37 = *(float **)(lVar33 + 0xb8);
        fStack0000000000000128 = *pfVar37;
        in_stack_00000140._4_4_ = pfVar37[1];
        fStack000000000000012c = pfVar37[2];
        fStack0000000000000130 = pfVar37[3];
        uStack0000000000000124 = 0;
      }
      if (uVar29 <= uVar14) goto LAB_040ec2e4;
      lVar30 = lVar30 + lVar31 * 0x188;
      fVar67 = *(float *)(lVar30 + 0x130);
      fVar49 = *(float *)(lVar30 + 0x124);
      fVar59 = *(float *)(lVar30 + 0x148);
      fVar46 = *(float *)(lVar30 + 0x14c);
      fVar48 = *(float *)(lVar30 + 0x154);
      fVar47 = *(float *)(lVar30 + 0x164);
      uVar22 = FUN_040fa868(&stack0x00000210,&stack0x000001f0,0);
      lVar30 = *(long *)PTR_DAT_045893e0;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar30);
        }
        fVar68 = (float)FUN_040fa574(uVar61,0);
        bVar9 = (bVar12 & 1) == 0;
        if (bVar9) {
          fVar59 = fVar49;
        }
        if (bVar9) {
          fVar47 = fVar67;
        }
        if (fVar59 - fVar68 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar59 - fVar68;
        }
        fVar59 = (float)FUN_040fa57c(uVar61,0);
        if (fStack000000000000012c <= fVar47 + fVar59) {
          fStack000000000000012c = fVar47 + fVar59;
        }
        if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar59 = (float)FUN_040fa58c(uVar61,0);
        if (fVar48 - fVar59 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar48 - fVar59;
        }
        fVar59 = (float)FUN_040fa584(uVar61,0);
        if (fStack0000000000000130 <= fVar46 + fVar59) {
          fStack0000000000000130 = fVar46 + fVar59;
        }
      }
      else {
        if (*(int *)(lVar30 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar30);
        }
        fVar68 = (float)FUN_040fa57c(uVar61,0);
        if ((bVar12 & 1) == 0) {
          fVar59 = fVar49;
        }
        if (fVar48 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar48;
        }
        fVar59 = (fVar59 + (fStack000000000000012c - fVar68)) * 0.5;
        if (fStack0000000000000130 <= fVar46) {
          fStack0000000000000130 = fVar46;
        }
        FUN_040f65b0(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar59,
                     fStack0000000000000130,uStack0000000000000124);
        puVar7 = PTR_DAT_045893e0;
        if (*(int *)(*(long *)PTR_DAT_045893e0 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        in_stack_00000140._4_4_ = (float)FUN_040fa58c(uVar57,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        in_stack_00000140._4_4_ = fVar48 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_040fa57c(uVar57,0);
        fVar48 = (float)FUN_040fa584(uVar57,0);
        if ((bVar12 & 1) == 0) {
          fVar47 = fVar67;
        }
        fStack000000000000012c = fVar47 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar59;
        fStack0000000000000130 = fVar46 + fVar48;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar14 == uVar5)) || ((int)uVar6 <= (int)uVar14)) ||
         (bVar11)) {
        FUN_040f65b0(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar14 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    _in_stack_000001a8 = _in_stack_000001a8 + 0x188;
    bVar11 = (int)uVar28 < (int)uVar14;
    uVar29 = uVar2;
    uVar28 = uVar28 + 1;
  } while (bVar11);
  iVar17 = uVar2 + 1;
  plVar20 = (long *)PTR_DAT_04588f98;
LAB_040ec0a0:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar14;
  uVar50 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar17;
  if ((int)uVar14 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar50;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar57 = 1;
    lVar41 = 0x70;
    do {
      lVar30 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar30 == 0) {
thunk_FUN_01f08a3c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(*plVar20 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (*(uint *)(lVar30 + 0x18) <= uVar57) goto LAB_040ec2e4;
      FUN_040de444(lVar30 + lVar41,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar30 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar30 == 0) goto thunk_FUN_01f08a3c;
        if (*(int *)(*plVar20 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar57) {
LAB_040ec2e4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        UnityEngine_UIElements_MouseMoveEvent___ctor(lVar30 + lVar41,1,0);
      }
      uVar57 = uVar57 + 1;
      lVar41 = lVar41 + 0x50;
    } while ((long)uVar57 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_040e4eec:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001638) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


