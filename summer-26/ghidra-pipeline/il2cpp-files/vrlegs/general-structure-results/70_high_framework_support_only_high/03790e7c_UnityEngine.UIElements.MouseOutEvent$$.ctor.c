/*
FUNCTION_NAME: UnityEngine.UIElements.MouseOutEvent$$.ctor
ENTRY_POINT: 03790e7c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_MouseOutEvent___ctor(void)

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
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined1 uVar24;
  char cVar25;
  uint in_w8;
  uint uVar26;
  float *pfVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  long in_x12;
  long lVar39;
  long unaff_x19;
  char cVar40;
  long unaff_x20;
  uint uVar41;
  long *plVar42;
  long *unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint uVar43;
  uint unaff_w26;
  long lVar44;
  ulong unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 uVar51;
  ulong uVar52;
  undefined8 uVar53;
  ulong uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float unaff_s8;
  float fVar60;
  float fVar61;
  float unaff_s9;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float unaff_s12;
  float fVar66;
  float fVar67;
  float fVar68;
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
  undefined8 in_stack_000000a0;
  float fStack00000000000000a8;
  uint uStack00000000000000ac;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fStack00000000000000d0;
  byte bStack00000000000000d8;
  uint uStack00000000000000dc;
  float fStack00000000000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 *in_stack_00000100;
  float in_stack_00000108;
  long in_stack_00000110;
  undefined8 uStack0000000000000118;
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
  float in_stack_000001a0;
  long *in_stack_000001a8;
  undefined8 in_stack_000001b8;
  long in_stack_000001c0;
  long *in_stack_000001c8;
  uint *in_stack_000001d0;
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
  
code_r0x03790e7c:
  uVar14 = in_w8;
  bVar11 = false;
LAB_0378f1e0:
  iVar18 = (int)unaff_x27;
  if (unaff_w26 == 0) {
    if (in_stack_0000169c == 0xad) {
      lVar31 = *unaff_x22;
      if (lVar31 != 0) {
        if (uVar14 < *(uint *)(lVar31 + 0x18)) {
          *(undefined1 *)(lVar31 + (long)(int)uVar14 * (long)iVar18 + 0x1a0) = 0;
          goto LAB_0378f884;
        }
        goto thunk_FUN_01ab6c44;
      }
    }
    else {
      if (*unaff_x24 == '\x02') {
        FUN_0379c8ac();
LAB_0378f838:
        in_x12 = 0x60;
      }
      else if (*unaff_x24 == '\x01') {
        FUN_0379bd40(in_stack_000001a0);
        goto LAB_0378f838;
      }
      uVar14 = *unaff_x29;
      if ((uStack00000000000000ac & 1) != 0) {
        *(uint *)(unaff_x19 + 0x330) = uVar14;
      }
      *(uint *)(unaff_x19 + 0x334) = uVar14;
      *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
      lVar31 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar31 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar31 + 0x18)) {
          lVar31 = lVar31 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          uStack00000000000000ac = 0;
          *(float *)(lVar31 + 100) = unaff_s9;
          *(float *)(lVar31 + 0x68) = unaff_s8;
LAB_0378f884:
          bVar9 = *(int *)(in_stack_000001e0 + 0x74) == 1;
          if (bVar9 && unaff_w23 == 1) {
            bVar9 = in_stack_0000169c == 0x2d;
          }
          if (bVar9) {
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
            fVar58 = *(float *)(unaff_x19 + 0xf4);
            iVar16 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
            fVar49 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
            lVar31 = *(long *)(unaff_x19 + 0x1a00);
            fVar59 = in_stack_00000150;
            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
              fVar59 = 1.0;
            }
            if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_03793c9c;
            fVar61 = *(float *)(unaff_x19 + 0xf0);
            fVar64 = *(float *)(lVar31 + 0x2c);
            fVar50 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
            fVar62 = *_iStack0000000000000138;
            fVar50 = fVar61 * (fVar58 / (float)iVar16) * fVar49 * fVar59 * fVar64 * fVar50;
            fVar58 = *_fStack0000000000000130;
            if ((in_stack_0000169c == 10) &&
               (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              uVar14 = *(int *)(unaff_x19 + 0x324) - 1;
              if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
              fVar59 = *(float *)(lVar31 + (long)(int)uVar14 * (long)iVar18 + 0x68);
              iVar16 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
              if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
              fVar61 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
              lVar31 = *(long *)(unaff_x19 + 0x1a00);
              fVar49 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar49 = 1.0;
              }
              if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_03793c9c;
              fVar64 = *(float *)(unaff_x19 + 0xf0);
              fVar65 = *(float *)(lVar31 + 0x2c);
              fVar50 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
              lVar31 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
              lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              fVar62 = *(float *)(lVar31 + 100);
              fVar58 = *(float *)(lVar31 + 0x68);
              fVar50 = fVar64 * (fVar59 / (float)iVar16) * fVar61 * fVar49 * fVar65 * fVar50;
            }
            fVar49 = *(float *)(unaff_x19 + 0x2f4);
            fVar59 = 0.0;
            if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
              if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
                 (lVar31 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar31 == 0))
              goto LAB_03793c9c;
              FUN_03776e6c(&stack0x000016a0,lVar31,0);
              fVar59 = (float)FUN_03776cb4(&stack0x000015c0,0);
            }
            in_x12 = 0x60;
            fVar61 = *(float *)(unaff_x19 + 0x35c);
            fVar58 = (fStack000000000000012c - fVar62) - fVar58;
            bVar9 = true;
            if ((fVar61 <= fVar58) && (bVar9 = false, !NAN(fVar61))) {
              bVar9 = fVar61 == -1.0;
            }
            if (!bVar9) {
              fVar58 = fVar61;
            }
            fVar61 = 1.0;
            if (unaff_w25 != 0) {
              fVar61 = DAT_00d38acc;
            }
            unaff_x22 = in_stack_000001e8;
            if (ABS(fVar49) + fVar50 * fVar59 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
                fVar61 * fVar58) {
              FUN_03796df8();
              memcpy(&stack0x000005c8,in_stack_00000068,0x398);
              FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
              in_x12 = 0x60;
            }
          }
          lVar31 = *unaff_x22;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
          uVar14 = *(uint *)(unaff_x19 + 0x340);
          lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
          *(uint *)(lVar31 + 0x6c) = uVar14;
          *(undefined4 *)(lVar31 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
          if (((unaff_w23 & 1) == 0) &&
             ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0))
             )) {
            lVar31 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar31 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar31 + (int)uVar14 * in_x12 + 0x6c) =
                 *(undefined4 *)(unaff_x19 + 0x158);
          }
          else {
            lVar31 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            if (*(int *)(lVar31 + (int)uVar14 * in_x12 + 0x24) == 1) goto LAB_0378fbcc;
          }
          if (in_stack_0000169c != 0x200b) {
            if (in_stack_0000169c == 9) {
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar58 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              bVar12 = FUN_03779d4c(*in_stack_000001c8,0);
              fVar59 = *(float *)(unaff_x19 + 0x2f4);
              fVar49 = unaff_s12 * fVar58 * (float)bVar12;
              fVar58 = fVar49 * (float)(int)(fVar59 / fVar49);
              if (fVar58 <= fVar59) {
                fVar58 = fVar59 + fVar49;
              }
              *(float *)(unaff_x19 + 0x2f4) = fVar58;
              in_x12 = 0x60;
            }
            else {
              fVar58 = *(float *)(unaff_x19 + 0x2f0);
              if (fVar58 == 0.0) {
                fVar59 = *(float *)(unaff_x19 + 0x2f4);
                if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                  fVar58 = (float)FUN_03776cb4(&stack0x000015f0,0);
                  fVar50 = *(float *)(unaff_x19 + 0x19a8);
                  fVar49 = (float)FUN_03778e7c(&stack0x000015e0,0);
                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                    fVar61 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
                    fVar59 = fVar59 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                      (*(float *)(unaff_x19 + 0x2ec) +
                                      unaff_s12 * (fVar58 * fVar50 + fVar49) +
                                      in_stack_00000158 *
                                      (in_stack_00000148 + in_stack_00000188 + fVar61));
                    goto UnityEngine_UIElements_WheelEvent___ctor;
                  }
                  goto LAB_03793c9c;
                }
                fVar58 = (float)FUN_03778e7c(&stack0x000015e0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                in_x12 = 0x60;
                fVar59 = fVar59 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  unaff_s12 * fVar58 +
                                  in_stack_00000158 *
                                  (in_stack_00000148 + in_stack_00000188 + fVar49));
                *(float *)(unaff_x19 + 0x2f4) = fVar59;
                if ((unaff_w26 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
                fVar59 = fVar59 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
              }
              else {
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar59 = *(float *)(unaff_x19 + 0x2f4);
                fVar49 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                fVar59 = fVar59 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                  (*(float *)(unaff_x19 + 0x2ec) +
                                  (fVar58 - in_stack_000000e8._4_4_) +
                                  in_stack_00000158 * (in_stack_00000188 + fVar49));
UnityEngine_UIElements_WheelEvent___ctor:
                in_x12 = 0x60;
                *(float *)(unaff_x19 + 0x2f4) = fVar59;
                if ((unaff_w26 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
                fVar59 = fVar59 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
              }
              in_x12 = 0x60;
              *(float *)(unaff_x19 + 0x2f4) = fVar59;
            }
          }
FUN_0378fd94:
          lVar31 = *unaff_x22;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *unaff_x29;
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x164) =
               *(undefined4 *)(unaff_x19 + 0x2f4);
          if (in_stack_0000169c == 0xd) {
            *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
          }
          if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
             (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)
               ) && (1 < in_stack_0000169c - 0x2028)))) {
            lVar31 = *in_stack_00000050;
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar30 = *(uint *)(unaff_x19 + 0x350);
            if (*(int *)(lVar31 + 0x18) < (int)(uVar30 + 1)) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_01ff3814(in_stack_00000050,uVar30 + 1,1,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__
                          );
              lVar31 = *in_stack_00000050;
              if (lVar31 == 0) goto LAB_03793c9c;
              uVar30 = *(uint *)(unaff_x19 + 0x350);
              in_x12 = 0x60;
            }
            if (*(uint *)(lVar31 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
            lVar34 = lVar31 + (long)(int)uVar30 * 0x14;
            *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
            fVar58 = *(float *)(unaff_x19 + 0x378);
            if (*(float *)(lVar34 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
              fVar58 = *(float *)(lVar34 + 0x30);
            }
            *(float *)(lVar34 + 0x30) = fVar58;
            if (*(char *)(unaff_x19 + 0x37c) != '\0') {
              *(undefined1 *)(unaff_x19 + 0x37c) = 0;
              *(undefined4 *)(lVar31 + (long)(int)uVar30 * 0x14 + 0x20) =
                   *(undefined4 *)(unaff_x19 + 0x324);
            }
            uVar14 = *unaff_x29;
            *(uint *)(lVar31 + (long)(int)uVar30 * 0x14 + 0x24) = uVar14;
          }
          if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)
              ) || ((in_stack_0000169c - 0x2028 < 2 ||
                    (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 ||
                     (uVar14 == uStack00000000000000dc)))))) {
            if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
              fVar58 = *(float *)(unaff_x19 + 0x338);
              fVar59 = *(float *)(unaff_x19 + 0x15ac);
              if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                in_x12 = 0x60;
              }
              fVar58 = fVar58 - fVar59;
              if (((fStack00000000000000a8 < ABS(fVar58)) && (*(char *)(unaff_x19 + 0x2e8) == '\0'))
                 && (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
                uVar46 = *(undefined4 *)(unaff_x19 + 0x328);
                uVar15 = *(undefined4 *)(unaff_x19 + 0x324);
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_037a5574(fVar58,uVar46,uVar15,in_stack_000001c0,0);
                *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar58;
                *(float *)(unaff_x19 + 0x2e0) = fVar58 + *(float *)(unaff_x19 + 0x2e0);
                unaff_x28 = (long *)PTR_DAT_03cbe438;
                in_x12 = 0x60;
                if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
                  FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                              );
                  memcpy(in_stack_00000068,&stack0x000016a0,0x398);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (in_stack_00000020,0);
                  *(float *)(unaff_x19 + 0xaf0) = fVar58 + *(float *)(unaff_x19 + 0xaf0);
                  *(float *)(unaff_x19 + 0xb24) = fVar58 + *(float *)(unaff_x19 + 0xb24);
                  memcpy(&stack0x00000230,in_stack_00000068,0x398);
                  FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
                  in_x12 = 0x60;
                }
              }
            }
            fVar59 = *(float *)(unaff_x19 + 0x2e0);
            *(undefined1 *)(unaff_x19 + 0x37c) = 0;
            fVar49 = *(float *)(unaff_x19 + 0x33c) - fVar59;
            fVar58 = *(float *)(unaff_x19 + 0x378);
            if (fVar49 <= *(float *)(unaff_x19 + 0x378)) {
              fVar58 = fVar49;
            }
            *(float *)(unaff_x19 + 0x378) = fVar58;
            fVar50 = *(float *)(unaff_x19 + 0x338);
            if (in_stack_00001694 == '\0') {
              in_stack_00001698 = fVar58;
            }
            if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
               ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*unaff_x29 ||
                (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
              in_stack_00001694 = '\x01';
            }
            lVar31 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar14 = *(uint *)(unaff_x19 + 0x340);
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            iVar16 = *(int *)(unaff_x19 + 0x328);
            lVar34 = lVar31 + (int)uVar14 * in_x12;
            *(int *)(lVar34 + 0x38) = iVar16;
            uVar30 = *(uint *)(unaff_x19 + 0x328);
            if (iVar16 <= (int)*(uint *)(unaff_x19 + 0x330)) {
              uVar30 = *(uint *)(unaff_x19 + 0x330);
            }
            *(uint *)(unaff_x19 + 0x330) = uVar30;
            *(uint *)(lVar34 + 0x3c) = uVar30;
            iVar1 = *(int *)(unaff_x19 + 0x324);
            *(int *)(unaff_x19 + 0x32c) = iVar1;
            *(int *)(lVar34 + 0x40) = iVar1;
            iVar17 = *(int *)(unaff_x19 + 0x330);
            if ((int)uVar30 <= *(int *)(unaff_x19 + 0x334)) {
              iVar17 = *(int *)(unaff_x19 + 0x334);
            }
            *(int *)(unaff_x19 + 0x334) = iVar17;
            *(int *)(lVar34 + 0x44) = iVar17;
            *(int *)(lVar34 + 0x24) = (iVar1 - iVar16) + 1;
            *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
            *(undefined4 *)(lVar34 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
            lVar34 = *in_stack_000001e8;
            if (lVar34 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar34 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
            uVar46 = *(undefined4 *)(lVar34 + (long)(int)uVar30 * (long)iVar18 + 0x124);
            lVar31 = lVar31 + (long)(int)uVar14 * 0x60;
            *(float *)(lVar31 + 0x74) = fVar49;
            *(undefined4 *)(lVar31 + 0x70) = uVar46;
            lVar31 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
            lVar34 = *in_stack_000001e8;
            if (lVar34 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
            uVar46 = *(undefined4 *)
                      (lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
            fVar50 = fVar50 - fVar59;
            lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            *(float *)(lVar31 + 0x7c) = fVar50;
            *(undefined4 *)(lVar31 + 0x78) = uVar46;
            lVar31 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar14 = *(uint *)(unaff_x19 + 0x340);
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            lVar34 = lVar31 + (long)(int)uVar14 * 0x60;
            *(float *)(lVar34 + 0x48) = *(float *)(lVar34 + 0x78) - unaff_s12 * in_stack_000001a0;
            *(float *)(lVar34 + 0x60) = fStack0000000000000174;
            if (*(int *)(lVar34 + 0x24) == 1) {
              *(undefined4 *)(lVar31 + (long)(int)uVar14 * 0x60 + 0x6c) =
                   *(undefined4 *)(unaff_x19 + 0x158);
            }
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar58 = (float)FUN_03779d0c(*in_stack_000001c8,0);
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x334);
            if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
            lVar32 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar32 == 0) goto LAB_03793c9c;
            uVar14 = *(uint *)(unaff_x19 + 0x340);
            if (((*(char *)(lVar31 + lVar34 * unaff_x27 + 0x1a0) == '\0') &&
                (lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
                *(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
               (uVar30 = (uint)*(undefined8 *)(lVar32 + 0x18), uVar30 <= uVar14))
            goto thunk_FUN_01ab6c44;
            fVar59 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                     (*(float *)(unaff_x19 + 0x2ec) +
                     in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar58));
            fVar58 = -fVar59;
            if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
              fVar58 = fVar59;
            }
            *(float *)(lVar32 + (long)(int)uVar14 * 0x60 + 0x5c) =
                 *(float *)(lVar31 + lVar34 * unaff_x27 + 0x164) + fVar58;
            if (uVar30 <= uVar14) goto thunk_FUN_01ab6c44;
            lVar32 = lVar32 + (long)(int)uVar14 * 0x60;
            *(float *)(lVar32 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
            *(float *)(lVar32 + 0x58) = fVar49;
            *(float *)(lVar32 + 0x4c) = in_stack_000000a0._4_4_ + (fVar50 - fVar49);
            *(float *)(lVar32 + 0x50) = fVar50;
            if ((int)in_stack_0000169c < 0x2d) {
              if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
                FUN_03796df8();
                uVar14 = *(uint *)(unaff_x19 + 0x324);
                iVar16 = *(int *)(unaff_x19 + 0x340) + 1;
                *(int *)(unaff_x19 + 0x340) = iVar16;
                *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
                unaff_x29[8] = 0;
                unaff_x29[9] = 0;
                if (*(long *)(in_stack_000001c0 + 0x48) == 0) goto LAB_03793c9c;
                if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar16) {
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_037a56f4(iVar16,in_stack_000001c0,0);
                  uVar14 = *unaff_x29;
                }
                lVar31 = *in_stack_000001e8;
                if (lVar31 == 0) goto LAB_03793c9c;
                if (uVar14 < *(uint *)(lVar31 + 0x18)) {
                  fVar58 = *(float *)(lVar31 + (long)(int)uVar14 * (long)iVar18 + 0x158);
                  if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                    if ((in_stack_0000169c == 0x2029) || (fVar59 = 0.0, in_stack_0000169c == 10)) {
                      fVar59 = *(float *)(in_stack_000001e0 + 0xcc);
                    }
                    uVar24 = 0;
                    fVar59 = fVar58 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                             fStack0000000000000088 *
                             (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                             in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar59) +
                             *(float *)(unaff_x19 + 0x2e0);
                  }
                  else {
                    if ((in_stack_0000169c == 0x2029) || (fVar59 = 0.0, in_stack_0000169c == 10)) {
                      fVar59 = *(float *)(in_stack_000001e0 + 0xcc);
                    }
                    uVar24 = 1;
                    fVar59 = *(float *)(unaff_x19 + 0x2e0) +
                             *(float *)(unaff_x19 + 0x2e4) +
                             in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar59);
                  }
                  *(float *)(unaff_x19 + 0x2e0) = fVar59;
                  *(float *)(unaff_x19 + 0x15ac) = fVar58;
                  *(undefined1 *)(unaff_x19 + 0x2e8) = uVar24;
                  *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
                  *(float *)(unaff_x19 + 0x2f4) =
                       *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
                  FUN_03796df8();
                  FUN_03796df8();
                  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
                  goto LAB_0379053c;
                }
                goto thunk_FUN_01ab6c44;
              }
              if (in_stack_0000169c == 3) {
                if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03793c9c;
                in_stack_0000160c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
              }
            }
            else if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d))
            goto LAB_03790360;
          }
          else {
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
          }
          uVar14 = *unaff_x29;
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          if (*(char *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x1a0) != '\0') {
            lVar31 = lVar31 + (long)(int)uVar14 * unaff_x27;
            uVar52 = *(ulong *)(unaff_x19 + 0x360);
            uVar54 = *(ulong *)(lVar31 + 0x124);
            *(ulong *)(unaff_x19 + 0x360) =
                 uVar52 ^ (uVar52 ^ uVar54) &
                          ~CONCAT44(-(uint)((float)(uVar52 >> 0x20) < (float)(uVar54 >> 0x20)),
                                    -(uint)((float)uVar52 < (float)uVar54));
            uVar52 = *(ulong *)(unaff_x19 + 0x368);
            uVar54 = *(ulong *)(lVar31 + 0x130);
            *(ulong *)(unaff_x19 + 0x368) =
                 uVar52 ^ (uVar52 ^ uVar54) &
                          ~CONCAT44(-(uint)((float)(uVar54 >> 0x20) < (float)(uVar52 >> 0x20)),
                                    -(uint)((float)uVar54 < (float)uVar52));
          }
          if ((iStack000000000000008c != 0) ||
             ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
              ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
            if ((unaff_w26 == 0) &&
               (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) &&
                (in_stack_0000169c != 0xad)))) {
              if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar52 = FUN_037a5f20(in_stack_0000169c,0);
                if ((uVar52 & 1) == 0) {
LAB_037906cc:
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar52 = FUN_037a5f90(in_stack_0000169c,0);
                  if ((uVar52 & 1) == 0) goto LAB_037907cc;
                  if (in_stack_00000060 == 0) goto LAB_03793c9c;
                }
                else {
                  if ((in_stack_00000060 == 0) ||
                     (lVar31 = FUN_037a8a5c(in_stack_00000060,0), lVar31 == 0)) goto LAB_03793c9c;
                  if (*(char *)(lVar31 + 0x28) != '\0') goto LAB_037906cc;
                }
                lVar31 = FUN_037a8a5c(in_stack_00000060,0);
                if ((lVar31 == 0) || (lVar31 = FUN_037aad04(lVar31,0), lVar31 == 0))
                goto LAB_03793c9c;
                uVar46 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
                in_stack_000016a0 = CONCAT44(uVar46,in_stack_0000169c);
                uVar52 = FUN_021e4dc4(lVar31,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
                if ((int)*unaff_x29 < (int)uStack00000000000000dc) {
                  lVar31 = FUN_037a8a5c(in_stack_00000060,0);
                  if (lVar31 == 0) goto LAB_03793c9c;
                  lVar31 = FUN_037aaf28(lVar31,0);
                  lVar34 = *in_stack_000001e8;
                  if (lVar34 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar34 + 0x18) <= *unaff_x29 + 1) goto thunk_FUN_01ab6c44;
                  if (lVar31 == 0) goto LAB_03793c9c;
                  in_stack_000016a0 =
                       CONCAT44(uVar46,(uint)*(ushort *)
                                              (lVar34 + (long)(int)(*unaff_x29 + 1) * (long)iVar18 +
                                              0x20));
                  uVar54 = FUN_021e4dc4(lVar31,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
                  if ((uVar52 & 1) != 0) goto LAB_037909e8;
                  if ((uVar54 & 1) == 0) goto LAB_03790cd4;
                  if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
                }
                else {
                  if ((uVar52 & 1) == 0) {
LAB_03790cd4:
                    FUN_03796df8();
                    bStack00000000000000d8 = 0;
                    goto LAB_03790864;
                  }
LAB_037909e8:
                  if ((float)(uint)unaff_x20 != in_stack_000001b8._4_4_ ||
                      ((bStack00000000000000d8 ^ 0xff) & 1) != 0) goto LAB_03790864;
                }
                if (unaff_w26 != 0) {
                  FUN_03796df8();
                }
              }
              else {
LAB_037907cc:
                if ((bStack00000000000000d8 & 1) == 0) {
LAB_03790854:
                  bStack00000000000000d8 = 0;
                  goto LAB_03790864;
                }
                if ((unaff_w26 != 0 && in_stack_0000169c != 0xa0) ||
                   (!bVar11 && in_stack_0000169c == 0xad)) {
                  FUN_03796df8();
                }
              }
              FUN_03796df8();
              bStack00000000000000d8 = 1;
            }
            else {
              if (*(char *)(unaff_x19 + 0x37d) == '\x01') goto LAB_037907cc;
              if (((in_stack_0000169c - 0x2007 < 0x29) &&
                  ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                 ((in_stack_0000169c == 0xa0 || (in_stack_0000169c == 0x2060)))) goto LAB_03790684;
              FUN_03796df8();
              bStack00000000000000d8 = 0;
              *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
            }
          }
LAB_03790864:
          FUN_03796df8();
          *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
          uVar19 = in_stack_00001688;
          fVar58 = unaff_s12;
LAB_0378d260:
          in_stack_0000160c = in_stack_0000160c + 1;
          lVar31 = *(long *)(unaff_x19 + 0x20);
          if (lVar31 == 0) goto LAB_03793c9c;
          if ((int)*(uint *)(lVar31 + 0x18) <= (int)in_stack_0000160c) {
LAB_03790fec:
            if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
                 (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c)))
                && (fVar58 = *_fStack00000000000000d0, fVar58 < *(float *)(in_stack_000001e0 + 0xb0)
                   )) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar59 = *(float *)(in_stack_000001e0 + 0x108);
              if (*(float *)(unaff_x19 + 0x1594) < fVar59 / 100.0) {
                *(undefined4 *)(unaff_x19 + 0x1594) = 0;
              }
              fVar49 = (*(float *)(unaff_x19 + 0x1598) - fVar58) * 0.5;
              if (fVar49 <= DAT_00d38b84) {
                fVar49 = DAT_00d38b84;
              }
              *(float *)(unaff_x19 + 0x159c) = fVar58;
              fVar49 = (fVar58 + fVar49) * 20.0 + 0.5;
              fVar58 = DAT_00d38e60;
              if (fVar49 != INFINITY) {
                fVar58 = (float)(int)fVar49 / 20.0;
              }
              if (fVar59 <= fVar58) {
                fVar58 = fVar59;
              }
              goto LAB_037910ac;
            }
            unaff_x24[0x30] = '\x01';
            if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
              uVar19 = FUN_0276793c(in_stack_00000070,0);
              uVar20 = FUN_0277fa90(_fStack00000000000000d0,0);
              uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar19,
                                    *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar20,0);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                thunk_FUN_01a58e78(*unaff_x28);
              }
              FUN_0367a6ec(uVar19,0);
            }
            plVar21 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
            plVar42 = (long *)PTR_DAT_03cbded8;
            if ((*unaff_x29 == 0) || ((*unaff_x29 == 1 && (in_stack_0000169c == 3)))) {
              FUN_0379e288(1,in_stack_000001c0,0);
              goto LAB_0378c81c;
            }
            lVar31 = *(long *)(in_stack_000001c0 + 0x58);
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar14 = *(uint *)(unaff_x19 + 0x78);
            if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ +
                        0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            FUN_03785b74(lVar31 + (long)(int)uVar14 * 0x50 + 0x20,0,0);
            if (DAT_0411f172 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbded8);
              DAT_0411f172 = '\x01';
            }
            iVar18 = *(int *)(in_stack_000001e0 + 0x70);
            in_stack_00000158 = **(float **)(*plVar42 + 0xb8);
            _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar42 + 0xb8) + 1);
            lVar31 = *(long *)(unaff_x19 + 0x50);
            uStack0000000000000118 = _in_stack_00000148;
            fStack0000000000000120 = in_stack_00000158;
            if (iVar18 < 0x421) {
              if (iVar18 < 0x205) {
                if (iVar18 < 0x109) {
                  if ((iVar18 - 0x101U < 8) && ((1 << (ulong)(iVar18 - 0x101U & 0x1f) & 0x8bU) != 0)
                     ) {
LAB_0379144c:
                    if (lVar31 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar31 + 0x18) < 2) goto thunk_FUN_01ab6c44;
                    uVar19 = *(undefined8 *)(lVar31 + 0x30);
                    if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                      lVar34 = *in_stack_00000050;
                      if (lVar34 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar34 + 0x18) <= uStack000000000000005c)
                      goto thunk_FUN_01ab6c44;
                      fVar58 = *(float *)(lVar34 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
                    }
                    else {
                      fVar58 = *(float *)(unaff_x19 + 0x374);
                    }
                    fStack0000000000000120 =
                         fStack0000000000000058 + 0.0 + *(float *)(lVar31 + 0x2c);
                    fStack0000000000000038 = (0.0 - fVar58) - fStack000000000000003c;
                    goto LAB_037917ec;
                  }
                }
                else if (iVar18 < 0x121) {
                  if ((iVar18 == 0x110) || (iVar18 == 0x120)) goto LAB_0379144c;
                }
                else if ((iVar18 - 0x201U < 4) && (iVar18 - 0x201U != 2)) goto LAB_037916dc;
              }
              else {
                if (iVar18 < 0x403) {
                  if (iVar18 < 0x211) {
                    if ((iVar18 == 0x208) || (iVar18 == 0x210)) goto LAB_037916dc;
                    goto LAB_037917fc;
                  }
                  if (iVar18 != 0x220) {
                    if (iVar18 - 0x401U < 2) goto LAB_03791588;
                    goto LAB_037917fc;
                  }
LAB_037916dc:
                  if (lVar31 == 0) goto LAB_03793c9c;
                  if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
                  goto thunk_FUN_01ab6c44;
                  fStack0000000000000120 =
                       (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                  uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                                    ((float)*(undefined8 *)(lVar31 + 0x24) +
                                    (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
                  if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                    lVar31 = *in_stack_00000050;
                    if (lVar31 == 0) goto LAB_03793c9c;
                    if (uStack000000000000005c < *(uint *)(lVar31 + 0x18)) {
                      lVar31 = lVar31 + (long)(int)uStack000000000000005c * 0x14;
                      fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120
                      ;
                      fStack0000000000000038 =
                           ((fStack000000000000003c + *(float *)(lVar31 + 0x28) +
                            *(float *)(lVar31 + 0x30)) - fStack0000000000000038) * -0.5 + 0.0;
                      goto LAB_037917ec;
                    }
                    goto thunk_FUN_01ab6c44;
                  }
                  fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
                  fStack0000000000000038 =
                       ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) + in_stack_00001698)
                       - fStack0000000000000038) * -0.5 + 0.0;
                }
                else {
                  if (iVar18 < 0x409) {
                    if (iVar18 != 0x404) {
                      bVar11 = iVar18 == 0x408;
                      goto LAB_03791574;
                    }
                  }
                  else if (iVar18 != 0x410) {
                    bVar11 = iVar18 == 0x420;
LAB_03791574:
                    if (!bVar11) goto LAB_037917fc;
                  }
LAB_03791588:
                  if (lVar31 == 0) goto LAB_03793c9c;
                  if (*(int *)(lVar31 + 0x18) == 0) goto thunk_FUN_01ab6c44;
                  uVar19 = *(undefined8 *)(lVar31 + 0x24);
                  if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                    lVar34 = *in_stack_00000050;
                    if (lVar34 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar34 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                    in_stack_00001698 =
                         *(float *)(lVar34 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
                  }
                  fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar31 + 0x20);
                  fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
                }
LAB_037917ec:
                uStack0000000000000118 =
                     CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,
                              (float)uVar19 + fStack0000000000000038);
              }
            }
            else if (iVar18 < 0x1005) {
              if (iVar18 < 0x809) {
                if ((iVar18 - 0x801U < 8) && ((1 << (ulong)(iVar18 - 0x801U & 0x1f) & 0x8bU) != 0))
                {
LAB_037913b0:
                  if (lVar31 == 0) goto LAB_03793c9c;
                  if ((*(int *)(lVar31 + 0x18) != 1) && (*(int *)(lVar31 + 0x18) != 0)) {
                    uStack0000000000000118 =
                         CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,((float)*(undefined8 *)(lVar31 + 0x24) +
                                      (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 + 0.0);
                    fStack0000000000000120 =
                         fStack0000000000000058 + 0.0 +
                         (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                    goto LAB_037917fc;
                  }
                  goto thunk_FUN_01ab6c44;
                }
              }
              else if (iVar18 < 0x821) {
                if ((iVar18 == 0x810) || (iVar18 == 0x820)) goto LAB_037913b0;
              }
              else if ((iVar18 - 0x1001U < 4) && (iVar18 - 0x1001U != 2)) goto LAB_03791644;
            }
            else if (iVar18 < 0x2003) {
              if (iVar18 < 0x1011) {
                if ((iVar18 == 0x1008) || (iVar18 == 0x1010)) goto LAB_03791644;
              }
              else {
                if (iVar18 == 0x1020) {
LAB_03791644:
                  if (lVar31 == 0) goto LAB_03793c9c;
                  if ((*(int *)(lVar31 + 0x18) != 1) && (*(int *)(lVar31 + 0x18) != 0)) {
                    uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                                      ((float)*(undefined8 *)(lVar31 + 0x24) +
                                      (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
                    fStack0000000000000120 =
                         fStack0000000000000058 + 0.0 +
                         (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                    fStack0000000000000038 =
                         0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                                *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
                    goto LAB_037917ec;
                  }
                  goto thunk_FUN_01ab6c44;
                }
                if (iVar18 - 0x2001U < 2) goto LAB_037914ec;
              }
            }
            else {
              if (iVar18 < 0x2009) {
                if (iVar18 != 0x2004) {
                  iVar16 = 0x2008;
                  goto LAB_037914d4;
                }
              }
              else if (iVar18 != 0x2010) {
                iVar16 = 0x2020;
LAB_037914d4:
                if (iVar18 != iVar16) goto LAB_037917fc;
              }
LAB_037914ec:
              if (lVar31 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
              goto thunk_FUN_01ab6c44;
              uStack0000000000000118 =
                   CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                            ((float)*(undefined8 *)(lVar31 + 0x24) +
                            (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 +
                            (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                   fStack0000000000000038) * 0.5));
              fStack0000000000000120 =
                   fStack0000000000000058 + 0.0 +
                   (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
            }
LAB_037917fc:
            uVar46 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
            if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                                );
            }
            FUN_037a1df8(0);
            FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
            fVar58 = DAT_00d38d70;
            uVar14 = *unaff_x29;
            if ((int)uVar14 < 1) {
              iVar18 = 0;
              iStack0000000000000138 = 0;
              goto LAB_03793a5c;
            }
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            fStack0000000000000174 = 0.0;
            _bStack00000000000000d8 = 0.0;
            fStack00000000000000a8 = 0.0;
            plVar21 = (long *)(in_stack_000001c0 + 0x38);
            in_stack_000000e8._4_4_ = fStack0000000000000128;
            fStack00000000000000f0 = 0.0;
            in_stack_000000a0._4_4_ = 0.0;
            uVar54 = (ulong)&stack0x00001670 | 4;
            bVar11 = false;
            fVar49 = 0.0;
            fVar59 = 0.0;
            uVar52 = (ulong)&stack0x000009f0 | 4;
            bVar8 = false;
            bVar9 = false;
            iStack0000000000000138 = 0;
            uStack0000000000000090 = 0;
            _uStack0000000000000168 = 0;
            iStack00000000000000c0 = 0;
            iStack0000000000000178 = 0;
            in_stack_000001a8 = (long *)0x2fc;
            fStack000000000000012c = fStack0000000000000128;
            fStack0000000000000130 = in_stack_00000140._4_4_;
            fStack00000000000000c8 = in_stack_00000140._4_4_;
            uStack00000000000000cc = uStack0000000000000124;
            fStack00000000000000d0 = fStack0000000000000128;
            uStack00000000000000dc = uStack0000000000000124;
            fStack00000000000000e0 = in_stack_00000140._4_4_;
            fStack000000000000015c = DAT_00d38d70;
            uVar30 = 0;
            uVar29 = 1;
            goto LAB_0379194c;
          }
          if (*(uint *)(lVar31 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
          uVar14 = *(uint *)(lVar31 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
          if (uVar14 == 0) goto LAB_03790fec;
          in_stack_00001688 = uVar19;
          if (5 < in_stack_000001d8._4_4_) {
            uVar19 = FUN_0278d4e8(&stack0x0000169c,0);
            uVar20 = FUN_0276793c(&stack0x0000160c,0);
            uVar19 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar19,
                                  *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar20,0);
            if (*(int *)(*unaff_x28 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*unaff_x28);
            }
            FUN_0367ae18(uVar19,0);
            in_stack_00001688 = CONCAT44(3,*unaff_x29);
          }
          uVar19 = in_stack_00001688;
          in_stack_0000169c = uVar14;
          if (uVar14 == 0x1a) goto LAB_0378d260;
          if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
            unaff_x24[0] = '\x01';
            unaff_x24[1] = '\x01';
            uVar52 = FUN_037974c0();
            if (((uVar52 & 1) != 0) && (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01')
               ) goto LAB_0378d260;
          }
          else {
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
            *unaff_x24 = *(char *)(lVar31 + 0x28);
            *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar31 + 0x60);
            *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar31 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
          }
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *(uint *)(unaff_x19 + 0x324);
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          lVar34 = (long)(int)uVar14;
          uVar46 = *(undefined4 *)(unaff_x19 + 0x78);
          cVar25 = *(char *)(lVar31 + lVar34 * unaff_x27 + 100);
          unaff_x24[1] = '\0';
          if ((uint)in_stack_00001688 == uVar14) {
            in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
            unaff_w23 = 1;
            *unaff_x24 = '\x01';
            if (in_stack_0000169c == 0x2026) {
              *(undefined8 *)(lVar31 + lVar34 * unaff_x27 + 0x30) =
                   *(undefined8 *)(unaff_x19 + 0x1a00);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
              lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
              *(undefined1 *)(lVar31 + 0x28) = 1;
              *(undefined8 *)(lVar31 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
              *(undefined8 *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
                   *(undefined8 *)(unaff_x19 + 0x1a10);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              uVar14 = *unaff_x29;
              if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              unaff_w23 = 1;
              *(undefined4 *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x60) =
                   *(undefined4 *)(unaff_x19 + 0x1a18);
              *(undefined1 *)
               (*(long *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                         + 0xb8) + 8) = 1;
              in_stack_00001688 = CONCAT44(3,uVar14 + 1);
            }
            else if (in_stack_0000169c == 3) {
              if ((*in_stack_000001c8 == 0) ||
                 (lVar32 = FUN_03779b3c(*in_stack_000001c8,0), lVar32 == 0)) goto LAB_03793c9c;
              FUN_0219b634(lVar32,&stack0x00000978,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                          );
              if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              *(undefined8 *)(lVar31 + lVar34 * unaff_x27 + 0x30) = in_stack_000016a0;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              unaff_w23 = 1;
              *(undefined1 *)
               (*(long *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                         + 0xb8) + 8) = 1;
              uVar14 = *unaff_x29;
            }
          }
          else {
            unaff_w23 = 0;
          }
          uVar19 = in_stack_00001688;
          if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            lVar31 = lVar31 + (long)(int)uVar14 * (long)iVar18;
            *(undefined1 *)(lVar31 + 0x1a0) = 0;
            *(undefined2 *)(lVar31 + 0x20) = 0x200b;
            *(undefined4 *)(lVar31 + 0x6c) = 0;
            *unaff_x29 = uVar14 + 1;
            goto LAB_0378d260;
          }
          cVar40 = *unaff_x24;
          if (cVar40 == '\x01') {
            uVar14 = *(uint *)(unaff_x19 + 0x124);
            if ((uVar14 >> 4 & 1) == 0) {
              if ((uVar14 >> 3 & 1) == 0) {
                fStack000000000000017c = 1.0;
                if ((uVar14 >> 5 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar52 = FUN_026b812c(in_stack_0000169c,0);
                  if ((uVar52 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar14 = FUN_026b8410(in_stack_0000169c,0);
                    in_stack_0000169c = uVar14 & 0xffff;
                    fStack000000000000017c = fStack000000000000002c;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar52 = FUN_026b8070(in_stack_0000169c,0);
                fStack000000000000017c = 1.0;
                if ((uVar52 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_026b8594(in_stack_0000169c,0);
                  goto LAB_0378d3d0;
                }
              }
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar52 = FUN_026b812c(in_stack_0000169c,0);
              fStack000000000000017c = 1.0;
              if ((uVar52 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar14 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
                fStack000000000000017c = 1.0;
                in_stack_0000169c = uVar14 & 0xffff;
              }
            }
            cVar40 = *unaff_x24;
          }
          else {
            fStack000000000000017c = 1.0;
          }
          if (cVar40 == '\x01') {
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            *in_stack_000001a8 = *(long *)(lVar31 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
            if (*in_stack_000001a8 == 0) goto LAB_0378d260;
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            *in_stack_000001c8 = *(long *)(lVar31 + (long)(int)*unaff_x29 * unaff_x27 + 0x40);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            *in_stack_00000190 = *(long *)(lVar31 + (long)(int)*unaff_x29 * unaff_x27 + 0x58);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar30 = *unaff_x29;
            uVar14 = *(uint *)(lVar31 + 0x18);
            if (uVar14 <= uVar30) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(unaff_x19 + 0x78) =
                 *(undefined4 *)(lVar31 + (long)(int)uVar30 * unaff_x27 + 0x60);
            if (unaff_w23 == 0) {
LAB_0378d570:
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar59 = *(float *)(unaff_x19 + 0xf4);
              iVar16 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
              lVar31 = *(long *)(unaff_x19 + 0x68);
            }
            else {
              lVar34 = *(long *)(unaff_x19 + 0x20);
              if (lVar34 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar34 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
              if ((*(int *)(lVar34 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10) ||
                 (uVar30 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
              if (uVar14 <= uVar30 - 1) goto thunk_FUN_01ab6c44;
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar59 = *(float *)(lVar31 + (long)(int)(uVar30 - 1) * (long)iVar18 + 0x68);
              iVar16 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
              lVar31 = *in_stack_000001c8;
            }
            if (lVar31 == 0) goto LAB_03793c9c;
            fVar50 = (float)FUN_03776960(lVar31 + 0xb0,0);
            fVar49 = in_stack_00000150;
            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
              fVar49 = 1.0;
            }
            fStack0000000000000170 = 0.0;
            fVar61 = 0.0;
            if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar61 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
            }
            lVar31 = *(long *)(unaff_x19 + 0x1588);
            if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_03793c9c;
            fVar62 = *(float *)(unaff_x19 + 0xf0);
            fVar64 = *(float *)(lVar31 + 0x2c);
            fVar58 = (float)FUN_03776ea8(*(long *)(lVar31 + 0x20),0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar65 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar66 = *(float *)(unaff_x19 + 0xf0);
            fVar45 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar14 = *(uint *)(unaff_x19 + 0x324);
            if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            lVar34 = lVar31 + (long)(int)uVar14 * unaff_x27;
            fVar49 = ((fStack000000000000017c * fVar59) / (float)iVar16) * fVar50 * fVar49;
            fVar58 = fVar49 * fVar62 * fVar64 * fVar58;
            *(undefined1 *)(lVar34 + 0x28) = 1;
            *(float *)(lVar34 + 0x16c) = fVar58;
            in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
            fVar45 = fVar49 * fVar65 * fVar66 * fVar45;
LAB_0378db90:
            unaff_s12 = fVar58;
            if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
              unaff_s12 = 0.0;
            }
          }
          else {
            if (cVar40 == '\x02') {
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
              plVar42 = *(long **)(lVar31 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
              if (plVar42 == (long *)0x0) goto LAB_03793c9c;
              bVar12 = *(byte *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                                + 0x130);
              if ((*(byte *)(*plVar42 + 0x130) < bVar12) ||
                 (*(long *)(*(long *)(*plVar42 + 200) + (ulong)bVar12 * 8 + -8) !=
                  *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6ee0(plVar42);
              }
              plVar21 = (long *)FUN_03783144(plVar42,0);
              if (plVar21 == (long *)0x0) {
                plVar21 = (long *)0x0;
                *in_stack_00000160 = 0;
              }
              else {
                lVar31 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
                bVar12 = *(byte *)(lVar31 + 0x130);
                if (*(byte *)(*plVar21 + 0x130) < bVar12) {
                  plVar33 = (long *)0x0;
                }
                else {
                  plVar33 = plVar21;
                  if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar12 * 8 + -8) != lVar31) {
                    plVar33 = (long *)0x0;
                  }
                }
                *in_stack_00000160 = (long)plVar33;
                if (*(byte *)(*plVar21 + 0x130) < bVar12) {
                  plVar21 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar12 * 8 + -8) != lVar31) {
                  plVar21 = (long *)0x0;
                }
              }
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_00000160,plVar21);
              iVar16 = FUN_0377acf0(plVar42,0);
              *(int *)(unaff_x19 + 0x157c) = iVar16;
              if (in_stack_0000169c == 0x3c) {
                in_stack_0000169c = iVar16 + 0xe000;
              }
              else {
                uVar15 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                *(undefined4 *)(unaff_x19 + 0x1580) = uVar15;
              }
              if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
              fVar58 = *(float *)(unaff_x19 + 0xf4);
              FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
              memcpy(&stack0x00001610,&stack0x000016a0,0x60);
              iVar16 = FUN_03776950(&stack0x00001610,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
              memcpy(&stack0x00001610,&stack0x000016a0,0x60);
              fVar49 = (float)FUN_03776960(&stack0x00001610,0);
              fVar59 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar59 = 1.0;
              }
              if (*in_stack_00000160 == 0) goto LAB_03793c9c;
              fVar59 = (fVar58 / (float)iVar16) * fVar49 * fVar59;
              iVar16 = FUN_03776950(*in_stack_00000160 + 0x48,0);
              fVar58 = *(float *)(unaff_x19 + 0xf4);
              if (iVar16 < 1) {
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                iVar16 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar49 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                fStack0000000000000170 = in_stack_00000150;
                if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                  fStack0000000000000170 = 1.0;
                }
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar50 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (plVar42[4] == 0) goto LAB_03793c9c;
                FUN_03776e6c(&stack0x000016a0,plVar42[4],0);
                fVar62 = (float)FUN_03776c9c(&stack0x000015c0,0);
                if (plVar42[4] == 0) goto LAB_03793c9c;
                fVar64 = *(float *)((long)plVar42 + 0x2c);
                fVar65 = (float)FUN_03776ea8(plVar42[4],0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar61 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar66 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar55 = *(float *)(unaff_x19 + 0xf0);
                fVar45 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                fVar45 = fVar59 * fVar66 * fVar55 * fVar45;
                fStack0000000000000170 = (fVar58 / (float)iVar16) * fVar49 * fStack0000000000000170;
                fVar58 = fStack0000000000000170 * (fVar50 / fVar62) * fVar64 * fVar65;
                fStack0000000000000170 = fStack0000000000000170 / fVar58;
                fVar61 = fStack0000000000000170 * fVar61;
                fVar59 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fStack0000000000000170 = fStack0000000000000170 * fVar59;
              }
              else {
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                iVar16 = FUN_03776950(*in_stack_00000160 + 0x48,0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar49 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                if (plVar42[4] == 0) goto LAB_03793c9c;
                fVar62 = *(float *)((long)plVar42 + 0x2c);
                fVar50 = in_stack_00000150;
                if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                  fVar50 = 1.0;
                }
                fVar64 = (float)FUN_03776ea8(plVar42[4],0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar61 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar65 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
                if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                fVar66 = *(float *)(unaff_x19 + 0xf0);
                fVar45 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
                fVar45 = fVar59 * fVar65 * fVar66 * fVar45;
                fVar58 = (fVar58 / (float)iVar16) * fVar49 * fVar50 * fVar62 * fVar64;
                fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
              }
              *in_stack_000001a8 = (long)plVar42;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (in_stack_000001a8,plVar42);
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
              lVar31 = lVar31 + (long)(int)*in_stack_000001d0 * unaff_x27;
              *(undefined1 *)(lVar31 + 0x28) = 2;
              *(float *)(lVar31 + 0x16c) = fVar58;
              *(long *)(lVar31 + 0x48) = *in_stack_00000160;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
              *(long *)(lVar31 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) =
                   *in_stack_000001c8;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              uVar14 = *in_stack_000001d0;
              if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              *(undefined4 *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x60) =
                   *(undefined4 *)(unaff_x19 + 0x78);
              *(undefined4 *)(unaff_x19 + 0x78) = uVar46;
              in_stack_000001a0 = 0.0;
              unaff_x29 = in_stack_000001d0;
              goto LAB_0378db90;
            }
            lVar31 = *in_stack_000001e8;
            fVar45 = 0.0;
            unaff_s12 = fVar58;
            if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
              unaff_s12 = fVar45;
            }
            if (lVar31 == 0) goto LAB_03793c9c;
            uVar14 = *unaff_x29;
            fVar61 = 0.0;
            fStack0000000000000170 = 0.0;
          }
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)uVar14 * (long)iVar18;
          *(short *)(lVar31 + 0x20) = (short)in_stack_0000169c;
          *(undefined4 *)(lVar31 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
          *(undefined4 *)(lVar31 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
               *(undefined4 *)(unaff_x19 + 0x1b0);
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
               *(undefined4 *)(unaff_x19 + 0x1b4);
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar19 = in_stack_00000100[1];
          in_stack_000016a0 = *in_stack_00000100;
          if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
          *(undefined4 *)(lVar31 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
          *(undefined8 *)(lVar31 + 400) = uVar19;
          *(undefined8 *)(lVar31 + 0x188) = in_stack_000016a0;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
          lVar34 = *(long *)(lVar31 + 0x38);
          *(undefined4 *)(lVar31 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
          if ((lVar34 == 0) &&
             ((*in_stack_000001a8 == 0 ||
              (lVar34 = *(long *)(*in_stack_000001a8 + 0x20), lVar34 == 0)))) goto LAB_03793c9c;
          FUN_03776e6c(&stack0x000016a0,lVar34,0);
          if (in_stack_0000169c >> 0x10 == 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b63d8(in_stack_0000169c,0);
            unaff_w26 = uVar14 & 1;
          }
          else {
            unaff_w26 = 0;
          }
          uVar46 = 0;
          in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
          if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            uVar14 = *unaff_x29;
            uVar30 = *(uint *)(*in_stack_000001a8 + 0x28);
            if ((int)uVar14 < (int)uStack00000000000000dc) {
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= uVar14 + 1) goto thunk_FUN_01ab6c44;
              lVar31 = *(long *)(lVar31 + (long)(int)(uVar14 + 1) * (long)iVar18 + 0x30);
              if ((((lVar31 == 0) || (*in_stack_000001c8 == 0)) ||
                  (lVar34 = *(long *)(*in_stack_000001c8 + 0x170), lVar34 == 0)) ||
                 (lVar34 = *(long *)(lVar34 + 0x40), lVar34 == 0)) goto LAB_03793c9c;
              in_stack_000016a0 =
                   CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                            uVar30 | *(int *)(lVar31 + 0x28) << 0x10);
              uVar52 = FUN_0219f8b8(lVar34,&stack0x000016a0,&stack0x00001590,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                   );
              if ((uVar52 & 1) != 0) {
                FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
                uVar46 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                                   (&stack0x00001570,0);
                uVar52 = FUN_037791f0(&stack0x00001590,0);
                if ((uVar52 & 0x100) != 0) {
                  in_stack_00000188 = 0.0;
                }
              }
              uVar14 = *unaff_x29;
            }
            if (0 < (int)uVar14) {
              lVar31 = *in_stack_000001e8;
              if (lVar31 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar31 + 0x18) <= uVar14 - 1) goto thunk_FUN_01ab6c44;
              lVar31 = *(long *)(lVar31 + (ulong)(uVar14 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
              if (((lVar31 == 0) || (*in_stack_000001c8 == 0)) ||
                 ((lVar34 = *(long *)(*in_stack_000001c8 + 0x170), lVar34 == 0 ||
                  (lVar34 = *(long *)(lVar34 + 0x40), lVar34 == 0)))) goto LAB_03793c9c;
              in_stack_000016a0 =
                   CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                            *(uint *)(lVar31 + 0x28) | uVar30 << 0x10);
              uVar52 = FUN_0219f8b8(lVar34,&stack0x000016a0,&stack0x00001590,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                   );
              if ((uVar52 & 1) != 0) {
                FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
                UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                          (&stack0x00001570,0);
                FUN_03778e8c(uVar46,0);
                uVar52 = FUN_037791f0(&stack0x00001590,0);
                if ((uVar52 & 0x100) != 0) {
                  in_stack_00000188 = 0.0;
                }
              }
            }
          }
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *unaff_x29;
          uVar46 = FUN_03778e7c(&stack0x000015e0,0);
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          *(undefined4 *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x160) = uVar46;
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar52 = FUN_037a5c04(in_stack_0000169c,0);
          uVar14 = *unaff_x29;
          if ((uVar52 & 1) == 0) {
            if ((uVar52 & 1) == 0 && 0 < (int)uVar14) {
              uVar30 = *(uint *)(unaff_x19 + 0x19c4);
              if ((uVar30 == 0x80000000) || (uVar30 != uVar14 - 1)) {
                do {
                  uVar30 = uVar14 - 1;
                  uVar46 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
                  if (((int)uVar14 < 1) || (uVar30 == *(uint *)(unaff_x19 + 0x19c4))) {
                    uVar14 = *(uint *)(unaff_x19 + 0x19c4);
                    if (uVar14 == 0x80000000) goto LAB_0378dfc4;
                    lVar31 = *in_stack_000001e8;
                    if (lVar31 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                    lVar31 = *(long *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x30);
                    if ((lVar31 == 0) || (lVar31 = FUN_03787a68(lVar31,0), lVar31 == 0))
                    goto LAB_03793c9c;
                    uVar14 = FUN_03776e5c(lVar31,0);
                    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                    iVar16 = FUN_0377acf0(*in_stack_000001a8,0);
                    if (((*in_stack_000001c8 == 0) ||
                        (lVar31 = FUN_03779cb4(*in_stack_000001c8,0), lVar31 == 0)) ||
                       (*(long *)(lVar31 + 0x48) == 0)) goto LAB_03793c9c;
                    in_stack_000016a0 = CONCAT44(uVar46,uVar14 | iVar16 << 0x10);
                    uVar54 = FUN_0219f8b8(*(long *)(lVar31 + 0x48),&stack0x000016a0,&stack0x00001518
                                          ,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                         );
                    unaff_x29 = in_stack_000001d0;
                    if ((uVar54 & 1) == 0) goto LAB_0378dfc4;
                    lVar31 = *in_stack_000001e8;
                    if (lVar31 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                    goto thunk_FUN_01ab6c44;
                    fVar59 = *(float *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) *
                                                 unaff_x27 + 0x148);
                    fVar62 = *(float *)(unaff_x19 + 0x2f4);
                    FUN_037793b0(&stack0x00001518,0);
                    fVar49 = (float)FUN_03779388(&stack0x00001550,0);
                    FUN_037793c0(&stack0x00001518,0);
                    fVar50 = (float)FUN_03779398(&stack0x00001548,0);
                    FUN_03778e64(((fVar59 - fVar62) / unaff_s12 + fVar49) - fVar50,&stack0x000015e0,
                                 0);
                    FUN_037793b0(&stack0x00001518,0);
                    fVar59 = (float)FUN_03779390(&stack0x00001550,0);
                    puVar22 = &stack0x00001518;
                    goto LAB_0378f5a8;
                  }
                  lVar31 = *in_stack_000001e8;
                  if (lVar31 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar31 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
                  lVar31 = *(long *)(lVar31 + (ulong)uVar30 * (unaff_x27 & 0xffffffff) + 0x30);
                  if ((lVar31 == 0) || (lVar31 = FUN_03787a68(lVar31,0), lVar31 == 0))
                  goto LAB_03793c9c;
                  uVar14 = FUN_03776e5c(lVar31,0);
                  if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                  iVar16 = FUN_0377acf0(*in_stack_000001a8,0);
                  if (((*in_stack_000001c8 == 0) ||
                      (lVar31 = FUN_03779cb4(*in_stack_000001c8,0), lVar31 == 0)) ||
                     (*(long *)(lVar31 + 0x50) == 0)) goto LAB_03793c9c;
                  in_stack_000016a0 = CONCAT44(uVar46,uVar14 | iVar16 << 0x10);
                  uVar54 = FUN_0219f8b8(*(long *)(lVar31 + 0x50),&stack0x000016a0,&stack0x00001530,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__
                                       );
                  unaff_x29 = in_stack_000001d0;
                  uVar14 = uVar30;
                } while ((uVar54 & 1) == 0);
                lVar31 = *in_stack_000001e8;
                if (lVar31 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar31 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
                fVar62 = *(float *)(unaff_x19 + 0x2e0);
                fVar64 = *(float *)(unaff_x19 + 0x180);
                lVar31 = lVar31 + uVar30 * unaff_x27;
                fVar59 = *(float *)(unaff_x19 + 0x2f4);
                fVar65 = *(float *)(lVar31 + 0x148);
                fVar66 = *(float *)(lVar31 + 0x150);
                FUN_037793d0(&stack0x00001530,0);
                fVar49 = (float)FUN_03779388(&stack0x00001550,0);
                FUN_037793e0(&stack0x00001530,0);
                fVar50 = (float)FUN_03779398(&stack0x00001548,0);
                FUN_03778e64(((fVar65 - fVar59) / unaff_s12 + fVar49) - fVar50,&stack0x000015e0,0);
                FUN_037793d0(&stack0x00001530,0);
                fVar59 = (float)FUN_03779390(&stack0x00001550,0);
                FUN_037793e0(&stack0x00001530,0);
                fVar49 = (float)FUN_037793a0(&stack0x00001548,0);
                FUN_03778e74(((fVar66 - ((fVar45 - fVar62) + fVar64)) / unaff_s12 + fVar59) - fVar49
                             ,&stack0x000015e0,0);
                in_stack_00000188 = 0.0;
              }
              else {
                lVar31 = *in_stack_000001e8;
                if (lVar31 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar31 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
                lVar31 = *(long *)(lVar31 + (long)(int)uVar30 * unaff_x27 + 0x30);
                if ((lVar31 == 0) || (lVar31 = FUN_03787a68(lVar31,0), lVar31 == 0))
                goto LAB_03793c9c;
                uVar14 = FUN_03776e5c(lVar31,0);
                if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                iVar16 = FUN_0377acf0(*in_stack_000001a8,0);
                if (((*in_stack_000001c8 == 0) ||
                    (lVar31 = FUN_03779cb4(*in_stack_000001c8,0), lVar31 == 0)) ||
                   (*(long *)(lVar31 + 0x48) == 0)) goto LAB_03793c9c;
                in_stack_000016a0 =
                     CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar14 | iVar16 << 0x10);
                uVar54 = FUN_0219f8b8(*(long *)(lVar31 + 0x48),&stack0x000016a0,&stack0x00001558,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                     );
                unaff_x29 = in_stack_000001d0;
                if ((uVar54 & 1) != 0) {
                  lVar31 = *in_stack_000001e8;
                  if (lVar31 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                  goto thunk_FUN_01ab6c44;
                  fVar59 = *(float *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27
                                     + 0x148);
                  fVar62 = *(float *)(unaff_x19 + 0x2f4);
                  FUN_037793b0(&stack0x00001558,0);
                  fVar49 = (float)FUN_03779388(&stack0x00001550,0);
                  FUN_037793c0(&stack0x00001558,0);
                  fVar50 = (float)FUN_03779398(&stack0x00001548,0);
                  FUN_03778e64(((fVar59 - fVar62) / unaff_s12 + fVar49) - fVar50,&stack0x000015e0,0)
                  ;
                  FUN_037793b0(&stack0x00001558,0);
                  fVar59 = (float)FUN_03779390(&stack0x00001550,0);
                  puVar22 = &stack0x00001558;
LAB_0378f5a8:
                  FUN_037793c0(puVar22,0);
                  fVar49 = (float)FUN_037793a0(&stack0x00001548,0);
                  FUN_03778e74(fVar59 - fVar49,&stack0x000015e0,0);
                  in_stack_00000188 = 0.0;
                  unaff_x29 = in_stack_000001d0;
                }
              }
            }
          }
          else {
            *(uint *)(unaff_x19 + 0x19c4) = uVar14;
          }
LAB_0378dfc4:
          fVar59 = (float)FUN_03778e6c(&stack0x000015e0,0);
          fVar49 = (float)FUN_03778e6c(&stack0x000015e0,0);
          if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
            fVar62 = *(float *)(unaff_x19 + 0x2f4);
            fVar50 = (float)FUN_03776cb4(&stack0x000015f0,0);
            fVar62 = fVar62 - unaff_s12 * fVar50 * (1.0 - *(float *)(unaff_x19 + 0x1594));
            *(float *)(unaff_x19 + 0x2f4) = fVar62;
            if ((unaff_w26 != 0) || (in_stack_0000169c == 0x200b)) {
              *(float *)(unaff_x19 + 0x2f4) =
                   fVar62 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
            }
          }
          fVar50 = *(float *)(unaff_x19 + 0x2f0);
          if (fVar50 == 0.0) {
            in_stack_000000e8._4_4_ = 0.0;
          }
          else {
            fVar62 = (float)FUN_03776c94(&stack0x000015f0,0);
            fVar64 = (float)FUN_03776ca4(&stack0x000015f0,0);
            in_stack_000000e8._4_4_ =
                 (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                 (fVar50 * 0.5 - unaff_s12 * (fVar62 * 0.5 + fVar64));
            *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000e8._4_4_;
          }
          uVar14 = 0;
          if ((cVar25 == '\0') && (*unaff_x24 == '\x01')) {
            uVar14 = *(uint *)(unaff_x19 + 0x124) & 1;
          }
          lVar31 = *in_stack_00000190;
          if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar54 = FUN_036cee6c(lVar31,0,0);
          puVar7 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
          if (uVar14 == 0) {
            in_stack_00000148 = 0.0;
            if ((uVar54 & 1) != 0) {
              lVar31 = *in_stack_00000190;
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar31 == 0) goto LAB_03793c9c;
              uVar54 = FUN_03699d3c(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c)
                                    ,0);
              if ((uVar54 & 1) != 0) {
                lVar31 = *in_stack_00000190;
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar31 == 0) goto LAB_03793c9c;
                uVar54 = FUN_03699d3c(lVar31,*(undefined4 *)
                                              (*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
                if ((uVar54 & 1) != 0) {
                  lVar31 = *in_stack_00000190;
                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (lVar31 == 0) goto LAB_03793c9c;
                  fVar50 = (float)FUN_0369e060(lVar31,*(undefined4 *)
                                                       (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0)
                  ;
                  unaff_x28 = (long *)PTR_DAT_03cbe438;
                  if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto LAB_03793c9c;
                  fVar64 = *(float *)(*in_stack_000001c8 + 0x188);
                  fVar62 = (float)FUN_0369e060(*in_stack_00000190,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
                  fVar62 = fVar62 * fVar50 * fVar64 * 0.25;
                  if (fVar50 < in_stack_000001a0 + fVar62) {
                    in_stack_000001a0 = fVar50 - fVar62;
                  }
                  goto LAB_0378e344;
                }
              }
            }
            fVar62 = 0.0;
            unaff_x28 = (long *)PTR_DAT_03cbe438;
          }
          else {
            fVar62 = 0.0;
            unaff_x28 = (long *)PTR_DAT_03cbe438;
            if ((uVar54 & 1) != 0) {
              lVar31 = *in_stack_00000190;
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                          0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              if (lVar31 == 0) goto LAB_03793c9c;
              uVar54 = FUN_03699d3c(lVar31,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c)
                                    ,0);
              unaff_x28 = (long *)PTR_DAT_03cbe438;
              if ((uVar54 & 1) != 0) {
                lVar31 = *in_stack_00000190;
                if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar31 == 0) goto LAB_03793c9c;
                fVar50 = (float)FUN_0369e060(lVar31,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar64 = (float)FUN_03779d1c(*in_stack_000001c8,0);
                unaff_x28 = (long *)PTR_DAT_03cbe438;
                if (*in_stack_00000190 == 0) goto LAB_03793c9c;
                fVar62 = (float)FUN_0369e060(*in_stack_00000190,
                                             *(undefined4 *)
                                              (*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
                fVar62 = fVar50 * fVar64 * 0.25 * fVar62;
                if (fVar50 < in_stack_000001a0 + fVar62) {
                  in_stack_000001a0 = fVar50 - fVar62;
                }
              }
            }
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            in_stack_00000148 = (float)FUN_03779d2c(*in_stack_000001c8,0);
          }
LAB_0378e344:
          fVar66 = *(float *)(unaff_x19 + 0x2f4);
          fVar50 = (float)FUN_03776ca4(&stack0x000015f0,0);
          fVar65 = *(float *)(unaff_x19 + 0x19a8);
          fVar64 = (float)FUN_03778e5c(&stack0x000015e0,0);
          fVar66 = fVar66 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                            unaff_s12 * (fVar64 + ((fVar50 * fVar65 - in_stack_000001a0) - fVar62));
          fVar50 = (float)FUN_03776cac(&stack0x000015f0,0);
          fVar64 = (float)FUN_03778e6c(&stack0x000015e0,0);
          in_stack_000001b8._4_4_ =
               *(float *)(unaff_x19 + 0x180) +
               ((fVar45 + unaff_s12 * (in_stack_000001a0 + fVar50 + fVar64)) -
               *(float *)(unaff_x19 + 0x2e0));
          fVar50 = (float)FUN_03776c9c(&stack0x000015f0,0);
          fVar65 = in_stack_000001b8._4_4_ -
                   unaff_s12 * (in_stack_000001a0 + in_stack_000001a0 + fVar50);
          fVar50 = (float)FUN_03776c94(&stack0x000015f0,0);
          fVar55 = fVar66 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                            unaff_s12 *
                            (fVar62 + fVar62 +
                            in_stack_000001a0 + in_stack_000001a0 +
                            fVar50 * *(float *)(unaff_x19 + 0x19a8));
          fVar50 = fVar66;
          fVar64 = fVar55;
          if (((cVar25 == '\0') && (*unaff_x24 == '\x01')) &&
             ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
            iVar16 = *(int *)(unaff_x19 + 0x19a4);
            fVar50 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar64 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
            fVar68 = *(float *)(unaff_x19 + 0xf0);
            fVar48 = *(float *)(unaff_x19 + 0x180);
            fVar60 = (float)iVar16 * fStack00000000000000a8;
            fVar47 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
            fVar47 = fVar47 * fVar68 * (fVar50 - (fVar64 + fVar48)) * 0.5;
            fVar50 = (float)FUN_03776cac(&stack0x000015f0,0);
            fVar64 = fVar60 * unaff_s12 * ((fVar62 + in_stack_000001a0 + fVar50) - fVar47);
            fVar68 = (float)FUN_03776cac(&stack0x000015f0,0);
            fVar48 = (float)FUN_03776c9c(&stack0x000015f0,0);
            in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ + 0.0;
            fVar50 = fVar66 + fVar64;
            fVar65 = fVar65 + 0.0;
            fVar64 = fVar55 + fVar64;
            fVar60 = fVar60 * unaff_s12 *
                              ((((fVar68 - fVar48) - in_stack_000001a0) - fVar62) - fVar47);
            fVar66 = fVar66 + fVar60;
            fVar55 = fVar55 + fVar60;
          }
          uVar19 = *in_stack_000000f8;
          uVar20 = *_fStack00000000000000f0;
          if (DAT_0411f169 == '\0') {
            FUN_01ab69ac(PTR_DAT_03cbdeb8);
            DAT_0411f169 = '\x01';
          }
          uVar51 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
          uVar53 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
          fVar62 = 0.0;
          if (DAT_00d38b04 <
              (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar53 >> 0x20) +
              (float)uVar20 * (float)uVar53 +
              (float)uVar19 * (float)uVar51 +
              (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar51 >> 0x20)) {
            fVar57 = 0.0;
            fVar60 = 0.0;
            fVar48 = 0.0;
            fVar47 = in_stack_000001b8._4_4_;
            fVar68 = fVar65;
          }
          else {
            FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                         *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                         *(undefined4 *)(unaff_x19 + 0x19c0),0);
            fVar63 = (fVar64 + fVar66) * 0.5;
            fVar67 = (fVar65 + in_stack_000001b8._4_4_) * 0.5;
            in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ - fVar67;
            fVar48 = 0.0;
            fVar47 = in_stack_000001b8._4_4_;
            fVar50 = (float)FUN_036bdd2c(fVar50 - fVar63,&stack0x000014d0,0);
            fVar50 = fVar63 + fVar50;
            fVar48 = fVar48 + 0.0;
            fVar68 = fVar65 - fVar67;
            fVar60 = 0.0;
            fVar65 = fVar68;
            fVar66 = (float)FUN_036bdd2c(fVar66 - fVar63,&stack0x000014d0,0);
            fVar66 = fVar63 + fVar66;
            fVar65 = fVar67 + fVar65;
            fVar60 = fVar60 + 0.0;
            fVar57 = 0.0;
            fVar64 = (float)FUN_036bdd2c(fVar64 - fVar63,&stack0x000014d0,0);
            fVar64 = fVar63 + fVar64;
            in_stack_000001b8._4_4_ = fVar67 + in_stack_000001b8._4_4_;
            fVar57 = fVar57 + 0.0;
            fVar62 = 0.0;
            fVar55 = (float)FUN_036bdd2c(fVar55 - fVar63,&stack0x000014d0,0);
            fVar55 = fVar63 + fVar55;
            fVar62 = fVar62 + 0.0;
            fVar47 = fVar67 + fVar47;
            fVar68 = fVar67 + fVar68;
          }
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
          *(float *)(lVar31 + 0x124) = fVar66;
          *(float *)(lVar31 + 0x128) = fVar65;
          *(float *)(lVar31 + 300) = fVar60;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
          *(float *)(lVar31 + 0x118) = fVar50;
          *(float *)(lVar31 + 0x11c) = fVar47;
          *(float *)(lVar31 + 0x120) = fVar48;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
          *(float *)(lVar31 + 0x138) = fVar57;
          *(float *)(lVar31 + 0x130) = fVar64;
          *(float *)(lVar31 + 0x134) = in_stack_000001b8._4_4_;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar31 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)*unaff_x29 * unaff_x27;
          *(float *)(lVar31 + 0x13c) = fVar55;
          *(float *)(lVar31 + 0x140) = fVar68;
          *(float *)(lVar31 + 0x144) = fVar62;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *unaff_x29;
          fVar62 = *(float *)(unaff_x19 + 0x2f4);
          fVar50 = (float)FUN_03778e5c(&stack0x000015e0,0);
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          *(float *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x148) = fVar62 + unaff_s12 * fVar50;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *unaff_x29;
          fVar55 = *(float *)(unaff_x19 + 0x2e0);
          fVar62 = *(float *)(unaff_x19 + 0x180);
          fVar50 = (float)FUN_03778e6c(&stack0x000015e0,0);
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          *(float *)(lVar31 + (long)(int)uVar14 * unaff_x27 + 0x150) =
               (fVar45 - fVar55) + fVar62 + unaff_s12 * fVar50;
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *unaff_x29;
          unaff_x20 = (long)(int)uVar14;
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          *(float *)(lVar31 + unaff_x20 * unaff_x27 + 0x168) = (fVar64 - fVar66) / (fVar47 - fVar65)
          ;
          fVar59 = unaff_s12 * (fVar61 + fVar59);
          if (*unaff_x24 == '\x01') {
            fVar59 = fVar59 / fStack000000000000017c;
            fVar49 = (unaff_s12 * (fStack0000000000000170 + fVar49)) / fStack000000000000017c;
          }
          else {
            fVar49 = unaff_s12 * (fStack0000000000000170 + fVar49);
          }
          in_stack_000001b8._4_4_ = *(float *)(unaff_x19 + 0x328);
          fVar50 = *(float *)(unaff_x19 + 0x180);
          bVar9 = (float)uVar14 == in_stack_000001b8._4_4_;
          bVar8 = unaff_w26 == 0;
          fVar59 = fVar50 + fVar59;
          if (bVar8 || bVar9) {
            fVar49 = fVar50 + fVar49;
            fVar61 = fVar59;
            fVar62 = fVar49;
            if (fVar50 != 0.0) {
              fVar61 = (fVar59 - fVar50) / *(float *)(unaff_x19 + 0xf0);
              fVar62 = (fVar49 - fVar50) / *(float *)(unaff_x19 + 0xf0);
              if (fVar61 <= fVar59) {
                fVar61 = fVar59;
              }
              if (fVar49 <= fVar62) {
                fVar62 = fVar49;
              }
            }
            lVar34 = lVar31 + unaff_x20 * unaff_x27;
            fVar50 = fVar61;
            if (fVar61 <= *(float *)(unaff_x19 + 0x338)) {
              fVar50 = *(float *)(unaff_x19 + 0x338);
            }
            fVar64 = fVar62;
            if (*(float *)(unaff_x19 + 0x33c) <= fVar62) {
              fVar64 = *(float *)(unaff_x19 + 0x33c);
            }
            *(float *)(unaff_x19 + 0x338) = fVar50;
            *(float *)(unaff_x19 + 0x33c) = fVar64;
            *(float *)(lVar34 + 0x158) = fVar61;
            *(float *)(lVar34 + 0x15c) = fVar62;
            fVar61 = *(float *)(unaff_x19 + 0x2e0);
            fVar62 = fVar59 - fVar61;
          }
          else {
            fVar50 = *(float *)(unaff_x19 + 0x338);
            lVar34 = lVar31 + unaff_x20 * unaff_x27;
            *(float *)(lVar34 + 0x158) = fVar50;
            fVar49 = *(float *)(unaff_x19 + 0x33c);
            *(float *)(lVar34 + 0x15c) = fVar49;
            fVar61 = *(float *)(unaff_x19 + 0x2e0);
            fVar62 = fVar50 - fVar61;
          }
          *(float *)(lVar34 + 0x14c) = fVar62;
          *(float *)(lVar31 + unaff_x20 * unaff_x27 + 0x154) = fVar49 - fVar61;
          *(float *)(unaff_x19 + 0x378) = fVar49 - fVar61;
          if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
            if (bVar8 || bVar9) {
              *(float *)(unaff_x19 + 0x374) = fVar50;
              if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
              fVar49 = *(float *)(unaff_x19 + 0x370);
              fVar50 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
              fVar61 = *(float *)(unaff_x19 + 0x2e0);
              fStack000000000000017c = (unaff_s12 * fVar50) / fStack000000000000017c;
              if (fVar49 <= fStack000000000000017c) {
                fVar49 = fStack000000000000017c;
              }
              *(float *)(unaff_x19 + 0x370) = fVar49;
              if (fVar61 == 0.0) goto LAB_0378ee0c;
            }
          }
          else if ((bVar8 || bVar9) && fVar61 == 0.0) {
LAB_0378ee0c:
            fVar49 = *(float *)(unaff_x19 + 0x19c8);
            if (*(float *)(unaff_x19 + 0x19c8) <= fVar59) {
              fVar49 = fVar59;
            }
            *(float *)(unaff_x19 + 0x19c8) = fVar49;
          }
          lVar31 = *in_stack_000001e8;
          if (lVar31 == 0) goto LAB_03793c9c;
          uVar14 = *unaff_x29;
          if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
          lVar31 = lVar31 + (long)(int)uVar14 * unaff_x27;
          *(undefined1 *)(lVar31 + 0x1a0) = 0;
          unaff_w25 = *(uint *)(unaff_x19 + 0x158) & 0x18;
          if ((in_stack_0000169c != 9) &&
             ((((unaff_w26 != 0 || (in_stack_0000169c == 3)) ||
               ((in_stack_0000169c == 0x200b || (in_stack_0000169c == 0xad)))) &&
              ((!(bool)(in_stack_0000169c == 0xad & (bVar11 ^ 1U)) && (*unaff_x24 != '\x02')))))) {
            if (((in_stack_0000169c & 0xfffffffe) != 10) ||
               (*(int *)(in_stack_000001e0 + 0x74) != 6)) goto LAB_0378f3c0;
            fVar58 = 0.0;
            if ((0.0 < fVar61) && (fVar58 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar58 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            if ((*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar61)) + fVar58
                <= in_stack_00000108) goto LAB_0378f3c0;
            if (*(int *)(unaff_x19 + 0x34c) == -1) {
              *(uint *)(unaff_x19 + 0x34c) = uVar14;
            }
            in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
            unaff_x29 = in_stack_000001d0;
            uVar19 = CONCAT44(3,uVar14);
            fVar58 = unaff_s12;
            goto LAB_0378d260;
          }
          *(undefined1 *)(lVar31 + 0x1a0) = 1;
          pfVar27 = _fStack0000000000000130;
          pfVar38 = _iStack0000000000000138;
          if (unaff_w23 != 0) {
            lVar31 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar31 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
            lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
            pfVar38 = (float *)(lVar31 + 100);
            pfVar27 = (float *)(lVar31 + 0x68);
          }
          unaff_s9 = *pfVar38;
          unaff_s8 = *pfVar27;
          fVar59 = *(float *)(unaff_x19 + 0x35c);
          fVar49 = *(float *)(unaff_x19 + 0x2f4);
          fStack0000000000000174 = (fStack000000000000012c - unaff_s9) - unaff_s8;
          bVar9 = true;
          if ((fVar59 <= fStack0000000000000174) && (bVar9 = false, !NAN(fVar59))) {
            bVar9 = fVar59 == -1.0;
          }
          if (!bVar9) {
            fStack0000000000000174 = fVar59;
          }
          fVar59 = 0.0;
          fVar50 = 0.0;
          if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
            fVar50 = (float)FUN_03776cb4(&stack0x000015f0,0);
            fVar61 = *(float *)(unaff_x19 + 0x2e0);
          }
          in_x12 = 0x60;
          fVar62 = *(float *)(unaff_x19 + 0x1594);
          fVar64 = *(float *)(unaff_x19 + 0x33c);
          if (in_stack_0000169c != 0xad) {
            fVar58 = unaff_s12;
          }
          if ((0.0 < fVar61) && (fVar59 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
            fVar59 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
          }
          uVar14 = *in_stack_000001d0;
          fVar59 = (*(float *)(unaff_x19 + 0x374) - (fVar64 - fVar61)) + fVar59;
          if (in_stack_00000108 < fVar59) {
            if (*(int *)(unaff_x19 + 0x34c) == -1) {
              *(uint *)(unaff_x19 + 0x34c) = uVar14;
            }
            uVar19 = DAT_00d37868;
            if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
              fVar65 = *(float *)(in_stack_000001e0 + 0xd0);
              if (((fVar65 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar61)) &&
                 (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                fVar58 = *(float *)(unaff_x19 + 0x15b0) +
                         ((in_stack_00000018._4_4_ - fVar59) / (float)*(int *)(unaff_x19 + 0x340)) /
                         fStack0000000000000088;
                if (fVar58 <= fVar65) {
                  fVar58 = fVar65;
                }
                goto LAB_03793b50;
              }
              fVar61 = *_fStack00000000000000d0;
              fVar59 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar59 < fVar61) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))
                 ) {
                fVar58 = (fVar61 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                if (fVar58 <= DAT_00d38b84) {
                  fVar58 = DAT_00d38b84;
                }
                fVar49 = (fVar61 - fVar58) * 20.0 + 0.5;
                fVar58 = DAT_00d38e60;
                if (fVar49 != INFINITY) {
                  fVar58 = (float)(int)fVar49 / 20.0;
                }
                if (fVar58 <= fVar59) {
                  fVar58 = fVar59;
                }
                *(float *)(unaff_x19 + 0x1598) = fVar61;
                goto LAB_037910ac;
              }
            }
            switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
            case 1:
              if (0 < *(int *)(unaff_x19 + 0x340)) {
                iVar16 = FUN_020aa428(in_stack_00000078,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                     );
                uVar19 = DAT_00d37868;
                if (iVar16 == 0) {
                  in_stack_0000160c = 0xffffffff;
                  in_stack_000001d0[0] = 0;
                  in_stack_000001d0[1] = 0;
                  unaff_x29 = in_stack_000001d0;
                  fVar58 = unaff_s12;
                }
                else {
                  FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                              );
                  memcpy(&stack0x00001138,&stack0x000016a0,0x398);
                  iVar16 = FUN_03797154();
                  in_stack_0000160c = iVar16 - 1;
                  iVar16 = *(int *)(unaff_x19 + 0x324) + -1;
                  *(int *)(unaff_x19 + 0x324) = iVar16;
                  uVar19 = CONCAT44(0x2026,iVar16);
                  in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                  unaff_x29 = in_stack_000001d0;
                  fVar58 = unaff_s12;
                }
                goto LAB_0378d260;
              }
              break;
            case 3:
              in_stack_0000160c = FUN_03797154();
              uVar19 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),uVar14);
              unaff_x29 = in_stack_000001d0;
              fVar58 = unaff_s12;
              goto LAB_0378d260;
            case 5:
              if (uVar14 == 0 || (int)in_stack_0000160c < 0) {
                in_stack_0000160c = 0xffffffff;
                *in_stack_000001d0 = 0;
                unaff_x29 = in_stack_000001d0;
                fVar58 = unaff_s12;
                goto LAB_0378d260;
              }
              fVar58 = *(float *)(unaff_x19 + 0x338);
              in_stack_0000160c = FUN_03797154();
              if (fVar58 - fVar64 <= in_stack_00000108) {
                *(undefined4 *)(unaff_x19 + 0x328) = *(undefined4 *)(unaff_x19 + 0x324);
                *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
                *(int *)(unaff_x19 + 0x340) = *(int *)(unaff_x19 + 0x340) + 1;
                *(undefined1 *)(unaff_x19 + 0x37c) = 1;
                *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
                *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
                *(undefined4 *)(unaff_x19 + 0x374) = 0;
                *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
                *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
                *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
                unaff_x29 = in_stack_000001d0;
                uVar19 = in_stack_00001688;
                fVar58 = unaff_s12;
                goto LAB_0378d260;
              }
              goto LAB_0378f7e8;
            case 6:
              in_stack_0000160c = FUN_03797154();
              uVar19 = CONCAT44(3,uVar14);
              unaff_x29 = in_stack_000001d0;
              fVar58 = unaff_s12;
              goto LAB_0378d260;
            }
          }
          unaff_x22 = in_stack_000001e8;
          unaff_x29 = in_stack_000001d0;
          if ((uVar52 & 1) == 0) goto LAB_0378f1e0;
          fVar59 = ABS(fVar49) + fVar50 * (1.0 - fVar62) * fVar58;
          fVar58 = 1.0;
          if (unaff_w25 != 0) {
            fVar58 = DAT_00d38acc;
          }
          if (fVar59 <= fVar58 * fStack0000000000000174) goto LAB_0378f1e0;
          if ((iStack000000000000008c == 0) || (uVar14 == *(uint *)(unaff_x19 + 0x328))) {
            if ((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar49 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
              if (fVar62 < fVar49) {
                fVar50 = fVar59 / (1.0 - fVar62);
                if (fVar62 <= 0.0) {
                  fVar50 = fVar59;
                }
                fVar62 = fVar62 + (fVar59 - fVar58 * (fStack0000000000000174 + DAT_00d38cc4)) /
                                  fVar50;
                goto FUN_03793c4c;
              }
              fVar49 = *(float *)(in_stack_000001e0 + 0xac);
              fVar50 = *_fStack00000000000000d0;
              if (fVar49 < fVar50) goto LAB_03793bbc;
            }
            iVar16 = *(int *)(in_stack_000001e0 + 0x74);
            if (iVar16 == 1) {
              iVar16 = FUN_020aa428(in_stack_00000078,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                   );
              uVar19 = DAT_00d37868;
              if (iVar16 == 0) {
                in_stack_0000160c = 0xffffffff;
                in_stack_000001d0[0] = 0;
                in_stack_000001d0[1] = 0;
                fVar58 = unaff_s12;
              }
              else {
                FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
                memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
                iVar16 = FUN_03797154();
                in_stack_0000160c = iVar16 - 1;
                iVar16 = *(int *)(unaff_x19 + 0x324) + -1;
                *(int *)(unaff_x19 + 0x324) = iVar16;
                in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                uVar19 = CONCAT44(0x2026,iVar16);
                fVar58 = unaff_s12;
              }
              goto LAB_0378d260;
            }
            if (iVar16 == 6) {
              in_stack_0000160c = FUN_03797154();
              uVar14 = *(uint *)(unaff_x19 + 0x324);
            }
            else {
              if (iVar16 != 3) goto LAB_0378f1e0;
              in_stack_0000160c = FUN_03797154();
            }
            goto LAB_037909d0;
          }
          in_stack_0000160c = FUN_03797154();
          if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            in_w8 = *in_stack_000001d0;
            if (*(uint *)(lVar31 + 0x18) <= in_w8) goto thunk_FUN_01ab6c44;
            fVar50 = *(float *)(unaff_x19 + 0x2e0);
            fVar49 = 0.0;
            if ((0.0 < fVar50) && (fVar49 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
              fVar49 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
            }
            fVar49 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
                     *(float *)(lVar31 + (long)(int)in_w8 * unaff_x27 + 0x158) +
                     (fVar49 - *(float *)(unaff_x19 + 0x33c)) +
                     fStack0000000000000088 *
                     (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
          }
          else {
            fVar49 = *(float *)(in_stack_000001e0 + 200);
            *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
            lVar31 = *in_stack_000001e8;
            if (lVar31 == 0) goto LAB_03793c9c;
            fVar50 = *(float *)(unaff_x19 + 0x2e0);
            in_w8 = *(uint *)(unaff_x19 + 0x324);
            fVar49 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar49;
          }
          if ((*(uint *)(lVar31 + 0x18) <= in_w8) ||
             (uVar30 = in_w8 - 1, *(uint *)(lVar31 + 0x18) <= uVar30)) goto thunk_FUN_01ab6c44;
          fVar61 = (fVar49 + *(float *)(unaff_x19 + 0x374) + fVar50) -
                   *(float *)(lVar31 + (long)(int)in_w8 * (long)iVar18 + 0x15c);
          if ((!bVar11 && *(short *)(lVar31 + (long)(int)uVar30 * (long)iVar18 + 0x20) == 0xad) &&
             ((fVar61 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
            in_stack_0000160c = in_stack_0000160c - 1;
            bVar11 = false;
            *in_stack_000001d0 = uVar30;
            uVar19 = CONCAT44(0x2d,uVar30);
            fVar58 = unaff_s12;
            goto LAB_0378d260;
          }
          if (*(short *)(lVar31 + (long)(int)in_w8 * unaff_x27 + 0x20) == 0xad) {
            bVar11 = true;
            uVar19 = in_stack_00001688;
            fVar58 = unaff_s12;
            goto LAB_0378d260;
          }
          if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
            fVar62 = *(float *)(unaff_x19 + 0x1594);
            fVar49 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if ((fVar49 <= fVar62) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))
               ) {
              fVar50 = *_fStack00000000000000d0;
              fVar49 = *(float *)(in_stack_000001e0 + 0xac);
              if ((fVar50 <= fVar49) ||
                 (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) goto LAB_03790b7c;
LAB_03793bbc:
              fVar58 = (fVar50 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
              if (fVar58 <= DAT_00d38b84) {
                fVar58 = DAT_00d38b84;
              }
              *(float *)(unaff_x19 + 0x1598) = fVar50;
              fVar59 = (fVar50 - fVar58) * 20.0 + 0.5;
              fVar58 = DAT_00d38e60;
              if (fVar59 != INFINITY) {
                fVar58 = (float)(int)fVar59 / 20.0;
              }
              if (fVar58 <= fVar49) {
                fVar58 = fVar49;
              }
LAB_037910ac:
              *(float *)(unaff_x19 + 0xec) = fVar58;
              goto LAB_0378c81c;
            }
LAB_03793c60:
            fVar50 = fVar59;
            if (0.0 < fVar62) {
              fVar50 = fVar59 / (1.0 - fVar62);
            }
            fVar62 = fVar62 + (fVar59 - fVar58 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar50;
FUN_03793c4c:
            if (fVar49 <= fVar62) {
              fVar62 = fVar49;
            }
            *(float *)(unaff_x19 + 0x1594) = fVar62;
            goto LAB_0378c81c;
          }
LAB_03790b7c:
          iVar16 = *in_stack_00000030;
          if ((iVar16 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar16 != -1) != 0))
          {
            in_stack_0000160c = FUN_03797154();
            unaff_x28 = (long *)PTR_DAT_03cbe438;
            lVar31 = *(long *)(in_stack_000001c0 + 0x30);
            if (lVar31 == 0) goto LAB_03793c9c;
            in_w8 = *in_stack_000001d0;
            uVar30 = in_w8 - 1;
            if (*(uint *)(lVar31 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
            iStack0000000000000028 = iVar16;
            if (*(short *)(lVar31 + (long)(int)uVar30 * (long)iVar18 + 0x20) == 0xad) {
              in_stack_0000160c = in_stack_0000160c - 1;
              bVar11 = false;
              *in_stack_000001d0 = uVar30;
              uVar19 = CONCAT44(0x2d,uVar30);
              fVar58 = unaff_s12;
              goto LAB_0378d260;
            }
          }
          in_x12 = 0x60;
          if (fVar61 <= in_stack_00000108) {
            FUN_037a1530(fStack0000000000000088);
            bStack00000000000000d8 = 1;
            bVar11 = false;
            uStack00000000000000ac = 1;
            uVar19 = in_stack_00001688;
            fVar58 = unaff_s12;
            goto LAB_0378d260;
          }
          if (*(int *)(unaff_x19 + 0x34c) == -1) {
            *(uint *)(unaff_x19 + 0x34c) = in_w8;
          }
          if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
            fVar49 = *(float *)(in_stack_000001e0 + 0xd0);
            if ((fVar49 < *(float *)(unaff_x19 + 0x15b0)) &&
               (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
              fVar58 = *(float *)(unaff_x19 + 0x15b0) +
                       ((in_stack_00000018._4_4_ - fVar61) /
                       (float)(*(int *)(unaff_x19 + 0x340) + 1)) / fStack0000000000000088;
              if (fVar58 <= fVar49) {
                fVar58 = fVar49;
              }
LAB_03793b50:
              *(float *)(unaff_x19 + 0x15b0) = fVar58;
              goto LAB_0378c81c;
            }
            fVar62 = *(float *)(unaff_x19 + 0x1594);
            fVar49 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
            if ((fVar62 < fVar49) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_03793c60;
            fVar50 = *_fStack00000000000000d0;
            fVar49 = *(float *)(in_stack_000001e0 + 0xac);
            if ((fVar49 < fVar50) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_03793bbc;
          }
          switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
          case 0:
          case 2:
          case 4:
            FUN_037a1530(fStack0000000000000088);
            break;
          case 1:
            iVar16 = FUN_020aa428(in_stack_00000078,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            uVar19 = DAT_00d37868;
            if (iVar16 == 0) {
              bVar11 = false;
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              in_stack_0000160c = 0xffffffff;
              fVar58 = unaff_s12;
            }
            else {
              FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
              iVar17 = FUN_03797154();
              bVar11 = false;
              iVar16 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar16;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000160c = iVar17 - 1;
              uVar19 = CONCAT44(0x2026,iVar16);
              fVar58 = unaff_s12;
            }
            goto LAB_0378d260;
          case 3:
            in_stack_0000160c = FUN_03797154();
            bVar11 = false;
            goto LAB_037909d0;
          case 5:
            *(undefined1 *)(unaff_x19 + 0x37c) = 1;
            FUN_037a1530(fStack0000000000000088);
            *(undefined4 *)(unaff_x19 + 0x15ac) = 0;
            *(undefined4 *)(unaff_x19 + 0x2e0) = 0;
            *(undefined4 *)(unaff_x19 + 0x374) = 0;
            *(undefined4 *)(unaff_x19 + 0x19c8) = 0;
            *(int *)(unaff_x19 + 0x350) = *(int *)(unaff_x19 + 0x350) + 1;
            break;
          case 6:
            bVar11 = false;
            uVar14 = in_w8;
LAB_037909d0:
            uVar19 = CONCAT44(3,uVar14);
            fVar58 = unaff_s12;
            goto LAB_0378d260;
          default:
            goto code_r0x03790e7c;
          }
          bVar11 = false;
LAB_0379053c:
          bStack00000000000000d8 = 1;
          uStack00000000000000ac = 1;
          uVar19 = in_stack_00001688;
          fVar58 = unaff_s12;
          goto LAB_0378d260;
        }
        goto thunk_FUN_01ab6c44;
      }
    }
    goto LAB_03793c9c;
  }
  lVar31 = *unaff_x22;
  if (lVar31 != 0) {
    if (*(uint *)(lVar31 + 0x18) <= uVar14) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(undefined1 *)(lVar31 + (long)(int)uVar14 * (long)iVar18 + 0x1a0) = 0;
    *(uint *)(unaff_x19 + 0x334) = uVar14;
    lVar31 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar31 != 0) {
      uVar14 = *(uint *)(lVar31 + 0x18);
      if (*(uint *)(unaff_x19 + 0x340) < uVar14) {
        lVar34 = lVar31 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
        iVar16 = *(int *)(lVar34 + 0x2c) + 1;
        *(int *)(lVar34 + 0x2c) = iVar16;
        *(int *)(unaff_x19 + 0x348) = iVar16;
        if (*(uint *)(unaff_x19 + 0x340) < uVar14) {
          lVar31 = lVar31 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          *(float *)(lVar31 + 100) = unaff_s9;
          *(float *)(lVar31 + 0x68) = unaff_s8;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
          goto LAB_0378f884;
        }
      }
      goto thunk_FUN_01ab6c44;
    }
  }
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
LAB_0378f3c0:
  if ((((0x22 < in_stack_0000169c - 0x2007) ||
       ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
      (1 < in_stack_0000169c - 10)) && (in_stack_0000169c != 0xa0)) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar52 = FUN_026b97f8(in_stack_0000169c,0);
    if ((uVar52 & 1) == 0) goto LAB_0378f760;
  }
  in_x12 = 0x60;
  unaff_x22 = in_stack_000001e8;
  unaff_x29 = in_stack_000001d0;
  if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
  if (in_stack_0000169c != 0x2060) {
    lVar31 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar31 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
    *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
  }
LAB_0378f760:
  in_x12 = 0x60;
  unaff_x22 = in_stack_000001e8;
  unaff_x29 = in_stack_000001d0;
  if (in_stack_0000169c == 0xa0) {
    lVar31 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar31 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
  }
  goto LAB_0378f884;
LAB_0379194c:
  do {
    uVar14 = uVar29 - 1;
    if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar44 = (long)(int)uVar14;
    lVar34 = lVar31 + lVar44 * 0x188;
    lVar32 = *(long *)(lVar34 + 0x40);
    uVar3 = *(ushort *)(lVar34 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar12 = FUN_026b63d8(uVar3,0);
    if (*(uint *)(lVar31 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar34 = *(long *)(in_stack_000001c0 + 0x48);
    uVar43 = (uint)uVar3;
    if (lVar34 == 0) goto LAB_03793c9c;
    uVar2 = *(uint *)(lVar31 + lVar44 * 0x188 + 0x6c);
    if (*(uint *)(lVar34 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
    lVar35 = (long)(int)uVar2;
    lVar34 = lVar34 + lVar35 * 0x60;
    uVar5 = *(uint *)(lVar34 + 0x40);
    uVar41 = *(uint *)(lVar34 + 0x6c);
    iVar17 = *(int *)(lVar34 + 0x20);
    iVar18 = *(int *)(lVar34 + 0x28);
    iVar16 = *(int *)(lVar34 + 0x2c);
    uVar6 = *(uint *)(lVar34 + 0x44);
    lVar36 = (long)(int)uVar6;
    fVar64 = *(float *)(lVar34 + 0x50);
    fVar45 = *(float *)(lVar34 + 0x58);
    fVar50 = *(float *)(lVar34 + 0x5c);
    fVar61 = *(float *)(lVar34 + 0x60);
    fVar55 = *(float *)(lVar34 + 100);
    fVar66 = *(float *)(lVar34 + 0x70);
    fVar47 = *(float *)(lVar34 + 0x74);
    fVar62 = *(float *)(lVar34 + 0x78);
    fVar65 = *(float *)(lVar34 + 0x7c);
    if ((int)uVar41 < 0x421) {
      if ((int)uVar41 < 0x209) {
        if ((int)uVar41 < 0x111) {
          switch(uVar41) {
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
            if (uVar41 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar41) {
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
            if (uVar41 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar41 < 0x405) {
        if ((int)uVar41 < 0x401) {
          if (uVar41 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar41 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar41 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar41 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar41 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar41 == 0x408) || (uVar41 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar41 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar41) {
      if ((int)uVar41 < 0x2005) {
        if (0x2000 < (int)uVar41) {
          if (uVar41 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar41 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar41 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar41 != 0x1010) {
          uVar26 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar41 != 0x2008) && (uVar41 != 0x2010)) {
        uVar26 = 0x2020;
LAB_03791bc8:
        if (uVar41 != uVar26) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar50 = fVar66 + fVar62;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar41 < 0x811) {
      switch(uVar41) {
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
        if ((int)uVar14 <= (int)uVar6) {
          if (uVar43 < 0xad) {
            if ((uVar43 != 3) && (uVar43 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar43 != 0xad) && ((uVar43 != 0x200b && (uVar43 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar31 + 0x18) <= uVar5) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar31 + (long)(int)uVar5 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar42 = (long *)PTR_DAT_03cbded8;
            }
            uVar23 = FUN_026b8cc4(uVar4,0);
            if ((uVar23 & 1) == 0) {
              bVar10 = (int)uVar2 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar50 <= fVar61) && (!bVar10 && (uVar41 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar55;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar61 + fVar55;
              }
              goto LAB_03791c20;
            }
            if ((uVar29 == 1) || (uVar2 != uVar30)) {
              cVar25 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar25 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar16 = (iVar16 - iVar17) - (uStack0000000000000090 & 1);
                fVar55 = -fVar50;
                if (cVar25 != '\0') {
                  fVar55 = fVar50;
                }
                if (iVar16 < 1) {
                  fVar50 = 1.0;
                }
                else {
                  fVar50 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar16 < 2) {
                  iVar16 = 1;
                }
                fVar61 = fVar61 + fVar55;
                if (uVar43 == 9) {
LAB_037939d0:
                  if (cVar25 != '\0') {
                    fVar61 = fVar61 * (1.0 - fVar50);
                    fVar55 = (float)iVar16;
LAB_03793a0c:
                    in_stack_00000158 = in_stack_00000158 - fVar61 / fVar55;
                    break;
                  }
                  fVar55 = (float)iVar16;
                  fVar61 = fVar61 * (1.0 - fVar50);
                }
                else {
                  if (uVar43 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar23 = FUN_026b97f8(uVar43,0);
                    cVar25 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar23 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar61 = fVar61 * fVar50;
                  fVar55 = (float)(int)((iVar17 - (~uStack0000000000000090 & 1)) + iVar18);
                  if (cVar25 != '\0') goto LAB_03793a0c;
                }
                in_stack_00000158 = in_stack_00000158 + fVar61 / fVar55;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar55;
            if (cVar25 != '\0') {
              in_stack_00000158 = fVar61 + fVar55;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar43,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar41 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar41) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar55 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar50;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        in_stack_00000158 = (fVar55 + fVar61 * 0.5) - fVar50 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        in_stack_00000158 = (fVar61 + fVar55) - fVar50;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar61 + fVar55;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar41 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar41 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar34 = lVar31 + lVar44 * 0x188;
    fVar55 = fStack0000000000000120 + in_stack_00000158;
    fVar50 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar61 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar34 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar25 = *(char *)(lVar31 + lVar44 * 0x188 + 0x28);
    if (cVar25 != '\x01') goto LAB_0379225c;
    fVar49 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar2,1.0);
    plVar42 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar49 = 1.0;
      lVar28 = lVar31 + lVar44 * 0x188;
      *(undefined4 *)(lVar28 + 0xbc) = 0;
      *(undefined4 *)(lVar28 + 0x94) = 0;
      *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar65 = *(float *)(lVar31 + lVar44 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar28 = lVar31 + lVar44 * 0x188;
        fVar62 = (in_stack_00000158 + fVar65) - *(float *)(unaff_x19 + 0x360);
        fVar65 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar28 = lVar31 + lVar44 * 0x188;
      fVar62 = fVar62 - fVar66;
      *(float *)(lVar28 + 0xbc) = fVar49 + (fVar65 - fVar66) / fVar62;
      *(float *)(lVar28 + 0x94) = fVar49 + (*(float *)(lVar28 + 0x78) - fVar66) / fVar62;
      *(float *)(lVar28 + 0xe4) = fVar49 + (*(float *)(lVar28 + 200) - fVar66) / fVar62;
      fVar49 = fVar49 + (*(float *)(lVar28 + 0xf0) - fVar66) / fVar62;
      break;
    case 2:
      lVar28 = lVar31 + lVar44 * 0x188;
      fVar65 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar62 = (in_stack_00000158 + *(float *)(lVar28 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar28 + 0xbc) = fVar49 + fVar62 / fVar65;
      *(float *)(lVar28 + 0x94) =
           fVar49 + ((in_stack_00000158 + *(float *)(lVar28 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar28 + 0xe4) =
           fVar49 + ((in_stack_00000158 + *(float *)(lVar28 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar49 = fVar49 + ((in_stack_00000158 + *(float *)(lVar28 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar28 = lVar31 + lVar44 * 0x188;
        *(undefined4 *)(lVar28 + 0xc0) = 0;
        *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xe8) = 0;
        *(undefined4 *)(lVar28 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar65 = fVar65 - fVar47;
        lVar28 = lVar31 + lVar44 * 0x188;
        fVar62 = fVar49 + (*(float *)(lVar28 + 0xa4) - fVar47) / fVar65;
        fVar65 = fVar49 + (*(float *)(lVar28 + 0x7c) - fVar47) / fVar65;
        *(float *)(lVar28 + 0xc0) = fVar62;
        *(float *)(lVar28 + 0x98) = fVar65;
        *(float *)(lVar28 + 0xe8) = fVar62;
        *(float *)(lVar28 + 0x110) = fVar65;
        break;
      case 2:
        lVar28 = lVar31 + lVar44 * 0x188;
        fVar62 = fVar49 + (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar28 + 0xc0) = fVar62;
        fVar65 = *(float *)(unaff_x19 + 0x364);
        fVar66 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar28 + 0xe8) = fVar62;
        fVar62 = fVar49 + (*(float *)(lVar28 + 0x7c) - fVar65) / (fVar66 - fVar65);
        *(float *)(lVar28 + 0x98) = fVar62;
        *(float *)(lVar28 + 0x110) = fVar62;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar41 = (uint)*(undefined8 *)(lVar31 + 0x18);
      }
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar28 = lVar31 + lVar44 * 0x188;
      fVar62 = *(float *)(lVar28 + 0x168);
      fVar65 = (1.0 - (*(float *)(lVar28 + 0xc0) + *(float *)(lVar28 + 0x98)) * fVar62) * 0.5;
      fVar66 = fVar49 + *(float *)(lVar28 + 0xc0) * fVar62 + fVar65;
      fVar49 = fVar49 + *(float *)(lVar28 + 0x98) * fVar62 + fVar65;
      *(float *)(lVar28 + 0xbc) = fVar66;
      *(float *)(lVar28 + 0x94) = fVar66;
      *(float *)(lVar28 + 0xe4) = fVar49;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar31 + lVar44 * 0x188 + 0x10c) = fVar49;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar28 = lVar31 + lVar44 * 0x188;
      *(undefined4 *)(lVar28 + 0xc0) = 0;
      *(undefined4 *)(lVar28 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar41) {
        fVar64 = fVar64 - fVar45;
        lVar28 = lVar31 + lVar44 * 0x188;
        fVar49 = (*(float *)(lVar28 + 0xa4) - fVar45) / fVar64;
        fVar64 = (*(float *)(lVar28 + 0x7c) - fVar45) / fVar64;
        *(float *)(lVar28 + 0xc0) = fVar49;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar28 = lVar31 + lVar44 * 0x188;
      fVar49 = (*(float *)(lVar28 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar28 + 0xc0) = fVar49;
      fVar64 = (*(float *)(lVar28 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar28 + 0x98) = fVar64;
      *(float *)(lVar28 + 0xe8) = fVar64;
      *(float *)(lVar28 + 0x110) = fVar49;
      break;
    case 3:
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar28 = lVar31 + lVar44 * 0x188;
      fVar64 = *(float *)(lVar28 + 0x168);
      fVar62 = (1.0 - (*(float *)(lVar28 + 0xbc) + *(float *)(lVar28 + 0xe4)) / fVar64) * 0.5;
      fVar49 = *(float *)(lVar28 + 0xbc) / fVar64 + fVar62;
      fVar62 = *(float *)(lVar28 + 0xe4) / fVar64 + fVar62;
      *(float *)(lVar28 + 0xc0) = fVar49;
      *(float *)(lVar28 + 0x98) = fVar62;
      *(float *)(lVar28 + 0x110) = fVar49;
      *(float *)(lVar28 + 0xe8) = fVar62;
    }
    if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar28 = lVar31 + lVar44 * 0x188;
    fVar49 = *(float *)(lVar28 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar28 + 100) == '\0') && ((*(byte *)(lVar31 + lVar44 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar49 = -fVar49;
    }
    lVar28 = lVar31 + lVar44 * 0x188;
    *(float *)(lVar28 + 0xb8) = fVar49;
    *(float *)(lVar28 + 0x90) = fVar49;
    *(float *)(lVar28 + 0xe0) = fVar49;
    *(float *)(lVar28 + 0x108) = fVar49;
    *(undefined4 *)(lVar28 + 0xbc) = 0x3f800000;
    *(float *)(lVar28 + 0xc0) = fVar49;
    *(undefined4 *)(lVar28 + 0x94) = 0x3f800000;
    *(float *)(lVar28 + 0x98) = fVar49;
    *(undefined4 *)(lVar28 + 0xe4) = 0x3f800000;
    *(float *)(lVar28 + 0xe8) = fVar49;
    *(undefined4 *)(lVar28 + 0x10c) = 0x3f800000;
    *(float *)(lVar28 + 0x110) = fVar49;
LAB_0379225c:
    if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar14 < uVar41) {
          bVar10 = *(uint *)(lVar31 + lVar44 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar34 = lVar31 + lVar44 * 0x188;
      *(ulong *)(lVar34 + 0xa0) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar34 + 0xa0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar34 + 0xa0));
      *(float *)(lVar34 + 0xa8) = fVar61 + *(float *)(lVar34 + 0xa8);
      *(ulong *)(lVar34 + 0x78) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar34 + 0x78) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar34 + 0x78));
      *(float *)(lVar34 + 0x80) = fVar61 + *(float *)(lVar34 + 0x80);
      *(ulong *)(lVar34 + 200) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar34 + 200) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar34 + 200));
      *(float *)(lVar34 + 0xd0) = fVar61 + *(float *)(lVar34 + 0xd0);
      *(ulong *)(lVar34 + 0xf0) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar34 + 0xf0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar34 + 0xf0));
      *(float *)(lVar34 + 0xf8) = fVar61 + *(float *)(lVar34 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar10 = false;
LAB_037922d8:
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
      if (bVar10) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar42);
        DAT_0411f172 = '\x01';
        uVar41 = *(uint *)(lVar31 + 0x18);
      }
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      lVar28 = lVar31 + lVar44 * 0x188;
      *(undefined8 *)(lVar28 + 0xa0) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0xa8) = uVar15;
      if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      lVar28 = lVar31 + lVar44 * 0x188;
      *(undefined8 *)(lVar28 + 0x78) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0x80) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 200) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0xd0) = uVar15;
      uVar15 = *(undefined4 *)(*(undefined8 **)(*plVar42 + 0xb8) + 1);
      *(undefined8 *)(lVar28 + 0xf0) = **(undefined8 **)(*plVar42 + 0xb8);
      *(undefined4 *)(lVar28 + 0xf8) = uVar15;
      *(undefined1 *)(lVar34 + 0x1a0) = 0;
    }
    iVar18 = FUN_0368e42c(0);
    if (iVar18 == 1) {
      cVar40 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar40 = '\0';
    }
    if (cVar25 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar14,cVar40 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar25 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar14,cVar40 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar34 = lVar34 + lVar44 * 0x188;
    uVar19 = *(undefined8 *)(lVar34 + 0x124);
    *(undefined8 *)(lVar34 + 0x124) =
         CONCAT44(fVar50 + (float)((ulong)uVar19 >> 0x20),fVar55 + (float)uVar19);
    *(float *)(lVar34 + 300) = fVar61 + *(float *)(lVar34 + 300);
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar34 = lVar34 + lVar44 * 0x188;
    *(ulong *)(lVar34 + 0x118) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar34 + 0x118) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar34 + 0x118));
    *(float *)(lVar34 + 0x120) = fVar61 + *(float *)(lVar34 + 0x120);
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar34 = lVar34 + lVar44 * 0x188;
    *(ulong *)(lVar34 + 0x130) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar34 + 0x130) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar34 + 0x130));
    *(float *)(lVar34 + 0x138) = fVar61 + *(float *)(lVar34 + 0x138);
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar34 = lVar34 + lVar44 * 0x188;
    *(float *)(lVar34 + 0x13c) = fVar55 + *(float *)(lVar34 + 0x13c);
    *(ulong *)(lVar34 + 0x140) =
         CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                  fVar50 + (float)*(undefined8 *)(lVar34 + 0x140));
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    uVar41 = *(uint *)(lVar34 + 0x18);
    if (uVar41 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar28 = lVar34 + lVar44 * 0x188;
    *(float *)(lVar28 + 0x148) = fVar55 + *(float *)(lVar28 + 0x148);
    *(float *)(lVar28 + 0x164) = fVar55 + *(float *)(lVar28 + 0x164);
    *(float *)(lVar28 + 0x154) = fVar50 + *(float *)(lVar28 + 0x154);
    uVar19 = *(undefined8 *)(lVar28 + 0x14c);
    *(undefined8 *)(lVar28 + 0x14c) =
         CONCAT44(fVar50 + (float)((ulong)uVar19 >> 0x20),fVar50 + (float)uVar19);
    if (uVar2 == uVar30) {
      uVar30 = *in_stack_000001d0 - 1;
      if (uVar14 == uVar30) goto LAB_037926b4;
    }
    else {
      lVar28 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
      lVar37 = (long)(int)uVar30;
      lVar39 = lVar28 + lVar37 * 0x60;
      fVar61 = fVar50 + *(float *)(lVar39 + 0x58);
      *(ulong *)(lVar39 + 0x50) =
           CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar39 + 0x50) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar39 + 0x50));
      *(float *)(lVar39 + 0x58) = fVar61;
      *(float *)(lVar39 + 0x5c) = fVar55 + *(float *)(lVar39 + 0x5c);
      if (uVar41 <= *(uint *)(lVar39 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar15 = *(undefined4 *)(lVar34 + (long)(int)*(uint *)(lVar39 + 0x38) * 0x188 + 0x124);
      lVar28 = lVar28 + lVar37 * 0x60;
      *(float *)(lVar28 + 0x74) = fVar61;
      *(undefined4 *)(lVar28 + 0x70) = uVar15;
      lVar34 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar34 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar34 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      uVar30 = *(uint *)(lVar34 + lVar37 * 0x60 + 0x44);
      if (*(uint *)(lVar28 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
      lVar34 = lVar34 + lVar37 * 0x60;
      *(undefined4 *)(lVar34 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)uVar30 * 0x188 + 0x130);
      *(undefined4 *)(lVar34 + 0x7c) = *(undefined4 *)(lVar34 + 0x50);
      uVar30 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar14 == uVar30) {
        lVar34 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar28 = lVar34 + lVar35 * 0x60;
        fVar61 = fVar50 + *(float *)(lVar28 + 0x58);
        *(ulong *)(lVar28 + 0x50) =
             CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar28 + 0x50) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar28 + 0x50));
        *(float *)(lVar28 + 0x58) = fVar61;
        *(float *)(lVar28 + 0x5c) = fVar55 + *(float *)(lVar28 + 0x5c);
        lVar37 = *in_stack_000001e8;
        if (lVar37 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar28 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar15 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar28 + 0x38) * 0x188 + 0x124);
        lVar34 = lVar34 + lVar35 * 0x60;
        *(float *)(lVar34 + 0x74) = fVar61;
        *(undefined4 *)(lVar34 + 0x70) = uVar15;
        lVar34 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        uVar30 = *(uint *)(lVar34 + lVar35 * 0x60 + 0x44);
        if (*(uint *)(lVar28 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar35 * 0x60;
        *(undefined4 *)(lVar34 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)uVar30 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar34 + 0x7c) = *(undefined4 *)(lVar34 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar23 = FUN_026b82c4(uVar43,0);
    if (((((uVar23 & 1) == 0) && (1 < uVar43 - 0x2010)) && (uVar43 != 0xad)) && (uVar43 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar29 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar13 = FUN_026b81f8(uVar43,0);
          if (((uVar43 == 0x200b) || (((bVar12 | bVar13 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar29 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar31 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001d0 && ((uVar43 == 0x2019 || (uVar43 == 0x27)))))) {
          if (*(uint *)(lVar31 + 0x18) <= uVar29 - 2) goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(lVar31 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b82c4(uVar4,0);
          if ((uVar23 & 1) != 0) {
            if (*(uint *)(lVar31 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar31 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar23 = FUN_026b82c4(uVar4,0);
            if ((uVar23 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar14 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b82c4(uVar43,0);
          fStack0000000000000170 = (float)uVar14;
          if ((uVar23 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar34 = *plVar21;
        if (lVar34 == 0) goto LAB_03793c9c;
        uVar30 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar18 = *(int *)(lVar34 + 0x18);
        if (iVar18 < (int)(uVar30 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar21,iVar18 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar34 = *plVar21;
          if (lVar34 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar34 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + (long)(int)uVar30 * 0xc;
        *(uint *)(lVar34 + 0x20) = uStack0000000000000168;
        *(float *)(lVar34 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar34 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar34 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar35 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar34 + 0x34) = *(int *)(lVar34 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar14;
      }
      if (uVar14 == *in_stack_000001d0 - 1) {
        lVar34 = *plVar21;
        if (lVar34 == 0) goto LAB_03793c9c;
        uVar30 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar18 = *(int *)(lVar34 + 0x18);
        if (iVar18 < (int)(uVar30 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar21,iVar18 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar34 = *plVar21;
          if (lVar34 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar34 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + (long)(int)uVar30 * 0xc;
        *(uint *)(lVar34 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar34 + 0x24) = uVar14;
        *(uint *)(lVar34 + 0x28) = uVar29 - uStack0000000000000168;
        lVar34 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar35 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar34 + 0x34) = *(int *)(lVar34 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(lVar34 + 0x18);
    if (uVar30 <= uVar14) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar34 + lVar44 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar8) {
LAB_037928d0:
        if (uVar29 - 2 < uVar30) {
          uVar15 = *(undefined4 *)(lVar34 + (long)in_stack_000001a8 + -0x354);
          uVar56 = *(undefined4 *)(lVar34 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar8 = false;
    }
    else {
      lVar35 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar35 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar18 = *(int *)(lVar34 + lVar44 * 0x188 + 0x70);
      *(int *)(lVar34 + lVar44 * 0x188 + 0x178) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = iVar18 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (uVar43 != 0x200b && (bVar12 & 1) == 0) {
        fVar61 = *(float *)(lVar34 + lVar44 * 0x188 + 0x16c);
        if (fVar59 <= fVar61) {
          fVar59 = fVar61;
        }
        if (iVar18 != iStack00000000000000c0) {
          fStack000000000000015c = fVar58;
        }
        if (lVar32 == 0) goto LAB_03793c9c;
        fVar61 = *(float *)(lVar34 + lVar44 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar49)) {
          fStack0000000000000174 = ABS(fVar49);
        }
        FUN_03779650(&stack0x000016a0,lVar32,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar62 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar61 = fVar61 + fVar59 * fVar62;
        iStack00000000000000c0 = iVar18;
        if (fVar61 <= fStack000000000000015c) {
          fStack000000000000015c = fVar61;
        }
      }
      if ((((uVar43 == 0xd) || ((uVar43 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (bVar8 || bVar10)) {
LAB_03792a80:
        if (!bVar8) goto LAB_03792a8c;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b97f8(uVar43,0);
          if ((uVar23 & 1) != 0) goto LAB_03792a80;
        }
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar44 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar34 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar34 + 0x124);
        bVar8 = fVar59 != 0.0;
        fVar61 = _bStack00000000000000d8;
        if (bVar8) {
          fVar61 = fVar59;
        }
        fVar59 = fVar61;
        uVar46 = *(undefined4 *)(lVar34 + 0x174);
        uStack00000000000000cc = 0;
        fVar61 = fVar49;
        if (bVar8) {
          fVar61 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar61;
      }
      if (*in_stack_000001d0 == 1) {
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar44 * 0x188;
        uVar15 = *(undefined4 *)(lVar34 + 0x130);
        uVar56 = *(undefined4 *)(lVar34 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar15,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar56);
      }
      else {
        if ((uVar14 == uVar5) || ((int)uVar6 <= (int)uVar14)) {
          lVar34 = *in_stack_000001e8;
          if (lVar34 != 0) {
            lVar35 = lVar44;
            uVar30 = uVar14;
            if (uVar43 == 0x200b || (bVar12 & 1) != 0) {
              lVar35 = lVar36;
              uVar30 = uVar6;
            }
            if (uVar30 < *(uint *)(lVar34 + 0x18)) {
              lVar34 = lVar34 + lVar35 * 0x188;
              uVar15 = *(undefined4 *)(lVar34 + 0x130);
              uVar56 = *(undefined4 *)(lVar34 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar10) {
          lVar34 = *in_stack_000001e8;
          if (lVar34 != 0) {
            uVar30 = *(uint *)(lVar34 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar14) {
LAB_03793294:
          bVar8 = true;
          goto LAB_03792b70;
        }
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
        uVar23 = FUN_03779528(uVar46,*(undefined4 *)(lVar34 + (long)in_stack_000001a8),0);
        if ((uVar23 & 1) != 0) goto LAB_03793294;
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar44 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar34 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar34 + 0x16c));
      }
      fVar59 = 0.0;
      bVar8 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(lVar34 + lVar44 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar32,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar61 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar30 >> 6 & 1) == 0) {
      if (bVar9) {
        lVar34 = *in_stack_000001e8;
        if (lVar34 != 0) {
          if (uVar29 - 2 < *(uint *)(lVar34 + 0x18)) {
            fVar50 = *(float *)(lVar34 + (long)in_stack_000001a8 + -0x334);
            uVar15 = *(undefined4 *)(lVar34 + (long)in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar9 = false;
    }
    else {
      lVar34 = *in_stack_000001e8;
      if ((lVar34 == 0) || (lVar35 = *(long *)(unaff_x19 + 0x15b8), lVar35 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar34 + 0x18) <= uVar14)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar34 + lVar44 * 0x188 + 0x180) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar34 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar43 == 0xd) || ((uVar43 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (!(bool)(~bVar9 & (bVar10 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar9) goto LAB_03792cf8;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b97f8(uVar43,0);
          if ((uVar23 & 1) != 0) goto LAB_03792cf0;
          lVar34 = *in_stack_000001e8;
          if (lVar34 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar34 = lVar34 + lVar44 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar34 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar34 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar34 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar34 + 0x150);
        fStack00000000000000e0 = fVar61 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar30 = *in_stack_000001d0;
      if (uVar30 == 1) {
LAB_03792ef4:
        lVar35 = *in_stack_000001e8;
        if (lVar35 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar35 = lVar35 + lVar44 * 0x188;
      }
      else {
        lVar34 = lVar44;
        if (uVar14 == uVar5) {
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto LAB_03793c9c;
          uVar30 = uVar14;
          if ((uVar43 != 0x200b & (bVar12 ^ 1)) == 0) {
            lVar34 = lVar36;
            uVar30 = uVar6;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar30 <= (int)uVar14) {
LAB_03792fdc:
            if ((int)uVar14 < (int)uVar30) {
              iVar18 = FUN_036d3364(lVar32,0);
              if (*(uint *)(lVar31 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
              lVar34 = *(long *)(lVar31 + (long)in_stack_000001a8 + -0x134);
              if (lVar34 == 0) goto LAB_03793c9c;
              iVar16 = FUN_036d3364(lVar34,0);
              if (iVar18 != iVar16) goto LAB_03792ef4;
            }
            if (!bVar10) {
              bVar9 = true;
              goto LAB_03793338;
            }
            lVar34 = *in_stack_000001e8;
            if (lVar34 != 0) {
              if (uVar29 - 2 < *(uint *)(lVar34 + 0x18)) {
                fVar50 = *(float *)(lVar34 + (long)in_stack_000001a8 + -0x334);
                uVar15 = *(undefined4 *)(lVar34 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar35 + 0x18) <= uVar29) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar35 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar62 = *(float *)(lVar35 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar23 = FUN_037a2200(fVar50 + fVar62,in_stack_000000a0._4_4_,0);
            if ((uVar23 & 1) != 0) {
              uVar30 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar35 = *in_stack_000001e8;
            if (lVar35 == 0) goto LAB_03793c9c;
          }
          uVar30 = uVar14;
          if ((int)uVar6 < (int)uVar14) {
            lVar34 = lVar36;
            uVar30 = uVar6;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        }
        lVar35 = lVar35 + lVar34 * 0x188;
      }
      fVar50 = *(float *)(lVar35 + 0x150);
      uVar15 = *(undefined4 *)(lVar35 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,uStack00000000000000dc,uVar15,
                   fStack00000000000000f0 * fVar61 + fVar50,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar9 = false;
    }
LAB_03793338:
    lVar34 = *in_stack_000001e8;
    if (lVar34 == 0) goto LAB_03793c9c;
    uVar30 = (uint)*(undefined8 *)(lVar34 + 0x18);
    if (uVar30 <= uVar14) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar34 + lVar44 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar11) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar11 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar34 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar11) {
        if (((uVar43 == 0xd) || ((uVar43 & 0xfffe) == 10)) ||
           (((int)uVar6 < (int)uVar14 || (bVar10)))) goto LAB_03793428;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar23 = FUN_026b97f8(uVar43,0);
          if ((uVar23 & 1) != 0) goto LAB_03793428;
        }
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar32 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar32 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar32 = *(long *)puVar7;
        }
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        uVar30 = (uint)*(undefined8 *)(lVar34 + 0x18);
        if (uVar30 <= uVar14) goto thunk_FUN_01ab6c44;
        pfVar38 = *(float **)(lVar32 + 0xb8);
        fStack0000000000000128 = *pfVar38;
        in_stack_00000140._4_4_ = pfVar38[1];
        fStack000000000000012c = pfVar38[2];
        fStack0000000000000130 = pfVar38[3];
        uStack0000000000000124 = 0;
      }
      if (uVar30 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar34 = lVar34 + lVar44 * 0x188;
      fVar62 = *(float *)(lVar34 + 0x130);
      fVar45 = *(float *)(lVar34 + 0x124);
      fVar50 = *(float *)(lVar34 + 0x148);
      fVar64 = *(float *)(lVar34 + 0x14c);
      fVar65 = *(float *)(lVar34 + 0x154);
      fVar61 = *(float *)(lVar34 + 0x164);
      uVar23 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar34 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar23 & 1) == 0) {
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar34);
        }
        fVar66 = (float)FUN_037a1dd8(uVar54,0);
        bVar11 = (bVar12 & 1) == 0;
        if (bVar11) {
          fVar50 = fVar45;
        }
        if (bVar11) {
          fVar61 = fVar62;
        }
        if (fVar50 - fVar66 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar50 - fVar66;
        }
        fVar50 = (float)FUN_037a1de0(uVar54,0);
        if (fStack000000000000012c <= fVar61 + fVar50) {
          fStack000000000000012c = fVar61 + fVar50;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar50 = (float)FUN_037a1df0(uVar54,0);
        if (fVar65 - fVar50 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar65 - fVar50;
        }
        fVar50 = (float)FUN_037a1de8(uVar54,0);
        if (fStack0000000000000130 <= fVar64 + fVar50) {
          fStack0000000000000130 = fVar64 + fVar50;
        }
      }
      else {
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar34);
        }
        fVar66 = (float)FUN_037a1de0(uVar54,0);
        if ((bVar12 & 1) == 0) {
          fVar50 = fVar45;
        }
        if (fVar65 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar65;
        }
        fVar50 = (fVar50 + (fStack000000000000012c - fVar66)) * 0.5;
        if (fStack0000000000000130 <= fVar64) {
          fStack0000000000000130 = fVar64;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar50,
                     fStack0000000000000130,uStack0000000000000124);
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar52,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar65 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar52,0);
        fVar65 = (float)FUN_037a1de8(uVar52,0);
        if ((bVar12 & 1) == 0) {
          fVar61 = fVar62;
        }
        fStack000000000000012c = fVar61 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar50;
        fStack0000000000000130 = fVar64 + fVar65;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar14 == uVar5)) || ((int)uVar6 <= (int)uVar14)) ||
         (bVar10)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    uVar14 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar10 = (int)uVar29 < (int)uVar14;
    uVar30 = uVar2;
    uVar29 = uVar29 + 1;
  } while (bVar10);
  iVar18 = uVar2 + 1;
  plVar21 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar14;
  uVar46 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar18;
  if ((int)uVar14 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar46;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar52 = 1;
    lVar31 = 0x70;
    do {
      lVar34 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar34 == 0) goto LAB_03793c9c;
      if (*(int *)(*plVar21 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar34 + 0x18) <= uVar52) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar34 + lVar31,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar34 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar34 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar34 + 0x18) <= uVar52) goto thunk_FUN_01ab6c44;
        FUN_03785bdc(lVar34 + lVar31,1,0);
      }
      uVar52 = uVar52 + 1;
      lVar31 = lVar31 + 0x50;
    } while ((long)uVar52 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


