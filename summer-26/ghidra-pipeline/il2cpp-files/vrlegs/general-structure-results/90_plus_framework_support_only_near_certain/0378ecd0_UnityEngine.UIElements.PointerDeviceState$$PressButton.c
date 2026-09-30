/*
FUNCTION_NAME: UnityEngine.UIElements.PointerDeviceState$$PressButton
ENTRY_POINT: 0378ecd0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_UIElements_PointerDeviceState__PressButton
               (long param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  float *pfVar30;
  long lVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  float *pfVar40;
  long in_x12;
  long lVar41;
  long unaff_x19;
  char cVar42;
  long unaff_x20;
  uint uVar43;
  long *plVar44;
  ulong unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint uVar45;
  long lVar46;
  long lVar47;
  ulong unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float unaff_s13;
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
  byte in_stack_000000b8;
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
  
code_r0x0378ecd0:
  param_2 = param_2 / fStack000000000000017c;
  param_3 = (unaff_s13 * param_3) / fStack000000000000017c;
  fVar60 = unaff_s13;
LAB_0378ece8:
  iVar16 = *(int *)(unaff_x19 + 0x328);
  fVar58 = *(float *)(unaff_x19 + 0x180);
  bVar10 = (int)unaff_x20 == iVar16;
  bVar11 = unaff_w25 == 0;
  param_2 = fVar58 + param_2;
  if (bVar11 || bVar10) {
    param_3 = fVar58 + param_3;
    fVar55 = param_2;
    fVar57 = param_3;
    if (fVar58 != 0.0) {
      fVar55 = (param_2 - fVar58) / *(float *)(unaff_x19 + 0xf0);
      fVar57 = (param_3 - fVar58) / *(float *)(unaff_x19 + 0xf0);
      if (fVar55 <= param_2) {
        fVar55 = param_2;
      }
      if (param_3 <= fVar57) {
        fVar57 = param_3;
      }
    }
    lVar36 = param_1 + unaff_x20 * unaff_x27;
    fVar58 = fVar55;
    if (fVar55 <= *(float *)(unaff_x19 + 0x338)) {
      fVar58 = *(float *)(unaff_x19 + 0x338);
    }
    fVar48 = fVar57;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar57) {
      fVar48 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar58;
    *(float *)(unaff_x19 + 0x33c) = fVar48;
    *(float *)(lVar36 + 0x158) = fVar55;
    *(float *)(lVar36 + 0x15c) = fVar57;
    fVar55 = *(float *)(unaff_x19 + 0x2e0);
    fVar57 = param_2 - fVar55;
  }
  else {
    fVar58 = *(float *)(unaff_x19 + 0x338);
    lVar36 = param_1 + unaff_x20 * unaff_x27;
    *(float *)(lVar36 + 0x158) = fVar58;
    param_3 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar36 + 0x15c) = param_3;
    fVar55 = *(float *)(unaff_x19 + 0x2e0);
    fVar57 = fVar58 - fVar55;
  }
  *(float *)(lVar36 + 0x14c) = fVar57;
  *(float *)(param_1 + unaff_x20 * unaff_x27 + 0x154) = param_3 - fVar55;
  *(float *)(unaff_x19 + 0x378) = param_3 - fVar55;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar11 || bVar10) {
      *(float *)(unaff_x19 + 0x374) = fVar58;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      fVar58 = *(float *)(unaff_x19 + 0x370);
      fVar57 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar55 = *(float *)(unaff_x19 + 0x2e0);
      in_x12 = 0x60;
      fStack000000000000017c = (fVar60 * fVar57) / fStack000000000000017c;
      if (fVar58 <= fStack000000000000017c) {
        fVar58 = fStack000000000000017c;
      }
      *(float *)(unaff_x19 + 0x370) = fVar58;
      if (fVar55 == 0.0) goto LAB_0378ee0c;
    }
  }
  else if ((bVar11 || bVar10) && fVar55 == 0.0) {
LAB_0378ee0c:
    fVar58 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= param_2) {
      fVar58 = param_2;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar58;
  }
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar15 = *unaff_x29;
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)uVar15 * unaff_x27;
  *(undefined1 *)(lVar36 + 0x1a0) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  iVar19 = (int)unaff_x27;
  if ((in_stack_0000169c == 9) ||
     (((((unaff_w25 == 0 && (in_stack_0000169c != 3)) && (in_stack_0000169c != 0x200b)) &&
       (in_stack_0000169c != 0xad)) ||
      (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 || (*unaff_x24 == '\x02'))))))
  {
    *(undefined1 *)(lVar36 + 0x1a0) = 1;
    pfVar30 = _fStack0000000000000130;
    pfVar40 = _iStack0000000000000138;
    if (unaff_w23 != 0) {
      lVar36 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar36 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar36 = lVar36 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
      pfVar40 = (float *)(lVar36 + 100);
      pfVar30 = (float *)(lVar36 + 0x68);
    }
    fVar48 = *pfVar40;
    fVar57 = *pfVar30;
    fVar58 = *(float *)(unaff_x19 + 0x35c);
    fVar61 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar48) - fVar57;
    bVar10 = true;
    if ((fVar58 <= fStack0000000000000174) && (bVar10 = false, !NAN(fVar58))) {
      bVar10 = fVar58 == -1.0;
    }
    if (!bVar10) {
      fStack0000000000000174 = fVar58;
    }
    fVar58 = 0.0;
    fVar64 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar64 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar55 = *(float *)(unaff_x19 + 0x2e0);
      in_x12 = 0x60;
    }
    fVar49 = *(float *)(unaff_x19 + 0x1594);
    fVar50 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000169c != 0xad) {
      fStack000000000000015c = fVar60;
    }
    if ((0.0 < fVar55) && (fVar58 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar58 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    uVar15 = *in_stack_000001d0;
    fVar58 = (*(float *)(unaff_x19 + 0x374) - (fVar50 - fVar55)) + fVar58;
    if (fVar58 <= in_stack_00000108) goto switchD_0378f0dc_caseD_2;
    if (*(int *)(unaff_x19 + 0x34c) == -1) {
      *(uint *)(unaff_x19 + 0x34c) = uVar15;
    }
    uVar20 = DAT_00d37868;
    if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
      fVar66 = *(float *)(in_stack_000001e0 + 0xd0);
      if (((*(float *)(unaff_x19 + 0x15b0) <= fVar66) || (fVar55 <= 0.0)) ||
         (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar55 = *_fStack00000000000000d0;
        fVar58 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar55 <= fVar58) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_0378f0b8;
        fVar60 = (fVar55 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar60 <= DAT_00d38b84) {
          fVar60 = DAT_00d38b84;
        }
        fVar57 = (fVar55 - fVar60) * 20.0 + 0.5;
        fVar60 = DAT_00d38e60;
        if (fVar57 != INFINITY) {
          fVar60 = (float)(int)fVar57 / 20.0;
        }
        if (fVar60 <= fVar58) {
          fVar60 = fVar58;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar55;
LAB_037910ac:
        *(float *)(unaff_x19 + 0xec) = fVar60;
      }
      else {
        fVar60 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000018._4_4_ - fVar58) / (float)*(int *)(unaff_x19 + 0x340)) /
                 fStack0000000000000088;
        if (fVar60 <= fVar66) {
          fVar60 = fVar66;
        }
LAB_03793b50:
        *(float *)(unaff_x19 + 0x15b0) = fVar60;
      }
      goto LAB_0378c81c;
    }
LAB_0378f0b8:
    switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
    case 1:
      if (*(int *)(unaff_x19 + 0x340) < 1) goto switchD_0378f0dc_caseD_2;
      iVar16 = FUN_020aa428(in_stack_00000078,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                           );
      in_stack_00001688 = DAT_00d37868;
      if (iVar16 == 0) {
        in_stack_000001d0[0] = 0;
        in_stack_000001d0[1] = 0;
        in_stack_0000160c = 0xffffffff;
      }
      else {
        FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
        memcpy(&stack0x00001138,&stack0x000016a0,0x398);
        iVar18 = FUN_03797154();
        iVar16 = *(int *)(unaff_x19 + 0x324) + -1;
        *(int *)(unaff_x19 + 0x324) = iVar16;
        in_stack_00001688 = CONCAT44(0x2026,iVar16);
        in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
        in_stack_0000160c = iVar18 - 1;
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
            uVar15 = *in_stack_000001d0;
            if ((uStack00000000000000ac & 1) != 0) {
              *(uint *)(unaff_x19 + 0x330) = uVar15;
            }
            *(uint *)(unaff_x19 + 0x334) = uVar15;
            *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
            lVar36 = *(long *)(in_stack_000001c0 + 0x48);
            if (lVar36 != 0) {
              if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar36 + 0x18)) {
                lVar36 = lVar36 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
                uStack00000000000000ac = 0;
                *(float *)(lVar36 + 100) = fVar48;
                *(float *)(lVar36 + 0x68) = fVar57;
                goto LAB_0378f884;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar36 + (long)(int)uVar15 * (long)iVar19 + 0x1a0) = 0;
        }
        else {
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
          *(undefined1 *)(lVar36 + (long)(int)uVar15 * (long)iVar19 + 0x1a0) = 0;
          *(uint *)(unaff_x19 + 0x334) = uVar15;
          lVar36 = *(long *)(in_stack_000001c0 + 0x48);
          if (lVar36 == 0) goto LAB_03793c9c;
          uVar15 = *(uint *)(lVar36 + 0x18);
          if (uVar15 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar46 = lVar36 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          iVar18 = *(int *)(lVar46 + 0x2c) + 1;
          *(int *)(lVar46 + 0x2c) = iVar18;
          *(int *)(unaff_x19 + 0x348) = iVar18;
          if (uVar15 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
          lVar36 = lVar36 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          *(float *)(lVar36 + 100) = fVar48;
          *(float *)(lVar36 + 0x68) = fVar57;
          *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
        }
        goto LAB_0378f884;
      }
      fVar55 = ABS(fVar61) + fVar64 * (1.0 - fVar49) * fStack000000000000015c;
      fVar58 = 1.0;
      if (uVar33 != 0) {
        fVar58 = DAT_00d38acc;
      }
      if (fVar55 <= fVar58 * fStack0000000000000174) goto LAB_0378f1e0;
      if ((iStack000000000000008c == 0) || (uVar15 == *(uint *)(unaff_x19 + 0x328))) {
        if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
           (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
          iVar18 = *(int *)(in_stack_000001e0 + 0x74);
          if (iVar18 == 1) {
            iVar16 = FUN_020aa428(in_stack_00000078,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                 );
            in_stack_00001688 = DAT_00d37868;
            if (iVar16 == 0) {
              in_stack_000001d0[0] = 0;
              in_stack_000001d0[1] = 0;
              in_stack_0000160c = 0xffffffff;
            }
            else {
              FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
              memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
              iVar18 = FUN_03797154();
              iVar16 = *(int *)(unaff_x19 + 0x324) + -1;
              *(int *)(unaff_x19 + 0x324) = iVar16;
              in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
              in_stack_0000160c = iVar18 - 1;
              in_stack_00001688 = CONCAT44(0x2026,iVar16);
            }
            break;
          }
          if (iVar18 == 6) {
            in_stack_0000160c = FUN_03797154();
            uVar15 = *(uint *)(unaff_x19 + 0x324);
          }
          else {
            if (iVar18 != 3) goto LAB_0378f1e0;
            in_stack_0000160c = FUN_03797154();
          }
          goto LAB_037909d0;
        }
        fVar61 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if (fVar61 <= fVar49) {
          fVar61 = *(float *)(in_stack_000001e0 + 0xac);
          fVar64 = *_fStack00000000000000d0;
          if (fVar64 <= fVar61) goto LAB_0378f2f0;
LAB_03793bbc:
          fVar60 = (fVar64 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar60 <= DAT_00d38b84) {
            fVar60 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar64;
          fVar58 = (fVar64 - fVar60) * 20.0 + 0.5;
          fVar60 = DAT_00d38e60;
          if (fVar58 != INFINITY) {
            fVar60 = (float)(int)fVar58 / 20.0;
          }
          if (fVar60 <= fVar61) {
            fVar60 = fVar61;
          }
          goto LAB_037910ac;
        }
        fVar60 = fVar55 / (1.0 - fVar49);
        if (fVar49 <= 0.0) {
          fVar60 = fVar55;
        }
        fVar49 = fVar49 + (fVar55 - fVar58 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar60;
FUN_03793c4c:
        if (fVar61 <= fVar49) {
          fVar49 = fVar61;
        }
        *(float *)(unaff_x19 + 0x1594) = fVar49;
        goto LAB_0378c81c;
      }
      in_stack_0000160c = FUN_03797154();
      if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        uVar32 = *in_stack_000001d0;
        if (*(uint *)(lVar36 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
        fVar64 = *(float *)(unaff_x19 + 0x2e0);
        fVar61 = 0.0;
        if ((0.0 < fVar64) && (fVar61 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
          fVar61 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
        }
        fVar61 = fStack0000000000000158 * *(float *)(in_stack_000001e0 + 200) +
                 *(float *)(lVar36 + (long)(int)uVar32 * unaff_x27 + 0x158) +
                 (fVar61 - *(float *)(unaff_x19 + 0x33c)) +
                 fStack0000000000000088 * (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0))
        ;
      }
      else {
        fVar61 = *(float *)(in_stack_000001e0 + 200);
        *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        fVar64 = *(float *)(unaff_x19 + 0x2e0);
        uVar32 = *(uint *)(unaff_x19 + 0x324);
        fVar61 = *(float *)(unaff_x19 + 0x2e4) + fStack0000000000000158 * fVar61;
      }
      if ((*(uint *)(lVar36 + 0x18) <= uVar32) ||
         (uVar45 = uVar32 - 1, *(uint *)(lVar36 + 0x18) <= uVar45)) goto thunk_FUN_01ab6c44;
      fVar50 = (fVar61 + *(float *)(unaff_x19 + 0x374) + fVar64) -
               *(float *)(lVar36 + (long)(int)uVar32 * (long)iVar19 + 0x15c);
      if (((in_stack_000000b8 & 1) == 0 &&
           *(short *)(lVar36 + (long)(int)uVar45 * (long)iVar19 + 0x20) == 0xad) &&
         ((fVar50 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
        in_stack_000000b8 = 0;
        *in_stack_000001d0 = uVar45;
        in_stack_0000160c = in_stack_0000160c - 1;
        in_stack_00001688 = CONCAT44(0x2d,uVar45);
        break;
      }
      if (*(short *)(lVar36 + (long)(int)uVar32 * unaff_x27 + 0x20) == 0xad) {
        in_stack_000000b8 = 1;
        break;
      }
      if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
        fVar49 = *(float *)(unaff_x19 + 0x1594);
        fVar61 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar61 <= fVar49) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
          fVar64 = *_fStack00000000000000d0;
          fVar61 = *(float *)(in_stack_000001e0 + 0xac);
          if ((fVar61 < fVar64) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793bbc;
          goto LAB_03790b7c;
        }
LAB_03793c60:
        fVar60 = fVar55;
        if (0.0 < fVar49) {
          fVar60 = fVar55 / (1.0 - fVar49);
        }
        fVar49 = fVar49 + (fVar55 - fVar58 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar60;
        goto FUN_03793c4c;
      }
LAB_03790b7c:
      iVar18 = *in_stack_00000030;
      if ((iVar18 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar18 != -1) != 0)) {
        in_stack_0000160c = FUN_03797154();
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        lVar36 = *(long *)(in_stack_000001c0 + 0x30);
        if (lVar36 == 0) goto LAB_03793c9c;
        uVar32 = *in_stack_000001d0;
        uVar45 = uVar32 - 1;
        if (*(uint *)(lVar36 + 0x18) <= uVar45) goto thunk_FUN_01ab6c44;
        iStack0000000000000028 = iVar18;
        if (*(short *)(lVar36 + (long)(int)uVar45 * (long)iVar19 + 0x20) == 0xad) {
          in_stack_000000b8 = 0;
          *in_stack_000001d0 = uVar45;
          in_stack_0000160c = in_stack_0000160c - 1;
          in_stack_00001688 = CONCAT44(0x2d,uVar45);
          break;
        }
      }
      in_x12 = 0x60;
      if (fVar50 <= in_stack_00000108) {
        FUN_037a1530(fStack0000000000000088);
        bStack00000000000000d8 = 1;
        in_stack_000000b8 = 0;
        uStack00000000000000ac = 1;
        break;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar32;
      }
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar61 = *(float *)(in_stack_000001e0 + 0xd0);
        if ((fVar61 < *(float *)(unaff_x19 + 0x15b0)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar60 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000018._4_4_ - fVar50) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                   fStack0000000000000088;
          if (fVar60 <= fVar61) {
            fVar60 = fVar61;
          }
          goto LAB_03793b50;
        }
        fVar49 = *(float *)(unaff_x19 + 0x1594);
        fVar61 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
        if ((fVar49 < fVar61) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
        goto LAB_03793c60;
        fVar64 = *_fStack00000000000000d0;
        fVar61 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar61 < fVar64) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
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
        in_stack_00001688 = DAT_00d37868;
        if (iVar16 == 0) {
          in_stack_000000b8 = 0;
          in_stack_000001d0[0] = 0;
          in_stack_000001d0[1] = 0;
          in_stack_0000160c = 0xffffffff;
        }
        else {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
          iVar18 = FUN_03797154();
          in_stack_000000b8 = 0;
          iVar16 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar16;
          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
          in_stack_0000160c = iVar18 - 1;
          in_stack_00001688 = CONCAT44(0x2026,iVar16);
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
        uVar15 = uVar32;
LAB_037909d0:
        in_stack_00001688 = CONCAT44(3,uVar15);
        goto LAB_0378d260;
      default:
        in_stack_000000b8 = 0;
        uVar15 = uVar32;
        goto LAB_0378f1e0;
      }
      in_stack_000000b8 = 0;
LAB_0379053c:
      bStack00000000000000d8 = 1;
      uStack00000000000000ac = 1;
      break;
    case 3:
      in_stack_0000160c = FUN_03797154();
      in_stack_00001688 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),uVar15);
      break;
    case 5:
      if (uVar15 == 0 || (int)in_stack_0000160c < 0) {
        *in_stack_000001d0 = 0;
        in_stack_0000160c = 0xffffffff;
        in_stack_00001688 = uVar20;
      }
      else {
        fVar58 = *(float *)(unaff_x19 + 0x338);
        in_stack_0000160c = FUN_03797154();
        if (in_stack_00000108 < fVar58 - fVar50) goto LAB_0378f7e8;
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
      in_stack_00001688 = CONCAT44(3,uVar15);
    }
LAB_0378d260:
    in_stack_0000160c = in_stack_0000160c + 1;
    lVar36 = *(long *)(unaff_x19 + 0x20);
    if (lVar36 == 0) goto LAB_03793c9c;
    if ((int)in_stack_0000160c < (int)*(uint *)(lVar36 + 0x18)) {
      if (*(uint *)(lVar36 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
      uVar15 = *(uint *)(lVar36 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
      if (uVar15 == 0) goto LAB_03790fec;
      if (5 < in_stack_000001d8._4_4_) {
        uVar20 = FUN_0278d4e8(&stack0x0000169c,0);
        uVar21 = FUN_0276793c(&stack0x0000160c,0);
        uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar20,
                              *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar21,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*unaff_x28);
        }
        FUN_0367ae18(uVar20,0);
        in_stack_00001688 = CONCAT44(3,*in_stack_000001d0);
      }
      in_stack_0000169c = uVar15;
      if (uVar15 == 0x1a) goto LAB_0378d260;
      if ((uVar15 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
        unaff_x24[0] = '\x01';
        unaff_x24[1] = '\x01';
        uVar22 = FUN_037974c0();
        if (((uVar22 & 1) != 0) && (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01'))
        goto LAB_0378d260;
      }
      else {
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *unaff_x24 = *(char *)(lVar36 + 0x28);
        *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar36 + 0x60);
        *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar36 + 0x40);
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
      }
      lVar36 = *in_stack_000001e8;
      if (lVar36 == 0) goto LAB_03793c9c;
      uVar15 = *(uint *)(unaff_x19 + 0x324);
      if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
      lVar46 = (long)(int)uVar15;
      uVar51 = *(undefined4 *)(unaff_x19 + 0x78);
      cVar28 = *(char *)(lVar36 + lVar46 * unaff_x27 + 100);
      unaff_x24[1] = '\0';
      if ((uint)in_stack_00001688 == uVar15) {
        in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
        unaff_w23 = 1;
        *unaff_x24 = '\x01';
        if (in_stack_0000169c == 0x2026) {
          *(undefined8 *)(lVar36 + lVar46 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
          *(undefined1 *)(lVar36 + 0x28) = 1;
          *(undefined8 *)(lVar36 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
          *(undefined8 *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
               *(undefined8 *)(unaff_x19 + 0x1a10);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          uVar15 = *in_stack_000001d0;
          if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
          unaff_w23 = 1;
          *(undefined4 *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x60) =
               *(undefined4 *)(unaff_x19 + 0x1a18);
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 1;
          in_stack_00001688 = CONCAT44(3,uVar15 + 1);
        }
        else if (in_stack_0000169c == 3) {
          if ((*in_stack_000001c8 == 0) ||
             (lVar23 = FUN_03779b3c(*in_stack_000001c8,0), lVar23 == 0)) goto LAB_03793c9c;
          FUN_0219b634(lVar23,&stack0x00000978,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                      );
          if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
          *(undefined8 *)(lVar36 + lVar46 * unaff_x27 + 0x30) = in_stack_000016a0;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          unaff_w23 = 1;
          *(undefined1 *)
           (*(long *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                     0xb8) + 8) = 1;
          uVar15 = *in_stack_000001d0;
        }
      }
      else {
        unaff_w23 = 0;
      }
      if (((int)uVar15 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar36 = lVar36 + (long)(int)uVar15 * (long)iVar19;
        *(undefined1 *)(lVar36 + 0x1a0) = 0;
        *(undefined2 *)(lVar36 + 0x20) = 0x200b;
        *(undefined4 *)(lVar36 + 0x6c) = 0;
        *in_stack_000001d0 = uVar15 + 1;
        goto LAB_0378d260;
      }
      cVar42 = *unaff_x24;
      if (cVar42 == '\x01') {
        uVar15 = *(uint *)(unaff_x19 + 0x124);
        if ((uVar15 >> 4 & 1) == 0) {
          if ((uVar15 >> 3 & 1) == 0) {
            fStack000000000000017c = 1.0;
            if ((uVar15 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar22 = FUN_026b812c(in_stack_0000169c,0);
              if ((uVar22 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar15 = FUN_026b8410(in_stack_0000169c,0);
                in_stack_0000169c = uVar15 & 0xffff;
                fStack000000000000017c = fStack000000000000002c;
              }
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar22 = FUN_026b8070(in_stack_0000169c,0);
            fStack000000000000017c = 1.0;
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar15 = FUN_026b8594(in_stack_0000169c,0);
              goto LAB_0378d3d0;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_026b812c(in_stack_0000169c,0);
          fStack000000000000017c = 1.0;
          if ((uVar22 & 1) != 0) {
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
            fStack000000000000017c = 1.0;
            in_stack_0000169c = uVar15 & 0xffff;
          }
        }
        cVar42 = *unaff_x24;
      }
      else {
        fStack000000000000017c = 1.0;
      }
      if (cVar42 != '\x01') {
        if (cVar42 != '\x02') {
          lVar36 = *in_stack_000001e8;
          fVar58 = 0.0;
          unaff_s13 = fVar60;
          if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
            unaff_s13 = fVar58;
          }
          if (lVar36 == 0) goto LAB_03793c9c;
          uVar15 = *in_stack_000001d0;
          fVar55 = 0.0;
          fStack0000000000000170 = 0.0;
          goto LAB_0378dba8;
        }
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        plVar44 = *(long **)(lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
        if (plVar44 == (long *)0x0) goto LAB_03793c9c;
        bVar13 = *(byte *)(*(long *)
                            Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__ +
                          0x130);
        if ((*(byte *)(*plVar44 + 0x130) < bVar13) ||
           (*(long *)(*(long *)(*plVar44 + 200) + (ulong)bVar13 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar44);
        }
        plVar24 = (long *)FUN_03783144(plVar44,0);
        if (plVar24 == (long *)0x0) {
          plVar24 = (long *)0x0;
          *in_stack_00000160 = 0;
        }
        else {
          lVar36 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
          bVar13 = *(byte *)(lVar36 + 0x130);
          if (*(byte *)(*plVar24 + 0x130) < bVar13) {
            plVar35 = (long *)0x0;
          }
          else {
            plVar35 = plVar24;
            if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar13 * 8 + -8) != lVar36) {
              plVar35 = (long *)0x0;
            }
          }
          *in_stack_00000160 = (long)plVar35;
          if (*(byte *)(*plVar24 + 0x130) < bVar13) {
            plVar24 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar13 * 8 + -8) != lVar36) {
            plVar24 = (long *)0x0;
          }
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000160,plVar24)
        ;
        iVar16 = FUN_0377acf0(plVar44,0);
        *(int *)(unaff_x19 + 0x157c) = iVar16;
        if (in_stack_0000169c == 0x3c) {
          in_stack_0000169c = iVar16 + 0xe000;
        }
        else {
          uVar17 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
          *(undefined4 *)(unaff_x19 + 0x1580) = uVar17;
        }
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        fVar60 = *(float *)(unaff_x19 + 0xf4);
        FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        iVar16 = FUN_03776950(&stack0x00001610,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar58 = (float)FUN_03776960(&stack0x00001610,0);
        fVar57 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar57 = 1.0;
        }
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar57 = (fVar60 / (float)iVar16) * fVar58 * fVar57;
        iVar16 = FUN_03776950(*in_stack_00000160 + 0x48,0);
        fVar60 = *(float *)(unaff_x19 + 0xf4);
        if (iVar16 < 1) {
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          iVar16 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
          fStack0000000000000170 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fStack0000000000000170 = 1.0;
          }
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar61 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
          if (plVar44[4] == 0) goto LAB_03793c9c;
          FUN_03776e6c(&stack0x000016a0,plVar44[4],0);
          fVar64 = (float)FUN_03776c9c(&stack0x000015c0,0);
          if (plVar44[4] == 0) goto LAB_03793c9c;
          fVar49 = *(float *)((long)plVar44 + 0x2c);
          fVar50 = (float)FUN_03776ea8(plVar44[4],0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar55 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar66 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
          if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
          fVar52 = *(float *)(unaff_x19 + 0xf0);
          fVar58 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          fVar58 = fVar57 * fVar66 * fVar52 * fVar58;
          fStack0000000000000170 = (fVar60 / (float)iVar16) * fVar48 * fStack0000000000000170;
          fVar60 = fStack0000000000000170 * (fVar61 / fVar64) * fVar49 * fVar50;
          fStack0000000000000170 = fStack0000000000000170 / fVar60;
          fVar55 = fStack0000000000000170 * fVar55;
          fVar57 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
          fStack0000000000000170 = fStack0000000000000170 * fVar57;
        }
        else {
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          iVar16 = FUN_03776950(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
          if (plVar44[4] == 0) goto LAB_03793c9c;
          fVar64 = *(float *)((long)plVar44 + 0x2c);
          fVar61 = in_stack_00000150;
          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
            fVar61 = 1.0;
          }
          fVar49 = (float)FUN_03776ea8(plVar44[4],0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar55 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar50 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
          fVar66 = *(float *)(unaff_x19 + 0xf0);
          fVar58 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
          if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
          fVar58 = fVar57 * fVar50 * fVar66 * fVar58;
          fVar60 = (fVar60 / (float)iVar16) * fVar48 * fVar61 * fVar64 * fVar49;
          fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
        }
        *in_stack_000001a8 = (long)plVar44;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8,plVar44)
        ;
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
        *(undefined1 *)(lVar36 + 0x28) = 2;
        *(float *)(lVar36 + 0x16c) = fVar60;
        *(long *)(lVar36 + 0x48) = *in_stack_00000160;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
        *(long *)(lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *in_stack_000001c8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        uVar15 = *in_stack_000001d0;
        if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        *(undefined4 *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x60) =
             *(undefined4 *)(unaff_x19 + 0x78);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar51;
        in_stack_000001a0 = 0.0;
        goto LAB_0378db90;
      }
      lVar36 = *in_stack_000001e8;
      if (lVar36 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      *in_stack_000001a8 = *(long *)(lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x30);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
      if (*in_stack_000001a8 != 0) goto code_r0x0378d4bc;
      goto LAB_0378d260;
    }
LAB_03790fec:
    if (((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
        (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
       ((fVar60 = *_fStack00000000000000d0, fVar60 < *(float *)(in_stack_000001e0 + 0xb0) &&
        (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))))) {
      fVar58 = *(float *)(in_stack_000001e0 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar58 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar55 = (*(float *)(unaff_x19 + 0x1598) - fVar60) * 0.5;
      if (fVar55 <= DAT_00d38b84) {
        fVar55 = DAT_00d38b84;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar60;
      fVar55 = (fVar60 + fVar55) * 20.0 + 0.5;
      fVar60 = DAT_00d38e60;
      if (fVar55 != INFINITY) {
        fVar60 = (float)(int)fVar55 / 20.0;
      }
      if (fVar58 <= fVar60) {
        fVar60 = fVar58;
      }
      goto LAB_037910ac;
    }
    unaff_x24[0x30] = '\x01';
    if (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)) {
      uVar20 = FUN_0276793c(in_stack_00000070,0);
      uVar21 = FUN_0277fa90(_fStack00000000000000d0,0);
      uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo,uVar20,
                            *(undefined8 *)OVRPlugin_OVRP_1_3_0_TypeInfo,uVar21,0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*unaff_x28);
      }
      FUN_0367a6ec(uVar20,0);
    }
    plVar24 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    plVar44 = (long *)PTR_DAT_03cbded8;
    if ((*in_stack_000001d0 == 0) || ((*in_stack_000001d0 == 1 && (in_stack_0000169c == 3)))) {
      FUN_0379e288(1,in_stack_000001c0,0);
      goto LAB_0378c81c;
    }
    lVar36 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar36 == 0) goto LAB_03793c9c;
    uVar15 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    FUN_03785b74(lVar36 + (long)(int)uVar15 * 0x50 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar16 = *(int *)(in_stack_000001e0 + 0x70);
    fStack0000000000000158 = **(float **)(*plVar44 + 0xb8);
    _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar44 + 0xb8) + 1);
    lVar36 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = _in_stack_00000148;
    fStack0000000000000120 = fStack0000000000000158;
    if (iVar16 < 0x421) {
      if (iVar16 < 0x205) {
        if (iVar16 < 0x109) {
          if ((iVar16 - 0x101U < 8) && ((1 << (ulong)(iVar16 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
            if (lVar36 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar36 + 0x18) < 2) goto thunk_FUN_01ab6c44;
            uVar20 = *(undefined8 *)(lVar36 + 0x30);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar46 = *in_stack_00000050;
              if (lVar46 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar46 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
              fVar60 = *(float *)(lVar46 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
            }
            else {
              fVar60 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar36 + 0x2c);
            fStack0000000000000038 = (0.0 - fVar60) - fStack000000000000003c;
            goto LAB_037917ec;
          }
        }
        else if (iVar16 < 0x121) {
          if ((iVar16 == 0x110) || (iVar16 == 0x120)) goto LAB_0379144c;
        }
        else if ((iVar16 - 0x201U < 4) && (iVar16 - 0x201U != 2)) goto LAB_037916dc;
      }
      else {
        if (iVar16 < 0x403) {
          if (iVar16 < 0x211) {
            if ((iVar16 == 0x208) || (iVar16 == 0x210)) goto LAB_037916dc;
            goto LAB_037917fc;
          }
          if (iVar16 != 0x220) {
            if (iVar16 - 0x401U < 2) goto LAB_03791588;
            goto LAB_037917fc;
          }
LAB_037916dc:
          if (lVar36 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          fStack0000000000000120 = (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar36 + 0x24) +
                            (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar36 = *in_stack_00000050;
            if (lVar36 == 0) goto LAB_03793c9c;
            if (uStack000000000000005c < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + (long)(int)uStack000000000000005c * 0x14;
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
              fStack0000000000000038 =
                   ((fStack000000000000003c + *(float *)(lVar36 + 0x28) + *(float *)(lVar36 + 0x30))
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
          if (iVar16 < 0x409) {
            if (iVar16 != 0x404) {
              bVar10 = iVar16 == 0x408;
              goto LAB_03791574;
            }
          }
          else if (iVar16 != 0x410) {
            bVar10 = iVar16 == 0x420;
LAB_03791574:
            if (!bVar10) goto LAB_037917fc;
          }
LAB_03791588:
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(int *)(lVar36 + 0x18) == 0) goto thunk_FUN_01ab6c44;
          uVar20 = *(undefined8 *)(lVar36 + 0x24);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar46 = *in_stack_00000050;
            if (lVar46 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar46 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
            in_stack_00001698 = *(float *)(lVar46 + (long)(int)uStack000000000000005c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar36 + 0x20);
          fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
        }
LAB_037917ec:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fStack0000000000000038);
      }
    }
    else if (iVar16 < 0x1005) {
      if (iVar16 < 0x809) {
        if ((iVar16 - 0x801U < 8) && ((1 << (ulong)(iVar16 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
          if (lVar36 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar36 + 0x18) != 1) && (*(int *)(lVar36 + 0x18) != 0)) {
            uStack0000000000000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar36 + 0x24) +
                          (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5 + 0.0);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
            goto LAB_037917fc;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
      else if (iVar16 < 0x821) {
        if ((iVar16 == 0x810) || (iVar16 == 0x820)) goto LAB_037913b0;
      }
      else if ((iVar16 - 0x1001U < 4) && (iVar16 - 0x1001U != 2)) goto LAB_03791644;
    }
    else if (iVar16 < 0x2003) {
      if (iVar16 < 0x1011) {
        if ((iVar16 == 0x1008) || (iVar16 == 0x1010)) goto LAB_03791644;
      }
      else {
        if (iVar16 == 0x1020) {
LAB_03791644:
          if (lVar36 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar36 + 0x18) != 1) && (*(int *)(lVar36 + 0x18) != 0)) {
            uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar36 + 0x24) +
                              (float)*(undefined8 *)(lVar36 + 0x30)) * 0.5);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
            fStack0000000000000038 =
                 0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                        *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
            goto LAB_037917ec;
          }
          goto thunk_FUN_01ab6c44;
        }
        if (iVar16 - 0x2001U < 2) goto LAB_037914ec;
      }
    }
    else {
      if (iVar16 < 0x2009) {
        if (iVar16 != 0x2004) {
          iVar19 = 0x2008;
          goto LAB_037914d4;
        }
      }
      else if (iVar16 != 0x2010) {
        iVar19 = 0x2020;
LAB_037914d4:
        if (iVar16 != iVar19) goto LAB_037917fc;
      }
LAB_037914ec:
      if (lVar36 == 0) goto LAB_03793c9c;
      if ((*(int *)(lVar36 + 0x18) == 1) || (*(int *)(lVar36 + 0x18) == 0)) goto thunk_FUN_01ab6c44;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar36 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar36 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar36 + 0x24) + (float)*(undefined8 *)(lVar36 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                   fStack0000000000000038) * 0.5));
      fStack0000000000000120 =
           fStack0000000000000058 + 0.0 +
           (*(float *)(lVar36 + 0x20) + *(float *)(lVar36 + 0x2c)) * 0.5;
    }
LAB_037917fc:
    uVar51 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        );
    }
    FUN_037a1df8(0);
    FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
    fVar60 = DAT_00d38d70;
    uVar15 = *in_stack_000001d0;
    if ((int)uVar15 < 1) {
      iVar16 = 0;
      iStack0000000000000138 = 0;
      goto LAB_03793a5c;
    }
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto LAB_03793c9c;
    fStack0000000000000174 = 0.0;
    _bStack00000000000000d8 = 0.0;
    fStack00000000000000a8 = 0.0;
    plVar24 = (long *)(in_stack_000001c0 + 0x38);
    in_stack_000000e8._4_4_ = fStack0000000000000128;
    fStack00000000000000f0 = 0.0;
    in_stack_000000a0._4_4_ = 0.0;
    uVar34 = (ulong)&stack0x00001670 | 4;
    bVar10 = false;
    fVar55 = 0.0;
    fVar58 = 0.0;
    uVar22 = (ulong)&stack0x000009f0 | 4;
    bVar9 = false;
    bVar11 = false;
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
    uVar33 = 0;
    uVar32 = 1;
    goto LAB_0379194c;
  }
  if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
    fVar58 = 0.0;
    if ((0.0 < fVar55) && (fVar58 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar58 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    if (in_stack_00000108 <
        (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar55)) + fVar58) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar15;
      }
      in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
      in_stack_00001688 = CONCAT44(3,uVar15);
      goto LAB_0378d260;
    }
  }
  if ((((in_stack_0000169c - 0x2007 < 0x23) &&
       ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
      (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
    if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
    if (in_stack_0000169c != 0x2060) {
      lVar36 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar36 != 0) {
        if (*(uint *)(unaff_x19 + 0x340) < *(uint *)(lVar36 + 0x18)) {
          lVar36 = lVar36 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
          *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
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
    uVar22 = FUN_026b97f8(in_stack_0000169c,0);
    in_x12 = 0x60;
    if ((uVar22 & 1) != 0) goto LAB_0378f700;
  }
LAB_0378f760:
  if (in_stack_0000169c == 0xa0) {
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar36 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar36 = lVar36 + (int)*(uint *)(unaff_x19 + 0x340) * in_x12;
    *(int *)(lVar36 + 0x20) = *(int *)(lVar36 + 0x20) + 1;
  }
LAB_0378f884:
  bVar10 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar10 && unaff_w23 == 1) {
    bVar10 = in_stack_0000169c == 0x2d;
  }
  if (bVar10) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar58 = *(float *)(unaff_x19 + 0xf4);
    iVar18 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar57 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar36 = *(long *)(unaff_x19 + 0x1a00);
    fVar55 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar55 = 1.0;
    }
    if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_03793c9c;
    fVar61 = *(float *)(unaff_x19 + 0xf0);
    fVar49 = *(float *)(lVar36 + 0x2c);
    fVar48 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
    fVar64 = *_iStack0000000000000138;
    fVar48 = fVar61 * (fVar58 / (float)iVar18) * fVar57 * fVar55 * fVar49 * fVar48;
    fVar58 = *_fStack0000000000000130;
    if ((in_stack_0000169c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar36 = *in_stack_000001e8;
      if (lVar36 == 0) goto LAB_03793c9c;
      uVar15 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar55 = *(float *)(lVar36 + (long)(int)uVar15 * (long)iVar19 + 0x68);
      iVar18 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar61 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar36 = *(long *)(unaff_x19 + 0x1a00);
      fVar57 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar57 = 1.0;
      }
      if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_03793c9c;
      fVar49 = *(float *)(unaff_x19 + 0xf0);
      fVar50 = *(float *)(lVar36 + 0x2c);
      fVar48 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
      lVar36 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar36 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar64 = *(float *)(lVar36 + 100);
      fVar58 = *(float *)(lVar36 + 0x68);
      fVar48 = fVar49 * (fVar55 / (float)iVar18) * fVar61 * fVar57 * fVar50 * fVar48;
    }
    fVar57 = *(float *)(unaff_x19 + 0x2f4);
    fVar55 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar36 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar36 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar36,0);
      fVar55 = (float)FUN_03776cb4(&stack0x000015c0,0);
    }
    in_x12 = 0x60;
    fVar61 = *(float *)(unaff_x19 + 0x35c);
    fVar58 = (fStack000000000000012c - fVar64) - fVar58;
    bVar10 = true;
    if ((fVar61 <= fVar58) && (bVar10 = false, !NAN(fVar61))) {
      bVar10 = fVar61 == -1.0;
    }
    if (!bVar10) {
      fVar58 = fVar61;
    }
    fVar61 = 1.0;
    if (uVar33 != 0) {
      fVar61 = DAT_00d38acc;
    }
    if (ABS(fVar57) + fVar48 * fVar55 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar61 * fVar58) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,in_stack_00000068,0x398);
      FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
      in_x12 = 0x60;
    }
  }
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  uVar15 = *(uint *)(unaff_x19 + 0x340);
  lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(uint *)(lVar36 + 0x6c) = uVar15;
  *(undefined4 *)(lVar36 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar36 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar36 + (int)uVar15 * in_x12 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  else {
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar36 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar36 + (int)uVar15 * in_x12 + 0x24) == 1) goto LAB_0378fbcc;
  }
  if (in_stack_0000169c != 0x200b) {
    if (in_stack_0000169c == 9) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar58 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      bVar13 = FUN_03779d4c(*in_stack_000001c8,0);
      fVar55 = *(float *)(unaff_x19 + 0x2f4);
      fVar57 = fVar60 * fVar58 * (float)bVar13;
      fVar58 = fVar57 * (float)(int)(fVar55 / fVar57);
      if (fVar58 <= fVar55) {
        fVar58 = fVar55 + fVar57;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar58;
      in_x12 = 0x60;
    }
    else {
      fVar58 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar58 == 0.0) {
        fVar55 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar58 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar48 = *(float *)(unaff_x19 + 0x19a8);
          fVar57 = (float)FUN_03778e7c(&stack0x000015e0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            fVar61 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
            fVar55 = fVar55 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              (*(float *)(unaff_x19 + 0x2ec) +
                              fVar60 * (fVar58 * fVar48 + fVar57) +
                              fStack0000000000000158 *
                              (in_stack_00000148 + in_stack_00000188 + fVar61));
            goto UnityEngine_UIElements_WheelEvent___ctor;
          }
          goto LAB_03793c9c;
        }
        fVar58 = (float)FUN_03778e7c(&stack0x000015e0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar57 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        in_x12 = 0x60;
        fVar55 = fVar55 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          fVar60 * fVar58 +
                          fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar57))
        ;
        *(float *)(unaff_x19 + 0x2f4) = fVar55;
        if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar55 = fVar55 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar55 = *(float *)(unaff_x19 + 0x2f4);
        fVar57 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar55 = fVar55 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar58 - in_stack_000000e8._4_4_) +
                          fStack0000000000000158 * (in_stack_00000188 + fVar57));
UnityEngine_UIElements_WheelEvent___ctor:
        in_x12 = 0x60;
        *(float *)(unaff_x19 + 0x2f4) = fVar55;
        if ((unaff_w25 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar55 = fVar55 + fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      in_x12 = 0x60;
      *(float *)(unaff_x19 + 0x2f4) = fVar55;
    }
  }
FUN_0378fd94:
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar15 = *in_stack_000001d0;
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000169c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
     (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000169c - 0x2028)))) {
    lVar36 = *in_stack_00000050;
    if (lVar36 == 0) goto LAB_03793c9c;
    uVar33 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar36 + 0x18) < (int)(uVar33 + 1)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(in_stack_00000050,uVar33 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
      lVar36 = *in_stack_00000050;
      if (lVar36 == 0) goto LAB_03793c9c;
      uVar33 = *(uint *)(unaff_x19 + 0x350);
      in_x12 = 0x60;
    }
    if (*(uint *)(lVar36 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
    lVar46 = lVar36 + (long)(int)uVar33 * 0x14;
    *(undefined4 *)(lVar46 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar58 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar46 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar58 = *(float *)(lVar46 + 0x30);
    }
    *(float *)(lVar46 + 0x30) = fVar58;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar36 + (long)(int)uVar33 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar15 = *in_stack_000001d0;
    *(uint *)(lVar36 + (long)(int)uVar33 * 0x14 + 0x24) = uVar15;
  }
  if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000169c - 0x2028 < 2 ||
      (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (uVar15 == uStack00000000000000dc)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar58 = *(float *)(unaff_x19 + 0x338);
      fVar55 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        in_x12 = 0x60;
      }
      fVar58 = fVar58 - fVar55;
      if (((fStack00000000000000a8 < ABS(fVar58)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar51 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar17 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_037a5574(fVar58,uVar51,uVar17,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar58;
        *(float *)(unaff_x19 + 0x2e0) = fVar58 + *(float *)(unaff_x19 + 0x2e0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        in_x12 = 0x60;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(in_stack_00000068,&stack0x000016a0,0x398);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020,0);
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
    fVar55 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar57 = *(float *)(unaff_x19 + 0x33c) - fVar55;
    fVar58 = *(float *)(unaff_x19 + 0x378);
    if (fVar57 <= *(float *)(unaff_x19 + 0x378)) {
      fVar58 = fVar57;
    }
    *(float *)(unaff_x19 + 0x378) = fVar58;
    fVar48 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001694 == '\0') {
      in_stack_00001698 = fVar58;
    }
    if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
        (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001694 = '\x01';
    }
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar36 == 0) goto LAB_03793c9c;
    uVar15 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    iVar18 = *(int *)(unaff_x19 + 0x328);
    lVar46 = lVar36 + (int)uVar15 * in_x12;
    *(int *)(lVar46 + 0x38) = iVar18;
    uVar33 = *(uint *)(unaff_x19 + 0x328);
    if (iVar18 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar33 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar33;
    *(uint *)(lVar46 + 0x3c) = uVar33;
    iVar2 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar2;
    *(int *)(lVar46 + 0x40) = iVar2;
    iVar1 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar33 <= *(int *)(unaff_x19 + 0x334)) {
      iVar1 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar1;
    *(int *)(lVar46 + 0x44) = iVar1;
    *(int *)(lVar46 + 0x24) = (iVar2 - iVar18) + 1;
    *(undefined4 *)(lVar46 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar46 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
    uVar51 = *(undefined4 *)(lVar46 + (long)(int)uVar33 * (long)iVar19 + 0x124);
    lVar36 = lVar36 + (long)(int)uVar15 * 0x60;
    *(float *)(lVar36 + 0x74) = fVar57;
    *(undefined4 *)(lVar36 + 0x70) = uVar51;
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar36 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    uVar51 = *(undefined4 *)(lVar46 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
    fVar48 = fVar48 - fVar55;
    lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar36 + 0x7c) = fVar48;
    *(undefined4 *)(lVar36 + 0x78) = uVar51;
    lVar36 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar36 == 0) goto LAB_03793c9c;
    uVar15 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = lVar36 + (long)(int)uVar15 * 0x60;
    *(float *)(lVar46 + 0x48) = *(float *)(lVar46 + 0x78) - fVar60 * in_stack_000001a0;
    *(float *)(lVar46 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar46 + 0x24) == 1) {
      *(undefined4 *)(lVar36 + (long)(int)uVar15 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar58 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto LAB_03793c9c;
    lVar46 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    lVar23 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar15 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar36 + lVar46 * unaff_x27 + 0x1a0) == '\0') &&
        (lVar46 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar33 = (uint)*(undefined8 *)(lVar23 + 0x18), uVar33 <= uVar15)) goto thunk_FUN_01ab6c44;
    fVar55 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) +
             fStack0000000000000158 * (in_stack_00000148 + in_stack_00000188 + fVar58));
    fVar58 = -fVar55;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar58 = fVar55;
    }
    *(float *)(lVar23 + (long)(int)uVar15 * 0x60 + 0x5c) =
         *(float *)(lVar36 + lVar46 * unaff_x27 + 0x164) + fVar58;
    if (uVar33 <= uVar15) goto thunk_FUN_01ab6c44;
    lVar23 = lVar23 + (long)(int)uVar15 * 0x60;
    *(float *)(lVar23 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar23 + 0x58) = fVar57;
    *(float *)(lVar23 + 0x4c) = in_stack_000000a0._4_4_ + (fVar48 - fVar57);
    *(float *)(lVar23 + 0x50) = fVar48;
    if (0x2c < (int)in_stack_0000169c) {
      if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d)) goto LAB_03790360;
      goto LAB_03790574;
    }
    if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
      FUN_03796df8();
      uVar15 = *(uint *)(unaff_x19 + 0x324);
      iVar16 = *(int *)(unaff_x19 + 0x340) + 1;
      *(int *)(unaff_x19 + 0x340) = iVar16;
      *(uint *)(unaff_x19 + 0x328) = uVar15 + 1;
      in_stack_000001d0[8] = 0;
      in_stack_000001d0[9] = 0;
      if (*(long *)(in_stack_000001c0 + 0x48) != 0) {
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar16) {
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a56f4(iVar16,in_stack_000001c0,0);
          uVar15 = *in_stack_000001d0;
        }
        lVar36 = *in_stack_000001e8;
        if (lVar36 != 0) {
          if (uVar15 < *(uint *)(lVar36 + 0x18)) {
            fVar58 = *(float *)(lVar36 + (long)(int)uVar15 * (long)iVar19 + 0x158);
            if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
              if ((in_stack_0000169c == 0x2029) || (fVar55 = 0.0, in_stack_0000169c == 10)) {
                fVar55 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar27 = 0;
              fVar55 = fVar58 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                       fStack0000000000000088 *
                       (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                       fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar55) +
                       *(float *)(unaff_x19 + 0x2e0);
            }
            else {
              if ((in_stack_0000169c == 0x2029) || (fVar55 = 0.0, in_stack_0000169c == 10)) {
                fVar55 = *(float *)(in_stack_000001e0 + 0xcc);
              }
              uVar27 = 1;
              fVar55 = *(float *)(unaff_x19 + 0x2e0) +
                       *(float *)(unaff_x19 + 0x2e4) +
                       fStack0000000000000158 * (*(float *)(in_stack_000001e0 + 200) + fVar55);
            }
            *(float *)(unaff_x19 + 0x2e0) = fVar55;
            *(float *)(unaff_x19 + 0x15ac) = fVar58;
            *(undefined1 *)(unaff_x19 + 0x2e8) = uVar27;
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
    lVar36 = *in_stack_000001e8;
    if (lVar36 == 0) goto LAB_03793c9c;
  }
LAB_03790574:
  uVar15 = *in_stack_000001d0;
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  if (*(char *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x1a0) != '\0') {
    lVar36 = lVar36 + (long)(int)uVar15 * unaff_x27;
    uVar22 = *(ulong *)(unaff_x19 + 0x360);
    uVar34 = *(ulong *)(lVar36 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar22 ^ (uVar22 ^ uVar34) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar34 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar34));
    uVar22 = *(ulong *)(unaff_x19 + 0x368);
    uVar34 = *(ulong *)(lVar36 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar22 ^ (uVar22 ^ uVar34) &
                  ~CONCAT44(-(uint)((float)(uVar34 >> 0x20) < (float)(uVar22 >> 0x20)),
                            -(uint)((float)uVar34 < (float)uVar22));
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
        uVar22 = FUN_037a5f20(in_stack_0000169c,0);
        if ((uVar22 & 1) == 0) {
LAB_037906cc:
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_037a5f90(in_stack_0000169c,0);
          if ((uVar22 & 1) == 0) goto LAB_037907cc;
          if (in_stack_00000060 == 0) goto LAB_03793c9c;
        }
        else {
          if ((in_stack_00000060 == 0) || (lVar36 = FUN_037a8a5c(in_stack_00000060,0), lVar36 == 0))
          goto LAB_03793c9c;
          if (*(char *)(lVar36 + 0x28) != '\0') goto LAB_037906cc;
        }
        lVar36 = FUN_037a8a5c(in_stack_00000060,0);
        if ((lVar36 == 0) || (lVar36 = FUN_037aad04(lVar36,0), lVar36 == 0)) goto LAB_03793c9c;
        uVar51 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
        in_stack_000016a0 = CONCAT44(uVar51,in_stack_0000169c);
        uVar22 = FUN_021e4dc4(lVar36,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
        if ((int)*in_stack_000001d0 < (int)uStack00000000000000dc) {
          lVar36 = FUN_037a8a5c(in_stack_00000060,0);
          if (lVar36 == 0) goto LAB_03793c9c;
          lVar36 = FUN_037aaf28(lVar36,0);
          lVar46 = *in_stack_000001e8;
          if (lVar46 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar46 + 0x18) <= *in_stack_000001d0 + 1) goto thunk_FUN_01ab6c44;
          if (lVar36 == 0) goto LAB_03793c9c;
          in_stack_000016a0 =
               CONCAT44(uVar51,(uint)*(ushort *)
                                      (lVar46 + (long)(int)(*in_stack_000001d0 + 1) * (long)iVar19 +
                                      0x20));
          uVar34 = FUN_021e4dc4(lVar36,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
          if ((uVar22 & 1) != 0) goto LAB_037909e8;
          if ((uVar34 & 1) == 0) goto LAB_03790cd4;
          if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
        }
        else {
          if ((uVar22 & 1) == 0) {
LAB_03790cd4:
            FUN_03796df8();
            bStack00000000000000d8 = 0;
            goto LAB_03790864;
          }
LAB_037909e8:
          if ((int)unaff_x20 != iVar16 || ((bStack00000000000000d8 ^ 0xff) & 1) != 0)
          goto LAB_03790864;
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
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_000001c8 = *(long *)(lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *in_stack_00000190 = *(long *)(lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x58);
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar33 = *in_stack_000001d0;
  uVar15 = *(uint *)(lVar36 + 0x18);
  if (uVar15 <= uVar33) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar36 + (long)(int)uVar33 * unaff_x27 + 0x60)
  ;
  if (unaff_w23 == 0) {
LAB_0378d570:
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar57 = *(float *)(unaff_x19 + 0xf4);
    iVar16 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
    lVar36 = *(long *)(unaff_x19 + 0x68);
  }
  else {
    lVar46 = *(long *)(unaff_x19 + 0x20);
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
    if ((*(int *)(lVar46 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10) ||
       (uVar33 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
    if (uVar15 <= uVar33 - 1) goto thunk_FUN_01ab6c44;
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar57 = *(float *)(lVar36 + (long)(int)(uVar33 - 1) * (long)iVar19 + 0x68);
    iVar16 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
    lVar36 = *in_stack_000001c8;
  }
  if (lVar36 == 0) goto LAB_03793c9c;
  fVar61 = (float)FUN_03776960(lVar36 + 0xb0,0);
  fVar48 = in_stack_00000150;
  if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
    fVar48 = 1.0;
  }
  fStack0000000000000170 = 0.0;
  fVar55 = 0.0;
  if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar55 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
  }
  lVar36 = *(long *)(unaff_x19 + 0x1588);
  if ((lVar36 == 0) || (*(long *)(lVar36 + 0x20) == 0)) goto LAB_03793c9c;
  fVar64 = *(float *)(unaff_x19 + 0xf0);
  fVar49 = *(float *)(lVar36 + 0x2c);
  fVar60 = (float)FUN_03776ea8(*(long *)(lVar36 + 0x20),0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar50 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
  fVar66 = *(float *)(unaff_x19 + 0xf0);
  fVar58 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar15 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  lVar46 = lVar36 + (long)(int)uVar15 * unaff_x27;
  fVar48 = ((fStack000000000000017c * fVar57) / (float)iVar16) * fVar61 * fVar48;
  fVar60 = fVar48 * fVar64 * fVar49 * fVar60;
  *(undefined1 *)(lVar46 + 0x28) = 1;
  *(float *)(lVar46 + 0x16c) = fVar60;
  in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
  fVar58 = fVar48 * fVar50 * fVar66 * fVar58;
LAB_0378db90:
  unaff_s13 = fVar60;
  if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
    unaff_s13 = 0.0;
  }
LAB_0378dba8:
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)uVar15 * (long)iVar19;
  *(short *)(lVar36 + 0x20) = (short)in_stack_0000169c;
  *(undefined4 *)(lVar36 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar36 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar20 = in_stack_00000100[1];
  in_stack_000016a0 = *in_stack_00000100;
  if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar36 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
  *(undefined8 *)(lVar36 + 400) = uVar20;
  *(undefined8 *)(lVar36 + 0x188) = in_stack_000016a0;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
  lVar46 = *(long *)(lVar36 + 0x38);
  *(undefined4 *)(lVar36 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar46 == 0) &&
     ((*in_stack_000001a8 == 0 || (lVar46 = *(long *)(*in_stack_000001a8 + 0x20), lVar46 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar46,0);
  if (in_stack_0000169c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_026b63d8(in_stack_0000169c,0);
    unaff_w25 = uVar15 & 1;
  }
  else {
    unaff_w25 = 0;
  }
  uVar51 = 0;
  in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
    uVar15 = *in_stack_000001d0;
    uVar33 = *(uint *)(*in_stack_000001a8 + 0x28);
    if ((int)uVar15 < (int)uStack00000000000000dc) {
      lVar36 = *in_stack_000001e8;
      if (lVar36 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar36 + 0x18) <= uVar15 + 1) goto thunk_FUN_01ab6c44;
      lVar36 = *(long *)(lVar36 + (long)(int)(uVar15 + 1) * (long)iVar19 + 0x30);
      if ((((lVar36 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar46 = *(long *)(*in_stack_000001c8 + 0x170), lVar46 == 0)) ||
         (lVar46 = *(long *)(lVar46 + 0x40), lVar46 == 0)) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar33 | *(int *)(lVar36 + 0x28) << 0x10
                   );
      uVar22 = FUN_0219f8b8(lVar46,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar22 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar51 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar22 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar22 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
      uVar15 = *in_stack_000001d0;
    }
    if (0 < (int)uVar15) {
      lVar36 = *in_stack_000001e8;
      if (lVar36 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar36 + 0x18) <= uVar15 - 1) goto thunk_FUN_01ab6c44;
      lVar36 = *(long *)(lVar36 + (ulong)(uVar15 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
      if (((lVar36 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar46 = *(long *)(*in_stack_000001c8 + 0x170), lVar46 == 0 ||
          (lVar46 = *(long *)(lVar46 + 0x40), lVar46 == 0)))) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                    *(uint *)(lVar36 + 0x28) | uVar33 << 0x10);
      uVar22 = FUN_0219f8b8(lVar46,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar22 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar51,0);
        uVar22 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar22 & 0x100) != 0) {
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar15 = *in_stack_000001d0;
  uVar51 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x160) = uVar51;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar22 = FUN_037a5c04(in_stack_0000169c,0);
  uVar15 = *in_stack_000001d0;
  unaff_x22 = uVar22 & 0xffffffff;
  if ((uVar22 & 1) == 0) {
    if ((uVar22 & 1) == 0 && 0 < (int)uVar15) {
      uVar33 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar33 == 0x80000000) || (uVar33 != uVar15 - 1)) {
        do {
          uVar33 = uVar15 - 1;
          uVar51 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
          if (((int)uVar15 < 1) || (uVar33 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar15 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar15 == 0x80000000) goto LAB_0378dfc4;
            lVar36 = *in_stack_000001e8;
            if (lVar36 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
            lVar36 = *(long *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x30);
            if ((lVar36 == 0) || (lVar36 = FUN_03787a68(lVar36,0), lVar36 == 0)) goto LAB_03793c9c;
            uVar15 = FUN_03776e5c(lVar36,0);
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            iVar16 = FUN_0377acf0(*in_stack_000001a8,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar36 = FUN_03779cb4(*in_stack_000001c8,0), lVar36 == 0)) ||
               (*(long *)(lVar36 + 0x48) == 0)) goto LAB_03793c9c;
            in_stack_000016a0 = CONCAT44(uVar51,uVar15 | iVar16 << 0x10);
            uVar22 = FUN_0219f8b8(*(long *)(lVar36 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            if ((uVar22 & 1) == 0) goto LAB_0378dfc4;
            lVar36 = *in_stack_000001e8;
            if (lVar36 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar57 = *(float *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar64 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar48 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar61 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar57 - fVar64) / unaff_s13 + fVar48) - fVar61,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar57 = (float)FUN_03779390(&stack0x00001550,0);
            puVar25 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
          lVar36 = *(long *)(lVar36 + (ulong)uVar33 * (unaff_x27 & 0xffffffff) + 0x30);
          if ((lVar36 == 0) || (lVar36 = FUN_03787a68(lVar36,0), lVar36 == 0)) goto LAB_03793c9c;
          uVar15 = FUN_03776e5c(lVar36,0);
          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
          iVar16 = FUN_0377acf0(*in_stack_000001a8,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar36 = FUN_03779cb4(*in_stack_000001c8,0), lVar36 == 0)) ||
             (*(long *)(lVar36 + 0x50) == 0)) goto LAB_03793c9c;
          in_stack_000016a0 = CONCAT44(uVar51,uVar15 | iVar16 << 0x10);
          uVar22 = FUN_0219f8b8(*(long *)(lVar36 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          uVar15 = uVar33;
        } while ((uVar22 & 1) == 0);
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        fVar64 = *(float *)(unaff_x19 + 0x2e0);
        fVar49 = *(float *)(unaff_x19 + 0x180);
        lVar36 = lVar36 + uVar33 * unaff_x27;
        fVar57 = *(float *)(unaff_x19 + 0x2f4);
        fVar50 = *(float *)(lVar36 + 0x148);
        fVar66 = *(float *)(lVar36 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar48 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar61 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar50 - fVar57) / unaff_s13 + fVar48) - fVar61,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar57 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar66 - ((fVar58 - fVar64) + fVar49)) / unaff_s13 + fVar57) - fVar48,
                     &stack0x000015e0,0);
        in_stack_00000188 = 0.0;
      }
      else {
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar36 = *(long *)(lVar36 + (long)(int)uVar33 * unaff_x27 + 0x30);
        if ((lVar36 == 0) || (lVar36 = FUN_03787a68(lVar36,0), lVar36 == 0)) goto LAB_03793c9c;
        uVar15 = FUN_03776e5c(lVar36,0);
        if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
        iVar16 = FUN_0377acf0(*in_stack_000001a8,0);
        if (((*in_stack_000001c8 == 0) || (lVar36 = FUN_03779cb4(*in_stack_000001c8,0), lVar36 == 0)
            ) || (*(long *)(lVar36 + 0x48) == 0)) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar15 | iVar16 << 0x10);
        uVar22 = FUN_0219f8b8(*(long *)(lVar36 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        if ((uVar22 & 1) != 0) {
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar57 = *(float *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148)
          ;
          fVar64 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar48 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar61 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar57 - fVar64) / unaff_s13 + fVar48) - fVar61,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar57 = (float)FUN_03779390(&stack0x00001550,0);
          puVar25 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar25,0);
          fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar57 - fVar48,&stack0x000015e0,0);
          in_stack_00000188 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar15;
  }
LAB_0378dfc4:
  fVar57 = (float)FUN_03778e6c(&stack0x000015e0,0);
  param_3 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar61 = *(float *)(unaff_x19 + 0x2f4);
    fVar48 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar61 = fVar61 - unaff_s13 * fVar48 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar61;
    if ((unaff_w25 != 0) || (in_stack_0000169c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) =
           fVar61 - fStack0000000000000158 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar48 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar48 == 0.0) {
    in_stack_000000e8._4_4_ = 0.0;
  }
  else {
    fVar61 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar64 = (float)FUN_03776ca4(&stack0x000015f0,0);
    in_stack_000000e8._4_4_ =
         (1.0 - *(float *)(unaff_x19 + 0x1594)) *
         (fVar48 * 0.5 - unaff_s13 * (fVar61 * 0.5 + fVar64));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + in_stack_000000e8._4_4_;
  }
  uVar15 = 0;
  if ((cVar28 == '\0') && (*unaff_x24 == '\x01')) {
    uVar15 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar36 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar22 = FUN_036cee6c(lVar36,0,0);
  puVar8 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  if (uVar15 == 0) {
    in_stack_00000148 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar36 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar36 == 0) goto LAB_03793c9c;
      uVar22 = FUN_03699d3c(lVar36,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x6c),0);
      if ((uVar22 & 1) != 0) {
        lVar36 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar36 == 0) goto LAB_03793c9c;
        uVar22 = FUN_03699d3c(lVar36,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe4),0);
        if ((uVar22 & 1) != 0) {
          lVar36 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar36 == 0) goto LAB_03793c9c;
          fVar48 = (float)FUN_0369e060(lVar36,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x6c),0);
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto LAB_03793c9c;
          fVar64 = *(float *)(*in_stack_000001c8 + 0x188);
          fVar61 = (float)FUN_0369e060(*in_stack_00000190,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe4),0);
          fVar61 = fVar61 * fVar48 * fVar64 * 0.25;
          if (fVar48 < in_stack_000001a0 + fVar61) {
            in_stack_000001a0 = fVar48 - fVar61;
          }
          goto LAB_0378e344;
        }
      }
    }
    fVar61 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
  }
  else {
    fVar61 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
    if ((uVar22 & 1) != 0) {
      lVar36 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar36 == 0) goto LAB_03793c9c;
      uVar22 = FUN_03699d3c(lVar36,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x6c),0);
      unaff_x28 = (long *)PTR_DAT_03cbe438;
      if ((uVar22 & 1) != 0) {
        lVar36 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar36 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_0369e060(lVar36,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar64 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar61 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe4),0);
        fVar61 = fVar48 * fVar64 * 0.25 * fVar61;
        if (fVar48 < in_stack_000001a0 + fVar61) {
          in_stack_000001a0 = fVar48 - fVar61;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    in_stack_00000148 = (float)FUN_03779d2c(*in_stack_000001c8,0);
  }
LAB_0378e344:
  fVar50 = *(float *)(unaff_x19 + 0x2f4);
  fVar48 = (float)FUN_03776ca4(&stack0x000015f0,0);
  fVar49 = *(float *)(unaff_x19 + 0x19a8);
  fVar64 = (float)FUN_03778e5c(&stack0x000015e0,0);
  fVar50 = fVar50 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    unaff_s13 * (fVar64 + ((fVar48 * fVar49 - in_stack_000001a0) - fVar61));
  fVar48 = (float)FUN_03776cac(&stack0x000015f0,0);
  fVar64 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fStack00000000000001bc =
       *(float *)(unaff_x19 + 0x180) +
       ((fVar58 + unaff_s13 * (in_stack_000001a0 + fVar48 + fVar64)) - *(float *)(unaff_x19 + 0x2e0)
       );
  fVar48 = (float)FUN_03776c9c(&stack0x000015f0,0);
  fVar49 = fStack00000000000001bc - unaff_s13 * (in_stack_000001a0 + in_stack_000001a0 + fVar48);
  fVar48 = (float)FUN_03776c94(&stack0x000015f0,0);
  fVar66 = fVar50 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    unaff_s13 *
                    (fVar61 + fVar61 +
                    in_stack_000001a0 + in_stack_000001a0 + fVar48 * *(float *)(unaff_x19 + 0x19a8))
  ;
  fVar48 = fVar50;
  fVar64 = fVar66;
  if (((cVar28 == '\0') && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    iVar16 = *(int *)(unaff_x19 + 0x19a4);
    fVar48 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar64 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar68 = *(float *)(unaff_x19 + 0xf0);
    fVar53 = *(float *)(unaff_x19 + 0x180);
    fVar63 = (float)iVar16 * fStack00000000000000a8;
    fVar52 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    fVar52 = fVar52 * fVar68 * (fVar48 - (fVar64 + fVar53)) * 0.5;
    fVar48 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar64 = fVar63 * unaff_s13 * ((fVar61 + in_stack_000001a0 + fVar48) - fVar52);
    fVar68 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar53 = (float)FUN_03776c9c(&stack0x000015f0,0);
    fStack00000000000001bc = fStack00000000000001bc + 0.0;
    fVar48 = fVar50 + fVar64;
    fVar49 = fVar49 + 0.0;
    fVar64 = fVar66 + fVar64;
    fVar63 = fVar63 * unaff_s13 * ((((fVar68 - fVar53) - in_stack_000001a0) - fVar61) - fVar52);
    fVar50 = fVar50 + fVar63;
    fVar66 = fVar66 + fVar63;
  }
  uVar20 = *in_stack_000000f8;
  uVar21 = *_fStack00000000000000f0;
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar54 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  uVar56 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  fVar61 = 0.0;
  if (DAT_00d38b04 <
      (float)((ulong)uVar21 >> 0x20) * (float)((ulong)uVar56 >> 0x20) +
      (float)uVar21 * (float)uVar56 +
      (float)uVar20 * (float)uVar54 +
      (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar54 >> 0x20)) {
    fVar62 = 0.0;
    fVar63 = 0.0;
    fVar53 = 0.0;
    fVar52 = fStack00000000000001bc;
    fVar68 = fVar49;
  }
  else {
    FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar65 = (fVar64 + fVar50) * 0.5;
    fVar67 = (fVar49 + fStack00000000000001bc) * 0.5;
    fStack00000000000001bc = fStack00000000000001bc - fVar67;
    fVar53 = 0.0;
    fVar52 = fStack00000000000001bc;
    fVar48 = (float)FUN_036bdd2c(fVar48 - fVar65,&stack0x000014d0,0);
    fVar48 = fVar65 + fVar48;
    fVar53 = fVar53 + 0.0;
    fVar68 = fVar49 - fVar67;
    fVar63 = 0.0;
    fVar49 = fVar68;
    fVar50 = (float)FUN_036bdd2c(fVar50 - fVar65,&stack0x000014d0,0);
    fVar50 = fVar65 + fVar50;
    fVar49 = fVar67 + fVar49;
    fVar63 = fVar63 + 0.0;
    fVar62 = 0.0;
    fVar64 = (float)FUN_036bdd2c(fVar64 - fVar65,&stack0x000014d0,0);
    fVar64 = fVar65 + fVar64;
    fStack00000000000001bc = fVar67 + fStack00000000000001bc;
    fVar62 = fVar62 + 0.0;
    fVar61 = 0.0;
    fVar66 = (float)FUN_036bdd2c(fVar66 - fVar65,&stack0x000014d0,0);
    fVar66 = fVar65 + fVar66;
    fVar61 = fVar61 + 0.0;
    fVar52 = fVar67 + fVar52;
    fVar68 = fVar67 + fVar68;
  }
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar36 + 0x124) = fVar50;
  *(float *)(lVar36 + 0x128) = fVar49;
  *(float *)(lVar36 + 300) = fVar63;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar36 + 0x118) = fVar48;
  *(float *)(lVar36 + 0x11c) = fVar52;
  *(float *)(lVar36 + 0x120) = fVar53;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar36 + 0x138) = fVar62;
  *(float *)(lVar36 + 0x130) = fVar64;
  *(float *)(lVar36 + 0x134) = fStack00000000000001bc;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar36 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  lVar36 = lVar36 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(float *)(lVar36 + 0x13c) = fVar66;
  *(float *)(lVar36 + 0x140) = fVar68;
  *(float *)(lVar36 + 0x144) = fVar61;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar15 = *in_stack_000001d0;
  fVar61 = *(float *)(unaff_x19 + 0x2f4);
  fVar48 = (float)FUN_03778e5c(&stack0x000015e0,0);
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  *(float *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x148) = fVar61 + unaff_s13 * fVar48;
  lVar36 = *in_stack_000001e8;
  if (lVar36 == 0) goto LAB_03793c9c;
  uVar15 = *in_stack_000001d0;
  fVar66 = *(float *)(unaff_x19 + 0x2e0);
  fVar61 = *(float *)(unaff_x19 + 0x180);
  fVar48 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
  *(float *)(lVar36 + (long)(int)uVar15 * unaff_x27 + 0x150) =
       (fVar58 - fVar66) + fVar61 + unaff_s13 * fVar48;
  in_x12 = 0x60;
  param_1 = *in_stack_000001e8;
  if (param_1 == 0) goto LAB_03793c9c;
  unaff_x20 = (long)(int)*in_stack_000001d0;
  if (*(uint *)(param_1 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  *(float *)(param_1 + unaff_x20 * unaff_x27 + 0x168) = (fVar64 - fVar50) / (fVar52 - fVar49);
  param_2 = unaff_s13 * (fVar55 + fVar57);
  param_3 = fStack0000000000000170 + param_3;
  unaff_x29 = in_stack_000001d0;
  fStack000000000000015c = fVar60;
  if (*unaff_x24 == '\x01') goto code_r0x0378ecd0;
  param_3 = unaff_s13 * param_3;
  fVar60 = unaff_s13;
  goto LAB_0378ece8;
LAB_0379194c:
  do {
    uVar15 = uVar32 - 1;
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar47 = (long)(int)uVar15;
    lVar46 = lVar36 + lVar47 * 0x188;
    lVar23 = *(long *)(lVar46 + 0x40);
    uVar4 = *(ushort *)(lVar46 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar13 = FUN_026b63d8(uVar4,0);
    if (*(uint *)(lVar36 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = *(long *)(in_stack_000001c0 + 0x48);
    uVar45 = (uint)uVar4;
    if (lVar46 == 0) goto LAB_03793c9c;
    uVar3 = *(uint *)(lVar36 + lVar47 * 0x188 + 0x6c);
    if (*(uint *)(lVar46 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
    lVar37 = (long)(int)uVar3;
    lVar46 = lVar46 + lVar37 * 0x60;
    uVar6 = *(uint *)(lVar46 + 0x40);
    uVar43 = *(uint *)(lVar46 + 0x6c);
    iVar18 = *(int *)(lVar46 + 0x20);
    iVar16 = *(int *)(lVar46 + 0x28);
    iVar19 = *(int *)(lVar46 + 0x2c);
    uVar7 = *(uint *)(lVar46 + 0x44);
    lVar38 = (long)(int)uVar7;
    fVar64 = *(float *)(lVar46 + 0x50);
    fVar50 = *(float *)(lVar46 + 0x58);
    fVar57 = *(float *)(lVar46 + 0x5c);
    fVar48 = *(float *)(lVar46 + 0x60);
    fVar52 = *(float *)(lVar46 + 100);
    fVar66 = *(float *)(lVar46 + 0x70);
    fVar68 = *(float *)(lVar46 + 0x74);
    fVar61 = *(float *)(lVar46 + 0x78);
    fVar49 = *(float *)(lVar46 + 0x7c);
    if ((int)uVar43 < 0x421) {
      if ((int)uVar43 < 0x209) {
        if ((int)uVar43 < 0x111) {
          switch(uVar43) {
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
            if (uVar43 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar43) {
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
            if (uVar43 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar43 < 0x405) {
        if ((int)uVar43 < 0x401) {
          if (uVar43 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar43 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar43 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar43 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar43 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar43 == 0x408) || (uVar43 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar43 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar43) {
      if ((int)uVar43 < 0x2005) {
        if (0x2000 < (int)uVar43) {
          if (uVar43 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar43 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar43 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar43 != 0x1010) {
          uVar29 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar43 != 0x2008) && (uVar43 != 0x2010)) {
        uVar29 = 0x2020;
LAB_03791bc8:
        if (uVar43 != uVar29) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar57 = fVar66 + fVar61;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar43 < 0x811) {
      switch(uVar43) {
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
        if ((int)uVar15 <= (int)uVar7) {
          if (uVar45 < 0xad) {
            if ((uVar45 != 3) && (uVar45 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar45 != 0xad) && ((uVar45 != 0x200b && (uVar45 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar36 + 0x18) <= uVar6) goto thunk_FUN_01ab6c44;
            uVar5 = *(undefined2 *)(lVar36 + (long)(int)uVar6 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar44 = (long *)PTR_DAT_03cbded8;
            }
            uVar26 = FUN_026b8cc4(uVar5,0);
            if ((uVar26 & 1) == 0) {
              bVar12 = (int)uVar3 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar12 = false;
            }
            if ((fVar57 <= fVar48) && (!bVar12 && (uVar43 >> 4 & 1) == 0)) {
              fStack0000000000000158 = fVar52;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fStack0000000000000158 = fVar48 + fVar52;
              }
              goto LAB_03791c20;
            }
            if ((uVar32 == 1) || (uVar3 != uVar33)) {
              cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar15 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar19 = (iVar19 - iVar18) - (uStack0000000000000090 & 1);
                fVar52 = -fVar57;
                if (cVar28 != '\0') {
                  fVar52 = fVar57;
                }
                if (iVar19 < 1) {
                  fVar57 = 1.0;
                }
                else {
                  fVar57 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar19 < 2) {
                  iVar19 = 1;
                }
                fVar48 = fVar48 + fVar52;
                if (uVar45 == 9) {
LAB_037939d0:
                  if (cVar28 != '\0') {
                    fVar48 = fVar48 * (1.0 - fVar57);
                    fVar52 = (float)iVar19;
LAB_03793a0c:
                    fStack0000000000000158 = fStack0000000000000158 - fVar48 / fVar52;
                    break;
                  }
                  fVar52 = (float)iVar19;
                  fVar48 = fVar48 * (1.0 - fVar57);
                }
                else {
                  if (uVar45 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar26 = FUN_026b97f8(uVar45,0);
                    cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar26 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar48 = fVar48 * fVar57;
                  fVar52 = (float)(int)((iVar18 - (~uStack0000000000000090 & 1)) + iVar16);
                  if (cVar28 != '\0') goto LAB_03793a0c;
                }
                fStack0000000000000158 = fStack0000000000000158 + fVar48 / fVar52;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            fStack0000000000000158 = fVar52;
            if (cVar28 != '\0') {
              fStack0000000000000158 = fVar48 + fVar52;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar45,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar43 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar43) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fStack0000000000000158 = fVar52 + 0.0;
        }
        else {
          fStack0000000000000158 = 0.0 - fVar57;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        fStack0000000000000158 = (fVar52 + fVar48 * 0.5) - fVar57 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        fStack0000000000000158 = (fVar48 + fVar52) - fVar57;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          fStack0000000000000158 = fVar48 + fVar52;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar43 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar43 = (uint)*(undefined8 *)(lVar36 + 0x18);
    if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = lVar36 + lVar47 * 0x188;
    fVar52 = fStack0000000000000120 + fStack0000000000000158;
    fVar57 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar48 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar46 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar28 = *(char *)(lVar36 + lVar47 * 0x188 + 0x28);
    if (cVar28 != '\x01') goto LAB_0379225c;
    fVar55 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar3,1.0);
    plVar44 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar55 = 1.0;
      lVar31 = lVar36 + lVar47 * 0x188;
      *(undefined4 *)(lVar31 + 0xbc) = 0;
      *(undefined4 *)(lVar31 + 0x94) = 0;
      *(undefined4 *)(lVar31 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar49 = *(float *)(lVar36 + lVar47 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar31 = lVar36 + lVar47 * 0x188;
        fVar61 = (fStack0000000000000158 + fVar49) - *(float *)(unaff_x19 + 0x360);
        fVar49 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar31 = lVar36 + lVar47 * 0x188;
      fVar61 = fVar61 - fVar66;
      *(float *)(lVar31 + 0xbc) = fVar55 + (fVar49 - fVar66) / fVar61;
      *(float *)(lVar31 + 0x94) = fVar55 + (*(float *)(lVar31 + 0x78) - fVar66) / fVar61;
      *(float *)(lVar31 + 0xe4) = fVar55 + (*(float *)(lVar31 + 200) - fVar66) / fVar61;
      fVar55 = fVar55 + (*(float *)(lVar31 + 0xf0) - fVar66) / fVar61;
      break;
    case 2:
      lVar31 = lVar36 + lVar47 * 0x188;
      fVar49 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar61 = (fStack0000000000000158 + *(float *)(lVar31 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar31 + 0xbc) = fVar55 + fVar61 / fVar49;
      *(float *)(lVar31 + 0x94) =
           fVar55 + ((fStack0000000000000158 + *(float *)(lVar31 + 0x78)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar31 + 0xe4) =
           fVar55 + ((fStack0000000000000158 + *(float *)(lVar31 + 200)) -
                    *(float *)(unaff_x19 + 0x360)) /
                    (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar55 = fVar55 + ((fStack0000000000000158 + *(float *)(lVar31 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar31 = lVar36 + lVar47 * 0x188;
        *(undefined4 *)(lVar31 + 0xc0) = 0;
        *(undefined4 *)(lVar31 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xe8) = 0;
        *(undefined4 *)(lVar31 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar49 = fVar49 - fVar68;
        lVar31 = lVar36 + lVar47 * 0x188;
        fVar61 = fVar55 + (*(float *)(lVar31 + 0xa4) - fVar68) / fVar49;
        fVar49 = fVar55 + (*(float *)(lVar31 + 0x7c) - fVar68) / fVar49;
        *(float *)(lVar31 + 0xc0) = fVar61;
        *(float *)(lVar31 + 0x98) = fVar49;
        *(float *)(lVar31 + 0xe8) = fVar61;
        *(float *)(lVar31 + 0x110) = fVar49;
        break;
      case 2:
        lVar31 = lVar36 + lVar47 * 0x188;
        fVar61 = fVar55 + (*(float *)(lVar31 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar31 + 0xc0) = fVar61;
        fVar49 = *(float *)(unaff_x19 + 0x364);
        fVar66 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar31 + 0xe8) = fVar61;
        fVar61 = fVar55 + (*(float *)(lVar31 + 0x7c) - fVar49) / (fVar66 - fVar49);
        *(float *)(lVar31 + 0x98) = fVar61;
        *(float *)(lVar31 + 0x110) = fVar61;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar43 = (uint)*(undefined8 *)(lVar36 + 0x18);
      }
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
      lVar31 = lVar36 + lVar47 * 0x188;
      fVar61 = *(float *)(lVar31 + 0x168);
      fVar49 = (1.0 - (*(float *)(lVar31 + 0xc0) + *(float *)(lVar31 + 0x98)) * fVar61) * 0.5;
      fVar66 = fVar55 + *(float *)(lVar31 + 0xc0) * fVar61 + fVar49;
      fVar55 = fVar55 + *(float *)(lVar31 + 0x98) * fVar61 + fVar49;
      *(float *)(lVar31 + 0xbc) = fVar66;
      *(float *)(lVar31 + 0x94) = fVar66;
      *(float *)(lVar31 + 0xe4) = fVar55;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar36 + lVar47 * 0x188 + 0x10c) = fVar55;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
      lVar31 = lVar36 + lVar47 * 0x188;
      *(undefined4 *)(lVar31 + 0xc0) = 0;
      *(undefined4 *)(lVar31 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0x110) = 0;
      break;
    case 1:
      if (uVar15 < uVar43) {
        fVar64 = fVar64 - fVar50;
        lVar31 = lVar36 + lVar47 * 0x188;
        fVar55 = (*(float *)(lVar31 + 0xa4) - fVar50) / fVar64;
        fVar64 = (*(float *)(lVar31 + 0x7c) - fVar50) / fVar64;
        *(float *)(lVar31 + 0xc0) = fVar55;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
      lVar31 = lVar36 + lVar47 * 0x188;
      fVar55 = (*(float *)(lVar31 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar31 + 0xc0) = fVar55;
      fVar64 = (*(float *)(lVar31 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar31 + 0x98) = fVar64;
      *(float *)(lVar31 + 0xe8) = fVar64;
      *(float *)(lVar31 + 0x110) = fVar55;
      break;
    case 3:
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
      lVar31 = lVar36 + lVar47 * 0x188;
      fVar64 = *(float *)(lVar31 + 0x168);
      fVar61 = (1.0 - (*(float *)(lVar31 + 0xbc) + *(float *)(lVar31 + 0xe4)) / fVar64) * 0.5;
      fVar55 = *(float *)(lVar31 + 0xbc) / fVar64 + fVar61;
      fVar61 = *(float *)(lVar31 + 0xe4) / fVar64 + fVar61;
      *(float *)(lVar31 + 0xc0) = fVar55;
      *(float *)(lVar31 + 0x98) = fVar61;
      *(float *)(lVar31 + 0x110) = fVar55;
      *(float *)(lVar31 + 0xe8) = fVar61;
    }
    if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
    lVar31 = lVar36 + lVar47 * 0x188;
    fVar55 = *(float *)(lVar31 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar31 + 100) == '\0') && ((*(byte *)(lVar36 + lVar47 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar55 = -fVar55;
    }
    lVar31 = lVar36 + lVar47 * 0x188;
    *(float *)(lVar31 + 0xb8) = fVar55;
    *(float *)(lVar31 + 0x90) = fVar55;
    *(float *)(lVar31 + 0xe0) = fVar55;
    *(float *)(lVar31 + 0x108) = fVar55;
    *(undefined4 *)(lVar31 + 0xbc) = 0x3f800000;
    *(float *)(lVar31 + 0xc0) = fVar55;
    *(undefined4 *)(lVar31 + 0x94) = 0x3f800000;
    *(float *)(lVar31 + 0x98) = fVar55;
    *(undefined4 *)(lVar31 + 0xe4) = 0x3f800000;
    *(float *)(lVar31 + 0xe8) = fVar55;
    *(undefined4 *)(lVar31 + 0x10c) = 0x3f800000;
    *(float *)(lVar31 + 0x110) = fVar55;
LAB_0379225c:
    if (((int)uVar15 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar3) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar3) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar15 < uVar43) {
          bVar12 = *(uint *)(lVar36 + lVar47 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar46 = lVar36 + lVar47 * 0x188;
      *(ulong *)(lVar46 + 0xa0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0xa0) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar46 + 0xa0));
      *(float *)(lVar46 + 0xa8) = fVar48 + *(float *)(lVar46 + 0xa8);
      *(ulong *)(lVar46 + 0x78) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0x78) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar46 + 0x78));
      *(float *)(lVar46 + 0x80) = fVar48 + *(float *)(lVar46 + 0x80);
      *(ulong *)(lVar46 + 200) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 200) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar46 + 200));
      *(float *)(lVar46 + 0xd0) = fVar48 + *(float *)(lVar46 + 0xd0);
      *(ulong *)(lVar46 + 0xf0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0xf0) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar46 + 0xf0));
      *(float *)(lVar46 + 0xf8) = fVar48 + *(float *)(lVar46 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar12 = false;
LAB_037922d8:
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
      if (bVar12) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar44);
        DAT_0411f172 = '\x01';
        uVar43 = *(uint *)(lVar36 + 0x18);
      }
      uVar17 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      lVar31 = lVar36 + lVar47 * 0x188;
      *(undefined8 *)(lVar31 + 0xa0) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar31 + 0xa8) = uVar17;
      if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
      uVar17 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      lVar31 = lVar36 + lVar47 * 0x188;
      *(undefined8 *)(lVar31 + 0x78) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar31 + 0x80) = uVar17;
      uVar17 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      *(undefined8 *)(lVar31 + 200) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar31 + 0xd0) = uVar17;
      uVar17 = *(undefined4 *)(*(undefined8 **)(*plVar44 + 0xb8) + 1);
      *(undefined8 *)(lVar31 + 0xf0) = **(undefined8 **)(*plVar44 + 0xb8);
      *(undefined4 *)(lVar31 + 0xf8) = uVar17;
      *(undefined1 *)(lVar46 + 0x1a0) = 0;
    }
    iVar16 = FUN_0368e42c(0);
    if (iVar16 == 1) {
      cVar42 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar42 = '\0';
    }
    if (cVar28 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar15,cVar42 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar28 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar15,cVar42 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = lVar46 + lVar47 * 0x188;
    uVar20 = *(undefined8 *)(lVar46 + 0x124);
    *(undefined8 *)(lVar46 + 0x124) =
         CONCAT44(fVar57 + (float)((ulong)uVar20 >> 0x20),fVar52 + (float)uVar20);
    *(float *)(lVar46 + 300) = fVar48 + *(float *)(lVar46 + 300);
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = lVar46 + lVar47 * 0x188;
    *(ulong *)(lVar46 + 0x118) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0x118) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar46 + 0x118));
    *(float *)(lVar46 + 0x120) = fVar48 + *(float *)(lVar46 + 0x120);
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = lVar46 + lVar47 * 0x188;
    *(ulong *)(lVar46 + 0x130) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar46 + 0x130) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar46 + 0x130));
    *(float *)(lVar46 + 0x138) = fVar48 + *(float *)(lVar46 + 0x138);
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    lVar46 = lVar46 + lVar47 * 0x188;
    *(float *)(lVar46 + 0x13c) = fVar52 + *(float *)(lVar46 + 0x13c);
    *(ulong *)(lVar46 + 0x140) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar46 + 0x140) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar46 + 0x140));
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    uVar43 = *(uint *)(lVar46 + 0x18);
    if (uVar43 <= uVar15) goto thunk_FUN_01ab6c44;
    lVar31 = lVar46 + lVar47 * 0x188;
    *(float *)(lVar31 + 0x148) = fVar52 + *(float *)(lVar31 + 0x148);
    *(float *)(lVar31 + 0x164) = fVar52 + *(float *)(lVar31 + 0x164);
    *(float *)(lVar31 + 0x154) = fVar57 + *(float *)(lVar31 + 0x154);
    uVar20 = *(undefined8 *)(lVar31 + 0x14c);
    *(undefined8 *)(lVar31 + 0x14c) =
         CONCAT44(fVar57 + (float)((ulong)uVar20 >> 0x20),fVar57 + (float)uVar20);
    if (uVar3 == uVar33) {
      uVar33 = *in_stack_000001d0 - 1;
      if (uVar15 == uVar33) goto LAB_037926b4;
    }
    else {
      lVar31 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar31 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar31 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
      lVar39 = (long)(int)uVar33;
      lVar41 = lVar31 + lVar39 * 0x60;
      fVar48 = fVar57 + *(float *)(lVar41 + 0x58);
      *(ulong *)(lVar41 + 0x50) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar41 + 0x50) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar41 + 0x50));
      *(float *)(lVar41 + 0x58) = fVar48;
      *(float *)(lVar41 + 0x5c) = fVar52 + *(float *)(lVar41 + 0x5c);
      if (uVar43 <= *(uint *)(lVar41 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar17 = *(undefined4 *)(lVar46 + (long)(int)*(uint *)(lVar41 + 0x38) * 0x188 + 0x124);
      lVar31 = lVar31 + lVar39 * 0x60;
      *(float *)(lVar31 + 0x74) = fVar48;
      *(undefined4 *)(lVar31 + 0x70) = uVar17;
      lVar46 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar46 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar46 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
      lVar31 = *in_stack_000001e8;
      if (lVar31 == 0) goto LAB_03793c9c;
      uVar33 = *(uint *)(lVar46 + lVar39 * 0x60 + 0x44);
      if (*(uint *)(lVar31 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
      lVar46 = lVar46 + lVar39 * 0x60;
      *(undefined4 *)(lVar46 + 0x78) = *(undefined4 *)(lVar31 + (long)(int)uVar33 * 0x188 + 0x130);
      *(undefined4 *)(lVar46 + 0x7c) = *(undefined4 *)(lVar46 + 0x50);
      uVar33 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar15 == uVar33) {
        lVar46 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
        lVar31 = lVar46 + lVar37 * 0x60;
        fVar48 = fVar57 + *(float *)(lVar31 + 0x58);
        *(ulong *)(lVar31 + 0x50) =
             CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar31 + 0x50) >> 0x20),
                      fVar57 + (float)*(undefined8 *)(lVar31 + 0x50));
        *(float *)(lVar31 + 0x58) = fVar48;
        *(float *)(lVar31 + 0x5c) = fVar52 + *(float *)(lVar31 + 0x5c);
        lVar39 = *in_stack_000001e8;
        if (lVar39 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(lVar31 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar17 = *(undefined4 *)(lVar39 + (long)(int)*(uint *)(lVar31 + 0x38) * 0x188 + 0x124);
        lVar46 = lVar46 + lVar37 * 0x60;
        *(float *)(lVar46 + 0x74) = fVar48;
        *(undefined4 *)(lVar46 + 0x70) = uVar17;
        lVar46 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
        lVar31 = *in_stack_000001e8;
        if (lVar31 == 0) goto LAB_03793c9c;
        uVar33 = *(uint *)(lVar46 + lVar37 * 0x60 + 0x44);
        if (*(uint *)(lVar31 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar37 * 0x60;
        *(undefined4 *)(lVar46 + 0x78) = *(undefined4 *)(lVar31 + (long)(int)uVar33 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar46 + 0x7c) = *(undefined4 *)(lVar46 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar26 = FUN_026b82c4(uVar45,0);
    if (((((uVar26 & 1) == 0) && (1 < uVar45 - 0x2010)) && (uVar45 != 0xad)) && (uVar45 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar32 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar14 = FUN_026b81f8(uVar45,0);
          if (((uVar45 == 0x200b) || (((bVar13 | bVar14 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar32 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar36 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_000001d0 && ((uVar45 == 0x2019 || (uVar45 == 0x27)))))) {
          if (*(uint *)(lVar36 + 0x18) <= uVar32 - 2) goto thunk_FUN_01ab6c44;
          uVar5 = *(undefined2 *)(lVar36 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b82c4(uVar5,0);
          if ((uVar26 & 1) != 0) {
            if (*(uint *)(lVar36 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
            uVar5 = *(undefined2 *)(lVar36 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_026b82c4(uVar5,0);
            if ((uVar26 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar15 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b82c4(uVar45,0);
          fStack0000000000000170 = (float)uVar15;
          if ((uVar26 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar46 = *plVar24;
        if (lVar46 == 0) goto LAB_03793c9c;
        uVar33 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar16 = *(int *)(lVar46 + 0x18);
        if (iVar16 < (int)(uVar33 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar24,iVar16 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar46 = *plVar24;
          if (lVar46 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar46 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + (long)(int)uVar33 * 0xc;
        *(uint *)(lVar46 + 0x20) = uStack0000000000000168;
        *(float *)(lVar46 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar46 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar46 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar37 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar46 + 0x34) = *(int *)(lVar46 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar15;
      }
      if (uVar15 == *in_stack_000001d0 - 1) {
        lVar46 = *plVar24;
        if (lVar46 == 0) goto LAB_03793c9c;
        uVar33 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar16 = *(int *)(lVar46 + 0x18);
        if (iVar16 < (int)(uVar33 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar24,iVar16 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar46 = *plVar24;
          if (lVar46 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar46 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + (long)(int)uVar33 * 0xc;
        *(uint *)(lVar46 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar46 + 0x24) = uVar15;
        *(uint *)(lVar46 + 0x28) = uVar32 - uStack0000000000000168;
        lVar46 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar3) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar37 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar46 + 0x34) = *(int *)(lVar46 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    uVar33 = *(uint *)(lVar46 + 0x18);
    if (uVar33 <= uVar15) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar46 + lVar47 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar9) {
LAB_037928d0:
        if (uVar32 - 2 < uVar33) {
          uVar17 = *(undefined4 *)(lVar46 + (long)in_stack_000001a8 + -0x354);
          uVar59 = *(undefined4 *)(lVar46 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar9 = false;
    }
    else {
      lVar37 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar37 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar16 = *(int *)(lVar46 + lVar47 * 0x188 + 0x70);
      *(int *)(lVar46 + lVar47 * 0x188 + 0x178) =
           *(int *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar15) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar3)) {
        bVar12 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar12 = iVar16 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar12 = false;
      }
      if (uVar45 != 0x200b && (bVar13 & 1) == 0) {
        fVar48 = *(float *)(lVar46 + lVar47 * 0x188 + 0x16c);
        if (fVar58 <= fVar48) {
          fVar58 = fVar48;
        }
        if (iVar16 != iStack00000000000000c0) {
          fStack000000000000015c = fVar60;
        }
        if (lVar23 == 0) goto LAB_03793c9c;
        fVar48 = *(float *)(lVar46 + lVar47 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar55)) {
          fStack0000000000000174 = ABS(fVar55);
        }
        FUN_03779650(&stack0x000016a0,lVar23,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar61 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar48 = fVar48 + fVar58 * fVar61;
        iStack00000000000000c0 = iVar16;
        if (fVar48 <= fStack000000000000015c) {
          fStack000000000000015c = fVar48;
        }
      }
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar15)) ||
         (bVar9 || bVar12)) {
LAB_03792a80:
        if (!bVar9) goto LAB_03792a8c;
      }
      else {
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar45,0);
          if ((uVar26 & 1) != 0) goto LAB_03792a80;
        }
        lVar46 = *in_stack_000001e8;
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar47 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar46 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar46 + 0x124);
        bVar9 = fVar58 != 0.0;
        fVar48 = _bStack00000000000000d8;
        if (bVar9) {
          fVar48 = fVar58;
        }
        fVar58 = fVar48;
        uVar51 = *(undefined4 *)(lVar46 + 0x174);
        uStack00000000000000cc = 0;
        fVar48 = fVar55;
        if (bVar9) {
          fVar48 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar48;
      }
      if (*in_stack_000001d0 == 1) {
        lVar46 = *in_stack_000001e8;
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar47 * 0x188;
        uVar17 = *(undefined4 *)(lVar46 + 0x130);
        uVar59 = *(undefined4 *)(lVar46 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar17,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar59);
      }
      else {
        if ((uVar15 == uVar6) || ((int)uVar7 <= (int)uVar15)) {
          lVar46 = *in_stack_000001e8;
          if (lVar46 != 0) {
            lVar37 = lVar47;
            uVar33 = uVar15;
            if (uVar45 == 0x200b || (bVar13 & 1) != 0) {
              lVar37 = lVar38;
              uVar33 = uVar7;
            }
            if (uVar33 < *(uint *)(lVar46 + 0x18)) {
              lVar46 = lVar46 + lVar37 * 0x188;
              uVar17 = *(undefined4 *)(lVar46 + 0x130);
              uVar59 = *(undefined4 *)(lVar46 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar12) {
          lVar46 = *in_stack_000001e8;
          if (lVar46 != 0) {
            uVar33 = *(uint *)(lVar46 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar15) {
LAB_03793294:
          bVar9 = true;
          goto LAB_03792b70;
        }
        lVar46 = *in_stack_000001e8;
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
        uVar26 = FUN_03779528(uVar51,*(undefined4 *)(lVar46 + (long)in_stack_000001a8),0);
        if ((uVar26 & 1) != 0) goto LAB_03793294;
        lVar46 = *in_stack_000001e8;
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar47 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar46 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar46 + 0x16c));
      }
      fVar58 = 0.0;
      bVar9 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar33 = *(uint *)(lVar46 + lVar47 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar23,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar48 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar33 >> 6 & 1) == 0) {
      if (bVar11) {
        lVar46 = *in_stack_000001e8;
        if (lVar46 != 0) {
          if (uVar32 - 2 < *(uint *)(lVar46 + 0x18)) {
            fVar57 = *(float *)(lVar46 + (long)in_stack_000001a8 + -0x334);
            uVar17 = *(undefined4 *)(lVar46 + (long)in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar11 = false;
    }
    else {
      lVar46 = *in_stack_000001e8;
      if ((lVar46 == 0) || (lVar37 = *(long *)(unaff_x19 + 0x15b8), lVar37 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar46 + 0x18) <= uVar15)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar46 + lVar47 * 0x188 + 0x180) =
           *(int *)(lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar15) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar3)) {
        bVar12 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar12 = *(int *)(lVar46 + lVar47 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar12 = false;
      }
      if ((((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) || ((int)uVar7 < (int)uVar15)) ||
         (!(bool)(~bVar11 & (bVar12 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar11) goto LAB_03792cf8;
      }
      else {
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar45,0);
          if ((uVar26 & 1) != 0) goto LAB_03792cf0;
          lVar46 = *in_stack_000001e8;
          if (lVar46 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar46 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar46 = lVar46 + lVar47 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar46 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar46 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar46 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar46 + 0x150);
        fStack00000000000000e0 = fVar48 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar33 = *in_stack_000001d0;
      if (uVar33 == 1) {
LAB_03792ef4:
        lVar37 = *in_stack_000001e8;
        if (lVar37 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar37 + 0x18) <= uVar15) goto thunk_FUN_01ab6c44;
        lVar37 = lVar37 + lVar47 * 0x188;
      }
      else {
        lVar46 = lVar47;
        if (uVar15 == uVar6) {
          lVar37 = *in_stack_000001e8;
          if (lVar37 == 0) goto LAB_03793c9c;
          uVar33 = uVar15;
          if ((uVar45 != 0x200b & (bVar13 ^ 1)) == 0) {
            lVar46 = lVar38;
            uVar33 = uVar7;
          }
          if (*(uint *)(lVar37 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar33 <= (int)uVar15) {
LAB_03792fdc:
            if ((int)uVar15 < (int)uVar33) {
              iVar16 = FUN_036d3364(lVar23,0);
              if (*(uint *)(lVar36 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
              lVar46 = *(long *)(lVar36 + (long)in_stack_000001a8 + -0x134);
              if (lVar46 == 0) goto LAB_03793c9c;
              iVar19 = FUN_036d3364(lVar46,0);
              if (iVar16 != iVar19) goto LAB_03792ef4;
            }
            if (!bVar12) {
              bVar11 = true;
              goto LAB_03793338;
            }
            lVar46 = *in_stack_000001e8;
            if (lVar46 != 0) {
              if (uVar32 - 2 < *(uint *)(lVar46 + 0x18)) {
                fVar57 = *(float *)(lVar46 + (long)in_stack_000001a8 + -0x334);
                uVar17 = *(undefined4 *)(lVar46 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar37 = *in_stack_000001e8;
          if (lVar37 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar37 + 0x18) <= uVar32) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar37 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar61 = *(float *)(lVar37 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_037a2200(fVar57 + fVar61,in_stack_000000a0._4_4_,0);
            if ((uVar26 & 1) != 0) {
              uVar33 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar37 = *in_stack_000001e8;
            if (lVar37 == 0) goto LAB_03793c9c;
          }
          uVar33 = uVar15;
          if ((int)uVar7 < (int)uVar15) {
            lVar46 = lVar38;
            uVar33 = uVar7;
          }
          if (*(uint *)(lVar37 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        }
        lVar37 = lVar37 + lVar46 * 0x188;
      }
      fVar57 = *(float *)(lVar37 + 0x150);
      uVar17 = *(undefined4 *)(lVar37 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,uStack00000000000000dc,uVar17,
                   fStack00000000000000f0 * fVar48 + fVar57,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar11 = false;
    }
LAB_03793338:
    lVar46 = *in_stack_000001e8;
    if (lVar46 == 0) goto LAB_03793c9c;
    uVar33 = (uint)*(undefined8 *)(lVar46 + 0x18);
    if (uVar33 <= uVar15) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar46 + lVar47 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar10) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar10 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar15) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar3)) {
        bVar12 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar12 = *(int *)(lVar46 + lVar47 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar12 = false;
      }
      if (!bVar10) {
        if (((uVar45 == 0xd) || ((uVar45 & 0xfffe) == 10)) ||
           (((int)uVar7 < (int)uVar15 || (bVar12)))) goto LAB_03793428;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar45,0);
          if ((uVar26 & 1) != 0) goto LAB_03793428;
        }
        puVar8 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar23 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar8;
        }
        lVar46 = *in_stack_000001e8;
        if (lVar46 == 0) goto LAB_03793c9c;
        uVar33 = (uint)*(undefined8 *)(lVar46 + 0x18);
        if (uVar33 <= uVar15) goto thunk_FUN_01ab6c44;
        pfVar40 = *(float **)(lVar23 + 0xb8);
        fStack0000000000000128 = *pfVar40;
        in_stack_00000140._4_4_ = pfVar40[1];
        fStack000000000000012c = pfVar40[2];
        fStack0000000000000130 = pfVar40[3];
        uStack0000000000000124 = 0;
      }
      if (uVar33 <= uVar15) goto thunk_FUN_01ab6c44;
      lVar46 = lVar46 + lVar47 * 0x188;
      fVar61 = *(float *)(lVar46 + 0x130);
      fVar50 = *(float *)(lVar46 + 0x124);
      fVar57 = *(float *)(lVar46 + 0x148);
      fVar64 = *(float *)(lVar46 + 0x14c);
      fVar49 = *(float *)(lVar46 + 0x154);
      fVar48 = *(float *)(lVar46 + 0x164);
      uVar26 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar46 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar26 & 1) == 0) {
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar46);
        }
        fVar66 = (float)FUN_037a1dd8(uVar34,0);
        bVar10 = (bVar13 & 1) == 0;
        if (bVar10) {
          fVar57 = fVar50;
        }
        if (bVar10) {
          fVar48 = fVar61;
        }
        if (fVar57 - fVar66 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar57 - fVar66;
        }
        fVar57 = (float)FUN_037a1de0(uVar34,0);
        if (fStack000000000000012c <= fVar48 + fVar57) {
          fStack000000000000012c = fVar48 + fVar57;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar57 = (float)FUN_037a1df0(uVar34,0);
        if (fVar49 - fVar57 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar49 - fVar57;
        }
        fVar57 = (float)FUN_037a1de8(uVar34,0);
        if (fStack0000000000000130 <= fVar64 + fVar57) {
          fStack0000000000000130 = fVar64 + fVar57;
        }
      }
      else {
        if (*(int *)(lVar46 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar46);
        }
        fVar66 = (float)FUN_037a1de0(uVar34,0);
        if ((bVar13 & 1) == 0) {
          fVar57 = fVar50;
        }
        if (fVar49 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar49;
        }
        fVar57 = (fVar57 + (fStack000000000000012c - fVar66)) * 0.5;
        if (fStack0000000000000130 <= fVar64) {
          fStack0000000000000130 = fVar64;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar57,
                     fStack0000000000000130,uStack0000000000000124);
        puVar8 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar22,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar49 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar22,0);
        fVar49 = (float)FUN_037a1de8(uVar22,0);
        if ((bVar13 & 1) == 0) {
          fVar48 = fVar61;
        }
        fStack000000000000012c = fVar48 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar57;
        fStack0000000000000130 = fVar64 + fVar49;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar15 == uVar6)) || ((int)uVar7 <= (int)uVar15)) ||
         (bVar12)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
    }
    uVar15 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar12 = (int)uVar32 < (int)uVar15;
    uVar33 = uVar3;
    uVar32 = uVar32 + 1;
  } while (bVar12);
  iVar16 = uVar3 + 1;
  plVar24 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar15;
  uVar51 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar16;
  if ((int)uVar15 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar51;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar22 = 1;
    lVar36 = 0x70;
    do {
      lVar46 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar46 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar46 + 0x18) <= uVar22) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar46 + lVar36,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar46 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar46 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar46 + 0x18) <= uVar22) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar46 + lVar36,1,0);
      }
      uVar22 = uVar22 + 1;
      lVar36 = lVar36 + 0x50;
    } while ((long)uVar22 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


