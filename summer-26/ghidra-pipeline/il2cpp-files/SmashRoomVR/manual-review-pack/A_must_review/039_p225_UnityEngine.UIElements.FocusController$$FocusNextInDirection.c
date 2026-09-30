/*
FUNCTION_NAME: UnityEngine.UIElements.FocusController$$FocusNextInDirection
ENTRY_POINT: 039845a8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_4
*/


void UnityEngine_UIElements_FocusController__FocusNextInDirection(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  uint uVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  float *pfVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long unaff_x19;
  char cVar38;
  long unaff_x20;
  long unaff_x21;
  uint uVar39;
  long *plVar40;
  undefined8 uVar41;
  char *unaff_x24;
  uint uVar42;
  undefined8 unaff_x25;
  uint unaff_w26;
  long lVar43;
  ulong unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  ulong uVar55;
  float fVar56;
  undefined8 uVar57;
  ulong uVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float unaff_s9;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s13;
  float fVar68;
  float fVar69;
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
  float fStack00000000000000f4;
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
  
code_r0x039845a8:
  memcpy(in_stack_00000070,&stack0x00000230,0x398);
  thunk_FUN_01b4f09c(in_stack_00000028,0);
  *(float *)(unaff_x19 + 0xaf0) = unaff_s9 + *(float *)(unaff_x19 + 0xaf0);
  *(float *)(unaff_x19 + 0xb24) = unaff_s9 + *(float *)(unaff_x19 + 0xb24);
  uVar41 = *(undefined8 *)PTR_DAT_03dad340;
  memcpy(&stack0x000012a0,in_stack_00000070,0x398);
  FUN_021c3068(unaff_x25,&stack0x000012a0,uVar41);
LAB_03984620:
  uVar13 = (uint)unaff_x20;
  fVar52 = *(float *)(unaff_x19 + 0x2e0);
  *(undefined1 *)(unaff_x19 + 0x37c) = 0;
  fVar61 = *(float *)(unaff_x19 + 0x33c) - fVar52;
  fVar53 = *(float *)(unaff_x19 + 0x378);
  if (fVar61 <= *(float *)(unaff_x19 + 0x378)) {
    fVar53 = fVar61;
  }
  *(float *)(unaff_x19 + 0x378) = fVar53;
  fVar56 = *(float *)(unaff_x19 + 0x338);
  if (in_stack_00001294 == '\0') {
    in_stack_00001298 = fVar53;
  }
  if ((*(char *)(unaff_x21 + 0xe8) != '\0') &&
     ((*(int *)(unaff_x21 + 0xd8) <= (int)*unaff_x29 ||
      (*(int *)(unaff_x21 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
    in_stack_00001294 = '\x01';
  }
  lVar26 = *(long *)(in_stack_000001c0 + 0x48);
  if (lVar26 == 0) goto thunk_FUN_01b48178;
  uVar28 = *(uint *)(unaff_x19 + 0x340);
  if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
  iVar17 = *(int *)(unaff_x19 + 0x328);
  lVar36 = lVar26 + (long)(int)uVar28 * 0x60;
  *(int *)(lVar36 + 0x38) = iVar17;
  uVar35 = *(uint *)(unaff_x19 + 0x328);
  if (iVar17 <= (int)*(uint *)(unaff_x19 + 0x330)) {
    uVar35 = *(uint *)(unaff_x19 + 0x330);
  }
  *(uint *)(unaff_x19 + 0x330) = uVar35;
  *(uint *)(lVar36 + 0x3c) = uVar35;
  iVar16 = *(int *)(unaff_x19 + 0x324);
  *(int *)(unaff_x19 + 0x32c) = iVar16;
  *(int *)(lVar36 + 0x40) = iVar16;
  iVar14 = *(int *)(unaff_x19 + 0x330);
  if ((int)uVar35 <= *(int *)(unaff_x19 + 0x334)) {
    iVar14 = *(int *)(unaff_x19 + 0x334);
  }
  *(int *)(unaff_x19 + 0x334) = iVar14;
  *(int *)(lVar36 + 0x44) = iVar14;
  *(int *)(lVar36 + 0x24) = (iVar16 - iVar17) + 1;
  *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
  *(undefined4 *)(lVar36 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar36 + 0x18) <= uVar35) goto LAB_03988250;
  iVar17 = (int)unaff_x27;
  uVar48 = *(undefined4 *)(lVar36 + (long)(int)uVar35 * (long)iVar17 + 0x124);
  lVar26 = lVar26 + (long)(int)uVar28 * 0x60;
  *(float *)(lVar26 + 0x74) = fVar61;
  *(undefined4 *)(lVar26 + 0x70) = uVar48;
  lVar26 = *(long *)(in_stack_000001c0 + 0x48);
  if (lVar26 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto thunk_FUN_01b48178;
  if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03988250;
  uVar48 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
  fVar56 = fVar56 - fVar52;
  lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
  *(float *)(lVar26 + 0x7c) = fVar56;
  *(undefined4 *)(lVar26 + 0x78) = uVar48;
  lVar26 = *(long *)(in_stack_000001c0 + 0x48);
  if (lVar26 == 0) goto thunk_FUN_01b48178;
  uVar28 = *(uint *)(unaff_x19 + 0x340);
  if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
  lVar36 = lVar26 + (long)(int)uVar28 * 0x60;
  *(float *)(lVar36 + 0x48) = *(float *)(lVar36 + 0x78) - unaff_s13 * in_stack_000001a8;
  *(float *)(lVar36 + 0x60) = fStack0000000000000174;
  if (*(int *)(lVar36 + 0x24) == 1) {
    *(undefined4 *)(lVar26 + (long)(int)uVar28 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
  fVar53 = (float)FUN_0396df4c(*in_stack_000001c8,0);
  lVar26 = *in_stack_000001e8;
  if (lVar26 == 0) goto thunk_FUN_01b48178;
  lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x334);
  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto LAB_03988250;
  lVar29 = *(long *)(in_stack_000001c0 + 0x48);
  if (lVar29 == 0) goto thunk_FUN_01b48178;
  uVar28 = *(uint *)(unaff_x19 + 0x340);
  if (((*(char *)(lVar26 + lVar36 * unaff_x27 + 0x1a0) == '\0') &&
      (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
      *(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
     (uVar35 = (uint)*(undefined8 *)(lVar29 + 0x18), uVar35 <= uVar28)) goto LAB_03988250;
  fVar52 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
           (*(float *)(unaff_x19 + 0x2ec) +
           in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar53));
  fVar53 = -fVar52;
  if (*(char *)(unaff_x21 + 0xb6) != '\0') {
    fVar53 = fVar52;
  }
  *(float *)(lVar29 + (long)(int)uVar28 * 0x60 + 0x5c) =
       *(float *)(lVar26 + lVar36 * unaff_x27 + 0x164) + fVar53;
  if (uVar35 <= uVar28) goto LAB_03988250;
  lVar29 = lVar29 + (long)(int)uVar28 * 0x60;
  *(float *)(lVar29 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
  *(float *)(lVar29 + 0x58) = fVar61;
  *(float *)(lVar29 + 0x4c) = fStack00000000000000a8 + (fVar56 - fVar61);
  *(float *)(lVar29 + 0x50) = fVar56;
  if ((int)in_stack_0000129c < 0x2d) {
    if (1 < in_stack_0000129c - 10) {
      if (in_stack_0000129c != 3) goto LAB_03984b30;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        in_stack_0000120c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        goto LAB_03984b30;
      }
      goto thunk_FUN_01b48178;
    }
  }
  else if ((1 < in_stack_0000129c - 0x2028) && (in_stack_0000129c != 0x2d)) goto LAB_03984b30;
  FUN_0398b3d0();
  uVar13 = *(uint *)(unaff_x19 + 0x324);
  iVar14 = *(int *)(unaff_x19 + 0x340) + 1;
  *(int *)(unaff_x19 + 0x340) = iVar14;
  *(uint *)(unaff_x19 + 0x328) = uVar13 + 1;
  unaff_x29[8] = 0;
  unaff_x29[9] = 0;
  if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
    if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar14) {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03999ddc(iVar14,in_stack_000001c0,0);
      uVar13 = *unaff_x29;
    }
    lVar26 = *in_stack_000001e8;
    if (lVar26 != 0) {
      if (uVar13 < *(uint *)(lVar26 + 0x18)) {
        fVar53 = *(float *)(lVar26 + (long)(int)uVar13 * (long)iVar17 + 0x158);
        if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b55468) {
          if ((in_stack_0000129c == 0x2029) || (fVar52 = 0.0, in_stack_0000129c == 10)) {
            fVar52 = *(float *)(unaff_x21 + 0xcc);
          }
          uVar22 = 0;
          fVar52 = fVar53 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                   fStack0000000000000090 *
                   (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                   in_stack_00000158 * (*(float *)(unaff_x21 + 200) + fVar52) +
                   *(float *)(unaff_x19 + 0x2e0);
        }
        else {
          if ((in_stack_0000129c == 0x2029) || (fVar52 = 0.0, in_stack_0000129c == 10)) {
            fVar52 = *(float *)(unaff_x21 + 0xcc);
          }
          uVar22 = 1;
          fVar52 = *(float *)(unaff_x19 + 0x2e0) +
                   *(float *)(unaff_x19 + 0x2e4) +
                   in_stack_00000158 * (*(float *)(unaff_x21 + 200) + fVar52);
        }
        *(float *)(unaff_x19 + 0x2e0) = fVar52;
        *(float *)(unaff_x19 + 0x15ac) = fVar53;
        *(undefined1 *)(unaff_x19 + 0x2e8) = uVar22;
        *(undefined8 *)(unaff_x19 + 0x338) = in_stack_00000098;
        *(float *)(unaff_x19 + 0x2f4) =
             *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
        FUN_0398b3d0();
        FUN_0398b3d0();
        *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
LAB_03984af8:
        bStack00000000000000e0 = 1;
        in_stack_000000b0 = 1;
        uVar41 = in_stack_00001288;
        fVar53 = unaff_s13;
LAB_0398183c:
        in_stack_0000120c = in_stack_0000120c + 1;
        lVar26 = *(long *)(unaff_x19 + 0x20);
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if ((int)*(uint *)(lVar26 + 0x18) <= (int)in_stack_0000120c) {
LAB_03985590:
          if ((((*(char *)(unaff_x21 + 0xa8) != '\0') &&
               (DAT_00b552b8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
              (fVar53 = *_fStack00000000000000d8, fVar53 < *(float *)(unaff_x21 + 0xb0))) &&
             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
            fVar52 = *(float *)(unaff_x21 + 0x108);
            if (*(float *)(unaff_x19 + 0x1594) < fVar52 / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x1594) = 0;
            }
            fVar61 = (*(float *)(unaff_x19 + 0x1598) - fVar53) * 0.5;
            if (fVar61 <= DAT_00b55428) {
              fVar61 = DAT_00b55428;
            }
            *(float *)(unaff_x19 + 0x159c) = fVar53;
            fVar61 = (fVar53 + fVar61) * 20.0 + 0.5;
            fVar53 = DAT_00b556b4;
            if (fVar61 != INFINITY) {
              fVar53 = (float)(int)fVar61 / 20.0;
            }
            if (fVar52 <= fVar53) {
              fVar53 = fVar52;
            }
            goto LAB_03985650;
          }
          unaff_x24[0x30] = '\x01';
          if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
            uVar41 = FUN_0303de64(in_stack_00000078,0);
            uVar18 = FUN_03052638(_fStack00000000000000d8,0);
            uVar41 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar41,
                                  *(undefined8 *)PTR_DAT_03d9c938,uVar18,0);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*unaff_x28);
            }
            FUN_038f2acc(uVar41,0);
          }
          plVar19 = (long *)PTR_DAT_03dace98;
          plVar40 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if ((*unaff_x29 == 0) || ((*unaff_x29 == 1 && (in_stack_0000129c == 3)))) {
            FUN_03992ac4(1,in_stack_000001c0,0);
            goto LAB_03980e58;
          }
          lVar26 = *(long *)(in_stack_000001c0 + 0x58);
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          uVar13 = *(uint *)(unaff_x19 + 0x78);
          if (*(int *)(*(long *)PTR_DAT_03dace98 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
          FUN_0397a378(lVar26 + (long)(int)uVar13 * 0x58 + 0x20,0,0);
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          iVar17 = *(int *)(in_stack_000001e0 + 0x70);
          in_stack_00000158 = **(float **)(*plVar40 + 0xb8);
          _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar40 + 0xb8) + 1);
          lVar26 = *(long *)(unaff_x19 + 0x50);
          _in_stack_00000118 = _in_stack_00000148;
          fStack0000000000000120 = in_stack_00000158;
          if (iVar17 < 0x421) {
            if (iVar17 < 0x205) {
              if (iVar17 < 0x109) {
                if ((iVar17 - 0x101U < 8) && ((1 << (ulong)(iVar17 - 0x101U & 0x1f) & 0x8bU) != 0))
                {
LAB_039859f0:
                  if (lVar26 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar26 + 0x18) < 2) goto LAB_03988250;
                  uVar41 = *(undefined8 *)(lVar26 + 0x30);
                  if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                    lVar36 = *in_stack_00000058;
                    if (lVar36 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000064) goto LAB_03988250;
                    fVar53 = *(float *)(lVar36 + (long)(int)uStack0000000000000064 * 0x14 + 0x28);
                  }
                  else {
                    fVar53 = *(float *)(unaff_x19 + 0x374);
                  }
                  fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar26 + 0x2c);
                  fStack0000000000000040 = (0.0 - fVar53) - fStack0000000000000044;
                  goto LAB_03985d90;
                }
              }
              else if (iVar17 < 0x121) {
                if ((iVar17 == 0x110) || (iVar17 == 0x120)) goto LAB_039859f0;
              }
              else if ((iVar17 - 0x201U < 4) && (iVar17 - 0x201U != 2)) goto LAB_03985c80;
            }
            else {
              if (iVar17 < 0x403) {
                if (iVar17 < 0x211) {
                  if ((iVar17 == 0x208) || (iVar17 == 0x210)) goto LAB_03985c80;
                  goto LAB_03985da0;
                }
                if (iVar17 != 0x220) {
                  if (iVar17 - 0x401U < 2) goto LAB_03985b2c;
                  goto LAB_03985da0;
                }
LAB_03985c80:
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0))
                goto LAB_03988250;
                fStack0000000000000120 =
                     (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                uVar41 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar26 + 0x24) +
                                  (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar26 = *in_stack_00000058;
                  if (lVar26 == 0) goto thunk_FUN_01b48178;
                  if (uStack0000000000000064 < *(uint *)(lVar26 + 0x18)) {
                    lVar26 = lVar26 + (long)(int)uStack0000000000000064 * 0x14;
                    fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
                    fStack0000000000000040 =
                         ((fStack0000000000000044 + *(float *)(lVar26 + 0x28) +
                          *(float *)(lVar26 + 0x30)) - fStack0000000000000040) * -0.5 + 0.0;
                    goto LAB_03985d90;
                  }
                  goto LAB_03988250;
                }
                fStack0000000000000120 = fStack0000000000000060 + 0.0 + fStack0000000000000120;
                fStack0000000000000040 =
                     ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x374) + in_stack_00001298) -
                     fStack0000000000000040) * -0.5 + 0.0;
              }
              else {
                if (iVar17 < 0x409) {
                  if (iVar17 != 0x404) {
                    bVar10 = iVar17 == 0x408;
                    goto LAB_03985b18;
                  }
                }
                else if (iVar17 != 0x410) {
                  bVar10 = iVar17 == 0x420;
LAB_03985b18:
                  if (!bVar10) goto LAB_03985da0;
                }
LAB_03985b2c:
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                if (*(int *)(lVar26 + 0x18) == 0) goto LAB_03988250;
                uVar41 = *(undefined8 *)(lVar26 + 0x24);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar36 = *in_stack_00000058;
                  if (lVar36 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar36 + 0x18) <= uStack0000000000000064) goto LAB_03988250;
                  in_stack_00001298 =
                       *(float *)(lVar36 + (long)(int)uStack0000000000000064 * 0x14 + 0x30);
                }
                fStack0000000000000120 = fStack0000000000000060 + 0.0 + *(float *)(lVar26 + 0x20);
                fStack0000000000000040 = fStack0000000000000040 + (0.0 - in_stack_00001298);
              }
LAB_03985d90:
              _in_stack_00000118 =
                   CONCAT44((float)((ulong)uVar41 >> 0x20) + 0.0,
                            (float)uVar41 + fStack0000000000000040);
            }
          }
          else if (iVar17 < 0x1005) {
            if (iVar17 < 0x809) {
              if ((iVar17 - 0x801U < 8) && ((1 << (ulong)(iVar17 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_03985954:
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
                  _in_stack_00000118 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar26 + 0x24) +
                                (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 + 0.0);
                  fStack0000000000000120 =
                       fStack0000000000000060 + 0.0 +
                       (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                  goto LAB_03985da0;
                }
                goto LAB_03988250;
              }
            }
            else if (iVar17 < 0x821) {
              if ((iVar17 == 0x810) || (iVar17 == 0x820)) goto LAB_03985954;
            }
            else if ((iVar17 - 0x1001U < 4) && (iVar17 - 0x1001U != 2)) goto LAB_03985be8;
          }
          else if (iVar17 < 0x2003) {
            if (iVar17 < 0x1011) {
              if ((iVar17 == 0x1008) || (iVar17 == 0x1010)) goto LAB_03985be8;
            }
            else {
              if (iVar17 == 0x1020) {
LAB_03985be8:
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                if ((*(int *)(lVar26 + 0x18) != 1) && (*(int *)(lVar26 + 0x18) != 0)) {
                  uVar41 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar26 + 0x24) +
                                    (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5);
                  fStack0000000000000120 =
                       fStack0000000000000060 + 0.0 +
                       (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
                  fStack0000000000000040 =
                       0.0 - ((fStack0000000000000044 + *(float *)(unaff_x19 + 0x36c) +
                              *(float *)(unaff_x19 + 0x364)) - fStack0000000000000040) * 0.5;
                  goto LAB_03985d90;
                }
                goto LAB_03988250;
              }
              if (iVar17 - 0x2001U < 2) goto LAB_03985a90;
            }
          }
          else {
            if (iVar17 < 0x2009) {
              if (iVar17 != 0x2004) {
                iVar14 = 0x2008;
                goto LAB_03985a78;
              }
            }
            else if (iVar17 != 0x2010) {
              iVar14 = 0x2020;
LAB_03985a78:
              if (iVar17 != iVar14) goto LAB_03985da0;
            }
LAB_03985a90:
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if ((*(int *)(lVar26 + 0x18) == 1) || (*(int *)(lVar26 + 0x18) == 0)) goto LAB_03988250;
            _in_stack_00000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar26 + 0x24) +
                          (float)*(undefined8 *)(lVar26 + 0x30)) * 0.5 +
                          (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack0000000000000044) -
                                 fStack0000000000000040) * 0.5));
            fStack0000000000000120 =
                 fStack0000000000000060 + 0.0 +
                 (*(float *)(lVar26 + 0x20) + *(float *)(lVar26 + 0x2c)) * 0.5;
          }
