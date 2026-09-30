/*
FUNCTION_NAME: UnityEngine.UIElements.MouseUpEvent$$GetPooled
ENTRY_POINT: 0378f314
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


void UnityEngine_UIElements_MouseUpEvent__GetPooled(void)

{
  int iVar1;
  int iVar2;
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
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 uVar28;
  char cVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  float *pfVar39;
  uint uVar40;
  long lVar41;
  long unaff_x19;
  char cVar42;
  uint unaff_w21;
  long *plVar43;
  long *unaff_x22;
  char *unaff_x24;
  uint uVar44;
  long lVar45;
  long lVar46;
  ulong unaff_x27;
  long *unaff_x28;
  uint *puVar47;
  uint *unaff_x29;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined4 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float unaff_s13;
  float fVar72;
  float fVar73;
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
  float fStack00000000000000ec;
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
  undefined8 uStack0000000000000148;
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
  char in_stack_00001694;
  float in_stack_00001698;
  uint in_stack_0000169c;
  undefined8 in_stack_000016a0;
  long in_stack_00001a38;
  
code_r0x0378f314:
  uVar18 = FUN_03797154();
  plVar43 = unaff_x22;
  puVar47 = unaff_x29;
LAB_037909d0:
  uVar20 = CONCAT44(3,unaff_w21);
  fVar62 = unaff_s13;
LAB_0378d260:
  uVar18 = uVar18 + 1;
  lVar32 = *(long *)(unaff_x19 + 0x20);
  if (lVar32 == 0) goto LAB_03793c9c;
  if ((int)*(uint *)(lVar32 + 0x18) <= (int)uVar18) {
LAB_03790fec:
    if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
         (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
        (fVar62 = *_fStack00000000000000d0, fVar62 < *(float *)(in_stack_000001e0 + 0xb0))) &&
       (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
      fVar70 = *(float *)(in_stack_000001e0 + 0x108);
      if (*(float *)(unaff_x19 + 0x1594) < fVar70 / 100.0) {
        *(undefined4 *)(unaff_x19 + 0x1594) = 0;
      }
      fVar48 = (*(float *)(unaff_x19 + 0x1598) - fVar62) * 0.5;
      if (fVar48 <= DAT_00d38b84) {
        fVar48 = DAT_00d38b84;
      }
      *(float *)(unaff_x19 + 0x159c) = fVar62;
      fVar48 = (fVar62 + fVar48) * 20.0 + 0.5;
      fVar62 = DAT_00d38e60;
      if (fVar48 != INFINITY) {
        fVar62 = (float)(int)fVar48 / 20.0;
      }
      if (fVar70 <= fVar62) {
        fVar62 = fVar70;
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
      plVar43 = in_stack_000001e8;
    }
    plVar35 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    plVar24 = (long *)PTR_DAT_03cbded8;
    if ((*puVar47 == 0) || ((*puVar47 == 1 && (in_stack_0000169c == 3)))) {
      FUN_0379e288(1,in_stack_000001c0,0);
      goto LAB_0378c81c;
    }
    lVar32 = *(long *)(in_stack_000001c0 + 0x58);
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar18 = *(uint *)(unaff_x19 + 0x78);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0) ==
        0) {
      thunk_FUN_01a58e78();
    }
    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    FUN_03785b74(lVar32 + (long)(int)uVar18 * 0x50 + 0x20,0,0);
    if (DAT_0411f172 == '\0') {
      FUN_01ab69ac(PTR_DAT_03cbded8);
      DAT_0411f172 = '\x01';
    }
    iVar19 = *(int *)(in_stack_000001e0 + 0x70);
    in_stack_00000158 = **(float **)(*plVar24 + 0xb8);
    uStack0000000000000148 = *(undefined8 *)(*(float **)(*plVar24 + 0xb8) + 1);
    lVar32 = *(long *)(unaff_x19 + 0x50);
    uStack0000000000000118 = uStack0000000000000148;
    fStack0000000000000120 = in_stack_00000158;
    if (iVar19 < 0x421) {
      if (iVar19 < 0x205) {
        if (iVar19 < 0x109) {
          if ((iVar19 - 0x101U < 8) && ((1 << (ulong)(iVar19 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
            if (lVar32 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar32 + 0x18) < 2) goto thunk_FUN_01ab6c44;
            uVar20 = *(undefined8 *)(lVar32 + 0x30);
            if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
              lVar45 = *in_stack_00000050;
              if (lVar45 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar45 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
              fVar62 = *(float *)(lVar45 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
            }
            else {
              fVar62 = *(float *)(unaff_x19 + 0x374);
            }
            fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar32 + 0x2c);
            fStack0000000000000038 = (0.0 - fVar62) - fStack000000000000003c;
            goto LAB_037917ec;
          }
        }
        else if (iVar19 < 0x121) {
          if ((iVar19 == 0x110) || (iVar19 == 0x120)) goto LAB_0379144c;
        }
        else if ((iVar19 - 0x201U < 4) && (iVar19 - 0x201U != 2)) goto LAB_037916dc;
      }
      else {
        if (iVar19 < 0x403) {
          if (iVar19 < 0x211) {
            if ((iVar19 == 0x208) || (iVar19 == 0x210)) goto LAB_037916dc;
            goto LAB_037917fc;
          }
          if (iVar19 != 0x220) {
            if (iVar19 - 0x401U < 2) goto LAB_03791588;
            goto LAB_037917fc;
          }
LAB_037916dc:
          if (lVar32 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          fStack0000000000000120 = (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar32 + 0x24) +
                            (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar32 = *in_stack_00000050;
            if (lVar32 == 0) goto LAB_03793c9c;
            if (uStack000000000000005c < *(uint *)(lVar32 + 0x18)) {
              lVar32 = lVar32 + (long)(int)uStack000000000000005c * 0x14;
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
              fStack0000000000000038 =
                   ((fStack000000000000003c + *(float *)(lVar32 + 0x28) + *(float *)(lVar32 + 0x30))
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
          if (iVar19 < 0x409) {
            if (iVar19 != 0x404) {
              bVar11 = iVar19 == 0x408;
              goto LAB_03791574;
            }
          }
          else if (iVar19 != 0x410) {
            bVar11 = iVar19 == 0x420;
LAB_03791574:
            if (!bVar11) goto LAB_037917fc;
          }
LAB_03791588:
          if (lVar32 == 0) goto LAB_03793c9c;
          if (*(int *)(lVar32 + 0x18) == 0) goto thunk_FUN_01ab6c44;
          uVar20 = *(undefined8 *)(lVar32 + 0x24);
          if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
            lVar45 = *in_stack_00000050;
            if (lVar45 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar45 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
            in_stack_00001698 = *(float *)(lVar45 + (long)(int)uStack000000000000005c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar32 + 0x20);
          fStack0000000000000038 = fStack0000000000000038 + (0.0 - in_stack_00001698);
        }
LAB_037917ec:
        uStack0000000000000118 =
             CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fStack0000000000000038);
      }
    }
    else if (iVar19 < 0x1005) {
      if (iVar19 < 0x809) {
        if ((iVar19 - 0x801U < 8) && ((1 << (ulong)(iVar19 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
          if (lVar32 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar32 + 0x18) != 1) && (*(int *)(lVar32 + 0x18) != 0)) {
            uStack0000000000000118 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar32 + 0x24) +
                          (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5 + 0.0);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
            goto LAB_037917fc;
          }
          goto thunk_FUN_01ab6c44;
        }
      }
      else if (iVar19 < 0x821) {
        if ((iVar19 == 0x810) || (iVar19 == 0x820)) goto LAB_037913b0;
      }
      else if ((iVar19 - 0x1001U < 4) && (iVar19 - 0x1001U != 2)) goto LAB_03791644;
    }
    else if (iVar19 < 0x2003) {
      if (iVar19 < 0x1011) {
        if ((iVar19 == 0x1008) || (iVar19 == 0x1010)) goto LAB_03791644;
      }
      else {
        if (iVar19 == 0x1020) {
LAB_03791644:
          if (lVar32 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar32 + 0x18) != 1) && (*(int *)(lVar32 + 0x18) != 0)) {
            uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar32 + 0x24) +
                              (float)*(undefined8 *)(lVar32 + 0x30)) * 0.5);
            fStack0000000000000120 =
                 fStack0000000000000058 + 0.0 +
                 (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
            fStack0000000000000038 =
                 0.0 - ((fStack000000000000003c + *(float *)(unaff_x19 + 0x36c) +
                        *(float *)(unaff_x19 + 0x364)) - fStack0000000000000038) * 0.5;
            goto LAB_037917ec;
          }
          goto thunk_FUN_01ab6c44;
        }
        if (iVar19 - 0x2001U < 2) goto LAB_037914ec;
      }
    }
    else {
      if (iVar19 < 0x2009) {
        if (iVar19 != 0x2004) {
          iVar15 = 0x2008;
          goto LAB_037914d4;
        }
      }
      else if (iVar19 != 0x2010) {
        iVar15 = 0x2020;
LAB_037914d4:
        if (iVar19 != iVar15) goto LAB_037917fc;
      }
LAB_037914ec:
      if (lVar32 == 0) goto LAB_03793c9c;
      if ((*(int *)(lVar32 + 0x18) == 1) || (*(int *)(lVar32 + 0x18) == 0)) goto thunk_FUN_01ab6c44;
      uStack0000000000000118 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar32 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar32 + 0x24) + (float)*(undefined8 *)(lVar32 + 0x30))
                    * 0.5 + (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                                   fStack0000000000000038) * 0.5));
      fStack0000000000000120 =
           fStack0000000000000058 + 0.0 +
           (*(float *)(lVar32 + 0x20) + *(float *)(lVar32 + 0x2c)) * 0.5;
    }
LAB_037917fc:
    uVar53 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ + 0xe0)
        == 0) {
      thunk_FUN_01a58e78(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__
                        );
    }
    FUN_037a1df8(0);
    FUN_037a1fc8(&stack0x00001670,0x4000ffff,0);
    fVar62 = DAT_00d38d70;
    uVar18 = *puVar47;
    if ((int)uVar18 < 1) {
      iVar19 = 0;
      iStack0000000000000138 = 0;
      goto LAB_03793a5c;
    }
    lVar32 = *plVar43;
    if (lVar32 == 0) goto LAB_03793c9c;
    fStack0000000000000174 = 0.0;
    _bStack00000000000000d8 = 0.0;
    fStack00000000000000a8 = 0.0;
    plVar43 = (long *)(in_stack_000001c0 + 0x38);
    fStack00000000000000ec = fStack0000000000000128;
    fStack00000000000000f0 = 0.0;
    in_stack_000000a0._4_4_ = 0.0;
    uVar25 = (ulong)&stack0x00001670 | 4;
    bVar11 = false;
    fVar48 = 0.0;
    fVar70 = 0.0;
    uVar22 = (ulong)&stack0x000009f0 | 4;
    bVar9 = false;
    bVar8 = false;
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
    uVar14 = 0;
    uVar17 = 1;
    goto LAB_0379194c;
  }
  if (*(uint *)(lVar32 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
  uVar14 = *(uint *)(lVar32 + (long)(int)uVar18 * 0x10 + 0x24);
  if (uVar14 == 0) goto LAB_03790fec;
  uVar21 = uVar20;
  if (5 < in_stack_000001d8._4_4_) {
    uVar20 = FUN_0278d4e8(&stack0x0000169c,0);
    uVar21 = FUN_0276793c(&stack0x0000160c,0);
    uVar20 = FUN_025be45c(*(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo,uVar20,
                          *(undefined8 *)OVRPlugin_OVRP_1_42_0_TypeInfo,uVar21,0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*unaff_x28);
    }
    FUN_0367ae18(uVar20,0);
    uVar21 = CONCAT44(3,*puVar47);
    plVar43 = in_stack_000001e8;
  }
  uVar20 = uVar21;
  in_stack_0000169c = uVar14;
  if (uVar14 == 0x1a) goto LAB_0378d260;
  if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
    unaff_x24[0] = '\x01';
    unaff_x24[1] = '\x01';
    uVar22 = FUN_037974c0();
    if (((uVar22 & 1) != 0) && (uVar18 = in_stack_000015dc, *unaff_x24 == '\x01'))
    goto LAB_0378d260;
  }
  else {
    lVar32 = *plVar43;
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
    lVar32 = lVar32 + (long)(int)*puVar47 * unaff_x27;
    *unaff_x24 = *(char *)(lVar32 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar32 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar32 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
  }
  lVar32 = *plVar43;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar14 = *(uint *)(unaff_x19 + 0x324);
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
  lVar45 = (long)(int)uVar14;
  uVar53 = *(undefined4 *)(unaff_x19 + 0x78);
  cVar29 = *(char *)(lVar32 + lVar45 * unaff_x27 + 100);
  unaff_x24[1] = '\0';
  if ((uint)uVar21 == uVar14) {
    in_stack_0000169c = (uint)((ulong)uVar21 >> 0x20);
    bVar11 = true;
    *unaff_x24 = '\x01';
    if (in_stack_0000169c == 0x2026) {
      *(undefined8 *)(lVar32 + lVar45 * unaff_x27 + 0x30) = *(undefined8 *)(unaff_x19 + 0x1a00);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
      *(undefined1 *)(lVar32 + 0x28) = 1;
      *(undefined8 *)(lVar32 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
      *(undefined8 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58) =
           *(undefined8 *)(unaff_x19 + 0x1a10);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar14 = *puVar47;
      if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      bVar11 = true;
      *(undefined4 *)(lVar32 + (long)(int)uVar14 * unaff_x27 + 0x60) =
           *(undefined4 *)(unaff_x19 + 0x1a18);
      *(undefined1 *)
       (*(long *)(*(long *)
                   Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                 0xb8) + 8) = 1;
      uVar21 = CONCAT44(3,uVar14 + 1);
    }
    else if (in_stack_0000169c == 3) {
      if ((*in_stack_000001c8 == 0) || (lVar23 = FUN_03779b3c(*in_stack_000001c8,0), lVar23 == 0))
      goto LAB_03793c9c;
      FUN_0219b634(lVar23,&stack0x00000978,&stack0x000016a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                  );
      if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      *(undefined8 *)(lVar32 + lVar45 * unaff_x27 + 0x30) = in_stack_000016a0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      bVar11 = true;
      *(undefined1 *)
       (*(long *)(*(long *)
                   Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__ +
                 0xb8) + 8) = 1;
      uVar14 = *puVar47;
    }
  }
  else {
    bVar11 = false;
  }
  iVar19 = (int)unaff_x27;
  uVar20 = uVar21;
  if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xe4)) && (in_stack_0000169c != 3)) {
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar32 = lVar32 + (long)(int)uVar14 * (long)iVar19;
    *(undefined1 *)(lVar32 + 0x1a0) = 0;
    *(undefined2 *)(lVar32 + 0x20) = 0x200b;
    *(undefined4 *)(lVar32 + 0x6c) = 0;
    *puVar47 = uVar14 + 1;
    plVar43 = in_stack_000001e8;
    goto LAB_0378d260;
  }
  cVar42 = *unaff_x24;
  if (cVar42 == '\x01') {
    uVar14 = *(uint *)(unaff_x19 + 0x124);
    if ((uVar14 >> 4 & 1) == 0) {
      if ((uVar14 >> 3 & 1) == 0) {
        fStack000000000000017c = 1.0;
        if ((uVar14 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar22 = FUN_026b812c(in_stack_0000169c,0);
          if ((uVar22 & 1) != 0) {
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
        uVar22 = FUN_026b8070(in_stack_0000169c,0);
        fStack000000000000017c = 1.0;
        if ((uVar22 & 1) != 0) {
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
      uVar22 = FUN_026b812c(in_stack_0000169c,0);
      fStack000000000000017c = 1.0;
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar14 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
        fStack000000000000017c = 1.0;
        in_stack_0000169c = uVar14 & 0xffff;
      }
    }
    cVar42 = *unaff_x24;
  }
  else {
    fStack000000000000017c = 1.0;
  }
  if (cVar42 == '\x01') {
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
    *in_stack_000001a8 = *(long *)(lVar32 + (long)(int)*puVar47 * unaff_x27 + 0x30);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
    plVar43 = in_stack_000001e8;
    if (*in_stack_000001a8 == 0) goto LAB_0378d260;
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
    *in_stack_000001c8 = *(long *)(lVar32 + (long)(int)*puVar47 * unaff_x27 + 0x40);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
    *in_stack_00000190 = *(long *)(lVar32 + (long)(int)*puVar47 * unaff_x27 + 0x58);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar17 = *puVar47;
    uVar14 = *(uint *)(lVar32 + 0x18);
    if (uVar14 <= uVar17) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(unaff_x19 + 0x78) =
         *(undefined4 *)(lVar32 + (long)(int)uVar17 * unaff_x27 + 0x60);
    if (bVar11) {
      lVar45 = *(long *)(unaff_x19 + 0x20);
      if (lVar45 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
      if ((*(int *)(lVar45 + (long)(int)uVar18 * 0x10 + 0x24) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
      if (uVar14 <= uVar17 - 1) goto thunk_FUN_01ab6c44;
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar70 = *(float *)(lVar32 + (long)(int)(uVar17 - 1) * (long)iVar19 + 0x68);
      iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar32 = *in_stack_000001c8;
    }
    else {
LAB_0378d570:
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar70 = *(float *)(unaff_x19 + 0xf4);
      iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
      lVar32 = *(long *)(unaff_x19 + 0x68);
    }
    if (lVar32 == 0) goto LAB_03793c9c;
    fVar54 = (float)FUN_03776960(lVar32 + 0xb0,0);
    fVar48 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar48 = 1.0;
    }
    fStack0000000000000170 = 0.0;
    fVar50 = 0.0;
    if (!(bool)(bVar11 & in_stack_0000169c == 0x2026)) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar50 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
    }
    lVar32 = *(long *)(unaff_x19 + 0x1588);
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto LAB_03793c9c;
    fVar68 = *(float *)(unaff_x19 + 0xf0);
    fVar49 = *(float *)(lVar32 + 0x2c);
    fVar62 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar51 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar71 = *(float *)(unaff_x19 + 0xf0);
    fVar52 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(unaff_x19 + 0x324);
    if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = lVar32 + (long)(int)uVar14 * unaff_x27;
    fVar48 = ((fStack000000000000017c * fVar70) / (float)iVar15) * fVar54 * fVar48;
    fVar62 = fVar48 * fVar68 * fVar49 * fVar62;
    *(undefined1 *)(lVar45 + 0x28) = 1;
    *(float *)(lVar45 + 0x16c) = fVar62;
    in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
    fVar52 = fVar48 * fVar51 * fVar71 * fVar52;
LAB_0378db90:
    unaff_s13 = fVar62;
    if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
      unaff_s13 = 0.0;
    }
  }
  else {
    if (cVar42 == '\x02') {
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
      plVar43 = *(long **)(lVar32 + (long)(int)*puVar47 * unaff_x27 + 0x30);
      if (plVar43 == (long *)0x0) goto LAB_03793c9c;
      bVar12 = *(byte *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__ +
                        0x130);
      if ((*(byte *)(*plVar43 + 0x130) < bVar12) ||
         (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar12 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar43);
      }
      plVar24 = (long *)FUN_03783144(plVar43,0);
      if (plVar24 == (long *)0x0) {
        plVar24 = (long *)0x0;
        *in_stack_00000160 = 0;
      }
      else {
        lVar32 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
        bVar12 = *(byte *)(lVar32 + 0x130);
        if (*(byte *)(*plVar24 + 0x130) < bVar12) {
          plVar35 = (long *)0x0;
        }
        else {
          plVar35 = plVar24;
          if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar12 * 8 + -8) != lVar32) {
            plVar35 = (long *)0x0;
          }
        }
        *in_stack_00000160 = (long)plVar35;
        if (*(byte *)(*plVar24 + 0x130) < bVar12) {
          plVar24 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar12 * 8 + -8) != lVar32) {
          plVar24 = (long *)0x0;
        }
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000160,plVar24);
      iVar15 = FUN_0377acf0(plVar43,0);
      *(int *)(unaff_x19 + 0x157c) = iVar15;
      if (in_stack_0000169c == 0x3c) {
        in_stack_0000169c = iVar15 + 0xe000;
      }
      else {
        uVar16 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        *(undefined4 *)(unaff_x19 + 0x1580) = uVar16;
      }
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      fVar62 = *(float *)(unaff_x19 + 0xf4);
      FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
      memcpy(&stack0x00001610,&stack0x000016a0,0x60);
      iVar15 = FUN_03776950(&stack0x00001610,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
      memcpy(&stack0x00001610,&stack0x000016a0,0x60);
      fVar48 = (float)FUN_03776960(&stack0x00001610,0);
      fVar70 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar70 = 1.0;
      }
      if (*in_stack_00000160 == 0) goto LAB_03793c9c;
      fVar70 = (fVar62 / (float)iVar15) * fVar48 * fVar70;
      iVar15 = FUN_03776950(*in_stack_00000160 + 0x48,0);
      fVar62 = *(float *)(unaff_x19 + 0xf4);
      if (iVar15 < 1) {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
        fStack0000000000000170 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fStack0000000000000170 = 1.0;
        }
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar54 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
        if (plVar43[4] == 0) goto LAB_03793c9c;
        FUN_03776e6c(&stack0x000016a0,plVar43[4],0);
        fVar68 = (float)FUN_03776c9c(&stack0x000015c0,0);
        if (plVar43[4] == 0) goto LAB_03793c9c;
        fVar49 = *(float *)((long)plVar43 + 0x2c);
        fVar51 = (float)FUN_03776ea8(plVar43[4],0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar50 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar71 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar55 = *(float *)(unaff_x19 + 0xf0);
        fVar52 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
        if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
        fVar52 = fVar70 * fVar71 * fVar55 * fVar52;
        fStack0000000000000170 = (fVar62 / (float)iVar15) * fVar48 * fStack0000000000000170;
        fVar62 = fStack0000000000000170 * (fVar54 / fVar68) * fVar49 * fVar51;
        fStack0000000000000170 = fStack0000000000000170 / fVar62;
        fVar50 = fStack0000000000000170 * fVar50;
        fVar70 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
        fStack0000000000000170 = fStack0000000000000170 * fVar70;
      }
      else {
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        iVar15 = FUN_03776950(*in_stack_00000160 + 0x48,0);
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar48 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
        if (plVar43[4] == 0) goto LAB_03793c9c;
        fVar68 = *(float *)((long)plVar43 + 0x2c);
        fVar54 = in_stack_00000150;
        if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
          fVar54 = 1.0;
        }
        fVar49 = (float)FUN_03776ea8(plVar43[4],0);
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar50 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar51 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
        if (*in_stack_00000160 == 0) goto LAB_03793c9c;
        fVar71 = *(float *)(unaff_x19 + 0xf0);
        fVar52 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
        if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
        fVar52 = fVar70 * fVar51 * fVar71 * fVar52;
        fVar62 = (fVar62 / (float)iVar15) * fVar48 * fVar54 * fVar68 * fVar49;
        fStack0000000000000170 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
      }
      *in_stack_000001a8 = (long)plVar43;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8,plVar43);
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      lVar32 = lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27;
      *(undefined1 *)(lVar32 + 0x28) = 2;
      *(float *)(lVar32 + 0x16c) = fVar62;
      *(long *)(lVar32 + 0x48) = *in_stack_00000160;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
      *(long *)(lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27 + 0x40) = *in_stack_000001c8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar14 = *in_stack_000001d0;
      if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      *(undefined4 *)(lVar32 + (long)(int)uVar14 * unaff_x27 + 0x60) =
           *(undefined4 *)(unaff_x19 + 0x78);
      *(undefined4 *)(unaff_x19 + 0x78) = uVar53;
      in_stack_000001a0 = 0.0;
      puVar47 = in_stack_000001d0;
      goto LAB_0378db90;
    }
    lVar32 = *in_stack_000001e8;
    fVar52 = 0.0;
    unaff_s13 = fVar62;
    if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
      unaff_s13 = fVar52;
    }
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar14 = *puVar47;
    fVar50 = 0.0;
    fStack0000000000000170 = 0.0;
  }
  if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)uVar14 * (long)iVar19;
  *(short *)(lVar32 + 0x20) = (short)in_stack_0000169c;
  *(undefined4 *)(lVar32 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
  *(undefined4 *)(lVar32 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
       *(undefined4 *)(unaff_x19 + 0x1b0);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
       *(undefined4 *)(unaff_x19 + 0x1b4);
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar20 = in_stack_00000100[1];
  in_stack_000016a0 = *in_stack_00000100;
  if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
  *(undefined4 *)(lVar32 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
  *(undefined8 *)(lVar32 + 400) = uVar20;
  *(undefined8 *)(lVar32 + 0x188) = in_stack_000016a0;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)*puVar47 * unaff_x27;
  lVar45 = *(long *)(lVar32 + 0x38);
  *(undefined4 *)(lVar32 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
  if ((lVar45 == 0) &&
     ((*in_stack_000001a8 == 0 || (lVar45 = *(long *)(*in_stack_000001a8 + 0x20), lVar45 == 0))))
  goto LAB_03793c9c;
  FUN_03776e6c(&stack0x000016a0,lVar45,0);
  if (in_stack_0000169c >> 0x10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar14 = FUN_026b63d8(in_stack_0000169c,0);
    uVar14 = uVar14 & 1;
  }
  else {
    uVar14 = 0;
  }
  uVar53 = 0;
  fVar70 = *(float *)(in_stack_000001e0 + 0xc0);
  if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
    uVar17 = *puVar47;
    uVar44 = *(uint *)(*in_stack_000001a8 + 0x28);
    if ((int)uVar17 < (int)uStack00000000000000dc) {
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= uVar17 + 1) goto thunk_FUN_01ab6c44;
      lVar32 = *(long *)(lVar32 + (long)(int)(uVar17 + 1) * (long)iVar19 + 0x30);
      if ((((lVar32 == 0) || (*in_stack_000001c8 == 0)) ||
          (lVar45 = *(long *)(*in_stack_000001c8 + 0x170), lVar45 == 0)) ||
         (lVar45 = *(long *)(lVar45 + 0x40), lVar45 == 0)) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar44 | *(int *)(lVar32 + 0x28) << 0x10
                   );
      uVar22 = FUN_0219f8b8(lVar45,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar22 & 1) != 0) {
        FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
        uVar53 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                           (&stack0x00001570,0);
        uVar22 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar22 & 0x100) != 0) {
          fVar70 = 0.0;
        }
      }
      uVar17 = *puVar47;
    }
    if (0 < (int)uVar17) {
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= uVar17 - 1) goto thunk_FUN_01ab6c44;
      lVar32 = *(long *)(lVar32 + (ulong)(uVar17 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
      if (((lVar32 == 0) || (*in_stack_000001c8 == 0)) ||
         ((lVar45 = *(long *)(*in_stack_000001c8 + 0x170), lVar45 == 0 ||
          (lVar45 = *(long *)(lVar45 + 0x40), lVar45 == 0)))) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                    *(uint *)(lVar32 + 0x28) | uVar44 << 0x10);
      uVar22 = FUN_0219f8b8(lVar45,&stack0x000016a0,&stack0x00001590,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                           );
      if ((uVar22 & 1) != 0) {
        FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
        UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent(&stack0x00001570,0);
        FUN_03778e8c(uVar53,0);
        uVar22 = FUN_037791f0(&stack0x00001590,0);
        if ((uVar22 & 0x100) != 0) {
          fVar70 = 0.0;
        }
      }
    }
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar17 = *puVar47;
  uVar53 = FUN_03778e7c(&stack0x000015e0,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar32 + (long)(int)uVar17 * unaff_x27 + 0x160) = uVar53;
  if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0)
      == 0) {
    thunk_FUN_01a58e78();
  }
  uVar22 = FUN_037a5c04(in_stack_0000169c,0);
  uVar17 = *puVar47;
  if ((uVar22 & 1) == 0) {
    if ((uVar22 & 1) == 0 && 0 < (int)uVar17) {
      uVar44 = *(uint *)(unaff_x19 + 0x19c4);
      if ((uVar44 == 0x80000000) || (uVar44 != uVar17 - 1)) {
        do {
          uVar44 = uVar17 - 1;
          uVar53 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
          if (((int)uVar17 < 1) || (uVar44 == *(uint *)(unaff_x19 + 0x19c4))) {
            uVar17 = *(uint *)(unaff_x19 + 0x19c4);
            if (uVar17 == 0x80000000) goto LAB_0378dfc4;
            lVar32 = *in_stack_000001e8;
            if (lVar32 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
            lVar32 = *(long *)(lVar32 + (long)(int)uVar17 * unaff_x27 + 0x30);
            if ((lVar32 == 0) || (lVar32 = FUN_03787a68(lVar32,0), lVar32 == 0)) goto LAB_03793c9c;
            uVar17 = FUN_03776e5c(lVar32,0);
            if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
            iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
            if (((*in_stack_000001c8 == 0) ||
                (lVar32 = FUN_03779cb4(*in_stack_000001c8,0), lVar32 == 0)) ||
               (*(long *)(lVar32 + 0x48) == 0)) goto LAB_03793c9c;
            in_stack_000016a0 = CONCAT44(uVar53,uVar17 | iVar15 << 0x10);
            uVar25 = FUN_0219f8b8(*(long *)(lVar32 + 0x48),&stack0x000016a0,&stack0x00001518,
                                  *(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__)
            ;
            puVar47 = in_stack_000001d0;
            if ((uVar25 & 1) == 0) goto LAB_0378dfc4;
            lVar32 = *in_stack_000001e8;
            if (lVar32 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
            fVar70 = *(float *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 +
                               0x148);
            fVar68 = *(float *)(unaff_x19 + 0x2f4);
            FUN_037793b0(&stack0x00001518,0);
            fVar48 = (float)FUN_03779388(&stack0x00001550,0);
            FUN_037793c0(&stack0x00001518,0);
            fVar54 = (float)FUN_03779398(&stack0x00001548,0);
            FUN_03778e64(((fVar70 - fVar68) / unaff_s13 + fVar48) - fVar54,&stack0x000015e0,0);
            FUN_037793b0(&stack0x00001518,0);
            fVar70 = (float)FUN_03779390(&stack0x00001550,0);
            puVar26 = &stack0x00001518;
            goto LAB_0378f5a8;
          }
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar32 + 0x18) <= uVar44) goto thunk_FUN_01ab6c44;
          lVar32 = *(long *)(lVar32 + (ulong)uVar44 * (unaff_x27 & 0xffffffff) + 0x30);
          if ((lVar32 == 0) || (lVar32 = FUN_03787a68(lVar32,0), lVar32 == 0)) goto LAB_03793c9c;
          uVar17 = FUN_03776e5c(lVar32,0);
          if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
          iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
          if (((*in_stack_000001c8 == 0) ||
              (lVar32 = FUN_03779cb4(*in_stack_000001c8,0), lVar32 == 0)) ||
             (*(long *)(lVar32 + 0x50) == 0)) goto LAB_03793c9c;
          in_stack_000016a0 = CONCAT44(uVar53,uVar17 | iVar15 << 0x10);
          uVar25 = FUN_0219f8b8(*(long *)(lVar32 + 0x50),&stack0x000016a0,&stack0x00001530,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__);
          puVar47 = in_stack_000001d0;
          uVar17 = uVar44;
        } while ((uVar25 & 1) == 0);
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar44) goto thunk_FUN_01ab6c44;
        fVar68 = *(float *)(unaff_x19 + 0x2e0);
        fVar49 = *(float *)(unaff_x19 + 0x180);
        lVar32 = lVar32 + uVar44 * unaff_x27;
        fVar70 = *(float *)(unaff_x19 + 0x2f4);
        fVar51 = *(float *)(lVar32 + 0x148);
        fVar71 = *(float *)(lVar32 + 0x150);
        FUN_037793d0(&stack0x00001530,0);
        fVar48 = (float)FUN_03779388(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar54 = (float)FUN_03779398(&stack0x00001548,0);
        FUN_03778e64(((fVar51 - fVar70) / unaff_s13 + fVar48) - fVar54,&stack0x000015e0,0);
        FUN_037793d0(&stack0x00001530,0);
        fVar70 = (float)FUN_03779390(&stack0x00001550,0);
        FUN_037793e0(&stack0x00001530,0);
        fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
        FUN_03778e74(((fVar71 - ((fVar52 - fVar68) + fVar49)) / unaff_s13 + fVar70) - fVar48,
                     &stack0x000015e0,0);
        fVar70 = 0.0;
      }
      else {
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar44) goto thunk_FUN_01ab6c44;
        lVar32 = *(long *)(lVar32 + (long)(int)uVar44 * unaff_x27 + 0x30);
        if ((lVar32 == 0) || (lVar32 = FUN_03787a68(lVar32,0), lVar32 == 0)) goto LAB_03793c9c;
        uVar17 = FUN_03776e5c(lVar32,0);
        if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
        iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
        if (((*in_stack_000001c8 == 0) || (lVar32 = FUN_03779cb4(*in_stack_000001c8,0), lVar32 == 0)
            ) || (*(long *)(lVar32 + 0x48) == 0)) goto LAB_03793c9c;
        in_stack_000016a0 =
             CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar17 | iVar15 << 0x10);
        uVar25 = FUN_0219f8b8(*(long *)(lVar32 + 0x48),&stack0x000016a0,&stack0x00001558,
                              *(undefined8 *)
                               Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__);
        puVar47 = in_stack_000001d0;
        if ((uVar25 & 1) != 0) {
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4)) goto thunk_FUN_01ab6c44;
          fVar70 = *(float *)(lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) * unaff_x27 + 0x148)
          ;
          fVar68 = *(float *)(unaff_x19 + 0x2f4);
          FUN_037793b0(&stack0x00001558,0);
          fVar48 = (float)FUN_03779388(&stack0x00001550,0);
          FUN_037793c0(&stack0x00001558,0);
          fVar54 = (float)FUN_03779398(&stack0x00001548,0);
          FUN_03778e64(((fVar70 - fVar68) / unaff_s13 + fVar48) - fVar54,&stack0x000015e0,0);
          FUN_037793b0(&stack0x00001558,0);
          fVar70 = (float)FUN_03779390(&stack0x00001550,0);
          puVar26 = &stack0x00001558;
LAB_0378f5a8:
          FUN_037793c0(puVar26,0);
          fVar48 = (float)FUN_037793a0(&stack0x00001548,0);
          FUN_03778e74(fVar70 - fVar48,&stack0x000015e0,0);
          fVar70 = 0.0;
          puVar47 = in_stack_000001d0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x19 + 0x19c4) = uVar17;
  }
LAB_0378dfc4:
  fVar48 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fVar54 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
    fVar49 = *(float *)(unaff_x19 + 0x2f4);
    fVar68 = (float)FUN_03776cb4(&stack0x000015f0,0);
    fVar49 = fVar49 - unaff_s13 * fVar68 * (1.0 - *(float *)(unaff_x19 + 0x1594));
    *(float *)(unaff_x19 + 0x2f4) = fVar49;
    if ((uVar14 != 0) || (in_stack_0000169c == 0x200b)) {
      *(float *)(unaff_x19 + 0x2f4) =
           fVar49 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x2f0);
  if (fVar68 == 0.0) {
    fVar68 = 0.0;
  }
  else {
    fVar49 = (float)FUN_03776c94(&stack0x000015f0,0);
    fVar51 = (float)FUN_03776ca4(&stack0x000015f0,0);
    fVar68 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (fVar68 * 0.5 - unaff_s13 * (fVar49 * 0.5 + fVar51));
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2f4) + fVar68;
  }
  uVar17 = 0;
  if ((cVar29 == '\0') && (*unaff_x24 == '\x01')) {
    uVar17 = *(uint *)(unaff_x19 + 0x124) & 1;
  }
  lVar32 = *in_stack_00000190;
  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar25 = FUN_036cee6c(lVar32,0,0);
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
  if (uVar17 == 0) {
    fVar49 = 0.0;
    if ((uVar25 & 1) != 0) {
      lVar32 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar25 = FUN_03699d3c(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
      if ((uVar25 & 1) != 0) {
        lVar32 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar32 == 0) goto LAB_03793c9c;
        uVar25 = FUN_03699d3c(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
        if ((uVar25 & 1) != 0) {
          lVar32 = *in_stack_00000190;
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          if (lVar32 == 0) goto LAB_03793c9c;
          fVar51 = (float)FUN_0369e060(lVar32,*(undefined4 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          if ((*in_stack_000001c8 == 0) || (*in_stack_00000190 == 0)) goto LAB_03793c9c;
          fVar55 = *(float *)(*in_stack_000001c8 + 0x188);
          fVar71 = (float)FUN_0369e060(*in_stack_00000190,
                                       *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
          fVar71 = fVar71 * fVar51 * fVar55 * 0.25;
          if (fVar51 < in_stack_000001a0 + fVar71) {
            in_stack_000001a0 = fVar51 - fVar71;
          }
          goto LAB_0378e344;
        }
      }
    }
    fVar71 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
  }
  else {
    fVar71 = 0.0;
    unaff_x28 = (long *)PTR_DAT_03cbe438;
    if ((uVar25 & 1) != 0) {
      lVar32 = *in_stack_00000190;
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar25 = FUN_03699d3c(lVar32,*(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
      unaff_x28 = (long *)PTR_DAT_03cbe438;
      if ((uVar25 & 1) != 0) {
        lVar32 = *in_stack_00000190;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (lVar32 == 0) goto LAB_03793c9c;
        fVar49 = (float)FUN_0369e060(lVar32,*(undefined4 *)
                                             (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar51 = (float)FUN_03779d1c(*in_stack_000001c8,0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if (*in_stack_00000190 == 0) goto LAB_03793c9c;
        fVar71 = (float)FUN_0369e060(*in_stack_00000190,
                                     *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
        fVar71 = fVar49 * fVar51 * 0.25 * fVar71;
        if (fVar49 < in_stack_000001a0 + fVar71) {
          in_stack_000001a0 = fVar49 - fVar71;
        }
      }
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar49 = (float)FUN_03779d2c(*in_stack_000001c8,0);
  }
LAB_0378e344:
  fVar64 = *(float *)(unaff_x19 + 0x2f4);
  fVar51 = (float)FUN_03776ca4(&stack0x000015f0,0);
  fVar67 = *(float *)(unaff_x19 + 0x19a8);
  fVar55 = (float)FUN_03778e5c(&stack0x000015e0,0);
  fVar64 = fVar64 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    unaff_s13 * (fVar55 + ((fVar51 * fVar67 - in_stack_000001a0) - fVar71));
  fVar51 = (float)FUN_03776cac(&stack0x000015f0,0);
  fVar55 = (float)FUN_03778e6c(&stack0x000015e0,0);
  fStack00000000000001bc =
       *(float *)(unaff_x19 + 0x180) +
       ((fVar52 + unaff_s13 * (in_stack_000001a0 + fVar51 + fVar55)) - *(float *)(unaff_x19 + 0x2e0)
       );
  fVar51 = (float)FUN_03776c9c(&stack0x000015f0,0);
  fVar67 = fStack00000000000001bc - unaff_s13 * (in_stack_000001a0 + in_stack_000001a0 + fVar51);
  fVar51 = (float)FUN_03776c94(&stack0x000015f0,0);
  fVar60 = fVar64 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                    unaff_s13 *
                    (fVar71 + fVar71 +
                    in_stack_000001a0 + in_stack_000001a0 + fVar51 * *(float *)(unaff_x19 + 0x19a8))
  ;
  fVar51 = fVar64;
  fVar55 = fVar60;
  if (((cVar29 == '\0') && (*unaff_x24 == '\x01')) && ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)
     ) {
    if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
    iVar15 = *(int *)(unaff_x19 + 0x19a4);
    fVar51 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar55 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar73 = *(float *)(unaff_x19 + 0xf0);
    fVar57 = *(float *)(unaff_x19 + 0x180);
    fVar65 = (float)iVar15 * fStack00000000000000a8;
    fVar56 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
    fVar56 = fVar56 * fVar73 * (fVar51 - (fVar55 + fVar57)) * 0.5;
    fVar51 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar55 = fVar65 * unaff_s13 * ((fVar71 + in_stack_000001a0 + fVar51) - fVar56);
    fVar73 = (float)FUN_03776cac(&stack0x000015f0,0);
    fVar57 = (float)FUN_03776c9c(&stack0x000015f0,0);
    fStack00000000000001bc = fStack00000000000001bc + 0.0;
    fVar51 = fVar64 + fVar55;
    fVar67 = fVar67 + 0.0;
    fVar55 = fVar60 + fVar55;
    fVar65 = fVar65 * unaff_s13 * ((((fVar73 - fVar57) - in_stack_000001a0) - fVar71) - fVar56);
    fVar64 = fVar64 + fVar65;
    fVar60 = fVar60 + fVar65;
  }
  uVar20 = *in_stack_000000f8;
  uVar66 = *_fStack00000000000000f0;
  if (DAT_0411f169 == '\0') {
    FUN_01ab69ac(PTR_DAT_03cbdeb8);
    DAT_0411f169 = '\x01';
  }
  uVar58 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
  uVar59 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
  fVar71 = 0.0;
  if (DAT_00d38b04 <
      (float)((ulong)uVar66 >> 0x20) * (float)((ulong)uVar59 >> 0x20) +
      (float)uVar66 * (float)uVar59 +
      (float)uVar20 * (float)uVar58 +
      (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar58 >> 0x20)) {
    fVar63 = 0.0;
    fVar65 = 0.0;
    fVar57 = 0.0;
    fVar56 = fStack00000000000001bc;
    fVar73 = fVar67;
  }
  else {
    FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                 *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                 *(undefined4 *)(unaff_x19 + 0x19c0),0);
    fVar69 = (fVar55 + fVar64) * 0.5;
    fVar72 = (fVar67 + fStack00000000000001bc) * 0.5;
    fStack00000000000001bc = fStack00000000000001bc - fVar72;
    fVar57 = 0.0;
    fVar56 = fStack00000000000001bc;
    fVar51 = (float)FUN_036bdd2c(fVar51 - fVar69,&stack0x000014d0,0);
    fVar51 = fVar69 + fVar51;
    fVar57 = fVar57 + 0.0;
    fVar73 = fVar67 - fVar72;
    fVar65 = 0.0;
    fVar67 = fVar73;
    fVar64 = (float)FUN_036bdd2c(fVar64 - fVar69,&stack0x000014d0,0);
    fVar64 = fVar69 + fVar64;
    fVar67 = fVar72 + fVar67;
    fVar65 = fVar65 + 0.0;
    fVar63 = 0.0;
    fVar55 = (float)FUN_036bdd2c(fVar55 - fVar69,&stack0x000014d0,0);
    fVar55 = fVar69 + fVar55;
    fStack00000000000001bc = fVar72 + fStack00000000000001bc;
    fVar63 = fVar63 + 0.0;
    fVar71 = 0.0;
    fVar60 = (float)FUN_036bdd2c(fVar60 - fVar69,&stack0x000014d0,0);
    fVar60 = fVar69 + fVar60;
    fVar71 = fVar71 + 0.0;
    fVar56 = fVar72 + fVar56;
    fVar73 = fVar72 + fVar73;
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)*puVar47 * unaff_x27;
  *(float *)(lVar32 + 0x124) = fVar64;
  *(float *)(lVar32 + 0x128) = fVar67;
  *(float *)(lVar32 + 300) = fVar65;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)*puVar47 * unaff_x27;
  *(float *)(lVar32 + 0x118) = fVar51;
  *(float *)(lVar32 + 0x11c) = fVar56;
  *(float *)(lVar32 + 0x120) = fVar57;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)*puVar47 * unaff_x27;
  *(float *)(lVar32 + 0x138) = fVar63;
  *(float *)(lVar32 + 0x130) = fVar55;
  *(float *)(lVar32 + 0x134) = fStack00000000000001bc;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *puVar47) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)*puVar47 * unaff_x27;
  *(float *)(lVar32 + 0x13c) = fVar60;
  *(float *)(lVar32 + 0x140) = fVar73;
  *(float *)(lVar32 + 0x144) = fVar71;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar17 = *puVar47;
  fVar71 = *(float *)(unaff_x19 + 0x2f4);
  fVar51 = (float)FUN_03778e5c(&stack0x000015e0,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
  *(float *)(lVar32 + (long)(int)uVar17 * unaff_x27 + 0x148) = fVar71 + unaff_s13 * fVar51;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar17 = *puVar47;
  fVar60 = *(float *)(unaff_x19 + 0x2e0);
  fVar71 = *(float *)(unaff_x19 + 0x180);
  fVar51 = (float)FUN_03778e6c(&stack0x000015e0,0);
  if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
  *(float *)(lVar32 + (long)(int)uVar17 * unaff_x27 + 0x150) =
       (fVar52 - fVar60) + fVar71 + unaff_s13 * fVar51;
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar17 = *puVar47;
  lVar45 = (long)(int)uVar17;
  if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
  *(float *)(lVar32 + lVar45 * unaff_x27 + 0x168) = (fVar55 - fVar64) / (fVar56 - fVar67);
  fVar48 = unaff_s13 * (fVar50 + fVar48);
  if (*unaff_x24 == '\x01') {
    fVar48 = fVar48 / fStack000000000000017c;
    fVar54 = (unaff_s13 * (fStack0000000000000170 + fVar54)) / fStack000000000000017c;
  }
  else {
    fVar54 = unaff_s13 * (fStack0000000000000170 + fVar54);
  }
  uVar44 = *(uint *)(unaff_x19 + 0x328);
  fVar50 = *(float *)(unaff_x19 + 0x180);
  bVar8 = uVar17 == uVar44;
  bVar9 = uVar14 == 0;
  fVar48 = fVar50 + fVar48;
  if (bVar9 || bVar8) {
    fVar54 = fVar50 + fVar54;
    fVar51 = fVar48;
    fVar52 = fVar54;
    if (fVar50 != 0.0) {
      fVar51 = (fVar48 - fVar50) / *(float *)(unaff_x19 + 0xf0);
      fVar52 = (fVar54 - fVar50) / *(float *)(unaff_x19 + 0xf0);
      if (fVar51 <= fVar48) {
        fVar51 = fVar48;
      }
      if (fVar54 <= fVar52) {
        fVar52 = fVar54;
      }
    }
    lVar23 = lVar32 + lVar45 * unaff_x27;
    fVar50 = fVar51;
    if (fVar51 <= *(float *)(unaff_x19 + 0x338)) {
      fVar50 = *(float *)(unaff_x19 + 0x338);
    }
    fVar71 = fVar52;
    if (*(float *)(unaff_x19 + 0x33c) <= fVar52) {
      fVar71 = *(float *)(unaff_x19 + 0x33c);
    }
    *(float *)(unaff_x19 + 0x338) = fVar50;
    *(float *)(unaff_x19 + 0x33c) = fVar71;
    *(float *)(lVar23 + 0x158) = fVar51;
    *(float *)(lVar23 + 0x15c) = fVar52;
    fVar51 = *(float *)(unaff_x19 + 0x2e0);
    fVar52 = fVar48 - fVar51;
  }
  else {
    fVar50 = *(float *)(unaff_x19 + 0x338);
    lVar23 = lVar32 + lVar45 * unaff_x27;
    *(float *)(lVar23 + 0x158) = fVar50;
    fVar54 = *(float *)(unaff_x19 + 0x33c);
    *(float *)(lVar23 + 0x15c) = fVar54;
    fVar51 = *(float *)(unaff_x19 + 0x2e0);
    fVar52 = fVar50 - fVar51;
  }
  *(float *)(lVar23 + 0x14c) = fVar52;
  *(float *)(lVar32 + lVar45 * unaff_x27 + 0x154) = fVar54 - fVar51;
  *(float *)(unaff_x19 + 0x378) = fVar54 - fVar51;
  if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
    if (bVar9 || bVar8) {
      *(float *)(unaff_x19 + 0x374) = fVar50;
      if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
      fVar54 = *(float *)(unaff_x19 + 0x370);
      fVar50 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
      fVar51 = *(float *)(unaff_x19 + 0x2e0);
      fStack000000000000017c = (unaff_s13 * fVar50) / fStack000000000000017c;
      if (fVar54 <= fStack000000000000017c) {
        fVar54 = fStack000000000000017c;
      }
      *(float *)(unaff_x19 + 0x370) = fVar54;
      if (fVar51 == 0.0) goto LAB_0378ee0c;
    }
  }
  else if ((bVar9 || bVar8) && fVar51 == 0.0) {
LAB_0378ee0c:
    fVar54 = *(float *)(unaff_x19 + 0x19c8);
    if (*(float *)(unaff_x19 + 0x19c8) <= fVar48) {
      fVar54 = fVar48;
    }
    *(float *)(unaff_x19 + 0x19c8) = fVar54;
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  unaff_w21 = *puVar47;
  if (*(uint *)(lVar32 + 0x18) <= unaff_w21) goto thunk_FUN_01ab6c44;
  lVar32 = lVar32 + (long)(int)unaff_w21 * unaff_x27;
  *(undefined1 *)(lVar32 + 0x1a0) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x158) & 0x18;
  if ((in_stack_0000169c == 9) ||
     ((((uVar14 == 0 && (in_stack_0000169c != 3)) &&
       ((in_stack_0000169c != 0x200b && (in_stack_0000169c != 0xad)))) ||
      (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 || (*unaff_x24 == '\x02'))))))
  {
    *(undefined1 *)(lVar32 + 0x1a0) = 1;
    pfVar33 = _fStack0000000000000130;
    pfVar39 = _iStack0000000000000138;
    if (bVar11) {
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      pfVar39 = (float *)(lVar32 + 100);
      pfVar33 = (float *)(lVar32 + 0x68);
    }
    fVar50 = *pfVar39;
    fVar54 = *pfVar33;
    fVar48 = *(float *)(unaff_x19 + 0x35c);
    fVar52 = *(float *)(unaff_x19 + 0x2f4);
    fStack0000000000000174 = (fStack000000000000012c - fVar50) - fVar54;
    bVar8 = true;
    if ((fVar48 <= fStack0000000000000174) && (bVar8 = false, !NAN(fVar48))) {
      bVar8 = fVar48 == -1.0;
    }
    if (!bVar8) {
      fStack0000000000000174 = fVar48;
    }
    fVar48 = 0.0;
    fVar71 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      fVar71 = (float)FUN_03776cb4(&stack0x000015f0,0);
      fVar51 = *(float *)(unaff_x19 + 0x2e0);
    }
    fVar55 = *(float *)(unaff_x19 + 0x1594);
    fVar67 = *(float *)(unaff_x19 + 0x33c);
    if (in_stack_0000169c != 0xad) {
      fVar62 = unaff_s13;
    }
    if ((0.0 < fVar51) && (fVar48 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar48 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    unaff_w21 = *in_stack_000001d0;
    fVar48 = (*(float *)(unaff_x19 + 0x374) - (fVar67 - fVar51)) + fVar48;
    if (in_stack_00000108 < fVar48) {
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = unaff_w21;
      }
      uVar20 = DAT_00d37868;
      if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
        fVar64 = *(float *)(in_stack_000001e0 + 0xd0);
        if (((fVar64 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar51)) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar62 = *(float *)(unaff_x19 + 0x15b0) +
                   ((in_stack_00000018._4_4_ - fVar48) / (float)*(int *)(unaff_x19 + 0x340)) /
                   fStack0000000000000088;
          if (fVar62 <= fVar64) {
            fVar62 = fVar64;
          }
          goto LAB_03793b50;
        }
        fVar51 = *_fStack00000000000000d0;
        fVar48 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar48 < fVar51) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar62 = (fVar51 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar62 <= DAT_00d38b84) {
            fVar62 = DAT_00d38b84;
          }
          fVar70 = (fVar51 - fVar62) * 20.0 + 0.5;
          fVar62 = DAT_00d38e60;
          if (fVar70 != INFINITY) {
            fVar62 = (float)(int)fVar70 / 20.0;
          }
          if (fVar62 <= fVar48) {
            fVar62 = fVar48;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar51;
          goto LAB_037910ac;
        }
      }
      switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
      case 1:
        if (0 < *(int *)(unaff_x19 + 0x340)) {
          iVar19 = FUN_020aa428(in_stack_00000078,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                               );
          uVar20 = DAT_00d37868;
          if (iVar19 == 0) {
            uVar18 = 0xffffffff;
            in_stack_000001d0[0] = 0;
            in_stack_000001d0[1] = 0;
            plVar43 = in_stack_000001e8;
            puVar47 = in_stack_000001d0;
            fVar62 = unaff_s13;
          }
          else {
            FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
            memcpy(&stack0x00001138,&stack0x000016a0,0x398);
            iVar19 = FUN_03797154();
            uVar18 = iVar19 - 1;
            iVar19 = *(int *)(unaff_x19 + 0x324) + -1;
            *(int *)(unaff_x19 + 0x324) = iVar19;
            uVar20 = CONCAT44(0x2026,iVar19);
            in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
            plVar43 = in_stack_000001e8;
            puVar47 = in_stack_000001d0;
            fVar62 = unaff_s13;
          }
          goto LAB_0378d260;
        }
        break;
      case 3:
        uVar18 = FUN_03797154();
        uVar20 = CONCAT44((int)((ulong)uVar21 >> 0x20),unaff_w21);
        plVar43 = in_stack_000001e8;
        puVar47 = in_stack_000001d0;
        fVar62 = unaff_s13;
        goto LAB_0378d260;
      case 5:
        if (unaff_w21 == 0 || (int)uVar18 < 0) {
          uVar18 = 0xffffffff;
          *in_stack_000001d0 = 0;
          plVar43 = in_stack_000001e8;
          puVar47 = in_stack_000001d0;
          fVar62 = unaff_s13;
          goto LAB_0378d260;
        }
        fVar62 = *(float *)(unaff_x19 + 0x338);
        uVar18 = FUN_03797154();
        if (fVar62 - fVar67 <= in_stack_00000108) {
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
          plVar43 = in_stack_000001e8;
          puVar47 = in_stack_000001d0;
          uVar20 = uVar21;
          fVar62 = unaff_s13;
          goto LAB_0378d260;
        }
        goto LAB_0378f7e8;
      case 6:
        uVar18 = FUN_03797154();
        uVar20 = CONCAT44(3,unaff_w21);
        plVar43 = in_stack_000001e8;
        puVar47 = in_stack_000001d0;
        fVar62 = unaff_s13;
        goto LAB_0378d260;
      }
    }
    if ((uVar22 & 1) != 0) {
      fVar48 = ABS(fVar52) + fVar71 * (1.0 - fVar55) * fVar62;
      fVar62 = 1.0;
      if (uVar30 != 0) {
        fVar62 = DAT_00d38acc;
      }
      if (fVar62 * fStack0000000000000174 < fVar48) {
        if ((iStack000000000000008c == 0) || (unaff_w21 == *(uint *)(unaff_x19 + 0x328))) {
          if ((*(char *)(in_stack_000001e0 + 0xa8) == '\0') ||
             (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
LAB_0378f2f0:
            iVar15 = *(int *)(in_stack_000001e0 + 0x74);
            if (iVar15 == 1) {
              iVar19 = FUN_020aa428(in_stack_00000078,
                                    *(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                   );
              uVar20 = DAT_00d37868;
              if (iVar19 == 0) {
                uVar18 = 0xffffffff;
                in_stack_000001d0[0] = 0;
                in_stack_000001d0[1] = 0;
                plVar43 = in_stack_000001e8;
                puVar47 = in_stack_000001d0;
                fVar62 = unaff_s13;
              }
              else {
                FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
                memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
                iVar19 = FUN_03797154();
                uVar18 = iVar19 - 1;
                iVar19 = *(int *)(unaff_x19 + 0x324) + -1;
                *(int *)(unaff_x19 + 0x324) = iVar19;
                in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                plVar43 = in_stack_000001e8;
                puVar47 = in_stack_000001d0;
                uVar20 = CONCAT44(0x2026,iVar19);
                fVar62 = unaff_s13;
              }
              goto LAB_0378d260;
            }
            if (iVar15 == 6) {
              uVar18 = FUN_03797154();
              plVar43 = in_stack_000001e8;
              puVar47 = in_stack_000001d0;
              unaff_w21 = *(uint *)(unaff_x19 + 0x324);
              goto LAB_037909d0;
            }
            unaff_x22 = in_stack_000001e8;
            unaff_x29 = in_stack_000001d0;
            if (iVar15 == 3) goto code_r0x0378f314;
            goto LAB_0378f1e0;
          }
          fVar52 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
          if (fVar55 < fVar52) {
            fVar70 = fVar48 / (1.0 - fVar55);
            if (fVar55 <= 0.0) {
              fVar70 = fVar48;
            }
            fVar55 = fVar55 + (fVar48 - fVar62 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar70;
            goto FUN_03793c4c;
          }
          fVar52 = *(float *)(in_stack_000001e0 + 0xac);
          fVar71 = *_fStack00000000000000d0;
          if (fVar71 <= fVar52) goto LAB_0378f2f0;
LAB_03793bbc:
          fVar62 = (fVar71 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
          if (fVar62 <= DAT_00d38b84) {
            fVar62 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x1598) = fVar71;
          fVar70 = (fVar71 - fVar62) * 20.0 + 0.5;
          fVar62 = DAT_00d38e60;
          if (fVar70 != INFINITY) {
            fVar62 = (float)(int)fVar70 / 20.0;
          }
          if (fVar62 <= fVar52) {
            fVar62 = fVar52;
          }
LAB_037910ac:
          *(float *)(unaff_x19 + 0xec) = fVar62;
          goto LAB_0378c81c;
        }
        uVar18 = FUN_03797154();
        if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto LAB_03793c9c;
          uVar40 = *in_stack_000001d0;
          if (*(uint *)(lVar32 + 0x18) <= uVar40) goto thunk_FUN_01ab6c44;
          fVar52 = *(float *)(unaff_x19 + 0x2e0);
          fVar51 = 0.0;
          if ((0.0 < fVar52) && (fVar51 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
            fVar51 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
          }
          fVar51 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
                   *(float *)(lVar32 + (long)(int)uVar40 * unaff_x27 + 0x158) +
                   (fVar51 - *(float *)(unaff_x19 + 0x33c)) +
                   fStack0000000000000088 *
                   (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
        }
        else {
          fVar51 = *(float *)(in_stack_000001e0 + 200);
          *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
          lVar32 = *in_stack_000001e8;
          if (lVar32 == 0) goto LAB_03793c9c;
          fVar52 = *(float *)(unaff_x19 + 0x2e0);
          uVar40 = *(uint *)(unaff_x19 + 0x324);
          fVar51 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar51;
        }
        if ((*(uint *)(lVar32 + 0x18) <= uVar40) ||
           (uVar6 = uVar40 - 1, *(uint *)(lVar32 + 0x18) <= uVar6)) goto thunk_FUN_01ab6c44;
        fVar51 = (fVar51 + *(float *)(unaff_x19 + 0x374) + fVar52) -
                 *(float *)(lVar32 + (long)(int)uVar40 * (long)iVar19 + 0x15c);
        if (((in_stack_000000b8 & 1) == 0 &&
             *(short *)(lVar32 + (long)(int)uVar6 * (long)iVar19 + 0x20) == 0xad) &&
           ((fVar51 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
          uVar18 = uVar18 - 1;
          in_stack_000000b8 = 0;
          *in_stack_000001d0 = uVar6;
          plVar43 = in_stack_000001e8;
          puVar47 = in_stack_000001d0;
          uVar20 = CONCAT44(0x2d,uVar6);
          fVar62 = unaff_s13;
          goto LAB_0378d260;
        }
        if (*(short *)(lVar32 + (long)(int)uVar40 * unaff_x27 + 0x20) == 0xad) {
          in_stack_000000b8 = 1;
          plVar43 = in_stack_000001e8;
          puVar47 = in_stack_000001d0;
          uVar20 = uVar21;
          fVar62 = unaff_s13;
          goto LAB_0378d260;
        }
        if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) != 0) {
          fVar55 = *(float *)(unaff_x19 + 0x1594);
          fVar52 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
          if ((fVar52 <= fVar55) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
          {
            fVar71 = *_fStack00000000000000d0;
            fVar52 = *(float *)(in_stack_000001e0 + 0xac);
            if ((fVar52 < fVar71) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
            goto LAB_03793bbc;
            goto LAB_03790b7c;
          }
LAB_03793c60:
          fVar70 = fVar48;
          if (0.0 < fVar55) {
            fVar70 = fVar48 / (1.0 - fVar55);
          }
          fVar55 = fVar55 + (fVar48 - fVar62 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar70;
FUN_03793c4c:
          if (fVar52 <= fVar55) {
            fVar55 = fVar52;
          }
          *(float *)(unaff_x19 + 0x1594) = fVar55;
          goto LAB_0378c81c;
        }
LAB_03790b7c:
        iVar15 = *in_stack_00000030;
        if ((iVar15 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar15 != -1) != 0)) {
          uVar18 = FUN_03797154();
          unaff_x28 = (long *)PTR_DAT_03cbe438;
          lVar32 = *(long *)(in_stack_000001c0 + 0x30);
          if (lVar32 == 0) goto LAB_03793c9c;
          uVar40 = *in_stack_000001d0;
          uVar6 = uVar40 - 1;
          if (*(uint *)(lVar32 + 0x18) <= uVar6) goto thunk_FUN_01ab6c44;
          iStack0000000000000028 = iVar15;
          if (*(short *)(lVar32 + (long)(int)uVar6 * (long)iVar19 + 0x20) == 0xad) {
            uVar18 = uVar18 - 1;
            in_stack_000000b8 = 0;
            *in_stack_000001d0 = uVar6;
            plVar43 = in_stack_000001e8;
            puVar47 = in_stack_000001d0;
            uVar20 = CONCAT44(0x2d,uVar6);
            fVar62 = unaff_s13;
            goto LAB_0378d260;
          }
        }
        if (fVar51 <= in_stack_00000108) {
          FUN_037a1530(fStack0000000000000088);
          bStack00000000000000d8 = 1;
          in_stack_000000b8 = 0;
          uStack00000000000000ac = 1;
          plVar43 = in_stack_000001e8;
          puVar47 = in_stack_000001d0;
          uVar20 = uVar21;
          fVar62 = unaff_s13;
          goto LAB_0378d260;
        }
        if (*(int *)(unaff_x19 + 0x34c) == -1) {
          *(uint *)(unaff_x19 + 0x34c) = uVar40;
        }
        if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
          fVar52 = *(float *)(in_stack_000001e0 + 0xd0);
          if ((fVar52 < *(float *)(unaff_x19 + 0x15b0)) &&
             (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
            fVar62 = *(float *)(unaff_x19 + 0x15b0) +
                     ((in_stack_00000018._4_4_ - fVar51) / (float)(*(int *)(unaff_x19 + 0x340) + 1))
                     / fStack0000000000000088;
            if (fVar62 <= fVar52) {
              fVar62 = fVar52;
            }
LAB_03793b50:
            *(float *)(unaff_x19 + 0x15b0) = fVar62;
            goto LAB_0378c81c;
          }
          fVar55 = *(float *)(unaff_x19 + 0x1594);
          fVar52 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
          if ((fVar55 < fVar52) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793c60;
          fVar71 = *_fStack00000000000000d0;
          fVar52 = *(float *)(in_stack_000001e0 + 0xac);
          if ((fVar52 < fVar71) && (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4)))
          goto LAB_03793bbc;
        }
        switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
        case 0:
        case 2:
        case 4:
          FUN_037a1530(fStack0000000000000088);
          break;
        case 1:
          iVar19 = FUN_020aa428(in_stack_00000078,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                               );
          uVar20 = DAT_00d37868;
          if (iVar19 == 0) {
            in_stack_000000b8 = 0;
            in_stack_000001d0[0] = 0;
            in_stack_000001d0[1] = 0;
            plVar43 = in_stack_000001e8;
            puVar47 = in_stack_000001d0;
            uVar18 = 0xffffffff;
            fVar62 = unaff_s13;
          }
          else {
            FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
            memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
            iVar15 = FUN_03797154();
            in_stack_000000b8 = 0;
            iVar19 = *(int *)(unaff_x19 + 0x324) + -1;
            *(int *)(unaff_x19 + 0x324) = iVar19;
            in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
            plVar43 = in_stack_000001e8;
            puVar47 = in_stack_000001d0;
            uVar18 = iVar15 - 1;
            uVar20 = CONCAT44(0x2026,iVar19);
            fVar62 = unaff_s13;
          }
          goto LAB_0378d260;
        case 3:
          goto switchD_03790dc8_caseD_3;
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
          goto switchD_03790dc8_caseD_6;
        default:
          in_stack_000000b8 = 0;
          unaff_w21 = uVar40;
          goto LAB_0378f1e0;
        }
        in_stack_000000b8 = 0;
        goto LAB_0379053c;
      }
    }
LAB_0378f1e0:
    if (uVar14 == 0) {
      if (in_stack_0000169c == 0xad) {
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= unaff_w21) goto thunk_FUN_01ab6c44;
        *(undefined1 *)(lVar32 + (long)(int)unaff_w21 * (long)iVar19 + 0x1a0) = 0;
      }
      else {
        if (*unaff_x24 == '\x02') {
          FUN_0379c8ac();
        }
        else if (*unaff_x24 == '\x01') {
          FUN_0379bd40(in_stack_000001a0);
        }
        uVar40 = *in_stack_000001d0;
        if ((uStack00000000000000ac & 1) != 0) {
          *(uint *)(unaff_x19 + 0x330) = uVar40;
        }
        *(uint *)(unaff_x19 + 0x334) = uVar40;
        *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
        lVar32 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        uStack00000000000000ac = 0;
        *(float *)(lVar32 + 100) = fVar50;
        *(float *)(lVar32 + 0x68) = fVar54;
      }
    }
    else {
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= unaff_w21) goto thunk_FUN_01ab6c44;
      *(undefined1 *)(lVar32 + (long)(int)unaff_w21 * (long)iVar19 + 0x1a0) = 0;
      *(uint *)(unaff_x19 + 0x334) = unaff_w21;
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar40 = *(uint *)(lVar32 + 0x18);
      if (uVar40 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar45 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      iVar15 = *(int *)(lVar45 + 0x2c) + 1;
      *(int *)(lVar45 + 0x2c) = iVar15;
      *(int *)(unaff_x19 + 0x348) = iVar15;
      if (uVar40 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      *(float *)(lVar32 + 100) = fVar50;
      *(float *)(lVar32 + 0x68) = fVar54;
      *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
    }
  }
  else {
    if (((in_stack_0000169c & 0xfffffffe) == 10) && (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
      fVar62 = 0.0;
      if ((0.0 < fVar51) && (fVar62 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
        fVar62 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
      }
      if (in_stack_00000108 <
          (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar51)) + fVar62) {
        if (*(int *)(unaff_x19 + 0x34c) == -1) {
          *(uint *)(unaff_x19 + 0x34c) = unaff_w21;
        }
        uVar18 = FUN_03797154();
LAB_0378f7e8:
        plVar43 = in_stack_000001e8;
        puVar47 = in_stack_000001d0;
        uVar20 = CONCAT44(3,unaff_w21);
        fVar62 = unaff_s13;
        goto LAB_0378d260;
      }
    }
    if ((((in_stack_0000169c - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
      if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
      if (in_stack_0000169c != 0x2060) {
        lVar32 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
        lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
        *(int *)(lVar32 + 0x2c) = *(int *)(lVar32 + 0x2c) + 1;
        *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_026b97f8(in_stack_0000169c,0);
      if ((uVar22 & 1) != 0) goto LAB_0378f700;
    }
    if (in_stack_0000169c == 0xa0) {
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      *(int *)(lVar32 + 0x20) = *(int *)(lVar32 + 0x20) + 1;
    }
  }
LAB_0378f884:
  bVar8 = *(int *)(in_stack_000001e0 + 0x74) == 1;
  if (bVar8 && bVar11) {
    bVar8 = in_stack_0000169c == 0x2d;
  }
  if (bVar8) {
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar62 = *(float *)(unaff_x19 + 0xf4);
    iVar15 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
    fVar54 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
    lVar32 = *(long *)(unaff_x19 + 0x1a00);
    fVar48 = in_stack_00000150;
    if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
      fVar48 = 1.0;
    }
    if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto LAB_03793c9c;
    fVar51 = *(float *)(unaff_x19 + 0xf0);
    fVar71 = *(float *)(lVar32 + 0x2c);
    fVar50 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
    fVar52 = *_iStack0000000000000138;
    fVar50 = fVar51 * (fVar62 / (float)iVar15) * fVar54 * fVar48 * fVar71 * fVar50;
    fVar62 = *_fStack0000000000000130;
    if ((in_stack_0000169c == 10) && (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar40 = *(int *)(unaff_x19 + 0x324) - 1;
      if (*(uint *)(lVar32 + 0x18) <= uVar40) goto thunk_FUN_01ab6c44;
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar48 = *(float *)(lVar32 + (long)(int)uVar40 * (long)iVar19 + 0x68);
      iVar15 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
      fVar51 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
      lVar32 = *(long *)(unaff_x19 + 0x1a00);
      fVar54 = in_stack_00000150;
      if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
        fVar54 = 1.0;
      }
      if ((lVar32 == 0) || (*(long *)(lVar32 + 0x20) == 0)) goto LAB_03793c9c;
      fVar71 = *(float *)(unaff_x19 + 0xf0);
      fVar55 = *(float *)(lVar32 + 0x2c);
      fVar50 = (float)FUN_03776ea8(*(long *)(lVar32 + 0x20),0);
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
      lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
      fVar52 = *(float *)(lVar32 + 100);
      fVar62 = *(float *)(lVar32 + 0x68);
      fVar50 = fVar71 * (fVar48 / (float)iVar15) * fVar51 * fVar54 * fVar55 * fVar50;
    }
    fVar54 = *(float *)(unaff_x19 + 0x2f4);
    fVar48 = 0.0;
    if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
      if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
         (lVar32 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar32 == 0)) goto LAB_03793c9c;
      FUN_03776e6c(&stack0x000016a0,lVar32,0);
      fVar48 = (float)FUN_03776cb4(&stack0x000015c0,0);
    }
    fVar51 = *(float *)(unaff_x19 + 0x35c);
    fVar62 = (fStack000000000000012c - fVar52) - fVar62;
    bVar8 = true;
    if ((fVar51 <= fVar62) && (bVar8 = false, !NAN(fVar51))) {
      bVar8 = fVar51 == -1.0;
    }
    if (!bVar8) {
      fVar62 = fVar51;
    }
    fVar51 = 1.0;
    if (uVar30 != 0) {
      fVar51 = DAT_00d38acc;
    }
    if (ABS(fVar54) + fVar50 * fVar48 * (1.0 - *(float *)(unaff_x19 + 0x1594)) < fVar51 * fVar62) {
      FUN_03796df8();
      memcpy(&stack0x000005c8,in_stack_00000068,0x398);
      FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                   *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                  );
    }
  }
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar32 + 0x18) <= *in_stack_000001d0) goto thunk_FUN_01ab6c44;
  uVar30 = *(uint *)(unaff_x19 + 0x340);
  lVar32 = lVar32 + (long)(int)*in_stack_000001d0 * unaff_x27;
  *(uint *)(lVar32 + 0x6c) = uVar30;
  *(undefined4 *)(lVar32 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
  if ((bVar11) ||
     ((in_stack_0000169c < 0xe && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) != 0)))) {
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
    if (*(int *)(lVar32 + (long)(int)uVar30 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
  }
  else {
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
    if (*(uint *)(lVar32 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
    *(undefined4 *)(lVar32 + (long)(int)uVar30 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158);
  }
  if (in_stack_0000169c != 0x200b) {
    if (in_stack_0000169c == 9) {
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      fVar62 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
      if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
      bVar12 = FUN_03779d4c(*in_stack_000001c8,0);
      fVar48 = *(float *)(unaff_x19 + 0x2f4);
      fVar54 = unaff_s13 * fVar62 * (float)bVar12;
      fVar62 = fVar54 * (float)(int)(fVar48 / fVar54);
      if (fVar62 <= fVar48) {
        fVar62 = fVar48 + fVar54;
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar62;
    }
    else {
      fVar62 = *(float *)(unaff_x19 + 0x2f0);
      if (fVar62 == 0.0) {
        fVar48 = *(float *)(unaff_x19 + 0x2f4);
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          fVar62 = (float)FUN_03776cb4(&stack0x000015f0,0);
          fVar50 = *(float *)(unaff_x19 + 0x19a8);
          fVar54 = (float)FUN_03778e7c(&stack0x000015e0,0);
          if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
          fVar68 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
          fVar48 = fVar48 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                            (*(float *)(unaff_x19 + 0x2ec) +
                            unaff_s13 * (fVar62 * fVar50 + fVar54) +
                            in_stack_00000158 * (fVar49 + fVar70 + fVar68));
          goto UnityEngine_UIElements_WheelEvent___ctor;
        }
        fVar62 = (float)FUN_03778e7c(&stack0x000015e0,0);
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar54 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar48 = fVar48 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          unaff_s13 * fVar62 + in_stack_00000158 * (fVar49 + fVar70 + fVar54));
        *(float *)(unaff_x19 + 0x2f4) = fVar48;
        if ((uVar14 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar48 = fVar48 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      else {
        if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
        fVar48 = *(float *)(unaff_x19 + 0x2f4);
        fVar54 = (float)FUN_03779d0c(*in_stack_000001c8,0);
        fVar48 = fVar48 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                          (*(float *)(unaff_x19 + 0x2ec) +
                          (fVar62 - fVar68) + in_stack_00000158 * (fVar70 + fVar54));
UnityEngine_UIElements_WheelEvent___ctor:
        *(float *)(unaff_x19 + 0x2f4) = fVar48;
        if ((uVar14 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
        fVar48 = fVar48 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
      }
      *(float *)(unaff_x19 + 0x2f4) = fVar48;
    }
  }
FUN_0378fd94:
  lVar32 = *in_stack_000001e8;
  if (lVar32 == 0) goto LAB_03793c9c;
  uVar30 = *in_stack_000001d0;
  if (*(uint *)(lVar32 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
  *(undefined4 *)(lVar32 + (long)(int)uVar30 * unaff_x27 + 0x164) =
       *(undefined4 *)(unaff_x19 + 0x2f4);
  if (in_stack_0000169c == 0xd) {
    *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
  }
  if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
     (((0xd < in_stack_0000169c || ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_0000169c - 0x2028)))) {
    lVar32 = *in_stack_00000050;
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar40 = *(uint *)(unaff_x19 + 0x350);
    if (*(int *)(lVar32 + 0x18) < (int)(uVar40 + 1)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(in_stack_00000050,uVar40 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__);
      lVar32 = *in_stack_00000050;
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar40 = *(uint *)(unaff_x19 + 0x350);
    }
    if (*(uint *)(lVar32 + 0x18) <= uVar40) goto thunk_FUN_01ab6c44;
    lVar45 = lVar32 + (long)(int)uVar40 * 0x14;
    *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
    fVar62 = *(float *)(unaff_x19 + 0x378);
    if (*(float *)(lVar45 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
      fVar62 = *(float *)(lVar45 + 0x30);
    }
    *(float *)(lVar45 + 0x30) = fVar62;
    if (*(char *)(unaff_x19 + 0x37c) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x37c) = 0;
      *(undefined4 *)(lVar32 + (long)(int)uVar40 * 0x14 + 0x20) = *(undefined4 *)(unaff_x19 + 0x324)
      ;
    }
    uVar30 = *in_stack_000001d0;
    *(uint *)(lVar32 + (long)(int)uVar40 * 0x14 + 0x24) = uVar30;
  }
  if (((in_stack_0000169c < 0xc) && ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_0000169c - 0x2028 < 2 ||
      (((bool)(bVar11 & in_stack_0000169c == 0x2d) || (uVar30 == uStack00000000000000dc)))))) {
    if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
      fVar62 = *(float *)(unaff_x19 + 0x338);
      fVar48 = *(float *)(unaff_x19 + 0x15ac);
      if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      fVar62 = fVar62 - fVar48;
      if (((fStack00000000000000a8 < ABS(fVar62)) && (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
         (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
        uVar53 = *(undefined4 *)(unaff_x19 + 0x328);
        uVar16 = *(undefined4 *)(unaff_x19 + 0x324);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_037a5574(fVar62,uVar53,uVar16,in_stack_000001c0,0);
        *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar62;
        *(float *)(unaff_x19 + 0x2e0) = fVar62 + *(float *)(unaff_x19 + 0x2e0);
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        if (*(int *)(unaff_x19 + 0xad8) == *(int *)(unaff_x19 + 0x340)) {
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(in_stack_00000068,&stack0x000016a0,0x398);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000020,0);
          *(float *)(unaff_x19 + 0xaf0) = fVar62 + *(float *)(unaff_x19 + 0xaf0);
          *(float *)(unaff_x19 + 0xb24) = fVar62 + *(float *)(unaff_x19 + 0xb24);
          memcpy(&stack0x00000230,in_stack_00000068,0x398);
          FUN_020ab0d8(in_stack_00000078,&stack0x00000230,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
        }
      }
    }
    fVar48 = *(float *)(unaff_x19 + 0x2e0);
    *(undefined1 *)(unaff_x19 + 0x37c) = 0;
    fVar54 = *(float *)(unaff_x19 + 0x33c) - fVar48;
    fVar62 = *(float *)(unaff_x19 + 0x378);
    if (fVar54 <= *(float *)(unaff_x19 + 0x378)) {
      fVar62 = fVar54;
    }
    *(float *)(unaff_x19 + 0x378) = fVar62;
    fVar50 = *(float *)(unaff_x19 + 0x338);
    if (in_stack_00001694 == '\0') {
      in_stack_00001698 = fVar62;
    }
    if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
       ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*in_stack_000001d0 ||
        (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
      in_stack_00001694 = '\x01';
    }
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar32 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
    iVar15 = *(int *)(unaff_x19 + 0x328);
    lVar45 = lVar32 + (long)(int)uVar30 * 0x60;
    *(int *)(lVar45 + 0x38) = iVar15;
    uVar40 = *(uint *)(unaff_x19 + 0x328);
    if (iVar15 <= (int)*(uint *)(unaff_x19 + 0x330)) {
      uVar40 = *(uint *)(unaff_x19 + 0x330);
    }
    *(uint *)(unaff_x19 + 0x330) = uVar40;
    *(uint *)(lVar45 + 0x3c) = uVar40;
    iVar1 = *(int *)(unaff_x19 + 0x324);
    *(int *)(unaff_x19 + 0x32c) = iVar1;
    *(int *)(lVar45 + 0x40) = iVar1;
    iVar2 = *(int *)(unaff_x19 + 0x330);
    if ((int)uVar40 <= *(int *)(unaff_x19 + 0x334)) {
      iVar2 = *(int *)(unaff_x19 + 0x334);
    }
    *(int *)(unaff_x19 + 0x334) = iVar2;
    *(int *)(lVar45 + 0x44) = iVar2;
    *(int *)(lVar45 + 0x24) = (iVar1 - iVar15) + 1;
    *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
    *(undefined4 *)(lVar45 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar40) goto thunk_FUN_01ab6c44;
    uVar53 = *(undefined4 *)(lVar45 + (long)(int)uVar40 * (long)iVar19 + 0x124);
    lVar32 = lVar32 + (long)(int)uVar30 * 0x60;
    *(float *)(lVar32 + 0x74) = fVar54;
    *(undefined4 *)(lVar32 + 0x70) = uVar53;
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    uVar53 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
    fVar50 = fVar50 - fVar48;
    lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
    *(float *)(lVar32 + 0x7c) = fVar50;
    *(undefined4 *)(lVar32 + 0x78) = uVar53;
    lVar32 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar32 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(unaff_x19 + 0x340);
    if (*(uint *)(lVar32 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
    lVar45 = lVar32 + (long)(int)uVar30 * 0x60;
    *(float *)(lVar45 + 0x48) = *(float *)(lVar45 + 0x78) - unaff_s13 * in_stack_000001a0;
    *(float *)(lVar45 + 0x60) = fStack0000000000000174;
    if (*(int *)(lVar45 + 0x24) == 1) {
      *(undefined4 *)(lVar32 + (long)(int)uVar30 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x158)
      ;
    }
    if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
    fVar62 = (float)FUN_03779d0c(*in_stack_000001c8,0);
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
    lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x334);
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
    lVar23 = *(long *)(in_stack_000001c0 + 0x48);
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(unaff_x19 + 0x340);
    if (((*(char *)(lVar32 + lVar45 * unaff_x27 + 0x1a0) == '\0') &&
        (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
        *(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
       (uVar40 = (uint)*(undefined8 *)(lVar23 + 0x18), uVar40 <= uVar30)) goto thunk_FUN_01ab6c44;
    fVar70 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
             (*(float *)(unaff_x19 + 0x2ec) + in_stack_00000158 * (fVar49 + fVar70 + fVar62));
    fVar62 = -fVar70;
    if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
      fVar62 = fVar70;
    }
    *(float *)(lVar23 + (long)(int)uVar30 * 0x60 + 0x5c) =
         *(float *)(lVar32 + lVar45 * unaff_x27 + 0x164) + fVar62;
    if (uVar40 <= uVar30) goto thunk_FUN_01ab6c44;
    lVar23 = lVar23 + (long)(int)uVar30 * 0x60;
    *(float *)(lVar23 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
    *(float *)(lVar23 + 0x58) = fVar54;
    *(float *)(lVar23 + 0x4c) = in_stack_000000a0._4_4_ + (fVar50 - fVar54);
    *(float *)(lVar23 + 0x50) = fVar50;
    if ((int)in_stack_0000169c < 0x2d) {
      if (in_stack_0000169c - 10 < 2) {
LAB_03790360:
        FUN_03796df8();
        uVar14 = *(uint *)(unaff_x19 + 0x324);
        iVar15 = *(int *)(unaff_x19 + 0x340) + 1;
        *(int *)(unaff_x19 + 0x340) = iVar15;
        *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
        in_stack_000001d0[8] = 0;
        in_stack_000001d0[9] = 0;
        if (*(long *)(in_stack_000001c0 + 0x48) == 0) goto LAB_03793c9c;
        if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar15) {
          if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_037a56f4(iVar15,in_stack_000001c0,0);
          uVar14 = *in_stack_000001d0;
        }
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar32 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        fVar62 = *(float *)(lVar32 + (long)(int)uVar14 * (long)iVar19 + 0x158);
        if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
          if ((in_stack_0000169c == 0x2029) || (fVar70 = 0.0, in_stack_0000169c == 10)) {
            fVar70 = *(float *)(in_stack_000001e0 + 0xcc);
          }
          uVar28 = 0;
          fVar70 = fVar62 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
                   fStack0000000000000088 *
                   (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
                   in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar70) +
                   *(float *)(unaff_x19 + 0x2e0);
        }
        else {
          if ((in_stack_0000169c == 0x2029) || (fVar70 = 0.0, in_stack_0000169c == 10)) {
            fVar70 = *(float *)(in_stack_000001e0 + 0xcc);
          }
          uVar28 = 1;
          fVar70 = *(float *)(unaff_x19 + 0x2e0) +
                   *(float *)(unaff_x19 + 0x2e4) +
                   in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar70);
        }
        *(float *)(unaff_x19 + 0x2e0) = fVar70;
        *(float *)(unaff_x19 + 0x15ac) = fVar62;
        *(undefined1 *)(unaff_x19 + 0x2e8) = uVar28;
        *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
        *(float *)(unaff_x19 + 0x2f4) =
             *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
        FUN_03796df8();
        FUN_03796df8();
        *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
LAB_0379053c:
        bStack00000000000000d8 = 1;
        uStack00000000000000ac = 1;
        plVar43 = in_stack_000001e8;
        puVar47 = in_stack_000001d0;
        uVar20 = uVar21;
        fVar62 = unaff_s13;
        goto LAB_0378d260;
      }
      if (in_stack_0000169c == 3) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03793c9c;
        uVar18 = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
      }
    }
    else if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d)) goto LAB_03790360;
  }
  else {
    lVar32 = *in_stack_000001e8;
    if (lVar32 == 0) goto LAB_03793c9c;
  }
  uVar30 = *in_stack_000001d0;
  if (*(uint *)(lVar32 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
  if (*(char *)(lVar32 + (long)(int)uVar30 * unaff_x27 + 0x1a0) != '\0') {
    lVar32 = lVar32 + (long)(int)uVar30 * unaff_x27;
    uVar22 = *(ulong *)(unaff_x19 + 0x360);
    uVar25 = *(ulong *)(lVar32 + 0x124);
    *(ulong *)(unaff_x19 + 0x360) =
         uVar22 ^ (uVar22 ^ uVar25) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar25 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar25));
    uVar22 = *(ulong *)(unaff_x19 + 0x368);
    uVar25 = *(ulong *)(lVar32 + 0x130);
    *(ulong *)(unaff_x19 + 0x368) =
         uVar22 ^ (uVar22 ^ uVar25) &
                  ~CONCAT44(-(uint)((float)(uVar25 >> 0x20) < (float)(uVar22 >> 0x20)),
                            -(uint)((float)uVar25 < (float)uVar22));
  }
  if ((iStack000000000000008c == 0) &&
     ((6 < *(uint *)(in_stack_000001e0 + 0x74) ||
      ((1 << (ulong)(*(uint *)(in_stack_000001e0 + 0x74) & 0x1f) & 0x4aU) == 0))))
  goto LAB_03790864;
  if ((uVar14 == 0) &&
     (((in_stack_0000169c != 0x2d && (in_stack_0000169c != 0x200b)) && (in_stack_0000169c != 0xad)))
     ) {
    if (*(char *)(unaff_x19 + 0x37d) != '\0') goto LAB_037907cc;
LAB_03790684:
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                ) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar22 = FUN_037a5f20(in_stack_0000169c,0);
    if ((uVar22 & 1) == 0) {
LAB_037906cc:
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar22 = FUN_037a5f90(in_stack_0000169c,0);
      if ((uVar22 & 1) == 0) goto LAB_037907cc;
      if (in_stack_00000060 == 0) goto LAB_03793c9c;
    }
    else {
      if ((in_stack_00000060 == 0) || (lVar32 = FUN_037a8a5c(in_stack_00000060,0), lVar32 == 0))
      goto LAB_03793c9c;
      if (*(char *)(lVar32 + 0x28) != '\0') goto LAB_037906cc;
    }
    lVar32 = FUN_037a8a5c(in_stack_00000060,0);
    if ((lVar32 == 0) || (lVar32 = FUN_037aad04(lVar32,0), lVar32 == 0)) goto LAB_03793c9c;
    uVar53 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
    in_stack_000016a0 = CONCAT44(uVar53,in_stack_0000169c);
    uVar22 = FUN_021e4dc4(lVar32,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
    if ((int)*in_stack_000001d0 < (int)uStack00000000000000dc) {
      lVar32 = FUN_037a8a5c(in_stack_00000060,0);
      if (lVar32 == 0) goto LAB_03793c9c;
      lVar32 = FUN_037aaf28(lVar32,0);
      lVar45 = *in_stack_000001e8;
      if (lVar45 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar45 + 0x18) <= *in_stack_000001d0 + 1) goto thunk_FUN_01ab6c44;
      if (lVar32 == 0) goto LAB_03793c9c;
      in_stack_000016a0 =
           CONCAT44(uVar53,(uint)*(ushort *)
                                  (lVar45 + (long)(int)(*in_stack_000001d0 + 1) * (long)iVar19 +
                                  0x20));
      uVar25 = FUN_021e4dc4(lVar32,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
      if ((uVar22 & 1) != 0) goto LAB_037909e8;
      if ((uVar25 & 1) == 0) goto LAB_03790cd4;
      if ((bStack00000000000000d8 & 1) != 0) goto LAB_03790a08;
      goto LAB_03790854;
    }
    if ((uVar22 & 1) == 0) {
LAB_03790cd4:
      FUN_03796df8();
      bStack00000000000000d8 = 0;
      goto LAB_03790864;
    }
LAB_037909e8:
    if (uVar17 != uVar44 || ((bStack00000000000000d8 ^ 0xff) & 1) != 0) goto LAB_03790864;
LAB_03790a08:
    if (uVar14 != 0) {
      FUN_03796df8();
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x37d) != '\x01') {
      if (((0x28 < in_stack_0000169c - 0x2007) ||
          ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_0000169c != 0xa0 && (in_stack_0000169c != 0x2060)))) {
        FUN_03796df8();
        bStack00000000000000d8 = 0;
        *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
        goto LAB_03790864;
      }
      goto LAB_03790684;
    }
LAB_037907cc:
    if ((bStack00000000000000d8 & 1) == 0) {
LAB_03790854:
      bStack00000000000000d8 = 0;
      goto LAB_03790864;
    }
    if ((uVar14 != 0 && in_stack_0000169c != 0xa0) ||
       ((in_stack_000000b8 & 1) == 0 && in_stack_0000169c == 0xad)) {
      FUN_03796df8();
    }
  }
  FUN_03796df8();
  bStack00000000000000d8 = 1;
LAB_03790864:
  FUN_03796df8();
  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
  plVar43 = in_stack_000001e8;
  puVar47 = in_stack_000001d0;
  uVar20 = uVar21;
  fVar62 = unaff_s13;
  goto LAB_0378d260;
switchD_03790dc8_caseD_6:
  in_stack_000000b8 = 0;
  plVar43 = in_stack_000001e8;
  puVar47 = in_stack_000001d0;
  unaff_w21 = uVar40;
  goto LAB_037909d0;
switchD_03790dc8_caseD_3:
  uVar18 = FUN_03797154();
  in_stack_000000b8 = 0;
  plVar43 = in_stack_000001e8;
  puVar47 = in_stack_000001d0;
  goto LAB_037909d0;
LAB_0379194c:
  do {
    uVar18 = uVar17 - 1;
    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    lVar46 = (long)(int)uVar18;
    lVar45 = lVar32 + lVar46 * 0x188;
    lVar23 = *(long *)(lVar45 + 0x40);
    uVar3 = *(ushort *)(lVar45 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar12 = FUN_026b63d8(uVar3,0);
    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    lVar45 = *(long *)(in_stack_000001c0 + 0x48);
    uVar44 = (uint)uVar3;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar30 = *(uint *)(lVar32 + lVar46 * 0x188 + 0x6c);
    if (*(uint *)(lVar45 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
    lVar36 = (long)(int)uVar30;
    lVar45 = lVar45 + lVar36 * 0x60;
    uVar6 = *(uint *)(lVar45 + 0x40);
    uVar40 = *(uint *)(lVar45 + 0x6c);
    iVar2 = *(int *)(lVar45 + 0x20);
    iVar19 = *(int *)(lVar45 + 0x28);
    iVar15 = *(int *)(lVar45 + 0x2c);
    uVar5 = *(uint *)(lVar45 + 0x44);
    lVar37 = (long)(int)uVar5;
    fVar49 = *(float *)(lVar45 + 0x50);
    fVar52 = *(float *)(lVar45 + 0x58);
    fVar54 = *(float *)(lVar45 + 0x5c);
    fVar50 = *(float *)(lVar45 + 0x60);
    fVar55 = *(float *)(lVar45 + 100);
    fVar71 = *(float *)(lVar45 + 0x70);
    fVar67 = *(float *)(lVar45 + 0x74);
    fVar68 = *(float *)(lVar45 + 0x78);
    fVar51 = *(float *)(lVar45 + 0x7c);
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
          uVar31 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar40 != 0x2008) && (uVar40 != 0x2010)) {
        uVar31 = 0x2020;
LAB_03791bc8:
        if (uVar40 != uVar31) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar54 = fVar71 + fVar68;
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
        if ((int)uVar18 <= (int)uVar5) {
          if (uVar44 < 0xad) {
            if ((uVar44 != 3) && (uVar44 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar44 != 0xad) && ((uVar44 != 0x200b && (uVar44 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar32 + 0x18) <= uVar6) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar32 + (long)(int)uVar6 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar24 = (long *)PTR_DAT_03cbded8;
            }
            uVar27 = FUN_026b8cc4(uVar4,0);
            if ((uVar27 & 1) == 0) {
              bVar10 = (int)uVar30 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar10 = false;
            }
            if ((fVar54 <= fVar50) && (!bVar10 && (uVar40 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar55;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar50 + fVar55;
              }
              goto LAB_03791c20;
            }
            if ((uVar17 == 1) || (uVar30 != uVar14)) {
              cVar29 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar29 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar18 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar15 = (iVar15 - iVar2) - (uStack0000000000000090 & 1);
                fVar55 = -fVar54;
                if (cVar29 != '\0') {
                  fVar55 = fVar54;
                }
                if (iVar15 < 1) {
                  fVar54 = 1.0;
                }
                else {
                  fVar54 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar15 < 2) {
                  iVar15 = 1;
                }
                fVar50 = fVar50 + fVar55;
                if (uVar44 == 9) {
LAB_037939d0:
                  if (cVar29 != '\0') {
                    fVar50 = fVar50 * (1.0 - fVar54);
                    fVar55 = (float)iVar15;
LAB_03793a0c:
                    in_stack_00000158 = in_stack_00000158 - fVar50 / fVar55;
                    break;
                  }
                  fVar55 = (float)iVar15;
                  fVar50 = fVar50 * (1.0 - fVar54);
                }
                else {
                  if (uVar44 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar27 = FUN_026b97f8(uVar44,0);
                    cVar29 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar27 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar50 = fVar50 * fVar54;
                  fVar55 = (float)(int)((iVar2 - (~uStack0000000000000090 & 1)) + iVar19);
                  if (cVar29 != '\0') goto LAB_03793a0c;
                }
                in_stack_00000158 = in_stack_00000158 + fVar50 / fVar55;
                uStack0000000000000148 =
                     CONCAT44((float)((ulong)uStack0000000000000148 >> 0x20) + 0.0,
                              (float)uStack0000000000000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar55;
            if (cVar29 != '\0') {
              in_stack_00000158 = fVar50 + fVar55;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar44,0);
            uStack0000000000000148 = 0;
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
          in_stack_00000158 = fVar55 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar54;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        in_stack_00000158 = (fVar55 + fVar50 * 0.5) - fVar54 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        in_stack_00000158 = (fVar50 + fVar55) - fVar54;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar50 + fVar55;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar40 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      uStack0000000000000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar40 = (uint)*(undefined8 *)(lVar32 + 0x18);
    if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
    lVar45 = lVar32 + lVar46 * 0x188;
    fVar55 = fStack0000000000000120 + in_stack_00000158;
    fVar54 = (float)uStack0000000000000118 + (float)uStack0000000000000148;
    fVar50 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)uStack0000000000000148 >> 0x20);
    if (*(char *)(lVar45 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar29 = *(char *)(lVar32 + lVar46 * 0x188 + 0x28);
    if (cVar29 != '\x01') goto LAB_0379225c;
    fVar48 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar30,1.0);
    plVar24 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar48 = 1.0;
      lVar34 = lVar32 + lVar46 * 0x188;
      *(undefined4 *)(lVar34 + 0xbc) = 0;
      *(undefined4 *)(lVar34 + 0x94) = 0;
      *(undefined4 *)(lVar34 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar51 = *(float *)(lVar32 + lVar46 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar34 = lVar32 + lVar46 * 0x188;
        fVar68 = (in_stack_00000158 + fVar51) - *(float *)(unaff_x19 + 0x360);
        fVar51 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar34 = lVar32 + lVar46 * 0x188;
      fVar68 = fVar68 - fVar71;
      *(float *)(lVar34 + 0xbc) = fVar48 + (fVar51 - fVar71) / fVar68;
      *(float *)(lVar34 + 0x94) = fVar48 + (*(float *)(lVar34 + 0x78) - fVar71) / fVar68;
      *(float *)(lVar34 + 0xe4) = fVar48 + (*(float *)(lVar34 + 200) - fVar71) / fVar68;
      fVar48 = fVar48 + (*(float *)(lVar34 + 0xf0) - fVar71) / fVar68;
      break;
    case 2:
      lVar34 = lVar32 + lVar46 * 0x188;
      fVar51 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar68 = (in_stack_00000158 + *(float *)(lVar34 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar34 + 0xbc) = fVar48 + fVar68 / fVar51;
      *(float *)(lVar34 + 0x94) =
           fVar48 + ((in_stack_00000158 + *(float *)(lVar34 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar34 + 0xe4) =
           fVar48 + ((in_stack_00000158 + *(float *)(lVar34 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar48 = fVar48 + ((in_stack_00000158 + *(float *)(lVar34 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar34 = lVar32 + lVar46 * 0x188;
        *(undefined4 *)(lVar34 + 0xc0) = 0;
        *(undefined4 *)(lVar34 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar34 + 0xe8) = 0;
        *(undefined4 *)(lVar34 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar51 = fVar51 - fVar67;
        lVar34 = lVar32 + lVar46 * 0x188;
        fVar68 = fVar48 + (*(float *)(lVar34 + 0xa4) - fVar67) / fVar51;
        fVar51 = fVar48 + (*(float *)(lVar34 + 0x7c) - fVar67) / fVar51;
        *(float *)(lVar34 + 0xc0) = fVar68;
        *(float *)(lVar34 + 0x98) = fVar51;
        *(float *)(lVar34 + 0xe8) = fVar68;
        *(float *)(lVar34 + 0x110) = fVar51;
        break;
      case 2:
        lVar34 = lVar32 + lVar46 * 0x188;
        fVar68 = fVar48 + (*(float *)(lVar34 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar34 + 0xc0) = fVar68;
        fVar51 = *(float *)(unaff_x19 + 0x364);
        fVar71 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar34 + 0xe8) = fVar68;
        fVar68 = fVar48 + (*(float *)(lVar34 + 0x7c) - fVar51) / (fVar71 - fVar51);
        *(float *)(lVar34 + 0x98) = fVar68;
        *(float *)(lVar34 + 0x110) = fVar68;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar40 = (uint)*(undefined8 *)(lVar32 + 0x18);
      }
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
      lVar34 = lVar32 + lVar46 * 0x188;
      fVar68 = *(float *)(lVar34 + 0x168);
      fVar51 = (1.0 - (*(float *)(lVar34 + 0xc0) + *(float *)(lVar34 + 0x98)) * fVar68) * 0.5;
      fVar71 = fVar48 + *(float *)(lVar34 + 0xc0) * fVar68 + fVar51;
      fVar48 = fVar48 + *(float *)(lVar34 + 0x98) * fVar68 + fVar51;
      *(float *)(lVar34 + 0xbc) = fVar71;
      *(float *)(lVar34 + 0x94) = fVar71;
      *(float *)(lVar34 + 0xe4) = fVar48;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar32 + lVar46 * 0x188 + 0x10c) = fVar48;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
      lVar34 = lVar32 + lVar46 * 0x188;
      *(undefined4 *)(lVar34 + 0xc0) = 0;
      *(undefined4 *)(lVar34 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar34 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar34 + 0x110) = 0;
      break;
    case 1:
      if (uVar18 < uVar40) {
        fVar49 = fVar49 - fVar52;
        lVar34 = lVar32 + lVar46 * 0x188;
        fVar48 = (*(float *)(lVar34 + 0xa4) - fVar52) / fVar49;
        fVar49 = (*(float *)(lVar34 + 0x7c) - fVar52) / fVar49;
        *(float *)(lVar34 + 0xc0) = fVar48;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
      lVar34 = lVar32 + lVar46 * 0x188;
      fVar48 = (*(float *)(lVar34 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar34 + 0xc0) = fVar48;
      fVar49 = (*(float *)(lVar34 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar34 + 0x98) = fVar49;
      *(float *)(lVar34 + 0xe8) = fVar49;
      *(float *)(lVar34 + 0x110) = fVar48;
      break;
    case 3:
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
      lVar34 = lVar32 + lVar46 * 0x188;
      fVar49 = *(float *)(lVar34 + 0x168);
      fVar68 = (1.0 - (*(float *)(lVar34 + 0xbc) + *(float *)(lVar34 + 0xe4)) / fVar49) * 0.5;
      fVar48 = *(float *)(lVar34 + 0xbc) / fVar49 + fVar68;
      fVar68 = *(float *)(lVar34 + 0xe4) / fVar49 + fVar68;
      *(float *)(lVar34 + 0xc0) = fVar48;
      *(float *)(lVar34 + 0x98) = fVar68;
      *(float *)(lVar34 + 0x110) = fVar48;
      *(float *)(lVar34 + 0xe8) = fVar68;
    }
    if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
    lVar34 = lVar32 + lVar46 * 0x188;
    fVar48 = *(float *)(lVar34 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar34 + 100) == '\0') && ((*(byte *)(lVar32 + lVar46 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar48 = -fVar48;
    }
    lVar34 = lVar32 + lVar46 * 0x188;
    *(float *)(lVar34 + 0xb8) = fVar48;
    *(float *)(lVar34 + 0x90) = fVar48;
    *(float *)(lVar34 + 0xe0) = fVar48;
    *(float *)(lVar34 + 0x108) = fVar48;
    *(undefined4 *)(lVar34 + 0xbc) = 0x3f800000;
    *(float *)(lVar34 + 0xc0) = fVar48;
    *(undefined4 *)(lVar34 + 0x94) = 0x3f800000;
    *(float *)(lVar34 + 0x98) = fVar48;
    *(undefined4 *)(lVar34 + 0xe4) = 0x3f800000;
    *(float *)(lVar34 + 0xe8) = fVar48;
    *(undefined4 *)(lVar34 + 0x10c) = 0x3f800000;
    *(float *)(lVar34 + 0x110) = fVar48;
LAB_0379225c:
    if (((int)uVar18 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar30) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar30) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar18 < uVar40) {
          bVar10 = *(uint *)(lVar32 + lVar46 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar45 = lVar32 + lVar46 * 0x188;
      *(ulong *)(lVar45 + 0xa0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0xa0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar45 + 0xa0));
      *(float *)(lVar45 + 0xa8) = fVar50 + *(float *)(lVar45 + 0xa8);
      *(ulong *)(lVar45 + 0x78) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0x78) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar45 + 0x78));
      *(float *)(lVar45 + 0x80) = fVar50 + *(float *)(lVar45 + 0x80);
      *(ulong *)(lVar45 + 200) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 200) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar45 + 200));
      *(float *)(lVar45 + 0xd0) = fVar50 + *(float *)(lVar45 + 0xd0);
      *(ulong *)(lVar45 + 0xf0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0xf0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar45 + 0xf0));
      *(float *)(lVar45 + 0xf8) = fVar50 + *(float *)(lVar45 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar10 = false;
LAB_037922d8:
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
      if (bVar10) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar24);
        DAT_0411f172 = '\x01';
        uVar40 = *(uint *)(lVar32 + 0x18);
      }
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar24 + 0xb8) + 1);
      lVar34 = lVar32 + lVar46 * 0x188;
      *(undefined8 *)(lVar34 + 0xa0) = **(undefined8 **)(*plVar24 + 0xb8);
      *(undefined4 *)(lVar34 + 0xa8) = uVar16;
      if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar24 + 0xb8) + 1);
      lVar34 = lVar32 + lVar46 * 0x188;
      *(undefined8 *)(lVar34 + 0x78) = **(undefined8 **)(*plVar24 + 0xb8);
      *(undefined4 *)(lVar34 + 0x80) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar24 + 0xb8) + 1);
      *(undefined8 *)(lVar34 + 200) = **(undefined8 **)(*plVar24 + 0xb8);
      *(undefined4 *)(lVar34 + 0xd0) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar24 + 0xb8) + 1);
      *(undefined8 *)(lVar34 + 0xf0) = **(undefined8 **)(*plVar24 + 0xb8);
      *(undefined4 *)(lVar34 + 0xf8) = uVar16;
      *(undefined1 *)(lVar45 + 0x1a0) = 0;
    }
    iVar19 = FUN_0368e42c(0);
    if (iVar19 == 1) {
      cVar42 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar42 = '\0';
    }
    if (cVar29 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar18,cVar42 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar29 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar18,cVar42 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    uVar20 = *(undefined8 *)(lVar45 + 0x124);
    *(undefined8 *)(lVar45 + 0x124) =
         CONCAT44(fVar54 + (float)((ulong)uVar20 >> 0x20),fVar55 + (float)uVar20);
    *(float *)(lVar45 + 300) = fVar50 + *(float *)(lVar45 + 300);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(ulong *)(lVar45 + 0x118) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0x118) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar45 + 0x118));
    *(float *)(lVar45 + 0x120) = fVar50 + *(float *)(lVar45 + 0x120);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(ulong *)(lVar45 + 0x130) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0x130) >> 0x20),
                  fVar55 + (float)*(undefined8 *)(lVar45 + 0x130));
    *(float *)(lVar45 + 0x138) = fVar50 + *(float *)(lVar45 + 0x138);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(float *)(lVar45 + 0x13c) = fVar55 + *(float *)(lVar45 + 0x13c);
    *(ulong *)(lVar45 + 0x140) =
         CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar45 + 0x140) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar45 + 0x140));
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar40 = *(uint *)(lVar45 + 0x18);
    if (uVar40 <= uVar18) goto thunk_FUN_01ab6c44;
    lVar34 = lVar45 + lVar46 * 0x188;
    *(float *)(lVar34 + 0x148) = fVar55 + *(float *)(lVar34 + 0x148);
    *(float *)(lVar34 + 0x164) = fVar55 + *(float *)(lVar34 + 0x164);
    *(float *)(lVar34 + 0x154) = fVar54 + *(float *)(lVar34 + 0x154);
    uVar20 = *(undefined8 *)(lVar34 + 0x14c);
    *(undefined8 *)(lVar34 + 0x14c) =
         CONCAT44(fVar54 + (float)((ulong)uVar20 >> 0x20),fVar54 + (float)uVar20);
    if (uVar30 == uVar14) {
      uVar14 = *in_stack_000001d0 - 1;
      if (uVar18 == uVar14) goto LAB_037926b4;
    }
    else {
      lVar34 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar34 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      lVar38 = (long)(int)uVar14;
      lVar41 = lVar34 + lVar38 * 0x60;
      fVar50 = fVar54 + *(float *)(lVar41 + 0x58);
      *(ulong *)(lVar41 + 0x50) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar41 + 0x50) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar41 + 0x50));
      *(float *)(lVar41 + 0x58) = fVar50;
      *(float *)(lVar41 + 0x5c) = fVar55 + *(float *)(lVar41 + 0x5c);
      if (uVar40 <= *(uint *)(lVar41 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar16 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar41 + 0x38) * 0x188 + 0x124);
      lVar34 = lVar34 + lVar38 * 0x60;
      *(float *)(lVar34 + 0x74) = fVar50;
      *(undefined4 *)(lVar34 + 0x70) = uVar16;
      lVar45 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar45 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      lVar34 = *in_stack_000001e8;
      if (lVar34 == 0) goto LAB_03793c9c;
      uVar14 = *(uint *)(lVar45 + lVar38 * 0x60 + 0x44);
      if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
      lVar45 = lVar45 + lVar38 * 0x60;
      *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar34 + (long)(int)uVar14 * 0x188 + 0x130);
      *(undefined4 *)(lVar45 + 0x7c) = *(undefined4 *)(lVar45 + 0x50);
      uVar14 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar18 == uVar14) {
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar34 = lVar45 + lVar36 * 0x60;
        fVar50 = fVar54 + *(float *)(lVar34 + 0x58);
        *(ulong *)(lVar34 + 0x50) =
             CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0x50) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar34 + 0x50));
        *(float *)(lVar34 + 0x58) = fVar50;
        *(float *)(lVar34 + 0x5c) = fVar55 + *(float *)(lVar34 + 0x5c);
        lVar38 = *in_stack_000001e8;
        if (lVar38 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar38 + 0x18) <= *(uint *)(lVar34 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar16 = *(undefined4 *)(lVar38 + (long)(int)*(uint *)(lVar34 + 0x38) * 0x188 + 0x124);
        lVar45 = lVar45 + lVar36 * 0x60;
        *(float *)(lVar45 + 0x74) = fVar50;
        *(undefined4 *)(lVar45 + 0x70) = uVar16;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar34 = *in_stack_000001e8;
        if (lVar34 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(lVar45 + lVar36 * 0x60 + 0x44);
        if (*(uint *)(lVar34 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar36 * 0x60;
        *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar34 + (long)(int)uVar14 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar45 + 0x7c) = *(undefined4 *)(lVar45 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar27 = FUN_026b82c4(uVar44,0);
    if (((((uVar27 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar17 == 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          bVar13 = FUN_026b81f8(uVar44,0);
          if (((uVar44 == 0x200b) || (((bVar12 | bVar13 ^ 1) & 1) != 0)) ||
             (*in_stack_000001d0 == 1)) goto LAB_037930d8;
        }
        uStack000000000000016c = 0;
      }
      else {
        if (((uVar17 != 1) && ((int)uVar18 < (int)(*(uint *)(lVar32 + 0x18) - 1))) &&
           (((int)uVar18 < (int)*in_stack_000001d0 && ((uVar44 == 0x2019 || (uVar44 == 0x27)))))) {
          if (*(uint *)(lVar32 + 0x18) <= uVar17 - 2) goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(lVar32 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_026b82c4(uVar4,0);
          if ((uVar27 & 1) != 0) {
            if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar32 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar27 = FUN_026b82c4(uVar4,0);
            if ((uVar27 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar18 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_026b82c4(uVar44,0);
          fStack0000000000000170 = (float)uVar18;
          if ((uVar27 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar45 = *plVar43;
        if (lVar45 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar19 = *(int *)(lVar45 + 0x18);
        if (iVar19 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar43,iVar19 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar45 = *plVar43;
          if (lVar45 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + (long)(int)uVar14 * 0xc;
        *(uint *)(lVar45 + 0x20) = uStack0000000000000168;
        *(float *)(lVar45 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar45 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar36 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar45 + 0x34) = *(int *)(lVar45 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar18;
      }
      if (uVar18 == *in_stack_000001d0 - 1) {
        lVar45 = *plVar43;
        if (lVar45 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar19 = *(int *)(lVar45 + 0x18);
        if (iVar19 < (int)(uVar14 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar43,iVar19 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar45 = *plVar43;
          if (lVar45 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + (long)(int)uVar14 * 0xc;
        *(uint *)(lVar45 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar45 + 0x24) = uVar18;
        *(uint *)(lVar45 + 0x28) = uVar17 - uStack0000000000000168;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar30) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar36 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar45 + 0x34) = *(int *)(lVar45 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(lVar45 + 0x18);
    if (uVar14 <= uVar18) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar45 + lVar46 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar9) {
LAB_037928d0:
        if (uVar17 - 2 < uVar14) {
          uVar16 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x354);
          uVar61 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x318);
          goto LAB_03792b34;
        }
        goto thunk_FUN_01ab6c44;
      }
LAB_03792a8c:
      bVar9 = false;
    }
    else {
      lVar36 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar36 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) goto thunk_FUN_01ab6c44;
      iVar19 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70);
      *(int *)(lVar45 + lVar46 * 0x188 + 0x178) =
           *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar18) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar30)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = iVar19 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (uVar44 != 0x200b && (bVar12 & 1) == 0) {
        fVar50 = *(float *)(lVar45 + lVar46 * 0x188 + 0x16c);
        if (fVar70 <= fVar50) {
          fVar70 = fVar50;
        }
        if (iVar19 != iStack00000000000000c0) {
          fStack000000000000015c = fVar62;
        }
        if (lVar23 == 0) goto LAB_03793c9c;
        fVar50 = *(float *)(lVar45 + lVar46 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar48)) {
          fStack0000000000000174 = ABS(fVar48);
        }
        FUN_03779650(&stack0x000016a0,lVar23,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar68 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar50 = fVar50 + fVar70 * fVar68;
        iStack00000000000000c0 = iVar19;
        if (fVar50 <= fStack000000000000015c) {
          fStack000000000000015c = fVar50;
        }
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar18)) ||
         (bVar9 || bVar10)) {
LAB_03792a80:
        if (!bVar9) goto LAB_03792a8c;
      }
      else {
        if (uVar18 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_026b97f8(uVar44,0);
          if ((uVar27 & 1) != 0) goto LAB_03792a80;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar45 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar45 + 0x124);
        bVar9 = fVar70 != 0.0;
        fVar50 = _bStack00000000000000d8;
        if (bVar9) {
          fVar50 = fVar70;
        }
        fVar70 = fVar50;
        uVar53 = *(undefined4 *)(lVar45 + 0x174);
        uStack00000000000000cc = 0;
        fVar50 = fVar48;
        if (bVar9) {
          fVar50 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar50;
      }
      if (*in_stack_000001d0 == 1) {
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        uVar16 = *(undefined4 *)(lVar45 + 0x130);
        uVar61 = *(undefined4 *)(lVar45 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar16,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar61);
      }
      else {
        if ((uVar18 == uVar6) || ((int)uVar5 <= (int)uVar18)) {
          lVar45 = *in_stack_000001e8;
          if (lVar45 != 0) {
            lVar36 = lVar46;
            uVar14 = uVar18;
            if (uVar44 == 0x200b || (bVar12 & 1) != 0) {
              lVar36 = lVar37;
              uVar14 = uVar5;
            }
            if (uVar14 < *(uint *)(lVar45 + 0x18)) {
              lVar45 = lVar45 + lVar36 * 0x188;
              uVar16 = *(undefined4 *)(lVar45 + 0x130);
              uVar61 = *(undefined4 *)(lVar45 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar10) {
          lVar45 = *in_stack_000001e8;
          if (lVar45 != 0) {
            uVar14 = *(uint *)(lVar45 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar18) {
LAB_03793294:
          bVar9 = true;
          goto LAB_03792b70;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
        uVar27 = FUN_03779528(uVar53,*(undefined4 *)(lVar45 + (long)in_stack_000001a8),0);
        if ((uVar27 & 1) != 0) goto LAB_03793294;
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar45 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar45 + 0x16c));
      }
      fVar70 = 0.0;
      bVar9 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
    if (lVar23 == 0) goto LAB_03793c9c;
    uVar14 = *(uint *)(lVar45 + lVar46 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar23,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar50 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar14 >> 6 & 1) == 0) {
      if (bVar8) {
        lVar45 = *in_stack_000001e8;
        if (lVar45 != 0) {
          if (uVar17 - 2 < *(uint *)(lVar45 + 0x18)) {
            fVar54 = *(float *)(lVar45 + (long)in_stack_000001a8 + -0x334);
            uVar16 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x354);
            goto LAB_037932fc;
          }
          goto thunk_FUN_01ab6c44;
        }
        goto LAB_03793c9c;
      }
LAB_03792cf8:
      bVar8 = false;
    }
    else {
      lVar45 = *in_stack_000001e8;
      if ((lVar45 == 0) || (lVar36 = *(long *)(unaff_x19 + 0x15b8), lVar36 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar45 + 0x18) <= uVar18)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar45 + lVar46 * 0x188 + 0x180) =
           *(int *)(lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar18) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar30)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar18)) ||
         (!(bool)(~bVar8 & (bVar10 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar8) goto LAB_03792cf8;
      }
      else {
        if (uVar18 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_026b97f8(uVar44,0);
          if ((uVar27 & 1) != 0) goto LAB_03792cf0;
          lVar45 = *in_stack_000001e8;
          if (lVar45 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar45 + 0x16c);
        fStack00000000000000ec = *(float *)(lVar45 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar45 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar45 + 0x150);
        fStack00000000000000e0 = fVar50 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar14 = *in_stack_000001d0;
      if (uVar14 == 1) {
LAB_03792ef4:
        lVar36 = *in_stack_000001e8;
        if (lVar36 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar36 + 0x18) <= uVar18) goto thunk_FUN_01ab6c44;
        lVar36 = lVar36 + lVar46 * 0x188;
      }
      else {
        lVar45 = lVar46;
        if (uVar18 == uVar6) {
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          uVar14 = uVar18;
          if ((uVar44 != 0x200b & (bVar12 ^ 1)) == 0) {
            lVar45 = lVar37;
            uVar14 = uVar5;
          }
          if (*(uint *)(lVar36 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar14 <= (int)uVar18) {
LAB_03792fdc:
            if ((int)uVar18 < (int)uVar14) {
              iVar19 = FUN_036d3364(lVar23,0);
              if (*(uint *)(lVar32 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
              lVar45 = *(long *)(lVar32 + (long)in_stack_000001a8 + -0x134);
              if (lVar45 == 0) goto LAB_03793c9c;
              iVar15 = FUN_036d3364(lVar45,0);
              if (iVar19 != iVar15) goto LAB_03792ef4;
            }
            if (!bVar10) {
              bVar8 = true;
              goto LAB_03793338;
            }
            lVar45 = *in_stack_000001e8;
            if (lVar45 != 0) {
              if (uVar17 - 2 < *(uint *)(lVar45 + 0x18)) {
                fVar54 = *(float *)(lVar45 + (long)in_stack_000001a8 + -0x334);
                uVar16 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar36 = *in_stack_000001e8;
          if (lVar36 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar36 + 0x18) <= uVar17) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar36 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar68 = *(float *)(lVar36 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar27 = FUN_037a2200(fVar54 + fVar68,in_stack_000000a0._4_4_,0);
            if ((uVar27 & 1) != 0) {
              uVar14 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar36 = *in_stack_000001e8;
            if (lVar36 == 0) goto LAB_03793c9c;
          }
          uVar14 = uVar18;
          if ((int)uVar5 < (int)uVar18) {
            lVar45 = lVar37;
            uVar14 = uVar5;
          }
          if (*(uint *)(lVar36 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        }
        lVar36 = lVar36 + lVar45 * 0x188;
      }
      fVar54 = *(float *)(lVar36 + 0x150);
      uVar16 = *(undefined4 *)(lVar36 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(fStack00000000000000ec,fStack00000000000000e0,uStack00000000000000dc,uVar16,
                   fStack00000000000000f0 * fVar50 + fVar54,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar8 = false;
    }
LAB_03793338:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar14 = (uint)*(undefined8 *)(lVar45 + 0x18);
    if (uVar14 <= uVar18) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar45 + lVar46 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar11) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar11 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar18) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar30)) {
        bVar10 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar10 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar10 = false;
      }
      if (!bVar11) {
        if (((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) ||
           (((int)uVar5 < (int)uVar18 || (bVar10)))) goto LAB_03793428;
        if (uVar18 == uVar5) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar27 = FUN_026b97f8(uVar44,0);
          if ((uVar27 & 1) != 0) goto LAB_03793428;
        }
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar23 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar23 = *(long *)puVar7;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        uVar14 = (uint)*(undefined8 *)(lVar45 + 0x18);
        if (uVar14 <= uVar18) goto thunk_FUN_01ab6c44;
        pfVar39 = *(float **)(lVar23 + 0xb8);
        fStack0000000000000128 = *pfVar39;
        in_stack_00000140._4_4_ = pfVar39[1];
        fStack000000000000012c = pfVar39[2];
        fStack0000000000000130 = pfVar39[3];
        uStack0000000000000124 = 0;
      }
      if (uVar14 <= uVar18) goto thunk_FUN_01ab6c44;
      lVar45 = lVar45 + lVar46 * 0x188;
      fVar68 = *(float *)(lVar45 + 0x130);
      fVar52 = *(float *)(lVar45 + 0x124);
      fVar54 = *(float *)(lVar45 + 0x148);
      fVar49 = *(float *)(lVar45 + 0x14c);
      fVar51 = *(float *)(lVar45 + 0x154);
      fVar50 = *(float *)(lVar45 + 0x164);
      uVar27 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar45 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar27 & 1) == 0) {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar45);
        }
        fVar71 = (float)FUN_037a1dd8(uVar25,0);
        bVar11 = (bVar12 & 1) == 0;
        if (bVar11) {
          fVar54 = fVar52;
        }
        if (bVar11) {
          fVar50 = fVar68;
        }
        if (fVar54 - fVar71 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar54 - fVar71;
        }
        fVar54 = (float)FUN_037a1de0(uVar25,0);
        if (fStack000000000000012c <= fVar50 + fVar54) {
          fStack000000000000012c = fVar50 + fVar54;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar54 = (float)FUN_037a1df0(uVar25,0);
        if (fVar51 - fVar54 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar51 - fVar54;
        }
        fVar54 = (float)FUN_037a1de8(uVar25,0);
        if (fStack0000000000000130 <= fVar49 + fVar54) {
          fStack0000000000000130 = fVar49 + fVar54;
        }
      }
      else {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar45);
        }
        fVar71 = (float)FUN_037a1de0(uVar25,0);
        if ((bVar12 & 1) == 0) {
          fVar54 = fVar52;
        }
        if (fVar51 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar51;
        }
        fVar54 = (fVar54 + (fStack000000000000012c - fVar71)) * 0.5;
        if (fStack0000000000000130 <= fVar49) {
          fStack0000000000000130 = fVar49;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar54,
                     fStack0000000000000130,uStack0000000000000124);
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar22,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar51 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar22,0);
        fVar51 = (float)FUN_037a1de8(uVar22,0);
        if ((bVar12 & 1) == 0) {
          fVar50 = fVar68;
        }
        fStack000000000000012c = fVar50 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar54;
        fStack0000000000000130 = fVar49 + fVar51;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar18 == uVar6)) || ((int)uVar5 <= (int)uVar18)) ||
         (bVar10)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
    }
    uVar18 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar10 = (int)uVar17 < (int)uVar18;
    uVar14 = uVar30;
    uVar17 = uVar17 + 1;
  } while (bVar10);
  iVar19 = uVar30 + 1;
  plVar35 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar18;
  uVar53 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar19;
  if ((int)uVar18 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar53;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar22 = 1;
    lVar32 = 0x70;
    do {
      lVar45 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar45 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar35 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar45 + 0x18) <= uVar22) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar45 + lVar32,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar45 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar35 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar22) {
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_03785bdc(lVar45 + lVar32,1,0);
      }
      uVar22 = uVar22 + 1;
      lVar32 = lVar32 + 0x50;
    } while ((long)uVar22 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


