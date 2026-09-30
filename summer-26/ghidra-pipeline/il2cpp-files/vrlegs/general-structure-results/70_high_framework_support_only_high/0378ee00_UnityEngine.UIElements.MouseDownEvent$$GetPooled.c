/*
FUNCTION_NAME: UnityEngine.UIElements.MouseDownEvent$$GetPooled
ENTRY_POINT: 0378ee00
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


void UnityEngine_UIElements_MouseDownEvent__GetPooled(float param_1,float param_2)

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
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  uint uVar27;
  long lVar28;
  float *pfVar29;
  long lVar30;
  ulong uVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  float *pfVar36;
  uint uVar37;
  long in_x12;
  long lVar38;
  long unaff_x19;
  char cVar39;
  long unaff_x20;
  float unaff_w21;
  uint uVar40;
  long *plVar41;
  ulong unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint uVar42;
  long lVar43;
  long lVar44;
  ulong unaff_x27;
  long *unaff_x28;
  float *unaff_x29;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float unaff_s8;
  int iVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float unaff_s13;
  float fVar66;
  float fVar67;
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
  byte in_stack_000000b8;
  int iStack00000000000000c0;
  float fStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  float fStack00000000000000d0;
  byte bStack00000000000000d8;
  float fStack00000000000000dc;
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
  float fStack0000000000000158;
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
  float fStack00000000000001bc;
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
  
code_r0x0378ee00:
  *(float *)(unaff_x19 + 0x370) = param_1;
  if (param_2 != 0.0) goto LAB_0378ee1c;
LAB_0378ee0c:
  fVar59 = *(float *)(unaff_x19 + 0x19c8);
  if (*(float *)(unaff_x19 + 0x19c8) <= unaff_s8) {
    fVar59 = unaff_s8;
  }
  *(float *)(unaff_x19 + 0x19c8) = fVar59;
LAB_0378ee1c:
  fVar59 = unaff_s13;
  lVar28 = *in_stack_000001e8;
  fStack00000000000001bc = unaff_w21;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar45 = *unaff_x29;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)fVar45 * unaff_x27;
  *(undefined1 *)(lVar28 + 0x1a0) = 0;
  uVar14 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  iVar61 = (int)unaff_x27;
  if ((in_stack_0000169c == 9) ||
     (((((unaff_w25 == 0 && (in_stack_0000169c != 3)) && (in_stack_0000169c != 0x200b)) &&
       (in_stack_0000169c != 0xad)) ||
      (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 || (*unaff_x24 == '\x02'))))))
  {
    *(undefined1 *)(lVar28 + 0x1a0) = 1;
    pfVar29 = _fStack0000000000000130;
    pfVar36 = _iStack0000000000000138;
    if (unaff_w23 != 0) {
      lVar28 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar28 = lVar28 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
      pfVar36 = (float *)(lVar28 + 100);
      pfVar29 = (float *)(lVar28 + 0x68);
    }
    fVar48 = *pfVar36;
    fVar54 = *pfVar29;
    fVar45 = *(float *)(unaff_x19 + 0x35c);
    fVar46 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar48) - fVar54;
    bVar9 = true;
    if ((fVar45 <= fStack0000000000000174) && (bVar9 = false, !NAN(fVar45))) {
      bVar9 = fVar45 == -1.0;
    }
    if (!bVar9) {
      fStack0000000000000174 = fVar45;
    }
    fVar51 = 0.0;
    fVar63 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar63 = (float)FUN_03776cb4(&stack0x000015f0,0);
      param_2 = *(float *)(unaff_x19 + 0x2e0);
      in_x12 = 0x60;
    }
    fVar47 = *(float *)(unaff_x19 + 0x1594);
    fVar49 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000169c != 0xad) {
      fStack000000000000015c = fVar59;
    }
    if ((0.0 < param_2) && (fVar51 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar51 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    fVar45 = *in_stack_000001d0;
    fVar51 = (*(float *)(unaff_x19 + 0x374) - (fVar49 - param_2)) + fVar51;
    if (fVar51 <= in_stack_00000108) goto switchD_0378f0dc_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(float *)(unaff_x19 + 0x34c) = fVar45;
    }
    uVar18 = DAT_00d37868;
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar65 = *(float *)(in_stack_000001e0 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar65) || (param_2 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar65 = *_fStack00000000000000d0;
        fVar51 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar65 <= fVar51) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_0378f0b8;
        fVar59 = (fVar65 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar59 <= DAT_00d38b84) {
          fVar59 = DAT_00d38b84;
        }
        fVar45 = (fVar65 - fVar59) * 20.0 + 0.5;
        fVar59 = DAT_00d38e60;
        if (fVar45 != INFINITY) {
          fVar59 = (float)(int)fVar45 / 20.0;
        }
        if (fVar59 <= fVar51) {
          fVar59 = fVar51;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar65;
LAB_037910ac:
        *(float *)(unaff_x19 + 0xec) = fVar59;
      }
      else {
        fVar59 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000018._4_4_ - fVar51) / (float)*(int *)(unaff_x19 + 0x340)) /
                 fStack0000000000000088;
        if (fVar59 <= fVar65) {
          fVar59 = fVar65;
        }
LAB_03793b50:
        *(float *)(unaff_x19 + 0x15b0) = fVar59;
      }
      goto LAB_0378c81c;
    }
LAB_0378f0b8:
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
      iVar15 = FUN_020aa428(in_stack_00000078,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                           );
      in_stack_00001688 = DAT_00d37868;
      if (iVar15 == 0) {
        in_stack_000001d0[0] = 0.0;
        in_stack_000001d0[1] = 0.0;
        in_stack_0000160c = 0xffffffff;
      }
      else {
        FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
        memcpy(&stack0x00001138,&stack0x000016a0,0x398);
        iVar17 = FUN_03797154();
        iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar15;
        in_stack_00001688 = CONCAT44(0x2026,iVar15);
        in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
        in_stack_0000160c = iVar17 - 1;
      }
      break;
    default:
switchD_0378f0dc_caseD_2:
      if ((unaff_x22 & 1) == 0) {
LAB_0378f1e0:
        if (unaff_w25 == 0) {
          if (in_stack_0000169c != 0xad) {
            if (*unaff_x24 == '\x02') {
              FUN_0379c8ac();
LAB_0378f838:
              in_x12 = 0x60;
            }
            else if (*unaff_x24 == '\x01') {
              FUN_0379bd40(in_stack_000001a0);
              goto LAB_0378f838;
            }
            fVar45 = *in_stack_000001d0;
            if ((uStack00000000000000ac & 1) != 0) {
              *(float *)(unaff_x19 + 0x330) = fVar45;
            }
            *(float *)(unaff_x19 + 0x334) = fVar45;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar28 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar28 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar28 + 0x18)) {
                lVar28 = lVar28 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
                uStack00000000000000ac = 0;
                *(float *)(lVar28 + 100) = fVar48;
                *(float *)(lVar28 + 0x68) = fVar54;
                goto LAB_0378f884;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar28 + (long)(int)fVar45 * (long)iVar61 + 0x1a0) = 0;
        }
        else {
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar28 + (long)(int)fVar45 * (long)iVar61 + 0x1a0) = 0;
          *(float *)(unaff_x19 + 0x334) = fVar45;
          lVar28 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar28 == 0) goto LAB_03793c9c;
          uVar37 = *(uint *)(lVar28 + 0x18);
          if (uVar37 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar43 = lVar28 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          iVar15 = *(int *)(lVar43 + 0x2c) + 1;
          *(int *)(lVar43 + 0x2c) = iVar15;
          *(int *)(unaff_x19 + 0x348) = iVar15;
          if (uVar37 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar28 = lVar28 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          *(float *)(lVar28 + 100) = fVar48;
          *(float *)(lVar28 + 0x68) = fVar54;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
        }
        goto LAB_0378f884;
      }
      fVar51 = ABS(fVar46) + fVar63 * (1.0 - fVar47) * fStack000000000000015c;
      fVar46 = 1.0;
      if (uVar14 != 0) {
        fVar46 = DAT_00d38acc;
      }
      if (fVar51 <= fVar46 * fStack0000000000000174) goto LAB_0378f1e0;
      if ((iStack000000000000008c == 0) || (fVar45 == *(float *)(unaff_x19 + 0x328))) {
        if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
          iVar15 = *(int *)(in_stack_000001e0 + 0x74);
          if (iVar15 == 1) {
            iVar15 = FUN_020aa428(in_stack_00000078,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            in_stack_00001688 = DAT_00d37868;
            if (iVar15 == 0) {
              in_stack_000001d0[0] = 0.0;
              in_stack_000001d0[1] = 0.0;
              in_stack_0000160c = 0xffffffff;
            }
            else {
              FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
              iVar17 = FUN_03797154();
              iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar15;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000160c = iVar17 - 1;
              in_stack_00001688 = CONCAT44(0x2026,iVar15);
            }
            break;
          }
          if (iVar15 == 6) {
            in_stack_0000160c = FUN_03797154();
            fVar45 = *(float *)(unaff_x19 + 0x324);
          }
          else {
            if (iVar15 != 3) goto LAB_0378f1e0;
            in_stack_0000160c = FUN_03797154();
          }
          goto LAB_037909d0;
        }
        fVar63 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar63 <= fVar47) {
          fVar63 = *(float *)(in_stack_000001e0 + 0xac);
          fVar47 = *_fStack00000000000000d0;
          if (fVar47 <= fVar63) goto LAB_0378f2f0;
LAB_03793bbc:
          fVar59 = (fVar47 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar59 <= DAT_00d38b84) {
            fVar59 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar47;
          fVar45 = (fVar47 - fVar59) * 20.0 + 0.5;
          fVar59 = DAT_00d38e60;
          if (fVar45 != INFINITY) {
            fVar59 = (float)(int)fVar45 / 20.0;
          }
          if (fVar59 <= fVar63) {
            fVar59 = fVar63;
          }
          goto LAB_037910ac;
        }
        fVar59 = fVar51 / (1.0 - fVar47);
        if (fVar47 <= 0.0) {
          fVar59 = fVar51;
        }
        fVar47 = fVar47 + (fVar51 - fVar46 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar59;
FUN_03793c4c:
        if (fVar63 <= fVar47) {
          fVar47 = fVar63;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar47;
        goto LAB_0378c81c;
      }
      in_stack_0000160c = FUN_03797154();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        fVar49 = *in_stack_000001d0;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar49) goto thunk_FUN_01ab6c44;
        fVar47 = *(float *)(unaff_x19 + 0x2e0);
        fVar63 = 0.0;
        if ((0.0 < fVar47) && (fVar63 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar63 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar63 = fStack0000000000000158 * *(float *)(in_stack_000001e0 + 200) +
                 *(float *)(lVar28 + (long)(int)fVar49 * unaff_x27 + 0x158) +
                 (fVar63 - *(float *)(unaff_x19 + 0x33c)) +
                 fStack0000000000000088 * (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0))
        ;
      }
      else {
        fVar63 = *(float *)(in_stack_000001e0 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        fVar47 = *(float *)(unaff_x19 + 0x2e0);
        fVar49 = *(float *)(unaff_x19 + 0x324);
        fVar63 = *(float *)(unaff_x19 + 0x2e4) + fStack0000000000000158 * fVar63;
      }
      if (((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar49) ||
         (fVar65 = (float)((int)fVar49 - 1), (uint)*(float *)(lVar28 + 0x18) <= (uint)fVar65))
      goto thunk_FUN_01ab6c44;
      fVar57 = (fVar63 + *(float *)(unaff_x19 + 0x374) + fVar47) -
               *(float *)(lVar28 + (long)(int)fVar49 * (long)iVar61 + 0x15c);
      if (((in_stack_000000b8 & 1) == 0 &&
           *(short *)(lVar28 + (long)(int)fVar65 * (long)iVar61 + 0x20) == 0xad) &&
         ((fVar57 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
        in_stack_000000b8 = 0;
        *in_stack_000001d0 = fVar65;
        in_stack_0000160c = in_stack_0000160c - 1;
        in_stack_00001688 = CONCAT44(0x2d,fVar65);
        break;
      }
      if (*(short *)(lVar28 + (long)(int)fVar49 * unaff_x27 + 0x20) == 0xad) {
        in_stack_000000b8 = 1;
        break;
      }
      if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
        fVar47 = *(float *)(unaff_x19 + 0x1594);
        fVar63 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar63 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar47 = *_fStack00000000000000d0;
          fVar63 = *(float *)(in_stack_000001e0 + 0xac);
          if ((fVar63 < fVar47) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793bbc;
          goto LAB_03790b7c;
        }
LAB_03793c60:
        fVar59 = fVar51;
        if (0.0 < fVar47) {
          fVar59 = fVar51 / (1.0 - fVar47);
        }
        fVar47 = fVar47 + (fVar51 - fVar46 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar59;
        goto FUN_03793c4c;
      }
LAB_03790b7c:
      iVar15 = *in_stack_00000030;
      if ((iVar15 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar15 != -1) != 0)) {
        in_stack_0000160c = FUN_03797154();
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        lVar28 = *(long *)(in_stack_000001c0 + 0x30);
        if (lVar28 == 0) goto LAB_03793c9c;
        fVar49 = *in_stack_000001d0;
        fVar63 = (float)((int)fVar49 - 1);
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar63) goto thunk_FUN_01ab6c44;
        iStack0000000000000028 = iVar15;
        if (*(short *)(lVar28 + (long)(int)fVar63 * (long)iVar61 + 0x20) == 0xad) {
          in_stack_000000b8 = 0;
          *in_stack_000001d0 = fVar63;
          in_stack_0000160c = in_stack_0000160c - 1;
          in_stack_00001688 = CONCAT44(0x2d,fVar63);
          break;
        }
      }
      in_x12 = 0x60;
      if (fVar57 <= in_stack_00000108) {
        FUN_037a1530(fStack0000000000000088);
        bStack00000000000000d8 = 1;
        in_stack_000000b8 = 0;
        uStack00000000000000ac = 1;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(float *)(unaff_x19 + 0x34c) = fVar49;
      }
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar63 = *(float *)(in_stack_000001e0 + 0xd0);
        if ((fVar63 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar59 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000018._4_4_ - fVar57) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                   fStack0000000000000088;
          if (fVar59 <= fVar63) {
            fVar59 = fVar63;
          }
          goto LAB_03793b50;
        }
        fVar47 = *(float *)(unaff_x19 + 0x1594);
        fVar63 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar47 < fVar63) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793c60;
        fVar47 = *_fStack00000000000000d0;
        fVar63 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar63 < fVar47) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793bbc;
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 0:
      case 2:
      case 4:
        FUN_037a1530(fStack0000000000000088);
        break;
      case 1:
        iVar15 = FUN_020aa428(in_stack_00000078,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                             );
        in_stack_00001688 = DAT_00d37868;
        if (iVar15 == 0) {
          in_stack_000000b8 = 0;
          in_stack_000001d0[0] = 0.0;
          in_stack_000001d0[1] = 0.0;
          in_stack_0000160c = 0xffffffff;
        }
        else {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
          iVar17 = FUN_03797154();
          in_stack_000000b8 = 0;
          iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar15;
          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
          in_stack_0000160c = iVar17 - 1;
          in_stack_00001688 = CONCAT44(0x2026,iVar15);
        }
        goto LAB_0378d260;
      case 3:
        in_stack_0000160c = FUN_03797154();
        in_stack_000000b8 = 0;
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
        in_stack_000000b8 = 0;
        fVar45 = fVar49;
LAB_037909d0:
        in_stack_00001688 = CONCAT44(3,fVar45);
        goto LAB_0378d260;
      default:
        in_stack_000000b8 = 0;
        fVar45 = fVar49;
        goto LAB_0378f1e0;
      }
      in_stack_000000b8 = 0;
LAB_0379053c:
      bStack00000000000000d8 = 1;
      uStack00000000000000ac = 1;
      break;
    case 3:
      in_stack_0000160c = FUN_03797154();
      in_stack_00001688 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),fVar45);
      break;
    case 5:
      if (fVar45 == 0.0 || (int)in_stack_0000160c < 0) {
        *in_stack_000001d0 = 0.0;
        in_stack_0000160c = 0xffffffff;
        in_stack_00001688 = uVar18;
      }
      else {
        fVar54 = *(float *)(unaff_x19 + 0x338);
        in_stack_0000160c = FUN_03797154();
        if (in_stack_00000108 < fVar54 - fVar49) goto LAB_0378f7e8;
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
      }
      break;
    case 6:
      in_stack_0000160c = FUN_03797154();
      in_stack_00001688 = CONCAT44(3,fVar45);
    }
LAB_0378d260:
    in_stack_0000160c = in_stack_0000160c + 1;
    lVar28 = *(long *)(unaff_x19 + 0x20);
    if (lVar28 == 0) goto LAB_03793c9c;
    if ((int)in_stack_0000160c < (int)*(uint *)(lVar28 + 0x18)) {
      if (*(uint *)(lVar28 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
      uVar14 = *(uint *)(lVar28 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
      if (uVar14 == 0) goto LAB_03790fec;
      if (5 < in_stack_000001d8._4_4_) {
        uVar18 = FUN_0278d4e8(&stack0x0000169c,0);
        uVar19 = FUN_0276793c(&stack0x0000160c,0);
        uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar18,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar19,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x28);
        }
        FUN_0367ae18(uVar18,0);
        in_stack_00001688 = CONCAT44(3,*in_stack_000001d0);
      }
      in_stack_0000169c = uVar14;
      if (uVar14 == 0x1a) goto LAB_0378d260;
      if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
        unaff_x24[0] = '\x01';
        unaff_x24[1] = '\x01';
        uVar20 = FUN_037974c0();
        if (((uVar20 & 1) != 0) && (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01'))
        goto LAB_0378d260;
      }
      else {
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *unaff_x24 = *(char *)(lVar28 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar28 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar28 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
      }
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      fVar45 = *(float *)(unaff_x19 + 0x324);
      if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
      lVar43 = (long)(int)fVar45;
      uVar50 = *(undefined4 *)(unaff_x19 + 0x78);
      cVar26 = *(char *)(lVar28 + lVar43 * unaff_x27 + 100);
      unaff_x24[1] = '\0';
      if ((float)in_stack_00001688 == fVar45) {
        in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
        unaff_w23 = 1;
        *unaff_x24 = '\x01';
        if (in_stack_0000169c == 0x2026) {
          *(undefined8 *)(lVar28 + lVar43 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
          *(undefined1 *)(lVar28 + 0x28) = 1;
          *(undefined8 *)(lVar28 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined8 *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
               *(undefined8 *)(unaff_x19 + 0x1a10);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          fVar45 = *in_stack_000001d0;
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
          unaff_w23 = 1;
          *(undefined4 *)(lVar28 + (long)(int)fVar45 * unaff_x27 + 0x60) =
               *(undefined4 *)(unaff_x19 + 0x1a18);
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 1;
          in_stack_00001688 = CONCAT44(3,(int)fVar45 + 1);
        }
        else if (in_stack_0000169c == 3) {
          if ((*in_stack_000001c8 == 0) ||
             (lVar21 = FUN_03779b3c(*in_stack_000001c8,0), lVar21 == 0)) goto LAB_03793c9c;
          FUN_0219b634(lVar21,&stack0x00000978,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                      );
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
          *(undefined8 *)(lVar28 + lVar43 * unaff_x27 + 0x30) = in_stack_000016a0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          unaff_w23 = 1;
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 1;
          fVar45 = *in_stack_000001d0;
        }
      }
      else {
        unaff_w23 = 0;
      }
      if (((int)fVar45 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + (long)(int)fVar45 * (long)iVar61;
        *(undefined1 *)(lVar28 + 0x1a0) = 0;
        *(undefined2 *)(lVar28 + 0x20) = 0x200b;
        *(undefined4 *)(lVar28 + 0x6c) = 0;
        *in_stack_000001d0 = (float)((int)fVar45 + 1);
        goto LAB_0378d260;
      }
      cVar39 = *unaff_x24;
      if (cVar39 == '\x01') {
        uVar14 = *(uint *)(unaff_x19 + 0x124);
        if ((uVar14 >> 4 & 1) == 0) {
          if ((uVar14 >> 3 & 1) == 0) {
            fStack000000000000017c = 1.0;
            if ((uVar14 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar20 = FUN_026b812c(in_stack_0000169c,0);
              if ((uVar20 & 1) != 0) {
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
            uVar20 = FUN_026b8070(in_stack_0000169c,0);
            fStack000000000000017c = 1.0;
            if ((uVar20 & 1) != 0) {
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
          uVar20 = FUN_026b812c(in_stack_0000169c,0);
          fStack000000000000017c = 1.0;
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar14 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
            fStack000000000000017c = 1.0;
            in_stack_0000169c = uVar14 & 0xffff;
          }
        }
        cVar39 = *unaff_x24;
      }
      else {
        fStack000000000000017c = 1.0;
      }
      if (cVar39 != '\x01') {
        if (cVar39 != '\x02') {
          lVar28 = *in_stack_000001e8;
          fVar45 = 0.0;
          unaff_s13 = fVar59;
          if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
            unaff_s13 = fVar45;
          }
          if (lVar28 == 0) goto LAB_03793c9c;
          fVar54 = *in_stack_000001d0;
          fVar48 = 0.0;
          fStack0000000000000170 = 0.0;
          goto LAB_0378dba8;
        }
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
        plVar41 = *(long **)(lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
        if (plVar41 == (long *)0x0) goto LAB_03793c9c;
        bVar12 = *(byte *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__ +
                          0x130);
        if ((*(byte *)(*plVar41 + 0x130) < bVar12) ||
           (*(long *)(*(long *)(*plVar41 + 200) + (ulong)bVar12 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar41);
        }
        plVar22 = (long *)FUN_03783144(plVar41,0);
        if (plVar22 == (long *)0x0) {
          plVar22 = (long *)0x0;
          *in_stack_00000160 = 0;
        }
        else {
          lVar28 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
          bVar12 = *(byte *)(lVar28 + 0x130);
          if (*(byte *)(*plVar22 + 0x130) < bVar12) {
            plVar32 = (long *)0x0;
          }
          else {
            plVar32 = plVar22;
            if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar12 * 8 + -8) != lVar28) {
              plVar32 = (long *)0x0;
            }
          }
          *in_stack_00000160 = (long)plVar32;
          if (*(byte *)(*plVar22 + 0x130) < bVar12) {
            plVar22 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar12 * 8 + -8) != lVar28) {
            plVar22 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000160,plVar22)
        ;
        iVar15 = FUN_0377acf0(plVar41,0);
        *(int *)(unaff_x19 + 0x157c) = iVar15;
        if (in_stack_0000169c == 0x3c) {
          in_stack_0000169c = iVar15 + 0xe000;
        }
        else {
          uVar16 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          *(undefined4 *)(unaff_x19 + 0x1580) = uVar16;
        }
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        fVar59 = *(float *)(unaff_x19 + 0xf4);
        FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        iVar15 = FUN_03776950(&stack0x00001610,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar45 = (float)FUN_03776960(&stack0x00001610,0);
        fVar54 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar54 = 1.0;
        }
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar54 = (fVar59 / (float)iVar15) * fVar45 * fVar54;
        iVar15 = FUN_03776950(*in_stack_00000160 + 0x48,0);
        fVar59 = *(float *)(unaff_x19 + 0xf4);
        if (iVar15 < 1) {
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar46 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
          fStack0000000000000170 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fStack0000000000000170 = 1.0;
          }
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar51 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
          if (plVar41[4] == 0) goto LAB_03793c9c;
          fStack00000000000001bc = fVar59;
          FUN_03776e6c(&stack0x000016a0,plVar41[4],0);
          fVar59 = (float)FUN_03776c9c(&stack0x000015c0,0);
          if (plVar41[4] == 0) goto LAB_03793c9c;
          fVar63 = *(float *)((long)plVar41 + 0x2c);
          fVar47 = (float)FUN_03776ea8(plVar41[4],0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar49 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar65 = *(float *)(unaff_x19 + 0xf0);
          fVar45 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          fVar45 = fVar54 * fVar49 * fVar65 * fVar45;
          fStack0000000000000170 =
               (fStack00000000000001bc / (float)iVar15) * fVar46 * fStack0000000000000170;
          fVar59 = fStack0000000000000170 * (fVar51 / fVar59) * fVar63 * fVar47;
          fStack0000000000000170 = fStack0000000000000170 / fVar59;
          fVar48 = fStack0000000000000170 * fVar48;
          fVar54 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fStack0000000000000170 = fStack0000000000000170 * fVar54;
        }
        else {
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          iVar15 = FUN_03776950(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar46 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
          if (plVar41[4] == 0) goto LAB_03793c9c;
          fVar63 = *(float *)((long)plVar41 + 0x2c);
          fVar51 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar51 = 1.0;
          }
          fVar47 = (float)FUN_03776ea8(plVar41[4],0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar49 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar65 = *(float *)(unaff_x19 + 0xf0);
          fVar45 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
          if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
          fVar45 = fVar54 * fVar49 * fVar65 * fVar45;
          fVar59 = (fVar59 / (float)iVar15) * fVar46 * fVar51 * fVar63 * fVar47;
          fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
        }
        *in_stack_000001a8 = (long)plVar41;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8,plVar41)
        ;
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(undefined1 *)(lVar28 + 0x28) = 2;
        *(float *)(lVar28 + 0x16c) = fVar59;
        *(long *)(lVar28 + 0x48) = *in_stack_00000160;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
        *(long *)(lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *in_stack_000001c8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        fVar54 = *in_stack_000001d0;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar54) goto thunk_FUN_01ab6c44;
        *(undefined4 *)(lVar28 + (long)(int)fVar54 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar50;
        in_stack_000001a0 = 0.0;
        goto LAB_0378db90;
      }
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
      *in_stack_000001a8 = *(long *)(lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
      if (*in_stack_000001a8 != 0) goto code_r0x0378d4bc;
      goto LAB_0378d260;
    }
LAB_03790fec:
    if (((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
        (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
       ((fVar59 = *_fStack00000000000000d0, fVar59 < *(float *)(in_stack_000001e0 + 0xb0) &&
        (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))))) {
      fVar45 = *(float *)(in_stack_000001e0 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar45 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar54 = (*(float *)(unaff_x19 + 0x1598) - fVar59) * 0.5;
      if (fVar54 <= DAT_00d38b84) {
        fVar54 = DAT_00d38b84;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar59;
      fVar54 = (fVar59 + fVar54) * 20.0 + 0.5;
      fVar59 = DAT_00d38e60;
      if (fVar54 != INFINITY) {
        fVar59 = (float)(int)fVar54 / 20.0;
      }
      if (fVar45 <= fVar59) {
        fVar59 = fVar45;
      }
      goto LAB_037910ac;
    }
    unaff_x24[0x30] = '\x01';
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar18 = FUN_0276793c(in_stack_00000070,0);
      uVar19 = FUN_0277fa90(_fStack00000000000000d0,0);
      uVar18 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar18,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar19,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x28);
      }
      FUN_0367a6ec(uVar18,0);
    }
    plVar22 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    plVar41 = (long *)PTR_DAT_03cbded8;
    if ((*in_stack_000001d0 == 0.0) ||
       ((*in_stack_000001d0 == 1.4013e-45 && (in_stack_0000169c == 3)))) {
      FUN_0379e288(1,in_stack_000001c0,0);
      goto LAB_0378c81c;
    }
    lVar28 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar28 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    FUN_03785b74(lVar28 + (long)(int)uVar14 * 0x50 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar61 = *(int *)(in_stack_000001e0 + 0x70);
    fStack0000000000000158 = **(float **)(*plVar41 + 0xb8);
    _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar41 + 0xb8) + 1);
    lVar28 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = _in_stack_00000148;
    fStack0000000000000120 = fStack0000000000000158;
    if (iVar61 < 0x421) {
      if (iVar61 < 0x205) {
        if (iVar61 < 0x109) {
          if ((iVar61 - 0x101U < 8) && ((1 << (ulong)(iVar61 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
            if (lVar28 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar28 + 0x18) < 2) goto thunk_FUN_01ab6c44;
            uVar18 = *(undefined8 *)(lVar28 + 0x30);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar43 = *in_stack_00000050;
              if (lVar43 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar43 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
              fVar59 = *(float *)(lVar43 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
            }
            else {
              fVar59 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar28 + 0x2c);
            fStack0000000000000038 = (0.0 - fVar59) - fStack000000000000003c;
            goto LAB_037917ec;
          }
        }
        else if (iVar61 < 0x121) {
          if ((iVar61 == 0x110) || (iVar61 == 0x120)) goto LAB_0379144c;
        }
        else if ((iVar61 - 0x201U < 4) && (iVar61 - 0x201U != 2)) goto LAB_037916dc;
      }
      else {
        if (iVar61 < 0x403) {
          if (iVar61 < 0x211) {
            if ((iVar61 == 0x208) || (iVar61 == 0x210)) goto LAB_037916dc;
            goto LAB_037917fc;
          }
          if (iVar61 != 0x220) {
            if (iVar61 - 0x401U < 2) goto LAB_03791588;
            goto LAB_037917fc;
          }
LAB_037916dc:
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          fStack0000000000000120 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar28 + 0x24) +
                            (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar28 = *in_stack_00000050;
            if (lVar28 == 0) goto LAB_03793c9c;
            if (uStack000000000000005c < *(uint *)(lVar28 + 0x18)) {
              lVar28 = lVar28 + (long)(int)uStack000000000000005c * 0x14;
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
              fStack0000000000000038 =
                   ((fStack000000000000003c + *(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x30))
                   - fStack0000000000000038) * -0.5 + 0.0;
              goto LAB_037917ec;
            }
            goto thunk_FUN_01ab6c44;
          }
          fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
          fStack0000000000000038 =
               ((fStack000000000000003c + *(float *)(unaff_x19 + 0x374) + in_stack_00001698) -
               fStack0000000000000038) * -0.5 + 0.0;
        }
        else {
          if (iVar61 < 0x409) {
            if (iVar61 != 0x404) {
              bVar9 = iVar61 == 0x408;
              goto LAB_03791574;
            }
          }
          else if (iVar61 != 0x410) {
            bVar9 = iVar61 == 0x420;
LAB_03791574:
            if (!bVar9) goto LAB_037917fc;
          }
LAB_03791588:
          if (lVar28 == 0) goto LAB_03793c9c;
          if (*(int *)(lVar28 + 0x18) == 0) goto thunk_FUN_01ab6c44;
          uVar18 = *(undefined8 *)(lVar28 + 0x24);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar43 = *in_stack_00000050;
            if (lVar43 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar43 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
            in_stack_00001698 = *(float *)(lVar43 + (long)(int)uStack000000000000005c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar28 + 0x20);
          fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
        }
LAB_037917ec:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fStack0000000000000038);
      }
    }
    else if (iVar61 < 0x1005) {
      if (iVar61 < 0x809) {
        if ((iVar61 - 0x801U < 8) && ((1 << (ulong)(iVar61 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
            uStack0000000000000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar28 + 0x24) +
                          (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5 + 0.0);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
            goto LAB_037917fc;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
      else if (iVar61 < 0x821) {
        if ((iVar61 == 0x810) || (iVar61 == 0x820)) goto LAB_037913b0;
      }
      else if ((iVar61 - 0x1001U < 4) && (iVar61 - 0x1001U != 2)) goto LAB_03791644;
    }
    else if (iVar61 < 0x2003) {
      if (iVar61 < 0x1011) {
        if ((iVar61 == 0x1008) || (iVar61 == 0x1010)) goto LAB_03791644;
      }
      else {
        if (iVar61 == 0x1020) {
LAB_03791644:
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar28 + 0x18) != 1) && (*(int *)(lVar28 + 0x18) != 0)) {
            uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar28 + 0x24) +
                              (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
            fStack0000000000000038 =
                 0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                        *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
            goto LAB_037917ec;
          }
          goto thunk_FUN_01ab6c44;
        }
        if (iVar61 - 0x2001U < 2) goto LAB_037914ec;
      }
    }
    else {
      if (iVar61 < 0x2009) {
        if (iVar61 != 0x2004) {
          iVar15 = 0x2008;
          goto LAB_037914d4;
        }
      }
      else if (iVar61 != 0x2010) {
        iVar15 = 0x2020;
LAB_037914d4:
        if (iVar61 != iVar15) goto LAB_037917fc;
      }
LAB_037914ec:
      if (lVar28 == 0) goto LAB_03793c9c;
      if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0)) goto thunk_FUN_01ab6c44;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                   fStack0000000000000038) * 0.5));
      fStack0000000000000120 =
           fStack0000000000000058 + 0.0 +
           (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
    }
LAB_037917fc:
    uVar50 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        );
    }
    FUN_037a1df8(0);
    FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
    fVar45 = DAT_00d38d70;
    fVar59 = *in_stack_000001d0;
    if ((int)fVar59 < 1) {
      iVar61 = 0;
      iStack0000000000000138 = 0;
      goto LAB_03793a5c;
    }
    lVar28 = *in_stack_000001e8;
    if (lVar28 == 0) goto LAB_03793c9c;
    fStack0000000000000174 = 0.0;
    _bStack00000000000000d8 = 0.0;
    fStack00000000000000a8 = 0.0;
    plVar22 = (long *)(in_stack_000001c0 + 0x38);
    in_stack_000000e8._4_4_ = fStack0000000000000128;
    fStack00000000000000f0 = 0.0;
    in_stack_000000a0._4_4_ = 0.0;
    uVar31 = (ulong)&stack0x00001670 | 4;
    bVar9 = false;
    fVar46 = 0.0;
    fVar48 = 0.0;
    uVar20 = (ulong)&stack0x000009f0 | 4;
    fVar54 = 1.4013e-45;
    bVar8 = false;
    bVar10 = false;
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
    fStack00000000000000dc = (float)uStack0000000000000124;
    fStack00000000000000e0 = in_stack_00000140._4_4_;
    fStack000000000000015c = DAT_00d38d70;
    uVar14 = 0;
    goto LAB_0379194c;
  }
  if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
    fVar54 = 0.0;
    if ((0.0 < param_2) && (fVar54 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar54 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (in_stack_00000108 <
        (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - param_2)) + fVar54) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(float *)(unaff_x19 + 0x34c) = fVar45;
      }
      in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
      in_stack_00001688 = CONCAT44(3,fVar45);
      goto LAB_0378d260;
    }
  }
  if ((((in_stack_0000169c - 0x2007 < 0x23) &&
       ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
      (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
    if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
    if (in_stack_0000169c != 0x2060) {
      lVar28 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar28 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
          goto LAB_0378f760;
        }
        goto thunk_FUN_01ab6c44;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar20 = FUN_026b97f8(in_stack_0000169c,0);
    in_x12 = 0x60;
    if ((uVar20 & 1) != 0) goto LAB_0378f700;
  }
LAB_0378f760:
  if (in_stack_0000169c == 0xa0) {
    lVar28 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar28 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar28 = lVar28 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
    *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
  }
LAB_0378f884:
  bVar9 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar9 && unaff_w23 == 1) {
    bVar9 = in_stack_0000169c == 0x2d;
  }
  if (bVar9) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar45 = *(float *)(unaff_x19 + 0xf4);
    iVar15 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar48 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar28 = *(long *)(unaff_x19 + 0x1a00);
    fVar54 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar54 = 1.0;
    }
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_03793c9c;
    fVar51 = *(float *)(unaff_x19 + 0xf0);
    fVar47 = *(float *)(lVar28 + 0x2c);
    fVar46 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
    fVar63 = *_iStack0000000000000138;
    fVar46 = fVar51 * (fVar45 / (float)iVar15) * fVar48 * fVar54 * fVar47 * fVar46;
    fVar45 = *_fStack0000000000000130;
    if ((in_stack_0000169c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      uVar37 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar28 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar54 = *(float *)(lVar28 + (long)(int)uVar37 * (long)iVar61 + 0x68);
      iVar15 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar51 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar28 = *(long *)(unaff_x19 + 0x1a00);
      fVar48 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar48 = 1.0;
      }
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_03793c9c;
      fVar47 = *(float *)(unaff_x19 + 0xf0);
      fVar49 = *(float *)(lVar28 + 0x2c);
      fVar46 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
      lVar28 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar63 = *(float *)(lVar28 + 100);
      fVar45 = *(float *)(lVar28 + 0x68);
      fVar46 = fVar47 * (fVar54 / (float)iVar15) * fVar51 * fVar48 * fVar49 * fVar46;
    }
    fVar48 = *(float *)(unaff_x19 + 0x2f4);
    fVar54 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar28 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar28 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar28,0);
      fVar54 = (float)FUN_03776cb4(&stack0x000015c0,0);
    }
    in_x12 = 0x60;
    fVar51 = *(float *)(unaff_x19 + 0x35c);
    fVar45 = (fStack000000000000012c - fVar63) - fVar45;
    bVar9 = true;
    if ((fVar51 <= fVar45) && (bVar9 = false, !NAN(fVar51))) {
      bVar9 = fVar51 == -1.0;
    }
    if (!bVar9) {
      fVar45 = fVar51;
    }
    fVar51 = 1.0;
    if (uVar14 != 0) {
      fVar51 = DAT_00d38acc;
    }
    if (ABS(fVar48) + fVar46 * fVar54 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar51 * fVar45) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,in_stack_00000068,0x398);
      FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
      in_x12 = 0x60;
    }
  }
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  uVar14 = *(uint *)(unaff_x19 + 0x340);
  lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(uint *)(lVar28 + 0x6c) = uVar14;
  *(undefined4 *)(lVar28 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar28 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar28 + (int)uVar14 * in_x12 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  else {
    lVar28 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar28 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar28 + (int)uVar14 * in_x12 + 0x24) == 1) goto LAB_0378fbcc;
  }
  if (in_stack_0000169c != 0x200b) {
    if (in_stack_0000169c == 9) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar45 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      bVar12 = FUN_03779d4c(*in_stack_000001c8,0);
      fVar54 = *(float *)(unaff_x19 + 0x2f4);
      fVar48 = fVar59 * fVar45 * (float)bVar12;
      fVar45 = fVar48 * (float)(int)(fVar54 / fVar48);
      if (fVar45 <= fVar54) {
        fVar45 = fVar54 + fVar48;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar45;
      in_x12 = 0x60;
    }
    else {
      fVar45 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar45 == 0.0) {
        fVar54 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar45 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar46 = *(float *)(unaff_x19 + 0x19a8);
          fVar48 = (float)FUN_03778e7c(&stack0x000015e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar51 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
            fVar54 = fVar54 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar59 * (fVar45 * fVar46 + fVar48) +
                              fStack0000000000000158 *
                              (in_stack_00000148 + in_stack_00000188 + fVar51));
            goto UnityEngine_UIElements_WheelEvent___ctor;
          }
          goto LAB_03793c9c;
        }
        fVar45 = (float)FUN_03778e7c(&stack0x000015e0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        in_x12 = 0x60;
        fVar54 = fVar54 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar59 * fVar45 +
                          fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar48))
        ;
        *(float *)(unaff_x19 + 0x2f4) = fVar54;
        if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar54 = fVar54 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar54 = *(float *)(unaff_x19 + 0x2f4);
        fVar48 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar54 = fVar54 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar45 - in_stack_000000e8._4_4_) +
                          fStack0000000000000158 * (in_stack_00000188 + fVar48));
UnityEngine_UIElements_WheelEvent___ctor:
        in_x12 = 0x60;
        *(float *)(unaff_x19 + 0x2f4) = fVar54;
        if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar54 = fVar54 + fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      in_x12 = 0x60;
      *(float *)(unaff_x19 + 0x2f4) = fVar54;
    }
  }
FUN_0378fd94:
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar45 = *in_stack_000001d0;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar28 + (long)(int)fVar45 * unaff_x27 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000169c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
     (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000169c - 0x2028)))) {
    lVar28 = *in_stack_00000050;
    if (lVar28 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar28 + 0x18) < (int)(uVar14 + 1)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(in_stack_00000050,uVar14 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
      lVar28 = *in_stack_00000050;
      if (lVar28 == 0) goto LAB_03793c9c;
      uVar14 = *(uint *)(unaff_x19 + 0x350);
      in_x12 = 0x60;
    }
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar43 = lVar28 + (long)(int)uVar14 * 0x14;
    *(undefined4 *)(lVar43 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar45 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar43 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar45 = *(float *)(lVar43 + 0x30);
    }
    *(float *)(lVar43 + 0x30) = fVar45;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar28 + (long)(int)uVar14 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    fVar45 = *in_stack_000001d0;
    *(float *)(lVar28 + (long)(int)uVar14 * 0x14 + 0x24) = fVar45;
  }
  if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000169c - 0x2028 < 2 ||
      (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (fVar45 == fStack00000000000000dc)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar45 = *(float *)(unaff_x19 + 0x338);
      fVar54 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        in_x12 = 0x60;
      }
      fVar45 = fVar45 - fVar54;
      if (((fStack00000000000000a8 < ABS(fVar45)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar50 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar16 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_037a5574(fVar45,uVar50,uVar16,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar45;
        *(float *)(unaff_x19 + 0x2e0) = fVar45 + *(float *)(unaff_x19 + 0x2e0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        in_x12 = 0x60;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(in_stack_00000068,&stack0x000016a0,0x398);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar45 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar45 + *(float *)(unaff_x19 + 0xb24);
          memcpy(&stack0x00000230,in_stack_00000068,0x398);
          FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
          in_x12 = 0x60;
        }
      }
    }
    fVar54 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar48 = *(float *)(unaff_x19 + 0x33c) - fVar54;
    fVar45 = *(float *)(unaff_x19 + 0x378);
    if (fVar48 <= *(float *)(unaff_x19 + 0x378)) {
      fVar45 = fVar48;
    }
    *(float *)(unaff_x19 + 0x378) = fVar45;
    fVar46 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001694 == '\0') {
      in_stack_00001698 = fVar45;
    }
    if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
        (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001694 = '\x01';
    }
    lVar28 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar28 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    iVar15 = *(int *)(unaff_x19 + 0x328);
    lVar43 = lVar28 + (int)uVar14 * in_x12;
    *(int *)(lVar43 + 0x38) = iVar15;
    uVar37 = *(uint *)(unaff_x19 + 0x328);
    if (iVar15 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar37 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar37;
    *(uint *)(lVar43 + 0x3c) = uVar37;
    iVar1 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar1;
    *(int *)(lVar43 + 0x40) = iVar1;
    iVar17 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar37 <= *(int *)(unaff_x19 + 0x334)) {
      iVar17 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar17;
    *(int *)(lVar43 + 0x44) = iVar17;
    *(int *)(lVar43 + 0x24) = (iVar1 - iVar15) + 1;
    *(undefined4 *)(lVar43 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar43 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    uVar50 = *(undefined4 *)(lVar43 + (long)(int)uVar37 * (long)iVar61 + 0x124);
    lVar28 = lVar28 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar28 + 0x74) = fVar48;
    *(undefined4 *)(lVar28 + 0x70) = uVar50;
    lVar28 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar28 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    uVar50 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
    fVar46 = fVar46 - fVar54;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar28 + 0x7c) = fVar46;
    *(undefined4 *)(lVar28 + 0x78) = uVar50;
    lVar28 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar28 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar43 = lVar28 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar43 + 0x48) = *(float *)(lVar43 + 0x78) - fVar59 * in_stack_000001a0;
    *(float *)(lVar43 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar43 + 0x24) == 1) {
      *(undefined4 *)(lVar28 + (long)(int)uVar14 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar45 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    lVar28 = *in_stack_000001e8;
    if (lVar28 == 0) goto LAB_03793c9c;
    lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    lVar21 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar21 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar28 + lVar43 * unaff_x27 + 0x1a0) == '\0') &&
        (lVar43 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar37 = (uint)*(undefined8 *)(lVar21 + 0x18), uVar37 <= uVar14)) goto thunk_FUN_01ab6c44;
    fVar54 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) +
             fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar45));
    fVar45 = -fVar54;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar45 = fVar54;
    }
    *(float *)(lVar21 + (long)(int)uVar14 * 0x60 + 0x5c) =
         *(float *)(lVar28 + lVar43 * unaff_x27 + 0x164) + fVar45;
    if (uVar37 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar21 = lVar21 + (long)(int)uVar14 * 0x60;
    *(float *)(lVar21 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar21 + 0x58) = fVar48;
    *(float *)(lVar21 + 0x4c) = in_stack_000000a0._4_4_ + (fVar46 - fVar48);
    *(float *)(lVar21 + 0x50) = fVar46;
    if (0x2c < (int)in_stack_0000169c) {
      if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d)) goto LAB_03790360;
      goto LAB_03790574;
    }
    if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
      FUN_03796df8();
      fVar45 = *(float *)(unaff_x19 + 0x324);
      iVar15 = *(int *)(unaff_x19 + 0x340) + 1;
      *(int *)(unaff_x19 + 0x340) = iVar15;
      *(uint *)(unaff_x19 + 0x328) = (int)fVar45 + 1;
      in_stack_000001d0[8] = 0.0;
      in_stack_000001d0[9] = 0.0;
      if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar15) {
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a56f4(iVar15,in_stack_000001c0,0);
          fVar45 = *in_stack_000001d0;
        }
        lVar28 = *in_stack_000001e8;
        if (lVar28 != 0) {
          if ((uint)fVar45 < (uint)*(float *)(lVar28 + 0x18)) {
            fVar45 = *(float *)(lVar28 + (long)(int)fVar45 * (long)iVar61 + 0x158);
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
              if ((in_stack_0000169c == 0x2029) || (fVar54 = 0.0, in_stack_0000169c == 10)) {
                fVar54 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar25 = 0;
              fVar54 = fVar45 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                       fStack0000000000000088 *
                       (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                       fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar54) +
                       *(float *)(unaff_x19 + 0x2e0);
            }
            else {
              if ((in_stack_0000169c == 0x2029) || (fVar54 = 0.0, in_stack_0000169c == 10)) {
                fVar54 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar25 = 1;
              fVar54 = *(float *)(unaff_x19 + 0x2e0) +
                       *(float *)(unaff_x19 + 0x2e4) +
                       fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar54);
            }
            *(float *)(unaff_x19 + 0x2e0) = fVar54;
            *(float *)(unaff_x19 + 0x15ac) = fVar45;
            *(undefined1 *)(unaff_x19 + 0x2e8) = uVar25;
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
      }
      goto LAB_03793c9c;
    }
    if (in_stack_0000169c == 3) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        in_stack_0000160c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
        goto LAB_03790574;
      }
      goto LAB_03793c9c;
    }
  }
  else {
    lVar28 = *in_stack_000001e8;
    if (lVar28 == 0) goto LAB_03793c9c;
  }
LAB_03790574:
  fVar45 = *in_stack_000001d0;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
  if (*(char *)(lVar28 + (long)(int)fVar45 * unaff_x27 + 0x1a0) != '\0') {
    lVar28 = lVar28 + (long)(int)fVar45 * unaff_x27;
    uVar20 = *(ulong *)(unaff_x19 + 0x360);
    uVar31 = *(ulong *)(lVar28 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar20 ^ (uVar20 ^ uVar31) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar31 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar31));
    uVar20 = *(ulong *)(unaff_x19 + 0x368);
    uVar31 = *(ulong *)(lVar28 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar20 ^ (uVar20 ^ uVar31) &
                  ~CONCAT44(-(uint)((float)(uVar31 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar31 < (float)uVar20));
  }
  if ((iStack000000000000008c != 0) ||
     ((*(uint *)(in_stack_000001e0 + 0x74) < 7 &&
      ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) != 0)))) {
    if ((unaff_w25 == 0) &&
       (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) && (in_stack_0000169c != 0xad)
        ))) {
      if (*(char *)(unaff_x19 + 0x37d) == '\0') {
LAB_03790684:
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar20 = FUN_037a5f20(in_stack_0000169c,0);
        if ((uVar20 & 1) == 0) {
LAB_037906cc:
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar20 = FUN_037a5f90(in_stack_0000169c,0);
          if ((uVar20 & 1) == 0) goto LAB_037907cc;
          if (in_stack_00000060 == 0) goto LAB_03793c9c;
        }
        else {
          if ((in_stack_00000060 == 0) || (lVar28 = FUN_037a8a5c(in_stack_00000060,0), lVar28 == 0))
          goto LAB_03793c9c;
          if (*(char *)(lVar28 + 0x28) != '\0') goto LAB_037906cc;
        }
        lVar28 = FUN_037a8a5c(in_stack_00000060,0);
        if ((lVar28 == 0) || (lVar28 = FUN_037aad04(lVar28,0), lVar28 == 0)) goto LAB_03793c9c;
        uVar50 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
        in_stack_000016a0 = CONCAT44(uVar50,in_stack_0000169c);
        uVar20 = FUN_021e4dc4(lVar28,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
        if ((int)*in_stack_000001d0 < (int)fStack00000000000000dc) {
          lVar28 = FUN_037a8a5c(in_stack_00000060,0);
          if (lVar28 == 0) goto LAB_03793c9c;
          lVar28 = FUN_037aaf28(lVar28,0);
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar43 + 0x18) <= (int)*in_stack_000001d0 + 1U) goto thunk_FUN_01ab6c44;
          if (lVar28 == 0) goto LAB_03793c9c;
          in_stack_000016a0 =
               CONCAT44(uVar50,(uint)*(ushort *)
                                      (lVar43 + (long)(int)((int)*in_stack_000001d0 + 1U) *
                                                (long)iVar61 + 0x20));
          uVar31 = FUN_021e4dc4(lVar28,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
          if ((uVar20 & 1) != 0) goto LAB_037909e8;
          if ((uVar31 & 1) == 0) goto LAB_03790cd4;
          if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
        }
        else {
          if ((uVar20 & 1) == 0) {
LAB_03790cd4:
            FUN_03796df8();
            bStack00000000000000d8 = 0;
            goto LAB_03790864;
          }
LAB_037909e8:
          if ((float)unaff_x20 != fStack00000000000001bc ||
              ((bStack00000000000000d8 ^ 0xff) & 1) != 0) goto LAB_03790864;
        }
        if (unaff_w25 != 0) {
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
        if ((unaff_w25 != 0 && in_stack_0000169c != 0xa0) ||
           ((in_stack_000000b8 & 1) == 0 && in_stack_0000169c == 0xad)) {
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
  goto LAB_0378d260;
code_r0x0378d4bc:
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_000001c8 = *(long *)(lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_00000190 = *(long *)(lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar45 = *in_stack_000001d0;
  fVar59 = *(float *)(lVar28 + 0x18);
  if ((uint)fVar59 <= (uint)fVar45) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar28 + (long)(int)fVar45 * unaff_x27 + 0x60)
  ;
  if (unaff_w23 == 0) {
LAB_0378d570:
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar46 = *(float *)(unaff_x19 + 0xf4);
    iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
    lVar28 = *(long *)(unaff_x19 + 0x68);
  }
  else {
    lVar43 = *(long *)(unaff_x19 + 0x20);
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
    if ((*(int *)(lVar43 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10) ||
       (fVar45 == *(float *)(unaff_x19 + 0x328))) goto LAB_0378d570;
    if ((uint)fVar59 <= (int)fVar45 - 1U) goto thunk_FUN_01ab6c44;
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar46 = *(float *)(lVar28 + (long)(int)((int)fVar45 - 1U) * (long)iVar61 + 0x68);
    iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
    lVar28 = *in_stack_000001c8;
  }
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar63 = (float)FUN_03776960(lVar28 + 0xb0,0);
  fVar51 = in_stack_00000150;
  if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
    fVar51 = 1.0;
  }
  fStack0000000000000170 = 0.0;
  fVar48 = 0.0;
  if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar48 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  }
  lVar28 = *(long *)(unaff_x19 + 0x1588);
  if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_03793c9c;
  fVar47 = *(float *)(unaff_x19 + 0xf0);
  fVar49 = *(float *)(lVar28 + 0x2c);
  fVar59 = (float)FUN_03776ea8(*(long *)(lVar28 + 0x20),0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar65 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar57 = *(float *)(unaff_x19 + 0xf0);
  fVar45 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar54 = *(float *)(unaff_x19 + 0x324);
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar54) goto thunk_FUN_01ab6c44;
  lVar43 = lVar28 + (long)(int)fVar54 * unaff_x27;
  fVar51 = ((fStack000000000000017c * fVar46) / (float)iVar15) * fVar63 * fVar51;
  fVar59 = fVar51 * fVar47 * fVar49 * fVar59;
  *(undefined1 *)(lVar43 + 0x28) = 1;
  *(float *)(lVar43 + 0x16c) = fVar59;
  in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
  fVar45 = fVar51 * fVar65 * fVar57 * fVar45;
LAB_0378db90:
  unaff_s13 = fVar59;
  if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
    unaff_s13 = 0.0;
  }
LAB_0378dba8:
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar54) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)fVar54 * (long)iVar61;
  *(short *)(lVar28 + 0x20) = (short)in_stack_0000169c;
  *(undefined4 *)(lVar28 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar28 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  uVar18 = in_stack_00000100[1];
  in_stack_000016a0 = *in_stack_00000100;
  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar28 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
  *(undefined8 *)(lVar28 + 400) = uVar18;
  *(undefined8 *)(lVar28 + 0x188) = in_stack_000016a0;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
  lVar43 = *(long *)(lVar28 + 0x38);
  *(undefined4 *)(lVar28 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar43 == 0) &&
     ((*in_stack_000001a8 == 0 || (lVar43 = *(long *)(*in_stack_000001a8 + 0x20), lVar43 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar43,0);
  if (in_stack_0000169c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(in_stack_0000169c,0);
    unaff_w25 = uVar14 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  uVar50 = 0;
  in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
    fVar54 = *in_stack_000001d0;
    uVar14 = *(uint *)(*in_stack_000001a8 + 0x28);
    if ((int)fVar54 < (int)fStack00000000000000dc) {
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= (int)fVar54 + 1U) goto thunk_FUN_01ab6c44;
      lVar28 = *(long *)(lVar28 + (long)(int)((int)fVar54 + 1U) * (long)iVar61 + 0x30);
      if ((((lVar28 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar43 = *(long *)(*in_stack_000001c8 + 0x170), lVar43 == 0)) ||
         (lVar43 = *(long *)(lVar43 + 0x40), lVar43 == 0)) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar14 | *(int *)(lVar28 + 0x28) << 0x10
                   );
      uVar20 = FUN_0219f8b8(lVar43,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar20 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar50 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar20 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar20 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
      fVar54 = *in_stack_000001d0;
    }
    if (0 < (int)fVar54) {
      lVar28 = *in_stack_000001e8;
      if (lVar28 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar28 + 0x18) <= (int)fVar54 - 1U) goto thunk_FUN_01ab6c44;
      lVar28 = *(long *)(lVar28 + (ulong)((int)fVar54 - 1U) * (unaff_x27 & 0xffffffff) + 0x30);
      if (((lVar28 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar43 = *(long *)(*in_stack_000001c8 + 0x170), lVar43 == 0 ||
          (lVar43 = *(long *)(lVar43 + 0x40), lVar43 == 0)))) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                    *(uint *)(lVar28 + 0x28) | uVar14 << 0x10);
      uVar20 = FUN_0219f8b8(lVar43,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar20 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar50,0);
        uVar20 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar20 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar54 = *in_stack_000001d0;
  uVar50 = FUN_03778e7c(&stack0x000015e0,0);
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar54) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar28 + (long)(int)fVar54 * unaff_x27 + 0x160) = uVar50;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_037a5c04(in_stack_0000169c,0);
  fVar54 = *in_stack_000001d0;
  unaff_x22 = uVar20 & 0xffffffff;
  if ((uVar20 & 1) == 0) {
    if ((uVar20 & 1) == 0 && 0 < (int)fVar54) {
      uVar14 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar14 == 0x80000000) || (uVar14 != (int)fVar54 - 1U)) {
        do {
          fVar46 = (float)((int)fVar54 - 1);
          uVar50 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
          if (((int)fVar54 < 1) || (fVar46 == *(float *)(unaff_x19 + 0x19c4))) {
            uVar14 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar14 == 0x80000000) goto LAB_0378dfc4;
            lVar28 = *in_stack_000001e8;
            if (lVar28 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            lVar28 = *(long *)(lVar28 + (long)(int)uVar14 * unaff_x27 + 0x30);
            if ((lVar28 == 0) || (lVar28 = FUN_03787a68(lVar28,0), lVar28 == 0)) goto LAB_03793c9c;
            uVar14 = FUN_03776e5c(lVar28,0);
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            iVar61 = FUN_0377acf0(*in_stack_000001a8,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar28 = FUN_03779cb4(*in_stack_000001c8,0), lVar28 == 0)) ||
               (*(long *)(lVar28 + 0x48) == 0)) goto LAB_03793c9c;
            in_stack_000016a0 = CONCAT44(uVar50,uVar14 | iVar61 << 0x10);
            uVar20 = FUN_0219f8b8(*(long *)(lVar28 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            if ((uVar20 & 1) == 0) goto LAB_0378dfc4;
            lVar28 = *in_stack_000001e8;
            if (lVar28 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar54 = *(float *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar63 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar46 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar51 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar54 - fVar63) / unaff_s13 + fVar46) - fVar51,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar54 = (float)FUN_03779390(&stack0x00001550,0);
            puVar23 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar46) goto thunk_FUN_01ab6c44;
          lVar28 = *(long *)(lVar28 + (ulong)(uint)fVar46 * (unaff_x27 & 0xffffffff) + 0x30);
          if ((lVar28 == 0) || (lVar28 = FUN_03787a68(lVar28,0), lVar28 == 0)) goto LAB_03793c9c;
          uVar14 = FUN_03776e5c(lVar28,0);
          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
          iVar61 = FUN_0377acf0(*in_stack_000001a8,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar28 = FUN_03779cb4(*in_stack_000001c8,0), lVar28 == 0)) ||
             (*(long *)(lVar28 + 0x50) == 0)) goto LAB_03793c9c;
          in_stack_000016a0 = CONCAT44(uVar50,uVar14 | iVar61 << 0x10);
          uVar20 = FUN_0219f8b8(*(long *)(lVar28 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          fVar54 = fVar46;
        } while ((uVar20 & 1) == 0);
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar46) goto thunk_FUN_01ab6c44;
        fVar63 = *(float *)(unaff_x19 + 0x2e0);
        fVar47 = *(float *)(unaff_x19 + 0x180);
        lVar28 = lVar28 + (uint)fVar46 * unaff_x27;
        fVar54 = *(float *)(unaff_x19 + 0x2f4);
        fVar49 = *(float *)(lVar28 + 0x148);
        fVar65 = *(float *)(lVar28 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar46 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar51 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar49 - fVar54) / unaff_s13 + fVar46) - fVar51,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar54 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar46 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar65 - ((fVar45 - fVar63) + fVar47)) / unaff_s13 + fVar54) - fVar46,
                     &stack0x000015e0,0);
        in_stack_00000188 = 0.0;
      }
      else {
        lVar28 = *in_stack_000001e8;
        if (lVar28 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar28 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar28 = *(long *)(lVar28 + (long)(int)uVar14 * unaff_x27 + 0x30);
        if ((lVar28 == 0) || (lVar28 = FUN_03787a68(lVar28,0), lVar28 == 0)) goto LAB_03793c9c;
        uVar14 = FUN_03776e5c(lVar28,0);
        if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
        iVar61 = FUN_0377acf0(*in_stack_000001a8,0);
        if (((*in_stack_000001c8 == 0) || (lVar28 = FUN_03779cb4(*in_stack_000001c8,0), lVar28 == 0)
            ) || (*(long *)(lVar28 + 0x48) == 0)) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar14 | iVar61 << 0x10);
        uVar20 = FUN_0219f8b8(*(long *)(lVar28 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        if ((uVar20 & 1) != 0) {
          lVar28 = *in_stack_000001e8;
          if (lVar28 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar54 = *(float *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148)
          ;
          fVar63 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar46 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar51 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar54 - fVar63) / unaff_s13 + fVar46) - fVar51,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar54 = (float)FUN_03779390(&stack0x00001550,0);
          puVar23 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar23,0);
          fVar46 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar54 - fVar46,&stack0x000015e0,0);
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  else {
    *(float *)(unaff_x19 + 0x19c4) = fVar54;
  }
LAB_0378dfc4:
  fVar54 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fVar46 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar63 = *(float *)(unaff_x19 + 0x2f4);
    fVar51 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar63 = fVar63 - unaff_s13 * fVar51 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar63;
    if ((unaff_w25 != 0) || (in_stack_0000169c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) =
           fVar63 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar51 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar51 == 0.0) {
    in_stack_000000e8._4_4_ = 0.0;
  }
  else {
    fVar63 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar47 = (float)FUN_03776ca4(&stack0x000015f0,0);
    in_stack_000000e8._4_4_ =
         (1.0 - *(float *)(unaff_x19 + 0x1594)) *
         (fVar51 * 0.5 - unaff_s13 * (fVar63 * 0.5 + fVar47));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000e8._4_4_;
  }
  uVar14 = 0;
  if ((cVar26 == '\0') && (*unaff_x24 == '\x01')) {
    uVar14 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar28 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar20 = FUN_036cee6c(lVar28,0,0);
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  if (uVar14 == 0) {
    in_stack_00000148 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar28 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar28 == 0) goto LAB_03793c9c;
      uVar20 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
      if ((uVar20 & 1) != 0) {
        lVar28 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar28 == 0) goto LAB_03793c9c;
        uVar20 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
        if ((uVar20 & 1) != 0) {
          lVar28 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar28 == 0) goto LAB_03793c9c;
          fVar51 = (float)FUN_0369e060(lVar28,*(undefined4 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto LAB_03793c9c;
          fVar47 = *(float *)(*in_stack_000001c8 + 0x188);
          fVar63 = (float)FUN_0369e060(*in_stack_00000190,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
          fVar63 = fVar63 * fVar51 * fVar47 * 0.25;
          if (fVar51 < in_stack_000001a0 + fVar63) {
            in_stack_000001a0 = fVar51 - fVar63;
          }
          goto LAB_0378e344;
        }
      }
    }
    fVar63 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
  }
  else {
    fVar63 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
    if ((uVar20 & 1) != 0) {
      lVar28 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar28 == 0) goto LAB_03793c9c;
      uVar20 = FUN_03699d3c(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
      unaff_x28 = (long *)PTR_DAT_03cbe438;
      if ((uVar20 & 1) != 0) {
        lVar28 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar28 == 0) goto LAB_03793c9c;
        fVar51 = (float)FUN_0369e060(lVar28,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar47 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar63 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
        fVar63 = fVar51 * fVar47 * 0.25 * fVar63;
        if (fVar51 < in_stack_000001a0 + fVar63) {
          in_stack_000001a0 = fVar51 - fVar63;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    in_stack_00000148 = (float)FUN_03779d2c(*in_stack_000001c8,0);
  }
LAB_0378e344:
  fVar65 = *(float *)(unaff_x19 + 0x2f4);
  fVar51 = (float)FUN_03776ca4(&stack0x000015f0,0);
  fVar49 = *(float *)(unaff_x19 + 0x19a8);
  fVar47 = (float)FUN_03778e5c(&stack0x000015e0,0);
  fVar65 = fVar65 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    unaff_s13 * (fVar47 + ((fVar51 * fVar49 - in_stack_000001a0) - fVar63));
  fVar51 = (float)FUN_03776cac(&stack0x000015f0,0);
  fVar47 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fVar47 = *(float *)(unaff_x19 + 0x180) +
           ((fVar45 + unaff_s13 * (in_stack_000001a0 + fVar51 + fVar47)) -
           *(float *)(unaff_x19 + 0x2e0));
  fVar51 = (float)FUN_03776c9c(&stack0x000015f0,0);
  fVar49 = fVar47 - unaff_s13 * (in_stack_000001a0 + in_stack_000001a0 + fVar51);
  fStack00000000000001bc = fVar47;
  fVar51 = (float)FUN_03776c94(&stack0x000015f0,0);
  fVar57 = fVar65 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    unaff_s13 *
                    (fVar63 + fVar63 +
                    in_stack_000001a0 + in_stack_000001a0 + fVar51 * *(float *)(unaff_x19 + 0x19a8))
  ;
  fVar51 = fVar65;
  fVar47 = fVar57;
  if (((cVar26 == '\0') && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    iVar61 = *(int *)(unaff_x19 + 0x19a4);
    fVar51 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar47 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar67 = *(float *)(unaff_x19 + 0xf0);
    fVar53 = *(float *)(unaff_x19 + 0x180);
    fVar62 = (float)iVar61 * fStack00000000000000a8;
    fVar52 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    fVar52 = fVar52 * fVar67 * (fVar51 - (fVar47 + fVar53)) * 0.5;
    fVar51 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar47 = fVar62 * unaff_s13 * ((fVar63 + in_stack_000001a0 + fVar51) - fVar52);
    fVar67 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar53 = (float)FUN_03776c9c(&stack0x000015f0,0);
    fStack00000000000001bc = fStack00000000000001bc + 0.0;
    fVar51 = fVar65 + fVar47;
    fVar49 = fVar49 + 0.0;
    fVar47 = fVar57 + fVar47;
    fVar62 = fVar62 * unaff_s13 * ((((fVar67 - fVar53) - in_stack_000001a0) - fVar63) - fVar52);
    fVar65 = fVar65 + fVar62;
    fVar57 = fVar57 + fVar62;
  }
  uVar18 = *in_stack_000000f8;
  uVar19 = *_fStack00000000000000f0;
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar55 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  uVar56 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  fVar63 = 0.0;
  if (DAT_00d38b04 <
      (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar56 >> 0x20) +
      (float)uVar19 * (float)uVar56 +
      (float)uVar18 * (float)uVar55 +
      (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar55 >> 0x20)) {
    fVar60 = 0.0;
    fVar62 = 0.0;
    fVar53 = 0.0;
    fVar52 = fStack00000000000001bc;
    fVar67 = fVar49;
  }
  else {
    FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar64 = (fVar47 + fVar65) * 0.5;
    fVar66 = (fVar49 + fStack00000000000001bc) * 0.5;
    fVar63 = fStack00000000000001bc - fVar66;
    fVar53 = 0.0;
    fVar52 = fVar63;
    fVar51 = (float)FUN_036bdd2c(fVar51 - fVar64,&stack0x000014d0,0);
    fVar51 = fVar64 + fVar51;
    fVar53 = fVar53 + 0.0;
    fVar67 = fVar49 - fVar66;
    fVar62 = 0.0;
    fVar49 = fVar67;
    fVar65 = (float)FUN_036bdd2c(fVar65 - fVar64,&stack0x000014d0,0);
    fVar65 = fVar64 + fVar65;
    fVar49 = fVar66 + fVar49;
    fVar62 = fVar62 + 0.0;
    fVar60 = 0.0;
    fVar47 = (float)FUN_036bdd2c(fVar47 - fVar64,&stack0x000014d0,0);
    fVar47 = fVar64 + fVar47;
    fStack00000000000001bc = fVar66 + fVar63;
    fVar60 = fVar60 + 0.0;
    fVar63 = 0.0;
    fVar57 = (float)FUN_036bdd2c(fVar57 - fVar64,&stack0x000014d0,0);
    fVar57 = fVar64 + fVar57;
    fVar63 = fVar63 + 0.0;
    fVar52 = fVar66 + fVar52;
    fVar67 = fVar66 + fVar67;
  }
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar28 + 0x124) = fVar65;
  *(float *)(lVar28 + 0x128) = fVar49;
  *(float *)(lVar28 + 300) = fVar62;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar28 + 0x118) = fVar51;
  *(float *)(lVar28 + 0x11c) = fVar52;
  *(float *)(lVar28 + 0x120) = fVar53;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar28 + 0x138) = fVar60;
  *(float *)(lVar28 + 0x130) = fVar47;
  *(float *)(lVar28 + 0x134) = fStack00000000000001bc;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)*in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar28 = lVar28 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar28 + 0x13c) = fVar57;
  *(float *)(lVar28 + 0x140) = fVar67;
  *(float *)(lVar28 + 0x144) = fVar63;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar51 = *in_stack_000001d0;
  fVar57 = *(float *)(unaff_x19 + 0x2f4);
  fVar63 = (float)FUN_03778e5c(&stack0x000015e0,0);
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar51) goto thunk_FUN_01ab6c44;
  *(float *)(lVar28 + (long)(int)fVar51 * unaff_x27 + 0x148) = fVar57 + unaff_s13 * fVar63;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar51 = *in_stack_000001d0;
  fVar67 = *(float *)(unaff_x19 + 0x2e0);
  fVar57 = *(float *)(unaff_x19 + 0x180);
  fVar63 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar51) goto thunk_FUN_01ab6c44;
  *(float *)(lVar28 + (long)(int)fVar51 * unaff_x27 + 0x150) =
       (fVar45 - fVar67) + fVar57 + unaff_s13 * fVar63;
  in_x12 = 0x60;
  lVar28 = *in_stack_000001e8;
  if (lVar28 == 0) goto LAB_03793c9c;
  fVar45 = *in_stack_000001d0;
  unaff_x20 = (long)(int)fVar45;
  if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fVar45) goto thunk_FUN_01ab6c44;
  *(float *)(lVar28 + unaff_x20 * unaff_x27 + 0x168) = (fVar47 - fVar65) / (fVar52 - fVar49);
  fVar54 = unaff_s13 * (fVar48 + fVar54);
  if (*unaff_x24 == '\x01') {
    fVar54 = fVar54 / fStack000000000000017c;
    fVar48 = (unaff_s13 * (fStack0000000000000170 + fVar46)) / fStack000000000000017c;
  }
  else {
    fVar48 = unaff_s13 * (fStack0000000000000170 + fVar46);
  }
  unaff_w21 = *(float *)(unaff_x19 + 0x328);
  fVar46 = *(float *)(unaff_x19 + 0x180);
  bVar9 = fVar45 == unaff_w21;
  bVar10 = unaff_w25 == 0;
  unaff_s8 = fVar46 + fVar54;
  if (bVar10 || bVar9) {
    fVar48 = fVar46 + fVar48;
    fVar45 = unaff_s8;
    fVar54 = fVar48;
    if (fVar46 != 0.0) {
      fVar45 = (unaff_s8 - fVar46) / *(float *)(unaff_x19 + 0xf0);
      fVar54 = (fVar48 - fVar46) / *(float *)(unaff_x19 + 0xf0);
      if (fVar45 <= unaff_s8) {
        fVar45 = unaff_s8;
      }
      if (fVar48 <= fVar54) {
        fVar54 = fVar48;
      }
    }
    lVar43 = lVar28 + unaff_x20 * unaff_x27;
    fVar46 = fVar45;
    if (fVar45 <= *(float *)(unaff_x19 + 0x338)) {
      fVar46 = *(float *)(unaff_x19 + 0x338);
    }
    fVar51 = fVar54;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar54) {
      fVar51 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar46;
    *(float *)(unaff_x19 + 0x33c) = fVar51;
    *(float *)(lVar43 + 0x158) = fVar45;
    *(float *)(lVar43 + 0x15c) = fVar54;
    param_2 = *(float *)(unaff_x19 + 0x2e0);
    fVar45 = unaff_s8 - param_2;
  }
  else {
    fVar46 = *(float *)(unaff_x19 + 0x338);
    lVar43 = lVar28 + unaff_x20 * unaff_x27;
    *(float *)(lVar43 + 0x158) = fVar46;
    fVar48 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar43 + 0x15c) = fVar48;
    param_2 = *(float *)(unaff_x19 + 0x2e0);
    fVar45 = fVar46 - param_2;
  }
  *(float *)(lVar43 + 0x14c) = fVar45;
  *(float *)(lVar28 + unaff_x20 * unaff_x27 + 0x154) = fVar48 - param_2;
  *(float *)(unaff_x19 + 0x378) = fVar48 - param_2;
  unaff_x29 = in_stack_000001d0;
  fStack000000000000015c = fVar59;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar10 || bVar9) {
      *(float *)(unaff_x19 + 0x374) = fVar46;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      param_1 = *(float *)(unaff_x19 + 0x370);
      fVar59 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      param_2 = *(float *)(unaff_x19 + 0x2e0);
      in_x12 = 0x60;
      fStack000000000000017c = (unaff_s13 * fVar59) / fStack000000000000017c;
      if (param_1 <= fStack000000000000017c) {
        param_1 = fStack000000000000017c;
      }
      goto code_r0x0378ee00;
    }
    goto LAB_0378ee1c;
  }
  if ((bVar10 || bVar9) && param_2 == 0.0) goto LAB_0378ee0c;
  goto LAB_0378ee1c;
LAB_0379194c:
  do {
    uVar37 = (int)fVar54 - 1;
    fStack00000000000001bc = fVar54;
    if (*(uint *)(lVar28 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar44 = (long)(int)uVar37;
    lVar43 = lVar28 + lVar44 * 0x188;
    lVar21 = *(long *)(lVar43 + 0x40);
    uVar3 = *(ushort *)(lVar43 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar12 = FUN_026b63d8(uVar3,0);
    if (*(uint *)(lVar28 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar43 = *(long *)(in_stack_000001c0 + 0x48);
    uVar42 = (uint)uVar3;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar2 = *(uint *)(lVar28 + lVar44 * 0x188 + 0x6c);
    if (*(uint *)(lVar43 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
    lVar33 = (long)(int)uVar2;
    lVar43 = lVar43 + lVar33 * 0x60;
    uVar5 = *(uint *)(lVar43 + 0x40);
    uVar40 = *(uint *)(lVar43 + 0x6c);
    iVar17 = *(int *)(lVar43 + 0x20);
    iVar61 = *(int *)(lVar43 + 0x28);
    iVar15 = *(int *)(lVar43 + 0x2c);
    uVar6 = *(uint *)(lVar43 + 0x44);
    lVar34 = (long)(int)uVar6;
    fVar63 = *(float *)(lVar43 + 0x50);
    fVar49 = *(float *)(lVar43 + 0x58);
    fVar59 = *(float *)(lVar43 + 0x5c);
    fVar54 = *(float *)(lVar43 + 0x60);
    fVar57 = *(float *)(lVar43 + 100);
    fVar65 = *(float *)(lVar43 + 0x70);
    fVar52 = *(float *)(lVar43 + 0x74);
    fVar51 = *(float *)(lVar43 + 0x78);
    fVar47 = *(float *)(lVar43 + 0x7c);
    if ((int)uVar40 < 0x421) {
      if ((int)uVar40 < 0x209) {
        if ((int)uVar40 < 0x111) {
          switch(uVar40) {
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
            if (uVar40 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar40) {
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
            if (uVar40 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar40 < 0x405) {
        if ((int)uVar40 < 0x401) {
          if (uVar40 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar40 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar40 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar40 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar40 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar40 == 0x408) || (uVar40 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar40 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar40) {
      if ((int)uVar40 < 0x2005) {
        if (0x2000 < (int)uVar40) {
          if (uVar40 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar40 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar40 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar40 != 0x1010) {
          uVar27 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar40 != 0x2008) && (uVar40 != 0x2010)) {
        uVar27 = 0x2020;
LAB_03791bc8:
        if (uVar40 != uVar27) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar59 = fVar65 + fVar51;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar40 < 0x811) {
      switch(uVar40) {
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
        if ((int)uVar37 <= (int)uVar6) {
          if (uVar42 < 0xad) {
            if ((uVar42 != 3) && (uVar42 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar28 + 0x18) <= uVar5) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar28 + (long)(int)uVar5 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar41 = (long *)PTR_DAT_03cbded8;
            }
            uVar24 = FUN_026b8cc4(uVar4,0);
            if ((uVar24 & 1) == 0) {
              bVar11 = (int)uVar2 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar11 = false;
            }
            if ((fVar59 <= fVar54) && (!bVar11 && (uVar40 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar57;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar54 + fVar57;
              }
              goto LAB_03791c20;
            }
            if ((fStack00000000000001bc == 1.4013e-45) || (uVar2 != uVar14)) {
              cVar26 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar26 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar37 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar15 = (iVar15 - iVar17) - (uStack0000000000000090 & 1);
                fVar57 = -fVar59;
                if (cVar26 != '\0') {
                  fVar57 = fVar59;
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
                fVar54 = fVar54 + fVar57;
                if (uVar42 == 9) {
LAB_037939d0:
                  if (cVar26 != '\0') {
                    fVar54 = fVar54 * (1.0 - fVar59);
                    fVar57 = (float)iVar15;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar54 / fVar57;
                    break;
                  }
                  fVar57 = (float)iVar15;
                  fVar54 = fVar54 * (1.0 - fVar59);
                }
                else {
                  if (uVar42 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar24 = FUN_026b97f8(uVar42,0);
                    cVar26 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar24 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar54 = fVar54 * fVar59;
                  fVar57 = (float)(int)((iVar17 - (~uStack0000000000000090 & 1)) + iVar61);
                  if (cVar26 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar54 / fVar57;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar57;
            if (cVar26 != '\0') {
              fStack0000000000000158 = fVar54 + fVar57;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar42,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar40 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar40) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar57 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar59;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar57 + fVar54 * 0.5) - fVar59 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar54 + fVar57) - fVar59;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar54 + fVar57;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar40 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar40 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
    lVar43 = lVar28 + lVar44 * 0x188;
    fVar57 = fStack0000000000000120 + fStack0000000000000158;
    fVar59 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar54 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar43 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar26 = *(char *)(lVar28 + lVar44 * 0x188 + 0x28);
    if (cVar26 != '\x01') goto LAB_0379225c;
    fVar46 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar2,1.0);
    plVar41 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar46 = 1.0;
      lVar30 = lVar28 + lVar44 * 0x188;
      *(undefined4 *)(lVar30 + 0xbc) = 0;
      *(undefined4 *)(lVar30 + 0x94) = 0;
      *(undefined4 *)(lVar30 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar47 = *(float *)(lVar28 + lVar44 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar30 = lVar28 + lVar44 * 0x188;
        fVar51 = (fStack0000000000000158 + fVar47) - *(float *)(unaff_x19 + 0x360);
        fVar47 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar30 = lVar28 + lVar44 * 0x188;
      fVar51 = fVar51 - fVar65;
      *(float *)(lVar30 + 0xbc) = fVar46 + (fVar47 - fVar65) / fVar51;
      *(float *)(lVar30 + 0x94) = fVar46 + (*(float *)(lVar30 + 0x78) - fVar65) / fVar51;
      *(float *)(lVar30 + 0xe4) = fVar46 + (*(float *)(lVar30 + 200) - fVar65) / fVar51;
      fVar46 = fVar46 + (*(float *)(lVar30 + 0xf0) - fVar65) / fVar51;
      break;
    case 2:
      lVar30 = lVar28 + lVar44 * 0x188;
      fVar47 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar51 = (fStack0000000000000158 + *(float *)(lVar30 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar30 + 0xbc) = fVar46 + fVar51 / fVar47;
      *(float *)(lVar30 + 0x94) =
           fVar46 + ((fStack0000000000000158 + *(float *)(lVar30 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar30 + 0xe4) =
           fVar46 + ((fStack0000000000000158 + *(float *)(lVar30 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar46 = fVar46 + ((fStack0000000000000158 + *(float *)(lVar30 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar30 = lVar28 + lVar44 * 0x188;
        *(undefined4 *)(lVar30 + 0xc0) = 0;
        *(undefined4 *)(lVar30 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xe8) = 0;
        *(undefined4 *)(lVar30 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar47 = fVar47 - fVar52;
        lVar30 = lVar28 + lVar44 * 0x188;
        fVar51 = fVar46 + (*(float *)(lVar30 + 0xa4) - fVar52) / fVar47;
        fVar47 = fVar46 + (*(float *)(lVar30 + 0x7c) - fVar52) / fVar47;
        *(float *)(lVar30 + 0xc0) = fVar51;
        *(float *)(lVar30 + 0x98) = fVar47;
        *(float *)(lVar30 + 0xe8) = fVar51;
        *(float *)(lVar30 + 0x110) = fVar47;
        break;
      case 2:
        lVar30 = lVar28 + lVar44 * 0x188;
        fVar51 = fVar46 + (*(float *)(lVar30 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar30 + 0xc0) = fVar51;
        fVar47 = *(float *)(unaff_x19 + 0x364);
        fVar65 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar30 + 0xe8) = fVar51;
        fVar51 = fVar46 + (*(float *)(lVar30 + 0x7c) - fVar47) / (fVar65 - fVar47);
        *(float *)(lVar30 + 0x98) = fVar51;
        *(float *)(lVar30 + 0x110) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar40 = (uint)*(undefined8 *)(lVar28 + 0x18);
      }
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
      lVar30 = lVar28 + lVar44 * 0x188;
      fVar51 = *(float *)(lVar30 + 0x168);
      fVar47 = (1.0 - (*(float *)(lVar30 + 0xc0) + *(float *)(lVar30 + 0x98)) * fVar51) * 0.5;
      fVar65 = fVar46 + *(float *)(lVar30 + 0xc0) * fVar51 + fVar47;
      fVar46 = fVar46 + *(float *)(lVar30 + 0x98) * fVar51 + fVar47;
      *(float *)(lVar30 + 0xbc) = fVar65;
      *(float *)(lVar30 + 0x94) = fVar65;
      *(float *)(lVar30 + 0xe4) = fVar46;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar28 + lVar44 * 0x188 + 0x10c) = fVar46;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
      lVar30 = lVar28 + lVar44 * 0x188;
      *(undefined4 *)(lVar30 + 0xc0) = 0;
      *(undefined4 *)(lVar30 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0x110) = 0;
      break;
    case 1:
      if (uVar37 < uVar40) {
        fVar63 = fVar63 - fVar49;
        lVar30 = lVar28 + lVar44 * 0x188;
        fVar46 = (*(float *)(lVar30 + 0xa4) - fVar49) / fVar63;
        fVar63 = (*(float *)(lVar30 + 0x7c) - fVar49) / fVar63;
        *(float *)(lVar30 + 0xc0) = fVar46;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
      lVar30 = lVar28 + lVar44 * 0x188;
      fVar46 = (*(float *)(lVar30 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar30 + 0xc0) = fVar46;
      fVar63 = (*(float *)(lVar30 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar30 + 0x98) = fVar63;
      *(float *)(lVar30 + 0xe8) = fVar63;
      *(float *)(lVar30 + 0x110) = fVar46;
      break;
    case 3:
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
      lVar30 = lVar28 + lVar44 * 0x188;
      fVar63 = *(float *)(lVar30 + 0x168);
      fVar51 = (1.0 - (*(float *)(lVar30 + 0xbc) + *(float *)(lVar30 + 0xe4)) / fVar63) * 0.5;
      fVar46 = *(float *)(lVar30 + 0xbc) / fVar63 + fVar51;
      fVar51 = *(float *)(lVar30 + 0xe4) / fVar63 + fVar51;
      *(float *)(lVar30 + 0xc0) = fVar46;
      *(float *)(lVar30 + 0x98) = fVar51;
      *(float *)(lVar30 + 0x110) = fVar46;
      *(float *)(lVar30 + 0xe8) = fVar51;
    }
    if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
    lVar30 = lVar28 + lVar44 * 0x188;
    fVar46 = *(float *)(lVar30 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar30 + 100) == '\0') && ((*(byte *)(lVar28 + lVar44 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar46 = -fVar46;
    }
    lVar30 = lVar28 + lVar44 * 0x188;
    *(float *)(lVar30 + 0xb8) = fVar46;
    *(float *)(lVar30 + 0x90) = fVar46;
    *(float *)(lVar30 + 0xe0) = fVar46;
    *(float *)(lVar30 + 0x108) = fVar46;
    *(undefined4 *)(lVar30 + 0xbc) = 0x3f800000;
    *(float *)(lVar30 + 0xc0) = fVar46;
    *(undefined4 *)(lVar30 + 0x94) = 0x3f800000;
    *(float *)(lVar30 + 0x98) = fVar46;
    *(undefined4 *)(lVar30 + 0xe4) = 0x3f800000;
    *(float *)(lVar30 + 0xe8) = fVar46;
    *(undefined4 *)(lVar30 + 0x10c) = 0x3f800000;
    *(float *)(lVar30 + 0x110) = fVar46;
LAB_0379225c:
    if (((int)uVar37 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar37 < uVar40) {
          bVar11 = *(uint *)(lVar28 + lVar44 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar43 = lVar28 + lVar44 * 0x188;
      *(ulong *)(lVar43 + 0xa0) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar43 + 0xa0) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar43 + 0xa0));
      *(float *)(lVar43 + 0xa8) = fVar54 + *(float *)(lVar43 + 0xa8);
      *(ulong *)(lVar43 + 0x78) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar43 + 0x78) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar43 + 0x78));
      *(float *)(lVar43 + 0x80) = fVar54 + *(float *)(lVar43 + 0x80);
      *(ulong *)(lVar43 + 200) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar43 + 200) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar43 + 200));
      *(float *)(lVar43 + 0xd0) = fVar54 + *(float *)(lVar43 + 0xd0);
      *(ulong *)(lVar43 + 0xf0) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar43 + 0xf0) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar43 + 0xf0));
      *(float *)(lVar43 + 0xf8) = fVar54 + *(float *)(lVar43 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar11 = false;
LAB_037922d8:
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
      if (bVar11) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar41);
        DAT_0411f172 = '\x01';
        uVar40 = *(uint *)(lVar28 + 0x18);
      }
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      lVar30 = lVar28 + lVar44 * 0x188;
      *(undefined8 *)(lVar30 + 0xa0) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar30 + 0xa8) = uVar16;
      if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      lVar30 = lVar28 + lVar44 * 0x188;
      *(undefined8 *)(lVar30 + 0x78) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar30 + 0x80) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 200) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar30 + 0xd0) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar41 + 0xb8) + 1);
      *(undefined8 *)(lVar30 + 0xf0) = **(undefined8 **)(*plVar41 + 0xb8);
      *(undefined4 *)(lVar30 + 0xf8) = uVar16;
      *(undefined1 *)(lVar43 + 0x1a0) = 0;
    }
    iVar61 = FUN_0368e42c(0);
    if (iVar61 == 1) {
      cVar39 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar39 = '\0';
    }
    if (cVar26 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar37,cVar39 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar26 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar37,cVar39 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar43 = lVar43 + lVar44 * 0x188;
    uVar18 = *(undefined8 *)(lVar43 + 0x124);
    *(undefined8 *)(lVar43 + 0x124) =
         CONCAT44(fVar59 + (float)((ulong)uVar18 >> 0x20),fVar57 + (float)uVar18);
    *(float *)(lVar43 + 300) = fVar54 + *(float *)(lVar43 + 300);
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar43 = lVar43 + lVar44 * 0x188;
    *(ulong *)(lVar43 + 0x118) =
         CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar43 + 0x118) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar43 + 0x118));
    *(float *)(lVar43 + 0x120) = fVar54 + *(float *)(lVar43 + 0x120);
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar43 = lVar43 + lVar44 * 0x188;
    *(ulong *)(lVar43 + 0x130) =
         CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar43 + 0x130) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar43 + 0x130));
    *(float *)(lVar43 + 0x138) = fVar54 + *(float *)(lVar43 + 0x138);
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    lVar43 = lVar43 + lVar44 * 0x188;
    *(float *)(lVar43 + 0x13c) = fVar57 + *(float *)(lVar43 + 0x13c);
    *(ulong *)(lVar43 + 0x140) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar43 + 0x140) >> 0x20),
                  fVar59 + (float)*(undefined8 *)(lVar43 + 0x140));
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar40 = *(uint *)(lVar43 + 0x18);
    if (uVar40 <= uVar37) goto thunk_FUN_01ab6c44;
    lVar30 = lVar43 + lVar44 * 0x188;
    *(float *)(lVar30 + 0x148) = fVar57 + *(float *)(lVar30 + 0x148);
    *(float *)(lVar30 + 0x164) = fVar57 + *(float *)(lVar30 + 0x164);
    *(float *)(lVar30 + 0x154) = fVar59 + *(float *)(lVar30 + 0x154);
    uVar18 = *(undefined8 *)(lVar30 + 0x14c);
    *(undefined8 *)(lVar30 + 0x14c) =
         CONCAT44(fVar59 + (float)((ulong)uVar18 >> 0x20),fVar59 + (float)uVar18);
    if (uVar2 == uVar14) {
      uVar14 = (int)*in_stack_000001d0 - 1;
      if (uVar37 == uVar14) goto LAB_037926b4;
    }
    else {
      lVar30 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar30 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      lVar35 = (long)(int)uVar14;
      lVar38 = lVar30 + lVar35 * 0x60;
      fVar54 = fVar59 + *(float *)(lVar38 + 0x58);
      *(ulong *)(lVar38 + 0x50) =
           CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar38 + 0x50) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar38 + 0x50));
      *(float *)(lVar38 + 0x58) = fVar54;
      *(float *)(lVar38 + 0x5c) = fVar57 + *(float *)(lVar38 + 0x5c);
      if (uVar40 <= *(uint *)(lVar38 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar16 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar38 + 0x38) * 0x188 + 0x124);
      lVar30 = lVar30 + lVar35 * 0x60;
      *(float *)(lVar30 + 0x74) = fVar54;
      *(undefined4 *)(lVar30 + 0x70) = uVar16;
      lVar43 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar43 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar43 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      lVar30 = *in_stack_000001e8;
      if (lVar30 == 0) goto LAB_03793c9c;
      uVar14 = *(uint *)(lVar43 + lVar35 * 0x60 + 0x44);
      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      lVar43 = lVar43 + lVar35 * 0x60;
      *(undefined4 *)(lVar43 + 0x78) = *(undefined4 *)(lVar30 + (long)(int)uVar14 * 0x188 + 0x130);
      *(undefined4 *)(lVar43 + 0x7c) = *(undefined4 *)(lVar43 + 0x50);
      uVar14 = (int)*in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar37 == uVar14) {
        lVar43 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar30 = lVar43 + lVar33 * 0x60;
        fVar54 = fVar59 + *(float *)(lVar30 + 0x58);
        *(ulong *)(lVar30 + 0x50) =
             CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar30 + 0x50) >> 0x20),
                      fVar59 + (float)*(undefined8 *)(lVar30 + 0x50));
        *(float *)(lVar30 + 0x58) = fVar54;
        *(float *)(lVar30 + 0x5c) = fVar57 + *(float *)(lVar30 + 0x5c);
        lVar35 = *in_stack_000001e8;
        if (lVar35 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar30 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar16 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar30 + 0x38) * 0x188 + 0x124);
        lVar43 = lVar43 + lVar33 * 0x60;
        *(float *)(lVar43 + 0x74) = fVar54;
        *(undefined4 *)(lVar43 + 0x70) = uVar16;
        lVar43 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar30 = *in_stack_000001e8;
        if (lVar30 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(lVar43 + lVar33 * 0x60 + 0x44);
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar33 * 0x60;
        *(undefined4 *)(lVar43 + 0x78) = *(undefined4 *)(lVar30 + (long)(int)uVar14 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar43 + 0x7c) = *(undefined4 *)(lVar43 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar24 = FUN_026b82c4(uVar42,0);
    if (((((uVar24 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (fStack00000000000001bc == 1.4013e-45) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar13 = FUN_026b81f8(uVar42,0);
          if (((uVar42 == 0x200b) || (((bVar12 | bVar13 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1.4013e-45)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((fStack00000000000001bc != 1.4013e-45) &&
            ((int)uVar37 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
           (((int)uVar37 < (int)*in_stack_000001d0 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar28 + 0x18) <= (int)fStack00000000000001bc - 2U) goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(lVar28 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b82c4(uVar4,0);
          if ((uVar24 & 1) != 0) {
            if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fStack00000000000001bc)
            goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar28 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_026b82c4(uVar4,0);
            if ((uVar24 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar37 == (int)*in_stack_000001d0 - 1U) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b82c4(uVar42,0);
          fStack0000000000000170 = (float)uVar37;
          if ((uVar24 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar43 = *plVar22;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar61 = *(int *)(lVar43 + 0x18);
        if (iVar61 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar22,iVar61 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar43 = *plVar22;
          if (lVar43 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)uVar14 * 0xc;
        *(uint *)(lVar43 + 0x20) = uStack0000000000000168;
        *(float *)(lVar43 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar43 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar43 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar33 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar43 + 0x34) = *(int *)(lVar43 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar37;
      }
      if (uVar37 == (int)*in_stack_000001d0 - 1U) {
        lVar43 = *plVar22;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar61 = *(int *)(lVar43 + 0x18);
        if (iVar61 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar22,iVar61 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar43 = *plVar22;
          if (lVar43 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + (long)(int)uVar14 * 0xc;
        *(uint *)(lVar43 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar43 + 0x24) = uVar37;
        *(uint *)(lVar43 + 0x28) = (int)fStack00000000000001bc - uStack0000000000000168;
        lVar43 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar33 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar43 + 0x34) = *(int *)(lVar43 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(lVar43 + 0x18);
    if (uVar14 <= uVar37) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar43 + lVar44 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar8) {
LAB_037928d0:
        if ((int)fStack00000000000001bc - 2U < uVar14) {
          uVar16 = *(undefined4 *)(lVar43 + (long)in_stack_000001a8 + -0x354);
          uVar58 = *(undefined4 *)(lVar43 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar8 = false;
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar33 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar61 = *(int *)(lVar43 + lVar44 * 0x188 + 0x70);
      *(int *)(lVar43 + lVar44 * 0x188 + 0x178) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar37) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = iVar61 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (uVar42 != 0x200b && (bVar12 & 1) == 0) {
        fVar54 = *(float *)(lVar43 + lVar44 * 0x188 + 0x16c);
        if (fVar48 <= fVar54) {
          fVar48 = fVar54;
        }
        if (iVar61 != iStack00000000000000c0) {
          fStack000000000000015c = fVar45;
        }
        if (lVar21 == 0) goto LAB_03793c9c;
        fVar54 = *(float *)(lVar43 + lVar44 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar46)) {
          fStack0000000000000174 = ABS(fVar46);
        }
        FUN_03779650(&stack0x000016a0,lVar21,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar51 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar54 = fVar54 + fVar48 * fVar51;
        iStack00000000000000c0 = iVar61;
        if (fVar54 <= fStack000000000000015c) {
          fStack000000000000015c = fVar54;
        }
      }
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar37)) ||
         (bVar8 || bVar11)) {
LAB_03792a80:
        if (!bVar8) goto LAB_03792a8c;
      }
      else {
        if (uVar37 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b97f8(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_03792a80;
        }
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar44 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar43 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar43 + 0x124);
        bVar8 = fVar48 != 0.0;
        fVar54 = _bStack00000000000000d8;
        if (bVar8) {
          fVar54 = fVar48;
        }
        fVar48 = fVar54;
        uVar50 = *(undefined4 *)(lVar43 + 0x174);
        uStack00000000000000cc = 0;
        fVar54 = fVar46;
        if (bVar8) {
          fVar54 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar54;
      }
      if (*in_stack_000001d0 == 1.4013e-45) {
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar44 * 0x188;
        uVar16 = *(undefined4 *)(lVar43 + 0x130);
        uVar58 = *(undefined4 *)(lVar43 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar16,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar58);
      }
      else {
        if ((uVar37 == uVar5) || ((int)uVar6 <= (int)uVar37)) {
          lVar43 = *in_stack_000001e8;
          if (lVar43 != 0) {
            lVar33 = lVar44;
            uVar14 = uVar37;
            if (uVar42 == 0x200b || (bVar12 & 1) != 0) {
              lVar33 = lVar34;
              uVar14 = uVar6;
            }
            if (uVar14 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + lVar33 * 0x188;
              uVar16 = *(undefined4 *)(lVar43 + 0x130);
              uVar58 = *(undefined4 *)(lVar43 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar11) {
          lVar43 = *in_stack_000001e8;
          if (lVar43 != 0) {
            uVar14 = *(uint *)(lVar43 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)((int)*in_stack_000001d0 - 1U) <= (int)uVar37) {
LAB_03793294:
          bVar8 = true;
          goto LAB_03792b70;
        }
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if ((uint)*(float *)(lVar43 + 0x18) <= (uint)fStack00000000000001bc)
        goto thunk_FUN_01ab6c44;
        uVar24 = FUN_03779528(uVar50,*(undefined4 *)(lVar43 + (long)in_stack_000001a8),0);
        if ((uVar24 & 1) != 0) goto LAB_03793294;
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar44 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar43 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar43 + 0x16c));
      }
      fVar48 = 0.0;
      bVar8 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
    if (lVar21 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(lVar43 + lVar44 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar21,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar54 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar14 >> 6 & 1) == 0) {
      if (bVar10) {
        lVar43 = *in_stack_000001e8;
        if (lVar43 != 0) {
          if ((int)fStack00000000000001bc - 2U < *(uint *)(lVar43 + 0x18)) {
            fVar59 = *(float *)(lVar43 + (long)in_stack_000001a8 + -0x334);
            uVar16 = *(undefined4 *)(lVar43 + (long)in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar10 = false;
    }
    else {
      lVar43 = *in_stack_000001e8;
      if ((lVar43 == 0) || (lVar33 = *(long *)(unaff_x19 + 0x15b8), lVar33 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar43 + 0x18) <= uVar37)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar43 + lVar44 * 0x188 + 0x180) =
           *(int *)(lVar33 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar37) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar43 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if ((((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar37)) ||
         (!(bool)(~bVar10 & (bVar11 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar10) goto LAB_03792cf8;
      }
      else {
        if (uVar37 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b97f8(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_03792cf0;
          lVar43 = *in_stack_000001e8;
          if (lVar43 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
        lVar43 = lVar43 + lVar44 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar43 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar43 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar43 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar43 + 0x150);
        fStack00000000000000e0 = fVar54 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        fStack00000000000000dc = 0.0;
      }
      fVar51 = *in_stack_000001d0;
      if (fVar51 == 1.4013e-45) {
LAB_03792ef4:
        lVar33 = *in_stack_000001e8;
        if (lVar33 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar33 + 0x18) <= uVar37) goto thunk_FUN_01ab6c44;
        lVar33 = lVar33 + lVar44 * 0x188;
      }
      else {
        lVar43 = lVar44;
        if (uVar37 == uVar5) {
          lVar33 = *in_stack_000001e8;
          if (lVar33 == 0) goto LAB_03793c9c;
          uVar14 = uVar37;
          if ((uVar42 != 0x200b & (bVar12 ^ 1)) == 0) {
            lVar43 = lVar34;
            uVar14 = uVar6;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)fVar51 <= (int)uVar37) {
LAB_03792fdc:
            if ((int)uVar37 < (int)fVar51) {
              iVar61 = FUN_036d3364(lVar21,0);
              if ((uint)*(float *)(lVar28 + 0x18) <= (uint)fStack00000000000001bc)
              goto thunk_FUN_01ab6c44;
              lVar43 = *(long *)(lVar28 + (long)in_stack_000001a8 + -0x134);
              if (lVar43 == 0) goto LAB_03793c9c;
              iVar15 = FUN_036d3364(lVar43,0);
              if (iVar61 != iVar15) goto LAB_03792ef4;
            }
            if (!bVar11) {
              bVar10 = true;
              goto LAB_03793338;
            }
            lVar43 = *in_stack_000001e8;
            if (lVar43 != 0) {
              if ((int)fStack00000000000001bc - 2U < *(uint *)(lVar43 + 0x18)) {
                fVar59 = *(float *)(lVar43 + (long)in_stack_000001a8 + -0x334);
                uVar16 = *(undefined4 *)(lVar43 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar33 = *in_stack_000001e8;
          if (lVar33 == 0) goto LAB_03793c9c;
          if ((uint)*(float *)(lVar33 + 0x18) <= (uint)fStack00000000000001bc)
          goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar33 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar51 = *(float *)(lVar33 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_037a2200(fVar59 + fVar51,in_stack_000000a0._4_4_,0);
            if ((uVar24 & 1) != 0) {
              fVar51 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar33 = *in_stack_000001e8;
            if (lVar33 == 0) goto LAB_03793c9c;
          }
          uVar14 = uVar37;
          if ((int)uVar6 < (int)uVar37) {
            lVar43 = lVar34;
            uVar14 = uVar6;
          }
          if (*(uint *)(lVar33 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        }
        lVar33 = lVar33 + lVar43 * 0x188;
      }
      fVar59 = *(float *)(lVar33 + 0x150);
      uVar16 = *(undefined4 *)(lVar33 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,fStack00000000000000dc,uVar16,
                   fStack00000000000000f0 * fVar54 + fVar59,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar10 = false;
    }
LAB_03793338:
    lVar43 = *in_stack_000001e8;
    if (lVar43 == 0) goto LAB_03793c9c;
    uVar14 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar14 <= uVar37) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar43 + lVar44 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar9) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar9 = false;
      fVar51 = fStack00000000000001bc;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar37) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar43 + lVar44 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (!bVar9) {
        if (((uVar42 == 0xd) || ((uVar42 & 0xfffe) == 10)) ||
           (((int)uVar6 < (int)uVar37 || (bVar11)))) goto LAB_03793428;
        if (uVar37 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar24 = FUN_026b97f8(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_03793428;
        }
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar21 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar21 = *(long *)puVar7;
        }
        lVar43 = *in_stack_000001e8;
        if (lVar43 == 0) goto LAB_03793c9c;
        uVar14 = (uint)*(undefined8 *)(lVar43 + 0x18);
        if (uVar14 <= uVar37) goto thunk_FUN_01ab6c44;
        pfVar36 = *(float **)(lVar21 + 0xb8);
        fStack0000000000000128 = *pfVar36;
        in_stack_00000140._4_4_ = pfVar36[1];
        fStack000000000000012c = pfVar36[2];
        fStack0000000000000130 = pfVar36[3];
        uStack0000000000000124 = 0;
      }
      if (uVar14 <= uVar37) goto thunk_FUN_01ab6c44;
      lVar43 = lVar43 + lVar44 * 0x188;
      fVar63 = *(float *)(lVar43 + 0x130);
      fVar65 = *(float *)(lVar43 + 0x124);
      fVar59 = *(float *)(lVar43 + 0x148);
      fVar47 = *(float *)(lVar43 + 0x14c);
      fVar49 = *(float *)(lVar43 + 0x154);
      fVar54 = *(float *)(lVar43 + 0x164);
      uVar24 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      fVar51 = fStack00000000000001bc;
      lVar43 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar43);
        }
        fVar57 = (float)FUN_037a1dd8(uVar31,0);
        bVar9 = (bVar12 & 1) == 0;
        if (bVar9) {
          fVar59 = fVar65;
        }
        if (bVar9) {
          fVar54 = fVar63;
        }
        if (fVar59 - fVar57 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar59 - fVar57;
        }
        fVar59 = (float)FUN_037a1de0(uVar31,0);
        if (fStack000000000000012c <= fVar54 + fVar59) {
          fStack000000000000012c = fVar54 + fVar59;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar59 = (float)FUN_037a1df0(uVar31,0);
        if (fVar49 - fVar59 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar49 - fVar59;
        }
        fVar59 = (float)FUN_037a1de8(uVar31,0);
        if (fStack0000000000000130 <= fVar47 + fVar59) {
          fStack0000000000000130 = fVar47 + fVar59;
        }
      }
      else {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar43);
        }
        fVar57 = (float)FUN_037a1de0(uVar31,0);
        if ((bVar12 & 1) == 0) {
          fVar59 = fVar65;
        }
        if (fVar49 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar49;
        }
        fVar59 = (fVar59 + (fStack000000000000012c - fVar57)) * 0.5;
        if (fStack0000000000000130 <= fVar47) {
          fStack0000000000000130 = fVar47;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar59,
                     fStack0000000000000130,uStack0000000000000124);
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar20,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar49 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar20,0);
        fVar49 = (float)FUN_037a1de8(uVar20,0);
        if ((bVar12 & 1) == 0) {
          fVar54 = fVar63;
        }
        fStack000000000000012c = fVar54 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar59;
        fStack0000000000000130 = fVar47 + fVar49;
      }
      if ((((*in_stack_000001d0 == 1.4013e-45) || (uVar37 == uVar5)) || ((int)uVar6 <= (int)uVar37))
         || (bVar11)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    fVar59 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    fVar54 = (float)((int)fVar51 + 1);
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    uVar14 = uVar2;
  } while ((int)fVar51 < (int)fVar59);
  iVar61 = uVar2 + 1;
  plVar22 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(float *)(in_stack_000001c0 + 0x10) = fVar59;
  uVar50 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar61;
  if ((int)fVar59 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar50;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar20 = 1;
    lVar28 = 0x70;
    do {
      lVar43 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar43 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar22 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar43 + 0x18) <= uVar20) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar43 + lVar28,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar43 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar43 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar43 + 0x18) <= uVar20) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar43 + lVar28,1,0);
      }
      uVar20 = uVar20 + 1;
      lVar28 = lVar28 + 0x50;
    } while ((long)uVar20 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