LAB_03985da0:
          uVar48 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03dad2e8);
          }
          FUN_0399652c(0);
          FUN_039966fc(&stack0x00001270,0x4000ffff,0);
          fVar53 = DAT_00b555ec;
          uVar13 = *unaff_x29;
          if ((int)uVar13 < 1) {
            iVar17 = 0;
            iStack0000000000000138 = 0;
            goto LAB_0398800c;
          }
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          fStack0000000000000174 = 0.0;
          fStack00000000000000d8 = 0.0;
          fStack00000000000000a8 = 0.0;
          plVar19 = (long *)(in_stack_000001c0 + 0x38);
          fStack00000000000000f4 = 0.0;
          fStack00000000000000a0 = 0.0;
          uVar58 = (ulong)&stack0x00001270 | 4;
          bVar10 = false;
          fVar61 = 0.0;
          fVar52 = 0.0;
          uVar55 = (ulong)&stack0x000005f0 | 4;
          bVar8 = false;
          bVar7 = false;
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
          fStack000000000000015c = DAT_00b555ec;
          uVar28 = 0;
          uVar35 = 1;
          goto LAB_03985ef4;
        }
        if (*(uint *)(lVar26 + 0x18) <= in_stack_0000120c) goto LAB_03988250;
        uVar13 = *(uint *)(lVar26 + (long)(int)in_stack_0000120c * 0x10 + 0x24);
        if (uVar13 == 0) goto LAB_03985590;
        in_stack_00001288 = uVar41;
        if (5 < in_stack_000001d8._4_4_) {
          uVar41 = FUN_0305c51c(&stack0x0000129c,0);
          uVar18 = FUN_0303de64(&stack0x0000120c,0);
          uVar41 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar41,
                                *(undefined8 *)PTR_DAT_03d9c940,uVar18,0);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*unaff_x28);
          }
          FUN_038f2e04(uVar41,0);
          in_stack_00001288 = CONCAT44(3,*unaff_x29);
        }
        uVar41 = in_stack_00001288;
        in_stack_0000129c = uVar13;
        if (uVar13 == 0x1a) goto LAB_0398183c;
        if ((uVar13 == 0x3c) && (*(char *)(unaff_x21 + 0xb5) != '\0')) {
          unaff_x24[0] = '\x01';
          unaff_x24[1] = '\x01';
          uVar55 = FUN_0398ba98();
          if (((uVar55 & 1) != 0) && (in_stack_0000120c = in_stack_000011dc, *unaff_x24 == '\x01'))
          goto LAB_0398183c;
        }
        else {
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
          lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
          *unaff_x24 = *(char *)(lVar26 + 0x28);
          *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar26 + 0x60);
          *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar26 + 0x40);
          thunk_FUN_01b4f09c(in_stack_000001c8);
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar13 = *(uint *)(unaff_x19 + 0x324);
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
        lVar36 = (long)(int)uVar13;
        uVar48 = *(undefined4 *)(unaff_x19 + 0x78);
        cVar23 = *(char *)(lVar26 + lVar36 * unaff_x27 + 100);
        unaff_x24[1] = '\0';
        if ((uint)in_stack_00001288 == uVar13) {
          in_stack_0000129c = (uint)((ulong)in_stack_00001288 >> 0x20);
          bVar10 = true;
          *unaff_x24 = '\x01';
          if (in_stack_0000129c == 0x2026) {
            *(undefined8 *)(lVar26 + lVar36 * unaff_x27 + 0x30) =
                 *(undefined8 *)(unaff_x19 + 0x1a00);
            thunk_FUN_01b4f09c();
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
            *(undefined1 *)(lVar26 + 0x28) = 1;
            *(undefined8 *)(lVar26 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
            thunk_FUN_01b4f09c();
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
            *(undefined8 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
                 *(undefined8 *)(unaff_x19 + 0x1a10);
            thunk_FUN_01b4f09c();
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar13 = *unaff_x29;
            if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
            bVar10 = true;
            *(undefined4 *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x60) =
                 *(undefined4 *)(unaff_x19 + 0x1a18);
            *(undefined1 *)(*(long *)(*(long *)PTR_DAT_03dad300 + 0xb8) + 8) = 1;
            in_stack_00001288 = CONCAT44(3,uVar13 + 1);
          }
          else if (in_stack_0000129c == 3) {
            if ((*in_stack_000001c8 == 0) ||
               (lVar29 = FUN_0396dd7c(*in_stack_000001c8,0), lVar29 == 0)) goto thunk_FUN_01b48178;
            uVar41 = FUN_0262f3a4(lVar29,3,*(undefined8 *)PTR_DAT_03daca20);
            if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
            *(undefined8 *)(lVar26 + lVar36 * unaff_x27 + 0x30) = uVar41;
            thunk_FUN_01b4f09c();
            bVar10 = true;
            *(undefined1 *)(*(long *)(*(long *)PTR_DAT_03dad300 + 0xb8) + 8) = 1;
            uVar13 = *unaff_x29;
          }
        }
        else {
          bVar10 = false;
        }
        uVar41 = in_stack_00001288;
        unaff_x21 = in_stack_000001e0;
        if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000129c != 3)) {
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
          lVar26 = lVar26 + (long)(int)uVar13 * (long)iVar17;
          *(undefined1 *)(lVar26 + 0x1a0) = 0;
          *(undefined2 *)(lVar26 + 0x20) = 0x200b;
          *(undefined4 *)(lVar26 + 0x6c) = 0;
          *unaff_x29 = uVar13 + 1;
          goto LAB_0398183c;
        }
        cVar38 = *unaff_x24;
        if (cVar38 == '\x01') {
          uVar13 = *(uint *)(unaff_x19 + 0x124);
          if ((uVar13 >> 4 & 1) == 0) {
            if ((uVar13 >> 3 & 1) == 0) {
              fStack000000000000017c = 1.0;
              if ((uVar13 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar55 = FUN_02fdd9e8(in_stack_0000129c,0);
                if ((uVar55 & 1) != 0) {
                  if (*(int *)(*(long *)
                                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar13 = FUN_02fddc48(in_stack_0000129c,0);
                  in_stack_0000129c = uVar13 & 0xffff;
                  fStack000000000000017c = fStack0000000000000034;
                }
              }
            }
            else {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar55 = FUN_02fdd92c(in_stack_0000129c,0);
              fStack000000000000017c = 1.0;
              if ((uVar55 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar13 = FUN_02fdddc0(in_stack_0000129c,0);
                goto LAB_039819ac;
              }
            }
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar55 = FUN_02fdd9e8(in_stack_0000129c,0);
            fStack000000000000017c = 1.0;
            if ((uVar55 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = FUN_02fddc48(in_stack_0000129c,0);
LAB_039819ac:
              fStack000000000000017c = 1.0;
              in_stack_0000129c = uVar13 & 0xffff;
            }
          }
          cVar38 = *unaff_x24;
        }
        else {
          fStack000000000000017c = 1.0;
        }
        if (cVar38 == '\x01') {
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
          *in_stack_000001b0 = *(long *)(lVar26 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
          thunk_FUN_01b4f09c(in_stack_000001b0);
          if (*in_stack_000001b0 == 0) goto LAB_0398183c;
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
          *in_stack_000001c8 = *(long *)(lVar26 + (long)(int)*unaff_x29 * unaff_x27 + 0x40);
          thunk_FUN_01b4f09c(in_stack_000001c8);
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
          *in_stack_00000190 = *(long *)(lVar26 + (long)(int)*unaff_x29 * unaff_x27 + 0x58);
          thunk_FUN_01b4f09c();
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          uVar28 = *unaff_x29;
          uVar13 = *(uint *)(lVar26 + 0x18);
          if (uVar13 <= uVar28) goto LAB_03988250;
          *(undefined4 *)(unaff_x19 + 0x78) =
               *(undefined4 *)(lVar26 + (long)(int)uVar28 * unaff_x27 + 0x60);
          if (bVar10) {
            lVar36 = *(long *)(unaff_x19 + 0x20);
            if (lVar36 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar36 + 0x18) <= in_stack_0000120c) goto LAB_03988250;
            if ((*(int *)(lVar36 + (long)(int)in_stack_0000120c * 0x10 + 0x24) != 10) ||
               (uVar28 == *(uint *)(unaff_x19 + 0x328))) goto LAB_03981b4c;
            if (uVar13 <= uVar28 - 1) goto LAB_03988250;
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar52 = *(float *)(lVar26 + (long)(int)(uVar28 - 1) * (long)iVar17 + 0x68);
            iVar14 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
            lVar26 = *in_stack_000001c8;
          }
          else {
LAB_03981b4c:
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar52 = *(float *)(unaff_x19 + 0xf4);
            iVar14 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
            lVar26 = *(long *)(unaff_x19 + 0x68);
          }
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          fVar56 = (float)FUN_0396ac34(lVar26 + 0xb0,0);
          fVar61 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar61 = 1.0;
          }
          fStack0000000000000170 = 0.0;
          fVar45 = 0.0;
          if (!(bool)(bVar10 & in_stack_0000129c == 0x2026)) {
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar45 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fStack0000000000000170 = (float)FUN_0396ac94(*in_stack_000001c8 + 0xb0,0);
          }
          lVar26 = *(long *)(unaff_x19 + 0x1588);
          if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto thunk_FUN_01b48178;
          fVar66 = *(float *)(unaff_x19 + 0xf0);
          fVar44 = *(float *)(lVar26 + 0x2c);
          fVar53 = (float)FUN_0396b17c(*(long *)(lVar26 + 0x20),0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar46 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar67 = *(float *)(unaff_x19 + 0xf0);
          fVar47 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
          lVar26 = *in_stack_000001e8;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          uVar13 = *(uint *)(unaff_x19 + 0x324);
          if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
          lVar36 = lVar26 + (long)(int)uVar13 * unaff_x27;
          fVar61 = ((fStack000000000000017c * fVar52) / (float)iVar14) * fVar56 * fVar61;
          fVar53 = fVar61 * fVar66 * fVar44 * fVar53;
          *(undefined1 *)(lVar36 + 0x28) = 1;
          *(float *)(lVar36 + 0x16c) = fVar53;
          in_stack_000001a8 = *(float *)(unaff_x19 + 0xd8);
          fVar47 = fVar61 * fVar46 * fVar67 * fVar47;
LAB_0398217c:
          unaff_s13 = fVar53;
          if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
            unaff_s13 = 0.0;
          }
        }
        else {
          if (cVar38 == '\x02') {
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
            plVar40 = *(long **)(lVar26 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
            if (plVar40 == (long *)0x0) goto thunk_FUN_01b48178;
            bVar11 = *(byte *)(*(long *)PTR_DAT_03dad2f0 + 0x130);
            if ((*(byte *)(*plVar40 + 0x130) < bVar11) ||
               (*(long *)(*(long *)(*plVar40 + 200) + (ulong)bVar11 * 8 + -8) !=
                *(long *)PTR_DAT_03dad2f0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01b4841c(plVar40);
            }
            plVar19 = (long *)FUN_039778ec(plVar40,0);
            if (plVar19 == (long *)0x0) {
              plVar19 = (long *)0x0;
              *in_stack_00000160 = 0;
            }
            else {
              lVar26 = *(long *)PTR_DAT_03dacf18;
              bVar11 = *(byte *)(lVar26 + 0x130);
              if (*(byte *)(*plVar19 + 0x130) < bVar11) {
                plVar30 = (long *)0x0;
              }
              else {
                plVar30 = plVar19;
                if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar11 * 8 + -8) != lVar26) {
                  plVar30 = (long *)0x0;
                }
              }
              *in_stack_00000160 = (long)plVar30;
              if (*(byte *)(*plVar19 + 0x130) < bVar11) {
                plVar19 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar11 * 8 + -8) != lVar26) {
                plVar19 = (long *)0x0;
              }
            }
            thunk_FUN_01b4f09c(in_stack_00000160,plVar19);
            iVar14 = FUN_0396ef70(plVar40,0);
            *(int *)(unaff_x19 + 0x157c) = iVar14;
            if (in_stack_0000129c == 0x3c) {
              in_stack_0000129c = iVar14 + 0xe000;
            }
            else {
              uVar15 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
              *(undefined4 *)(unaff_x19 + 0x1580) = uVar15;
            }
            if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
            fVar53 = *(float *)(unaff_x19 + 0xf4);
            FUN_0396d8d8(&stack0x000012a0,*(long *)(unaff_x19 + 0x68),0);
            memcpy(&stack0x00001210,&stack0x000012a0,0x60);
            iVar14 = FUN_0396ac24(&stack0x00001210,0);
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            FUN_0396d8d8(&stack0x000012a0,*in_stack_000001c8,0);
            memcpy(&stack0x00001210,&stack0x000012a0,0x60);
            fVar61 = (float)FUN_0396ac34(&stack0x00001210,0);
            fVar52 = in_stack_00000150;
            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
              fVar52 = 1.0;
            }
            if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
            fVar52 = (fVar53 / (float)iVar14) * fVar61 * fVar52;
            iVar14 = FUN_0396ac24(*in_stack_00000160 + 0x48,0);
            fVar53 = *(float *)(unaff_x19 + 0xf4);
            if (iVar14 < 1) {
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              iVar14 = FUN_0396ac24(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar61 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
              fStack0000000000000170 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fStack0000000000000170 = 1.0;
              }
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar56 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
              if (plVar40[4] == 0) goto thunk_FUN_01b48178;
              FUN_0396b140(&stack0x000012a0,plVar40[4],0);
              fVar66 = (float)FUN_0396af70(&stack0x000011c0,0);
              if (plVar40[4] == 0) goto thunk_FUN_01b48178;
              fVar44 = *(float *)((long)plVar40 + 0x2c);
              fVar46 = (float)FUN_0396b17c(plVar40[4],0);
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar45 = (float)FUN_0396ac54(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar67 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar63 = *(float *)(unaff_x19 + 0xf0);
              fVar47 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
              if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
              fVar47 = fVar52 * fVar67 * fVar63 * fVar47;
              fStack0000000000000170 = (fVar53 / (float)iVar14) * fVar61 * fStack0000000000000170;
              fVar53 = fStack0000000000000170 * (fVar56 / fVar66) * fVar44 * fVar46;
              fStack0000000000000170 = fStack0000000000000170 / fVar53;
              fVar45 = fStack0000000000000170 * fVar45;
              fVar52 = (float)FUN_0396ac94(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
              fStack0000000000000170 = fStack0000000000000170 * fVar52;
            }
            else {
              if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
              iVar14 = FUN_0396ac24(*in_stack_00000160 + 0x48,0);
              if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
              fVar61 = (float)FUN_0396ac34(*in_stack_00000160 + 0x48,0);
              if (plVar40[4] == 0) goto thunk_FUN_01b48178;
              fVar66 = *(float *)((long)plVar40 + 0x2c);
              fVar56 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar56 = 1.0;
              }
              fVar44 = (float)FUN_0396b17c(plVar40[4],0);
              if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
              fVar45 = (float)FUN_0396ac54(*in_stack_00000160 + 0x48,0);
              if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
              fVar46 = (float)FUN_0396ac84(*in_stack_00000160 + 0x48,0);
              if (*in_stack_00000160 == 0) goto thunk_FUN_01b48178;
              fVar67 = *(float *)(unaff_x19 + 0xf0);
              fVar47 = (float)FUN_0396ac34(*in_stack_00000160 + 0x48,0);
              if (*(long *)(unaff_x19 + 0xe0) == 0) goto thunk_FUN_01b48178;
              fVar47 = fVar52 * fVar46 * fVar67 * fVar47;
              fVar53 = (fVar53 / (float)iVar14) * fVar61 * fVar56 * fVar66 * fVar44;
              fStack0000000000000170 = (float)FUN_0396ac94(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
            }
            *in_stack_000001b0 = (long)plVar40;
            thunk_FUN_01b4f09c(in_stack_000001b0,plVar40);
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
            lVar26 = lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27;
            *(undefined1 *)(lVar26 + 0x28) = 2;
            *(float *)(lVar26 + 0x16c) = fVar53;
            *(long *)(lVar26 + 0x48) = *in_stack_00000160;
            thunk_FUN_01b4f09c();
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
            *(long *)(lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) =
                 *in_stack_000001c8;
            thunk_FUN_01b4f09c();
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar13 = *in_stack_000001d0;
            if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
            *(undefined4 *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x60) =
                 *(undefined4 *)(unaff_x19 + 0x78);
            *(undefined4 *)(unaff_x19 + 0x78) = uVar48;
            in_stack_000001a8 = 0.0;
            unaff_x29 = in_stack_000001d0;
            goto LAB_0398217c;
          }
          lVar26 = *in_stack_000001e8;
          unaff_s13 = fVar53;
          if (in_stack_0000129c == 3 || in_stack_0000129c == 0xad) {
            unaff_s13 = 0.0;
          }
          fVar47 = 0.0;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          uVar13 = *unaff_x29;
          fVar45 = 0.0;
          fStack0000000000000170 = 0.0;
        }
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)uVar13 * (long)iVar17;
        *(short *)(lVar26 + 0x20) = (short)in_stack_0000129c;
        *(undefined4 *)(lVar26 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
        *(undefined4 *)(lVar26 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
        *(undefined4 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
             *(undefined4 *)(unaff_x19 + 0x1b0);
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
        *(undefined4 *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
             *(undefined4 *)(unaff_x19 + 0x1b4);
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar18 = in_stack_00000108[1];
        uVar41 = *in_stack_00000108;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
        *(undefined4 *)(lVar26 + 0x198) = *(undefined4 *)(in_stack_00000108 + 2);
        *(undefined8 *)(lVar26 + 400) = uVar18;
        *(undefined8 *)(lVar26 + 0x188) = uVar41;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
        lVar36 = *(long *)(lVar26 + 0x38);
        *(undefined4 *)(lVar26 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
        if ((lVar36 == 0) &&
           ((*in_stack_000001b0 == 0 || (lVar36 = *(long *)(*in_stack_000001b0 + 0x20), lVar36 == 0)
            ))) goto thunk_FUN_01b48178;
        FUN_0396b140(&stack0x000012a0,lVar36,0);
        if (in_stack_0000129c >> 0x10 == 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar13 = FUN_02fdb080(in_stack_0000129c,0);
          unaff_w26 = uVar13 & 1;
        }
        else {
          unaff_w26 = 0;
        }
        uVar48 = 0;
        in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
        if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
          if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
          uVar13 = *unaff_x29;
          uVar28 = *(uint *)(*in_stack_000001b0 + 0x28);
          if ((int)uVar13 < (int)fStack00000000000000e4) {
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= uVar13 + 1) goto LAB_03988250;
            lVar26 = *(long *)(lVar26 + (long)(int)(uVar13 + 1) * (long)iVar17 + 0x30);
            if ((((lVar26 == 0) || (*in_stack_000001c8 == 0)) ||
                (lVar36 = *(long *)(*in_stack_000001c8 + 0x170), lVar36 == 0)) ||
               (lVar36 = *(long *)(lVar36 + 0x40), lVar36 == 0)) goto thunk_FUN_01b48178;
            uVar55 = FUN_02624ae4(lVar36,uVar28 | *(int *)(lVar26 + 0x28) << 0x10,&stack0x00001190,
                                  *(undefined8 *)PTR_DAT_03dad2d0);
            if ((uVar55 & 1) != 0) {
              FUN_0396d450(&stack0x000012a0,&stack0x00001190,0);
              uVar48 = FUN_0396d2b4(&stack0x00001170,0);
              uVar55 = FUN_0396d478(&stack0x00001190,0);
              if ((uVar55 & 0x100) != 0) {
                in_stack_00000188 = 0.0;
              }
            }
            uVar13 = *unaff_x29;
          }
          if (0 < (int)uVar13) {
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= uVar13 - 1) goto LAB_03988250;
            lVar26 = *(long *)(lVar26 + (ulong)(uVar13 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
            if (((lVar26 == 0) || (*in_stack_000001c8 == 0)) ||
               ((lVar36 = *(long *)(*in_stack_000001c8 + 0x170), lVar36 == 0 ||
                (lVar36 = *(long *)(lVar36 + 0x40), lVar36 == 0)))) goto thunk_FUN_01b48178;
            uVar55 = FUN_02624ae4(lVar36,*(uint *)(lVar26 + 0x28) | uVar28 << 0x10,&stack0x00001190,
                                  *(undefined8 *)PTR_DAT_03dad2d0);
            if ((uVar55 & 1) != 0) {
              FUN_0396d464(&stack0x000012a0,&stack0x00001190,0);
              FUN_0396d2b4(&stack0x00001170,0);
              FUN_0396d114(uVar48,0);
              uVar55 = FUN_0396d478(&stack0x00001190,0);
              if ((uVar55 & 0x100) != 0) {
                in_stack_00000188 = 0.0;
              }
            }
          }
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar13 = *unaff_x29;
        uVar48 = FUN_0396d104(&stack0x000011e0,0);
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
        *(undefined4 *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x160) = uVar48;
        if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar55 = FUN_0399a2ec(in_stack_0000129c,0);
        uVar13 = *unaff_x29;
        if ((uVar55 & 1) == 0) {
          if ((uVar55 & 1) == 0 && 0 < (int)uVar13) {
            uVar28 = *(uint *)(unaff_x19 + 0x19c4);
            if ((uVar28 == 0x80000000) || (uVar28 != uVar13 - 1)) {
              do {
                uVar28 = uVar13 - 1;
                if (((int)uVar13 < 1) || (uVar28 == *(uint *)(unaff_x19 + 0x19c4))) {
                  uVar13 = *(uint *)(unaff_x19 + 0x19c4);
                  if (uVar13 == 0x80000000) goto LAB_0398259c;
                  lVar26 = *in_stack_000001e8;
                  if (lVar26 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
                  lVar26 = *(long *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x30);
                  if ((lVar26 == 0) || (lVar26 = FUN_0397c204(lVar26,0), lVar26 == 0))
                  goto thunk_FUN_01b48178;
                  uVar13 = FUN_0396b130(lVar26,0);
                  if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
                  iVar14 = FUN_0396ef70(*in_stack_000001b0,0);
                  if (((*in_stack_000001c8 == 0) ||
                      (lVar26 = FUN_0396def4(*in_stack_000001c8,0), lVar26 == 0)) ||
                     (*(long *)(lVar26 + 0x48) == 0)) goto thunk_FUN_01b48178;
                  uVar58 = FUN_0262abc4(*(long *)(lVar26 + 0x48),uVar13 | iVar14 << 0x10,
                                        &stack0x00001118,*(undefined8 *)PTR_DAT_03dad2e0);
                  unaff_x29 = in_stack_000001d0;
                  if ((uVar58 & 1) == 0) goto LAB_0398259c;
                  lVar26 = *in_stack_000001e8;
                  if (lVar26 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03988250;
                  fVar52 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27
                                     + 0x148);
                  fVar66 = *(float *)(unaff_x19 + 0x2f4);
                  FUN_0396d638(&stack0x00001118,0);
                  fVar61 = (float)FUN_0396d610(&stack0x00001150,0);
                  FUN_0396d648(&stack0x00001118,0);
                  fVar56 = (float)FUN_0396d620(&stack0x00001148,0);
                  FUN_0396d0ec(((fVar52 - fVar66) / unaff_s13 + fVar61) - fVar56,&stack0x000011e0,0)
                  ;
                  FUN_0396d638(&stack0x00001118,0);
                  fVar52 = (float)FUN_0396d618(&stack0x00001150,0);
                  puVar20 = &stack0x00001118;
                  goto LAB_03983b34;
                }
                lVar26 = *in_stack_000001e8;
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
                lVar26 = *(long *)(lVar26 + (ulong)uVar28 * (unaff_x27 & 0xffffffff) + 0x30);
                if ((lVar26 == 0) || (lVar26 = FUN_0397c204(lVar26,0), lVar26 == 0))
                goto thunk_FUN_01b48178;
                uVar13 = FUN_0396b130(lVar26,0);
                if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
                iVar14 = FUN_0396ef70(*in_stack_000001b0,0);
                if (((*in_stack_000001c8 == 0) ||
                    (lVar26 = FUN_0396def4(*in_stack_000001c8,0), lVar26 == 0)) ||
                   (*(long *)(lVar26 + 0x50) == 0)) goto thunk_FUN_01b48178;
                uVar58 = FUN_0262dcc8(*(long *)(lVar26 + 0x50),uVar13 | iVar14 << 0x10,
                                      &stack0x00001130,*(undefined8 *)PTR_DAT_03dad2d8);
                unaff_x29 = in_stack_000001d0;
                uVar13 = uVar28;
              } while ((uVar58 & 1) == 0);
              lVar26 = *in_stack_000001e8;
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
              fVar66 = *(float *)(unaff_x19 + 0x2e0);
              fVar44 = *(float *)(unaff_x19 + 0x180);
              lVar26 = lVar26 + uVar28 * unaff_x27;
              fVar52 = *(float *)(unaff_x19 + 0x2f4);
              fVar46 = *(float *)(lVar26 + 0x148);
              fVar67 = *(float *)(lVar26 + 0x150);
              FUN_0396d658(&stack0x00001130,0);
              fVar61 = (float)FUN_0396d610(&stack0x00001150,0);
              FUN_0396d668(&stack0x00001130,0);
              fVar56 = (float)FUN_0396d620(&stack0x00001148,0);
              FUN_0396d0ec(((fVar46 - fVar52) / unaff_s13 + fVar61) - fVar56,&stack0x000011e0,0);
              FUN_0396d658(&stack0x00001130,0);
              fVar52 = (float)FUN_0396d618(&stack0x00001150,0);
              FUN_0396d668(&stack0x00001130,0);
              fVar61 = (float)FUN_0396d628(&stack0x00001148,0);
              FUN_0396d0fc(((fVar67 - ((fVar47 - fVar66) + fVar44)) / unaff_s13 + fVar52) - fVar61,
                           &stack0x000011e0,0);
              in_stack_00000188 = 0.0;
            }
            else {
              lVar26 = *in_stack_000001e8;
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
              lVar26 = *(long *)(lVar26 + (long)(int)uVar28 * unaff_x27 + 0x30);
              if ((lVar26 == 0) || (lVar26 = FUN_0397c204(lVar26,0), lVar26 == 0))
              goto thunk_FUN_01b48178;
              uVar13 = FUN_0396b130(lVar26,0);
              if (*in_stack_000001b0 == 0) goto thunk_FUN_01b48178;
              iVar14 = FUN_0396ef70(*in_stack_000001b0,0);
              if (((*in_stack_000001c8 == 0) ||
                  (lVar26 = FUN_0396def4(*in_stack_000001c8,0), lVar26 == 0)) ||
                 (*(long *)(lVar26 + 0x48) == 0)) goto thunk_FUN_01b48178;
              uVar58 = FUN_0262abc4(*(long *)(lVar26 + 0x48),uVar13 | iVar14 << 0x10,
                                    &stack0x00001158,*(undefined8 *)PTR_DAT_03dad2e0);
              unaff_x29 = in_stack_000001d0;
              if ((uVar58 & 1) != 0) {
                lVar26 = *in_stack_000001e8;
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto LAB_03988250;
                fVar52 = *(float *)(lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                                   0x148);
                fVar66 = *(float *)(unaff_x19 + 0x2f4);
                FUN_0396d638(&stack0x00001158,0);
                fVar61 = (float)FUN_0396d610(&stack0x00001150,0);
                FUN_0396d648(&stack0x00001158,0);
                fVar56 = (float)FUN_0396d620(&stack0x00001148,0);
                FUN_0396d0ec(((fVar52 - fVar66) / unaff_s13 + fVar61) - fVar56,&stack0x000011e0,0);
                FUN_0396d638(&stack0x00001158,0);
                fVar52 = (float)FUN_0396d618(&stack0x00001150,0);
                puVar20 = &stack0x00001158;
LAB_03983b34:
                FUN_0396d648(puVar20,0);
                fVar61 = (float)FUN_0396d628(&stack0x00001148,0);
                FUN_0396d0fc(fVar52 - fVar61,&stack0x000011e0,0);
                in_stack_00000188 = 0.0;
                unaff_x29 = in_stack_000001d0;
              }
            }
          }
        }
        else {
          *(uint *)(unaff_x19 + 0x19c4) = uVar13;
        }
LAB_0398259c:
        fVar52 = (float)FUN_0396d0f4(&stack0x000011e0,0);
        fVar61 = (float)FUN_0396d0f4(&stack0x000011e0,0);
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fVar66 = *(float *)(unaff_x19 + 0x2f4);
          fVar56 = (float)FUN_0396af88(&stack0x000011f0,0);
          fVar66 = fVar66 - unaff_s13 * fVar56 * (1.0 - *(float *)(unaff_x19 + 0x1594));
          *(float *)(unaff_x19 + 0x2f4) = fVar66;
          if ((unaff_w26 != 0) || (in_stack_0000129c == 0x200b)) {
            *(float *)(unaff_x19 + 0x2f4) =
                 fVar66 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
          }
        }
        fVar56 = *(float *)(unaff_x19 + 0x2f0);
        if (fVar56 == 0.0) {
          fVar56 = 0.0;
        }
        else {
          fVar66 = (float)FUN_0396af68(&stack0x000011f0,0);
          fVar44 = (float)FUN_0396af78(&stack0x000011f0,0);
          fVar56 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                   (fVar56 * 0.5 - unaff_s13 * (fVar66 * 0.5 + fVar44));
          *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar56;
        }
        uVar13 = 0;
        if ((cVar23 == '\0') && (*unaff_x24 == '\x01')) {
          uVar13 = *(uint *)(unaff_x19 + 0x124) & 1;
        }
        lVar26 = *in_stack_00000190;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar58 = FUN_0391f968(lVar26,0,0);
        puVar6 = PTR_DAT_03daca38;
        if (uVar13 == 0) {
          in_stack_00000148 = 0.0;
          if ((uVar58 & 1) != 0) {
            lVar26 = *in_stack_00000190;
            if (*(int *)(*(long *)PTR_DAT_03daca38 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar58 = FUN_038ffa04(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0
                                 );
            if ((uVar58 & 1) != 0) {
              lVar26 = *in_stack_00000190;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              uVar58 = FUN_038ffa04(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4)
                                    ,0);
              if ((uVar58 & 1) != 0) {
                lVar26 = *in_stack_00000190;
                if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                fVar66 = (float)FUN_03900954(lVar26,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
                unaff_x28 = (long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                ;
                if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto thunk_FUN_01b48178;
                fVar46 = *(float *)(*in_stack_000001c8 + 0x188);
                fVar44 = (float)FUN_03900954(*in_stack_00000190,
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar6 + 0xb8) + 0xe4),0);
                fVar44 = fVar44 * fVar66 * fVar46 * 0.25;
                if (fVar66 < in_stack_000001a8 + fVar44) {
                  in_stack_000001a8 = fVar66 - fVar44;
                }
                goto LAB_0398291c;
              }
            }
          }
          fVar44 = 0.0;
          unaff_x28 = (long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
          ;
        }
        else {
          fVar44 = 0.0;
          unaff_x28 = (long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
          ;
          if ((uVar58 & 1) != 0) {
            lVar26 = *in_stack_00000190;
            if (*(int *)(*(long *)PTR_DAT_03daca38 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar58 = FUN_038ffa04(lVar26,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0
                                 );
            unaff_x28 = (long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
            ;
            if ((uVar58 & 1) != 0) {
              lVar26 = *in_stack_00000190;
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              fVar66 = (float)FUN_03900954(lVar26,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar6 + 0xb8) + 0x6c),0);
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar46 = (float)FUN_0396df5c(*in_stack_000001c8,0);
              unaff_x28 = (long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
              ;
              if (*in_stack_00000190 == 0) goto thunk_FUN_01b48178;
              fVar44 = (float)FUN_03900954(*in_stack_00000190,
                                           *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe4)
                                           ,0);
              fVar44 = fVar66 * fVar46 * 0.25 * fVar44;
              if (fVar66 < in_stack_000001a8 + fVar44) {
                in_stack_000001a8 = fVar66 - fVar44;
              }
            }
          }
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          in_stack_00000148 = (float)FUN_0396df6c(*in_stack_000001c8,0);
        }
LAB_0398291c:
        fVar46 = *(float *)(unaff_x19 + 0x2f4);
        fVar66 = (float)FUN_0396af78(&stack0x000011f0,0);
        fVar63 = *(float *)(unaff_x19 + 0x19a8);
        fVar67 = (float)FUN_0396d0e4(&stack0x000011e0,0);
        fVar46 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          unaff_s13 * (fVar67 + ((fVar66 * fVar63 - in_stack_000001a8) - fVar44));
        fVar66 = (float)FUN_0396af80(&stack0x000011f0,0);
        fVar67 = (float)FUN_0396d0f4(&stack0x000011e0,0);
        fVar64 = *(float *)(unaff_x19 + 0x180) +
                 ((fVar47 + unaff_s13 * (in_stack_000001a8 + fVar66 + fVar67)) -
                 *(float *)(unaff_x19 + 0x2e0));
        fVar66 = (float)FUN_0396af70(&stack0x000011f0,0);
        fVar66 = fVar64 - unaff_s13 * (in_stack_000001a8 + in_stack_000001a8 + fVar66);
        fVar67 = (float)FUN_0396af68(&stack0x000011f0,0);
        fVar67 = fVar46 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          unaff_s13 *
                          (fVar44 + fVar44 +
                          in_stack_000001a8 + in_stack_000001a8 +
                          fVar67 * *(float *)(unaff_x19 + 0x19a8));
        in_stack_000001b8._4_4_ = fVar46;
        fVar63 = fVar67;
        if (((cVar23 == '\0') && (*unaff_x24 == '\x01')) &&
           ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
          if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
          iVar14 = *(int *)(unaff_x19 + 0x19a4);
          fVar51 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar49 = (float)FUN_0396ac84(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
          fVar50 = *(float *)(unaff_x19 + 0xf0);
          fVar62 = *(float *)(unaff_x19 + 0x180);
          fVar63 = (float)iVar14 * fStack00000000000000ac;
          fVar69 = (float)FUN_0396ac34(*in_stack_000001c8 + 0xb0,0);
          fVar69 = fVar69 * fVar50 * (fVar51 - (fVar49 + fVar62)) * 0.5;
          fVar51 = (float)FUN_0396af80(&stack0x000011f0,0);
          fVar50 = fVar63 * unaff_s13 * ((fVar44 + in_stack_000001a8 + fVar51) - fVar69);
          fVar51 = (float)FUN_0396af80(&stack0x000011f0,0);
          fVar49 = (float)FUN_0396af70(&stack0x000011f0,0);
          fVar64 = fVar64 + 0.0;
          fVar66 = fVar66 + 0.0;
          fVar63 = fVar63 * unaff_s13 *
                            ((((fVar51 - fVar49) - in_stack_000001a8) - fVar44) - fVar69);
          in_stack_000001b8._4_4_ = fVar46 + fVar63;
          fVar63 = fVar67 + fVar63;
          fVar46 = fVar46 + fVar50;
          fVar67 = fVar67 + fVar50;
        }
        uVar41 = *in_stack_00000100;
        uVar18 = *in_stack_000000f8;
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        uVar54 = **(undefined8 **)
                   (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                   + 0xb8);
        uVar57 = (*(undefined8 **)
                   (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                   + 0xb8))[1];
        fVar51 = 0.0;
        if (DAT_00b553b8 <
            (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar57 >> 0x20) +
            (float)uVar18 * (float)uVar57 +
            (float)uVar41 * (float)uVar54 +
            (float)((ulong)uVar41 >> 0x20) * (float)((ulong)uVar54 >> 0x20)) {
          fVar60 = 0.0;
          fVar62 = 0.0;
          fVar50 = 0.0;
          fVar49 = fVar64;
          fVar69 = fVar66;
        }
        else {
          FUN_03912088(&stack0x000012a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                       *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                       *(undefined4 *)(unaff_x19 + 0x19c0),0);
          fVar65 = (fVar67 + in_stack_000001b8._4_4_) * 0.5;
          fVar68 = (fVar66 + fVar64) * 0.5;
          fVar64 = fVar64 - fVar68;
          fVar50 = 0.0;
          fVar49 = fVar64;
          fVar46 = (float)FUN_03911ddc(fVar46 - fVar65,&stack0x000010d0,0);
          fVar46 = fVar65 + fVar46;
          fVar50 = fVar50 + 0.0;
          fVar69 = fVar66 - fVar68;
          fVar62 = 0.0;
          fVar66 = fVar69;
          in_stack_000001b8._4_4_ =
               (float)FUN_03911ddc(in_stack_000001b8._4_4_ - fVar65,&stack0x000010d0,0);
          in_stack_000001b8._4_4_ = fVar65 + in_stack_000001b8._4_4_;
          fVar66 = fVar68 + fVar66;
          fVar62 = fVar62 + 0.0;
          fVar60 = 0.0;
          fVar67 = (float)FUN_03911ddc(fVar67 - fVar65,&stack0x000010d0,0);
          fVar67 = fVar65 + fVar67;
          fVar64 = fVar68 + fVar64;
          fVar60 = fVar60 + 0.0;
          fVar51 = 0.0;
          fVar63 = (float)FUN_03911ddc(fVar63 - fVar65,&stack0x000010d0,0);
          fVar63 = fVar65 + fVar63;
          fVar51 = fVar51 + 0.0;
          fVar49 = fVar68 + fVar49;
          fVar69 = fVar68 + fVar69;
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar26 + 0x128) = fVar66;
        *(float *)(lVar26 + 300) = fVar62;
        *(float *)(lVar26 + 0x124) = in_stack_000001b8._4_4_;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar26 + 0x118) = fVar46;
        *(float *)(lVar26 + 0x11c) = fVar49;
        *(float *)(lVar26 + 0x120) = fVar50;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar26 + 0x130) = fVar67;
        *(float *)(lVar26 + 0x134) = fVar64;
        *(float *)(lVar26 + 0x138) = fVar60;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)*unaff_x29 * unaff_x27;
        *(float *)(lVar26 + 0x13c) = fVar63;
        *(float *)(lVar26 + 0x140) = fVar69;
        *(float *)(lVar26 + 0x144) = fVar51;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar13 = *unaff_x29;
        fVar63 = *(float *)(unaff_x19 + 0x2f4);
        fVar46 = (float)FUN_0396d0e4(&stack0x000011e0,0);
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
        *(float *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x148) = fVar63 + unaff_s13 * fVar46;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar13 = *unaff_x29;
        fVar64 = *(float *)(unaff_x19 + 0x2e0);
        fVar63 = *(float *)(unaff_x19 + 0x180);
        fVar46 = (float)FUN_0396d0f4(&stack0x000011e0,0);
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
        *(float *)(lVar26 + (long)(int)uVar13 * unaff_x27 + 0x150) =
             (fVar47 - fVar64) + fVar63 + unaff_s13 * fVar46;
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar13 = *unaff_x29;
        unaff_x20 = (long)(int)uVar13;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
        *(float *)(lVar26 + unaff_x20 * unaff_x27 + 0x168) =
             (fVar67 - in_stack_000001b8._4_4_) / (fVar49 - fVar66);
        fVar52 = unaff_s13 * (fVar45 + fVar52);
        if (*unaff_x24 == '\x01') {
          fVar52 = fVar52 / fStack000000000000017c;
          fVar61 = (unaff_s13 * (fStack0000000000000170 + fVar61)) / fStack000000000000017c;
        }
        else {
          fVar61 = unaff_s13 * (fStack0000000000000170 + fVar61);
        }
        in_stack_000001b8._4_4_ = *(float *)(unaff_x19 + 0x328);
        fVar45 = *(float *)(unaff_x19 + 0x180);
        bVar7 = (float)uVar13 == in_stack_000001b8._4_4_;
        bVar8 = unaff_w26 == 0;
        fVar52 = fVar45 + fVar52;
        if (bVar8 || bVar7) {
          fVar61 = fVar45 + fVar61;
          fVar66 = fVar52;
          fVar46 = fVar61;
          if (fVar45 != 0.0) {
            fVar66 = (fVar52 - fVar45) / *(float *)(unaff_x19 + 0xf0);
            fVar46 = (fVar61 - fVar45) / *(float *)(unaff_x19 + 0xf0);
            if (fVar66 <= fVar52) {
              fVar66 = fVar52;
            }
            if (fVar61 <= fVar46) {
              fVar46 = fVar61;
            }
          }
          lVar36 = lVar26 + unaff_x20 * unaff_x27;
          fVar45 = fVar66;
          if (fVar66 <= *(float *)(unaff_x19 + 0x338)) {
            fVar45 = *(float *)(unaff_x19 + 0x338);
          }
          fVar47 = fVar46;
          if (*(float *)(unaff_x19 + 0x33c) <= fVar46) {
            fVar47 = *(float *)(unaff_x19 + 0x33c);
          }
          *(float *)(unaff_x19 + 0x338) = fVar45;
          *(float *)(unaff_x19 + 0x33c) = fVar47;
          *(float *)(lVar36 + 0x158) = fVar66;
          *(float *)(lVar36 + 0x15c) = fVar46;
          fVar66 = *(float *)(unaff_x19 + 0x2e0);
          fVar46 = fVar52 - fVar66;
        }
        else {
          fVar45 = *(float *)(unaff_x19 + 0x338);
          lVar36 = lVar26 + unaff_x20 * unaff_x27;
          *(float *)(lVar36 + 0x158) = fVar45;
          fVar61 = *(float *)(unaff_x19 + 0x33c);
          *(float *)(lVar36 + 0x15c) = fVar61;
          fVar66 = *(float *)(unaff_x19 + 0x2e0);
          fVar46 = fVar45 - fVar66;
        }
        *(float *)(lVar36 + 0x14c) = fVar46;
        *(float *)(lVar26 + unaff_x20 * unaff_x27 + 0x154) = fVar61 - fVar66;
        *(float *)(unaff_x19 + 0x378) = fVar61 - fVar66;
        if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
          if (bVar8 || bVar7) {
            *(float *)(unaff_x19 + 0x374) = fVar45;
            if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
            fVar61 = *(float *)(unaff_x19 + 0x370);
            fVar45 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
            fVar66 = *(float *)(unaff_x19 + 0x2e0);
            fStack000000000000017c = (unaff_s13 * fVar45) / fStack000000000000017c;
            if (fVar61 <= fStack000000000000017c) {
              fVar61 = fStack000000000000017c;
            }
            *(float *)(unaff_x19 + 0x370) = fVar61;
            if (fVar66 == 0.0) goto LAB_039833ac;
          }
        }
        else if ((bVar8 || bVar7) && fVar66 == 0.0) {
LAB_039833ac:
          fVar61 = *(float *)(unaff_x19 + 0x19c8);
          if (*(float *)(unaff_x19 + 0x19c8) <= fVar52) {
            fVar61 = fVar52;
          }
          *(float *)(unaff_x19 + 0x19c8) = fVar61;
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar28 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
        lVar26 = lVar26 + (long)(int)uVar28 * unaff_x27;
        *(undefined1 *)(lVar26 + 0x1a0) = 0;
        uVar35 = *(uint *)(unaff_x19 + 0x158) & 0x18;
        if ((in_stack_0000129c == 9) ||
           ((((unaff_w26 == 0 && (in_stack_0000129c != 3)) &&
             ((in_stack_0000129c != 0x200b && (in_stack_0000129c != 0xad)))) ||
            (((in_stack_0000129c == 0xad & (in_stack_000000c0._4_1_ ^ 0xff)) != 0 ||
             (*unaff_x24 == '\x02')))))) {
          *(undefined1 *)(lVar26 + 0x1a0) = 1;
          pfVar25 = _fStack0000000000000130;
          pfVar34 = _iStack0000000000000138;
          if (bVar10) {
            lVar26 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            pfVar34 = (float *)(lVar26 + 100);
            pfVar25 = (float *)(lVar26 + 0x68);
          }
          fVar45 = *pfVar34;
          fVar61 = *pfVar25;
          fVar52 = *(float *)(unaff_x19 + 0x35c);
          fVar46 = *(float *)(unaff_x19 + 0x2f4);
          fStack0000000000000174 = (fStack000000000000012c - fVar45) - fVar61;
          bVar7 = true;
          if ((fVar52 <= fStack0000000000000174) && (bVar7 = false, !NAN(fVar52))) {
            bVar7 = fVar52 == -1.0;
          }
          if (!bVar7) {
            fStack0000000000000174 = fVar52;
          }
          fVar52 = 0.0;
          fVar47 = 0.0;
          if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
            fVar47 = (float)FUN_0396af88(&stack0x000011f0,0);
            fVar66 = *(float *)(unaff_x19 + 0x2e0);
          }
          fVar67 = *(float *)(unaff_x19 + 0x1594);
          fVar63 = *(float *)(unaff_x19 + 0x33c);
          if (in_stack_0000129c != 0xad) {
            fVar53 = unaff_s13;
          }
          if ((0.0 < fVar66) && (fVar52 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
            fVar52 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
          }
          uVar28 = *in_stack_000001d0;
          fVar52 = (*(float *)(unaff_x19 + 0x374) - (fVar63 - fVar66)) + fVar52;
          if (in_stack_00000118 < fVar52) {
            if (*(int *)(unaff_x19 + 0x34c) == -1) {
              *(uint *)(unaff_x19 + 0x34c) = uVar28;
            }
            uVar41 = DAT_00b92750;
            if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
              fVar64 = *(float *)(in_stack_000001e0 + 0xd0);
              if (((fVar64 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar66)) &&
                 (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                fVar53 = *(float *)(unaff_x19 + 0x15b0) +
                         ((in_stack_00000020._4_4_ - fVar52) / (float)*(int *)(unaff_x19 + 0x340)) /
                         fStack0000000000000090;
                if (fVar53 <= fVar64) {
                  fVar53 = fVar64;
                }
                goto LAB_03988100;
              }
              fVar66 = *_fStack00000000000000d8;
              fVar52 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar52 < fVar66) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))
                 ) {
                fVar53 = (fVar66 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                if (fVar53 <= DAT_00b55428) {
                  fVar53 = DAT_00b55428;
                }
                fVar61 = (fVar66 - fVar53) * 20.0 + 0.5;
                fVar53 = DAT_00b556b4;
                if (fVar61 != INFINITY) {
                  fVar53 = (float)(int)fVar61 / 20.0;
                }
                if (fVar53 <= fVar52) {
                  fVar53 = fVar52;
                }
                *(float *)(unaff_x19 + 0x1598) = fVar66;
                goto LAB_03985650;
              }
            }
            switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
            case 1:
              if (0 < *(int *)(unaff_x19 + 0x340)) {
                iVar14 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
                uVar41 = DAT_00b92750;
                if (iVar14 == 0) {
                  in_stack_0000120c = 0xffffffff;
                  in_stack_000001d0[0] = 0;
                  in_stack_000001d0[1] = 0;
                  unaff_x29 = in_stack_000001d0;
                  fVar53 = unaff_s13;
                }
                else {
                  FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
                  memcpy(&stack0x00000d38,&stack0x000012a0,0x398);
                  iVar14 = FUN_0398b72c();
                  in_stack_0000120c = iVar14 - 1;
                  iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
                  *(int *)(unaff_x19 + 0x324) = iVar14;
                  uVar41 = CONCAT44(0x2026,iVar14);
                  in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                  unaff_x29 = in_stack_000001d0;
                  fVar53 = unaff_s13;
                }
                goto LAB_0398183c;
              }
              break;
            case 3:
              in_stack_0000120c = FUN_0398b72c();
              uVar41 = CONCAT44((int)((ulong)in_stack_00001288 >> 0x20),uVar28);
              unaff_x29 = in_stack_000001d0;
              fVar53 = unaff_s13;
              goto LAB_0398183c;
            case 5:
              if (uVar28 == 0 || (int)in_stack_0000120c < 0) {
                in_stack_0000120c = 0xffffffff;
                *in_stack_000001d0 = 0;
                unaff_x29 = in_stack_000001d0;
                fVar53 = unaff_s13;
                goto LAB_0398183c;
              }
              fVar53 = *(float *)(unaff_x19 + 0x338);
              in_stack_0000120c = FUN_0398b72c();
              if (fVar53 - fVar63 <= in_stack_00000118) {
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
                unaff_x29 = in_stack_000001d0;
                uVar41 = in_stack_00001288;
                fVar53 = unaff_s13;
                goto LAB_0398183c;
              }
              goto LAB_03983d74;
            case 6:
              in_stack_0000120c = FUN_0398b72c();
              uVar41 = CONCAT44(3,uVar28);
              unaff_x29 = in_stack_000001d0;
              fVar53 = unaff_s13;
              goto LAB_0398183c;
            }
          }
          if ((uVar55 & 1) != 0) {
            fVar52 = ABS(fVar46) + fVar47 * (1.0 - fVar67) * fVar53;
            fVar53 = 1.0;
            if (uVar35 != 0) {
              fVar53 = DAT_00b55374;
            }
            if (fVar53 * fStack0000000000000174 < fVar52) {
              if ((uStack0000000000000094 == 0) || (uVar28 == *(uint *)(unaff_x19 + 0x328))) {
                if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
                   (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_03983888:
                  iVar14 = *(int *)(in_stack_000001e0 + 0x74);
                  if (iVar14 == 1) {
                    iVar14 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
                    uVar41 = DAT_00b92750;
                    if (iVar14 == 0) {
                      in_stack_0000120c = 0xffffffff;
                      in_stack_000001d0[0] = 0;
                      in_stack_000001d0[1] = 0;
                      unaff_x29 = in_stack_000001d0;
                      fVar53 = unaff_s13;
                    }
                    else {
                      FUN_021c3180(&stack0x000012a0,in_stack_00000080,
                                   *(undefined8 *)PTR_DAT_03dad338);
                      memcpy(&stack0x00000608,&stack0x000012a0,0x398);
                      iVar14 = FUN_0398b72c();
                      in_stack_0000120c = iVar14 - 1;
                      iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
                      *(int *)(unaff_x19 + 0x324) = iVar14;
                      in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                      unaff_x29 = in_stack_000001d0;
                      uVar41 = CONCAT44(0x2026,iVar14);
                      fVar53 = unaff_s13;
                    }
                    goto LAB_0398183c;
                  }
                  if (iVar14 == 6) {
                    in_stack_0000120c = FUN_0398b72c();
                    uVar28 = *(uint *)(unaff_x19 + 0x324);
                    goto LAB_03984f74;
                  }
                  if (iVar14 == 3) {
                    in_stack_0000120c = FUN_0398b72c();
                    goto LAB_03984f74;
                  }
                  goto LAB_03983778;
                }
                fVar46 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                if (fVar67 < fVar46) {
                  fVar61 = fVar52 / (1.0 - fVar67);
                  if (fVar67 <= 0.0) {
                    fVar61 = fVar52;
                  }
                  fVar67 = fVar67 + (fVar52 - fVar53 * (fStack0000000000000174 + DAT_00b5556c)) /
                                    fVar61;
                  goto LAB_039881fc;
                }
                fVar46 = *(float *)(in_stack_000001e0 + 0xac);
                fVar47 = *_fStack00000000000000d8;
                if (fVar47 <= fVar46) goto LAB_03983888;
LAB_0398816c:
                fVar53 = (fVar47 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                if (fVar53 <= DAT_00b55428) {
                  fVar53 = DAT_00b55428;
                }
                *(float *)(unaff_x19 + 0x1598) = fVar47;
                fVar52 = (fVar47 - fVar53) * 20.0 + 0.5;
                fVar53 = DAT_00b556b4;
                if (fVar52 != INFINITY) {
                  fVar53 = (float)(int)fVar52 / 20.0;
                }
                if (fVar53 <= fVar46) {
                  fVar53 = fVar46;
                }
LAB_03985650:
                *(float *)(unaff_x19 + 0xec) = fVar53;
                goto LAB_03980e58;
              }
              in_stack_0000120c = FUN_0398b72c();
              if (*(float *)(unaff_x19 + 0x2e4) == DAT_00b55468) {
                lVar26 = *in_stack_000001e8;
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                uVar42 = *in_stack_000001d0;
                if (*(uint *)(lVar26 + 0x18) <= uVar42) goto LAB_03988250;
                fVar46 = *(float *)(unaff_x19 + 0x2e0);
                fVar66 = 0.0;
                if ((0.0 < fVar46) && (fVar66 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                  fVar66 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                }
                fVar66 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
                         *(float *)(lVar26 + (long)(int)uVar42 * unaff_x27 + 0x158) +
                         (fVar66 - *(float *)(unaff_x19 + 0x33c)) +
                         fStack0000000000000090 *
                         (in_stack_00000088._4_4_ + *(float *)(unaff_x19 + 0x15b0));
              }
              else {
                fVar66 = *(float *)(in_stack_000001e0 + 200);
                *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
                lVar26 = *in_stack_000001e8;
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                fVar46 = *(float *)(unaff_x19 + 0x2e0);
                uVar42 = *(uint *)(unaff_x19 + 0x324);
                fVar66 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar66;
              }
              if ((*(uint *)(lVar26 + 0x18) <= uVar42) ||
                 (uVar5 = uVar42 - 1, *(uint *)(lVar26 + 0x18) <= uVar5)) goto LAB_03988250;
              fVar66 = (fVar66 + *(float *)(unaff_x19 + 0x374) + fVar46) -
                       *(float *)(lVar26 + (long)(int)uVar42 * (long)iVar17 + 0x15c);
              if (((in_stack_000000c0._4_1_ & 1) == 0 &&
                   *(short *)(lVar26 + (long)(int)uVar5 * (long)iVar17 + 0x20) == 0xad) &&
                 ((fVar66 < in_stack_00000118 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
                in_stack_0000120c = in_stack_0000120c - 1;
                in_stack_000000c0._4_1_ = 0;
                *in_stack_000001d0 = uVar5;
                unaff_x29 = in_stack_000001d0;
                uVar41 = CONCAT44(0x2d,uVar5);
                fVar53 = unaff_s13;
                goto LAB_0398183c;
              }
              if (*(short *)(lVar26 + (long)(int)uVar42 * unaff_x27 + 0x20) == 0xad) {
                in_stack_000000c0._4_1_ = 1;
                unaff_x29 = in_stack_000001d0;
                uVar41 = in_stack_00001288;
                fVar53 = unaff_s13;
                goto LAB_0398183c;
              }
              if ((bStack00000000000000e0 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
                fVar67 = *(float *)(unaff_x19 + 0x1594);
                fVar46 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                if ((fVar46 <= fVar67) ||
                   (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
                  fVar47 = *_fStack00000000000000d8;
                  fVar46 = *(float *)(in_stack_000001e0 + 0xac);
                  if ((fVar46 < fVar47) &&
                     (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
                  goto LAB_0398816c;
                  goto LAB_03985120;
                }
LAB_03988210:
                fVar61 = fVar52;
                if (0.0 < fVar67) {
                  fVar61 = fVar52 / (1.0 - fVar67);
                }
                fVar67 = fVar67 + (fVar52 - fVar53 * (fStack0000000000000174 + DAT_00b5556c)) /
                                  fVar61;
LAB_039881fc:
                if (fVar46 <= fVar67) {
                  fVar67 = fVar46;
                }
                *(float *)(unaff_x19 + 0x1594) = fVar67;
                goto LAB_03980e58;
              }
LAB_03985120:
              iVar14 = *in_stack_00000038;
              if ((iVar14 != iStack0000000000000030) &&
                 ((bStack00000000000000e0 & iVar14 != -1) != 0)) {
                in_stack_0000120c = FUN_0398b72c();
                unaff_x28 = (long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                ;
                lVar26 = *(long *)(in_stack_000001c0 + 0x30);
                if (lVar26 == 0) goto thunk_FUN_01b48178;
                uVar42 = *in_stack_000001d0;
                uVar5 = uVar42 - 1;
                if (*(uint *)(lVar26 + 0x18) <= uVar5) goto LAB_03988250;
                iStack0000000000000030 = iVar14;
                if (*(short *)(lVar26 + (long)(int)uVar5 * (long)iVar17 + 0x20) == 0xad) {
                  in_stack_0000120c = in_stack_0000120c - 1;
                  in_stack_000000c0._4_1_ = 0;
                  *in_stack_000001d0 = uVar5;
                  unaff_x29 = in_stack_000001d0;
                  uVar41 = CONCAT44(0x2d,uVar5);
                  fVar53 = unaff_s13;
                  goto LAB_0398183c;
                }
              }
              if (fVar66 <= in_stack_00000118) {
                FUN_03995c64(fStack0000000000000090,unaff_s13,in_stack_00000158,in_stack_00000148,
                             in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
                bStack00000000000000e0 = 1;
                in_stack_000000c0._4_1_ = 0;
                in_stack_000000b0 = 1;
                unaff_x29 = in_stack_000001d0;
                uVar41 = in_stack_00001288;
                fVar53 = unaff_s13;
                goto LAB_0398183c;
              }
              if (*(int *)(unaff_x19 + 0x34c) == -1) {
                *(uint *)(unaff_x19 + 0x34c) = uVar42;
              }
              if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
                fVar46 = *(float *)(in_stack_000001e0 + 0xd0);
                if ((fVar46 < *(float *)(unaff_x19 + 0x15b0)) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                  fVar53 = *(float *)(unaff_x19 + 0x15b0) +
                           ((in_stack_00000020._4_4_ - fVar66) /
                           (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fStack0000000000000090;
                  if (fVar53 <= fVar46) {
                    fVar53 = fVar46;
                  }
LAB_03988100:
                  *(float *)(unaff_x19 + 0x15b0) = fVar53;
                  goto LAB_03980e58;
                }
                fVar67 = *(float *)(unaff_x19 + 0x1594);
                fVar46 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                if ((fVar67 < fVar46) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) goto LAB_03988210;
                fVar47 = *_fStack00000000000000d8;
                fVar46 = *(float *)(in_stack_000001e0 + 0xac);
                if ((fVar46 < fVar47) &&
                   (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) goto LAB_0398816c;
              }
              switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
              case 0:
              case 2:
              case 4:
                goto switchD_0398536c_caseD_0;
              case 1:
                iVar14 = FUN_021c2ce4(in_stack_00000080,*(undefined8 *)PTR_DAT_03dad388);
                uVar41 = DAT_00b92750;
                if (iVar14 == 0) {
                  in_stack_000000c0._4_1_ = 0;
                  in_stack_000001d0[0] = 0;
                  in_stack_000001d0[1] = 0;
                  unaff_x29 = in_stack_000001d0;
                  in_stack_0000120c = 0xffffffff;
                  fVar53 = unaff_s13;
                }
                else {
                  FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
                  memcpy(&stack0x000009a0,&stack0x000012a0,0x398);
                  iVar16 = FUN_0398b72c();
                  in_stack_000000c0._4_1_ = 0;
                  iVar14 = *(int *)(unaff_x19 + 0x324) + -1;
                  *(int *)(unaff_x19 + 0x324) = iVar14;
                  in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                  unaff_x29 = in_stack_000001d0;
                  in_stack_0000120c = iVar16 - 1;
                  uVar41 = CONCAT44(0x2026,iVar14);
                  fVar53 = unaff_s13;
                }
                goto LAB_0398183c;
              case 3:
                in_stack_0000120c = FUN_0398b72c();
                in_stack_000000c0._4_1_ = 0;
                break;
              case 5:
                *(undefined1 *)(unaff_x19 + 0x37c) = 1;
                FUN_03995c64(fStack0000000000000090,unaff_s13,in_stack_00000158,in_stack_00000148,
                             in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
                *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
                *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
                *(undefined4 *)(unaff_x19 + 0x374) = 0;
                *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
                *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
                goto LAB_03985554;
              case 6:
                in_stack_000000c0._4_1_ = 0;
                uVar28 = uVar42;
                break;
              default:
                in_stack_000000c0._4_1_ = 0;
                uVar28 = uVar42;
                goto LAB_03983778;
              }
LAB_03984f74:
              unaff_x29 = in_stack_000001d0;
              uVar41 = CONCAT44(3,uVar28);
              fVar53 = unaff_s13;
              goto LAB_0398183c;
            }
          }
LAB_03983778:
          if (unaff_w26 == 0) {
            if (in_stack_0000129c == 0xad) {
              lVar26 = *in_stack_000001e8;
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
              *(undefined1 *)(lVar26 + (long)(int)uVar28 * (long)iVar17 + 0x1a0) = 0;
            }
            else {
              if (*unaff_x24 == '\x02') {
                FUN_03990ec0();
              }
              else if (*unaff_x24 == '\x01') {
                FUN_03990354(in_stack_000001a8,fVar44);
              }
              uVar28 = *in_stack_000001d0;
              if ((in_stack_000000b0 & 1) != 0) {
                *(uint *)(unaff_x19 + 0x330) = uVar28;
              }
              *(uint *)(unaff_x19 + 0x334) = uVar28;
              *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
              lVar26 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
              lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              in_stack_000000b0 = 0;
              *(float *)(lVar26 + 100) = fVar45;
              *(float *)(lVar26 + 0x68) = fVar61;
            }
          }
          else {
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
            *(undefined1 *)(lVar26 + (long)(int)uVar28 * (long)iVar17 + 0x1a0) = 0;
            *(uint *)(unaff_x19 + 0x334) = uVar28;
            lVar26 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar28 = *(uint *)(lVar26 + 0x18);
            if (uVar28 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
            lVar36 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            iVar14 = *(int *)(lVar36 + 0x2c) + 1;
            *(int *)(lVar36 + 0x2c) = iVar14;
            *(int *)(unaff_x19 + 0x348) = iVar14;
            if (uVar28 <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            *(float *)(lVar26 + 100) = fVar45;
            *(float *)(lVar26 + 0x68) = fVar61;
            *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
          }
        }
        else {
          if (((in_stack_0000129c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6))
          {
            fVar53 = 0.0;
            if ((0.0 < fVar66) && (fVar53 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar53 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            if (in_stack_00000118 <
                (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar66)) + fVar53)
            {
              if (*(int *)(unaff_x19 + 0x34c) == -1) {
                *(uint *)(unaff_x19 + 0x34c) = uVar28;
              }
              in_stack_0000120c = FUN_0398b72c();
LAB_03983d74:
              unaff_x29 = in_stack_000001d0;
              uVar41 = CONCAT44(3,uVar28);
              fVar53 = unaff_s13;
              goto LAB_0398183c;
            }
          }
          if ((((in_stack_0000129c - 0x2007 < 0x23) &&
               ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (in_stack_0000129c - 10 < 2)) || (in_stack_0000129c == 0xa0)) {
LAB_03983c8c:
            if ((in_stack_0000129c == 0xad) || (in_stack_0000129c == 0x200b))
            goto UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement;
            if (in_stack_0000129c != 0x2060) {
              lVar26 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar26 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
              lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
              *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
            }
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar55 = FUN_02fdea78(in_stack_0000129c,0);
            if ((uVar55 & 1) != 0) goto LAB_03983c8c;
          }
          if (in_stack_0000129c == 0xa0) {
            lVar26 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            *(int *)(lVar26 + 0x20) = *(int *)(lVar26 + 0x20) + 1;
          }
        }
UnityEngine_UIElements_FocusController__GetRetargetedFocusedElement:
        bVar7 = *(int *)(in_stack_000001e0 + 0x74) == 1;
        if (bVar7 && bVar10) {
          bVar7 = in_stack_0000129c == 0x2d;
        }
        if (bVar7) {
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
          fVar53 = *(float *)(unaff_x19 + 0xf4);
          iVar14 = FUN_0396ac24(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
          fVar61 = (float)FUN_0396ac34(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
          lVar26 = *(long *)(unaff_x19 + 0x1a00);
          fVar52 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar52 = 1.0;
          }
          if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto thunk_FUN_01b48178;
          fVar66 = *(float *)(unaff_x19 + 0xf0);
          fVar46 = *(float *)(lVar26 + 0x2c);
          fVar45 = (float)FUN_0396b17c(*(long *)(lVar26 + 0x20),0);
          fVar44 = *_iStack0000000000000138;
          fVar45 = fVar66 * (fVar53 / (float)iVar14) * fVar61 * fVar52 * fVar46 * fVar45;
          fVar53 = *_fStack0000000000000130;
          if ((in_stack_0000129c == 10) &&
             (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
            lVar26 = *in_stack_000001e8;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar28 = *(int *)(unaff_x19 + 0x324) - 1;
            if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
            fVar52 = *(float *)(lVar26 + (long)(int)uVar28 * (long)iVar17 + 0x68);
            iVar14 = FUN_0396ac24(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto thunk_FUN_01b48178;
            fVar66 = (float)FUN_0396ac34(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            lVar26 = *(long *)(unaff_x19 + 0x1a00);
            fVar61 = in_stack_00000150;
            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
              fVar61 = 1.0;
            }
            if ((lVar26 == 0) || (*(long *)(lVar26 + 0x20) == 0)) goto thunk_FUN_01b48178;
            fVar46 = *(float *)(unaff_x19 + 0xf0);
            fVar47 = *(float *)(lVar26 + 0x2c);
            fVar45 = (float)FUN_0396b17c(*(long *)(lVar26 + 0x20),0);
            lVar26 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto LAB_03988250;
            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            fVar44 = *(float *)(lVar26 + 100);
            fVar53 = *(float *)(lVar26 + 0x68);
            fVar45 = fVar46 * (fVar52 / (float)iVar14) * fVar66 * fVar61 * fVar47 * fVar45;
          }
          fVar61 = *(float *)(unaff_x19 + 0x2f4);
          fVar52 = 0.0;
          if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
            if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
               (lVar26 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar26 == 0))
            goto thunk_FUN_01b48178;
            FUN_0396b140(&stack0x000012a0,lVar26,0);
            fVar52 = (float)FUN_0396af88(&stack0x000011c0,0);
          }
          fVar66 = *(float *)(unaff_x19 + 0x35c);
          fVar53 = (fStack000000000000012c - fVar44) - fVar53;
          bVar7 = true;
          if ((fVar66 <= fVar53) && (bVar7 = false, !NAN(fVar66))) {
            bVar7 = fVar66 == -1.0;
          }
          if (!bVar7) {
            fVar53 = fVar66;
          }
          fVar66 = 1.0;
          if (uVar35 != 0) {
            fVar66 = DAT_00b55374;
          }
          if (ABS(fVar61) + fVar45 * fVar52 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
              fVar66 * fVar53) {
            FUN_0398b3d0();
            uVar41 = *(undefined8 *)PTR_DAT_03dad340;
            memcpy(&stack0x000012a0,in_stack_00000070,0x398);
            FUN_021c3068(in_stack_00000080,&stack0x000012a0,uVar41);
          }
        }
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar26 + 0x18) <= *in_stack_000001d0) goto LAB_03988250;
        uVar28 = *(uint *)(unaff_x19 + 0x340);
        lVar26 = lVar26 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(uint *)(lVar26 + 0x6c) = uVar28;
        *(undefined4 *)(lVar26 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
        if ((bVar10) ||
           ((in_stack_0000129c < 0xe && ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) != 0))))
        {
          lVar26 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
          if (*(int *)(lVar26 + (long)(int)uVar28 * 0x60 + 0x24) == 1) goto LAB_03984168;
        }
        else {
          lVar26 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar26 == 0) goto thunk_FUN_01b48178;
LAB_03984168:
          if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
          *(undefined4 *)(lVar26 + (long)(int)uVar28 * 0x60 + 0x6c) =
               *(undefined4 *)(unaff_x19 + 0x158);
        }
        if (in_stack_0000129c != 0x200b) {
          if (in_stack_0000129c == 9) {
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            fVar53 = (float)FUN_0396ad1c(*in_stack_000001c8 + 0xb0,0);
            if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
            bVar11 = FUN_0396df8c(*in_stack_000001c8,0);
            fVar52 = *(float *)(unaff_x19 + 0x2f4);
            fVar61 = unaff_s13 * fVar53 * (float)bVar11;
            fVar53 = fVar61 * (float)(int)(fVar52 / fVar61);
            if (fVar53 <= fVar52) {
              fVar53 = fVar52 + fVar61;
            }
            *(float *)(unaff_x19 + 0x2f4) = fVar53;
          }
          else {
            fVar53 = *(float *)(unaff_x19 + 0x2f0);
            if (fVar53 == 0.0) {
              fVar52 = *(float *)(unaff_x19 + 0x2f4);
              if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                fVar53 = (float)FUN_0396af88(&stack0x000011f0,0);
                fVar56 = *(float *)(unaff_x19 + 0x19a8);
                fVar61 = (float)FUN_0396d104(&stack0x000011e0,0);
                if (*(long *)(unaff_x19 + 0x68) == 0) goto thunk_FUN_01b48178;
                fVar45 = (float)FUN_0396df4c(*(long *)(unaff_x19 + 0x68),0);
                fVar52 = fVar52 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  unaff_s13 * (fVar53 * fVar56 + fVar61) +
                                  in_stack_00000158 *
                                  (in_stack_00000148 + in_stack_00000188 + fVar45));
                goto LAB_03984260;
              }
              fVar53 = (float)FUN_0396d104(&stack0x000011e0,0);
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar61 = (float)FUN_0396df4c(*in_stack_000001c8,0);
              fVar52 = fVar52 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                (*(float *)(unaff_x19 + 0x2ec) +
                                unaff_s13 * fVar53 +
                                in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar61)
                                );
              *(float *)(unaff_x19 + 0x2f4) = fVar52;
              if ((unaff_w26 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_03984330;
              fVar52 = fVar52 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
            }
            else {
              if (*in_stack_000001c8 == 0) goto thunk_FUN_01b48178;
              fVar52 = *(float *)(unaff_x19 + 0x2f4);
              fVar61 = (float)FUN_0396df4c(*in_stack_000001c8,0);
              fVar52 = fVar52 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                (*(float *)(unaff_x19 + 0x2ec) +
                                (fVar53 - fVar56) + in_stack_00000158 * (in_stack_00000188 + fVar61)
                                );
LAB_03984260:
              *(float *)(unaff_x19 + 0x2f4) = fVar52;
              if ((unaff_w26 == 0) && (in_stack_0000129c != 0x200b)) goto LAB_03984330;
              fVar52 = fVar52 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
            }
            *(float *)(unaff_x19 + 0x2f4) = fVar52;
          }
        }
LAB_03984330:
        lVar26 = *in_stack_000001e8;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
        uVar28 = *in_stack_000001d0;
        if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
        *(undefined4 *)(lVar26 + (long)(int)uVar28 * unaff_x27 + 0x164) =
             *(undefined4 *)(unaff_x19 + 0x2f4);
        if (in_stack_0000129c == 0xd) {
          *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
        }
        if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
           (((0xd < in_stack_0000129c || ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0x2c00U) == 0))
            && (1 < in_stack_0000129c - 0x2028)))) {
          lVar26 = *in_stack_00000058;
          if (lVar26 == 0) goto thunk_FUN_01b48178;
          uVar35 = *(uint *)(unaff_x19 + 0x350);
          if (*(int *)(lVar26 + 0x18) < (int)(uVar35 + 1)) {
            if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f55658(in_stack_00000058,uVar35 + 1,1,*(undefined8 *)PTR_DAT_03dad308);
            lVar26 = *in_stack_00000058;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar35 = *(uint *)(unaff_x19 + 0x350);
          }
          if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_03988250;
          lVar36 = lVar26 + (long)(int)uVar35 * 0x14;
          *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
          fVar53 = *(float *)(unaff_x19 + 0x378);
          if (*(float *)(lVar36 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
            fVar53 = *(float *)(lVar36 + 0x30);
          }
          *(float *)(lVar36 + 0x30) = fVar53;
          if (*(char *)(unaff_x19 + 0x37c) != '\0') {
            *(undefined1 *)(unaff_x19 + 0x37c) = 0;
            *(undefined4 *)(lVar26 + (long)(int)uVar35 * 0x14 + 0x20) =
                 *(undefined4 *)(unaff_x19 + 0x324);
          }
          uVar28 = *in_stack_000001d0;
          *(uint *)(lVar26 + (long)(int)uVar35 * 0x14 + 0x24) = uVar28;
        }
        if (((in_stack_0000129c < 0xc) && ((1 << (ulong)(in_stack_0000129c & 0x1f) & 0xc08U) != 0))
           || ((in_stack_0000129c - 0x2028 < 2 ||
               (((bool)(bVar10 & in_stack_0000129c == 0x2d) ||
                ((float)uVar28 == fStack00000000000000e4)))))) {
          unaff_x29 = in_stack_000001d0;
          if (*(float *)(unaff_x19 + 0x2e0) <= 0.0) goto LAB_03984620;
          fVar53 = *(float *)(unaff_x19 + 0x338);
          fVar52 = *(float *)(unaff_x19 + 0x15ac);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          unaff_s9 = fVar53 - fVar52;
          if (((ABS(unaff_s9) <= fStack00000000000000ac) || (*(char *)(unaff_x19 + 0x2e8) != '\0'))
             || (*(char *)(unaff_x19 + 0x37c) == '\x01')) goto LAB_03984620;
          uVar48 = *(undefined4 *)(unaff_x19 + 0x328);
          uVar15 = *(undefined4 *)(unaff_x19 + 0x324);
          if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_03999c5c(unaff_s9,uVar48,uVar15,in_stack_000001c0,0);
          *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - unaff_s9;
          *(float *)(unaff_x19 + 0x2e0) = unaff_s9 + *(float *)(unaff_x19 + 0x2e0);
          unaff_x28 = (long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
          ;
          if (*(int *)(unaff_x19 + 0xad8) != *(int *)(unaff_x19 + 0x340)) goto LAB_03984620;
          FUN_021c3180(&stack0x000012a0,in_stack_00000080,*(undefined8 *)PTR_DAT_03dad338);
          memcpy(&stack0x00000230,&stack0x000012a0,0x398);
          unaff_x25 = in_stack_00000080;
          goto code_r0x039845a8;
        }
        lVar26 = *in_stack_000001e8;
        unaff_x29 = in_stack_000001d0;
        if (lVar26 == 0) goto thunk_FUN_01b48178;
LAB_03984b30:
        uVar28 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar28) goto LAB_03988250;
        if (*(char *)(lVar26 + (long)(int)uVar28 * unaff_x27 + 0x1a0) != '\0') {
          lVar26 = lVar26 + (long)(int)uVar28 * unaff_x27;
          uVar55 = *(ulong *)(unaff_x19 + 0x360);
          uVar58 = *(ulong *)(lVar26 + 0x124);
          *(ulong *)(unaff_x19 + 0x360) =
               uVar55 ^ (uVar55 ^ uVar58) &
                        ~CONCAT44(-(uint)((float)(uVar55 >> 0x20) < (float)(uVar58 >> 0x20)),
                                  -(uint)((float)uVar55 < (float)uVar58));
          uVar55 = *(ulong *)(unaff_x19 + 0x368);
          uVar58 = *(ulong *)(lVar26 + 0x130);
          *(ulong *)(unaff_x19 + 0x368) =
               uVar55 ^ (uVar55 ^ uVar58) &
                        ~CONCAT44(-(uint)((float)(uVar58 >> 0x20) < (float)(uVar55 >> 0x20)),
                                  -(uint)((float)uVar58 < (float)uVar55));
        }
        if ((uStack0000000000000094 == 0) &&
           ((6 < *(uint *)(unaff_x21 + 0x74) ||
            ((1 << (ulong)(*(uint *)(unaff_x21 + 0x74) & 0x1f) & 0x4aU) == 0)))) goto LAB_03984e08;
        if (((unaff_w26 == 0) && ((in_stack_0000129c != 0x2d && (in_stack_0000129c != 0x200b)))) &&
           (in_stack_0000129c != 0xad)) {
          if (*(char *)(unaff_x19 + 0x37d) != '\0') goto LAB_03984d70;
LAB_03984c40:
          if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar55 = FUN_0399a608(in_stack_0000129c,0);
          if ((uVar55 & 1) == 0) {
LAB_03984c88:
            if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar55 = FUN_0399a678(in_stack_0000129c,0);
            if ((uVar55 & 1) == 0) goto LAB_03984d70;
            if (in_stack_00000068 == 0) goto thunk_FUN_01b48178;
          }
          else {
            if ((in_stack_00000068 == 0) ||
               (lVar26 = FUN_0399d0fc(in_stack_00000068,0), lVar26 == 0)) goto thunk_FUN_01b48178;
            if (*(char *)(lVar26 + 0x28) != '\0') goto LAB_03984c88;
          }
          lVar26 = FUN_0399d0fc(in_stack_00000068,0);
          if ((lVar26 == 0) || (lVar26 = FUN_0399f504(lVar26,0), lVar26 == 0))
          goto thunk_FUN_01b48178;
          uVar55 = System_Array_InternalEnumerator<al>__System_Collections_IEnumerator_get_Current
                             (lVar26,in_stack_0000129c,*(undefined8 *)PTR_DAT_03d9d288);
          if ((int)*unaff_x29 < (int)fStack00000000000000e4) {
            lVar26 = FUN_0399d0fc(in_stack_00000068,0);
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            lVar26 = FUN_0399f804(lVar26,0);
            lVar36 = *in_stack_000001e8;
            if (lVar36 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar36 + 0x18) <= *unaff_x29 + 1) goto LAB_03988250;
            if (lVar26 == 0) goto thunk_FUN_01b48178;
            uVar58 = System_Array_InternalEnumerator<al>__System_Collections_IEnumerator_get_Current
                               (lVar26,*(undefined2 *)
                                        (lVar36 + (long)(int)(*unaff_x29 + 1) * (long)iVar17 + 0x20)
                                ,*(undefined8 *)PTR_DAT_03d9d288);
            if ((uVar55 & 1) != 0) goto LAB_03984f8c;
            if ((uVar58 & 1) == 0) goto LAB_03985278;
            if ((bStack00000000000000e0 & 1) != 0) goto LAB_03984fac;
            goto LAB_03984df8;
          }
          if ((uVar55 & 1) == 0) {
LAB_03985278:
            FUN_0398b3d0();
            bStack00000000000000e0 = 0;
            goto LAB_03984e08;
          }
LAB_03984f8c:
          if ((float)uVar13 != in_stack_000001b8._4_4_ || ((bStack00000000000000e0 ^ 0xff) & 1) != 0
             ) goto LAB_03984e08;
LAB_03984fac:
          if (unaff_w26 != 0) {
            FUN_0398b3d0();
          }
        }
        else {
          if (*(char *)(unaff_x19 + 0x37d) != '\x01') {
            if ((((0x28 < in_stack_0000129c - 0x2007) ||
                 ((1L << ((ulong)(in_stack_0000129c - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
                (in_stack_0000129c != 0xa0)) && (in_stack_0000129c != 0x2060)) {
              FUN_0398b3d0();
              bStack00000000000000e0 = 0;
              *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
              goto LAB_03984e08;
            }
            goto LAB_03984c40;
          }
LAB_03984d70:
          if ((bStack00000000000000e0 & 1) == 0) {
LAB_03984df8:
            bStack00000000000000e0 = 0;
            goto LAB_03984e08;
          }
          if ((unaff_w26 != 0 && in_stack_0000129c != 0xa0) ||
             ((in_stack_000000c0._4_1_ & 1) == 0 && in_stack_0000129c == 0xad)) {
            FUN_0398b3d0();
          }
        }
        FUN_0398b3d0();
        bStack00000000000000e0 = 1;
LAB_03984e08:
        FUN_0398b3d0();
        *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
        uVar41 = in_stack_00001288;
        fVar53 = unaff_s13;
        goto LAB_0398183c;
      }
      goto LAB_03988250;
    }
  }
  goto thunk_FUN_01b48178;
switchD_0398536c_caseD_0:
  FUN_03995c64(fStack0000000000000090,unaff_s13,in_stack_00000158,in_stack_00000148,
               in_stack_00000188,fStack0000000000000174,in_stack_00000088._4_4_);
LAB_03985554:
  in_stack_000000c0._4_1_ = 0;
  unaff_x29 = in_stack_000001d0;
  goto LAB_03984af8;
LAB_03985ef4:
  do {
    uVar13 = uVar35 - 1;
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
    lVar43 = (long)(int)uVar13;
    lVar36 = lVar26 + lVar43 * 0x188;
    lVar29 = *(long *)(lVar36 + 0x40);
    uVar1 = *(ushort *)(lVar36 + 0x20);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    bVar11 = FUN_02fdb080(uVar1,0);
    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03988250;
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    uVar42 = (uint)uVar1;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    uVar5 = *(uint *)(lVar26 + lVar43 * 0x188 + 0x6c);
    if (*(uint *)(lVar36 + 0x18) <= uVar5) goto LAB_03988250;
    lVar31 = (long)(int)uVar5;
    lVar36 = lVar36 + lVar31 * 0x60;
    uVar3 = *(uint *)(lVar36 + 0x40);
    uVar39 = *(uint *)(lVar36 + 0x6c);
    iVar16 = *(int *)(lVar36 + 0x20);
    iVar17 = *(int *)(lVar36 + 0x28);
    iVar14 = *(int *)(lVar36 + 0x2c);
    uVar4 = *(uint *)(lVar36 + 0x44);
    lVar32 = (long)(int)uVar4;
    fVar44 = *(float *)(lVar36 + 0x50);
    fVar47 = *(float *)(lVar36 + 0x58);
    fVar56 = *(float *)(lVar36 + 0x5c);
    fVar45 = *(float *)(lVar36 + 0x60);
    fVar63 = *(float *)(lVar36 + 100);
    fVar67 = *(float *)(lVar36 + 0x70);
    fVar64 = *(float *)(lVar36 + 0x74);
    fVar66 = *(float *)(lVar36 + 0x78);
    fVar46 = *(float *)(lVar36 + 0x7c);
    if ((int)uVar39 < 0x421) {
      if ((int)uVar39 < 0x209) {
        if ((int)uVar39 < 0x111) {
          switch(uVar39) {
          case 0x101:
            goto switchD_0398604c_caseD_1001;
          case 0x102:
            goto switchD_0398604c_caseD_1002;
          case 0x103:
          case 0x105:
          case 0x106:
          case 0x107:
            break;
          case 0x104:
            goto switchD_0398604c_caseD_1004;
          case 0x108:
            goto switchD_0398604c_caseD_1008;
          default:
            if (uVar39 == 0x110) goto switchD_0398604c_caseD_1008;
          }
        }
        else {
          switch(uVar39) {
          case 0x201:
            goto switchD_0398604c_caseD_1001;
          case 0x202:
            goto switchD_0398604c_caseD_1002;
          case 0x203:
          case 0x205:
          case 0x206:
          case 0x207:
            break;
          case 0x204:
            goto switchD_0398604c_caseD_1004;
          case 0x208:
            goto switchD_0398604c_caseD_1008;
          default:
            if (uVar39 == 0x120) goto LAB_039861b0;
          }
        }
      }
      else if ((int)uVar39 < 0x405) {
        if ((int)uVar39 < 0x401) {
          if (uVar39 == 0x210) goto switchD_0398604c_caseD_1008;
          if (uVar39 == 0x220) goto LAB_039861b0;
        }
        else {
          if (uVar39 == 0x401) goto switchD_0398604c_caseD_1001;
          if (uVar39 == 0x402) goto switchD_0398604c_caseD_1002;
          if (uVar39 == 0x404) goto switchD_0398604c_caseD_1004;
        }
      }
      else {
        if ((uVar39 == 0x408) || (uVar39 == 0x410)) goto switchD_0398604c_caseD_1008;
        if (uVar39 == 0x420) goto LAB_039861b0;
      }
      goto switchD_0398604c_caseD_1003;
    }
    if (0x1008 < (int)uVar39) {
      if ((int)uVar39 < 0x2005) {
        if (0x2000 < (int)uVar39) {
          if (uVar39 == 0x2001) goto switchD_0398604c_caseD_1001;
          if (uVar39 == 0x2002) goto switchD_0398604c_caseD_1002;
          if (uVar39 == 0x2004) goto switchD_0398604c_caseD_1004;
          goto switchD_0398604c_caseD_1003;
        }
        if (uVar39 != 0x1010) {
          uVar24 = 0x1020;
          goto LAB_03986170;
        }
      }
      else if ((uVar39 != 0x2008) && (uVar39 != 0x2010)) {
        uVar24 = 0x2020;
LAB_03986170:
        if (uVar39 != uVar24) goto switchD_0398604c_caseD_1003;
LAB_039861b0:
        fVar56 = fVar67 + fVar66;
        goto LAB_039861c4;
      }
      goto switchD_0398604c_caseD_1008;
    }
    if ((int)uVar39 < 0x811) {
      switch(uVar39) {
      case 0x801:
        goto switchD_0398604c_caseD_1001;
      case 0x802:
        goto switchD_0398604c_caseD_1002;
      case 0x803:
      case 0x805:
      case 0x806:
      case 0x807:
        break;
      case 0x804:
        goto switchD_0398604c_caseD_1004;
      case 0x808:
switchD_0398604c_caseD_1008:
        if ((int)uVar13 <= (int)uVar4) {
          if (uVar42 < 0xad) {
            if ((uVar42 != 3) && (uVar42 != 10))
            goto UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__StrictOrder;
          }
          else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
UnityEngine_UIElements_NavigateFocusRing_FocusableHierarchyTraversal__StrictOrder:
            if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_03988250;
            uVar2 = *(undefined2 *)(lVar26 + (long)(int)uVar3 * 0x188 + 0x20);
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              plVar40 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
            }
            uVar21 = FUN_02fde5f4(uVar2,0);
            if ((uVar21 & 1) == 0) {
              bVar9 = (int)uVar5 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar9 = false;
            }
            if ((fVar56 <= fVar45) && (!bVar9 && (uVar39 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar63;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar45 + fVar63;
              }
              goto LAB_039861c8;
            }
            if ((uVar35 == 1) || (uVar5 != uVar28)) {
              cVar23 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar23 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar13 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar14 = (iVar14 - iVar16) - (uStack0000000000000094 & 1);
                fVar63 = -fVar56;
                if (cVar23 != '\0') {
                  fVar63 = fVar56;
                }
                if (iVar14 < 1) {
                  fVar56 = 1.0;
                }
                else {
                  fVar56 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar14 < 2) {
                  iVar14 = 1;
                }
                fVar45 = fVar45 + fVar63;
                if (uVar42 == 9) {
LAB_03987f80:
                  if (cVar23 != '\0') {
                    fVar45 = fVar45 * (1.0 - fVar56);
                    fVar63 = (float)iVar14;
LAB_03987fbc:
                    in_stack_00000158 = in_stack_00000158 - fVar45 / fVar63;
                    break;
                  }
                  fVar63 = (float)iVar14;
                  fVar45 = fVar45 * (1.0 - fVar56);
                }
                else {
                  if (uVar42 != 0xa0) {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar21 = FUN_02fdea78(uVar42,0);
                    cVar23 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar21 & 1) != 0) goto LAB_03987f80;
                  }
                  fVar45 = fVar45 * fVar56;
                  fVar63 = (float)(int)((iVar16 - (~uStack0000000000000094 & 1)) + iVar17);
                  if (cVar23 != '\0') goto LAB_03987fbc;
                }
                in_stack_00000158 = in_stack_00000158 + fVar45 / fVar63;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar63;
            if (cVar23 != '\0') {
              in_stack_00000158 = fVar45 + fVar63;
            }
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uStack0000000000000094 = FUN_02fdea78(uVar42,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar39 == 0x810) goto switchD_0398604c_caseD_1008;
      }
    }
    else {
      switch(uVar39) {
      case 0x1001:
switchD_0398604c_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar63 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar56;
        }
        break;
      case 0x1002:
switchD_0398604c_caseD_1002:
LAB_039861c4:
        in_stack_00000158 = (fVar63 + fVar45 * 0.5) - fVar56 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_0398604c_caseD_1003;
      case 0x1004:
switchD_0398604c_caseD_1004:
        in_stack_00000158 = (fVar45 + fVar63) - fVar56;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar45 + fVar63;
        }
        break;
      case 0x1008:
        goto switchD_0398604c_caseD_1008;
      default:
        if (uVar39 == 0x820) goto LAB_039861b0;
        goto switchD_0398604c_caseD_1003;
      }
LAB_039861c8:
      _in_stack_00000148 = 0;
    }
switchD_0398604c_caseD_1003:
    uVar39 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar39 <= uVar13) goto LAB_03988250;
    lVar36 = lVar26 + lVar43 * 0x188;
    fVar63 = fStack0000000000000120 + in_stack_00000158;
    fVar56 = (float)_in_stack_00000118 + (float)_in_stack_00000148;
    fVar45 = (float)((ulong)_in_stack_00000118 >> 0x20) + (float)((ulong)_in_stack_00000148 >> 0x20)
    ;
    if (*(char *)(lVar36 + 0x1a0) == '\0') goto LAB_03986a64;
    cVar23 = *(char *)(lVar26 + lVar43 * 0x188 + 0x28);
    if (cVar23 != '\x01') goto UnityEngine_UIElements_PanelSettings__get_clearColor;
    fVar61 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar5,1.0);
    plVar40 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar61 = 1.0;
      lVar27 = lVar26 + lVar43 * 0x188;
      *(undefined4 *)(lVar27 + 0xbc) = 0;
      *(undefined4 *)(lVar27 + 0x94) = 0;
      *(undefined4 *)(lVar27 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar46 = *(float *)(lVar26 + lVar43 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar27 = lVar26 + lVar43 * 0x188;
        fVar66 = (in_stack_00000158 + fVar46) - *(float *)(unaff_x19 + 0x360);
        fVar46 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03986374;
      }
      lVar27 = lVar26 + lVar43 * 0x188;
      fVar66 = fVar66 - fVar67;
      *(float *)(lVar27 + 0xbc) = fVar61 + (fVar46 - fVar67) / fVar66;
      *(float *)(lVar27 + 0x94) = fVar61 + (*(float *)(lVar27 + 0x78) - fVar67) / fVar66;
      *(float *)(lVar27 + 0xe4) = fVar61 + (*(float *)(lVar27 + 200) - fVar67) / fVar66;
      fVar61 = fVar61 + (*(float *)(lVar27 + 0xf0) - fVar67) / fVar66;
      break;
    case 2:
      lVar27 = lVar26 + lVar43 * 0x188;
      fVar46 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar66 = (in_stack_00000158 + *(float *)(lVar27 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03986374:
      *(float *)(lVar27 + 0xbc) = fVar61 + fVar66 / fVar46;
      *(float *)(lVar27 + 0x94) =
           fVar61 + ((in_stack_00000158 + *(float *)(lVar27 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar27 + 0xe4) =
           fVar61 + ((in_stack_00000158 + *(float *)(lVar27 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar61 = fVar61 + ((in_stack_00000158 + *(float *)(lVar27 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar27 = lVar26 + lVar43 * 0x188;
        *(undefined4 *)(lVar27 + 0xc0) = 0;
        *(undefined4 *)(lVar27 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar27 + 0xe8) = 0;
        *(undefined4 *)(lVar27 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar46 = fVar46 - fVar64;
        lVar27 = lVar26 + lVar43 * 0x188;
        fVar66 = fVar61 + (*(float *)(lVar27 + 0xa4) - fVar64) / fVar46;
        fVar46 = fVar61 + (*(float *)(lVar27 + 0x7c) - fVar64) / fVar46;
        *(float *)(lVar27 + 0xc0) = fVar66;
        *(float *)(lVar27 + 0x98) = fVar46;
        *(float *)(lVar27 + 0xe8) = fVar66;
        *(float *)(lVar27 + 0x110) = fVar46;
        break;
      case 2:
        lVar27 = lVar26 + lVar43 * 0x188;
        fVar66 = fVar61 + (*(float *)(lVar27 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar27 + 0xc0) = fVar66;
        fVar46 = *(float *)(unaff_x19 + 0x364);
        fVar67 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar27 + 0xe8) = fVar66;
        fVar66 = fVar61 + (*(float *)(lVar27 + 0x7c) - fVar46) / (fVar67 - fVar46);
        *(float *)(lVar27 + 0x98) = fVar66;
        *(float *)(lVar27 + 0x110) = fVar66;
        break;
      case 3:
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
        uVar39 = (uint)*(undefined8 *)(lVar26 + 0x18);
      }
      if (uVar39 <= uVar13) goto LAB_03988250;
      lVar27 = lVar26 + lVar43 * 0x188;
      fVar66 = *(float *)(lVar27 + 0x168);
      fVar46 = (1.0 - (*(float *)(lVar27 + 0xc0) + *(float *)(lVar27 + 0x98)) * fVar66) * 0.5;
      fVar67 = fVar61 + *(float *)(lVar27 + 0xc0) * fVar66 + fVar46;
      fVar61 = fVar61 + *(float *)(lVar27 + 0x98) * fVar66 + fVar46;
      *(float *)(lVar27 + 0xbc) = fVar67;
      *(float *)(lVar27 + 0x94) = fVar67;
      *(float *)(lVar27 + 0xe4) = fVar61;
      break;
    default:
      goto switchD_039862ac_default;
    }
    *(float *)(lVar26 + lVar43 * 0x188 + 0x10c) = fVar61;
switchD_039862ac_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar39 <= uVar13) goto LAB_03988250;
      lVar27 = lVar26 + lVar43 * 0x188;
      *(undefined4 *)(lVar27 + 0xc0) = 0;
      *(undefined4 *)(lVar27 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0x110) = 0;
      break;
    case 1:
      if (uVar13 < uVar39) {
        fVar44 = fVar44 - fVar47;
        lVar27 = lVar26 + lVar43 * 0x188;
        fVar61 = (*(float *)(lVar27 + 0xa4) - fVar47) / fVar44;
        fVar44 = (*(float *)(lVar27 + 0x7c) - fVar47) / fVar44;
        *(float *)(lVar27 + 0xc0) = fVar61;
        goto FUN_03986724;
      }
      goto LAB_03988250;
    case 2:
      if (uVar39 <= uVar13) goto LAB_03988250;
      lVar27 = lVar26 + lVar43 * 0x188;
      fVar61 = (*(float *)(lVar27 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar27 + 0xc0) = fVar61;
      fVar44 = (*(float *)(lVar27 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
FUN_03986724:
      *(float *)(lVar27 + 0x98) = fVar44;
      *(float *)(lVar27 + 0xe8) = fVar44;
      *(float *)(lVar27 + 0x110) = fVar61;
      break;
    case 3:
      if (uVar39 <= uVar13) goto LAB_03988250;
      lVar27 = lVar26 + lVar43 * 0x188;
      fVar44 = *(float *)(lVar27 + 0x168);
      fVar66 = (1.0 - (*(float *)(lVar27 + 0xbc) + *(float *)(lVar27 + 0xe4)) / fVar44) * 0.5;
      fVar61 = *(float *)(lVar27 + 0xbc) / fVar44 + fVar66;
      fVar66 = *(float *)(lVar27 + 0xe4) / fVar44 + fVar66;
      *(float *)(lVar27 + 0xc0) = fVar61;
      *(float *)(lVar27 + 0x98) = fVar66;
      *(float *)(lVar27 + 0x110) = fVar61;
      *(float *)(lVar27 + 0xe8) = fVar66;
    }
    if (uVar39 <= uVar13) goto LAB_03988250;
    lVar27 = lVar26 + lVar43 * 0x188;
    fVar61 = *(float *)(lVar27 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar27 + 100) == '\0') && ((*(byte *)(lVar26 + lVar43 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar61 = -fVar61;
    }
    lVar27 = lVar26 + lVar43 * 0x188;
    *(float *)(lVar27 + 0xb8) = fVar61;
    *(float *)(lVar27 + 0x90) = fVar61;
    *(float *)(lVar27 + 0xe0) = fVar61;
    *(float *)(lVar27 + 0x108) = fVar61;
    *(undefined4 *)(lVar27 + 0xbc) = 0x3f800000;
    *(float *)(lVar27 + 0xc0) = fVar61;
    *(undefined4 *)(lVar27 + 0x94) = 0x3f800000;
    *(float *)(lVar27 + 0x98) = fVar61;
    *(undefined4 *)(lVar27 + 0xe4) = 0x3f800000;
    *(float *)(lVar27 + 0xe8) = fVar61;
    *(undefined4 *)(lVar27 + 0x10c) = 0x3f800000;
    *(float *)(lVar27 + 0x110) = fVar61;
UnityEngine_UIElements_PanelSettings__get_clearColor:
    if (((int)uVar13 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar5) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar5) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5))
        goto UnityEngine_UIElements_PanelSettings__get_dynamicAtlasSettings;
        if (uVar13 < uVar39) {
          bVar9 = *(uint *)(lVar26 + lVar43 * 0x188 + 0x70) == uStack0000000000000064;
          goto LAB_03986880;
        }
        goto LAB_03988250;
      }
      if (uVar39 <= uVar13) goto LAB_03988250;
UnityEngine_UIElements_PanelSettings___ctor:
      lVar36 = lVar26 + lVar43 * 0x188;
      *(ulong *)(lVar36 + 0xa0) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0xa0) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar36 + 0xa0));
      *(float *)(lVar36 + 0xa8) = fVar45 + *(float *)(lVar36 + 0xa8);
      *(ulong *)(lVar36 + 0x78) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0x78) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar36 + 0x78));
      *(float *)(lVar36 + 0x80) = fVar45 + *(float *)(lVar36 + 0x80);
      *(ulong *)(lVar36 + 200) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 200) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar36 + 200));
      *(float *)(lVar36 + 0xd0) = fVar45 + *(float *)(lVar36 + 0xd0);
      *(ulong *)(lVar36 + 0xf0) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0xf0) >> 0x20),
                    fVar63 + (float)*(undefined8 *)(lVar36 + 0xf0));
      *(float *)(lVar36 + 0xf8) = fVar45 + *(float *)(lVar36 + 0xf8);
    }
    else {
UnityEngine_UIElements_PanelSettings__get_dynamicAtlasSettings:
      bVar9 = false;
LAB_03986880:
      if (uVar39 <= uVar13) goto LAB_03988250;
      if (bVar9) goto UnityEngine_UIElements_PanelSettings___ctor;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(plVar40);
        DAT_03fed257 = '\x01';
        uVar39 = *(uint *)(lVar26 + 0x18);
      }
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar40 + 0xb8) + 1);
      lVar27 = lVar26 + lVar43 * 0x188;
      *(undefined8 *)(lVar27 + 0xa0) = **(undefined8 **)(*plVar40 + 0xb8);
      *(undefined4 *)(lVar27 + 0xa8) = uVar15;
      if (uVar39 <= uVar13) goto LAB_03988250;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar40 + 0xb8) + 1);
      lVar27 = lVar26 + lVar43 * 0x188;
      *(undefined8 *)(lVar27 + 0x78) = **(undefined8 **)(*plVar40 + 0xb8);
      *(undefined4 *)(lVar27 + 0x80) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar40 + 0xb8) + 1);
      *(undefined8 *)(lVar27 + 200) = **(undefined8 **)(*plVar40 + 0xb8);
      *(undefined4 *)(lVar27 + 0xd0) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar40 + 0xb8) + 1);
      *(undefined8 *)(lVar27 + 0xf0) = **(undefined8 **)(*plVar40 + 0xb8);
      *(undefined4 *)(lVar27 + 0xf8) = uVar15;
      *(undefined1 *)(lVar36 + 0x1a0) = 0;
    }
    iVar17 = FUN_038fcab0(0);
    if (iVar17 == 1) {
      cVar38 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar38 = '\0';
    }
    if (cVar23 == '\x01') {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03998984(uVar13,cVar38 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar23 == '\x02') {
      if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_039993bc(uVar13,cVar38 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_03986a64:
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
    lVar36 = lVar36 + lVar43 * 0x188;
    uVar41 = *(undefined8 *)(lVar36 + 0x124);
    *(undefined8 *)(lVar36 + 0x124) =
         CONCAT44(fVar56 + (float)((ulong)uVar41 >> 0x20),fVar63 + (float)uVar41);
    *(float *)(lVar36 + 300) = fVar45 + *(float *)(lVar36 + 300);
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
    lVar36 = lVar36 + lVar43 * 0x188;
    *(ulong *)(lVar36 + 0x118) =
         CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0x118) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar36 + 0x118));
    *(float *)(lVar36 + 0x120) = fVar45 + *(float *)(lVar36 + 0x120);
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
    lVar36 = lVar36 + lVar43 * 0x188;
    *(ulong *)(lVar36 + 0x130) =
         CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0x130) >> 0x20),
                  fVar63 + (float)*(undefined8 *)(lVar36 + 0x130));
    *(float *)(lVar36 + 0x138) = fVar45 + *(float *)(lVar36 + 0x138);
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
    lVar36 = lVar36 + lVar43 * 0x188;
    *(float *)(lVar36 + 0x13c) = fVar63 + *(float *)(lVar36 + 0x13c);
    *(ulong *)(lVar36 + 0x140) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                  fVar56 + (float)*(undefined8 *)(lVar36 + 0x140));
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    uVar39 = *(uint *)(lVar36 + 0x18);
    if (uVar39 <= uVar13) goto LAB_03988250;
    lVar27 = lVar36 + lVar43 * 0x188;
    *(float *)(lVar27 + 0x148) = fVar63 + *(float *)(lVar27 + 0x148);
    *(float *)(lVar27 + 0x164) = fVar63 + *(float *)(lVar27 + 0x164);
    *(float *)(lVar27 + 0x154) = fVar56 + *(float *)(lVar27 + 0x154);
    uVar41 = *(undefined8 *)(lVar27 + 0x14c);
    *(undefined8 *)(lVar27 + 0x14c) =
         CONCAT44(fVar56 + (float)((ulong)uVar41 >> 0x20),fVar56 + (float)uVar41);
    if (uVar5 == uVar28) {
      uVar28 = *in_stack_000001d0 - 1;
      if (uVar13 == uVar28) goto LAB_03986c5c;
    }
    else {
      lVar27 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar27 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar27 + 0x18) <= uVar28) goto LAB_03988250;
      lVar33 = (long)(int)uVar28;
      lVar37 = lVar27 + lVar33 * 0x60;
      fVar45 = fVar56 + *(float *)(lVar37 + 0x58);
      *(ulong *)(lVar37 + 0x50) =
           CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar37 + 0x50) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar37 + 0x50));
      *(float *)(lVar37 + 0x58) = fVar45;
      *(float *)(lVar37 + 0x5c) = fVar63 + *(float *)(lVar37 + 0x5c);
      if (uVar39 <= *(uint *)(lVar37 + 0x38)) goto LAB_03988250;
      uVar15 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar37 + 0x38) * 0x188 + 0x124);
      lVar27 = lVar27 + lVar33 * 0x60;
      *(float *)(lVar27 + 0x74) = fVar45;
      *(undefined4 *)(lVar27 + 0x70) = uVar15;
      lVar36 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar36 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar36 + 0x18) <= uVar28) goto LAB_03988250;
      lVar27 = *in_stack_000001e8;
      if (lVar27 == 0) goto thunk_FUN_01b48178;
      uVar28 = *(uint *)(lVar36 + lVar33 * 0x60 + 0x44);
      if (*(uint *)(lVar27 + 0x18) <= uVar28) goto LAB_03988250;
      lVar36 = lVar36 + lVar33 * 0x60;
      *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar28 * 0x188 + 0x130);
      *(undefined4 *)(lVar36 + 0x7c) = *(undefined4 *)(lVar36 + 0x50);
      uVar28 = *in_stack_000001d0 - 1;
