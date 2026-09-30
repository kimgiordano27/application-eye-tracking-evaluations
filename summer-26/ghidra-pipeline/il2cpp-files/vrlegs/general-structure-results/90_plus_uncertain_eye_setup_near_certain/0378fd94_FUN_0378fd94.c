/*
FUNCTION_NAME: FUN_0378fd94
ENTRY_POINT: 0378fd94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_0378fd94(undefined8 param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  void *pvVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  undefined1 uVar20;
  char cVar21;
  uint uVar22;
  float *pfVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  uint uVar31;
  long in_x12;
  long lVar32;
  long lVar33;
  long unaff_x19;
  char cVar34;
  long unaff_x20;
  long unaff_x21;
  long *plVar35;
  long *plVar36;
  long *unaff_x22;
  long *plVar37;
  byte unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint unaff_w26;
  ulong unaff_x27;
  long *unaff_x28;
  float *unaff_x29;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  ulong uVar43;
  float fVar44;
  undefined8 uVar45;
  ulong uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float unaff_s13;
  float fVar55;
  undefined1 auVar56 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  int *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  uint uStack000000000000005c;
  long in_stack_00000060;
  void *in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  int iStack000000000000008c;
  uint uStack0000000000000090;
  undefined4 uStack0000000000000094;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined1 *in_stack_000000b0;
  uint uStack00000000000000b8;
  uint uStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  long *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  float fStack0000000000000108;
  long in_stack_00000110;
  float fStack0000000000000118;
  undefined4 uStack000000000000011c;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000128;
  float fStack000000000000012c;
  float fStack0000000000000130;
  undefined4 uStack0000000000000134;
  int iStack0000000000000138;
  undefined4 uStack000000000000013c;
  undefined8 in_stack_00000140;
  float fStack0000000000000148;
  undefined4 uStack000000000000014c;
  float fStack0000000000000150;
  float fStack0000000000000158;
  float fStack000000000000015c;
  uint uStack0000000000000160;
  undefined4 uStack0000000000000164;
  float fStack0000000000000168;
  float fStack000000000000016c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  float fStack000000000000017c;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  undefined4 uStack000000000000018c;
  float fStack0000000000000190;
  undefined4 uStack0000000000000194;
  undefined8 in_stack_00000198;
  float fStack00000000000001a0;
  undefined4 uStack00000000000001a4;
  long *in_stack_000001a8;
  float fStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  float *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long in_stack_000001e0;
  long *in_stack_000001e8;
  uint in_stack_000015dc;
  uint in_stack_0000160c;
  undefined8 in_stack_00001688;
  char in_stack_00001694;
  float in_stack_00001698;
  uint in_stack_0000169c;
  undefined8 in_stack_000016a0;
  long in_stack_00001a38;
  
code_r0x0378fd94:
  lVar24 = *unaff_x22;
  if (lVar24 != 0) {
    fVar48 = *unaff_x29;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar24 + (long)(int)fVar48 * unaff_x27 + 0x164) =
         *(undefined4 *)(unaff_x19 + 0x2f4);
    if (in_stack_0000169c == 0xd) {
      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
    }
    if ((*(int *)(unaff_x21 + 0x74) == 5) &&
       (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
        (1 < in_stack_0000169c - 0x2028)))) {
      lVar24 = *in_stack_00000050;
      if (lVar24 == 0) goto LAB_03793c9c;
      uVar12 = *(uint *)(unaff_x19 + 0x350);
      if (*(int *)(lVar24 + 0x18) < (int)(uVar12 + 1)) {
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                             ,param_2);
        }
        plVar37 = in_stack_00000050;
        FUN_01ff3814(in_stack_00000050,uVar12 + 1,1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__)
        ;
        lVar24 = *plVar37;
        if (lVar24 == 0) goto LAB_03793c9c;
        uVar12 = *(uint *)(unaff_x19 + 0x350);
        in_x12 = 0x60;
        unaff_w25 = unaff_w26;
      }
      if (*(uint *)(lVar24 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar27 = lVar24 + (long)(int)uVar12 * 0x14;
      *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
      fVar48 = *(float *)(unaff_x19 + 0x378);
      if (*(float *)(lVar27 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
        fVar48 = *(float *)(lVar27 + 0x30);
      }
      *(float *)(lVar27 + 0x30) = fVar48;
      if (*(char *)(unaff_x19 + 0x37c) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x37c) = 0;
        *(undefined4 *)(lVar24 + (long)(int)uVar12 * 0x14 + 0x20) =
             *(undefined4 *)(unaff_x19 + 0x324);
      }
      fVar48 = *unaff_x29;
      *(float *)(lVar24 + (long)(int)uVar12 * 0x14 + 0x24) = fVar48;
    }
    plVar37 = in_stack_000001e8;
    iVar14 = (int)unaff_x27;
    if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
       ((in_stack_0000169c - 0x2028 < 2 ||
        (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (fVar48 == fStack00000000000000dc)))))) {
      if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
        fVar48 = *(float *)(unaff_x19 + 0x338);
        fVar51 = *(float *)(unaff_x19 + 0x15ac);
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          in_x12 = 0x60;
        }
        fVar48 = fVar48 - fVar51;
        if (((fStack00000000000000a8 < ABS(fVar48)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
           (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
          uVar42 = *(undefined4 *)(unaff_x19 + 0x328);
          uVar39 = *(undefined4 *)(unaff_x19 + 0x324);
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a5574(fVar48,uVar42,uVar39,in_stack_000001c0,0);
          plVar37 = in_stack_000001e8;
          uVar16 = in_stack_00000078;
          *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar48;
          *(float *)(unaff_x19 + 0x2e0) = fVar48 + *(float *)(unaff_x19 + 0x2e0);
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          in_x12 = 0x60;
          if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
            FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
            pvVar7 = in_stack_00000068;
            memcpy(in_stack_00000068,&stack0x000016a0,0x398);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020,0);
            *(float *)(unaff_x19 + 0xaf0) = fVar48 + *(float *)(unaff_x19 + 0xaf0);
            *(float *)(unaff_x19 + 0xb24) = fVar48 + *(float *)(unaff_x19 + 0xb24);
            memcpy(&stack0x00000230,pvVar7,0x398);
            FUN_020ab0d8(uVar16,&stack0x00000230,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
            in_x12 = 0x60;
            unaff_w25 = unaff_w26;
          }
        }
      }
      lVar24 = in_stack_00000110;
      fVar51 = *(float *)(unaff_x19 + 0x2e0);
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      fVar49 = *(float *)(unaff_x19 + 0x33c) - fVar51;
      fVar48 = *(float *)(unaff_x19 + 0x378);
      if (fVar49 <= *(float *)(unaff_x19 + 0x378)) {
        fVar48 = fVar49;
      }
      *(float *)(unaff_x19 + 0x378) = fVar48;
      fVar44 = *(float *)(unaff_x19 + 0x338);
      if (in_stack_00001694 == '\0') {
        in_stack_00001698 = fVar48;
      }
      if ((*(char *)(unaff_x21 + 0xe8) != '\0') &&
         ((*(int *)(unaff_x21 + 0xd8) <= (int)*unaff_x29 ||
          (*(int *)(unaff_x21 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
        in_stack_00001694 = '\x01';
      }
      lVar27 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar12 = *(uint *)(unaff_x19 + 0x340);
      if (*(uint *)(lVar27 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      iVar13 = *(int *)(unaff_x19 + 0x328);
      lVar32 = lVar27 + (int)uVar12 * in_x12;
      *(int *)(lVar32 + 0x38) = iVar13;
      uVar31 = *(uint *)(unaff_x19 + 0x328);
      if (iVar13 <= (int)*(uint *)(unaff_x19 + 0x330)) {
        uVar31 = *(uint *)(unaff_x19 + 0x330);
      }
      *(uint *)(unaff_x19 + 0x330) = uVar31;
      *(uint *)(lVar32 + 0x3c) = uVar31;
      iVar1 = *(int *)(unaff_x19 + 0x324);
      *(int *)(unaff_x19 + 0x32c) = iVar1;
      *(int *)(lVar32 + 0x40) = iVar1;
      iVar15 = *(int *)(unaff_x19 + 0x330);
      if ((int)uVar31 <= *(int *)(unaff_x19 + 0x334)) {
        iVar15 = *(int *)(unaff_x19 + 0x334);
      }
      *(int *)(unaff_x19 + 0x334) = iVar15;
      *(int *)(lVar32 + 0x44) = iVar15;
      *(int *)(lVar32 + 0x24) = (iVar1 - iVar13) + 1;
      *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
      *(undefined4 *)(lVar32 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
      lVar32 = *plVar37;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= uVar31) goto thunk_FUN_01ab6c44;
      uVar42 = *(undefined4 *)(lVar32 + (long)(int)uVar31 * (long)iVar14 + 0x124);
      lVar27 = lVar27 + (long)(int)uVar12 * 0x60;
      *(float *)(lVar27 + 0x74) = fVar49;
      *(undefined4 *)(lVar27 + 0x70) = uVar42;
      lVar27 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar27 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar32 = *plVar37;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
      uVar42 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130)
      ;
      fVar44 = fVar44 - fVar51;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      *(float *)(lVar27 + 0x7c) = fVar44;
      *(undefined4 *)(lVar27 + 0x78) = uVar42;
      lVar27 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar27 == 0) goto LAB_03793c9c;
      uVar12 = *(uint *)(unaff_x19 + 0x340);
      if (*(uint *)(lVar27 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar32 = lVar27 + (long)(int)uVar12 * 0x60;
      *(float *)(lVar32 + 0x48) = *(float *)(lVar32 + 0x78) - unaff_s13 * fStack00000000000001a0;
      *(float *)(lVar32 + 0x60) = fStack0000000000000174;
      if (*(int *)(lVar32 + 0x24) == 1) {
        *(undefined4 *)(lVar27 + (long)(int)uVar12 * 0x60 + 0x6c) =
             *(undefined4 *)(unaff_x19 + 0x158);
      }
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar48 = (float)FUN_03779d0c(*in_stack_000001c8,0);
      lVar27 = in_stack_000001c0;
      lVar32 = *plVar37;
      if (lVar32 == 0) goto LAB_03793c9c;
      lVar28 = (long)(int)*(uint *)(unaff_x19 + 0x334);
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
      lVar25 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar25 == 0) goto LAB_03793c9c;
      uVar12 = *(uint *)(unaff_x19 + 0x340);
      if (((*(char *)(lVar32 + lVar28 * unaff_x27 + 0x1a0) == '\0') &&
          (lVar28 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
          *(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
         (uVar31 = (uint)*(undefined8 *)(lVar25 + 0x18), uVar31 <= uVar12)) goto thunk_FUN_01ab6c44;
      fVar51 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
               (*(float *)(unaff_x19 + 0x2ec) +
               fStack0000000000000158 * (fStack0000000000000148 + fStack0000000000000188 + fVar48));
      fVar48 = -fVar51;
      if (*(char *)(unaff_x21 + 0xb6) != '\0') {
        fVar48 = fVar51;
      }
      *(float *)(lVar25 + (long)(int)uVar12 * 0x60 + 0x5c) =
           *(float *)(lVar32 + lVar28 * unaff_x27 + 0x164) + fVar48;
      if (uVar31 <= uVar12) goto thunk_FUN_01ab6c44;
      lVar25 = lVar25 + (long)(int)uVar12 * 0x60;
      *(float *)(lVar25 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
      *(float *)(lVar25 + 0x58) = fVar49;
      *(float *)(lVar25 + 0x4c) = in_stack_000000a0._4_4_ + (fVar44 - fVar49);
      *(float *)(lVar25 + 0x50) = fVar44;
      if ((int)in_stack_0000169c < 0x2d) {
        if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
          FUN_03796df8();
          plVar37 = in_stack_000001c8;
          fVar48 = *(float *)(unaff_x19 + 0x324);
          iVar13 = *(int *)(unaff_x19 + 0x340) + 1;
          *(int *)(unaff_x19 + 0x340) = iVar13;
          *(uint *)(unaff_x19 + 0x328) = (int)fVar48 + 1;
          unaff_x29[8] = 0.0;
          unaff_x29[9] = 0.0;
          if (*(long *)(lVar27 + 0x48) != 0) {
            if (*(int *)(*(long *)(lVar27 + 0x48) + 0x18) <= iVar13) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_037a56f4(iVar13,in_stack_000001c0,0);
              fVar48 = *unaff_x29;
            }
            unaff_x22 = in_stack_000001e8;
            lVar27 = *in_stack_000001e8;
            if (lVar27 != 0) {
              if ((uint)fVar48 < (uint)*(float *)(lVar27 + 0x18)) {
                fVar48 = *(float *)(lVar27 + (long)(int)fVar48 * (long)iVar14 + 0x158);
                if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                  if ((in_stack_0000169c == 0x2029) || (fVar51 = 0.0, in_stack_0000169c == 10)) {
                    fVar51 = *(float *)(unaff_x21 + 0xcc);
                  }
                  uVar20 = 0;
                  fVar51 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                           fStack0000000000000088 *
                           (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                           fStack0000000000000158 * (*(float *)(unaff_x21 + 200) + fVar51) +
                           *(float *)(unaff_x19 + 0x2e0);
                }
                else {
                  if ((in_stack_0000169c == 0x2029) || (fVar51 = 0.0, in_stack_0000169c == 10)) {
                    fVar51 = *(float *)(unaff_x21 + 0xcc);
                  }
                  uVar20 = 1;
                  fVar51 = *(float *)(unaff_x19 + 0x2e0) +
                           *(float *)(unaff_x19 + 0x2e4) +
                           fStack0000000000000158 * (*(float *)(unaff_x21 + 200) + fVar51);
                }
                *(float *)(unaff_x19 + 0x2e0) = fVar51;
                *(float *)(unaff_x19 + 0x15ac) = fVar48;
                *(undefined1 *)(unaff_x19 + 0x2e8) = uVar20;
                *(ulong *)(unaff_x19 + 0x338) =
                     CONCAT44(uStack0000000000000094,uStack0000000000000090);
                *(float *)(unaff_x19 + 0x2f4) =
                     *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
                FUN_03796df8();
                FUN_03796df8();
                fStack00000000000000d8 = 1.4013e-45;
                *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                goto LAB_0379053c;
              }
              goto thunk_FUN_01ab6c44;
            }
          }
          goto LAB_03793c9c;
        }
        if (in_stack_0000169c == 3) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03793c9c;
          in_stack_0000160c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        }
      }
      else if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d)) goto LAB_03790360;
    }
    else {
      lVar32 = *in_stack_000001e8;
      lVar24 = in_stack_00000110;
      if (lVar32 == 0) goto LAB_03793c9c;
    }
    fVar48 = *unaff_x29;
    if ((uint)*(float *)(lVar32 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    if (*(char *)(lVar32 + (long)(int)fVar48 * unaff_x27 + 0x1a0) != '\0') {
      lVar32 = lVar32 + (long)(int)fVar48 * unaff_x27;
      uVar43 = *(ulong *)(unaff_x19 + 0x360);
      uVar46 = *(ulong *)(lVar32 + 0x124);
      *(ulong *)(unaff_x19 + 0x360) =
           uVar43 ^ (uVar43 ^ uVar46) &
                    ~CONCAT44(-(uint)((float)(uVar43 >> 0x20) < (float)(uVar46 >> 0x20)),
                              -(uint)((float)uVar43 < (float)uVar46));
      uVar43 = *(ulong *)(unaff_x19 + 0x368);
      uVar46 = *(ulong *)(lVar32 + 0x130);
      *(ulong *)(unaff_x19 + 0x368) =
           uVar43 ^ (uVar43 ^ uVar46) &
                    ~CONCAT44(-(uint)((float)(uVar46 >> 0x20) < (float)(uVar43 >> 0x20)),
                              -(uint)((float)uVar46 < (float)uVar43));
    }
    if ((iStack000000000000008c != 0) ||
       ((unaff_x22 = in_stack_000001e8, plVar37 = in_stack_000001c8, *(uint *)(unaff_x21 + 0x74) < 7
        && ((1 << (ulong)(*(uint *)(unaff_x21 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
      if ((unaff_w25 == 0) &&
         (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) &&
          (in_stack_0000169c != 0xad)))) {
        if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_037a5f20(in_stack_0000169c,0);
          lVar27 = in_stack_00000060;
          if ((uVar43 & 1) == 0) {
LAB_037906cc:
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar43 = FUN_037a5f90(in_stack_0000169c,0);
            if ((uVar43 & 1) == 0) goto LAB_037907cc;
            lVar27 = in_stack_00000060;
            if (in_stack_00000060 == 0) goto LAB_03793c9c;
          }
          else {
            if ((in_stack_00000060 == 0) ||
               (lVar32 = FUN_037a8a5c(in_stack_00000060,0), lVar32 == 0)) goto LAB_03793c9c;
            if (*(char *)(lVar32 + 0x28) != '\0') goto LAB_037906cc;
          }
          lVar27 = FUN_037a8a5c(lVar27,0);
          if ((lVar27 == 0) || (lVar27 = FUN_037aad04(lVar27,0), lVar27 == 0)) goto LAB_03793c9c;
          uVar42 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
          in_stack_000016a0 = CONCAT44(uVar42,in_stack_0000169c);
          uVar43 = FUN_021e4dc4(lVar27,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
          if ((int)*unaff_x29 < (int)fStack00000000000000dc) {
            lVar27 = FUN_037a8a5c(in_stack_00000060,0);
            if (lVar27 == 0) goto LAB_03793c9c;
            lVar27 = FUN_037aaf28(lVar27,0);
            lVar32 = *in_stack_000001e8;
            if (lVar32 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar32 + 0x18) <= (int)*unaff_x29 + 1U) goto thunk_FUN_01ab6c44;
            if (lVar27 == 0) goto LAB_03793c9c;
            in_stack_000016a0 =
                 CONCAT44(uVar42,(uint)*(ushort *)
                                        (lVar32 + (long)(int)((int)*unaff_x29 + 1U) * (long)iVar14 +
                                        0x20));
            uVar46 = FUN_021e4dc4(lVar27,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
            if ((uVar43 & 1) != 0) goto LAB_037909e8;
            if ((uVar46 & 1) == 0) goto LAB_03790cd4;
            if (((uint)fStack00000000000000d8 & 1) == 0) goto LAB_03790854;
          }
          else {
            if ((uVar43 & 1) == 0) {
LAB_03790cd4:
              FUN_03796df8();
              fStack00000000000000d8 = 0.0;
              unaff_x22 = in_stack_000001e8;
              plVar37 = in_stack_000001c8;
              goto LAB_03790864;
            }
LAB_037909e8:
            unaff_x22 = in_stack_000001e8;
            plVar37 = in_stack_000001c8;
            if ((float)unaff_x20 != in_stack_000001b8._4_4_ ||
                (((uint)fStack00000000000000d8 ^ 0xffffffff) & 1) != 0) goto LAB_03790864;
          }
          unaff_x22 = in_stack_000001e8;
          plVar37 = in_stack_000001c8;
          if (unaff_w25 != 0) {
            FUN_03796df8();
          }
        }
        else {
LAB_037907cc:
          unaff_x22 = in_stack_000001e8;
          plVar37 = in_stack_000001c8;
          if (((uint)fStack00000000000000d8 & 1) == 0) {
LAB_03790854:
            fStack00000000000000d8 = 0.0;
            unaff_x22 = in_stack_000001e8;
            plVar37 = in_stack_000001c8;
            goto LAB_03790864;
          }
          if ((unaff_w25 != 0 && in_stack_0000169c != 0xa0) ||
             ((_uStack00000000000000b8 & 1) == 0 && in_stack_0000169c == 0xad)) {
            FUN_03796df8();
          }
        }
        FUN_03796df8();
        fStack00000000000000d8 = 1.4013e-45;
      }
      else {
        if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_037907cc;
        if (((in_stack_0000169c - 0x2007 < 0x29) &&
            ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
           ((in_stack_0000169c == 0xa0 || (in_stack_0000169c == 0x2060)))) goto LAB_03790684;
        FUN_03796df8();
        fStack00000000000000d8 = 0.0;
        *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
        unaff_x22 = in_stack_000001e8;
        plVar37 = in_stack_000001c8;
      }
    }
LAB_03790864:
    FUN_03796df8();
    *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
    uVar16 = in_stack_00001688;
LAB_0378d260:
    lVar27 = in_stack_000001c0;
    in_stack_0000160c = in_stack_0000160c + 1;
    lVar32 = *(long *)(unaff_x19 + 0x20);
    if (lVar32 == 0) goto LAB_03793c9c;
    if ((int)*(uint *)(lVar32 + 0x18) <= (int)in_stack_0000160c) {
LAB_03790fec:
      pfVar30 = (float *)CONCAT44(uStack00000000000000d4,fStack00000000000000d0);
      if ((((*(char *)(unaff_x21 + 0xa8) != '\0') &&
           (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
          (fVar48 = *pfVar30, fVar48 < *(float *)(unaff_x21 + 0xb0))) &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar51 = *(float *)(unaff_x21 + 0x108);
        if (*(float *)(unaff_x19 + 0x1594) < fVar51 / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x1594) = 0;
        }
        fVar49 = (*(float *)(unaff_x19 + 0x1598) - fVar48) * 0.5;
        if (fVar49 <= DAT_00d38b84) {
          fVar49 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x159c) = fVar48;
        fVar49 = (fVar48 + fVar49) * 20.0 + 0.5;
        fVar48 = DAT_00d38e60;
        if (fVar49 != INFINITY) {
          fVar48 = (float)(int)fVar49 / 20.0;
        }
        if (fVar51 <= fVar48) {
          fVar48 = fVar51;
        }
        goto LAB_037910ac;
      }
      unaff_x24[0x30] = '\x01';
      if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
        uVar16 = FUN_0276793c(in_stack_00000070,0);
        uVar17 = FUN_0277fa90(pfVar30,0);
        uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar16,
                              *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar17,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x28);
        }
        FUN_0367a6ec(uVar16,0);
        unaff_x22 = in_stack_000001e8;
      }
      plVar36 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
      plVar37 = (long *)PTR_DAT_03cbded8;
      if ((*unaff_x29 == 0.0) || ((*unaff_x29 == 1.4013e-45 && (in_stack_0000169c == 3)))) {
        FUN_0379e288(1,lVar27,0);
        goto LAB_0378c81c;
      }
      lVar24 = *(long *)(lVar27 + 0x58);
      if (lVar24 == 0) goto LAB_03793c9c;
      uVar12 = *(uint *)(unaff_x19 + 0x78);
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0)
          == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar24 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      FUN_03785b74(lVar24 + (long)(int)uVar12 * 0x50 + 0x20,0,0);
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(PTR_DAT_03cbded8);
        DAT_0411f172 = '\x01';
      }
      iVar14 = *(int *)(in_stack_000001e0 + 0x70);
      fStack0000000000000158 = **(float **)(*plVar37 + 0xb8);
      _fStack0000000000000148 = *(ulong *)(*(float **)(*plVar37 + 0xb8) + 1);
      lVar24 = *(long *)(unaff_x19 + 0x50);
      if (iVar14 < 0x421) {
        if (iVar14 < 0x205) {
          if (iVar14 < 0x109) {
            _fStack0000000000000118 = _fStack0000000000000148;
            fStack0000000000000120 = fStack0000000000000158;
            if ((iVar14 - 0x101U < 8) && ((1 << (ulong)(iVar14 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
              if (lVar24 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar24 + 0x18) < 2) goto thunk_FUN_01ab6c44;
              uVar16 = *(undefined8 *)(lVar24 + 0x30);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar32 = *in_stack_00000050;
                if (lVar32 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar32 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                fVar48 = *(float *)(lVar32 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
              }
              else {
                fVar48 = *(float *)(unaff_x19 + 0x374);
              }
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar24 + 0x2c);
              fStack0000000000000038 = (0.0 - fVar48) - fStack000000000000003c;
              goto LAB_037917ec;
            }
          }
          else if (iVar14 < 0x121) {
            if ((iVar14 == 0x110) ||
               (_fStack0000000000000118 = _fStack0000000000000148,
               fStack0000000000000120 = fStack0000000000000158, iVar14 == 0x120)) goto LAB_0379144c;
          }
          else {
            _fStack0000000000000118 = _fStack0000000000000148;
            fStack0000000000000120 = fStack0000000000000158;
            if ((iVar14 - 0x201U < 4) && (iVar14 - 0x201U != 2)) goto LAB_037916dc;
          }
        }
        else {
          if (iVar14 < 0x403) {
            if (iVar14 < 0x211) {
              if ((iVar14 == 0x208) ||
                 (_fStack0000000000000118 = _fStack0000000000000148,
                 fStack0000000000000120 = fStack0000000000000158, iVar14 == 0x210))
              goto LAB_037916dc;
              goto LAB_037917fc;
            }
            if (iVar14 != 0x220) {
              _fStack0000000000000118 = _fStack0000000000000148;
              fStack0000000000000120 = fStack0000000000000158;
              if (iVar14 - 0x401U < 2) goto LAB_03791588;
              goto LAB_037917fc;
            }
LAB_037916dc:
            if (lVar24 == 0) goto LAB_03793c9c;
            if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
            goto thunk_FUN_01ab6c44;
            fVar48 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar24 = *in_stack_00000050;
              if (lVar24 == 0) goto LAB_03793c9c;
              if (uStack000000000000005c < *(uint *)(lVar24 + 0x18)) {
                lVar24 = lVar24 + (long)(int)uStack000000000000005c * 0x14;
                fStack0000000000000120 = fStack0000000000000058 + 0.0 + fVar48;
                fStack0000000000000038 =
                     ((fStack000000000000003c + *(float *)(lVar24 + 0x28) +
                      *(float *)(lVar24 + 0x30)) - fStack0000000000000038) * -0.5 + 0.0;
                goto LAB_037917ec;
              }
              goto thunk_FUN_01ab6c44;
            }
            fStack0000000000000120 = fStack0000000000000058 + 0.0 + fVar48;
            fStack0000000000000038 =
                 ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) + in_stack_00001698) -
                 fStack0000000000000038) * -0.5 + 0.0;
          }
          else {
            if (iVar14 < 0x409) {
              if (iVar14 != 0x404) {
                bVar9 = iVar14 == 0x408;
                goto LAB_03791574;
              }
            }
            else if (iVar14 != 0x410) {
              bVar9 = iVar14 == 0x420;
LAB_03791574:
              _fStack0000000000000118 = _fStack0000000000000148;
              fStack0000000000000120 = fStack0000000000000158;
              if (!bVar9) goto LAB_037917fc;
            }
LAB_03791588:
            if (lVar24 == 0) goto LAB_03793c9c;
            if (*(int *)(lVar24 + 0x18) == 0) goto thunk_FUN_01ab6c44;
            uVar16 = *(undefined8 *)(lVar24 + 0x24);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar32 = *in_stack_00000050;
              if (lVar32 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar32 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
              in_stack_00001698 =
                   *(float *)(lVar32 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
            }
            fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar24 + 0x20);
            fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
          }
LAB_037917ec:
          _fStack0000000000000118 =
               CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fStack0000000000000038)
          ;
        }
      }
      else if (iVar14 < 0x1005) {
        if (iVar14 < 0x809) {
          _fStack0000000000000118 = _fStack0000000000000148;
          fStack0000000000000120 = fStack0000000000000158;
          if ((iVar14 - 0x801U < 8) && ((1 << (ulong)(iVar14 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
            if (lVar24 == 0) goto LAB_03793c9c;
            if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
              _fStack0000000000000118 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar24 + 0x24) +
                            (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
              fStack0000000000000120 =
                   fStack0000000000000058 + 0.0 +
                   (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
              goto LAB_037917fc;
            }
            goto thunk_FUN_01ab6c44;
          }
        }
        else if (iVar14 < 0x821) {
          if ((iVar14 == 0x810) ||
             (_fStack0000000000000118 = _fStack0000000000000148,
             fStack0000000000000120 = fStack0000000000000158, iVar14 == 0x820)) goto LAB_037913b0;
        }
        else {
          _fStack0000000000000118 = _fStack0000000000000148;
          fStack0000000000000120 = fStack0000000000000158;
          if ((iVar14 - 0x1001U < 4) && (iVar14 - 0x1001U != 2)) goto LAB_03791644;
        }
      }
      else if (iVar14 < 0x2003) {
        if (iVar14 < 0x1011) {
          if ((iVar14 == 0x1008) ||
             (_fStack0000000000000118 = _fStack0000000000000148,
             fStack0000000000000120 = fStack0000000000000158, iVar14 == 0x1010)) goto LAB_03791644;
        }
        else {
          if (iVar14 == 0x1020) {
LAB_03791644:
            if (lVar24 == 0) goto LAB_03793c9c;
            if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
              uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar24 + 0x24) +
                                (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
              fStack0000000000000120 =
                   fStack0000000000000058 + 0.0 +
                   (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
              fStack0000000000000038 =
                   0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                          *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
              goto LAB_037917ec;
            }
            goto thunk_FUN_01ab6c44;
          }
          _fStack0000000000000118 = _fStack0000000000000148;
          fStack0000000000000120 = fStack0000000000000158;
          if (iVar14 - 0x2001U < 2) goto LAB_037914ec;
        }
      }
      else {
        if (iVar14 < 0x2009) {
          if (iVar14 != 0x2004) {
            iVar13 = 0x2008;
            goto LAB_037914d4;
          }
        }
        else if (iVar14 != 0x2010) {
          iVar13 = 0x2020;
LAB_037914d4:
          _fStack0000000000000118 = _fStack0000000000000148;
          fStack0000000000000120 = fStack0000000000000158;
          if (iVar14 != iVar13) goto LAB_037917fc;
        }
LAB_037914ec:
        if (lVar24 == 0) goto LAB_03793c9c;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
        goto thunk_FUN_01ab6c44;
        _fStack0000000000000118 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30)
                      ) * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                       fStack0000000000000038) * 0.5));
        fStack0000000000000120 =
             fStack0000000000000058 + 0.0 +
             (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      }
LAB_037917fc:
      in_stack_00000100 = (undefined8 *)FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      _fStack0000000000000108 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__);
      }
      FUN_037a1df8(0);
      FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
      fVar48 = *unaff_x29;
      if ((int)fVar48 < 1) {
        iVar14 = 0;
        iVar13 = 0;
        goto LAB_03793a5c;
      }
      if ((long *)*unaff_x22 == (long *)0x0) goto LAB_03793c9c;
      fStack0000000000000174 = 0.0;
      fStack00000000000000d8 = 0.0;
      fStack00000000000000a8 = 0.0;
      in_stack_000000f8 = (long *)(lVar27 + 0x38);
      in_stack_000000e8._4_4_ = fStack0000000000000128;
      fStack00000000000000f0 = 0.0;
      in_stack_000000a0._4_4_ = 0.0;
      _uStack00000000000000b8 = (ulong)&stack0x00001670 | 4;
      in_stack_000000b0 = &stack0x000016c0;
      uVar31 = 0;
      fVar44 = 0.0;
      fVar49 = 0.0;
      in_stack_00000098 = (ulong)&stack0x000009f0 | 4;
      fVar51 = 1.4013e-45;
      _fStack0000000000000180 = 0;
      iStack0000000000000138 = 0;
      uStack0000000000000090 = 0;
      _fStack0000000000000168 = 0;
      fStack00000000000000c0 = 0.0;
      fStack0000000000000178 = 0.0;
      in_stack_000001a8 = (long *)0x2fc;
      fStack000000000000012c = fStack0000000000000128;
      fStack0000000000000130 = in_stack_00000140._4_4_;
      fStack00000000000000c8 = in_stack_00000140._4_4_;
      fStack00000000000000cc = fStack0000000000000124;
      fStack00000000000000d0 = fStack0000000000000128;
      fStack00000000000000dc = fStack0000000000000124;
      in_stack_000000e0 = in_stack_00000140._4_4_;
      fStack00000000000000ac = DAT_00d38d70;
      fStack000000000000015c = DAT_00d38d70;
      uVar12 = 0;
      in_stack_000001c8 = (long *)*unaff_x22;
      goto LAB_0379194c;
    }
    if (*(uint *)(lVar32 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
    uVar12 = *(uint *)(lVar32 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
    if (uVar12 == 0) goto LAB_03790fec;
    in_stack_00001688 = uVar16;
    if (5 < (int)in_stack_000001d8._4_4_) {
      uVar16 = FUN_0278d4e8(&stack0x0000169c,0);
      uVar17 = FUN_0276793c(&stack0x0000160c,0);
      uVar16 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar16,
                            *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar17,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x28);
      }
      FUN_0367ae18(uVar16,0);
      in_stack_00001688 = CONCAT44(3,*unaff_x29);
      unaff_x22 = in_stack_000001e8;
    }
    uVar16 = in_stack_00001688;
    in_stack_0000169c = uVar12;
    if (uVar12 == 0x1a) goto LAB_0378d260;
    if ((uVar12 == 0x3c) && (*(char *)(unaff_x21 + 0xb5) != '\0')) {
      unaff_x24[0] = '\x01';
      unaff_x24[1] = '\x01';
      uVar43 = FUN_037974c0();
      if (((uVar43 & 1) != 0) && (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01'))
      goto LAB_0378d260;
    }
    else {
      lVar24 = *unaff_x22;
      if (lVar24 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
      lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
      *unaff_x24 = *(char *)(lVar24 + 0x28);
      *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar24 + 0x60);
      *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar24 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar37);
    }
    lVar24 = *unaff_x22;
    if (lVar24 == 0) goto LAB_03793c9c;
    fVar48 = *(float *)(unaff_x19 + 0x324);
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar27 = (long)(int)fVar48;
    uVar42 = *(undefined4 *)(unaff_x19 + 0x78);
    cVar21 = *(char *)(lVar24 + lVar27 * unaff_x27 + 100);
    unaff_x24[1] = '\0';
    if ((float)in_stack_00001688 == fVar48) {
      in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
      unaff_w23 = 1;
      *unaff_x24 = '\x01';
      if (in_stack_0000169c == 0x2026) {
        *(undefined8 *)(lVar24 + lVar27 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        plVar37 = in_stack_000001e8;
        lVar24 = *in_stack_000001e8;
        if (lVar24 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
        *(undefined1 *)(lVar24 + 0x28) = 1;
        *(undefined8 *)(lVar24 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = *plVar37;
        if (lVar24 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
        *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
             *(undefined8 *)(unaff_x19 + 0x1a10);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = *plVar37;
        if (lVar24 == 0) goto LAB_03793c9c;
        fVar48 = *unaff_x29;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        unaff_w23 = 1;
        *(undefined4 *)(lVar24 + (long)(int)fVar48 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x1a18);
        *(undefined1 *)
         (*(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                   0xb8) + 8) = 1;
        in_stack_00001688 = CONCAT44(3,(int)fVar48 + 1);
      }
      else if (in_stack_0000169c == 3) {
        if ((*in_stack_000001c8 == 0) || (lVar32 = FUN_03779b3c(*in_stack_000001c8,0), lVar32 == 0))
        goto LAB_03793c9c;
        FUN_0219b634(lVar32,&stack0x00000978,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                    );
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        *(undefined8 *)(lVar24 + lVar27 * unaff_x27 + 0x30) = in_stack_000016a0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        unaff_w23 = 1;
        *(undefined1 *)
         (*(long *)(*(long *)
                     Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                   0xb8) + 8) = 1;
        fVar48 = *unaff_x29;
      }
    }
    else {
      unaff_w23 = 0;
    }
    unaff_x21 = in_stack_000001e0;
    plVar37 = in_stack_000001c8;
    uVar16 = in_stack_00001688;
    if (((int)fVar48 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
      lVar24 = *in_stack_000001e8;
      if (lVar24 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      lVar24 = lVar24 + (long)(int)fVar48 * (long)iVar14;
      *(undefined1 *)(lVar24 + 0x1a0) = 0;
      *(undefined2 *)(lVar24 + 0x20) = 0x200b;
      *(undefined4 *)(lVar24 + 0x6c) = 0;
      *unaff_x29 = (float)((int)fVar48 + 1);
      unaff_x22 = in_stack_000001e8;
      lVar24 = in_stack_00000110;
      goto LAB_0378d260;
    }
    cVar34 = *unaff_x24;
    if (cVar34 == '\x01') {
      uVar12 = *(uint *)(unaff_x19 + 0x124);
      if ((uVar12 >> 4 & 1) == 0) {
        if ((uVar12 >> 3 & 1) == 0) {
          fStack000000000000017c = 1.0;
          if ((uVar12 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar43 = FUN_026b812c(in_stack_0000169c,0);
            if ((uVar43 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar12 = FUN_026b8410(in_stack_0000169c,0);
              in_stack_0000169c = uVar12 & 0xffff;
              fStack000000000000017c = fStack000000000000002c;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_026b8070(in_stack_0000169c,0);
          fStack000000000000017c = 1.0;
          if ((uVar43 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_026b8594(in_stack_0000169c,0);
            goto LAB_0378d3d0;
          }
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar43 = FUN_026b812c(in_stack_0000169c,0);
        fStack000000000000017c = 1.0;
        if ((uVar43 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
          in_stack_0000169c = uVar12 & 0xffff;
        }
      }
      cVar34 = *unaff_x24;
    }
    else {
      fStack000000000000017c = 1.0;
    }
    unaff_x22 = in_stack_000001e8;
    plVar36 = in_stack_000001a8;
    if (cVar34 == '\x01') {
      lVar24 = *in_stack_000001e8;
      if (lVar24 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
      *in_stack_000001a8 = *(long *)(lVar24 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
      lVar24 = in_stack_00000110;
      if (*plVar36 == 0) goto LAB_0378d260;
      lVar24 = *unaff_x22;
      if (lVar24 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
      *plVar37 = *(long *)(lVar24 + (long)(int)*unaff_x29 * unaff_x27 + 0x40);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar37);
      lVar24 = *unaff_x22;
      if (lVar24 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
      *_fStack0000000000000190 = *(long *)(lVar24 + (long)(int)*unaff_x29 * unaff_x27 + 0x58);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar24 = *unaff_x22;
      if (lVar24 == 0) goto LAB_03793c9c;
      fVar51 = *unaff_x29;
      fVar48 = *(float *)(lVar24 + 0x18);
      if ((uint)fVar48 <= (uint)fVar51) goto thunk_FUN_01ab6c44;
      *(undefined4 *)(unaff_x19 + 0x78) =
           *(undefined4 *)(lVar24 + (long)(int)fVar51 * unaff_x27 + 0x60);
      if (unaff_w23 == 0) {
LAB_0378d570:
        if (*plVar37 == 0) goto LAB_03793c9c;
        fVar48 = *(float *)(unaff_x19 + 0xf4);
        iVar13 = FUN_03776950(*plVar37 + 0xb0,0);
        lVar24 = *(long *)(unaff_x19 + 0x68);
      }
      else {
        lVar27 = *(long *)(unaff_x19 + 0x20);
        if (lVar27 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar27 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
        if ((*(int *)(lVar27 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10) ||
           (fVar51 == *(float *)(unaff_x19 + 0x328))) goto LAB_0378d570;
        if ((uint)fVar48 <= (int)fVar51 - 1U) goto thunk_FUN_01ab6c44;
        if (*plVar37 == 0) goto LAB_03793c9c;
        fVar48 = *(float *)(lVar24 + (long)(int)((int)fVar51 - 1U) * (long)iVar14 + 0x68);
        iVar13 = FUN_03776950(*plVar37 + 0xb0,0);
        lVar24 = *plVar37;
      }
      if (lVar24 == 0) goto LAB_03793c9c;
      fVar49 = (float)FUN_03776960(lVar24 + 0xb0,0);
      fVar51 = fStack0000000000000150;
      if (*(char *)(unaff_x21 + 0xbd) != '\0') {
        fVar51 = 1.0;
      }
      fVar44 = 0.0;
      uVar42 = 0;
      if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
        if (*plVar37 == 0) goto LAB_03793c9c;
        uVar42 = FUN_03776980(*plVar37 + 0xb0,0);
        if (*plVar37 == 0) goto LAB_03793c9c;
        fVar44 = (float)FUN_037769c0(*plVar37 + 0xb0,0);
      }
      lVar24 = *(long *)(unaff_x19 + 0x1588);
      if (lVar24 == 0) goto LAB_03793c9c;
      _fStack0000000000000180 = CONCAT44(fStack0000000000000184,uVar42);
      fStack0000000000000170 = fVar44;
      if (*(long *)(lVar24 + 0x20) == 0) goto LAB_03793c9c;
      fVar52 = *(float *)(unaff_x19 + 0xf0);
      fVar38 = *(float *)(lVar24 + 0x2c);
      fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      if (*plVar37 == 0) goto LAB_03793c9c;
      fVar40 = (float)FUN_037769b0(*plVar37 + 0xb0,0);
      if (*plVar37 == 0) goto LAB_03793c9c;
      fVar54 = *(float *)(unaff_x19 + 0xf0);
      fVar41 = (float)FUN_03776960(*plVar37 + 0xb0,0);
      lVar24 = *in_stack_000001e8;
      if (lVar24 == 0) goto LAB_03793c9c;
      fVar50 = *(float *)(unaff_x19 + 0x324);
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar50) goto thunk_FUN_01ab6c44;
      lVar27 = lVar24 + (long)(int)fVar50 * unaff_x27;
      fVar51 = ((fStack000000000000017c * fVar48) / (float)iVar13) * fVar49 * fVar51;
      unaff_s13 = fVar51 * fVar52 * fVar38 * fVar44;
      *(undefined1 *)(lVar27 + 0x28) = 1;
      *(float *)(lVar27 + 0x16c) = unaff_s13;
      fVar41 = fVar51 * fVar40 * fVar54 * fVar41;
      _fStack00000000000001a0 = CONCAT44(uStack00000000000001a4,*(undefined4 *)(unaff_x19 + 0xd8));
      plVar36 = in_stack_000001e8;
LAB_0378db90:
      fVar48 = unaff_s13;
      if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
        fVar48 = 0.0;
      }
    }
    else {
      if (cVar34 == '\x02') {
        lVar24 = *in_stack_000001e8;
        if (lVar24 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
        plVar35 = *(long **)(lVar24 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
        plVar36 = (long *)CONCAT44(uStack0000000000000164,uStack0000000000000160);
        if (plVar35 == (long *)0x0) goto LAB_03793c9c;
        bVar11 = *(byte *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__ +
                          0x130);
        if ((*(byte *)(*plVar35 + 0x130) < bVar11) ||
           (*(long *)(*(long *)(*plVar35 + 200) + (ulong)bVar11 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar35);
        }
        plVar18 = (long *)FUN_03783144(plVar35,0);
        if (plVar18 == (long *)0x0) {
          plVar18 = (long *)0x0;
          *plVar36 = 0;
        }
        else {
          lVar24 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
          bVar11 = *(byte *)(lVar24 + 0x130);
          if (*(byte *)(*plVar18 + 0x130) < bVar11) {
            plVar26 = (long *)0x0;
          }
          else {
            plVar26 = plVar18;
            if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar11 * 8 + -8) != lVar24) {
              plVar26 = (long *)0x0;
            }
          }
          *plVar36 = (long)plVar26;
          if (*(byte *)(*plVar18 + 0x130) < bVar11) {
            plVar18 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar11 * 8 + -8) != lVar24) {
            plVar18 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar36,plVar18);
        iVar13 = FUN_0377acf0(plVar35,0);
        *(int *)(unaff_x19 + 0x157c) = iVar13;
        if (in_stack_0000169c == 0x3c) {
          in_stack_0000169c = iVar13 + 0xe000;
        }
        else {
          uVar39 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          *(undefined4 *)(unaff_x19 + 0x1580) = uVar39;
        }
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        fVar48 = *(float *)(unaff_x19 + 0xf4);
        FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        iVar13 = FUN_03776950(&stack0x00001610,0);
        if (*plVar37 == 0) goto LAB_03793c9c;
        FUN_03779650(&stack0x000016a0,*plVar37,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar49 = (float)FUN_03776960(&stack0x00001610,0);
        fVar51 = fStack0000000000000150;
        if (*(char *)(unaff_x21 + 0xbd) != '\0') {
          fVar51 = 1.0;
        }
        if (*(long *)CONCAT44(uStack0000000000000164,uStack0000000000000160) == 0)
        goto LAB_03793c9c;
        fVar51 = (fVar48 / (float)iVar13) * fVar49 * fVar51;
        iVar13 = FUN_03776950(*(long *)CONCAT44(uStack0000000000000164,uStack0000000000000160) +
                              0x48,0);
        fVar48 = *(float *)(unaff_x19 + 0xf4);
        if (iVar13 < 1) {
          if (*plVar37 == 0) goto LAB_03793c9c;
          iVar13 = FUN_03776950(*plVar37 + 0xb0,0);
          if (*plVar37 == 0) goto LAB_03793c9c;
          fVar44 = (float)FUN_03776960(*plVar37 + 0xb0,0);
          fVar49 = fStack0000000000000150;
          if (*(char *)(unaff_x21 + 0xbd) != '\0') {
            fVar49 = 1.0;
          }
          if (*plVar37 == 0) goto LAB_03793c9c;
          fVar52 = (float)FUN_03776980(*plVar37 + 0xb0,0);
          if (plVar35[4] == 0) goto LAB_03793c9c;
          in_stack_000001b8._4_4_ = fVar48;
          FUN_03776e6c(&stack0x000016a0,plVar35[4],0);
          uVar39 = FUN_03776c9c(&stack0x000015c0,0);
          if (plVar35[4] == 0) goto LAB_03793c9c;
          _fStack00000000000001a0 = CONCAT44(uStack00000000000001a4,uVar39);
          _fStack00000000000001b0 =
               CONCAT44(uStack00000000000001b4,*(undefined4 *)((long)plVar35 + 0x2c));
          fVar48 = (float)FUN_03776ea8(plVar35[4],0);
          if (*plVar37 == 0) goto LAB_03793c9c;
          fVar38 = (float)FUN_03776980(*plVar37 + 0xb0,0);
          if (*plVar37 == 0) goto LAB_03793c9c;
          fVar40 = (float)FUN_037769b0(*plVar37 + 0xb0,0);
          if (*plVar37 == 0) goto LAB_03793c9c;
          fVar54 = *(float *)(unaff_x19 + 0xf0);
          fVar41 = (float)FUN_03776960(*plVar37 + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          fVar41 = fVar51 * fVar40 * fVar54 * fVar41;
          fVar49 = (in_stack_000001b8._4_4_ / (float)iVar13) * fVar44 * fVar49;
          unaff_s13 = fVar49 * (fVar52 / fStack00000000000001a0) * fStack00000000000001b0 * fVar48;
          fVar49 = fVar49 / unaff_s13;
          fVar38 = fVar49 * fVar38;
          fVar48 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fVar49 = fVar49 * fVar48;
        }
        else {
          plVar36 = (long *)CONCAT44(uStack0000000000000164,uStack0000000000000160);
          lVar24 = *plVar36;
          if (lVar24 == 0) goto LAB_03793c9c;
          iVar13 = FUN_03776950(lVar24 + 0x48,0);
          lVar24 = *plVar36;
          if (lVar24 == 0) goto LAB_03793c9c;
          fVar49 = (float)FUN_03776960(lVar24 + 0x48,0);
          if (plVar35[4] == 0) goto LAB_03793c9c;
          fVar52 = *(float *)((long)plVar35 + 0x2c);
          fVar44 = fStack0000000000000150;
          if (*(char *)(unaff_x21 + 0xbd) != '\0') {
            fVar44 = 1.0;
          }
          fVar38 = (float)FUN_03776ea8(plVar35[4],0);
          plVar36 = (long *)CONCAT44(uStack0000000000000164,uStack0000000000000160);
          if (*plVar36 == 0) goto LAB_03793c9c;
          uVar39 = FUN_03776980(*plVar36 + 0x48,0);
          _fStack0000000000000180 = CONCAT44(fStack0000000000000184,uVar39);
          if (*plVar36 == 0) goto LAB_03793c9c;
          fVar40 = (float)FUN_037769b0(*plVar36 + 0x48,0);
          if (*plVar36 == 0) goto LAB_03793c9c;
          fVar54 = *(float *)(unaff_x19 + 0xf0);
          fVar41 = (float)FUN_03776960(*plVar36 + 0x48,0);
          if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
          fVar41 = fVar51 * fVar40 * fVar54 * fVar41;
          unaff_s13 = (fVar48 / (float)iVar13) * fVar49 * fVar44 * fVar52 * fVar38;
          fVar49 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
          fVar38 = fStack0000000000000180;
        }
        *in_stack_000001a8 = (long)plVar35;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8,plVar35)
        ;
        plVar36 = in_stack_000001e8;
        unaff_x29 = in_stack_000001d0;
        lVar24 = *in_stack_000001e8;
        if (lVar24 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar24 = lVar24 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(undefined1 *)(lVar24 + 0x28) = 2;
        *(float *)(lVar24 + 0x16c) = unaff_s13;
        *(undefined8 *)(lVar24 + 0x48) =
             *(undefined8 *)CONCAT44(uStack0000000000000164,uStack0000000000000160);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = *plVar36;
        if (lVar24 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
        *(long *)(lVar24 + (long)(int)*unaff_x29 * unaff_x27 + 0x40) = *plVar37;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar24 = *plVar36;
        if (lVar24 == 0) goto LAB_03793c9c;
        fVar50 = *unaff_x29;
        _fStack0000000000000180 = CONCAT44(fStack0000000000000184,fVar38);
        fStack0000000000000170 = fVar49;
        if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar50) goto thunk_FUN_01ab6c44;
        *(undefined4 *)(lVar24 + (long)(int)fVar50 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar42;
        _fStack00000000000001a0 = _fStack00000000000001a0 & 0xffffffff00000000;
        goto LAB_0378db90;
      }
      lVar24 = *in_stack_000001e8;
      fVar41 = 0.0;
      fVar48 = unaff_s13;
      if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
        fVar48 = fVar41;
      }
      if (lVar24 == 0) goto LAB_03793c9c;
      fVar50 = *unaff_x29;
      _fStack0000000000000180 = _fStack0000000000000180 & 0xffffffff00000000;
      fStack0000000000000170 = 0.0;
      plVar36 = in_stack_000001e8;
    }
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar50) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)fVar50 * (long)iVar14;
    *(short *)(lVar24 + 0x20) = (short)in_stack_0000169c;
    *(undefined4 *)(lVar24 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
    *(undefined4 *)(lVar24 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
    lVar24 = *plVar36;
    if (lVar24 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
         *(undefined4 *)(unaff_x19 + 0x1b0);
    lVar24 = *plVar36;
    if (lVar24 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
         *(undefined4 *)(unaff_x19 + 0x1b4);
    lVar24 = *plVar36;
    if (lVar24 == 0) goto LAB_03793c9c;
    uVar16 = in_stack_00000100[1];
    in_stack_000016a0 = *in_stack_00000100;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
    *(undefined4 *)(lVar24 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
    *(undefined8 *)(lVar24 + 400) = uVar16;
    *(undefined8 *)(lVar24 + 0x188) = in_stack_000016a0;
    lVar24 = *plVar36;
    if (lVar24 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
    lVar27 = *(long *)(lVar24 + 0x38);
    *(undefined4 *)(lVar24 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
    if ((lVar27 == 0) &&
       ((*in_stack_000001a8 == 0 || (lVar27 = *(long *)(*in_stack_000001a8 + 0x20), lVar27 == 0))))
    goto LAB_03793c9c;
    FUN_03776e6c(&stack0x000016a0,lVar27,0);
    if (in_stack_0000169c >> 0x10 == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(in_stack_0000169c,0);
      unaff_w26 = uVar12 & 1;
    }
    else {
      unaff_w26 = 0;
    }
    plVar36 = in_stack_000001e8;
    uVar42 = 0;
    _fStack0000000000000188 = CONCAT44(uStack000000000000018c,*(undefined4 *)(unaff_x21 + 0xc0));
    fStack000000000000015c = unaff_s13;
    if (*(char *)(unaff_x21 + 0xb4) != '\0') {
      if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
      fVar51 = *unaff_x29;
      uVar12 = *(uint *)(*in_stack_000001a8 + 0x28);
      if ((int)fVar51 < (int)fStack00000000000000dc) {
        lVar24 = *in_stack_000001e8;
        if (lVar24 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar24 + 0x18) <= (int)fVar51 + 1U) goto thunk_FUN_01ab6c44;
        lVar24 = *(long *)(lVar24 + (long)(int)((int)fVar51 + 1U) * (long)iVar14 + 0x30);
        if ((((lVar24 == 0) || (*plVar37 == 0)) ||
            (lVar27 = *(long *)(*plVar37 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                      uVar12 | *(int *)(lVar24 + 0x28) << 0x10);
        uVar43 = FUN_0219f8b8(lVar27,&stack0x000016a0,&stack0x00001590,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                             );
        if ((uVar43 & 1) != 0) {
          FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
          uVar42 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                             (&stack0x00001570,0);
          uVar43 = FUN_037791f0(&stack0x00001590,0);
          uVar39 = fStack0000000000000188;
          if ((uVar43 & 0x100) != 0) {
            uVar39 = 0;
          }
          _fStack0000000000000188 = CONCAT44(uStack000000000000018c,uVar39);
        }
        fVar51 = *unaff_x29;
      }
      if (0 < (int)fVar51) {
        lVar24 = *plVar36;
        if (lVar24 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar24 + 0x18) <= (int)fVar51 - 1U) goto thunk_FUN_01ab6c44;
        lVar24 = *(long *)(lVar24 + (ulong)((int)fVar51 - 1U) * (unaff_x27 & 0xffffffff) + 0x30);
        if (((lVar24 == 0) || (*plVar37 == 0)) ||
           ((lVar27 = *(long *)(*plVar37 + 0x170), lVar27 == 0 ||
            (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)))) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                      *(uint *)(lVar24 + 0x28) | uVar12 << 0x10);
        uVar43 = FUN_0219f8b8(lVar27,&stack0x000016a0,&stack0x00001590,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                             );
        if ((uVar43 & 1) != 0) {
          FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
          UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
          FUN_03778e8c(uVar42,0);
          uVar43 = FUN_037791f0(&stack0x00001590,0);
          uVar42 = fStack0000000000000188;
          if ((uVar43 & 0x100) != 0) {
            uVar42 = 0;
          }
          _fStack0000000000000188 = CONCAT44(uStack000000000000018c,uVar42);
        }
      }
    }
    lVar24 = *plVar36;
    if (lVar24 == 0) goto LAB_03793c9c;
    fVar51 = *unaff_x29;
    uVar42 = FUN_03778e7c(&stack0x000015e0,0);
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar51) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar24 + (long)(int)fVar51 * unaff_x27 + 0x160) = uVar42;
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                ) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar43 = FUN_037a5c04(in_stack_0000169c,0);
    lVar24 = in_stack_000001e0;
    fVar51 = *unaff_x29;
    if ((uVar43 & 1) == 0) {
      if ((uVar43 & 1) == 0 && 0 < (int)fVar51) {
        uVar12 = *(uint *)(unaff_x19 + 0x19c4);
        if ((uVar12 == 0x80000000) || (uVar12 != (int)fVar51 - 1U)) {
          do {
            lVar24 = in_stack_000001e0;
            fVar49 = (float)((int)fVar51 - 1);
            uVar42 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
            if (((int)fVar51 < 1) || (fVar49 == *(float *)(unaff_x19 + 0x19c4))) {
              uVar12 = *(uint *)(unaff_x19 + 0x19c4);
              if (uVar12 == 0x80000000) goto LAB_0378dfc4;
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar27 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
              lVar27 = *(long *)(lVar27 + (long)(int)uVar12 * unaff_x27 + 0x30);
              if ((lVar27 == 0) || (lVar27 = FUN_03787a68(lVar27,0), lVar27 == 0))
              goto LAB_03793c9c;
              uVar12 = FUN_03776e5c(lVar27,0);
              if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
              iVar13 = FUN_0377acf0(*in_stack_000001a8,0);
              if (((*plVar37 == 0) || (lVar27 = FUN_03779cb4(*plVar37,0), lVar27 == 0)) ||
                 (*(long *)(lVar27 + 0x48) == 0)) goto LAB_03793c9c;
              in_stack_000016a0 = CONCAT44(uVar42,uVar12 | iVar13 << 0x10);
              uVar46 = FUN_0219f8b8(*(long *)(lVar27 + 0x48),&stack0x000016a0,&stack0x00001518,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                   );
              unaff_x29 = in_stack_000001d0;
              if ((uVar46 & 1) == 0) goto LAB_0378dfc4;
              lVar27 = *in_stack_000001e8;
              if (lVar27 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
              goto thunk_FUN_01ab6c44;
              fVar51 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                                 0x148);
              fVar52 = *(float *)(unaff_x19 + 0x2f4);
              FUN_037793b0(&stack0x00001518,0);
              fVar49 = (float)FUN_03779388(&stack0x00001550,0);
              FUN_037793c0(&stack0x00001518,0);
              fVar44 = (float)FUN_03779398(&stack0x00001548,0);
              FUN_03778e64(((fVar51 - fVar52) / fVar48 + fVar49) - fVar44,&stack0x000015e0,0);
              FUN_037793b0(&stack0x00001518,0);
              fVar51 = (float)FUN_03779390(&stack0x00001550,0);
              puVar19 = &stack0x00001518;
              goto LAB_0378f5a8;
            }
            lVar24 = *in_stack_000001e8;
            if (lVar24 == 0) goto LAB_03793c9c;
            if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
            lVar24 = *(long *)(lVar24 + (ulong)(uint)fVar49 * (unaff_x27 & 0xffffffff) + 0x30);
            if ((lVar24 == 0) || (lVar24 = FUN_03787a68(lVar24,0), lVar24 == 0)) goto LAB_03793c9c;
            uVar12 = FUN_03776e5c(lVar24,0);
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            iVar13 = FUN_0377acf0(*in_stack_000001a8,0);
            if (((*plVar37 == 0) || (lVar24 = FUN_03779cb4(*plVar37,0), lVar24 == 0)) ||
               (*(long *)(lVar24 + 0x50) == 0)) goto LAB_03793c9c;
            in_stack_000016a0 = CONCAT44(uVar42,uVar12 | iVar13 << 0x10);
            uVar46 = FUN_0219f8b8(*(long *)(lVar24 + 0x50),&stack0x000016a0,&stack0x00001530,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
            unaff_x29 = in_stack_000001d0;
            fVar51 = fVar49;
          } while ((uVar46 & 1) == 0);
          lVar24 = *in_stack_000001e8;
          if (lVar24 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
          fVar52 = *(float *)(unaff_x19 + 0x2e0);
          fVar38 = *(float *)(unaff_x19 + 0x180);
          lVar24 = lVar24 + (uint)fVar49 * unaff_x27;
          fVar51 = *(float *)(unaff_x19 + 0x2f4);
          fVar40 = *(float *)(lVar24 + 0x148);
          fVar54 = *(float *)(lVar24 + 0x150);
          FUN_037793d0(&stack0x00001530,0);
          fVar49 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793e0(&stack0x00001530,0);
          fVar44 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar40 - fVar51) / fVar48 + fVar49) - fVar44,&stack0x000015e0,0);
          FUN_037793d0(&stack0x00001530,0);
          fVar51 = (float)FUN_03779390(&stack0x00001550,0);
          FUN_037793e0(&stack0x00001530,0);
          fVar49 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(((fVar54 - ((fVar41 - fVar52) + fVar38)) / fVar48 + fVar51) - fVar49,
                       &stack0x000015e0,0);
          _fStack0000000000000188 = _fStack0000000000000188 & 0xffffffff00000000;
          lVar24 = in_stack_000001e0;
        }
        else {
          lVar27 = *in_stack_000001e8;
          if (lVar27 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar27 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
          lVar27 = *(long *)(lVar27 + (long)(int)uVar12 * unaff_x27 + 0x30);
          if ((lVar27 == 0) || (lVar27 = FUN_03787a68(lVar27,0), lVar27 == 0)) goto LAB_03793c9c;
          uVar12 = FUN_03776e5c(lVar27,0);
          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
          iVar13 = FUN_0377acf0(*in_stack_000001a8,0);
          if (((*plVar37 == 0) || (lVar27 = FUN_03779cb4(*plVar37,0), lVar27 == 0)) ||
             (*(long *)(lVar27 + 0x48) == 0)) goto LAB_03793c9c;
          in_stack_000016a0 =
               CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar12 | iVar13 << 0x10);
          uVar46 = FUN_0219f8b8(*(long *)(lVar27 + 0x48),&stack0x000016a0,&stack0x00001558,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
          unaff_x29 = in_stack_000001d0;
          if ((uVar46 & 1) != 0) {
            lVar27 = *in_stack_000001e8;
            if (lVar27 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar51 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar52 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001558,0);
            fVar49 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001558,0);
            fVar44 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar51 - fVar52) / fVar48 + fVar49) - fVar44,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001558,0);
            fVar51 = (float)FUN_03779390(&stack0x00001550,0);
            puVar19 = &stack0x00001558;
LAB_0378f5a8:
            FUN_037793c0(puVar19,0);
            fVar49 = (float)FUN_037793a0(&stack0x00001548,0);
            FUN_03778e74(fVar51 - fVar49,&stack0x000015e0,0);
            _fStack0000000000000188 = _fStack0000000000000188 & 0xffffffff00000000;
          }
        }
      }
    }
    else {
      *(float *)(unaff_x19 + 0x19c4) = fVar51;
    }
LAB_0378dfc4:
    uVar42 = FUN_03778e6c(&stack0x000015e0,0);
    uVar39 = FUN_03778e6c(&stack0x000015e0,0);
    if (*(char *)(lVar24 + 0xb6) != '\0') {
      fVar49 = *(float *)(unaff_x19 + 0x2f4);
      fVar51 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar49 = fVar49 - fVar48 * fVar51 * (1.0 - *(float *)(unaff_x19 + 0x1594));
      *(float *)(unaff_x19 + 0x2f4) = fVar49;
      if ((unaff_w26 != 0) || (in_stack_0000169c == 0x200b)) {
        *(float *)(unaff_x19 + 0x2f4) = fVar49 - fStack0000000000000158 * *(float *)(lVar24 + 0xc4);
      }
    }
    fVar51 = *(float *)(unaff_x19 + 0x2f0);
    if (fVar51 == 0.0) {
      fVar51 = 0.0;
    }
    else {
      fVar49 = (float)FUN_03776c94(&stack0x000015f0,0);
      fVar44 = (float)FUN_03776ca4(&stack0x000015f0,0);
      fVar51 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
               (fVar51 * 0.5 - fVar48 * (fVar49 * 0.5 + fVar44));
      *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar51;
    }
    uVar12 = 0;
    if ((cVar21 == '\0') && (*unaff_x24 == '\x01')) {
      uVar12 = *(uint *)(unaff_x19 + 0x124) & 1;
    }
    lVar24 = *_fStack0000000000000190;
    if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar46 = FUN_036cee6c(lVar24,0,0);
    puVar6 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
    _fStack0000000000000168 = CONCAT44(uVar42,uVar39);
    in_stack_000000e8._4_4_ = fVar51;
    if (uVar12 == 0) {
      _fStack0000000000000148 = _fStack0000000000000148 & 0xffffffff00000000;
      if ((uVar46 & 1) != 0) {
        lVar24 = *_fStack0000000000000190;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_03793c9c;
        uVar46 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
        if ((uVar46 & 1) != 0) {
          lVar24 = *_fStack0000000000000190;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar24 == 0) goto LAB_03793c9c;
          uVar46 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
          if ((uVar46 & 1) != 0) {
            lVar24 = *_fStack0000000000000190;
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (lVar24 == 0) goto LAB_03793c9c;
            fVar51 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
            unaff_x28 = (long *)PTR_DAT_03cbe438;
            if ((*plVar37 == 0) || (*_fStack0000000000000190 == 0)) goto LAB_03793c9c;
            fVar44 = *(float *)(*plVar37 + 0x188);
            fVar49 = (float)FUN_0369e060(*_fStack0000000000000190,
                                         *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0
                                        );
            fVar49 = fVar49 * fVar51 * fVar44 * 0.25;
            if (fVar51 < fStack00000000000001a0 + fVar49) {
              _fStack00000000000001a0 = CONCAT44(uStack00000000000001a4,fVar51 - fVar49);
            }
            goto LAB_0378e344;
          }
        }
      }
      fVar49 = 0.0;
      unaff_x28 = (long *)PTR_DAT_03cbe438;
    }
    else {
      fVar49 = 0.0;
      unaff_x28 = (long *)PTR_DAT_03cbe438;
      if ((uVar46 & 1) != 0) {
        lVar24 = *_fStack0000000000000190;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar24 == 0) goto LAB_03793c9c;
        uVar46 = FUN_03699d3c(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if ((uVar46 & 1) != 0) {
          lVar24 = *_fStack0000000000000190;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar24 == 0) goto LAB_03793c9c;
          fVar51 = (float)FUN_0369e060(lVar24,*(undefined4 *)
                                               (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
          if (*plVar37 == 0) goto LAB_03793c9c;
          fVar44 = (float)FUN_03779d1c(*plVar37,0);
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          if (*_fStack0000000000000190 == 0) goto LAB_03793c9c;
          fVar49 = (float)FUN_0369e060(*_fStack0000000000000190,
                                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
          fVar49 = fVar51 * fVar44 * 0.25 * fVar49;
          if (fVar51 < fStack00000000000001a0 + fVar49) {
            _fStack00000000000001a0 = CONCAT44(uStack00000000000001a4,fVar51 - fVar49);
          }
        }
      }
      if (*plVar37 == 0) goto LAB_03793c9c;
      uVar42 = FUN_03779d2c(*plVar37,0);
      _fStack0000000000000148 = CONCAT44(uStack000000000000014c,uVar42);
    }
LAB_0378e344:
    fVar38 = *(float *)(unaff_x19 + 0x2f4);
    fVar44 = (float)FUN_03776ca4(&stack0x000015f0,0);
    fVar40 = *(float *)(unaff_x19 + 0x19a8);
    fVar52 = (float)FUN_03778e5c(&stack0x000015e0,0);
    fVar51 = fStack00000000000001a0;
    fVar38 = fVar38 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      fVar48 * (fVar52 + ((fVar44 * fVar40 - fStack00000000000001a0) - fVar49));
    fVar44 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar52 = (float)FUN_03778e6c(&stack0x000015e0,0);
    fVar52 = *(float *)(unaff_x19 + 0x180) +
             ((fVar41 + fVar48 * (fVar51 + fVar44 + fVar52)) - *(float *)(unaff_x19 + 0x2e0));
    fVar44 = (float)FUN_03776c9c(&stack0x000015f0,0);
    _fStack0000000000000180 =
         CONCAT44(fVar52 - fVar48 * (fVar51 + fVar51 + fVar44),fStack0000000000000180);
    in_stack_000001b8._4_4_ = fVar52;
    fVar44 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar51 = fVar38 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      fVar48 * (fVar49 + fVar49 +
                               fVar51 + fVar51 + fVar44 * *(float *)(unaff_x19 + 0x19a8));
    if (((cVar21 == '\0') && (*unaff_x24 == '\x01')) &&
       ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
      fStack0000000000000120 = fVar51;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      iVar13 = *(int *)(unaff_x19 + 0x19a4);
      fVar44 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      if (*plVar37 == 0) goto LAB_03793c9c;
      _fStack0000000000000118 = CONCAT44(uStack000000000000011c,fVar41);
      fStack0000000000000178 = fVar38;
      fVar52 = (float)FUN_037769b0(*plVar37 + 0xb0,0);
      if (*plVar37 == 0) goto LAB_03793c9c;
      fVar40 = *(float *)(unaff_x19 + 0xf0);
      fVar41 = *(float *)(unaff_x19 + 0x180);
      fVar51 = (float)iVar13 * fStack00000000000000a8;
      fVar38 = (float)FUN_03776960(*plVar37 + 0xb0,0);
      fVar38 = fVar38 * fVar40 * (fVar44 - (fVar52 + fVar41)) * 0.5;
      fVar44 = (float)FUN_03776cac(&stack0x000015f0,0);
      fVar52 = fStack00000000000001a0;
      fVar54 = fVar51 * fVar48 * ((fVar49 + fStack00000000000001a0 + fVar44) - fVar38);
      fVar40 = (float)FUN_03776cac(&stack0x000015f0,0);
      fVar41 = (float)FUN_03776c9c(&stack0x000015f0,0);
      in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ + 0.0;
      fVar44 = fStack0000000000000178 + fVar54;
      fVar51 = fVar51 * fVar48 * ((((fVar40 - fVar41) - fVar52) - fVar49) - fVar38);
      fVar38 = fStack0000000000000178 + fVar51;
      fVar51 = fStack0000000000000120 + fVar51;
      _fStack0000000000000180 = CONCAT44(fStack0000000000000184 + 0.0,fStack0000000000000180);
      _fStack00000000000001b0 = CONCAT44(uStack00000000000001b4,fStack0000000000000120 + fVar54);
      fVar41 = fStack0000000000000118;
    }
    else {
      _fStack00000000000001b0 = CONCAT44(uStack00000000000001b4,fVar51);
      fVar44 = fVar38;
    }
    lVar24 = *in_stack_000000f8;
    uVar16 = *(undefined8 *)CONCAT44(uStack00000000000000f4,fStack00000000000000f0);
    if (DAT_0411f169 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbdeb8);
      DAT_0411f169 = '\x01';
    }
    uVar17 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
    uVar45 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
    fVar52 = 0.0;
    fStack0000000000000178 = fVar49;
    if (DAT_00d38b04 <
        (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar45 >> 0x20) +
        (float)uVar16 * (float)uVar45 +
        (float)lVar24 * (float)uVar17 +
        (float)((ulong)lVar24 >> 0x20) * (float)((ulong)uVar17 >> 0x20)) {
      fVar47 = 0.0;
      fVar50 = 0.0;
      fVar40 = 0.0;
      fVar49 = in_stack_000001b8._4_4_;
      unaff_s13 = fVar48;
      fVar48 = fStack0000000000000184;
      fVar54 = fStack0000000000000184;
    }
    else {
      fStack0000000000000120 = fVar51;
      FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                   *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                   *(undefined4 *)(unaff_x19 + 0x19c0),0);
      fVar49 = fStack00000000000001b0;
      fVar54 = fStack0000000000000184;
      _fStack0000000000000118 = CONCAT44(uStack000000000000011c,fVar41);
      fVar51 = (fStack00000000000001b0 + fVar38) * 0.5;
      fVar55 = (fStack0000000000000184 + in_stack_000001b8._4_4_) * 0.5;
      fVar40 = in_stack_000001b8._4_4_ - fVar55;
      fVar41 = 0.0;
      fVar52 = fVar40;
      fStack00000000000000c4 = (float)FUN_036bdd2c(fVar44 - fVar51,&stack0x000014d0,0);
      fStack00000000000000c4 = fVar51 + fStack00000000000000c4;
      fStack00000000000000c0 = fVar55 + fVar52;
      fStack00000000000000c8 = fVar41 + 0.0;
      fVar54 = fVar54 - fVar55;
      fVar50 = 0.0;
      fStack00000000000000cc = fVar48;
      fVar48 = fVar54;
      fVar38 = (float)FUN_036bdd2c(fVar38 - fVar51,&stack0x000014d0,0);
      fVar38 = fVar51 + fVar38;
      fVar50 = fVar50 + 0.0;
      fVar47 = 0.0;
      fVar44 = (float)FUN_036bdd2c(fVar49 - fVar51,&stack0x000014d0,0);
      fVar49 = fStack00000000000000c0;
      _fStack00000000000001b0 = CONCAT44(uStack00000000000001b4,fVar51 + fVar44);
      in_stack_000001b8._4_4_ = fVar55 + fVar40;
      fVar47 = fVar47 + 0.0;
      fVar52 = 0.0;
      fVar44 = (float)FUN_036bdd2c(fStack0000000000000120 - fVar51,&stack0x000014d0,0);
      fVar51 = fVar51 + fVar44;
      fVar52 = fVar52 + 0.0;
      fVar41 = fStack0000000000000118;
      fVar40 = fStack00000000000000c8;
      unaff_s13 = fStack00000000000000cc;
      fVar44 = fStack00000000000000c4;
      fVar48 = fVar55 + fVar48;
      fVar54 = fVar55 + fVar54;
    }
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
    *(float *)(lVar24 + 0x124) = fVar38;
    *(float *)(lVar24 + 0x128) = fVar48;
    *(float *)(lVar24 + 300) = fVar50;
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
    *(float *)(lVar24 + 0x118) = fVar44;
    *(float *)(lVar24 + 0x11c) = fVar49;
    *(float *)(lVar24 + 0x120) = fVar40;
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
    *(float *)(lVar24 + 0x138) = fVar47;
    *(float *)(lVar24 + 0x130) = fStack00000000000001b0;
    *(float *)(lVar24 + 0x134) = in_stack_000001b8._4_4_;
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
    *(float *)(lVar24 + 0x13c) = fVar51;
    *(float *)(lVar24 + 0x140) = fVar54;
    *(float *)(lVar24 + 0x144) = fVar52;
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    fVar51 = *unaff_x29;
    fVar52 = *(float *)(unaff_x19 + 0x2f4);
    fVar44 = (float)FUN_03778e5c(&stack0x000015e0,0);
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar51) goto thunk_FUN_01ab6c44;
    *(float *)(lVar24 + (long)(int)fVar51 * unaff_x27 + 0x148) = fVar52 + unaff_s13 * fVar44;
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    fVar51 = *unaff_x29;
    fVar40 = *(float *)(unaff_x19 + 0x2e0);
    fVar52 = *(float *)(unaff_x19 + 0x180);
    fVar44 = (float)FUN_03778e6c(&stack0x000015e0,0);
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar51) goto thunk_FUN_01ab6c44;
    *(float *)(lVar24 + (long)(int)fVar51 * unaff_x27 + 0x150) =
         (fVar41 - fVar40) + fVar52 + unaff_s13 * fVar44;
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    fVar51 = *unaff_x29;
    unaff_x20 = (long)(int)fVar51;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar51) goto thunk_FUN_01ab6c44;
    *(float *)(lVar24 + unaff_x20 * unaff_x27 + 0x168) =
         (fStack00000000000001b0 - fVar38) / (fVar49 - fVar48);
    fVar48 = unaff_s13 * (fStack0000000000000180 + fStack000000000000016c);
    if (*unaff_x24 == '\x01') {
      fVar48 = fVar48 / fStack000000000000017c;
      fVar49 = (unaff_s13 * (fStack0000000000000170 + fStack0000000000000168)) /
               fStack000000000000017c;
    }
    else {
      fVar49 = unaff_s13 * (fStack0000000000000170 + fStack0000000000000168);
    }
    fVar44 = *(float *)(unaff_x19 + 0x328);
    fVar52 = *(float *)(unaff_x19 + 0x180);
    bVar9 = fVar51 == fVar44;
    bVar10 = unaff_w26 == 0;
    fVar48 = fVar52 + fVar48;
    if (bVar10 || bVar9) {
      fVar49 = fVar52 + fVar49;
      fVar51 = fVar48;
      fVar38 = fVar49;
      if (fVar52 != 0.0) {
        fVar51 = (fVar48 - fVar52) / *(float *)(unaff_x19 + 0xf0);
        fVar38 = (fVar49 - fVar52) / *(float *)(unaff_x19 + 0xf0);
        if (fVar51 <= fVar48) {
          fVar51 = fVar48;
        }
        if (fVar49 <= fVar38) {
          fVar38 = fVar49;
        }
      }
      lVar27 = lVar24 + unaff_x20 * unaff_x27;
      fVar52 = fVar51;
      if (fVar51 <= *(float *)(unaff_x19 + 0x338)) {
        fVar52 = *(float *)(unaff_x19 + 0x338);
      }
      fVar40 = fVar38;
      if (*(float *)(unaff_x19 + 0x33c) <= fVar38) {
        fVar40 = *(float *)(unaff_x19 + 0x33c);
      }
      *(float *)(unaff_x19 + 0x338) = fVar52;
      *(float *)(unaff_x19 + 0x33c) = fVar40;
      *(float *)(lVar27 + 0x158) = fVar51;
      *(float *)(lVar27 + 0x15c) = fVar38;
      fVar51 = *(float *)(unaff_x19 + 0x2e0);
      fVar38 = fVar48 - fVar51;
    }
    else {
      fVar52 = *(float *)(unaff_x19 + 0x338);
      lVar27 = lVar24 + unaff_x20 * unaff_x27;
      *(float *)(lVar27 + 0x158) = fVar52;
      fVar49 = *(float *)(unaff_x19 + 0x33c);
      *(float *)(lVar27 + 0x15c) = fVar49;
      fVar51 = *(float *)(unaff_x19 + 0x2e0);
      fVar38 = fVar52 - fVar51;
    }
    *(float *)(lVar27 + 0x14c) = fVar38;
    *(float *)(lVar24 + unaff_x20 * unaff_x27 + 0x154) = fVar49 - fVar51;
    *(float *)(unaff_x19 + 0x378) = fVar49 - fVar51;
    param_2 = extraout_x1;
    if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
      if (bVar10 || bVar9) {
        *(float *)(unaff_x19 + 0x374) = fVar52;
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        fVar49 = *(float *)(unaff_x19 + 0x370);
        fVar52 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
        fVar51 = *(float *)(unaff_x19 + 0x2e0);
        fVar52 = (unaff_s13 * fVar52) / fStack000000000000017c;
        if (fVar49 <= fVar52) {
          fVar49 = fVar52;
        }
        *(float *)(unaff_x19 + 0x370) = fVar49;
        param_2 = extraout_x1_00;
        if (fVar51 == 0.0) goto LAB_0378ee0c;
      }
    }
    else if ((bVar10 || bVar9) && fVar51 == 0.0) {
LAB_0378ee0c:
      fVar49 = *(float *)(unaff_x19 + 0x19c8);
      if (*(float *)(unaff_x19 + 0x19c8) <= fVar48) {
        fVar49 = fVar48;
      }
      *(float *)(unaff_x19 + 0x19c8) = fVar49;
    }
    unaff_x22 = in_stack_000001e8;
    unaff_x21 = in_stack_000001e0;
    lVar24 = *in_stack_000001e8;
    in_stack_000001b8._4_4_ = fVar44;
    if (lVar24 == 0) goto LAB_03793c9c;
    fVar48 = *unaff_x29;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)fVar48 * unaff_x27;
    *(undefined1 *)(lVar24 + 0x1a0) = 0;
    uVar12 = *(uint *)(unaff_x19 + 0x158) & 0x18;
    if ((in_stack_0000169c != 9) &&
       ((((unaff_w26 != 0 || (in_stack_0000169c == 3)) ||
         ((in_stack_0000169c == 0x200b || (in_stack_0000169c == 0xad)))) &&
        ((((uint)(in_stack_0000169c == 0xad) & (uStack00000000000000b8 ^ 0xffffffff)) == 0 &&
         (*unaff_x24 != '\x02')))))) {
      if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
        fVar49 = 0.0;
        if ((0.0 < fVar51) && (fVar49 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar49 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        if (fStack0000000000000108 <
            (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar51)) + fVar49) {
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(float *)(unaff_x19 + 0x34c) = fVar48;
          }
          in_stack_0000160c = FUN_03797154();
          unaff_x29 = in_stack_000001d0;
          goto LAB_0378f7e8;
        }
      }
      if ((((0x22 < in_stack_0000169c - 0x2007) ||
           ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
          (1 < in_stack_0000169c - 10)) && (in_stack_0000169c != 0xa0)) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        auVar56 = FUN_026b97f8(in_stack_0000169c,0);
        param_2 = auVar56._8_8_;
        if ((auVar56._0_8_ & 1) == 0) goto LAB_0378f760;
      }
      unaff_x29 = in_stack_000001d0;
      if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
      if (in_stack_0000169c != 0x2060) {
        lVar24 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar24 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        *(int *)(lVar24 + 0x2c) = *(int *)(lVar24 + 0x2c) + 1;
        *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
      }
LAB_0378f760:
      unaff_x29 = in_stack_000001d0;
      if (in_stack_0000169c != 0xa0) goto LAB_0378f884;
      lVar24 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar24 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      goto LAB_0378f884;
    }
    *(undefined1 *)(lVar24 + 0x1a0) = 1;
    pfVar23 = (float *)CONCAT44(uStack0000000000000134,fStack0000000000000130);
    pfVar30 = (float *)CONCAT44(uStack000000000000013c,iStack0000000000000138);
    if (unaff_w23 != 0) {
      lVar24 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar24 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar30 = (float *)(lVar24 + 100);
      pfVar23 = (float *)(lVar24 + 0x68);
    }
    fVar44 = *pfVar30;
    fVar49 = *pfVar23;
    fVar48 = *(float *)(unaff_x19 + 0x35c);
    fVar52 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar44) - fVar49;
    bVar9 = true;
    if ((fVar48 <= fStack0000000000000174) && (bVar9 = false, !NAN(fVar48))) {
      bVar9 = fVar48 == -1.0;
    }
    if (!bVar9) {
      fStack0000000000000174 = fVar48;
    }
    fVar38 = 0.0;
    fVar40 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar40 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar51 = *(float *)(unaff_x19 + 0x2e0);
      param_2 = extraout_x1_01;
    }
    unaff_x22 = in_stack_000001e8;
    unaff_x29 = in_stack_000001d0;
    uVar17 = in_stack_00000078;
    fVar41 = *(float *)(unaff_x19 + 0x1594);
    fVar50 = *(float *)(unaff_x19 + 0x33c);
    fVar54 = fStack000000000000015c;
    if (in_stack_0000169c != 0xad) {
      fVar54 = unaff_s13;
    }
    if ((0.0 < fVar51) && (fVar38 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar38 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    fVar48 = *in_stack_000001d0;
    fVar38 = (*(float *)(unaff_x19 + 0x374) - (fVar50 - fVar51)) + fVar38;
    pfVar30 = in_stack_000001d0;
    if (fStack0000000000000108 < fVar38) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(float *)(unaff_x19 + 0x34c) = fVar48;
      }
      uVar16 = DAT_00d37868;
      lVar24 = in_stack_00000110;
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar47 = *(float *)(in_stack_000001e0 + 0xd0);
        if (((fVar47 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar51)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar48 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000018._4_4_ - fVar38) / (float)*(int *)(unaff_x19 + 0x340)) /
                   fStack0000000000000088;
          if (fVar48 <= fVar47) {
            fVar48 = fVar47;
          }
          goto LAB_03793b50;
        }
        fVar38 = *(float *)CONCAT44(uStack00000000000000d4,fStack00000000000000d0);
        fVar51 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar51 < fVar38) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar48 = (fVar38 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar48 <= DAT_00d38b84) {
            fVar48 = DAT_00d38b84;
          }
          fVar49 = (fVar38 - fVar48) * 20.0 + 0.5;
          fVar48 = DAT_00d38e60;
          if (fVar49 != INFINITY) {
            fVar48 = (float)(int)fVar49 / 20.0;
          }
          if (fVar48 <= fVar51) {
            fVar48 = fVar51;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar38;
          goto LAB_037910ac;
        }
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 1:
        if (0 < *(int *)(unaff_x19 + 0x340)) {
          iVar13 = FUN_020aa428(in_stack_00000078,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                               );
          uVar16 = DAT_00d37868;
          if (iVar13 == 0) {
            in_stack_0000160c = 0xffffffff;
            pfVar30[0] = 0.0;
            pfVar30[1] = 0.0;
            unaff_x21 = in_stack_000001e0;
            unaff_x22 = in_stack_000001e8;
            lVar24 = in_stack_00000110;
            plVar37 = in_stack_000001c8;
          }
          else {
            FUN_020ab640(uVar17,&stack0x000016a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
            memcpy(&stack0x00001138,&stack0x000016a0,0x398);
            iVar13 = FUN_03797154();
            in_stack_0000160c = iVar13 - 1;
            iVar13 = *(int *)(unaff_x19 + 0x324) + -1;
            *(int *)(unaff_x19 + 0x324) = iVar13;
            uVar16 = CONCAT44(0x2026,iVar13);
            in_stack_000001d8._4_4_ = (float)((int)in_stack_000001d8._4_4_ + 1);
            unaff_x21 = in_stack_000001e0;
            unaff_x22 = in_stack_000001e8;
            lVar24 = in_stack_00000110;
            plVar37 = in_stack_000001c8;
          }
          goto LAB_0378d260;
        }
        break;
      case 3:
        in_stack_0000160c = FUN_03797154();
        uVar16 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),fVar48);
        unaff_x21 = in_stack_000001e0;
        unaff_x22 = in_stack_000001e8;
        lVar24 = in_stack_00000110;
        plVar37 = in_stack_000001c8;
        goto LAB_0378d260;
      case 5:
        if (fVar48 == 0.0 || (int)in_stack_0000160c < 0) {
          in_stack_0000160c = 0xffffffff;
          *in_stack_000001d0 = 0.0;
          unaff_x21 = in_stack_000001e0;
          plVar37 = in_stack_000001c8;
          goto LAB_0378d260;
        }
        fVar51 = *(float *)(unaff_x19 + 0x338);
        in_stack_0000160c = FUN_03797154();
        unaff_x22 = in_stack_000001e8;
        if (fVar51 - fVar50 <= fStack0000000000000108) {
          *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
          *(ulong *)(unaff_x19 + 0x338) = CONCAT44(uStack0000000000000094,uStack0000000000000090);
          *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
          *(undefined1 *)(unaff_x19 + 0x37c) = 1;
          *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
          *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
          *(undefined4 *)(unaff_x19 + 0x374) = 0;
          *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
          *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
          *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
          unaff_x21 = in_stack_000001e0;
          lVar24 = in_stack_00000110;
          plVar37 = in_stack_000001c8;
          uVar16 = in_stack_00001688;
          goto LAB_0378d260;
        }
LAB_0378f7e8:
        unaff_x21 = in_stack_000001e0;
        lVar24 = in_stack_00000110;
        plVar37 = in_stack_000001c8;
        uVar16 = CONCAT44(3,fVar48);
        goto LAB_0378d260;
      case 6:
        in_stack_0000160c = FUN_03797154();
        uVar16 = CONCAT44(3,fVar48);
        unaff_x21 = in_stack_000001e0;
        unaff_x22 = in_stack_000001e8;
        lVar24 = in_stack_00000110;
        plVar37 = in_stack_000001c8;
        goto LAB_0378d260;
      }
    }
    if ((uVar43 & 1) == 0) goto LAB_0378f1e0;
    fVar52 = ABS(fVar52) + fVar40 * (1.0 - fVar41) * fVar54;
    fVar51 = 1.0;
    if (uVar12 != 0) {
      fVar51 = DAT_00d38acc;
    }
    if (fVar52 <= fVar51 * fStack0000000000000174) goto LAB_0378f1e0;
    if ((iStack000000000000008c == 0) || (fVar48 == *(float *)(unaff_x19 + 0x328))) {
      if ((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar38 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar41 < fVar38) {
          fVar48 = fVar52 / (1.0 - fVar41);
          if (fVar41 <= 0.0) {
            fVar48 = fVar52;
          }
          fVar41 = fVar41 + (fVar52 - fVar51 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar48;
          goto FUN_03793c4c;
        }
        fVar38 = *(float *)(in_stack_000001e0 + 0xac);
        fVar40 = *(float *)CONCAT44(uStack00000000000000d4,fStack00000000000000d0);
        if (fVar38 < fVar40) goto LAB_03793bbc;
      }
      iVar13 = *(int *)(in_stack_000001e0 + 0x74);
      if (iVar13 == 1) {
        iVar13 = FUN_020aa428(in_stack_00000078,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                             );
        plVar37 = in_stack_000001c8;
        uVar16 = DAT_00d37868;
        if (iVar13 == 0) {
          in_stack_0000160c = 0xffffffff;
          pfVar30[0] = 0.0;
          pfVar30[1] = 0.0;
          unaff_x21 = in_stack_000001e0;
          lVar24 = in_stack_00000110;
        }
        else {
          FUN_020ab640(uVar17,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
          iVar13 = FUN_03797154();
          in_stack_0000160c = iVar13 - 1;
          iVar13 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar13;
          in_stack_000001d8._4_4_ = (float)((int)in_stack_000001d8._4_4_ + 1);
          unaff_x21 = in_stack_000001e0;
          lVar24 = in_stack_00000110;
          uVar16 = CONCAT44(0x2026,iVar13);
        }
        goto LAB_0378d260;
      }
      if (iVar13 == 6) {
        in_stack_0000160c = FUN_03797154();
        fVar48 = *(float *)(unaff_x19 + 0x324);
      }
      else {
        if (iVar13 != 3) goto LAB_0378f1e0;
        in_stack_0000160c = FUN_03797154();
      }
      goto LAB_037909d0;
    }
    in_stack_0000160c = FUN_03797154();
    lVar27 = in_stack_000001c0;
    param_2 = (ulong)in_stack_0000160c;
    if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
      lVar32 = *unaff_x22;
      if (lVar32 == 0) goto LAB_03793c9c;
      fVar54 = *unaff_x29;
      if ((uint)*(float *)(lVar32 + 0x18) <= (uint)fVar54) goto thunk_FUN_01ab6c44;
      fVar40 = *(float *)(unaff_x19 + 0x2e0);
      fVar38 = 0.0;
      if ((0.0 < fVar40) && (fVar38 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
        fVar38 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
      }
      fVar38 = fStack0000000000000158 * *(float *)(in_stack_000001e0 + 200) +
               *(float *)(lVar32 + (long)(int)fVar54 * unaff_x27 + 0x158) +
               (fVar38 - *(float *)(unaff_x19 + 0x33c)) +
               fStack0000000000000088 * (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
    }
    else {
      fVar38 = *(float *)(in_stack_000001e0 + 200);
      *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
      lVar32 = *unaff_x22;
      if (lVar32 == 0) goto LAB_03793c9c;
      fVar40 = *(float *)(unaff_x19 + 0x2e0);
      fVar54 = *(float *)(unaff_x19 + 0x324);
      fVar38 = *(float *)(unaff_x19 + 0x2e4) + fStack0000000000000158 * fVar38;
    }
    if (((uint)*(float *)(lVar32 + 0x18) <= (uint)fVar54) ||
       (fVar41 = (float)((int)fVar54 - 1), (uint)*(float *)(lVar32 + 0x18) <= (uint)fVar41))
    goto thunk_FUN_01ab6c44;
    fVar50 = (fVar38 + *(float *)(unaff_x19 + 0x374) + fVar40) -
             *(float *)(lVar32 + (long)(int)fVar54 * (long)iVar14 + 0x15c);
    lVar24 = in_stack_00000110;
    plVar37 = in_stack_000001c8;
    unaff_x21 = in_stack_000001e0;
    if (((_uStack00000000000000b8 & 1) == 0 &&
         *(short *)(lVar32 + (long)(int)fVar41 * (long)iVar14 + 0x20) == 0xad) &&
       ((fVar50 < fStack0000000000000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
      in_stack_0000160c = in_stack_0000160c - 1;
      _uStack00000000000000b8 = (ulong)uStack00000000000000bc << 0x20;
      *unaff_x29 = fVar41;
      uVar16 = CONCAT44(0x2d,fVar41);
      goto LAB_0378d260;
    }
    if (*(short *)(lVar32 + (long)(int)fVar54 * unaff_x27 + 0x20) == 0xad) {
      _uStack00000000000000b8 = CONCAT44(uStack00000000000000bc,1);
      uVar16 = in_stack_00001688;
      goto LAB_0378d260;
    }
    if (((uint)fStack00000000000000d8 & (uint)*(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
      fVar41 = *(float *)(unaff_x19 + 0x1594);
      fVar38 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
      if ((fVar38 <= fVar41) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar40 = *(float *)CONCAT44(uStack00000000000000d4,fStack00000000000000d0);
        fVar38 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar40 <= fVar38) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_03790b7c;
LAB_03793bbc:
        fVar48 = (fVar40 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar48 <= DAT_00d38b84) {
          fVar48 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar40;
        fVar51 = (fVar40 - fVar48) * 20.0 + 0.5;
        fVar48 = DAT_00d38e60;
        if (fVar51 != INFINITY) {
          fVar48 = (float)(int)fVar51 / 20.0;
        }
        lVar24 = in_stack_00000110;
        if (fVar48 <= fVar38) {
          fVar48 = fVar38;
        }
LAB_037910ac:
        *(float *)(unaff_x19 + 0xec) = fVar48;
        goto LAB_0378c81c;
      }
LAB_03793c60:
      fVar48 = fVar52;
      if (0.0 < fVar41) {
        fVar48 = fVar52 / (1.0 - fVar41);
      }
      fVar41 = fVar41 + (fVar52 - fVar51 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar48;
FUN_03793c4c:
      if (fVar38 <= fVar41) {
        fVar41 = fVar38;
      }
      *(float *)(unaff_x19 + 0x1594) = fVar41;
      lVar24 = in_stack_00000110;
      goto LAB_0378c81c;
    }
LAB_03790b7c:
    iVar13 = *in_stack_00000030;
    if ((iVar13 != iStack0000000000000028) &&
       (((uint)fStack00000000000000d8 & (uint)(iVar13 != -1)) != 0)) {
      in_stack_0000160c = FUN_03797154();
      unaff_x28 = (long *)PTR_DAT_03cbe438;
      lVar24 = *(long *)(lVar27 + 0x30);
      if (lVar24 == 0) goto LAB_03793c9c;
      fVar54 = *unaff_x29;
      fVar38 = (float)((int)fVar54 - 1);
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar38) goto thunk_FUN_01ab6c44;
      param_2 = (ulong)in_stack_0000160c;
      iStack0000000000000028 = iVar13;
      if (*(short *)(lVar24 + (long)(int)fVar38 * (long)iVar14 + 0x20) == 0xad) {
        in_stack_0000160c = in_stack_0000160c - 1;
        _uStack00000000000000b8 = _uStack00000000000000b8 & 0xffffffff00000000;
        *unaff_x29 = fVar38;
        unaff_x21 = in_stack_000001e0;
        unaff_x22 = in_stack_000001e8;
        lVar24 = in_stack_00000110;
        plVar37 = in_stack_000001c8;
        uVar16 = CONCAT44(0x2d,fVar38);
        goto LAB_0378d260;
      }
    }
    unaff_x22 = in_stack_000001e8;
    unaff_x21 = in_stack_000001e0;
    uVar17 = in_stack_00000078;
    if (fVar50 <= fStack0000000000000108) {
      FUN_037a1530(fStack0000000000000088);
      fStack00000000000000d8 = 1.4013e-45;
      _uStack00000000000000b8 = _uStack00000000000000b8 & 0xffffffff00000000;
      fStack00000000000000ac = 1.4013e-45;
      unaff_x22 = in_stack_000001e8;
      lVar24 = in_stack_00000110;
      plVar37 = in_stack_000001c8;
      uVar16 = in_stack_00001688;
      goto LAB_0378d260;
    }
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(float *)(unaff_x19 + 0x34c) = fVar54;
    }
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar38 = *(float *)(in_stack_000001e0 + 0xd0);
      if ((fVar38 < *(float *)(unaff_x19 + 0x15b0)) &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar48 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000018._4_4_ - fVar50) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                 fStack0000000000000088;
        if (fVar48 <= fVar38) {
          fVar48 = fVar38;
        }
LAB_03793b50:
        *(float *)(unaff_x19 + 0x15b0) = fVar48;
        lVar24 = in_stack_00000110;
        goto LAB_0378c81c;
      }
      fVar41 = *(float *)(unaff_x19 + 0x1594);
      fVar38 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
      if ((fVar41 < fVar38) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
      goto LAB_03793c60;
      fVar40 = *(float *)CONCAT44(uStack00000000000000d4,fStack00000000000000d0);
      fVar38 = *(float *)(in_stack_000001e0 + 0xac);
      if ((fVar38 < fVar40) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
      goto LAB_03793bbc;
    }
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 0:
    case 2:
    case 4:
      FUN_037a1530(fStack0000000000000088);
      fStack00000000000000d8 = 1.4013e-45;
      break;
    case 1:
      iVar13 = FUN_020aa428(in_stack_00000078,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                           );
      plVar37 = in_stack_000001c8;
      lVar24 = in_stack_00000110;
      uVar16 = DAT_00d37868;
      if (iVar13 == 0) {
        _uStack00000000000000b8 = _uStack00000000000000b8 & 0xffffffff00000000;
        pfVar30[0] = 0.0;
        pfVar30[1] = 0.0;
        unaff_x21 = in_stack_000001e0;
        in_stack_0000160c = 0xffffffff;
      }
      else {
        FUN_020ab640(uVar17,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
        memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
        iVar15 = FUN_03797154();
        _uStack00000000000000b8 = _uStack00000000000000b8 & 0xffffffff00000000;
        iVar13 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar13;
        in_stack_000001d8._4_4_ = (float)((int)in_stack_000001d8._4_4_ + 1);
        unaff_x21 = in_stack_000001e0;
        in_stack_0000160c = iVar15 - 1;
        uVar16 = CONCAT44(0x2026,iVar13);
      }
      goto LAB_0378d260;
    case 3:
      in_stack_0000160c = FUN_03797154();
      _uStack00000000000000b8 = _uStack00000000000000b8 & 0xffffffff00000000;
      goto LAB_037909d0;
    case 5:
      fStack00000000000000d8 = 1.4013e-45;
      *(undefined1 *)(unaff_x19 + 0x37c) = 1;
      FUN_037a1530(fStack0000000000000088);
      *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
      *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
      *(undefined4 *)(unaff_x19 + 0x374) = 0;
      *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
      *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
      break;
    case 6:
      _uStack00000000000000b8 = (ulong)uStack00000000000000bc << 0x20;
      fVar48 = fVar54;
LAB_037909d0:
      unaff_x21 = in_stack_000001e0;
      lVar24 = in_stack_00000110;
      plVar37 = in_stack_000001c8;
      uVar16 = CONCAT44(3,fVar48);
      goto LAB_0378d260;
    default:
      goto UnityEngine_UIElements_MouseOutEvent___ctor;
    }
    _uStack00000000000000b8 = _uStack00000000000000b8 & 0xffffffff00000000;
    lVar24 = in_stack_00000110;
    plVar37 = in_stack_000001c8;
LAB_0379053c:
    fStack00000000000000ac = 1.4013e-45;
    uVar16 = in_stack_00001688;
    goto LAB_0378d260;
  }
  goto LAB_03793c9c;
UnityEngine_UIElements_MouseOutEvent___ctor:
  _uStack00000000000000b8 = (ulong)uStack00000000000000bc << 0x20;
  fVar48 = fVar54;
LAB_0378f1e0:
  unaff_x22 = in_stack_000001e8;
  unaff_x21 = in_stack_000001e0;
  if (unaff_w26 == 0) {
    if (in_stack_0000169c == 0xad) {
      lVar24 = *in_stack_000001e8;
      if (lVar24 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      *(undefined1 *)(lVar24 + (long)(int)fVar48 * (long)iVar14 + 0x1a0) = 0;
    }
    else {
      puVar5 = (undefined8 *)&stack0x00000040;
      if (*(char *)(in_stack_000001e0 + 0xa1) != '\0') {
        puVar5 = (undefined8 *)&stack0x00000048;
      }
      param_2 = (ulong)*(uint *)*puVar5;
      if (*unaff_x24 == '\x02') {
        FUN_0379c8ac();
        param_2 = extraout_x1_03;
      }
      else if (*unaff_x24 == '\x01') {
        FUN_0379bd40(_fStack00000000000001a0 & 0xffffffff);
        param_2 = extraout_x1_02;
      }
      fVar48 = *unaff_x29;
      if (((uint)fStack00000000000000ac & 1) != 0) {
        *(float *)(unaff_x19 + 0x330) = fVar48;
      }
      *(float *)(unaff_x19 + 0x334) = fVar48;
      *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
      lVar24 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar24 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fStack00000000000000ac = 0.0;
      *(float *)(lVar24 + 100) = fVar44;
      *(float *)(lVar24 + 0x68) = fVar49;
    }
  }
  else {
    lVar24 = *in_stack_000001e8;
    if (lVar24 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar24 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    *(undefined1 *)(lVar24 + (long)(int)fVar48 * (long)iVar14 + 0x1a0) = 0;
    *(float *)(unaff_x19 + 0x334) = fVar48;
    lVar24 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar24 == 0) goto LAB_03793c9c;
    uVar31 = *(uint *)(lVar24 + 0x18);
    if (uVar31 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar27 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    iVar13 = *(int *)(lVar27 + 0x2c) + 1;
    *(int *)(lVar27 + 0x2c) = iVar13;
    *(int *)(unaff_x19 + 0x348) = iVar13;
    if (uVar31 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar24 + 100) = fVar44;
    *(float *)(lVar24 + 0x68) = fVar49;
    *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
  }
LAB_0378f884:
  bVar9 = *(int *)(unaff_x21 + 0x74) == 1;
  if (bVar9 && unaff_w23 == 1) {
    bVar9 = in_stack_0000169c == 0x2d;
  }
  if (bVar9) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar48 = *(float *)(unaff_x19 + 0xf4);
    iVar13 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar49 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar24 = *(long *)(unaff_x19 + 0x1a00);
    fVar51 = fStack0000000000000150;
    if (*(char *)(unaff_x21 + 0xbd) != '\0') {
      fVar51 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_03793c9c;
    fVar52 = *(float *)(unaff_x19 + 0xf0);
    fVar40 = *(float *)(lVar24 + 0x2c);
    fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
    fVar38 = *(float *)CONCAT44(uStack000000000000013c,iStack0000000000000138);
    fVar44 = fVar52 * (fVar48 / (float)iVar13) * fVar49 * fVar51 * fVar40 * fVar44;
    fVar48 = *(float *)CONCAT44(uStack0000000000000134,fStack0000000000000130);
    param_2 = extraout_x1_04;
    if ((in_stack_0000169c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar24 = *in_stack_000001e8;
      if (lVar24 == 0) goto LAB_03793c9c;
      uVar31 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar31) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar51 = *(float *)(lVar24 + (long)(int)uVar31 * (long)iVar14 + 0x68);
      iVar14 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar52 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar24 = *(long *)(unaff_x19 + 0x1a00);
      fVar49 = fStack0000000000000150;
      if (*(char *)(unaff_x21 + 0xbd) != '\0') {
        fVar49 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_03793c9c;
      fVar40 = *(float *)(unaff_x19 + 0xf0);
      fVar41 = *(float *)(lVar24 + 0x2c);
      fVar44 = (float)FUN_03776ea8(*(long *)(lVar24 + 0x20),0);
      lVar24 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar24 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar38 = *(float *)(lVar24 + 100);
      fVar48 = *(float *)(lVar24 + 0x68);
      fVar44 = fVar40 * (fVar51 / (float)iVar14) * fVar52 * fVar49 * fVar41 * fVar44;
      param_2 = extraout_x1_05;
    }
    unaff_x22 = in_stack_000001e8;
    fVar49 = *(float *)(unaff_x19 + 0x2f4);
    fVar51 = 0.0;
    if (*(char *)(unaff_x21 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar24 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar24 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar24,0);
      fVar51 = (float)FUN_03776cb4(&stack0x000015c0,0);
      param_2 = extraout_x1_06;
    }
    pvVar7 = in_stack_00000068;
    fVar52 = *(float *)(unaff_x19 + 0x35c);
    fVar48 = (fStack000000000000012c - fVar38) - fVar48;
    bVar9 = true;
    if ((fVar52 <= fVar48) && (bVar9 = false, !NAN(fVar52))) {
      bVar9 = fVar52 == -1.0;
    }
    if (!bVar9) {
      fVar48 = fVar52;
    }
    fVar52 = 1.0;
    if (uVar12 != 0) {
      fVar52 = DAT_00d38acc;
    }
    if (ABS(fVar49) + fVar44 * fVar51 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar52 * fVar48) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,pvVar7,0x398);
      FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
      param_2 = extraout_x1_07;
    }
  }
  plVar37 = in_stack_000001c8;
  in_x12 = 0x60;
  lVar24 = *unaff_x22;
  if (lVar24 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar24 + 0x18) <= (uint)*unaff_x29) goto thunk_FUN_01ab6c44;
  uVar12 = *(uint *)(unaff_x19 + 0x340);
  lVar24 = lVar24 + (long)(int)*unaff_x29 * unaff_x27;
  *(uint *)(lVar24 + 0x6c) = uVar12;
  *(undefined4 *)(lVar24 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if ((unaff_w23 == 0) &&
     ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
    lVar24 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar24 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar24 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar24 + (long)(int)uVar12 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  else {
    lVar24 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar24 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar24 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar24 + (long)(int)uVar12 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
  }
  unaff_w25 = unaff_w26;
  if (in_stack_0000169c == 0x200b) goto code_r0x0378fd94;
  if (in_stack_0000169c == 9) {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar48 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
    if (*plVar37 == 0) goto LAB_03793c9c;
    bVar11 = FUN_03779d4c(*plVar37,0);
    fVar51 = *(float *)(unaff_x19 + 0x2f4);
    fVar49 = unaff_s13 * fVar48 * (float)bVar11;
    fVar48 = fVar49 * (float)(int)(fVar51 / fVar49);
    if (fVar48 <= fVar51) {
      fVar48 = fVar51 + fVar49;
    }
    *(float *)(unaff_x19 + 0x2f4) = fVar48;
    in_x12 = 0x60;
    param_2 = extraout_x1_08;
    goto code_r0x0378fd94;
  }
  fVar48 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar48 == 0.0) {
    fVar51 = *(float *)(unaff_x19 + 0x2f4);
    if (*(char *)(unaff_x21 + 0xb6) != '\0') {
      fVar48 = (float)FUN_03778e7c(&stack0x000015e0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
      in_x12 = 0x60;
      fVar51 = fVar51 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                        (*(float *)(unaff_x19 + 0x2ec) +
                        unaff_s13 * fVar48 +
                        fStack0000000000000158 *
                        (fStack0000000000000148 + fStack0000000000000188 + fVar49));
      *(float *)(unaff_x19 + 0x2f4) = fVar51;
      param_2 = extraout_x1_10;
      if ((unaff_w26 == 0) && (in_stack_0000169c != 0x200b)) goto code_r0x0378fd94;
      fVar51 = fVar51 - fStack0000000000000158 * *(float *)(unaff_x21 + 0xc4);
      goto LAB_0378fd90;
    }
    fVar48 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar44 = *(float *)(unaff_x19 + 0x19a8);
    fVar49 = (float)FUN_03778e7c(&stack0x000015e0,0);
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    fVar52 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
    fVar51 = fVar51 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      (*(float *)(unaff_x19 + 0x2ec) +
                      unaff_s13 * (fVar48 * fVar44 + fVar49) +
                      fStack0000000000000158 *
                      (fStack0000000000000148 + fStack0000000000000188 + fVar52));
    param_2 = extraout_x1_11;
  }
  else {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar51 = *(float *)(unaff_x19 + 0x2f4);
    fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    fVar51 = fVar51 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                      (*(float *)(unaff_x19 + 0x2ec) +
                      (fVar48 - in_stack_000000e8._4_4_) +
                      fStack0000000000000158 * (fStack0000000000000188 + fVar49));
    param_2 = extraout_x1_09;
  }
  in_x12 = 0x60;
  *(float *)(unaff_x19 + 0x2f4) = fVar51;
  if ((unaff_w26 == 0) && (in_stack_0000169c != 0x200b)) goto code_r0x0378fd94;
  fVar51 = fVar51 + fStack0000000000000158 * *(float *)(unaff_x21 + 0xc4);
LAB_0378fd90:
  in_x12 = 0x60;
  *(float *)(unaff_x19 + 0x2f4) = fVar51;
  goto code_r0x0378fd94;
LAB_0379194c:
  do {
    plVar36 = in_stack_000001c8;
    fVar48 = (float)((int)fVar51 - 1);
    in_stack_000001b8._4_4_ = fVar51;
    if ((uint)*(float *)(in_stack_000001c8 + 3) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar24 = (long)(int)fVar48;
    _fStack0000000000000188 = in_stack_000001c8[lVar24 * 0x31 + 8];
    uVar3 = *(ushort *)(in_stack_000001c8 + lVar24 * 0x31 + 4);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fStack000000000000017c = (float)FUN_026b63d8(uVar3,0);
    fVar51 = *(float *)(plVar36 + 3);
    if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar27 = *(long *)(lVar27 + 0x48);
    in_stack_000001d8._4_4_ = (float)(uint)uVar3;
    if (lVar27 == 0) goto LAB_03793c9c;
    uVar2 = *(uint *)((long)plVar36 + lVar24 * 0x188 + 0x6c);
    uStack0000000000000160 = uVar31;
    if (*(uint *)(lVar27 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
    _fStack00000000000001a0 = (ulong)(int)uVar2;
    lVar27 = lVar27 + _fStack00000000000001a0 * 0x60;
    _fStack0000000000000150 = (long)(int)*(float *)(lVar27 + 0x40);
    uVar31 = *(uint *)(lVar27 + 0x6c);
    iVar15 = *(int *)(lVar27 + 0x20);
    iVar14 = *(int *)(lVar27 + 0x28);
    iVar13 = *(int *)(lVar27 + 0x2c);
    _fStack00000000000001b0 = (long)*(int *)(lVar27 + 0x44);
    fVar38 = *(float *)(lVar27 + 0x50);
    fVar40 = *(float *)(lVar27 + 0x58);
    fVar52 = *(float *)(lVar27 + 0x5c);
    fVar54 = *(float *)(lVar27 + 0x60);
    fVar55 = *(float *)(lVar27 + 100);
    fVar47 = *(float *)(lVar27 + 0x70);
    fVar53 = *(float *)(lVar27 + 0x74);
    fVar50 = *(float *)(lVar27 + 0x78);
    fVar41 = *(float *)(lVar27 + 0x7c);
    if ((int)uVar31 < 0x421) {
      if ((int)uVar31 < 0x209) {
        if ((int)uVar31 < 0x111) {
          switch(uVar31) {
          case 0x101:
            goto switchD_03791aa4_caseD_1001;
          case 0x102:
            goto switchD_03791aa4_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_03791aa4_caseD_1004;
          case 0x108:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar31 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar31) {
          case 0x201:
            goto switchD_03791aa4_caseD_1001;
          case 0x202:
            goto switchD_03791aa4_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_03791aa4_caseD_1004;
          case 0x208:
            goto switchD_03791aa4_caseD_1008;
          default:
            if (uVar31 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar31 < 0x405) {
        if ((int)uVar31 < 0x401) {
          if (uVar31 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar31 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar31 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar31 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar31 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar31 == 0x408) || (uVar31 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar31 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar31) {
      if ((int)uVar31 < 0x2005) {
        if (0x2000 < (int)uVar31) {
          if (uVar31 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar31 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar31 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar31 != 0x1010) {
          uVar22 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar31 != 0x2008) && (uVar31 != 0x2010)) {
        uVar22 = 0x2020;
LAB_03791bc8:
        if (uVar31 != uVar22) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar52 = fVar47 + fVar50;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar31 < 0x811) {
      switch(uVar31) {
      case 0x801:
        goto switchD_03791aa4_caseD_1001;
      case 0x802:
        goto switchD_03791aa4_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_03791aa4_caseD_1004;
      case 0x808:
switchD_03791aa4_caseD_1008:
        if ((int)fVar48 <= *(int *)(lVar27 + 0x44)) {
          if ((uint)in_stack_000001d8._4_4_ < 0xad) {
            if ((in_stack_000001d8._4_4_ != 4.2039e-45) && (in_stack_000001d8._4_4_ != 1.4013e-44))
            goto FUN_03791eb4;
          }
          else if ((in_stack_000001d8._4_4_ != 2.42425e-43) &&
                  ((in_stack_000001d8._4_4_ != 1.14949e-41 &&
                   (in_stack_000001d8._4_4_ != 1.1614e-41)))) {
FUN_03791eb4:
            _fStack0000000000000190 = (long *)CONCAT44(uStack0000000000000194,fVar38);
            fStack00000000000000c4 = fVar41;
            fStack0000000000000170 = fVar40;
            if ((uint)fVar51 <= (uint)*(float *)(lVar27 + 0x40)) goto thunk_FUN_01ab6c44;
            lVar27 = in_stack_000001c8[_fStack0000000000000150 * 0x31 + 4];
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar37 = (long *)PTR_DAT_03cbded8;
            }
            uVar43 = FUN_026b8cc4((short)lVar27,0);
            if ((uVar43 & 1) == 0) {
              bVar9 = (int)uVar2 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar9 = false;
            }
            fVar38 = fStack0000000000000190;
            if ((fVar52 <= fVar54) && (!bVar9 && (uVar31 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar55;
              fVar40 = fStack0000000000000170;
              fVar41 = fStack00000000000000c4;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar54 + fVar55;
              }
              goto LAB_03791c20;
            }
            if ((in_stack_000001b8._4_4_ == 1.4013e-45) || (uVar2 != uVar12)) {
              cVar21 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar21 = *(char *)(in_stack_000001e0 + 0xb6);
              if (fVar48 != *(float *)(in_stack_000001e0 + 0xe4)) {
                iVar13 = (iVar13 - iVar15) - (uStack0000000000000090 & 1);
                fVar51 = -fVar52;
                if (cVar21 != '\0') {
                  fVar51 = fVar52;
                }
                if (iVar13 < 1) {
                  fVar52 = 1.0;
                }
                else {
                  fVar52 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar13 < 2) {
                  iVar13 = 1;
                }
                fVar54 = fVar54 + fVar51;
                if (in_stack_000001d8._4_4_ == 1.26117e-44) {
LAB_037939d0:
                  if (cVar21 != '\0') {
                    fVar54 = fVar54 * (1.0 - fVar52);
                    fVar51 = (float)iVar13;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar54 / fVar51;
                    fVar40 = fStack0000000000000170;
                    fVar41 = fStack00000000000000c4;
                    break;
                  }
                  fVar51 = (float)iVar13;
                  fVar54 = fVar54 * (1.0 - fVar52);
                }
                else {
                  uVar31 = ~uStack0000000000000090;
                  if (in_stack_000001d8._4_4_ != 2.24208e-43) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar43 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
                    cVar21 = *(char *)(in_stack_000001e0 + 0xb6);
                    fVar38 = fStack0000000000000190;
                    if ((uVar43 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar54 = fVar54 * fVar52;
                  fVar51 = (float)(int)((iVar15 - (uVar31 & 1)) + iVar14);
                  if (cVar21 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar54 / fVar51;
                _fStack0000000000000148 =
                     CONCAT44((float)(_fStack0000000000000148 >> 0x20) + 0.0,
                              (float)_fStack0000000000000148 + 0.0);
                fVar40 = fStack0000000000000170;
                fVar41 = fStack00000000000000c4;
                break;
              }
            }
            fStack0000000000000158 = fVar55;
            if (cVar21 != '\0') {
              fStack0000000000000158 = fVar54 + fVar55;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
            _fStack0000000000000148 = 0;
            fVar38 = fStack0000000000000190;
            fVar40 = fStack0000000000000170;
            fVar41 = fStack00000000000000c4;
          }
        }
        break;
      default:
        if (uVar31 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar31) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar55 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar52;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar55 + fVar54 * 0.5) - fVar52 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar54 + fVar55) - fVar52;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar54 + fVar55;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar31 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _fStack0000000000000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    lVar32 = in_stack_000001e0;
    plVar36 = in_stack_000001c8;
    lVar27 = in_stack_000001c0;
    fVar51 = (float)in_stack_000001c8[3];
    if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    fVar52 = fStack0000000000000120 + fStack0000000000000158;
    _fStack0000000000000190 =
         (long *)CONCAT44((float)(_fStack0000000000000118 >> 0x20) +
                          (float)(_fStack0000000000000148 >> 0x20),
                          (float)_fStack0000000000000118 + (float)_fStack0000000000000148);
    in_stack_00000198 = 0;
    plVar35 = in_stack_000001e8;
    fStack0000000000000170 = fVar48;
    if ((char)in_stack_000001c8[lVar24 * 0x31 + 0x34] == '\0') goto LAB_037924bc;
    cVar21 = (char)in_stack_000001c8[lVar24 * 0x31 + 5];
    if (cVar21 != '\x01') goto LAB_0379225c;
    fStack00000000000000c4 = fVar49;
    fVar49 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar2,1.0);
    plVar37 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(lVar32 + 0xf4)) {
    case 0:
      fVar49 = 1.0;
      *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xbc) = 0;
      *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x94) = 0;
      *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xe4) = 0x3f800000;
      break;
    case 1:
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        plVar35 = in_stack_000001c8 + lVar24 * 0x31;
        fVar44 = (fStack0000000000000158 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x14)) -
                 *(float *)(unaff_x19 + 0x360);
        fVar41 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      fVar44 = *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0xf);
      fVar41 = *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x19);
      fVar50 = fVar50 - fVar47;
      fVar54 = *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1e);
      *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xbc) =
           fVar49 + (*(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x14) - fVar47) / fVar50;
      *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x94) =
           fVar49 + (fVar44 - fVar47) / fVar50;
      *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xe4) =
           fVar49 + (fVar41 - fVar47) / fVar50;
      fVar49 = fVar49 + (fVar54 - fVar47) / fVar50;
      break;
    case 2:
      plVar35 = in_stack_000001c8 + lVar24 * 0x31;
      fVar41 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar44 = (fStack0000000000000158 + *(float *)(plVar35 + 0x14)) - *(float *)(unaff_x19 + 0x360)
      ;
LAB_03791dcc:
      *(float *)((long)plVar35 + 0xbc) = fVar49 + fVar44 / fVar41;
      *(float *)((long)plVar35 + 0x94) =
           fVar49 + ((fStack0000000000000158 + *(float *)(plVar35 + 0xf)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)((long)plVar35 + 0xe4) =
           fVar49 + ((fStack0000000000000158 + *(float *)(plVar35 + 0x19)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar49 = fVar49 + ((fStack0000000000000158 + *(float *)(plVar35 + 0x1e)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) = 0;
        *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) = 0x3f800000;
        *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1d) = 0;
        *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x22) = 0x3f800000;
        break;
      case 1:
        fVar44 = fVar49 + (*(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xa4) - fVar53) /
                          (fVar41 - fVar53);
        fVar41 = fVar49 + (*(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x7c) - fVar53) /
                          (fVar41 - fVar53);
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) = fVar44;
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) = fVar41;
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1d) = fVar44;
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x22) = fVar41;
        break;
      case 2:
        fVar50 = *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x7c);
        fVar44 = fVar49 + (*(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xa4) -
                          *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) = fVar44;
        fVar41 = *(float *)(unaff_x19 + 0x364);
        fVar54 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1d) = fVar44;
        fVar44 = fVar49 + (fVar50 - fVar41) / (fVar54 - fVar41);
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) = fVar44;
        *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x22) = fVar44;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        fVar51 = (float)in_stack_000001c8[3];
      }
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      fVar44 = *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x2d);
      fVar41 = (1.0 - (*(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) +
                      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13)) * fVar44) * 0.5;
      fVar54 = fVar49 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) * fVar44 + fVar41;
      fVar49 = fVar49 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) * fVar44 + fVar41;
      *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xbc) = fVar54;
      *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x94) = fVar54;
      *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xe4) = fVar49;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x10c) = fVar49;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) = 0;
      *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) = 0x3f800000;
      *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1d) = 0x3f800000;
      *(undefined4 *)(in_stack_000001c8 + lVar24 * 0x31 + 0x22) = 0;
      break;
    case 1:
      if ((uint)fVar48 < (uint)fVar51) {
        plVar35 = in_stack_000001c8 + lVar24 * 0x31;
        fVar49 = (*(float *)((long)plVar35 + 0xa4) - fVar40) / (fVar38 - fVar40);
        fVar44 = (*(float *)((long)plVar35 + 0x7c) - fVar40) / (fVar38 - fVar40);
        *(float *)(plVar35 + 0x18) = fVar49;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      plVar35 = in_stack_000001c8 + lVar24 * 0x31;
      fVar49 = (*(float *)((long)plVar35 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(plVar35 + 0x18) = fVar49;
      fVar44 = (*(float *)((long)plVar35 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(plVar35 + 0x13) = fVar44;
      *(float *)(plVar35 + 0x1d) = fVar44;
      *(float *)(plVar35 + 0x22) = fVar49;
      break;
    case 3:
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      fVar49 = *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xbc);
      fVar44 = *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xe4);
      fVar40 = *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x2d);
      fVar38 = (1.0 - (fVar49 + fVar44) / fVar40) * 0.5;
      fVar49 = fVar49 / fVar40 + fVar38;
      fVar38 = fVar44 / fVar40 + fVar38;
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) = fVar49;
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) = fVar38;
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x22) = fVar49;
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1d) = fVar38;
    }
    if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    fVar44 = *(float *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x16c) *
             (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)((long)in_stack_000001c8 + lVar24 * 0x188 + 100) == '\0') &&
       ((*(byte *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x19c) & 1) != 0)) {
      fVar44 = -fVar44;
    }
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x17) = fVar44;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x12) = fVar44;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1c) = fVar44;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x21) = fVar44;
    *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xbc) = 0x3f800000;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x18) = fVar44;
    *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x94) = 0x3f800000;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x13) = fVar44;
    *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0xe4) = 0x3f800000;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1d) = fVar44;
    *(undefined4 *)((long)in_stack_000001c8 + lVar24 * 0x188 + 0x10c) = 0x3f800000;
    *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x22) = fVar44;
    fVar49 = fStack00000000000000c4;
LAB_0379225c:
    if (((int)fVar48 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if ((uint)fVar48 < (uint)fVar51) {
          bVar9 = *(uint *)(in_stack_000001c8 + lVar24 * 0x31 + 0xe) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      fVar51 = SUB84(_fStack0000000000000190,0);
      fVar38 = (float)((ulong)_fStack0000000000000190 >> 0x20);
      in_stack_000001c8[lVar24 * 0x31 + 0x14] =
           CONCAT44(fVar51 + (float)((ulong)in_stack_000001c8[lVar24 * 0x31 + 0x14] >> 0x20),
                    fVar52 + (float)in_stack_000001c8[lVar24 * 0x31 + 0x14]);
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x15) =
           fVar38 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x15);
      in_stack_000001c8[lVar24 * 0x31 + 0xf] =
           CONCAT44(fVar51 + (float)((ulong)in_stack_000001c8[lVar24 * 0x31 + 0xf] >> 0x20),
                    fVar52 + (float)in_stack_000001c8[lVar24 * 0x31 + 0xf]);
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x10) =
           fVar38 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x10);
      in_stack_000001c8[lVar24 * 0x31 + 0x19] =
           CONCAT44(fVar51 + (float)((ulong)in_stack_000001c8[lVar24 * 0x31 + 0x19] >> 0x20),
                    fVar52 + (float)in_stack_000001c8[lVar24 * 0x31 + 0x19]);
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1a) =
           fVar38 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1a);
      in_stack_000001c8[lVar24 * 0x31 + 0x1e] =
           CONCAT44(fVar51 + (float)((ulong)in_stack_000001c8[lVar24 * 0x31 + 0x1e] >> 0x20),
                    fVar52 + (float)in_stack_000001c8[lVar24 * 0x31 + 0x1e]);
      *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1f) =
           fVar38 + *(float *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1f);
    }
    else {
LAB_037922d4:
      bVar9 = false;
LAB_037922d8:
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      if (bVar9) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar37);
        DAT_0411f172 = '\x01';
        fVar51 = *(float *)(in_stack_000001c8 + 3);
      }
      lVar32 = (*(long **)(*plVar37 + 0xb8))[1];
      in_stack_000001c8[lVar24 * 0x31 + 0x14] = **(long **)(*plVar37 + 0xb8);
      *(int *)(in_stack_000001c8 + lVar24 * 0x31 + 0x15) = (int)lVar32;
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      lVar32 = (*(long **)(*plVar37 + 0xb8))[1];
      in_stack_000001c8[lVar24 * 0x31 + 0xf] = **(long **)(*plVar37 + 0xb8);
      *(int *)(in_stack_000001c8 + lVar24 * 0x31 + 0x10) = (int)lVar32;
      lVar32 = (*(long **)(*plVar37 + 0xb8))[1];
      in_stack_000001c8[lVar24 * 0x31 + 0x19] = **(long **)(*plVar37 + 0xb8);
      *(int *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1a) = (int)lVar32;
      lVar32 = (*(long **)(*plVar37 + 0xb8))[1];
      in_stack_000001c8[lVar24 * 0x31 + 0x1e] = **(long **)(*plVar37 + 0xb8);
      *(int *)(in_stack_000001c8 + lVar24 * 0x31 + 0x1f) = (int)lVar32;
      *(undefined1 *)(plVar36 + lVar24 * 0x31 + 0x34) = 0;
    }
    plVar35 = in_stack_000001e8;
    iVar14 = FUN_0368e42c(0);
    lVar32 = in_stack_000001e0;
    if (iVar14 == 1) {
      cVar34 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar34 = '\0';
    }
    if (cVar21 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar32 = in_stack_000001e0;
      FUN_037a429c(fStack0000000000000170,cVar34 != '\0',in_stack_000001e0,lVar27,0);
    }
    else if (cVar21 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(fStack0000000000000170,cVar34 != '\0',lVar32,lVar27,0);
    }
LAB_037924bc:
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar28 = lVar28 + lVar24 * 0x188;
    uVar16 = *(undefined8 *)(lVar28 + 0x124);
    fVar51 = SUB84(_fStack0000000000000190,0);
    fVar38 = (float)((ulong)_fStack0000000000000190 >> 0x20);
    *(undefined8 *)(lVar28 + 0x124) =
         CONCAT44(fVar51 + (float)((ulong)uVar16 >> 0x20),fVar52 + (float)uVar16);
    *(float *)(lVar28 + 300) = fVar38 + *(float *)(lVar28 + 300);
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar28 = lVar28 + lVar24 * 0x188;
    *(ulong *)(lVar28 + 0x118) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar28 + 0x118) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar28 + 0x118));
    *(float *)(lVar28 + 0x120) = fVar38 + *(float *)(lVar28 + 0x120);
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar28 = lVar28 + lVar24 * 0x188;
    *(ulong *)(lVar28 + 0x130) =
         CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar28 + 0x130) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar28 + 0x130));
    *(float *)(lVar28 + 0x138) = fVar38 + *(float *)(lVar28 + 0x138);
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar28 = lVar28 + lVar24 * 0x188;
    *(float *)(lVar28 + 0x13c) = fVar52 + *(float *)(lVar28 + 0x13c);
    *(ulong *)(lVar28 + 0x140) =
         CONCAT44(fVar38 + (float)((ulong)*(undefined8 *)(lVar28 + 0x140) >> 0x20),
                  fVar51 + (float)*(undefined8 *)(lVar28 + 0x140));
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    fVar38 = *(float *)(lVar28 + 0x18);
    if ((uint)fVar38 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    lVar25 = lVar28 + lVar24 * 0x188;
    *(float *)(lVar25 + 0x148) = fVar52 + *(float *)(lVar25 + 0x148);
    *(float *)(lVar25 + 0x164) = fVar52 + *(float *)(lVar25 + 0x164);
    *(float *)(lVar25 + 0x154) = fVar51 + *(float *)(lVar25 + 0x154);
    uVar16 = *(undefined8 *)(lVar25 + 0x14c);
    *(undefined8 *)(lVar25 + 0x14c) =
         CONCAT44(fVar51 + (float)((ulong)uVar16 >> 0x20),fVar51 + (float)uVar16);
    fVar40 = fStack0000000000000168;
    if (uVar2 == uVar12) {
      fVar38 = (float)((int)*in_stack_000001d0 - 1);
      if (fVar48 == fVar38) goto LAB_037926b4;
    }
    else {
      lVar25 = *(long *)(lVar27 + 0x48);
      if (lVar25 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar25 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar29 = (long)(int)uVar12;
      lVar33 = lVar25 + lVar29 * 0x60;
      fVar41 = fVar51 + *(float *)(lVar33 + 0x58);
      *(ulong *)(lVar33 + 0x50) =
           CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar33 + 0x50) >> 0x20),
                    fVar51 + (float)*(undefined8 *)(lVar33 + 0x50));
      *(float *)(lVar33 + 0x58) = fVar41;
      *(float *)(lVar33 + 0x5c) = fVar52 + *(float *)(lVar33 + 0x5c);
      if ((uint)fVar38 <= (uint)*(float *)(lVar33 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar42 = *(undefined4 *)(lVar28 + (long)(int)*(float *)(lVar33 + 0x38) * 0x188 + 0x124);
      lVar25 = lVar25 + lVar29 * 0x60;
      *(float *)(lVar25 + 0x74) = fVar41;
      *(undefined4 *)(lVar25 + 0x70) = uVar42;
      lVar28 = *(long *)(lVar27 + 0x48);
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar25 = *plVar35;
      if (lVar25 == 0) goto LAB_03793c9c;
      uVar12 = *(uint *)(lVar28 + lVar29 * 0x60 + 0x44);
      if (*(uint *)(lVar25 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
      lVar28 = lVar28 + lVar29 * 0x60;
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar25 + (long)(int)uVar12 * 0x188 + 0x130);
      *(undefined4 *)(lVar28 + 0x7c) = *(undefined4 *)(lVar28 + 0x50);
      fVar38 = (float)((int)*in_stack_000001d0 - 1);
LAB_037926b4:
      if (fVar48 == fVar38) {
        lVar28 = *(long *)(lVar27 + 0x48);
        if (lVar28 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar25 = lVar28 + _fStack00000000000001a0 * 0x60;
        fVar38 = fVar51 + *(float *)(lVar25 + 0x58);
        *(ulong *)(lVar25 + 0x50) =
             CONCAT44(fVar51 + (float)((ulong)*(undefined8 *)(lVar25 + 0x50) >> 0x20),
                      fVar51 + (float)*(undefined8 *)(lVar25 + 0x50));
        *(float *)(lVar25 + 0x58) = fVar38;
        *(float *)(lVar25 + 0x5c) = fVar52 + *(float *)(lVar25 + 0x5c);
        lVar29 = *plVar35;
        if (lVar29 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar25 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar42 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar25 + 0x38) * 0x188 + 0x124);
        lVar28 = lVar28 + _fStack00000000000001a0 * 0x60;
        *(float *)(lVar28 + 0x74) = fVar38;
        *(undefined4 *)(lVar28 + 0x70) = uVar42;
        lVar28 = *(long *)(lVar27 + 0x48);
        if (lVar28 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar25 = *plVar35;
        if (lVar25 == 0) goto LAB_03793c9c;
        uVar12 = *(uint *)(lVar28 + _fStack00000000000001a0 * 0x60 + 0x44);
        if (*(uint *)(lVar25 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + _fStack00000000000001a0 * 0x60;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar25 + (long)(int)uVar12 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar28 + 0x7c) = *(undefined4 *)(lVar28 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    fVar51 = in_stack_000001d8._4_4_;
    uVar43 = FUN_026b82c4(in_stack_000001d8._4_4_,0);
    if (((((uVar43 & 1) == 0) && (1 < (int)fVar51 - 0x2010U)) && (fVar51 != 2.42425e-43)) &&
       (fVar51 != 6.30584e-44)) {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        if (in_stack_000001b8._4_4_ == 1.4013e-45) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          fVar51 = in_stack_000001d8._4_4_;
          uVar12 = FUN_026b81f8(in_stack_000001d8._4_4_,0);
          if (((fVar51 == 1.14949e-41) || ((((uint)fStack000000000000017c | uVar12 ^ 1) & 1) != 0))
             || (*in_stack_000001d0 == 1.4013e-45)) goto LAB_037930d8;
        }
        _fStack0000000000000168 = _fStack0000000000000168 & 0xffffffff;
      }
      else {
        if (((in_stack_000001b8._4_4_ != 1.4013e-45) &&
            ((int)fVar48 < (int)(*(uint *)(in_stack_000001c8 + 3) - 1))) &&
           (((int)fVar48 < (int)*in_stack_000001d0 &&
            ((in_stack_000001d8._4_4_ == 1.15145e-41 || (in_stack_000001d8._4_4_ == 5.46506e-44)))))
           ) {
          if (*(uint *)(in_stack_000001c8 + 3) <= (int)in_stack_000001b8._4_4_ - 2U)
          goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)((long)in_stack_000001c8 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_026b82c4(uVar4,0);
          if ((uVar43 & 1) != 0) {
            if ((uint)*(float *)(in_stack_000001c8 + 3) <= (uint)in_stack_000001b8._4_4_)
            goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)((long)in_stack_000001c8 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar43 = FUN_026b82c4(uVar4,0);
            if ((uVar43 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (fVar48 == (float)((int)*in_stack_000001d0 - 1U)) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_026b82c4(in_stack_000001d8._4_4_,0);
          if ((uVar43 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)((int)fStack0000000000000178 - 1);
        }
        lVar32 = *in_stack_000000f8;
        if (lVar32 == 0) goto LAB_03793c9c;
        uVar12 = *(uint *)(lVar27 + 0x1c);
        iVar14 = *(int *)(lVar32 + 0x18);
        if (iVar14 < (int)(uVar12 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar36 = in_stack_000000f8;
          FUN_01ff37b8(in_stack_000000f8,iVar14 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar32 = *plVar36;
          if (lVar32 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + (long)(int)uVar12 * 0xc;
        *(float *)(lVar32 + 0x20) = fVar40;
        *(float *)(lVar32 + 0x24) = fStack0000000000000170;
        *(int *)(lVar32 + 0x28) = ((int)fStack0000000000000170 - (int)fVar40) + 1;
        lVar32 = *(long *)(lVar27 + 0x48);
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + _fStack00000000000001a0 * 0x60;
        _fStack0000000000000168 = _fStack0000000000000168 & 0xffffffff;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
        lVar32 = in_stack_000001e0;
      }
    }
    else {
      if ((_fStack0000000000000168 & 0x100000000) == 0) {
        fVar40 = fVar48;
      }
      if (fVar48 == (float)((int)*in_stack_000001d0 - 1U)) {
        lVar32 = *in_stack_000000f8;
        if (lVar32 == 0) goto LAB_03793c9c;
        uVar12 = *(uint *)(lVar27 + 0x1c);
        iVar14 = *(int *)(lVar32 + 0x18);
        if (iVar14 < (int)(uVar12 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          plVar36 = in_stack_000000f8;
          FUN_01ff37b8(in_stack_000000f8,iVar14 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar32 = *plVar36;
          if (lVar32 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar32 + 0x18) <= uVar12) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + (long)(int)uVar12 * 0xc;
        *(float *)(lVar32 + 0x20) = fVar40;
        *(float *)(lVar32 + 0x24) = fStack0000000000000170;
        *(int *)(lVar32 + 0x28) = (int)in_stack_000001b8._4_4_ - (int)fVar40;
        lVar32 = *(long *)(lVar27 + 0x48);
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + _fStack00000000000001a0 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar32 + 0x34) = *(int *)(lVar32 + 0x34) + 1;
        lVar32 = in_stack_000001e0;
      }
LAB_0379289c:
      _fStack0000000000000168 = CONCAT44(1,fStack0000000000000168);
    }
    fVar51 = fStack000000000000017c;
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    fVar52 = *(float *)(lVar28 + 0x18);
    if ((uint)fVar52 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar28 + lVar24 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if ((_fStack0000000000000180 & 0x100000000) != 0) {
LAB_037928d0:
        if ((int)in_stack_000001b8._4_4_ - 2U < (uint)fVar52) {
          uVar42 = *(undefined4 *)((long)in_stack_000001a8 + lVar28 + -0x354);
          uVar39 = *(undefined4 *)((long)in_stack_000001a8 + lVar28 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      _fStack0000000000000180 = _fStack0000000000000180 & 0xffffffff;
    }
    else {
      lVar25 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar25 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      fVar52 = *(float *)(lVar28 + lVar24 * 0x188 + 0x70);
      *(int *)(lVar28 + lVar24 * 0x188 + 0x178) =
           *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(lVar32 + 0xd8) < (int)fVar48) || (*(int *)(lVar32 + 0xe0) < (int)uVar2)) {
        bVar9 = true;
      }
      else if (*(int *)(lVar32 + 0x74) == 5) {
        bVar9 = (int)fVar52 + 1 != *(int *)(lVar32 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      bVar10 = in_stack_000001d8._4_4_ != 1.14949e-41;
      if (bVar10 && ((uint)fStack000000000000017c & 1) == 0) {
        fVar38 = *(float *)(lVar28 + lVar24 * 0x188 + 0x16c);
        if (fVar49 <= fVar38) {
          fVar49 = fVar38;
        }
        fVar38 = fStack000000000000015c;
        if (fVar52 != fStack00000000000000c0) {
          fVar38 = fStack00000000000000ac;
        }
        if (_fStack0000000000000188 == 0) goto LAB_03793c9c;
        fVar41 = *(float *)(lVar28 + lVar24 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar44)) {
          fStack0000000000000174 = ABS(fVar44);
        }
        FUN_03779650(&stack0x000016a0,_fStack0000000000000188,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar54 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar41 = fVar41 + fVar49 * fVar54;
        fStack00000000000000c0 = fVar52;
        fStack000000000000015c = fVar38;
        if (fVar41 <= fVar38) {
          fStack000000000000015c = fVar41;
        }
      }
      plVar35 = in_stack_000001e8;
      if ((((in_stack_000001d8._4_4_ == 1.82169e-44) ||
           (((uint)in_stack_000001d8._4_4_ & 0xfffe) == 10)) ||
          ((int)(float)_fStack00000000000001b0 < (int)fVar48)) ||
         ((_fStack0000000000000180 & 0x100000000) != 0 || bVar9)) {
LAB_03792a80:
        lVar32 = in_stack_000001e0;
        if ((_fStack0000000000000180 & 0x100000000) == 0) goto LAB_03792a8c;
      }
      else {
        if (fVar48 == (float)_fStack00000000000001b0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
          if ((uVar43 & 1) != 0) goto LAB_03792a80;
        }
        lVar32 = *plVar35;
        if (lVar32 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar32 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + lVar24 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar32 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar32 + 0x124);
        bVar8 = fVar49 != 0.0;
        fVar52 = fStack00000000000000d8;
        if (bVar8) {
          fVar52 = fVar49;
        }
        fVar49 = fVar52;
        in_stack_00000100 = (undefined8 *)(ulong)*(uint *)(lVar32 + 0x174);
        fStack00000000000000cc = 0.0;
        fVar52 = fVar44;
        if (bVar8) {
          fVar52 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar52;
      }
      lVar32 = in_stack_000001e0;
      if (*in_stack_000001d0 == 1.4013e-45) {
        lVar28 = *plVar35;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + lVar24 * 0x188;
        uVar42 = *(undefined4 *)(lVar28 + 0x130);
        uVar39 = *(undefined4 *)(lVar28 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,fStack00000000000000cc,uVar42,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar39);
      }
      else {
        if ((fVar48 == (float)_fStack0000000000000150) ||
           ((int)(float)_fStack00000000000001b0 <= (int)fVar48)) {
          lVar28 = *plVar35;
          if (lVar28 != 0) {
            lVar25 = lVar24;
            fVar49 = fVar48;
            if (!bVar10 || ((uint)fVar51 & 1) != 0) {
              lVar25 = _fStack00000000000001b0;
              fVar49 = (float)_fStack00000000000001b0;
            }
            if ((uint)fVar49 < (uint)*(float *)(lVar28 + 0x18)) {
              lVar28 = lVar28 + lVar25 * 0x188;
              uVar42 = *(undefined4 *)(lVar28 + 0x130);
              uVar39 = *(undefined4 *)(lVar28 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar9) {
          lVar28 = *plVar35;
          if (lVar28 != 0) {
            fVar52 = *(float *)(lVar28 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)((int)*in_stack_000001d0 - 1U) <= (int)fVar48) {
LAB_03793294:
          _fStack0000000000000180 = CONCAT44(1,fStack0000000000000180);
          goto LAB_03792b70;
        }
        lVar28 = *plVar35;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)in_stack_000001b8._4_4_)
        goto thunk_FUN_01ab6c44;
        uVar43 = FUN_03779528((ulong)in_stack_00000100 & 0xffffffff,
                              *(undefined4 *)(lVar28 + (long)in_stack_000001a8),0);
        plVar35 = in_stack_000001e8;
        if ((uVar43 & 1) != 0) goto LAB_03793294;
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + lVar24 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,fStack00000000000000cc,
                     *(undefined4 *)(lVar28 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar28 + 0x16c));
        plVar35 = in_stack_000001e8;
      }
      fVar49 = 0.0;
      _fStack0000000000000180 = _fStack0000000000000180 & 0xffffffff;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    if (_fStack0000000000000188 == 0) goto LAB_03793c9c;
    uVar12 = *(uint *)(lVar28 + lVar24 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,_fStack0000000000000188,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar51 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar12 >> 6 & 1) == 0) {
      if ((_fStack0000000000000180 & 1) != 0) {
        lVar28 = *plVar35;
        if (lVar28 != 0) {
          if ((int)in_stack_000001b8._4_4_ - 2U < *(uint *)(lVar28 + 0x18)) {
            fVar52 = *(float *)((long)in_stack_000001a8 + lVar28 + -0x334);
            uVar42 = *(undefined4 *)((long)in_stack_000001a8 + lVar28 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      _fStack0000000000000180 = _fStack0000000000000180 & 0xffffffff00000000;
    }
    else {
      lVar28 = *plVar35;
      if ((lVar28 == 0) || (lVar25 = *(long *)(unaff_x19 + 0x15b8), lVar25 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar28 + lVar24 * 0x188 + 0x180) =
           *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(lVar32 + 0xd8) < (int)fVar48) || (*(int *)(lVar32 + 0xe0) < (int)uVar2)) {
        uVar12 = 1;
      }
      else if (*(int *)(lVar32 + 0x74) == 5) {
        uVar12 = (uint)(*(int *)(lVar28 + lVar24 * 0x188 + 0x70) + 1 != *(int *)(lVar32 + 0xf0));
      }
      else {
        uVar12 = 0;
      }
      if ((((in_stack_000001d8._4_4_ == 1.82169e-44) ||
           (((uint)in_stack_000001d8._4_4_ & 0xfffe) == 10)) ||
          ((int)(float)_fStack00000000000001b0 < (int)fVar48)) ||
         ((~(uint)fStack0000000000000180 & (uVar12 ^ 0xffffffff) & 1) == 0)) {
LAB_03792cf0:
        if ((_fStack0000000000000180 & 1) == 0) goto LAB_03792cf8;
      }
      else {
        if (fVar48 == (float)_fStack00000000000001b0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
          if ((uVar43 & 1) != 0) goto LAB_03792cf0;
          lVar28 = *plVar35;
          if (lVar28 == 0) goto LAB_03793c9c;
        }
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + lVar24 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar28 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar28 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar28 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar28 + 0x150);
        _fStack0000000000000108 = (ulong)*(uint *)(lVar28 + 0x17c);
        in_stack_000000e0 = fVar51 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        fStack00000000000000dc = 0.0;
      }
      fVar52 = *in_stack_000001d0;
      if (fVar52 == 1.4013e-45) {
LAB_03792ef4:
        lVar25 = *plVar35;
        if (lVar25 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar25 + 0x18) <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        lVar25 = lVar25 + lVar24 * 0x188;
      }
      else {
        lVar28 = lVar24;
        if (fVar48 == (float)_fStack0000000000000150) {
          lVar25 = *plVar35;
          if (lVar25 == 0) goto LAB_03793c9c;
          fVar52 = fVar48;
          if (((uint)(in_stack_000001d8._4_4_ != 1.14949e-41) & ((uint)fStack000000000000017c ^ 1))
              == 0) {
            lVar28 = _fStack00000000000001b0;
            fVar52 = (float)_fStack00000000000001b0;
          }
          if ((uint)*(float *)(lVar25 + 0x18) <= (uint)fVar52) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)fVar52 <= (int)fVar48) {
LAB_03792fdc:
            if ((int)fVar48 < (int)fVar52) {
              iVar14 = FUN_036d3364(_fStack0000000000000188,0);
              if ((uint)*(float *)(in_stack_000001c8 + 3) <= (uint)in_stack_000001b8._4_4_)
              goto thunk_FUN_01ab6c44;
              lVar28 = *(long *)((long)in_stack_000001c8 + (long)in_stack_000001a8 + -0x134);
              if (lVar28 == 0) goto LAB_03793c9c;
              iVar13 = FUN_036d3364(lVar28,0);
              plVar35 = in_stack_000001e8;
              if (iVar14 != iVar13) goto LAB_03792ef4;
            }
            if (uVar12 == 0) {
              _fStack0000000000000180 = CONCAT44(fStack0000000000000184,1);
              goto LAB_03793338;
            }
            lVar28 = *plVar35;
            if (lVar28 != 0) {
              if ((int)in_stack_000001b8._4_4_ - 2U < *(uint *)(lVar28 + 0x18)) {
                fVar52 = *(float *)((long)in_stack_000001a8 + lVar28 + -0x334);
                uVar42 = *(undefined4 *)((long)in_stack_000001a8 + lVar28 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar25 = *plVar35;
          if (lVar25 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar25 + 0x18) <= (uint)in_stack_000001b8._4_4_)
          goto thunk_FUN_01ab6c44;
          if (*(float *)((long)in_stack_000001a8 + lVar25 + -0x10c) == fStack00000000000000a8) {
            fVar52 = *(float *)((long)in_stack_000001a8 + lVar25 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar43 = FUN_037a2200(SUB84(_fStack0000000000000190,0) + fVar52,in_stack_000000a0._4_4_,
                                  0);
            if ((uVar43 & 1) != 0) {
              fVar52 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar25 = *plVar35;
            if (lVar25 == 0) goto LAB_03793c9c;
          }
          fVar52 = fVar48;
          if ((int)(float)_fStack00000000000001b0 < (int)fVar48) {
            lVar28 = _fStack00000000000001b0;
            fVar52 = (float)_fStack00000000000001b0;
          }
          if ((uint)*(float *)(lVar25 + 0x18) <= (uint)fVar52) goto thunk_FUN_01ab6c44;
        }
        lVar25 = lVar25 + lVar28 * 0x188;
      }
      fVar52 = *(float *)(lVar25 + 0x150);
      uVar42 = *(undefined4 *)(lVar25 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,in_stack_000000e0,fStack00000000000000dc,uVar42,
                   fStack00000000000000f0 * fVar51 + fVar52,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      _fStack0000000000000180 = _fStack0000000000000180 & 0xffffffff00000000;
    }
LAB_03793338:
    lVar28 = *plVar35;
    if (lVar28 == 0) goto LAB_03793c9c;
    fVar51 = (float)*(undefined8 *)(lVar28 + 0x18);
    if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
    _fStack0000000000000168 = CONCAT44(fStack000000000000016c,fVar40);
    if ((*(byte *)(lVar28 + lVar24 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if ((uStack0000000000000160 & 1) != 0) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,fStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,fStack0000000000000124);
      }
LAB_03793428:
      uVar31 = 0;
      fVar38 = in_stack_000001b8._4_4_;
    }
    else {
      if ((*(int *)(lVar32 + 0xd8) < (int)fVar48) || (*(int *)(lVar32 + 0xe0) < (int)uVar2)) {
        bVar9 = true;
      }
      else if (*(int *)(lVar32 + 0x74) == 5) {
        bVar9 = *(int *)(lVar28 + lVar24 * 0x188 + 0x70) + 1 != *(int *)(lVar32 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      fVar52 = fStack0000000000000128;
      if ((uStack0000000000000160 & 1) == 0) {
        if (((in_stack_000001d8._4_4_ == 1.82169e-44) ||
            (((uint)in_stack_000001d8._4_4_ & 0xfffe) == 10)) ||
           (((int)(float)_fStack00000000000001b0 < (int)fVar48 || (bVar9)))) goto LAB_03793428;
        if (fVar48 == (float)_fStack00000000000001b0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar43 = FUN_026b97f8(in_stack_000001d8._4_4_,0);
          if ((uVar43 & 1) != 0) goto LAB_03793428;
        }
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar32 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar6;
        }
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        fVar51 = (float)*(undefined8 *)(lVar28 + 0x18);
        if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
        pfVar30 = *(float **)(lVar32 + 0xb8);
        in_stack_00000140._4_4_ = pfVar30[1];
        fStack000000000000012c = pfVar30[2];
        fStack0000000000000130 = pfVar30[3];
        fStack0000000000000124 = 0.0;
        fVar52 = *pfVar30;
      }
      if ((uint)fVar51 <= (uint)fVar48) goto thunk_FUN_01ab6c44;
      lVar28 = lVar28 + lVar24 * 0x188;
      in_stack_000001d8._4_4_ = *(float *)(lVar28 + 0x130);
      fVar50 = *(float *)(lVar28 + 0x124);
      fVar51 = *(float *)(lVar28 + 0x148);
      fVar41 = *(float *)(lVar28 + 0x14c);
      fVar54 = *(float *)(lVar28 + 0x154);
      fVar40 = *(float *)(lVar28 + 0x164);
      uVar43 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      fVar38 = in_stack_000001b8._4_4_;
      lVar24 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar43 & 1) == 0) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar24);
        }
        uVar43 = _uStack00000000000000b8;
        fVar47 = (float)FUN_037a1dd8(_uStack00000000000000b8,0);
        bVar10 = ((uint)fStack000000000000017c & 1) == 0;
        if (bVar10) {
          fVar51 = fVar50;
        }
        if (bVar10) {
          fVar40 = in_stack_000001d8._4_4_;
        }
        fStack0000000000000128 = fVar52;
        if (fVar51 - fVar47 <= fVar52) {
          fStack0000000000000128 = fVar51 - fVar47;
        }
        fVar51 = (float)FUN_037a1de0(uVar43,0);
        if (fStack000000000000012c <= fVar40 + fVar51) {
          fStack000000000000012c = fVar40 + fVar51;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar51 = (float)FUN_037a1df0(uVar43,0);
        if (fVar54 - fVar51 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar54 - fVar51;
        }
        fVar51 = (float)FUN_037a1de8(uVar43,0);
        if (fStack0000000000000130 <= fVar41 + fVar51) {
          fStack0000000000000130 = fVar41 + fVar51;
        }
      }
      else {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar24);
        }
        fVar47 = (float)FUN_037a1de0(_uStack00000000000000b8,0);
        if (((uint)fStack000000000000017c & 1) == 0) {
          fVar51 = fVar50;
        }
        fVar50 = in_stack_00000140._4_4_;
        if (fVar54 <= in_stack_00000140._4_4_) {
          fVar50 = fVar54;
        }
        fStack0000000000000128 = (fVar51 + (fStack000000000000012c - fVar47)) * 0.5;
        fVar51 = fStack0000000000000130;
        if (fStack0000000000000130 <= fVar41) {
          fVar51 = fVar41;
        }
        FUN_0379dd0c(fVar52,fVar50,fStack0000000000000124,fStack0000000000000128,fVar51,
                     fStack0000000000000124);
        puVar6 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar43 = in_stack_00000098;
        fVar51 = (float)FUN_037a1df0(in_stack_00000098,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar54 - fVar51;
        fVar51 = (float)FUN_037a1de0(uVar43,0);
        fVar52 = (float)FUN_037a1de8(uVar43,0);
        if (((uint)fStack000000000000017c & 1) == 0) {
          fVar40 = in_stack_000001d8._4_4_;
        }
        fStack000000000000012c = fVar40 + fVar51;
        fStack0000000000000124 = 0.0;
        fStack0000000000000130 = fVar41 + fVar52;
      }
      if ((((*in_stack_000001d0 == 1.4013e-45) || (fVar48 == (float)_fStack0000000000000150)) ||
          ((int)_fStack00000000000001b0 <= (int)fVar48)) || (bVar9)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,fStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,fStack0000000000000124);
        uVar31 = 0;
      }
      else {
        uVar31 = 1;
      }
    }
    fVar48 = *in_stack_000001d0;
    fStack0000000000000178 = (float)((int)fStack0000000000000178 + 1);
    fVar51 = (float)((int)fVar38 + 1);
    in_stack_000001a8 = in_stack_000001a8 + 0x31;
    uVar12 = uVar2;
  } while ((int)fVar38 < (int)fVar48);
  iVar14 = uVar2 + 1;
  plVar36 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
  iVar13 = iStack0000000000000138;
LAB_03793a5c:
  lVar24 = in_stack_00000110;
  *(float *)(lVar27 + 0x10) = fVar48;
  uVar42 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(lVar27 + 0x24) = iVar14;
  if ((int)fVar48 < 1 || iVar13 == 0) {
    iVar13 = 1;
  }
  *(int *)(lVar27 + 0x1c) = iVar13;
  *(undefined4 *)(lVar27 + 0x14) = uVar42;
  *(int *)(lVar27 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(lVar27 + 0x2c)) {
    uVar43 = 1;
    lVar32 = 0x70;
    do {
      lVar28 = *(long *)(lVar27 + 0x58);
      if (lVar28 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar36 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar28 + 0x18) <= uVar43) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar28 + lVar32,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar28 = *(long *)(lVar27 + 0x58);
        if (lVar28 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar36 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar28 + 0x18) <= uVar43) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar28 + lVar32,1,0);
      }
      uVar43 = uVar43 + 1;
      lVar32 = lVar32 + 0x50;
    } while ((long)uVar43 < (long)*(int *)(lVar27 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(lVar24 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