LAB_03986c5c:
      if (uVar13 == uVar28) {
        lVar36 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar5) goto LAB_03988250;
        lVar27 = lVar36 + lVar31 * 0x60;
        fVar45 = fVar56 + *(float *)(lVar27 + 0x58);
        *(ulong *)(lVar27 + 0x50) =
             CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar27 + 0x50) >> 0x20),
                      fVar56 + (float)*(undefined8 *)(lVar27 + 0x50));
        *(float *)(lVar27 + 0x58) = fVar45;
        *(float *)(lVar27 + 0x5c) = fVar63 + *(float *)(lVar27 + 0x5c);
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar33 + 0x18) <= *(uint *)(lVar27 + 0x38)) goto LAB_03988250;
        uVar15 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar27 + 0x38) * 0x188 + 0x124);
        lVar36 = lVar36 + lVar31 * 0x60;
        *(float *)(lVar36 + 0x74) = fVar45;
        *(undefined4 *)(lVar36 + 0x70) = uVar15;
        lVar36 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar5) goto LAB_03988250;
        lVar27 = *in_stack_000001e8;
        if (lVar27 == 0) goto thunk_FUN_01b48178;
        uVar28 = *(uint *)(lVar36 + lVar31 * 0x60 + 0x44);
        if (*(uint *)(lVar27 + 0x18) <= uVar28) goto LAB_03988250;
        lVar36 = lVar36 + lVar31 * 0x60;
        *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar27 + (long)(int)uVar28 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar36 + 0x7c) = *(undefined4 *)(lVar36 + 0x50);
      }
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar21 = FUN_02fddb80(uVar42,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar35 == 1) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          bVar12 = FUN_02fddab4(uVar42,0);
          if (((uVar42 == 0x200b) || (((bVar11 | bVar12 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_03987688;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar35 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar26 + 0x18) - 1))) &&
           (((int)uVar13 < (int)*in_stack_000001d0 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar26 + 0x18) <= uVar35 - 2) goto LAB_03988250;
          uVar2 = *(undefined2 *)(lVar26 + _in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fddb80(uVar2,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_03988250;
            uVar2 = *(undefined2 *)(lVar26 + _in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar21 = FUN_02fddb80(uVar2,0);
            if ((uVar21 & 1) != 0) goto LAB_03986e44;
          }
        }
LAB_03987688:
        if (uVar13 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fddb80(uVar42,0);
          fStack0000000000000170 = (float)uVar13;
          if ((uVar21 & 1) == 0) goto LAB_039876c4;
        }
        else {
LAB_039876c4:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar36 = *plVar19;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        uVar28 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar36 + 0x18);
        if (iVar17 < (int)(uVar28 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f554fc(plVar19,iVar17 + 1,*(undefined8 *)PTR_DAT_03dad310);
          lVar36 = *plVar19;
          if (lVar36 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar36 + 0x18) <= uVar28) goto LAB_03988250;
        lVar36 = lVar36 + (long)(int)uVar28 * 0xc;
        *(uint *)(lVar36 + 0x20) = uStack0000000000000168;
        *(float *)(lVar36 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar36 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar36 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar5) goto LAB_03988250;
        lVar36 = lVar36 + lVar31 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar36 + 0x34) = *(int *)(lVar36 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar13;
      }
      if (uVar13 == *in_stack_000001d0 - 1) {
        lVar36 = *plVar19;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        uVar28 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar17 = *(int *)(lVar36 + 0x18);
        if (iVar17 < (int)(uVar28 + 1)) {
          if (*(int *)(*(long *)PTR_DAT_03dad318 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f554fc(plVar19,iVar17 + 1,*(undefined8 *)PTR_DAT_03dad310);
          lVar36 = *plVar19;
          if (lVar36 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar36 + 0x18) <= uVar28) goto LAB_03988250;
        lVar36 = lVar36 + (long)(int)uVar28 * 0xc;
        *(uint *)(lVar36 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar36 + 0x24) = uVar13;
        *(uint *)(lVar36 + 0x28) = uVar35 - uStack0000000000000168;
        lVar36 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar5) goto LAB_03988250;
        lVar36 = lVar36 + lVar31 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar36 + 0x34) = *(int *)(lVar36 + 0x34) + 1;
      }
LAB_03986e44:
      uStack000000000000016c = 1;
    }
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    uVar28 = *(uint *)(lVar36 + 0x18);
    if (uVar28 <= uVar13) goto LAB_03988250;
    if ((*(byte *)(lVar36 + lVar43 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar8) {
LAB_03986e78:
        if (uVar35 - 2 < uVar28) {
          uVar15 = *(undefined4 *)(lVar36 + _in_stack_000001a8 + -0x354);
          uVar59 = *(undefined4 *)(lVar36 + _in_stack_000001a8 + -0x318);
          goto LAB_039870dc;
        }
        goto LAB_03988250;
      }
LAB_03987034:
      bVar8 = false;
    }
    else {
      lVar31 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar31 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto LAB_03988250;
      iVar17 = *(int *)(lVar36 + lVar43 * 0x188 + 0x70);
      *(int *)(lVar36 + lVar43 * 0x188 + 0x178) =
           *(int *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar5)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = iVar17 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (uVar42 != 0x200b && (bVar11 & 1) == 0) {
        fVar45 = *(float *)(lVar36 + lVar43 * 0x188 + 0x16c);
        if (fVar52 <= fVar45) {
          fVar52 = fVar45;
        }
        if (iVar17 != in_stack_000000c0._4_4_) {
          fStack000000000000015c = fVar53;
        }
        if (lVar29 == 0) goto thunk_FUN_01b48178;
        fVar45 = *(float *)(lVar36 + lVar43 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar61)) {
          fStack0000000000000174 = ABS(fVar61);
        }
        FUN_0396d8d8(&stack0x000012a0,lVar29,0);
        memcpy(&stack0x00001210,&stack0x000012a0,0x60);
        fVar66 = (float)FUN_0396ace4(&stack0x00001210,0);
        fVar45 = fVar45 + fVar52 * fVar66;
        in_stack_000000c0._4_4_ = iVar17;
        if (fVar45 <= fStack000000000000015c) {
          fStack000000000000015c = fVar45;
        }
      }
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar4 < (int)uVar13)) ||
         (bVar8 || bVar9)) {
LAB_03987028:
        if (!bVar8) goto LAB_03987034;
      }
      else {
        if (uVar13 == uVar4) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fdea78(uVar42,0);
          if ((uVar21 & 1) != 0) goto LAB_03987028;
        }
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
        lVar36 = lVar36 + lVar43 * 0x188;
        fStack00000000000000d8 = *(float *)(lVar36 + 0x16c);
        fStack00000000000000d4 = *(float *)(lVar36 + 0x124);
        bVar8 = fVar52 != 0.0;
        uVar48 = *(undefined4 *)(lVar36 + 0x174);
        fVar45 = fStack00000000000000d8;
        if (bVar8) {
          fVar45 = fVar52;
        }
        fVar52 = fVar45;
        uStack00000000000000d0 = 0;
        fVar45 = fVar61;
        if (bVar8) {
          fVar45 = fStack0000000000000174;
        }
        fStack00000000000000cc = fStack000000000000015c;
        fStack0000000000000174 = fVar45;
      }
      if (*in_stack_000001d0 == 1) {
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
        lVar36 = lVar36 + lVar43 * 0x188;
        uVar15 = *(undefined4 *)(lVar36 + 0x130);
        uVar59 = *(undefined4 *)(lVar36 + 0x16c);
LAB_039870dc:
        FUN_039916e4(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,uVar15,
                     fStack000000000000015c,0,fStack00000000000000d8,uVar59);
      }
      else {
        if ((uVar13 == uVar3) || ((int)uVar4 <= (int)uVar13)) {
          lVar36 = *in_stack_000001e8;
          if (lVar36 != 0) {
            lVar31 = lVar43;
            uVar28 = uVar13;
            if (uVar42 == 0x200b || (bVar11 & 1) != 0) {
              lVar31 = lVar32;
              uVar28 = uVar4;
            }
            if (uVar28 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + lVar31 * 0x188;
              uVar15 = *(undefined4 *)(lVar36 + 0x130);
              uVar59 = *(undefined4 *)(lVar36 + 0x16c);
              goto LAB_039870dc;
            }
            goto LAB_03988250;
          }
          goto thunk_FUN_01b48178;
        }
        if (bVar9) {
          lVar36 = *in_stack_000001e8;
          if (lVar36 != 0) {
            uVar28 = *(uint *)(lVar36 + 0x18);
            goto LAB_03986e78;
          }
          goto thunk_FUN_01b48178;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar13) {
LAB_03987844:
          bVar8 = true;
          goto LAB_03987118;
        }
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar35) goto LAB_03988250;
        uVar21 = FUN_0396d7b0(uVar48,*(undefined4 *)(lVar36 + _in_stack_000001a8),0);
        if ((uVar21 & 1) != 0) goto LAB_03987844;
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
        lVar36 = lVar36 + lVar43 * 0x188;
        FUN_039916e4(fStack00000000000000d4,fStack00000000000000cc,uStack00000000000000d0,
                     *(undefined4 *)(lVar36 + 0x130),fStack000000000000015c,0,fStack00000000000000d8
                     ,*(undefined4 *)(lVar36 + 0x16c));
      }
      fVar52 = 0.0;
      bVar8 = false;
      fStack000000000000015c = DAT_00b555ec;
      fStack0000000000000174 = 0.0;
    }
LAB_03987118:
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
    if (lVar29 == 0) goto thunk_FUN_01b48178;
    uVar28 = *(uint *)(lVar36 + lVar43 * 0x188 + 0x19c);
    FUN_0396d8d8(&stack0x000012a0,lVar29,0);
    memcpy(&stack0x00001210,&stack0x000012a0,0x60);
    fVar45 = (float)FUN_0396ad04(&stack0x00001210,0);
    if ((uVar28 >> 6 & 1) == 0) {
      if (bVar7) {
        lVar36 = *in_stack_000001e8;
        if (lVar36 != 0) {
          if (uVar35 - 2 < *(uint *)(lVar36 + 0x18)) {
            fVar56 = *(float *)(lVar36 + _in_stack_000001a8 + -0x334);
            uVar15 = *(undefined4 *)(lVar36 + _in_stack_000001a8 + -0x354);
            goto LAB_039878ac;
          }
          goto LAB_03988250;
        }
        goto thunk_FUN_01b48178;
      }
LAB_039872a0:
      bVar7 = false;
    }
    else {
      lVar36 = *in_stack_000001e8;
      if ((lVar36 == 0) || (lVar31 = *(long *)(unaff_x19 + 0x15b8), lVar31 == 0))
      goto thunk_FUN_01b48178;
      if ((*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar36 + 0x18) <= uVar13)) goto LAB_03988250;
      *(int *)(lVar36 + lVar43 * 0x188 + 0x180) =
           *(int *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar5)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar36 + lVar43 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar4 < (int)uVar13)) ||
         (!(bool)(~bVar7 & (bVar9 ^ 1U)))) {
LAB_03987298:
        if (!bVar7) goto LAB_039872a0;
      }
      else {
        if (uVar13 == uVar4) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fdea78(uVar42,0);
          if ((uVar21 & 1) != 0) goto LAB_03987298;
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar36 + 0x18) <= uVar13) goto LAB_03988250;
        lVar36 = lVar36 + lVar43 * 0x188;
        fStack00000000000000a8 = *(float *)(lVar36 + 0x68);
        fStack00000000000000a0 = *(float *)(lVar36 + 0x150);
        fStack00000000000000e8 = *(float *)(lVar36 + 0x124);
        fStack00000000000000f4 = *(float *)(lVar36 + 0x16c);
        fStack00000000000000e4 = fVar45 * fStack00000000000000f4 + fStack00000000000000a0;
        _bStack00000000000000e0 = 0;
      }
      uVar28 = *in_stack_000001d0;
      if (uVar28 == 1) {
LAB_039874a4:
        lVar31 = *in_stack_000001e8;
        if (lVar31 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar31 + 0x18) <= uVar13) goto LAB_03988250;
        lVar31 = lVar31 + lVar43 * 0x188;
      }
      else {
        lVar36 = lVar43;
        if (uVar13 == uVar3) {
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto thunk_FUN_01b48178;
          uVar28 = uVar13;
          if ((uVar42 != 0x200b & (bVar11 ^ 1)) == 0) {
            lVar36 = lVar32;
            uVar28 = uVar4;
          }
          if (*(uint *)(lVar31 + 0x18) <= uVar28) goto LAB_03988250;
        }
        else {
          if ((int)uVar28 <= (int)uVar13) {
LAB_0398758c:
            if ((int)uVar13 < (int)uVar28) {
              iVar17 = FUN_03922ce0(lVar29,0);
              if (*(uint *)(lVar26 + 0x18) <= uVar35) goto LAB_03988250;
              lVar36 = *(long *)(lVar26 + _in_stack_000001a8 + -0x134);
              if (lVar36 == 0) goto thunk_FUN_01b48178;
              iVar14 = FUN_03922ce0(lVar36,0);
              if (iVar17 != iVar14) goto LAB_039874a4;
            }
            if (!bVar9) {
              bVar7 = true;
              goto LAB_039878e8;
            }
            lVar36 = *in_stack_000001e8;
            if (lVar36 != 0) {
              if (uVar35 - 2 < *(uint *)(lVar36 + 0x18)) {
                fVar56 = *(float *)(lVar36 + _in_stack_000001a8 + -0x334);
                uVar15 = *(undefined4 *)(lVar36 + _in_stack_000001a8 + -0x354);
                goto LAB_039878ac;
              }
              goto LAB_03988250;
            }
            goto thunk_FUN_01b48178;
          }
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar31 + 0x18) <= uVar35) goto LAB_03988250;
          if (*(float *)(lVar31 + _in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar66 = *(float *)(lVar31 + _in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar21 = FUN_03996934(fVar56 + fVar66,fStack00000000000000a0,0);
            if ((uVar21 & 1) != 0) {
              uVar28 = *in_stack_000001d0;
              goto LAB_0398758c;
            }
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto thunk_FUN_01b48178;
          }
          uVar28 = uVar13;
          if ((int)uVar4 < (int)uVar13) {
            lVar36 = lVar32;
            uVar28 = uVar4;
          }
          if (*(uint *)(lVar31 + 0x18) <= uVar28) goto LAB_03988250;
        }
        lVar31 = lVar31 + lVar36 * 0x188;
      }
      fVar56 = *(float *)(lVar31 + 0x150);
      uVar15 = *(undefined4 *)(lVar31 + 0x130);
LAB_039878ac:
      FUN_039916e4(fStack00000000000000e8,fStack00000000000000e4,_bStack00000000000000e0,uVar15,
                   fStack00000000000000f4 * fVar45 + fVar56,0,fStack00000000000000f4,
                   fStack00000000000000f4);
      bVar7 = false;
    }
LAB_039878e8:
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto thunk_FUN_01b48178;
    uVar28 = (uint)*(undefined8 *)(lVar36 + 0x18);
    if (uVar28 <= uVar13) goto LAB_03988250;
    if ((*(byte *)(lVar36 + lVar43 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar10) {
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority:
      bVar10 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar13) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar5)) {
        bVar9 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar9 = *(int *)(lVar36 + lVar43 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar9 = false;
      }
      if (!bVar10) {
        if (((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) ||
           (((int)uVar4 < (int)uVar13 || (bVar9))))
        goto UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority;
        if (uVar13 == uVar4) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fdea78(uVar42,0);
          if ((uVar21 & 1) != 0)
          goto UnityEngine_UIElements_PanelSettings_RuntimePanelAccess__SetSortingPriority;
        }
        puVar6 = PTR_DAT_03dad2f8;
        lVar29 = *(long *)PTR_DAT_03dad2f8;
        if (*(int *)(lVar29 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar29 = *(long *)puVar6;
        }
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        uVar28 = (uint)*(undefined8 *)(lVar36 + 0x18);
        if (uVar28 <= uVar13) goto LAB_03988250;
        pfVar34 = *(float **)(lVar29 + 0xb8);
        fStack0000000000000128 = *pfVar34;
        in_stack_00000140._4_4_ = pfVar34[1];
        fStack000000000000012c = pfVar34[2];
        fStack0000000000000130 = pfVar34[3];
        uStack0000000000000124 = 0;
      }
      if (uVar28 <= uVar13) goto LAB_03988250;
      lVar36 = lVar36 + lVar43 * 0x188;
      fVar66 = *(float *)(lVar36 + 0x130);
      fVar47 = *(float *)(lVar36 + 0x124);
      fVar56 = *(float *)(lVar36 + 0x148);
      fVar44 = *(float *)(lVar36 + 0x14c);
      fVar46 = *(float *)(lVar36 + 0x154);
      fVar45 = *(float *)(lVar36 + 0x164);
      uVar21 = FUN_03996800(&stack0x00000210,&stack0x000001f0,0);
      lVar36 = *(long *)PTR_DAT_03dad2e8;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar36);
        }
        fVar67 = (float)FUN_0399650c(uVar58,0);
        bVar10 = (bVar11 & 1) == 0;
        if (bVar10) {
          fVar56 = fVar47;
        }
        if (bVar10) {
          fVar45 = fVar66;
        }
        if (fVar56 - fVar67 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar56 - fVar67;
        }
        fVar56 = (float)FUN_03996514(uVar58,0);
        if (fStack000000000000012c <= fVar45 + fVar56) {
          fStack000000000000012c = fVar45 + fVar56;
        }
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fVar56 = (float)FUN_03996524(uVar58,0);
        if (fVar46 - fVar56 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar46 - fVar56;
        }
        fVar56 = (float)FUN_0399651c(uVar58,0);
        if (fStack0000000000000130 <= fVar44 + fVar56) {
          fStack0000000000000130 = fVar44 + fVar56;
        }
      }
      else {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar36);
        }
        fVar67 = (float)FUN_03996514(uVar58,0);
        if ((bVar11 & 1) == 0) {
          fVar56 = fVar47;
        }
        if (fVar46 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar46;
        }
        fVar56 = (fVar56 + (fStack000000000000012c - fVar67)) * 0.5;
        if (fStack0000000000000130 <= fVar44) {
          fStack0000000000000130 = fVar44;
        }
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar56,
                     fStack0000000000000130,uStack0000000000000124);
        puVar6 = PTR_DAT_03dad2e8;
        if (*(int *)(*(long *)PTR_DAT_03dad2e8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00000140._4_4_ = (float)FUN_03996524(uVar55,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00000140._4_4_ = fVar46 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_03996514(uVar55,0);
        fVar46 = (float)FUN_0399651c(uVar55,0);
        if ((bVar11 & 1) == 0) {
          fVar45 = fVar66;
        }
        fStack000000000000012c = fVar45 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar56;
        fStack0000000000000130 = fVar44 + fVar46;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar13 == uVar3)) || ((int)uVar4 <= (int)uVar13)) ||
         (bVar9)) {
        FUN_03992548(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
    }
    uVar13 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    _in_stack_000001a8 = _in_stack_000001a8 + 0x188;
    bVar9 = (int)uVar35 < (int)uVar13;
    uVar28 = uVar5;
    uVar35 = uVar35 + 1;
  } while (bVar9);
  iVar17 = uVar5 + 1;
  plVar19 = (long *)PTR_DAT_03dace98;
LAB_0398800c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar13;
  uVar48 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar17;
  if ((int)uVar13 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar48;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar55 = 1;
    lVar26 = 0x78;
    do {
      lVar36 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar36 == 0) {
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(uint *)(lVar36 + 0x18) <= uVar55) goto LAB_03988250;
      FUN_0397a3a4(lVar36 + lVar26,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar36 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar36 == 0) goto thunk_FUN_01b48178;
        if (*(int *)(*plVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(uint *)(lVar36 + 0x18) <= uVar55) {
LAB_03988250:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_0397a3e0(lVar36 + lVar26,1,0);
      }
      uVar55 = uVar55 + 1;
      lVar26 = lVar26 + 0x58;
    } while ((long)uVar55 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_03980e58:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001638) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


