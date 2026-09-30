/*
FUNCTION_NAME: UnityEngine.UIElements.MouseMoveEvent$$GetPooled
ENTRY_POINT: 0378f668
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


void UnityEngine_UIElements_MouseMoveEvent__GetPooled(undefined8 param_1,uint param_2)

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
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined1 *puVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  long lVar30;
  float *pfVar31;
  long lVar32;
  uint uVar33;
  long in_x9;
  long *plVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  uint uVar39;
  long lVar40;
  long unaff_x19;
  char cVar41;
  long unaff_x20;
  uint unaff_w21;
  uint uVar42;
  long *plVar43;
  long *unaff_x22;
  uint unaff_w23;
  char *unaff_x24;
  uint unaff_w25;
  uint uVar44;
  uint unaff_w26;
  long lVar45;
  long lVar46;
  ulong unaff_x27;
  long *unaff_x28;
  uint *unaff_x29;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  float fVar58;
  undefined8 uVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float unaff_s8;
  float fVar63;
  float unaff_s9;
  float fVar64;
  float fVar65;
  float unaff_s11;
  float unaff_s12;
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
  
code_r0x0378f668:
  uVar14 = *unaff_x29;
  if (uVar14 < *(uint *)(in_x9 + 0x18)) {
    fVar56 = *(float *)(unaff_x19 + 0x2e0);
    fVar58 = 0.0;
    if ((0.0 < fVar56) && (fVar58 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
      fVar58 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
    }
    fVar58 = in_stack_00000158 * *(float *)(in_stack_000001e0 + 200) +
             *(float *)(in_x9 + (long)(int)uVar14 * unaff_x27 + 0x158) +
             (fVar58 - *(float *)(unaff_x19 + 0x33c)) +
             fStack0000000000000088 * (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0));
    uVar19 = in_stack_00001688;
LAB_03790a80:
    uVar33 = (uint)unaff_x20;
    if ((*(uint *)(in_x9 + 0x18) <= uVar14) ||
       (uVar39 = uVar14 - 1, *(uint *)(in_x9 + 0x18) <= uVar39)) goto thunk_FUN_01ab6c44;
    iVar18 = (int)unaff_x27;
    fVar56 = (fVar58 + *(float *)(unaff_x19 + 0x374) + fVar56) -
             *(float *)(in_x9 + (long)(int)uVar14 * (long)iVar18 + 0x15c);
    fVar58 = unaff_s12;
    if (((in_stack_000000b8 & 1) == 0 &&
         *(short *)(in_x9 + (long)(int)uVar39 * (long)iVar18 + 0x20) == 0xad) &&
       ((fVar56 < in_stack_00000108 || (*(int *)(in_stack_000001e0 + 0x74) == 0)))) {
      in_stack_000000b8 = 0;
      *unaff_x29 = uVar39;
      in_stack_0000160c = param_2 - 1;
      uVar19 = CONCAT44(0x2d,uVar39);
      goto LAB_0378d260;
    }
    if (*(short *)(in_x9 + (long)(int)uVar14 * unaff_x27 + 0x20) == 0xad) {
      in_stack_000000b8 = 1;
      goto LAB_0378d260;
    }
    if ((bStack00000000000000d8 & *(byte *)(in_stack_000001e0 + 0xa8) & 1) == 0) {
LAB_03790b7c:
      iVar15 = *in_stack_00000030;
      if ((iVar15 != iStack0000000000000028) && ((bStack00000000000000d8 & iVar15 != -1) != 0)) {
        in_stack_0000160c = FUN_03797154();
        unaff_x28 = (long *)PTR_DAT_03cbe438;
        lVar30 = *(long *)(in_stack_000001c0 + 0x30);
        if (lVar30 == 0) goto LAB_03793c9c;
        uVar14 = *unaff_x29;
        uVar39 = uVar14 - 1;
        if (*(uint *)(lVar30 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        iStack0000000000000028 = iVar15;
        if (*(short *)(lVar30 + (long)(int)uVar39 * (long)iVar18 + 0x20) == 0xad) {
          in_stack_000000b8 = 0;
          *unaff_x29 = uVar39;
          unaff_x22 = in_stack_000001e8;
          in_stack_0000160c = in_stack_0000160c - 1;
          uVar19 = CONCAT44(0x2d,uVar39);
          goto LAB_0378d260;
        }
      }
      if (fVar56 <= in_stack_00000108) {
        FUN_037a1530(fStack0000000000000088);
        bStack00000000000000d8 = 1;
        in_stack_000000b8 = 0;
        uStack00000000000000ac = 1;
        unaff_x22 = in_stack_000001e8;
        goto LAB_0378d260;
      }
      if (*(int *)(unaff_x19 + 0x34c) == -1) {
        *(uint *)(unaff_x19 + 0x34c) = uVar14;
      }
      if (*(char *)(in_stack_000001e0 + 0xa8) == '\0') {
LAB_03790da4:
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
          uVar19 = DAT_00d37868;
          if (iVar15 == 0) {
            in_stack_000000b8 = 0;
            unaff_x29[0] = 0;
            unaff_x29[1] = 0;
            unaff_x22 = in_stack_000001e8;
            in_stack_0000160c = 0xffffffff;
            goto LAB_0378d260;
          }
          FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__);
          memcpy(&stack0x00000da0,&stack0x000016a0,0x398);
          iVar17 = FUN_03797154();
          in_stack_000000b8 = 0;
          iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
          *(int *)(unaff_x19 + 0x324) = iVar15;
          in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
          unaff_x22 = in_stack_000001e8;
          in_stack_0000160c = iVar17 - 1;
          uVar19 = CONCAT44(0x2026,iVar15);
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
          unaff_w21 = uVar14;
          goto LAB_037909d0;
        default:
          in_stack_000000b8 = 0;
          unaff_w21 = uVar14;
          in_stack_00001688 = uVar19;
          goto LAB_0378f1e0;
        }
        in_stack_000000b8 = 0;
LAB_0379053c:
        bStack00000000000000d8 = 1;
        uStack00000000000000ac = 1;
        unaff_x22 = in_stack_000001e8;
        fVar58 = unaff_s12;
LAB_0378d260:
        in_stack_0000160c = in_stack_0000160c + 1;
        lVar30 = *(long *)(unaff_x19 + 0x20);
        if (lVar30 == 0) goto LAB_03793c9c;
        if ((int)in_stack_0000160c < (int)*(uint *)(lVar30 + 0x18)) {
          if (*(uint *)(lVar30 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
          uVar14 = *(uint *)(lVar30 + (long)(int)in_stack_0000160c * 0x10 + 0x24);
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
            unaff_x22 = in_stack_000001e8;
          }
          uVar19 = in_stack_00001688;
          in_stack_0000169c = uVar14;
          if (uVar14 != 0x1a) {
            if ((uVar14 == 0x3c) && (*(char *)(in_stack_000001e0 + 0xb5) != '\0')) {
              unaff_x24[0] = '\x01';
              unaff_x24[1] = '\x01';
              uVar21 = FUN_037974c0();
              if (((uVar21 & 1) != 0) &&
                 (in_stack_0000160c = in_stack_000015dc, *unaff_x24 == '\x01')) goto LAB_0378d260;
            }
            else {
              lVar30 = *unaff_x22;
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
              lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
              *unaff_x24 = *(char *)(lVar30 + 0x28);
              *(undefined4 *)(unaff_x19 + 0x78) = *(undefined4 *)(lVar30 + 0x60);
              *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(lVar30 + 0x40);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
            }
            lVar30 = *unaff_x22;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar14 = *(uint *)(unaff_x19 + 0x324);
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            lVar45 = (long)(int)uVar14;
            uVar52 = *(undefined4 *)(unaff_x19 + 0x78);
            cVar28 = *(char *)(lVar30 + lVar45 * unaff_x27 + 100);
            unaff_x24[1] = '\0';
            if ((uint)in_stack_00001688 == uVar14) {
              in_stack_0000169c = (uint)((ulong)in_stack_00001688 >> 0x20);
              unaff_w23 = 1;
              *unaff_x24 = '\x01';
              if (in_stack_0000169c == 0x2026) {
                *(undefined8 *)(lVar30 + lVar45 * unaff_x27 + 0x30) =
                     *(undefined8 *)(unaff_x19 + 0x1a00);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                goto thunk_FUN_01ab6c44;
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
                *(undefined1 *)(lVar30 + 0x28) = 1;
                *(undefined8 *)(lVar30 + 0x40) = *(undefined8 *)(unaff_x19 + 0x1a08);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324))
                goto thunk_FUN_01ab6c44;
                *(undefined8 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x58)
                     = *(undefined8 *)(unaff_x19 + 0x1a10);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                uVar14 = *unaff_x29;
                if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                unaff_w23 = 1;
                *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x60) =
                     *(undefined4 *)(unaff_x19 + 0x1a18);
                *(undefined1 *)
                 (*(long *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_ContainsKey__
                           + 0xb8) + 8) = 1;
                in_stack_00001688 = CONCAT44(3,uVar14 + 1);
              }
              else if (in_stack_0000169c == 3) {
                if ((*in_stack_000001c8 == 0) ||
                   (lVar22 = FUN_03779b3c(*in_stack_000001c8,0), lVar22 == 0)) goto LAB_03793c9c;
                FUN_0219b634(lVar22,&stack0x00000978,&stack0x000016a0,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_List<IIdleAutoDespawn>>__ctor__
                            );
                if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                *(undefined8 *)(lVar30 + lVar45 * unaff_x27 + 0x30) = in_stack_000016a0;
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
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              lVar30 = lVar30 + (long)(int)uVar14 * (long)iVar18;
              *(undefined1 *)(lVar30 + 0x1a0) = 0;
              *(undefined2 *)(lVar30 + 0x20) = 0x200b;
              *(undefined4 *)(lVar30 + 0x6c) = 0;
              *unaff_x29 = uVar14 + 1;
              unaff_x22 = in_stack_000001e8;
              goto LAB_0378d260;
            }
            cVar41 = *unaff_x24;
            if (cVar41 == '\x01') {
              uVar14 = *(uint *)(unaff_x19 + 0x124);
              if ((uVar14 >> 4 & 1) == 0) {
                if ((uVar14 >> 3 & 1) == 0) {
                  fStack000000000000017c = 1.0;
                  if ((uVar14 >> 5 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar21 = FUN_026b812c(in_stack_0000169c,0);
                    if ((uVar21 & 1) != 0) {
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
                  uVar21 = FUN_026b8070(in_stack_0000169c,0);
                  fStack000000000000017c = 1.0;
                  if ((uVar21 & 1) != 0) {
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
                uVar21 = FUN_026b812c(in_stack_0000169c,0);
                fStack000000000000017c = 1.0;
                if ((uVar21 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar14 = FUN_026b8410(in_stack_0000169c,0);
LAB_0378d3d0:
                  fStack000000000000017c = 1.0;
                  in_stack_0000169c = uVar14 & 0xffff;
                }
              }
              cVar41 = *unaff_x24;
            }
            else {
              fStack000000000000017c = 1.0;
            }
            if (cVar41 == '\x01') {
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
              *in_stack_000001a8 = *(long *)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001a8);
              unaff_x22 = in_stack_000001e8;
              if (*in_stack_000001a8 == 0) goto LAB_0378d260;
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
              *in_stack_000001c8 = *(long *)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x40);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_000001c8);
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
              *in_stack_00000190 = *(long *)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x58);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              uVar33 = *unaff_x29;
              uVar14 = *(uint *)(lVar30 + 0x18);
              if (uVar14 <= uVar33) goto thunk_FUN_01ab6c44;
              *(undefined4 *)(unaff_x19 + 0x78) =
                   *(undefined4 *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x60);
              if (unaff_w23 == 0) {
LAB_0378d570:
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar56 = *(float *)(unaff_x19 + 0xf4);
                iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                lVar30 = *(long *)(unaff_x19 + 0x68);
              }
              else {
                lVar45 = *(long *)(unaff_x19 + 0x20);
                if (lVar45 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar45 + 0x18) <= in_stack_0000160c) goto thunk_FUN_01ab6c44;
                if ((*(int *)(lVar45 + (long)(int)in_stack_0000160c * 0x10 + 0x24) != 10) ||
                   (uVar33 == *(uint *)(unaff_x19 + 0x328))) goto LAB_0378d570;
                if (uVar14 <= uVar33 - 1) goto thunk_FUN_01ab6c44;
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar56 = *(float *)(lVar30 + (long)(int)(uVar33 - 1) * (long)iVar18 + 0x68);
                iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                lVar30 = *in_stack_000001c8;
              }
              if (lVar30 == 0) goto LAB_03793c9c;
              fVar53 = (float)FUN_03776960(lVar30 + 0xb0,0);
              fVar47 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar47 = 1.0;
              }
              fStack0000000000000170 = 0.0;
              fVar49 = 0.0;
              if ((unaff_w23 & in_stack_0000169c == 0x2026) == 0) {
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar49 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fStack0000000000000170 = (float)FUN_037769c0(*in_stack_000001c8 + 0xb0,0);
              }
              lVar30 = *(long *)(unaff_x19 + 0x1588);
              if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_03793c9c;
              fVar64 = *(float *)(unaff_x19 + 0xf0);
              fVar48 = *(float *)(lVar30 + 0x2c);
              fVar58 = (float)FUN_03776ea8(*(long *)(lVar30 + 0x20),0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar50 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar66 = *(float *)(unaff_x19 + 0xf0);
              fVar51 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              uVar14 = *(uint *)(unaff_x19 + 0x324);
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              lVar45 = lVar30 + (long)(int)uVar14 * unaff_x27;
              fVar47 = ((fStack000000000000017c * fVar56) / (float)iVar15) * fVar53 * fVar47;
              fVar58 = fVar47 * fVar64 * fVar48 * fVar58;
              *(undefined1 *)(lVar45 + 0x28) = 1;
              *(float *)(lVar45 + 0x16c) = fVar58;
              in_stack_000001a0 = *(float *)(unaff_x19 + 0xd8);
              fVar51 = fVar47 * fVar50 * fVar66 * fVar51;
LAB_0378db90:
              unaff_s12 = fVar58;
              if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
                unaff_s12 = 0.0;
              }
            }
            else {
              if (cVar41 == '\x02') {
                lVar30 = *in_stack_000001e8;
                if (lVar30 != 0) {
                  if (*unaff_x29 < *(uint *)(lVar30 + 0x18)) {
                    plVar43 = *(long **)(lVar30 + (long)(int)*unaff_x29 * unaff_x27 + 0x30);
                    if (plVar43 != (long *)0x0) {
                      bVar12 = *(byte *)(*(long *)
                                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__
                                        + 0x130);
                      if ((*(byte *)(*plVar43 + 0x130) < bVar12) ||
                         (*(long *)(*(long *)(*plVar43 + 200) + (ulong)bVar12 * 8 + -8) !=
                          *(long *)
                           Method_System_Collections_Generic_Dictionary<int,_TerrainMap>__ctor__)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6ee0(plVar43);
                      }
                      plVar23 = (long *)FUN_03783144(plVar43,0);
                      if (plVar23 == (long *)0x0) {
                        plVar23 = (long *)0x0;
                        *in_stack_00000160 = 0;
                      }
                      else {
                        lVar30 = *(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_Material>_Add__;
                        bVar12 = *(byte *)(lVar30 + 0x130);
                        if (*(byte *)(*plVar23 + 0x130) < bVar12) {
                          plVar34 = (long *)0x0;
                        }
                        else {
                          plVar34 = plVar23;
                          if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar12 * 8 + -8) !=
                              lVar30) {
                            plVar34 = (long *)0x0;
                          }
                        }
                        *in_stack_00000160 = (long)plVar34;
                        if (*(byte *)(*plVar23 + 0x130) < bVar12) {
                          plVar23 = (long *)0x0;
                        }
                        else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar12 * 8 + -8) !=
                                 lVar30) {
                          plVar23 = (long *)0x0;
                        }
                      }
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (in_stack_00000160,plVar23);
                      iVar15 = FUN_0377acf0(plVar43,0);
                      *(int *)(unaff_x19 + 0x157c) = iVar15;
                      if (in_stack_0000169c == 0x3c) {
                        in_stack_0000169c = iVar15 + 0xe000;
                      }
                      else {
                        uVar16 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                        *(undefined4 *)(unaff_x19 + 0x1580) = uVar16;
                      }
                      if (*(long *)(unaff_x19 + 0x68) != 0) {
                        fVar58 = *(float *)(unaff_x19 + 0xf4);
                        FUN_03779650(&stack0x000016a0,*(long *)(unaff_x19 + 0x68),0);
                        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
                        iVar15 = FUN_03776950(&stack0x00001610,0);
                        if (*in_stack_000001c8 != 0) {
                          FUN_03779650(&stack0x000016a0,*in_stack_000001c8,0);
                          memcpy(&stack0x00001610,&stack0x000016a0,0x60);
                          fVar47 = (float)FUN_03776960(&stack0x00001610,0);
                          fVar56 = in_stack_00000150;
                          if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                            fVar56 = 1.0;
                          }
                          if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                          fVar56 = (fVar58 / (float)iVar15) * fVar47 * fVar56;
                          iVar15 = FUN_03776950(*in_stack_00000160 + 0x48,0);
                          fVar58 = *(float *)(unaff_x19 + 0xf4);
                          if (iVar15 < 1) {
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            iVar15 = FUN_03776950(*in_stack_000001c8 + 0xb0,0);
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar47 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                            fStack0000000000000170 = in_stack_00000150;
                            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                              fStack0000000000000170 = 1.0;
                            }
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar53 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                            if (plVar43[4] == 0) goto LAB_03793c9c;
                            FUN_03776e6c(&stack0x000016a0,plVar43[4],0);
                            fVar64 = (float)FUN_03776c9c(&stack0x000015c0,0);
                            if (plVar43[4] == 0) goto LAB_03793c9c;
                            fVar48 = *(float *)((long)plVar43 + 0x2c);
                            fVar50 = (float)FUN_03776ea8(plVar43[4],0);
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar49 = (float)FUN_03776980(*in_stack_000001c8 + 0xb0,0);
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar66 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
                            if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                            fVar60 = *(float *)(unaff_x19 + 0xf0);
                            fVar51 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
                            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                            fVar51 = fVar56 * fVar66 * fVar60 * fVar51;
                            fStack0000000000000170 =
                                 (fVar58 / (float)iVar15) * fVar47 * fStack0000000000000170;
                            fVar58 = fStack0000000000000170 * (fVar53 / fVar64) * fVar48 * fVar50;
                            fStack0000000000000170 = fStack0000000000000170 / fVar58;
                            fVar49 = fStack0000000000000170 * fVar49;
                            fVar56 = (float)FUN_037769c0(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                            fStack0000000000000170 = fStack0000000000000170 * fVar56;
                          }
                          else {
                            if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                            iVar15 = FUN_03776950(*in_stack_00000160 + 0x48,0);
                            if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                            fVar47 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                            if (plVar43[4] == 0) goto LAB_03793c9c;
                            fVar64 = *(float *)((long)plVar43 + 0x2c);
                            fVar53 = in_stack_00000150;
                            if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                              fVar53 = 1.0;
                            }
                            fVar48 = (float)FUN_03776ea8(plVar43[4],0);
                            if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                            fVar49 = (float)FUN_03776980(*in_stack_00000160 + 0x48,0);
                            if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                            fVar50 = (float)FUN_037769b0(*in_stack_00000160 + 0x48,0);
                            if (*in_stack_00000160 == 0) goto LAB_03793c9c;
                            fVar66 = *(float *)(unaff_x19 + 0xf0);
                            fVar51 = (float)FUN_03776960(*in_stack_00000160 + 0x48,0);
                            if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_03793c9c;
                            fVar51 = fVar56 * fVar50 * fVar66 * fVar51;
                            fVar58 = (fVar58 / (float)iVar15) * fVar47 * fVar53 * fVar64 * fVar48;
                            fStack0000000000000170 =
                                 (float)FUN_037769c0(*(long *)(unaff_x19 + 0xe0) + 0x48,0);
                          }
                          *in_stack_000001a8 = (long)plVar43;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    (in_stack_000001a8,plVar43);
                          lVar30 = *in_stack_000001e8;
                          if (lVar30 != 0) {
                            if (*in_stack_000001d0 < *(uint *)(lVar30 + 0x18)) {
                              lVar30 = lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27;
                              *(undefined1 *)(lVar30 + 0x28) = 2;
                              *(float *)(lVar30 + 0x16c) = fVar58;
                              *(long *)(lVar30 + 0x48) = *in_stack_00000160;
                              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                              lVar30 = *in_stack_000001e8;
                              if (lVar30 != 0) {
                                if (*in_stack_000001d0 < *(uint *)(lVar30 + 0x18)) {
                                  *(long *)(lVar30 + (long)(int)*in_stack_000001d0 * unaff_x27 +
                                           0x40) = *in_stack_000001c8;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            ();
                                  lVar30 = *in_stack_000001e8;
                                  if (lVar30 != 0) {
                                    uVar14 = *in_stack_000001d0;
                                    if (uVar14 < *(uint *)(lVar30 + 0x18)) {
                                      *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x60)
                                           = *(undefined4 *)(unaff_x19 + 0x78);
                                      *(undefined4 *)(unaff_x19 + 0x78) = uVar52;
                                      in_stack_000001a0 = 0.0;
                                      unaff_x29 = in_stack_000001d0;
                                      goto LAB_0378db90;
                                    }
                                    goto thunk_FUN_01ab6c44;
                                  }
                                  goto LAB_03793c9c;
                                }
                                goto thunk_FUN_01ab6c44;
                              }
                              goto LAB_03793c9c;
                            }
                            goto thunk_FUN_01ab6c44;
                          }
                        }
                      }
                    }
                    goto LAB_03793c9c;
                  }
                  goto thunk_FUN_01ab6c44;
                }
                goto LAB_03793c9c;
              }
              lVar30 = *in_stack_000001e8;
              fVar51 = 0.0;
              unaff_s12 = fVar58;
              if (in_stack_0000169c == 3 || in_stack_0000169c == 0xad) {
                unaff_s12 = fVar51;
              }
              if (lVar30 == 0) goto LAB_03793c9c;
              uVar14 = *unaff_x29;
              fVar49 = 0.0;
              fStack0000000000000170 = 0.0;
            }
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)uVar14 * (long)iVar18;
            *(short *)(lVar30 + 0x20) = (short)in_stack_0000169c;
            *(undefined4 *)(lVar30 + 0x68) = *(undefined4 *)(unaff_x19 + 0xf4);
            *(undefined4 *)(lVar30 + 0x170) = *(undefined4 *)(unaff_x19 + 0x1ac);
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x174) =
                 *(undefined4 *)(unaff_x19 + 0x1b0);
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27 + 0x17c) =
                 *(undefined4 *)(unaff_x19 + 0x1b4);
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar19 = in_stack_00000100[1];
            in_stack_000016a0 = *in_stack_00000100;
            if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x324)) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x324) * unaff_x27;
            *(undefined4 *)(lVar30 + 0x198) = *(undefined4 *)(in_stack_00000100 + 2);
            *(undefined8 *)(lVar30 + 400) = uVar19;
            *(undefined8 *)(lVar30 + 0x188) = in_stack_000016a0;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
            lVar45 = *(long *)(lVar30 + 0x38);
            *(undefined4 *)(lVar30 + 0x19c) = *(undefined4 *)(unaff_x19 + 0x124);
            if ((lVar45 == 0) &&
               ((*in_stack_000001a8 == 0 ||
                (lVar45 = *(long *)(*in_stack_000001a8 + 0x20), lVar45 == 0)))) goto LAB_03793c9c;
            FUN_03776e6c(&stack0x000016a0,lVar45,0);
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
            uVar52 = 0;
            in_stack_00000188 = *(float *)(in_stack_000001e0 + 0xc0);
            if (*(char *)(in_stack_000001e0 + 0xb4) != '\0') {
              if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
              uVar14 = *unaff_x29;
              uVar33 = *(uint *)(*in_stack_000001a8 + 0x28);
              if ((int)uVar14 < (int)uStack00000000000000dc) {
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= uVar14 + 1) goto thunk_FUN_01ab6c44;
                lVar30 = *(long *)(lVar30 + (long)(int)(uVar14 + 1) * (long)iVar18 + 0x30);
                if ((((lVar30 == 0) || (*in_stack_000001c8 == 0)) ||
                    (lVar45 = *(long *)(*in_stack_000001c8 + 0x170), lVar45 == 0)) ||
                   (lVar45 = *(long *)(lVar45 + 0x40), lVar45 == 0)) goto LAB_03793c9c;
                in_stack_000016a0 =
                     CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                              uVar33 | *(int *)(lVar30 + 0x28) << 0x10);
                uVar21 = FUN_0219f8b8(lVar45,&stack0x000016a0,&stack0x00001590,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                     );
                if ((uVar21 & 1) != 0) {
                  FUN_037791c8(&stack0x000016a0,&stack0x00001590,0);
                  uVar52 = UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                                     (&stack0x00001570,0);
                  uVar21 = FUN_037791f0(&stack0x00001590,0);
                  if ((uVar21 & 0x100) != 0) {
                    in_stack_00000188 = 0.0;
                  }
                }
                uVar14 = *unaff_x29;
              }
              if (0 < (int)uVar14) {
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= uVar14 - 1) goto thunk_FUN_01ab6c44;
                lVar30 = *(long *)(lVar30 + (ulong)(uVar14 - 1) * (unaff_x27 & 0xffffffff) + 0x30);
                if (((lVar30 == 0) || (*in_stack_000001c8 == 0)) ||
                   ((lVar45 = *(long *)(*in_stack_000001c8 + 0x170), lVar45 == 0 ||
                    (lVar45 = *(long *)(lVar45 + 0x40), lVar45 == 0)))) goto LAB_03793c9c;
                in_stack_000016a0 =
                     CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),
                              *(uint *)(lVar30 + 0x28) | uVar33 << 0x10);
                uVar21 = FUN_0219f8b8(lVar45,&stack0x000016a0,&stack0x00001590,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<int,_TagPlayerController>_set_Item__
                                     );
                if ((uVar21 & 1) != 0) {
                  FUN_037791dc(&stack0x000016a0,&stack0x00001590,0);
                  UnityEngine_UIElements_DefaultEventSystem_NoInput__get_mousePresent
                            (&stack0x00001570,0);
                  FUN_03778e8c(uVar52,0);
                  uVar21 = FUN_037791f0(&stack0x00001590,0);
                  if ((uVar21 & 0x100) != 0) {
                    in_stack_00000188 = 0.0;
                  }
                }
              }
            }
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar14 = *unaff_x29;
            uVar52 = FUN_03778e7c(&stack0x000015e0,0);
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x160) = uVar52;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar21 = FUN_037a5c04(in_stack_0000169c,0);
            uVar14 = *unaff_x29;
            if ((uVar21 & 1) == 0) {
              if ((uVar21 & 1) == 0 && 0 < (int)uVar14) {
                uVar33 = *(uint *)(unaff_x19 + 0x19c4);
                if ((uVar33 == 0x80000000) || (uVar33 != uVar14 - 1)) {
                  do {
                    uVar33 = uVar14 - 1;
                    uVar52 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
                    if (((int)uVar14 < 1) || (uVar33 == *(uint *)(unaff_x19 + 0x19c4))) {
                      uVar14 = *(uint *)(unaff_x19 + 0x19c4);
                      if (uVar14 == 0x80000000) goto LAB_0378dfc4;
                      lVar30 = *in_stack_000001e8;
                      if (lVar30 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                      lVar30 = *(long *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x30);
                      if ((lVar30 == 0) || (lVar30 = FUN_03787a68(lVar30,0), lVar30 == 0))
                      goto LAB_03793c9c;
                      uVar14 = FUN_03776e5c(lVar30,0);
                      if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                      iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
                      if (((*in_stack_000001c8 == 0) ||
                          (lVar30 = FUN_03779cb4(*in_stack_000001c8,0), lVar30 == 0)) ||
                         (*(long *)(lVar30 + 0x48) == 0)) goto LAB_03793c9c;
                      in_stack_000016a0 = CONCAT44(uVar52,uVar14 | iVar15 << 0x10);
                      uVar24 = FUN_0219f8b8(*(long *)(lVar30 + 0x48),&stack0x000016a0,
                                            &stack0x00001518,
                                            *(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                           );
                      unaff_x29 = in_stack_000001d0;
                      if ((uVar24 & 1) == 0) goto LAB_0378dfc4;
                      lVar30 = *in_stack_000001e8;
                      if (lVar30 == 0) goto LAB_03793c9c;
                      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                      goto thunk_FUN_01ab6c44;
                      fVar56 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) *
                                                   unaff_x27 + 0x148);
                      fVar64 = *(float *)(unaff_x19 + 0x2f4);
                      FUN_037793b0(&stack0x00001518,0);
                      fVar47 = (float)FUN_03779388(&stack0x00001550,0);
                      FUN_037793c0(&stack0x00001518,0);
                      fVar53 = (float)FUN_03779398(&stack0x00001548,0);
                      FUN_03778e64(((fVar56 - fVar64) / unaff_s12 + fVar47) - fVar53,
                                   &stack0x000015e0,0);
                      FUN_037793b0(&stack0x00001518,0);
                      fVar56 = (float)FUN_03779390(&stack0x00001550,0);
                      puVar25 = &stack0x00001518;
                      goto LAB_0378f5a8;
                    }
                    lVar30 = *in_stack_000001e8;
                    if (lVar30 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar30 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
                    lVar30 = *(long *)(lVar30 + (ulong)uVar33 * (unaff_x27 & 0xffffffff) + 0x30);
                    if ((lVar30 == 0) || (lVar30 = FUN_03787a68(lVar30,0), lVar30 == 0))
                    goto LAB_03793c9c;
                    uVar14 = FUN_03776e5c(lVar30,0);
                    if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                    iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
                    if (((*in_stack_000001c8 == 0) ||
                        (lVar30 = FUN_03779cb4(*in_stack_000001c8,0), lVar30 == 0)) ||
                       (*(long *)(lVar30 + 0x50) == 0)) goto LAB_03793c9c;
                    in_stack_000016a0 = CONCAT44(uVar52,uVar14 | iVar15 << 0x10);
                    uVar24 = FUN_0219f8b8(*(long *)(lVar30 + 0x50),&stack0x000016a0,&stack0x00001530
                                          ,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<int,_Task>__ctor__
                                         );
                    unaff_x29 = in_stack_000001d0;
                    uVar14 = uVar33;
                  } while ((uVar24 & 1) == 0);
                  lVar30 = *in_stack_000001e8;
                  if (lVar30 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar30 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
                  fVar64 = *(float *)(unaff_x19 + 0x2e0);
                  fVar48 = *(float *)(unaff_x19 + 0x180);
                  lVar30 = lVar30 + uVar33 * unaff_x27;
                  fVar56 = *(float *)(unaff_x19 + 0x2f4);
                  fVar50 = *(float *)(lVar30 + 0x148);
                  fVar66 = *(float *)(lVar30 + 0x150);
                  FUN_037793d0(&stack0x00001530,0);
                  fVar47 = (float)FUN_03779388(&stack0x00001550,0);
                  FUN_037793e0(&stack0x00001530,0);
                  fVar53 = (float)FUN_03779398(&stack0x00001548,0);
                  FUN_03778e64(((fVar50 - fVar56) / unaff_s12 + fVar47) - fVar53,&stack0x000015e0,0)
                  ;
                  FUN_037793d0(&stack0x00001530,0);
                  fVar56 = (float)FUN_03779390(&stack0x00001550,0);
                  FUN_037793e0(&stack0x00001530,0);
                  fVar47 = (float)FUN_037793a0(&stack0x00001548,0);
                  FUN_03778e74(((fVar66 - ((fVar51 - fVar64) + fVar48)) / unaff_s12 + fVar56) -
                               fVar47,&stack0x000015e0,0);
                  in_stack_00000188 = 0.0;
                }
                else {
                  lVar30 = *in_stack_000001e8;
                  if (lVar30 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar30 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
                  lVar30 = *(long *)(lVar30 + (long)(int)uVar33 * unaff_x27 + 0x30);
                  if ((lVar30 == 0) || (lVar30 = FUN_03787a68(lVar30,0), lVar30 == 0))
                  goto LAB_03793c9c;
                  uVar14 = FUN_03776e5c(lVar30,0);
                  if (*in_stack_000001a8 == 0) goto LAB_03793c9c;
                  iVar15 = FUN_0377acf0(*in_stack_000001a8,0);
                  if (((*in_stack_000001c8 == 0) ||
                      (lVar30 = FUN_03779cb4(*in_stack_000001c8,0), lVar30 == 0)) ||
                     (*(long *)(lVar30 + 0x48) == 0)) goto LAB_03793c9c;
                  in_stack_000016a0 =
                       CONCAT44((int)((ulong)in_stack_000016a0 >> 0x20),uVar14 | iVar15 << 0x10);
                  uVar24 = FUN_0219f8b8(*(long *)(lVar30 + 0x48),&stack0x000016a0,&stack0x00001558,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_Task>_Remove__
                                       );
                  unaff_x29 = in_stack_000001d0;
                  if ((uVar24 & 1) != 0) {
                    lVar30 = *in_stack_000001e8;
                    if (lVar30 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x19c4))
                    goto thunk_FUN_01ab6c44;
                    fVar56 = *(float *)(lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x19c4) *
                                                 unaff_x27 + 0x148);
                    fVar64 = *(float *)(unaff_x19 + 0x2f4);
                    FUN_037793b0(&stack0x00001558,0);
                    fVar47 = (float)FUN_03779388(&stack0x00001550,0);
                    FUN_037793c0(&stack0x00001558,0);
                    fVar53 = (float)FUN_03779398(&stack0x00001548,0);
                    FUN_03778e64(((fVar56 - fVar64) / unaff_s12 + fVar47) - fVar53,&stack0x000015e0,
                                 0);
                    FUN_037793b0(&stack0x00001558,0);
                    fVar56 = (float)FUN_03779390(&stack0x00001550,0);
                    puVar25 = &stack0x00001558;
LAB_0378f5a8:
                    FUN_037793c0(puVar25,0);
                    fVar47 = (float)FUN_037793a0(&stack0x00001548,0);
                    FUN_03778e74(fVar56 - fVar47,&stack0x000015e0,0);
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
            fVar56 = (float)FUN_03778e6c(&stack0x000015e0,0);
            fVar47 = (float)FUN_03778e6c(&stack0x000015e0,0);
            if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
              fVar64 = *(float *)(unaff_x19 + 0x2f4);
              fVar53 = (float)FUN_03776cb4(&stack0x000015f0,0);
              fVar64 = fVar64 - unaff_s12 * fVar53 * (1.0 - *(float *)(unaff_x19 + 0x1594));
              *(float *)(unaff_x19 + 0x2f4) = fVar64;
              if ((unaff_w26 != 0) || (in_stack_0000169c == 0x200b)) {
                *(float *)(unaff_x19 + 0x2f4) =
                     fVar64 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
              }
            }
            fVar53 = *(float *)(unaff_x19 + 0x2f0);
            if (fVar53 == 0.0) {
              in_stack_000000e8._4_4_ = 0.0;
            }
            else {
              fVar64 = (float)FUN_03776c94(&stack0x000015f0,0);
              fVar48 = (float)FUN_03776ca4(&stack0x000015f0,0);
              in_stack_000000e8._4_4_ =
                   (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                   (fVar53 * 0.5 - unaff_s12 * (fVar64 * 0.5 + fVar48));
              *(float *)(unaff_x19 + 0x2f4) =
                   *(float *)(unaff_x19 + 0x2f4) + in_stack_000000e8._4_4_;
            }
            uVar14 = 0;
            if ((cVar28 == '\0') && (*unaff_x24 == '\x01')) {
              uVar14 = *(uint *)(unaff_x19 + 0x124) & 1;
            }
            lVar30 = *in_stack_00000190;
            if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar24 = FUN_036cee6c(lVar30,0,0);
            puVar7 = Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__;
            if (uVar14 == 0) {
              in_stack_00000148 = 0.0;
              if ((uVar24 & 1) != 0) {
                lVar30 = *in_stack_00000190;
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar30 == 0) goto LAB_03793c9c;
                uVar24 = FUN_03699d3c(lVar30,*(undefined4 *)
                                              (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
                if ((uVar24 & 1) != 0) {
                  lVar30 = *in_stack_00000190;
                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (lVar30 == 0) goto LAB_03793c9c;
                  uVar24 = FUN_03699d3c(lVar30,*(undefined4 *)
                                                (*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
                  if ((uVar24 & 1) != 0) {
                    lVar30 = *in_stack_00000190;
                    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    if (lVar30 != 0) {
                      fVar53 = (float)FUN_0369e060(lVar30,*(undefined4 *)
                                                           (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c
                                                           ),0);
                      unaff_x28 = (long *)PTR_DAT_03cbe438;
                      if ((*in_stack_000001c8 != 0) && (*in_stack_00000190 != 0)) {
                        fVar48 = *(float *)(*in_stack_000001c8 + 0x188);
                        fVar64 = (float)FUN_0369e060(*in_stack_00000190,
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
                        fVar64 = fVar64 * fVar53 * fVar48 * 0.25;
                        if (fVar53 < in_stack_000001a0 + fVar64) {
                          in_stack_000001a0 = fVar53 - fVar64;
                        }
                        goto LAB_0378e344;
                      }
                    }
                    goto LAB_03793c9c;
                  }
                }
              }
              fVar64 = 0.0;
              unaff_x28 = (long *)PTR_DAT_03cbe438;
            }
            else {
              fVar64 = 0.0;
              unaff_x28 = (long *)PTR_DAT_03cbe438;
              if ((uVar24 & 1) != 0) {
                lVar30 = *in_stack_00000190;
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_List<int>>_Clear__ +
                            0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                if (lVar30 == 0) goto LAB_03793c9c;
                uVar24 = FUN_03699d3c(lVar30,*(undefined4 *)
                                              (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0);
                unaff_x28 = (long *)PTR_DAT_03cbe438;
                if ((uVar24 & 1) != 0) {
                  lVar30 = *in_stack_00000190;
                  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  if (lVar30 == 0) goto LAB_03793c9c;
                  fVar53 = (float)FUN_0369e060(lVar30,*(undefined4 *)
                                                       (*(long *)(*(long *)puVar7 + 0xb8) + 0x6c),0)
                  ;
                  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                  fVar48 = (float)FUN_03779d1c(*in_stack_000001c8,0);
                  unaff_x28 = (long *)PTR_DAT_03cbe438;
                  if (*in_stack_00000190 == 0) goto LAB_03793c9c;
                  fVar64 = (float)FUN_0369e060(*in_stack_00000190,
                                               *(undefined4 *)
                                                (*(long *)(*(long *)puVar7 + 0xb8) + 0xe4),0);
                  fVar64 = fVar53 * fVar48 * 0.25 * fVar64;
                  if (fVar53 < in_stack_000001a0 + fVar64) {
                    in_stack_000001a0 = fVar53 - fVar64;
                  }
                }
              }
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              in_stack_00000148 = (float)FUN_03779d2c(*in_stack_000001c8,0);
            }
LAB_0378e344:
            fVar66 = *(float *)(unaff_x19 + 0x2f4);
            fVar53 = (float)FUN_03776ca4(&stack0x000015f0,0);
            fVar50 = *(float *)(unaff_x19 + 0x19a8);
            fVar48 = (float)FUN_03778e5c(&stack0x000015e0,0);
            fVar66 = fVar66 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              unaff_s12 *
                              (fVar48 + ((fVar53 * fVar50 - in_stack_000001a0) - fVar64));
            fVar53 = (float)FUN_03776cac(&stack0x000015f0,0);
            fVar48 = (float)FUN_03778e6c(&stack0x000015e0,0);
            in_stack_000001b8._4_4_ =
                 *(float *)(unaff_x19 + 0x180) +
                 ((fVar51 + unaff_s12 * (in_stack_000001a0 + fVar53 + fVar48)) -
                 *(float *)(unaff_x19 + 0x2e0));
            fVar53 = (float)FUN_03776c9c(&stack0x000015f0,0);
            fVar50 = in_stack_000001b8._4_4_ -
                     unaff_s12 * (in_stack_000001a0 + in_stack_000001a0 + fVar53);
            fVar53 = (float)FUN_03776c94(&stack0x000015f0,0);
            fVar60 = fVar66 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                              unaff_s12 *
                              (fVar64 + fVar64 +
                              in_stack_000001a0 + in_stack_000001a0 +
                              fVar53 * *(float *)(unaff_x19 + 0x19a8));
            fVar53 = fVar66;
            fVar48 = fVar60;
            if (((cVar28 == '\0') && (*unaff_x24 == '\x01')) &&
               ((*(byte *)(unaff_x19 + 0x124) >> 1 & 1) != 0)) {
              if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
              iVar15 = *(int *)(unaff_x19 + 0x19a4);
              fVar53 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar48 = (float)FUN_037769b0(*in_stack_000001c8 + 0xb0,0);
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar68 = *(float *)(unaff_x19 + 0xf0);
              fVar55 = *(float *)(unaff_x19 + 0x180);
              fVar63 = (float)iVar15 * fStack00000000000000a8;
              fVar54 = (float)FUN_03776960(*in_stack_000001c8 + 0xb0,0);
              fVar54 = fVar54 * fVar68 * (fVar53 - (fVar48 + fVar55)) * 0.5;
              fVar53 = (float)FUN_03776cac(&stack0x000015f0,0);
              fVar48 = fVar63 * unaff_s12 * ((fVar64 + in_stack_000001a0 + fVar53) - fVar54);
              fVar68 = (float)FUN_03776cac(&stack0x000015f0,0);
              fVar55 = (float)FUN_03776c9c(&stack0x000015f0,0);
              in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ + 0.0;
              fVar53 = fVar66 + fVar48;
              fVar50 = fVar50 + 0.0;
              fVar48 = fVar60 + fVar48;
              fVar63 = fVar63 * unaff_s12 *
                                ((((fVar68 - fVar55) - in_stack_000001a0) - fVar64) - fVar54);
              fVar66 = fVar66 + fVar63;
              fVar60 = fVar60 + fVar63;
            }
            uVar19 = *in_stack_000000f8;
            uVar20 = *_fStack00000000000000f0;
            if (DAT_0411f169 == '\0') {
              FUN_01ab69ac(PTR_DAT_03cbdeb8);
              DAT_0411f169 = '\x01';
            }
            uVar57 = **(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8);
            uVar59 = (*(undefined8 **)(*(long *)PTR_DAT_03cbdeb8 + 0xb8))[1];
            fVar64 = 0.0;
            if (DAT_00d38b04 <
                (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar59 >> 0x20) +
                (float)uVar20 * (float)uVar59 +
                (float)uVar19 * (float)uVar57 +
                (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar57 >> 0x20)) {
              fVar62 = 0.0;
              fVar63 = 0.0;
              fVar55 = 0.0;
              fVar54 = in_stack_000001b8._4_4_;
              fVar68 = fVar50;
            }
            else {
              FUN_036be00c(&stack0x000016a0,*(undefined4 *)(unaff_x19 + 0x19b4),
                           *(undefined4 *)(unaff_x19 + 0x19b8),*(undefined4 *)(unaff_x19 + 0x19bc),
                           *(undefined4 *)(unaff_x19 + 0x19c0),0);
              fVar65 = (fVar48 + fVar66) * 0.5;
              fVar67 = (fVar50 + in_stack_000001b8._4_4_) * 0.5;
              in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ - fVar67;
              fVar55 = 0.0;
              fVar54 = in_stack_000001b8._4_4_;
              fVar53 = (float)FUN_036bdd2c(fVar53 - fVar65,&stack0x000014d0,0);
              fVar53 = fVar65 + fVar53;
              fVar55 = fVar55 + 0.0;
              fVar68 = fVar50 - fVar67;
              fVar63 = 0.0;
              fVar50 = fVar68;
              fVar66 = (float)FUN_036bdd2c(fVar66 - fVar65,&stack0x000014d0,0);
              fVar66 = fVar65 + fVar66;
              fVar50 = fVar67 + fVar50;
              fVar63 = fVar63 + 0.0;
              fVar62 = 0.0;
              fVar48 = (float)FUN_036bdd2c(fVar48 - fVar65,&stack0x000014d0,0);
              fVar48 = fVar65 + fVar48;
              in_stack_000001b8._4_4_ = fVar67 + in_stack_000001b8._4_4_;
              fVar62 = fVar62 + 0.0;
              fVar64 = 0.0;
              fVar60 = (float)FUN_036bdd2c(fVar60 - fVar65,&stack0x000014d0,0);
              fVar60 = fVar65 + fVar60;
              fVar64 = fVar64 + 0.0;
              fVar54 = fVar67 + fVar54;
              fVar68 = fVar67 + fVar68;
            }
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
            *(float *)(lVar30 + 0x124) = fVar66;
            *(float *)(lVar30 + 0x128) = fVar50;
            *(float *)(lVar30 + 300) = fVar63;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
            *(float *)(lVar30 + 0x118) = fVar53;
            *(float *)(lVar30 + 0x11c) = fVar54;
            *(float *)(lVar30 + 0x120) = fVar55;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
            *(float *)(lVar30 + 0x138) = fVar62;
            *(float *)(lVar30 + 0x130) = fVar48;
            *(float *)(lVar30 + 0x134) = in_stack_000001b8._4_4_;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
            *(float *)(lVar30 + 0x13c) = fVar60;
            *(float *)(lVar30 + 0x140) = fVar68;
            *(float *)(lVar30 + 0x144) = fVar64;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar14 = *unaff_x29;
            fVar64 = *(float *)(unaff_x19 + 0x2f4);
            fVar53 = (float)FUN_03778e5c(&stack0x000015e0,0);
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            *(float *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x148) = fVar64 + unaff_s12 * fVar53
            ;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar14 = *unaff_x29;
            fVar60 = *(float *)(unaff_x19 + 0x2e0);
            fVar64 = *(float *)(unaff_x19 + 0x180);
            fVar53 = (float)FUN_03778e6c(&stack0x000015e0,0);
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            *(float *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x150) =
                 (fVar51 - fVar60) + fVar64 + unaff_s12 * fVar53;
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar33 = *unaff_x29;
            unaff_x20 = (long)(int)uVar33;
            if (*(uint *)(lVar30 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
            *(float *)(lVar30 + unaff_x20 * unaff_x27 + 0x168) =
                 (fVar48 - fVar66) / (fVar54 - fVar50);
            fVar56 = unaff_s12 * (fVar49 + fVar56);
            if (*unaff_x24 == '\x01') {
              fVar56 = fVar56 / fStack000000000000017c;
              fVar47 = (unaff_s12 * (fStack0000000000000170 + fVar47)) / fStack000000000000017c;
            }
            else {
              fVar47 = unaff_s12 * (fStack0000000000000170 + fVar47);
            }
            in_stack_000001b8._4_4_ = *(float *)(unaff_x19 + 0x328);
            fVar53 = *(float *)(unaff_x19 + 0x180);
            bVar9 = (float)uVar33 == in_stack_000001b8._4_4_;
            bVar10 = unaff_w26 == 0;
            fVar56 = fVar53 + fVar56;
            if (bVar10 || bVar9) {
              fVar47 = fVar53 + fVar47;
              fVar49 = fVar56;
              fVar64 = fVar47;
              if (fVar53 != 0.0) {
                fVar49 = (fVar56 - fVar53) / *(float *)(unaff_x19 + 0xf0);
                fVar64 = (fVar47 - fVar53) / *(float *)(unaff_x19 + 0xf0);
                if (fVar49 <= fVar56) {
                  fVar49 = fVar56;
                }
                if (fVar47 <= fVar64) {
                  fVar64 = fVar47;
                }
              }
              lVar45 = lVar30 + unaff_x20 * unaff_x27;
              fVar53 = fVar49;
              if (fVar49 <= *(float *)(unaff_x19 + 0x338)) {
                fVar53 = *(float *)(unaff_x19 + 0x338);
              }
              fVar48 = fVar64;
              if (*(float *)(unaff_x19 + 0x33c) <= fVar64) {
                fVar48 = *(float *)(unaff_x19 + 0x33c);
              }
              *(float *)(unaff_x19 + 0x338) = fVar53;
              *(float *)(unaff_x19 + 0x33c) = fVar48;
              *(float *)(lVar45 + 0x158) = fVar49;
              *(float *)(lVar45 + 0x15c) = fVar64;
              fVar49 = *(float *)(unaff_x19 + 0x2e0);
              fVar64 = fVar56 - fVar49;
            }
            else {
              fVar53 = *(float *)(unaff_x19 + 0x338);
              lVar45 = lVar30 + unaff_x20 * unaff_x27;
              *(float *)(lVar45 + 0x158) = fVar53;
              fVar47 = *(float *)(unaff_x19 + 0x33c);
              *(float *)(lVar45 + 0x15c) = fVar47;
              fVar49 = *(float *)(unaff_x19 + 0x2e0);
              fVar64 = fVar53 - fVar49;
            }
            *(float *)(lVar45 + 0x14c) = fVar64;
            *(float *)(lVar30 + unaff_x20 * unaff_x27 + 0x154) = fVar47 - fVar49;
            *(float *)(unaff_x19 + 0x378) = fVar47 - fVar49;
            if ((*(int *)(unaff_x19 + 0x340) == 0) || (*(char *)(unaff_x19 + 0x37c) != '\0')) {
              if (bVar10 || bVar9) {
                *(float *)(unaff_x19 + 0x374) = fVar53;
                if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_03793c9c;
                fVar47 = *(float *)(unaff_x19 + 0x370);
                fVar53 = (float)FUN_03776990(*(long *)(unaff_x19 + 0x68) + 0xb0,0);
                fVar49 = *(float *)(unaff_x19 + 0x2e0);
                fStack000000000000017c = (unaff_s12 * fVar53) / fStack000000000000017c;
                if (fVar47 <= fStack000000000000017c) {
                  fVar47 = fStack000000000000017c;
                }
                *(float *)(unaff_x19 + 0x370) = fVar47;
                if (fVar49 == 0.0) goto LAB_0378ee0c;
              }
            }
            else if ((bVar10 || bVar9) && fVar49 == 0.0) {
LAB_0378ee0c:
              fVar47 = *(float *)(unaff_x19 + 0x19c8);
              if (*(float *)(unaff_x19 + 0x19c8) <= fVar56) {
                fVar47 = fVar56;
              }
              *(float *)(unaff_x19 + 0x19c8) = fVar47;
            }
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            unaff_w21 = *unaff_x29;
            if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto thunk_FUN_01ab6c44;
            lVar30 = lVar30 + (long)(int)unaff_w21 * unaff_x27;
            *(undefined1 *)(lVar30 + 0x1a0) = 0;
            unaff_w25 = *(uint *)(unaff_x19 + 0x158) & 0x18;
            if ((in_stack_0000169c == 9) ||
               ((((unaff_w26 == 0 && (in_stack_0000169c != 3)) &&
                 ((in_stack_0000169c != 0x200b && (in_stack_0000169c != 0xad)))) ||
                (((in_stack_0000169c == 0xad & (in_stack_000000b8 ^ 0xff)) != 0 ||
                 (*unaff_x24 == '\x02')))))) {
              *(undefined1 *)(lVar30 + 0x1a0) = 1;
              pfVar31 = _fStack0000000000000130;
              pfVar38 = _iStack0000000000000138;
              if (unaff_w23 != 0) {
                lVar30 = *(long *)(in_stack_000001c0 + 0x48);
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                goto thunk_FUN_01ab6c44;
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                pfVar38 = (float *)(lVar30 + 100);
                pfVar31 = (float *)(lVar30 + 0x68);
              }
              unaff_s9 = *pfVar38;
              unaff_s8 = *pfVar31;
              fVar56 = *(float *)(unaff_x19 + 0x35c);
              fVar53 = *(float *)(unaff_x19 + 0x2f4);
              fStack0000000000000174 = (fStack000000000000012c - unaff_s9) - unaff_s8;
              bVar9 = true;
              if ((fVar56 <= fStack0000000000000174) && (bVar9 = false, !NAN(fVar56))) {
                bVar9 = fVar56 == -1.0;
              }
              if (!bVar9) {
                fStack0000000000000174 = fVar56;
              }
              fVar56 = 0.0;
              fVar64 = 0.0;
              if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                fVar64 = (float)FUN_03776cb4(&stack0x000015f0,0);
                fVar49 = *(float *)(unaff_x19 + 0x2e0);
              }
              fVar47 = *(float *)(unaff_x19 + 0x1594);
              fVar48 = *(float *)(unaff_x19 + 0x33c);
              if (in_stack_0000169c != 0xad) {
                fVar58 = unaff_s12;
              }
              if ((0.0 < fVar49) && (fVar56 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                fVar56 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
              }
              unaff_w21 = *in_stack_000001d0;
              fVar56 = (*(float *)(unaff_x19 + 0x374) - (fVar48 - fVar49)) + fVar56;
              if (in_stack_00000108 < fVar56) {
                if (*(int *)(unaff_x19 + 0x34c) == -1) {
                  *(uint *)(unaff_x19 + 0x34c) = unaff_w21;
                }
                uVar19 = DAT_00d37868;
                if (*(char *)(in_stack_000001e0 + 0xa8) != '\0') {
                  fVar50 = *(float *)(in_stack_000001e0 + 0xd0);
                  if (((fVar50 < *(float *)(unaff_x19 + 0x15b0)) && (0.0 < fVar49)) &&
                     (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                    fVar58 = *(float *)(unaff_x19 + 0x15b0) +
                             ((in_stack_00000018._4_4_ - fVar56) /
                             (float)*(int *)(unaff_x19 + 0x340)) / fStack0000000000000088;
                    if (fVar58 <= fVar50) {
                      fVar58 = fVar50;
                    }
                    goto LAB_03793b50;
                  }
                  fVar49 = *_fStack00000000000000d0;
                  fVar56 = *(float *)(in_stack_000001e0 + 0xac);
                  if ((fVar56 < fVar49) &&
                     (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                    fVar58 = (fVar49 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
                    if (fVar58 <= DAT_00d38b84) {
                      fVar58 = DAT_00d38b84;
                    }
                    fVar47 = (fVar49 - fVar58) * 20.0 + 0.5;
                    fVar58 = DAT_00d38e60;
                    if (fVar47 != INFINITY) {
                      fVar58 = (float)(int)fVar47 / 20.0;
                    }
                    if (fVar58 <= fVar56) {
                      fVar58 = fVar56;
                    }
                    *(float *)(unaff_x19 + 0x1598) = fVar49;
                    goto LAB_037910ac;
                  }
                }
                switch(*(undefined4 *)(in_stack_000001e0 + 0x74)) {
                case 1:
                  if (0 < *(int *)(unaff_x19 + 0x340)) {
                    iVar15 = FUN_020aa428(in_stack_00000078,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                         );
                    uVar19 = DAT_00d37868;
                    if (iVar15 == 0) {
                      in_stack_0000160c = 0xffffffff;
                      in_stack_000001d0[0] = 0;
                      in_stack_000001d0[1] = 0;
                      unaff_x22 = in_stack_000001e8;
                      unaff_x29 = in_stack_000001d0;
                      fVar58 = unaff_s12;
                    }
                    else {
                      FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                  );
                      memcpy(&stack0x00001138,&stack0x000016a0,0x398);
                      iVar15 = FUN_03797154();
                      in_stack_0000160c = iVar15 - 1;
                      iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
                      *(int *)(unaff_x19 + 0x324) = iVar15;
                      uVar19 = CONCAT44(0x2026,iVar15);
                      in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                      unaff_x22 = in_stack_000001e8;
                      unaff_x29 = in_stack_000001d0;
                      fVar58 = unaff_s12;
                    }
                    goto LAB_0378d260;
                  }
                  break;
                case 3:
                  in_stack_0000160c = FUN_03797154();
                  uVar19 = CONCAT44((int)((ulong)in_stack_00001688 >> 0x20),unaff_w21);
                  unaff_x22 = in_stack_000001e8;
                  unaff_x29 = in_stack_000001d0;
                  fVar58 = unaff_s12;
                  goto LAB_0378d260;
                case 5:
                  if (unaff_w21 == 0 || (int)in_stack_0000160c < 0) {
                    in_stack_0000160c = 0xffffffff;
                    *in_stack_000001d0 = 0;
                    unaff_x22 = in_stack_000001e8;
                    unaff_x29 = in_stack_000001d0;
                    fVar58 = unaff_s12;
                  }
                  else {
                    fVar58 = *(float *)(unaff_x19 + 0x338);
                    in_stack_0000160c = FUN_03797154();
                    if (in_stack_00000108 < fVar58 - fVar48) goto LAB_0378f7e8;
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
                    unaff_x22 = in_stack_000001e8;
                    unaff_x29 = in_stack_000001d0;
                    uVar19 = in_stack_00001688;
                    fVar58 = unaff_s12;
                  }
                  goto LAB_0378d260;
                case 6:
                  in_stack_0000160c = FUN_03797154();
                  uVar19 = CONCAT44(3,unaff_w21);
                  unaff_x22 = in_stack_000001e8;
                  unaff_x29 = in_stack_000001d0;
                  fVar58 = unaff_s12;
                  goto LAB_0378d260;
                }
              }
              unaff_x29 = in_stack_000001d0;
              if ((uVar21 & 1) != 0) {
                unaff_s13 = 1.0;
                unaff_s11 = ABS(fVar53) + fVar64 * (1.0 - fVar47) * fVar58;
                if (unaff_w25 != 0) {
                  unaff_s13 = DAT_00d38acc;
                }
                if (unaff_s13 * fStack0000000000000174 < unaff_s11) {
                  if ((iStack000000000000008c != 0) && (unaff_w21 != *(uint *)(unaff_x19 + 0x328)))
                  {
                    in_stack_0000160c = FUN_03797154();
                    param_2 = in_stack_0000160c;
                    if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
                      in_x9 = *in_stack_000001e8;
                      unaff_x22 = in_stack_000001e8;
                      if (in_x9 == 0) goto LAB_03793c9c;
                      goto code_r0x0378f668;
                    }
                    fVar58 = *(float *)(in_stack_000001e0 + 200);
                    *(undefined1 *)(unaff_x19 + 0x2e8) = 1;
                    in_x9 = *in_stack_000001e8;
                    if (in_x9 == 0) goto LAB_03793c9c;
                    fVar56 = *(float *)(unaff_x19 + 0x2e0);
                    uVar14 = *(uint *)(unaff_x19 + 0x324);
                    fVar58 = *(float *)(unaff_x19 + 0x2e4) + in_stack_00000158 * fVar58;
                    unaff_x22 = in_stack_000001e8;
                    uVar19 = in_stack_00001688;
                    goto LAB_03790a80;
                  }
                  if ((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
                     (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
                    fVar53 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
                    if (fVar47 < fVar53) {
                      fVar58 = unaff_s11 / (1.0 - fVar47);
                      if (fVar47 <= 0.0) {
                        fVar58 = unaff_s11;
                      }
                      fVar47 = fVar47 + (unaff_s11 -
                                        unaff_s13 * (fStack0000000000000174 + DAT_00d38cc4)) /
                                        fVar58;
                      goto FUN_03793c4c;
                    }
                    fVar47 = *(float *)(in_stack_000001e0 + 0xac);
                    fVar53 = *_fStack00000000000000d0;
                    if (fVar47 < fVar53) goto LAB_03793bbc;
                  }
                  iVar15 = *(int *)(in_stack_000001e0 + 0x74);
                  if (iVar15 == 1) {
                    iVar15 = FUN_020aa428(in_stack_00000078,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_TrackedDeviceEventData>_Remove__
                                         );
                    uVar19 = DAT_00d37868;
                    if (iVar15 == 0) {
                      in_stack_0000160c = 0xffffffff;
                      in_stack_000001d0[0] = 0;
                      in_stack_000001d0[1] = 0;
                      unaff_x22 = in_stack_000001e8;
                      fVar58 = unaff_s12;
                    }
                    else {
                      FUN_020ab640(in_stack_00000078,&stack0x000016a0,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<int,_TextStyle>__ctor__
                                  );
                      memcpy(&stack0x00000a08,&stack0x000016a0,0x398);
                      iVar15 = FUN_03797154();
                      in_stack_0000160c = iVar15 - 1;
                      iVar15 = *(int *)(unaff_x19 + 0x324) + -1;
                      *(int *)(unaff_x19 + 0x324) = iVar15;
                      uVar19 = CONCAT44(0x2026,iVar15);
                      in_stack_000001d8._4_4_ = in_stack_000001d8._4_4_ + 1;
                      unaff_x22 = in_stack_000001e8;
                      fVar58 = unaff_s12;
                    }
                  }
                  else {
                    if (iVar15 == 6) {
                      in_stack_0000160c = FUN_03797154();
                      unaff_w21 = *(uint *)(unaff_x19 + 0x324);
                    }
                    else {
                      if (iVar15 != 3) goto LAB_0378f1e0;
                      in_stack_0000160c = FUN_03797154();
                    }
LAB_037909d0:
                    uVar19 = CONCAT44(3,unaff_w21);
                    unaff_x22 = in_stack_000001e8;
                    fVar58 = unaff_s12;
                  }
                  goto LAB_0378d260;
                }
              }
LAB_0378f1e0:
              if (unaff_w26 == 0) {
                if (in_stack_0000169c == 0xad) {
                  lVar30 = *in_stack_000001e8;
                  if (lVar30 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto thunk_FUN_01ab6c44;
                  *(undefined1 *)(lVar30 + (long)(int)unaff_w21 * (long)iVar18 + 0x1a0) = 0;
                }
                else {
                  if (*unaff_x24 == '\x02') {
                    FUN_0379c8ac();
                  }
                  else if (*unaff_x24 == '\x01') {
                    FUN_0379bd40(in_stack_000001a0);
                  }
                  uVar14 = *unaff_x29;
                  if ((uStack00000000000000ac & 1) != 0) {
                    *(uint *)(unaff_x19 + 0x330) = uVar14;
                  }
                  *(uint *)(unaff_x19 + 0x334) = uVar14;
                  *(int *)(unaff_x19 + 0x344) = *(int *)(unaff_x19 + 0x344) + 1;
                  lVar30 = *(long *)(in_stack_000001c0 + 0x48);
                  if (lVar30 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                  goto thunk_FUN_01ab6c44;
                  lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                  uStack00000000000000ac = 0;
                  *(float *)(lVar30 + 100) = unaff_s9;
                  *(float *)(lVar30 + 0x68) = unaff_s8;
                }
              }
              else {
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= unaff_w21) goto thunk_FUN_01ab6c44;
                *(undefined1 *)(lVar30 + (long)(int)unaff_w21 * (long)iVar18 + 0x1a0) = 0;
                *(uint *)(unaff_x19 + 0x334) = unaff_w21;
                lVar30 = *(long *)(in_stack_000001c0 + 0x48);
                if (lVar30 == 0) goto LAB_03793c9c;
                uVar14 = *(uint *)(lVar30 + 0x18);
                if (uVar14 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
                lVar45 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                iVar15 = *(int *)(lVar45 + 0x2c) + 1;
                *(int *)(lVar45 + 0x2c) = iVar15;
                *(int *)(unaff_x19 + 0x348) = iVar15;
                if (uVar14 <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                *(float *)(lVar30 + 100) = unaff_s9;
                *(float *)(lVar30 + 0x68) = unaff_s8;
                *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
              }
            }
            else {
              if (((in_stack_0000169c & 0xfffffffe) == 10) &&
                 (*(int *)(in_stack_000001e0 + 0x74) == 6)) {
                fVar58 = 0.0;
                if ((0.0 < fVar49) && (fVar58 = 0.0, *(char *)(unaff_x19 + 0x2e8) == '\0')) {
                  fVar58 = *(float *)(unaff_x19 + 0x338) - *(float *)(unaff_x19 + 0x15ac);
                }
                if (in_stack_00000108 <
                    (*(float *)(unaff_x19 + 0x374) - (*(float *)(unaff_x19 + 0x33c) - fVar49)) +
                    fVar58) {
                  if (*(int *)(unaff_x19 + 0x34c) == -1) {
                    *(uint *)(unaff_x19 + 0x34c) = unaff_w21;
                  }
                  in_stack_0000160c = FUN_03797154();
LAB_0378f7e8:
                  unaff_x22 = in_stack_000001e8;
                  unaff_x29 = in_stack_000001d0;
                  uVar19 = CONCAT44(3,unaff_w21);
                  fVar58 = unaff_s12;
                  goto LAB_0378d260;
                }
              }
              if ((((in_stack_0000169c - 0x2007 < 0x23) &&
                   ((1L << ((ulong)(in_stack_0000169c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                  (in_stack_0000169c - 10 < 2)) || (in_stack_0000169c == 0xa0)) {
LAB_0378f700:
                unaff_x29 = in_stack_000001d0;
                if ((in_stack_0000169c == 0xad) || (in_stack_0000169c == 0x200b)) goto LAB_0378f884;
                if (in_stack_0000169c != 0x2060) {
                  lVar30 = *(long *)(in_stack_000001c0 + 0x48);
                  if (lVar30 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                  goto thunk_FUN_01ab6c44;
                  lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                  *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
                  *(int *)(in_stack_000001c0 + 0x18) = *(int *)(in_stack_000001c0 + 0x18) + 1;
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar21 = FUN_026b97f8(in_stack_0000169c,0);
                if ((uVar21 & 1) != 0) goto LAB_0378f700;
              }
              unaff_x29 = in_stack_000001d0;
              if (in_stack_0000169c == 0xa0) {
                lVar30 = *(long *)(in_stack_000001c0 + 0x48);
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                goto thunk_FUN_01ab6c44;
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                *(int *)(lVar30 + 0x20) = *(int *)(lVar30 + 0x20) + 1;
              }
            }
LAB_0378f884:
            bVar9 = *(int *)(in_stack_000001e0 + 0x74) == 1;
            if (bVar9 && unaff_w23 == 1) {
              bVar9 = in_stack_0000169c == 0x2d;
            }
            if (bVar9) {
              if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
              fVar58 = *(float *)(unaff_x19 + 0xf4);
              iVar15 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
              if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
              fVar47 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
              lVar30 = *(long *)(unaff_x19 + 0x1a00);
              fVar56 = in_stack_00000150;
              if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                fVar56 = 1.0;
              }
              if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_03793c9c;
              fVar49 = *(float *)(unaff_x19 + 0xf0);
              fVar48 = *(float *)(lVar30 + 0x2c);
              fVar53 = (float)FUN_03776ea8(*(long *)(lVar30 + 0x20),0);
              fVar64 = *_iStack0000000000000138;
              fVar53 = fVar49 * (fVar58 / (float)iVar15) * fVar47 * fVar56 * fVar48 * fVar53;
              fVar58 = *_fStack0000000000000130;
              if ((in_stack_0000169c == 10) &&
                 (*(int *)(unaff_x19 + 0x324) != *(int *)(unaff_x19 + 0x328))) {
                lVar30 = *in_stack_000001e8;
                if (lVar30 == 0) goto LAB_03793c9c;
                uVar14 = *(int *)(unaff_x19 + 0x324) - 1;
                if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
                if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
                fVar56 = *(float *)(lVar30 + (long)(int)uVar14 * (long)iVar18 + 0x68);
                iVar15 = FUN_03776950(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03793c9c;
                fVar49 = (float)FUN_03776960(*(long *)(unaff_x19 + 0x1a08) + 0xb0,0);
                lVar30 = *(long *)(unaff_x19 + 0x1a00);
                fVar47 = in_stack_00000150;
                if (*(char *)(in_stack_000001e0 + 0xbd) != '\0') {
                  fVar47 = 1.0;
                }
                if ((lVar30 == 0) || (*(long *)(lVar30 + 0x20) == 0)) goto LAB_03793c9c;
                fVar48 = *(float *)(unaff_x19 + 0xf0);
                fVar50 = *(float *)(lVar30 + 0x2c);
                fVar53 = (float)FUN_03776ea8(*(long *)(lVar30 + 0x20),0);
                lVar30 = *(long *)(in_stack_000001c0 + 0x48);
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340))
                goto thunk_FUN_01ab6c44;
                lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
                fVar64 = *(float *)(lVar30 + 100);
                fVar58 = *(float *)(lVar30 + 0x68);
                fVar53 = fVar48 * (fVar56 / (float)iVar15) * fVar49 * fVar47 * fVar50 * fVar53;
              }
              fVar47 = *(float *)(unaff_x19 + 0x2f4);
              fVar56 = 0.0;
              if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                if ((*(long *)(unaff_x19 + 0x1a00) == 0) ||
                   (lVar30 = *(long *)(*(long *)(unaff_x19 + 0x1a00) + 0x20), lVar30 == 0))
                goto LAB_03793c9c;
                FUN_03776e6c(&stack0x000016a0,lVar30,0);
                fVar56 = (float)FUN_03776cb4(&stack0x000015c0,0);
              }
              fVar49 = *(float *)(unaff_x19 + 0x35c);
              fVar58 = (fStack000000000000012c - fVar64) - fVar58;
              bVar9 = true;
              if ((fVar49 <= fVar58) && (bVar9 = false, !NAN(fVar49))) {
                bVar9 = fVar49 == -1.0;
              }
              if (!bVar9) {
                fVar58 = fVar49;
              }
              fVar49 = 1.0;
              if (unaff_w25 != 0) {
                fVar49 = DAT_00d38acc;
              }
              if (ABS(fVar47) + fVar53 * fVar56 * (1.0 - *(float *)(unaff_x19 + 0x1594)) <
                  fVar49 * fVar58) {
                FUN_03796df8();
                memcpy(&stack0x000005c8,in_stack_00000068,0x398);
                FUN_020ab0d8(in_stack_00000078,&stack0x000005c8,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__);
              }
            }
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            if (*(uint *)(lVar30 + 0x18) <= *unaff_x29) goto thunk_FUN_01ab6c44;
            uVar14 = *(uint *)(unaff_x19 + 0x340);
            lVar30 = lVar30 + (long)(int)*unaff_x29 * unaff_x27;
            *(uint *)(lVar30 + 0x6c) = uVar14;
            *(undefined4 *)(lVar30 + 0x70) = *(undefined4 *)(unaff_x19 + 0x350);
            if (((unaff_w23 & 1) == 0) &&
               ((0xd < in_stack_0000169c ||
                ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)))) {
              lVar30 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar30 == 0) goto LAB_03793c9c;
LAB_0378fbcc:
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              *(undefined4 *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x6c) =
                   *(undefined4 *)(unaff_x19 + 0x158);
            }
            else {
              lVar30 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              if (*(int *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x24) == 1) goto LAB_0378fbcc;
            }
            if (in_stack_0000169c != 0x200b) {
              if (in_stack_0000169c == 9) {
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                fVar58 = (float)FUN_03776a48(*in_stack_000001c8 + 0xb0,0);
                if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                bVar12 = FUN_03779d4c(*in_stack_000001c8,0);
                fVar56 = *(float *)(unaff_x19 + 0x2f4);
                fVar47 = unaff_s12 * fVar58 * (float)bVar12;
                fVar58 = fVar47 * (float)(int)(fVar56 / fVar47);
                if (fVar58 <= fVar56) {
                  fVar58 = fVar56 + fVar47;
                }
                *(float *)(unaff_x19 + 0x2f4) = fVar58;
              }
              else {
                fVar58 = *(float *)(unaff_x19 + 0x2f0);
                if (fVar58 == 0.0) {
                  fVar56 = *(float *)(unaff_x19 + 0x2f4);
                  if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
                    fVar58 = (float)FUN_03776cb4(&stack0x000015f0,0);
                    fVar53 = *(float *)(unaff_x19 + 0x19a8);
                    fVar47 = (float)FUN_03778e7c(&stack0x000015e0,0);
                    if (*(long *)(unaff_x19 + 0x68) != 0) {
                      fVar49 = (float)FUN_03779d0c(*(long *)(unaff_x19 + 0x68),0);
                      fVar56 = fVar56 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                        (*(float *)(unaff_x19 + 0x2ec) +
                                        unaff_s12 * (fVar58 * fVar53 + fVar47) +
                                        in_stack_00000158 *
                                        (in_stack_00000148 + in_stack_00000188 + fVar49));
                      goto UnityEngine_UIElements_WheelEvent___ctor;
                    }
                    goto LAB_03793c9c;
                  }
                  fVar58 = (float)FUN_03778e7c(&stack0x000015e0,0);
                  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                  fVar47 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                  fVar56 = fVar56 - (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                    (*(float *)(unaff_x19 + 0x2ec) +
                                    unaff_s12 * fVar58 +
                                    in_stack_00000158 *
                                    (in_stack_00000148 + in_stack_00000188 + fVar47));
                  *(float *)(unaff_x19 + 0x2f4) = fVar56;
                  if ((unaff_w26 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
                  fVar56 = fVar56 - in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
                }
                else {
                  if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
                  fVar56 = *(float *)(unaff_x19 + 0x2f4);
                  fVar47 = (float)FUN_03779d0c(*in_stack_000001c8,0);
                  fVar56 = fVar56 + (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                                    (*(float *)(unaff_x19 + 0x2ec) +
                                    (fVar58 - in_stack_000000e8._4_4_) +
                                    in_stack_00000158 * (in_stack_00000188 + fVar47));
UnityEngine_UIElements_WheelEvent___ctor:
                  *(float *)(unaff_x19 + 0x2f4) = fVar56;
                  if ((unaff_w26 == 0) && (in_stack_0000169c != 0x200b)) goto FUN_0378fd94;
                  fVar56 = fVar56 + in_stack_00000158 * *(float *)(in_stack_000001e0 + 0xc4);
                }
                *(float *)(unaff_x19 + 0x2f4) = fVar56;
              }
            }
FUN_0378fd94:
            lVar30 = *in_stack_000001e8;
            if (lVar30 == 0) goto LAB_03793c9c;
            uVar14 = *unaff_x29;
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            *(undefined4 *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x164) =
                 *(undefined4 *)(unaff_x19 + 0x2f4);
            if (in_stack_0000169c == 0xd) {
              *(float *)(unaff_x19 + 0x2f4) = *(float *)(unaff_x19 + 0x2fc) + 0.0;
            }
            if ((*(int *)(in_stack_000001e0 + 0x74) == 5) &&
               (((0xd < in_stack_0000169c ||
                 ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0x2c00U) == 0)) &&
                (1 < in_stack_0000169c - 0x2028)))) {
              lVar30 = *in_stack_00000050;
              if (lVar30 == 0) goto LAB_03793c9c;
              uVar39 = *(uint *)(unaff_x19 + 0x350);
              if (*(int *)(lVar30 + 0x18) < (int)(uVar39 + 1)) {
                if (*(int *)(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                            + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                FUN_01ff3814(in_stack_00000050,uVar39 + 1,1,
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_GetEnumerator__
                            );
                lVar30 = *in_stack_00000050;
                if (lVar30 == 0) goto LAB_03793c9c;
                uVar39 = *(uint *)(unaff_x19 + 0x350);
              }
              if (*(uint *)(lVar30 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
              lVar45 = lVar30 + (long)(int)uVar39 * 0x14;
              *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)(unaff_x19 + 0x19c8);
              fVar58 = *(float *)(unaff_x19 + 0x378);
              if (*(float *)(lVar45 + 0x30) <= *(float *)(unaff_x19 + 0x378)) {
                fVar58 = *(float *)(lVar45 + 0x30);
              }
              *(float *)(lVar45 + 0x30) = fVar58;
              if (*(char *)(unaff_x19 + 0x37c) != '\0') {
                *(undefined1 *)(unaff_x19 + 0x37c) = 0;
                *(undefined4 *)(lVar30 + (long)(int)uVar39 * 0x14 + 0x20) =
                     *(undefined4 *)(unaff_x19 + 0x324);
              }
              uVar14 = *unaff_x29;
              *(uint *)(lVar30 + (long)(int)uVar39 * 0x14 + 0x24) = uVar14;
            }
            uVar19 = in_stack_00001688;
            if (((in_stack_0000169c < 0xc) &&
                ((1 << (ulong)(in_stack_0000169c & 0x1f) & 0xc08U) != 0)) ||
               ((in_stack_0000169c - 0x2028 < 2 ||
                (((unaff_w23 & in_stack_0000169c == 0x2d) != 0 || (uVar14 == uStack00000000000000dc)
                 ))))) {
              if (0.0 < *(float *)(unaff_x19 + 0x2e0)) {
                fVar58 = *(float *)(unaff_x19 + 0x338);
                fVar56 = *(float *)(unaff_x19 + 0x15ac);
                if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                fVar58 = fVar58 - fVar56;
                if (((fStack00000000000000a8 < ABS(fVar58)) &&
                    (*(char *)(unaff_x19 + 0x2e8) == '\0')) &&
                   (*(char *)(unaff_x19 + 0x37c) != '\x01')) {
                  uVar52 = *(undefined4 *)(unaff_x19 + 0x328);
                  uVar16 = *(undefined4 *)(unaff_x19 + 0x324);
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  FUN_037a5574(fVar58,uVar52,uVar16,in_stack_000001c0,0);
                  *(float *)(unaff_x19 + 0x378) = *(float *)(unaff_x19 + 0x378) - fVar58;
                  *(float *)(unaff_x19 + 0x2e0) = fVar58 + *(float *)(unaff_x19 + 0x2e0);
                  unaff_x28 = (long *)PTR_DAT_03cbe438;
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
                                  Method_System_Collections_Generic_Dictionary<int,_TextStyle>_Add__
                                );
                  }
                }
              }
              fVar56 = *(float *)(unaff_x19 + 0x2e0);
              *(undefined1 *)(unaff_x19 + 0x37c) = 0;
              fVar47 = *(float *)(unaff_x19 + 0x33c) - fVar56;
              fVar58 = *(float *)(unaff_x19 + 0x378);
              if (fVar47 <= *(float *)(unaff_x19 + 0x378)) {
                fVar58 = fVar47;
              }
              *(float *)(unaff_x19 + 0x378) = fVar58;
              fVar53 = *(float *)(unaff_x19 + 0x338);
              if (in_stack_00001694 == '\0') {
                in_stack_00001698 = fVar58;
              }
              if ((*(char *)(in_stack_000001e0 + 0xe8) != '\0') &&
                 ((*(int *)(in_stack_000001e0 + 0xd8) <= (int)*unaff_x29 ||
                  (*(int *)(in_stack_000001e0 + 0xe0) <= *(int *)(unaff_x19 + 0x340))))) {
                in_stack_00001694 = '\x01';
              }
              lVar30 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar30 == 0) goto LAB_03793c9c;
              uVar14 = *(uint *)(unaff_x19 + 0x340);
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              iVar15 = *(int *)(unaff_x19 + 0x328);
              lVar45 = lVar30 + (long)(int)uVar14 * 0x60;
              *(int *)(lVar45 + 0x38) = iVar15;
              uVar39 = *(uint *)(unaff_x19 + 0x328);
              if (iVar15 <= (int)*(uint *)(unaff_x19 + 0x330)) {
                uVar39 = *(uint *)(unaff_x19 + 0x330);
              }
              *(uint *)(unaff_x19 + 0x330) = uVar39;
              *(uint *)(lVar45 + 0x3c) = uVar39;
              iVar1 = *(int *)(unaff_x19 + 0x324);
              *(int *)(unaff_x19 + 0x32c) = iVar1;
              *(int *)(lVar45 + 0x40) = iVar1;
              iVar17 = *(int *)(unaff_x19 + 0x330);
              if ((int)uVar39 <= *(int *)(unaff_x19 + 0x334)) {
                iVar17 = *(int *)(unaff_x19 + 0x334);
              }
              *(int *)(unaff_x19 + 0x334) = iVar17;
              *(int *)(lVar45 + 0x44) = iVar17;
              *(int *)(lVar45 + 0x24) = (iVar1 - iVar15) + 1;
              *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)(unaff_x19 + 0x344);
              *(undefined4 *)(lVar45 + 0x30) = *(undefined4 *)(unaff_x19 + 0x348);
              lVar45 = *in_stack_000001e8;
              if (lVar45 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar45 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
              uVar52 = *(undefined4 *)(lVar45 + (long)(int)uVar39 * (long)iVar18 + 0x124);
              lVar30 = lVar30 + (long)(int)uVar14 * 0x60;
              *(float *)(lVar30 + 0x74) = fVar47;
              *(undefined4 *)(lVar30 + 0x70) = uVar52;
              lVar30 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x340)) goto thunk_FUN_01ab6c44;
              lVar45 = *in_stack_000001e8;
              if (lVar45 == 0) goto LAB_03793c9c;
              if (*(uint *)(lVar45 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
              uVar52 = *(undefined4 *)
                        (lVar45 + (long)(int)*(uint *)(unaff_x19 + 0x334) * unaff_x27 + 0x130);
              fVar53 = fVar53 - fVar56;
              lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x340) * 0x60;
              *(float *)(lVar30 + 0x7c) = fVar53;
              *(undefined4 *)(lVar30 + 0x78) = uVar52;
              lVar30 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar30 == 0) goto LAB_03793c9c;
              uVar14 = *(uint *)(unaff_x19 + 0x340);
              if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
              lVar45 = lVar30 + (long)(int)uVar14 * 0x60;
              *(float *)(lVar45 + 0x48) = *(float *)(lVar45 + 0x78) - unaff_s12 * in_stack_000001a0;
              *(float *)(lVar45 + 0x60) = fStack0000000000000174;
              if (*(int *)(lVar45 + 0x24) == 1) {
                *(undefined4 *)(lVar30 + (long)(int)uVar14 * 0x60 + 0x6c) =
                     *(undefined4 *)(unaff_x19 + 0x158);
              }
              if (*in_stack_000001c8 == 0) goto LAB_03793c9c;
              fVar58 = (float)FUN_03779d0c(*in_stack_000001c8,0);
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
              lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x334);
              if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x334)) goto thunk_FUN_01ab6c44;
              lVar22 = *(long *)(in_stack_000001c0 + 0x48);
              if (lVar22 == 0) goto LAB_03793c9c;
              uVar14 = *(uint *)(unaff_x19 + 0x340);
              if (((*(char *)(lVar30 + lVar45 * unaff_x27 + 0x1a0) == '\0') &&
                  (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x32c),
                  *(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x32c))) ||
                 (uVar39 = (uint)*(undefined8 *)(lVar22 + 0x18), uVar39 <= uVar14))
              goto thunk_FUN_01ab6c44;
              fVar56 = (1.0 - *(float *)(unaff_x19 + 0x1594)) *
                       (*(float *)(unaff_x19 + 0x2ec) +
                       in_stack_00000158 * (in_stack_00000148 + in_stack_00000188 + fVar58));
              fVar58 = -fVar56;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                fVar58 = fVar56;
              }
              *(float *)(lVar22 + (long)(int)uVar14 * 0x60 + 0x5c) =
                   *(float *)(lVar30 + lVar45 * unaff_x27 + 0x164) + fVar58;
              if (uVar39 <= uVar14) goto thunk_FUN_01ab6c44;
              lVar22 = lVar22 + (long)(int)uVar14 * 0x60;
              *(float *)(lVar22 + 0x54) = 0.0 - *(float *)(unaff_x19 + 0x2e0);
              *(float *)(lVar22 + 0x58) = fVar47;
              *(float *)(lVar22 + 0x4c) = in_stack_000000a0._4_4_ + (fVar53 - fVar47);
              *(float *)(lVar22 + 0x50) = fVar53;
              if ((int)in_stack_0000169c < 0x2d) {
                if (in_stack_0000169c - 10 < 2) goto LAB_03790360;
                if (in_stack_0000169c == 3) {
                  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03793c9c;
                  in_stack_0000160c = (uint)*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
                }
              }
              else if ((in_stack_0000169c - 0x2028 < 2) || (in_stack_0000169c == 0x2d))
              goto LAB_03790360;
            }
            else {
              lVar30 = *in_stack_000001e8;
              if (lVar30 == 0) goto LAB_03793c9c;
            }
            uVar14 = *unaff_x29;
            if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
            if (*(char *)(lVar30 + (long)(int)uVar14 * unaff_x27 + 0x1a0) != '\0') {
              lVar30 = lVar30 + (long)(int)uVar14 * unaff_x27;
              uVar21 = *(ulong *)(unaff_x19 + 0x360);
              uVar24 = *(ulong *)(lVar30 + 0x124);
              *(ulong *)(unaff_x19 + 0x360) =
                   uVar21 ^ (uVar21 ^ uVar24) &
                            ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar24 >> 0x20)),
                                      -(uint)((float)uVar21 < (float)uVar24));
              uVar21 = *(ulong *)(unaff_x19 + 0x368);
              uVar24 = *(ulong *)(lVar30 + 0x130);
              *(ulong *)(unaff_x19 + 0x368) =
                   uVar21 ^ (uVar21 ^ uVar24) &
                            ~CONCAT44(-(uint)((float)(uVar24 >> 0x20) < (float)(uVar21 >> 0x20)),
                                      -(uint)((float)uVar24 < (float)uVar21));
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
                                Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                              + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar21 = FUN_037a5f20(in_stack_0000169c,0);
                  if ((uVar21 & 1) == 0) {
LAB_037906cc:
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__
                                + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar21 = FUN_037a5f90(in_stack_0000169c,0);
                    if ((uVar21 & 1) == 0) goto LAB_037907cc;
                    if (in_stack_00000060 == 0) goto LAB_03793c9c;
                  }
                  else {
                    if ((in_stack_00000060 == 0) ||
                       (lVar30 = FUN_037a8a5c(in_stack_00000060,0), lVar30 == 0)) goto LAB_03793c9c;
                    if (*(char *)(lVar30 + 0x28) != '\0') goto LAB_037906cc;
                  }
                  lVar30 = FUN_037a8a5c(in_stack_00000060,0);
                  if ((lVar30 == 0) || (lVar30 = FUN_037aad04(lVar30,0), lVar30 == 0))
                  goto LAB_03793c9c;
                  uVar52 = (undefined4)((ulong)in_stack_000016a0 >> 0x20);
                  in_stack_000016a0 = CONCAT44(uVar52,in_stack_0000169c);
                  uVar21 = FUN_021e4dc4(lVar30,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
                  if ((int)*unaff_x29 < (int)uStack00000000000000dc) {
                    lVar30 = FUN_037a8a5c(in_stack_00000060,0);
                    if (lVar30 == 0) goto LAB_03793c9c;
                    lVar30 = FUN_037aaf28(lVar30,0);
                    lVar45 = *in_stack_000001e8;
                    if (lVar45 == 0) goto LAB_03793c9c;
                    if (*(uint *)(lVar45 + 0x18) <= *unaff_x29 + 1) goto thunk_FUN_01ab6c44;
                    if (lVar30 == 0) goto LAB_03793c9c;
                    in_stack_000016a0 =
                         CONCAT44(uVar52,(uint)*(ushort *)
                                                (lVar45 + (long)(int)(*unaff_x29 + 1) * (long)iVar18
                                                + 0x20));
                    uVar24 = FUN_021e4dc4(lVar30,&stack0x000016a0,*(undefined8 *)PTR_DAT_03ccd4e8);
                    if ((uVar21 & 1) != 0) goto LAB_037909e8;
                    if ((uVar24 & 1) == 0) goto LAB_03790cd4;
                    if ((bStack00000000000000d8 & 1) == 0) goto LAB_03790854;
                  }
                  else {
                    if ((uVar21 & 1) == 0) {
LAB_03790cd4:
                      FUN_03796df8();
                      bStack00000000000000d8 = 0;
                      goto LAB_03790864;
                    }
LAB_037909e8:
                    if ((float)uVar33 != in_stack_000001b8._4_4_ ||
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
                     (in_stack_000000b8 == 0 && in_stack_0000169c == 0xad)) {
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
                   ((in_stack_0000169c == 0xa0 || (in_stack_0000169c == 0x2060))))
                goto LAB_03790684;
                FUN_03796df8();
                bStack00000000000000d8 = 0;
                *(undefined4 *)(unaff_x19 + 0x11e0) = 0xffffffff;
              }
            }
LAB_03790864:
            FUN_03796df8();
            *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
            unaff_x22 = in_stack_000001e8;
            fVar58 = unaff_s12;
          }
          goto LAB_0378d260;
        }
LAB_03790fec:
        if ((((*(char *)(in_stack_000001e0 + 0xa8) != '\0') &&
             (DAT_00d389f8 < *(float *)(unaff_x19 + 0x1598) - *(float *)(unaff_x19 + 0x159c))) &&
            (fVar58 = *_fStack00000000000000d0, fVar58 < *(float *)(in_stack_000001e0 + 0xb0))) &&
           (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
          fVar56 = *(float *)(in_stack_000001e0 + 0x108);
          if (*(float *)(unaff_x19 + 0x1594) < fVar56 / 100.0) {
            *(undefined4 *)(unaff_x19 + 0x1594) = 0;
          }
          fVar47 = (*(float *)(unaff_x19 + 0x1598) - fVar58) * 0.5;
          if (fVar47 <= DAT_00d38b84) {
            fVar47 = DAT_00d38b84;
          }
          *(float *)(unaff_x19 + 0x159c) = fVar58;
          fVar47 = (fVar58 + fVar47) * 20.0 + 0.5;
          fVar58 = DAT_00d38e60;
          if (fVar47 != INFINITY) {
            fVar58 = (float)(int)fVar47 / 20.0;
          }
          if (fVar56 <= fVar58) {
            fVar58 = fVar56;
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
          unaff_x22 = in_stack_000001e8;
        }
        plVar23 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
        plVar43 = (long *)PTR_DAT_03cbded8;
        if ((*unaff_x29 == 0) || ((*unaff_x29 == 1 && (in_stack_0000169c == 3)))) {
          FUN_0379e288(1,in_stack_000001c0,0);
          goto LAB_0378c81c;
        }
        lVar30 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar30 == 0) goto LAB_03793c9c;
        uVar14 = *(uint *)(unaff_x19 + 0x78);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__ + 0xe0)
            == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        FUN_03785b74(lVar30 + (long)(int)uVar14 * 0x50 + 0x20,0,0);
        if (DAT_0411f172 == '\0') {
          FUN_01ab69ac(PTR_DAT_03cbded8);
          DAT_0411f172 = '\x01';
        }
        iVar18 = *(int *)(in_stack_000001e0 + 0x70);
        in_stack_00000158 = **(float **)(*plVar43 + 0xb8);
        _in_stack_00000148 = *(undefined8 *)(*(float **)(*plVar43 + 0xb8) + 1);
        lVar30 = *(long *)(unaff_x19 + 0x50);
        uStack0000000000000118 = _in_stack_00000148;
        fStack0000000000000120 = in_stack_00000158;
        if (iVar18 < 0x421) {
          if (iVar18 < 0x205) {
            if (iVar18 < 0x109) {
              if ((iVar18 - 0x101U < 8) && ((1 << (ulong)(iVar18 - 0x101U & 0x1f) & 0x8bU) != 0)) {
LAB_0379144c:
                if (lVar30 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar30 + 0x18) < 2) goto thunk_FUN_01ab6c44;
                uVar19 = *(undefined8 *)(lVar30 + 0x30);
                if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                  lVar45 = *in_stack_00000050;
                  if (lVar45 == 0) goto LAB_03793c9c;
                  if (*(uint *)(lVar45 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                  fVar58 = *(float *)(lVar45 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
                }
                else {
                  fVar58 = *(float *)(unaff_x19 + 0x374);
                }
                fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar30 + 0x2c);
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
              if (lVar30 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
              goto thunk_FUN_01ab6c44;
              fStack0000000000000120 = (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5
              ;
              uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar30 + 0x24) +
                                (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar30 = *in_stack_00000050;
                if (lVar30 == 0) goto LAB_03793c9c;
                if (uStack000000000000005c < *(uint *)(lVar30 + 0x18)) {
                  lVar30 = lVar30 + (long)(int)uStack000000000000005c * 0x14;
                  fStack0000000000000120 = fStack0000000000000058 + 0.0 + fStack0000000000000120;
                  fStack0000000000000038 =
                       ((fStack000000000000003c + *(float *)(lVar30 + 0x28) +
                        *(float *)(lVar30 + 0x30)) - fStack0000000000000038) * -0.5 + 0.0;
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
              if (iVar18 < 0x409) {
                if (iVar18 != 0x404) {
                  bVar9 = iVar18 == 0x408;
                  goto LAB_03791574;
                }
              }
              else if (iVar18 != 0x410) {
                bVar9 = iVar18 == 0x420;
LAB_03791574:
                if (!bVar9) goto LAB_037917fc;
              }
LAB_03791588:
              if (lVar30 == 0) goto LAB_03793c9c;
              if (*(int *)(lVar30 + 0x18) == 0) goto thunk_FUN_01ab6c44;
              uVar19 = *(undefined8 *)(lVar30 + 0x24);
              if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
                lVar45 = *in_stack_00000050;
                if (lVar45 == 0) goto LAB_03793c9c;
                if (*(uint *)(lVar45 + 0x18) <= uStack000000000000005c) goto thunk_FUN_01ab6c44;
                in_stack_00001698 =
                     *(float *)(lVar45 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
              }
              fStack0000000000000120 = fStack0000000000000058 + 0.0 + *(float *)(lVar30 + 0x20);
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
            if ((iVar18 - 0x801U < 8) && ((1 << (ulong)(iVar18 - 0x801U & 0x1f) & 0x8bU) != 0)) {
LAB_037913b0:
              if (lVar30 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar30 + 0x18) != 1) && (*(int *)(lVar30 + 0x18) != 0)) {
                uStack0000000000000118 =
                     CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0,
                              ((float)*(undefined8 *)(lVar30 + 0x24) +
                              (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5 + 0.0);
                fStack0000000000000120 =
                     fStack0000000000000058 + 0.0 +
                     (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
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
              if (lVar30 == 0) goto LAB_03793c9c;
              if ((*(int *)(lVar30 + 0x18) != 1) && (*(int *)(lVar30 + 0x18) != 0)) {
                uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5,
                                  ((float)*(undefined8 *)(lVar30 + 0x24) +
                                  (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5);
                fStack0000000000000120 =
                     fStack0000000000000058 + 0.0 +
                     (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
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
              iVar15 = 0x2008;
              goto LAB_037914d4;
            }
          }
          else if (iVar18 != 0x2010) {
            iVar15 = 0x2020;
LAB_037914d4:
            if (iVar18 != iVar15) goto LAB_037917fc;
          }
LAB_037914ec:
          if (lVar30 == 0) goto LAB_03793c9c;
          if ((*(int *)(lVar30 + 0x18) == 1) || (*(int *)(lVar30 + 0x18) == 0))
          goto thunk_FUN_01ab6c44;
          uStack0000000000000118 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar30 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar30 + 0x24) +
                        (float)*(undefined8 *)(lVar30 + 0x30)) * 0.5 +
                        (0.0 - ((*(float *)(unaff_x19 + 0x370) - fStack000000000000003c) -
                               fStack0000000000000038) * 0.5));
          fStack0000000000000120 =
               fStack0000000000000058 + 0.0 +
               (*(float *)(lVar30 + 0x20) + *(float *)(lVar30 + 0x2c)) * 0.5;
        }
LAB_037917fc:
        uVar52 = FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        FUN_01b6d7fc(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__);
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
        lVar30 = *unaff_x22;
        if (lVar30 == 0) goto LAB_03793c9c;
        fStack0000000000000174 = 0.0;
        _bStack00000000000000d8 = 0.0;
        fStack00000000000000a8 = 0.0;
        plVar23 = (long *)(in_stack_000001c0 + 0x38);
        in_stack_000000e8._4_4_ = fStack0000000000000128;
        fStack00000000000000f0 = 0.0;
        in_stack_000000a0._4_4_ = 0.0;
        uVar24 = (ulong)&stack0x00001670 | 4;
        bVar9 = false;
        fVar47 = 0.0;
        fVar56 = 0.0;
        uVar21 = (ulong)&stack0x000009f0 | 4;
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
        uStack00000000000000dc = uStack0000000000000124;
        fStack00000000000000e0 = in_stack_00000140._4_4_;
        fStack000000000000015c = DAT_00d38d70;
        uVar33 = 0;
        uVar39 = 1;
        goto LAB_0379194c;
      }
      fVar47 = *(float *)(in_stack_000001e0 + 0xd0);
      if ((fVar47 < *(float *)(unaff_x19 + 0x15b0)) &&
         (*(int *)(unaff_x19 + 0x15a0) < *(int *)(unaff_x19 + 0x15a4))) {
        fVar58 = *(float *)(unaff_x19 + 0x15b0) +
                 ((in_stack_00000018._4_4_ - fVar56) / (float)(*(int *)(unaff_x19 + 0x340) + 1)) /
                 fStack0000000000000088;
        if (fVar58 <= fVar47) {
          fVar58 = fVar47;
        }
LAB_03793b50:
        *(float *)(unaff_x19 + 0x15b0) = fVar58;
        goto LAB_0378c81c;
      }
      fVar47 = *(float *)(unaff_x19 + 0x1594);
      fVar53 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
      if ((fVar53 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar53 = *_fStack00000000000000d0;
        fVar47 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar53 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_03790da4;
        goto LAB_03793bbc;
      }
    }
    else {
      fVar47 = *(float *)(unaff_x19 + 0x1594);
      fVar53 = *(float *)(in_stack_000001e0 + 0x108) / 100.0;
      if ((fVar53 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0))) {
        fVar53 = *_fStack00000000000000d0;
        fVar47 = *(float *)(in_stack_000001e0 + 0xac);
        if ((fVar53 <= fVar47) || (*(int *)(unaff_x19 + 0x15a4) <= *(int *)(unaff_x19 + 0x15a0)))
        goto LAB_03790b7c;
LAB_03793bbc:
        fVar58 = (fVar53 - *(float *)(unaff_x19 + 0x159c)) * 0.5;
        if (fVar58 <= DAT_00d38b84) {
          fVar58 = DAT_00d38b84;
        }
        *(float *)(unaff_x19 + 0x1598) = fVar53;
        fVar56 = (fVar53 - fVar58) * 20.0 + 0.5;
        fVar58 = DAT_00d38e60;
        if (fVar56 != INFINITY) {
          fVar58 = (float)(int)fVar56 / 20.0;
        }
        if (fVar58 <= fVar47) {
          fVar58 = fVar47;
        }
LAB_037910ac:
        *(float *)(unaff_x19 + 0xec) = fVar58;
        goto LAB_0378c81c;
      }
    }
    fVar58 = unaff_s11;
    if (0.0 < fVar47) {
      fVar58 = unaff_s11 / (1.0 - fVar47);
    }
    fVar47 = fVar47 + (unaff_s11 - unaff_s13 * (fStack0000000000000174 + DAT_00d38cc4)) / fVar58;
FUN_03793c4c:
    if (fVar53 <= fVar47) {
      fVar47 = fVar53;
    }
    *(float *)(unaff_x19 + 0x1594) = fVar47;
    goto LAB_0378c81c;
  }
thunk_FUN_01ab6c44:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
LAB_03790360:
  FUN_03796df8();
  uVar14 = *(uint *)(unaff_x19 + 0x324);
  iVar15 = *(int *)(unaff_x19 + 0x340) + 1;
  *(int *)(unaff_x19 + 0x340) = iVar15;
  *(uint *)(unaff_x19 + 0x328) = uVar14 + 1;
  unaff_x29[8] = 0;
  unaff_x29[9] = 0;
  if (*(long *)(in_stack_000001c0 + 0x48) == 0) goto LAB_03793c9c;
  if (*(int *)(*(long *)(in_stack_000001c0 + 0x48) + 0x18) <= iVar15) {
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                ) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_037a56f4(iVar15,in_stack_000001c0,0);
    uVar14 = *unaff_x29;
  }
  lVar30 = *in_stack_000001e8;
  if (lVar30 == 0) goto LAB_03793c9c;
  if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
  fVar58 = *(float *)(lVar30 + (long)(int)uVar14 * (long)iVar18 + 0x158);
  if (*(float *)(unaff_x19 + 0x2e4) == DAT_00d38ba4) {
    if ((in_stack_0000169c == 0x2029) || (fVar56 = 0.0, in_stack_0000169c == 10)) {
      fVar56 = *(float *)(in_stack_000001e0 + 0xcc);
    }
    uVar27 = 0;
    fVar56 = fVar58 + (0.0 - *(float *)(unaff_x19 + 0x33c)) +
             fStack0000000000000088 * (in_stack_00000080._4_4_ + *(float *)(unaff_x19 + 0x15b0)) +
             in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar56) +
             *(float *)(unaff_x19 + 0x2e0);
  }
  else {
    if ((in_stack_0000169c == 0x2029) || (fVar56 = 0.0, in_stack_0000169c == 10)) {
      fVar56 = *(float *)(in_stack_000001e0 + 0xcc);
    }
    uVar27 = 1;
    fVar56 = *(float *)(unaff_x19 + 0x2e0) +
             *(float *)(unaff_x19 + 0x2e4) +
             in_stack_00000158 * (*(float *)(in_stack_000001e0 + 200) + fVar56);
  }
  *(float *)(unaff_x19 + 0x2e0) = fVar56;
  *(float *)(unaff_x19 + 0x15ac) = fVar58;
  *(undefined1 *)(unaff_x19 + 0x2e8) = uVar27;
  *(undefined8 *)(unaff_x19 + 0x338) = _uStack0000000000000090;
  *(float *)(unaff_x19 + 0x2f4) =
       *(float *)(unaff_x19 + 0x2f8) + 0.0 + *(float *)(unaff_x19 + 0x2fc);
  FUN_03796df8();
  FUN_03796df8();
  *(int *)(unaff_x19 + 0x324) = *(int *)(unaff_x19 + 0x324) + 1;
  goto LAB_0379053c;
LAB_0379194c:
  do {
    uVar14 = uVar39 - 1;
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar46 = (long)(int)uVar14;
    lVar45 = lVar30 + lVar46 * 0x188;
    lVar22 = *(long *)(lVar45 + 0x40);
    uVar3 = *(ushort *)(lVar45 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    bVar12 = FUN_026b63d8(uVar3,0);
    if (*(uint *)(lVar30 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = *(long *)(in_stack_000001c0 + 0x48);
    uVar44 = (uint)uVar3;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar2 = *(uint *)(lVar30 + lVar46 * 0x188 + 0x6c);
    if (*(uint *)(lVar45 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
    lVar35 = (long)(int)uVar2;
    lVar45 = lVar45 + lVar35 * 0x60;
    uVar5 = *(uint *)(lVar45 + 0x40);
    uVar42 = *(uint *)(lVar45 + 0x6c);
    iVar17 = *(int *)(lVar45 + 0x20);
    iVar18 = *(int *)(lVar45 + 0x28);
    iVar15 = *(int *)(lVar45 + 0x2c);
    uVar6 = *(uint *)(lVar45 + 0x44);
    lVar36 = (long)(int)uVar6;
    fVar48 = *(float *)(lVar45 + 0x50);
    fVar51 = *(float *)(lVar45 + 0x58);
    fVar53 = *(float *)(lVar45 + 0x5c);
    fVar49 = *(float *)(lVar45 + 0x60);
    fVar60 = *(float *)(lVar45 + 100);
    fVar66 = *(float *)(lVar45 + 0x70);
    fVar54 = *(float *)(lVar45 + 0x74);
    fVar64 = *(float *)(lVar45 + 0x78);
    fVar50 = *(float *)(lVar45 + 0x7c);
    if ((int)uVar42 < 0x421) {
      if ((int)uVar42 < 0x209) {
        if ((int)uVar42 < 0x111) {
          switch(uVar42) {
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
            if (uVar42 == 0x110) goto switchD_03791aa4_caseD_1008;
          }
        }
        else {
          switch(uVar42) {
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
            if (uVar42 == 0x120) goto LAB_03791c08;
          }
        }
      }
      else if ((int)uVar42 < 0x405) {
        if ((int)uVar42 < 0x401) {
          if (uVar42 == 0x210) goto switchD_03791aa4_caseD_1008;
          if (uVar42 == 0x220) goto LAB_03791c08;
        }
        else {
          if (uVar42 == 0x401) goto switchD_03791aa4_caseD_1001;
          if (uVar42 == 0x402) goto switchD_03791aa4_caseD_1002;
          if (uVar42 == 0x404) goto switchD_03791aa4_caseD_1004;
        }
      }
      else {
        if ((uVar42 == 0x408) || (uVar42 == 0x410)) goto switchD_03791aa4_caseD_1008;
        if (uVar42 == 0x420) goto LAB_03791c08;
      }
      goto switchD_03791aa4_caseD_1003;
    }
    if (0x1008 < (int)uVar42) {
      if ((int)uVar42 < 0x2005) {
        if (0x2000 < (int)uVar42) {
          if (uVar42 == 0x2001) goto switchD_03791aa4_caseD_1001;
          if (uVar42 == 0x2002) goto switchD_03791aa4_caseD_1002;
          if (uVar42 == 0x2004) goto switchD_03791aa4_caseD_1004;
          goto switchD_03791aa4_caseD_1003;
        }
        if (uVar42 != 0x1010) {
          uVar29 = 0x1020;
          goto LAB_03791bc8;
        }
      }
      else if ((uVar42 != 0x2008) && (uVar42 != 0x2010)) {
        uVar29 = 0x2020;
LAB_03791bc8:
        if (uVar42 != uVar29) goto switchD_03791aa4_caseD_1003;
LAB_03791c08:
        fVar53 = fVar66 + fVar64;
        goto LAB_03791c1c;
      }
      goto switchD_03791aa4_caseD_1008;
    }
    if ((int)uVar42 < 0x811) {
      switch(uVar42) {
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
          if (uVar44 < 0xad) {
            if ((uVar44 != 3) && (uVar44 != 10)) goto FUN_03791eb4;
          }
          else if ((uVar44 != 0xad) && ((uVar44 != 0x200b && (uVar44 != 0x2060)))) {
FUN_03791eb4:
            if (*(uint *)(lVar30 + 0x18) <= uVar5) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar30 + (long)(int)uVar5 * 0x188 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              plVar43 = (long *)PTR_DAT_03cbded8;
            }
            uVar26 = FUN_026b8cc4(uVar4,0);
            if ((uVar26 & 1) == 0) {
              bVar11 = (int)uVar2 < *(int *)(unaff_x19 + 0x340);
            }
            else {
              bVar11 = false;
            }
            if ((fVar53 <= fVar49) && (!bVar11 && (uVar42 >> 4 & 1) == 0)) {
              in_stack_00000158 = fVar60;
              if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
                in_stack_00000158 = fVar49 + fVar60;
              }
              goto LAB_03791c20;
            }
            if ((uVar39 == 1) || (uVar2 != uVar33)) {
              cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
            }
            else {
              cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
              if (uVar14 != *(uint *)(in_stack_000001e0 + 0xe4)) {
                iVar15 = (iVar15 - iVar17) - (uStack0000000000000090 & 1);
                fVar60 = -fVar53;
                if (cVar28 != '\0') {
                  fVar60 = fVar53;
                }
                if (iVar15 < 1) {
                  fVar53 = 1.0;
                }
                else {
                  fVar53 = *(float *)(in_stack_000001e0 + 0x7c);
                }
                if (iVar15 < 2) {
                  iVar15 = 1;
                }
                fVar49 = fVar49 + fVar60;
                if (uVar44 == 9) {
LAB_037939d0:
                  if (cVar28 != '\0') {
                    fVar49 = fVar49 * (1.0 - fVar53);
                    fVar60 = (float)iVar15;
LAB_03793a0c:
                    in_stack_00000158 = in_stack_00000158 - fVar49 / fVar60;
                    break;
                  }
                  fVar60 = (float)iVar15;
                  fVar49 = fVar49 * (1.0 - fVar53);
                }
                else {
                  if (uVar44 != 0xa0) {
                    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar26 = FUN_026b97f8(uVar44,0);
                    cVar28 = *(char *)(in_stack_000001e0 + 0xb6);
                    if ((uVar26 & 1) != 0) goto LAB_037939d0;
                  }
                  fVar49 = fVar49 * fVar53;
                  fVar60 = (float)(int)((iVar17 - (~uStack0000000000000090 & 1)) + iVar18);
                  if (cVar28 != '\0') goto LAB_03793a0c;
                }
                in_stack_00000158 = in_stack_00000158 + fVar49 / fVar60;
                _in_stack_00000148 =
                     CONCAT44((float)((ulong)_in_stack_00000148 >> 0x20) + 0.0,
                              (float)_in_stack_00000148 + 0.0);
                break;
              }
            }
            in_stack_00000158 = fVar60;
            if (cVar28 != '\0') {
              in_stack_00000158 = fVar49 + fVar60;
            }
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uStack0000000000000090 = FUN_026b97f8(uVar44,0);
            _in_stack_00000148 = 0;
          }
        }
        break;
      default:
        if (uVar42 == 0x810) goto switchD_03791aa4_caseD_1008;
      }
    }
    else {
      switch(uVar42) {
      case 0x1001:
switchD_03791aa4_caseD_1001:
        if (*(char *)(in_stack_000001e0 + 0xb6) == '\0') {
          in_stack_00000158 = fVar60 + 0.0;
        }
        else {
          in_stack_00000158 = 0.0 - fVar53;
        }
        break;
      case 0x1002:
switchD_03791aa4_caseD_1002:
LAB_03791c1c:
        in_stack_00000158 = (fVar60 + fVar49 * 0.5) - fVar53 * 0.5;
        break;
      case 0x1003:
      case 0x1005:
      case 0x1006:
      case 0x1007:
        goto switchD_03791aa4_caseD_1003;
      case 0x1004:
switchD_03791aa4_caseD_1004:
        in_stack_00000158 = (fVar49 + fVar60) - fVar53;
        if (*(char *)(in_stack_000001e0 + 0xb6) != '\0') {
          in_stack_00000158 = fVar49 + fVar60;
        }
        break;
      case 0x1008:
        goto switchD_03791aa4_caseD_1008;
      default:
        if (uVar42 == 0x820) goto LAB_03791c08;
        goto switchD_03791aa4_caseD_1003;
      }
LAB_03791c20:
      _in_stack_00000148 = 0;
    }
switchD_03791aa4_caseD_1003:
    uVar42 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = lVar30 + lVar46 * 0x188;
    fVar60 = fStack0000000000000120 + in_stack_00000158;
    fVar53 = (float)uStack0000000000000118 + (float)_in_stack_00000148;
    fVar49 = (float)((ulong)uStack0000000000000118 >> 0x20) +
             (float)((ulong)_in_stack_00000148 >> 0x20);
    if (*(char *)(lVar45 + 0x1a0) == '\0') goto LAB_037924bc;
    cVar28 = *(char *)(lVar30 + lVar46 * 0x188 + 0x28);
    if (cVar28 != '\x01') goto LAB_0379225c;
    fVar47 = fmodf(*(float *)(in_stack_000001e0 + 0xfc) * (float)(int)uVar2,1.0);
    plVar43 = (long *)PTR_DAT_03cbded8;
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf4)) {
    case 0:
      fVar47 = 1.0;
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined4 *)(lVar32 + 0xbc) = 0;
      *(undefined4 *)(lVar32 + 0x94) = 0;
      *(undefined4 *)(lVar32 + 0xe4) = 0x3f800000;
      break;
    case 1:
      fVar50 = *(float *)(lVar30 + lVar46 * 0x188 + 0xa0);
      if (*(int *)(in_stack_000001e0 + 0x70) == 0x208) {
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar64 = (in_stack_00000158 + fVar50) - *(float *)(unaff_x19 + 0x360);
        fVar50 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
        goto LAB_03791dcc;
      }
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar64 = fVar64 - fVar66;
      *(float *)(lVar32 + 0xbc) = fVar47 + (fVar50 - fVar66) / fVar64;
      *(float *)(lVar32 + 0x94) = fVar47 + (*(float *)(lVar32 + 0x78) - fVar66) / fVar64;
      *(float *)(lVar32 + 0xe4) = fVar47 + (*(float *)(lVar32 + 200) - fVar66) / fVar64;
      fVar47 = fVar47 + (*(float *)(lVar32 + 0xf0) - fVar66) / fVar64;
      break;
    case 2:
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar50 = *(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360);
      fVar64 = (in_stack_00000158 + *(float *)(lVar32 + 0xa0)) - *(float *)(unaff_x19 + 0x360);
LAB_03791dcc:
      *(float *)(lVar32 + 0xbc) = fVar47 + fVar64 / fVar50;
      *(float *)(lVar32 + 0x94) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar32 + 0x78)) - *(float *)(unaff_x19 + 0x360)
                    ) / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      *(float *)(lVar32 + 0xe4) =
           fVar47 + ((in_stack_00000158 + *(float *)(lVar32 + 200)) - *(float *)(unaff_x19 + 0x360))
                    / (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      fVar47 = fVar47 + ((in_stack_00000158 + *(float *)(lVar32 + 0xf0)) -
                        *(float *)(unaff_x19 + 0x360)) /
                        (*(float *)(unaff_x19 + 0x368) - *(float *)(unaff_x19 + 0x360));
      break;
    case 3:
      switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
      case 0:
        lVar32 = lVar30 + lVar46 * 0x188;
        *(undefined4 *)(lVar32 + 0xc0) = 0;
        *(undefined4 *)(lVar32 + 0x98) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xe8) = 0;
        *(undefined4 *)(lVar32 + 0x110) = 0x3f800000;
        break;
      case 1:
        fVar50 = fVar50 - fVar54;
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar64 = fVar47 + (*(float *)(lVar32 + 0xa4) - fVar54) / fVar50;
        fVar50 = fVar47 + (*(float *)(lVar32 + 0x7c) - fVar54) / fVar50;
        *(float *)(lVar32 + 0xc0) = fVar64;
        *(float *)(lVar32 + 0x98) = fVar50;
        *(float *)(lVar32 + 0xe8) = fVar64;
        *(float *)(lVar32 + 0x110) = fVar50;
        break;
      case 2:
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar64 = fVar47 + (*(float *)(lVar32 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
                          (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
        *(float *)(lVar32 + 0xc0) = fVar64;
        fVar50 = *(float *)(unaff_x19 + 0x364);
        fVar66 = *(float *)(unaff_x19 + 0x36c);
        *(float *)(lVar32 + 0xe8) = fVar64;
        fVar64 = fVar47 + (*(float *)(lVar32 + 0x7c) - fVar50) / (fVar66 - fVar50);
        *(float *)(lVar32 + 0x98) = fVar64;
        *(float *)(lVar32 + 0x110) = fVar64;
        break;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_0367a6ec(*(undefined8 *)OVRPlugin_OVRP_1_44_0_TypeInfo,0);
        uVar42 = (uint)*(undefined8 *)(lVar30 + 0x18);
      }
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar64 = *(float *)(lVar32 + 0x168);
      fVar50 = (1.0 - (*(float *)(lVar32 + 0xc0) + *(float *)(lVar32 + 0x98)) * fVar64) * 0.5;
      fVar66 = fVar47 + *(float *)(lVar32 + 0xc0) * fVar64 + fVar50;
      fVar47 = fVar47 + *(float *)(lVar32 + 0x98) * fVar64 + fVar50;
      *(float *)(lVar32 + 0xbc) = fVar66;
      *(float *)(lVar32 + 0x94) = fVar66;
      *(float *)(lVar32 + 0xe4) = fVar47;
      break;
    default:
      goto switchD_03791d04_default;
    }
    *(float *)(lVar30 + lVar46 * 0x188 + 0x10c) = fVar47;
switchD_03791d04_default:
    switch(*(undefined4 *)(in_stack_000001e0 + 0xf8)) {
    case 0:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined4 *)(lVar32 + 0xc0) = 0;
      *(undefined4 *)(lVar32 + 0x98) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xe8) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0x110) = 0;
      break;
    case 1:
      if (uVar14 < uVar42) {
        fVar48 = fVar48 - fVar51;
        lVar32 = lVar30 + lVar46 * 0x188;
        fVar47 = (*(float *)(lVar32 + 0xa4) - fVar51) / fVar48;
        fVar48 = (*(float *)(lVar32 + 0x7c) - fVar51) / fVar48;
        *(float *)(lVar32 + 0xc0) = fVar47;
        goto LAB_0379217c;
      }
      goto thunk_FUN_01ab6c44;
    case 2:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar47 = (*(float *)(lVar32 + 0xa4) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
      *(float *)(lVar32 + 0xc0) = fVar47;
      fVar48 = (*(float *)(lVar32 + 0x7c) - *(float *)(unaff_x19 + 0x364)) /
               (*(float *)(unaff_x19 + 0x36c) - *(float *)(unaff_x19 + 0x364));
LAB_0379217c:
      *(float *)(lVar32 + 0x98) = fVar48;
      *(float *)(lVar32 + 0xe8) = fVar48;
      *(float *)(lVar32 + 0x110) = fVar47;
      break;
    case 3:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar32 = lVar30 + lVar46 * 0x188;
      fVar48 = *(float *)(lVar32 + 0x168);
      fVar64 = (1.0 - (*(float *)(lVar32 + 0xbc) + *(float *)(lVar32 + 0xe4)) / fVar48) * 0.5;
      fVar47 = *(float *)(lVar32 + 0xbc) / fVar48 + fVar64;
      fVar64 = *(float *)(lVar32 + 0xe4) / fVar48 + fVar64;
      *(float *)(lVar32 + 0xc0) = fVar47;
      *(float *)(lVar32 + 0x98) = fVar64;
      *(float *)(lVar32 + 0x110) = fVar47;
      *(float *)(lVar32 + 0xe8) = fVar64;
    }
    if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar32 = lVar30 + lVar46 * 0x188;
    fVar47 = *(float *)(lVar32 + 0x16c) * (1.0 - *(float *)(unaff_x19 + 0x1594));
    if ((*(char *)(lVar32 + 100) == '\0') && ((*(byte *)(lVar30 + lVar46 * 0x188 + 0x19c) & 1) != 0)
       ) {
      fVar47 = -fVar47;
    }
    lVar32 = lVar30 + lVar46 * 0x188;
    *(float *)(lVar32 + 0xb8) = fVar47;
    *(float *)(lVar32 + 0x90) = fVar47;
    *(float *)(lVar32 + 0xe0) = fVar47;
    *(float *)(lVar32 + 0x108) = fVar47;
    *(undefined4 *)(lVar32 + 0xbc) = 0x3f800000;
    *(float *)(lVar32 + 0xc0) = fVar47;
    *(undefined4 *)(lVar32 + 0x94) = 0x3f800000;
    *(float *)(lVar32 + 0x98) = fVar47;
    *(undefined4 *)(lVar32 + 0xe4) = 0x3f800000;
    *(float *)(lVar32 + 0xe8) = fVar47;
    *(undefined4 *)(lVar32 + 0x10c) = 0x3f800000;
    *(float *)(lVar32 + 0x110) = fVar47;
LAB_0379225c:
    if (((int)uVar14 < *(int *)(in_stack_000001e0 + 0xd8)) &&
       (iStack0000000000000138 < *(int *)(in_stack_000001e0 + 0xdc))) {
      if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
         (*(int *)(in_stack_000001e0 + 0x74) == 5)) {
        if ((*(int *)(in_stack_000001e0 + 0xe0) <= (int)uVar2) ||
           (*(int *)(in_stack_000001e0 + 0x74) != 5)) goto LAB_037922d4;
        if (uVar14 < uVar42) {
          bVar11 = *(uint *)(lVar30 + lVar46 * 0x188 + 0x70) == uStack000000000000005c;
          goto LAB_037922d8;
        }
        goto thunk_FUN_01ab6c44;
      }
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
LAB_037922e4:
      lVar45 = lVar30 + lVar46 * 0x188;
      *(ulong *)(lVar45 + 0xa0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0xa0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar45 + 0xa0));
      *(float *)(lVar45 + 0xa8) = fVar49 + *(float *)(lVar45 + 0xa8);
      *(ulong *)(lVar45 + 0x78) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0x78) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar45 + 0x78));
      *(float *)(lVar45 + 0x80) = fVar49 + *(float *)(lVar45 + 0x80);
      *(ulong *)(lVar45 + 200) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 200) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar45 + 200));
      *(float *)(lVar45 + 0xd0) = fVar49 + *(float *)(lVar45 + 0xd0);
      *(ulong *)(lVar45 + 0xf0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0xf0) >> 0x20),
                    fVar60 + (float)*(undefined8 *)(lVar45 + 0xf0));
      *(float *)(lVar45 + 0xf8) = fVar49 + *(float *)(lVar45 + 0xf8);
    }
    else {
LAB_037922d4:
      bVar11 = false;
LAB_037922d8:
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      if (bVar11) goto LAB_037922e4;
      if (DAT_0411f172 == '\0') {
        FUN_01ab69ac(plVar43);
        DAT_0411f172 = '\x01';
        uVar42 = *(uint *)(lVar30 + 0x18);
      }
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined8 *)(lVar32 + 0xa0) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0xa8) = uVar16;
      if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      lVar32 = lVar30 + lVar46 * 0x188;
      *(undefined8 *)(lVar32 + 0x78) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0x80) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      *(undefined8 *)(lVar32 + 200) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0xd0) = uVar16;
      uVar16 = *(undefined4 *)(*(undefined8 **)(*plVar43 + 0xb8) + 1);
      *(undefined8 *)(lVar32 + 0xf0) = **(undefined8 **)(*plVar43 + 0xb8);
      *(undefined4 *)(lVar32 + 0xf8) = uVar16;
      *(undefined1 *)(lVar45 + 0x1a0) = 0;
    }
    iVar18 = FUN_0368e42c(0);
    if (iVar18 == 1) {
      cVar41 = *(char *)(in_stack_000001e0 + 0xa2);
    }
    else {
      cVar41 = '\0';
    }
    if (cVar28 == '\x01') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a429c(uVar14,cVar41 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
    else if (cVar28 == '\x02') {
      if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037a4cd4(uVar14,cVar41 != '\0',in_stack_000001e0,in_stack_000001c0,0);
    }
LAB_037924bc:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    uVar19 = *(undefined8 *)(lVar45 + 0x124);
    *(undefined8 *)(lVar45 + 0x124) =
         CONCAT44(fVar53 + (float)((ulong)uVar19 >> 0x20),fVar60 + (float)uVar19);
    *(float *)(lVar45 + 300) = fVar49 + *(float *)(lVar45 + 300);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(ulong *)(lVar45 + 0x118) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0x118) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar45 + 0x118));
    *(float *)(lVar45 + 0x120) = fVar49 + *(float *)(lVar45 + 0x120);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(ulong *)(lVar45 + 0x130) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar45 + 0x130) >> 0x20),
                  fVar60 + (float)*(undefined8 *)(lVar45 + 0x130));
    *(float *)(lVar45 + 0x138) = fVar49 + *(float *)(lVar45 + 0x138);
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    lVar45 = lVar45 + lVar46 * 0x188;
    *(float *)(lVar45 + 0x13c) = fVar60 + *(float *)(lVar45 + 0x13c);
    *(ulong *)(lVar45 + 0x140) =
         CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar45 + 0x140) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar45 + 0x140));
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar42 = *(uint *)(lVar45 + 0x18);
    if (uVar42 <= uVar14) goto thunk_FUN_01ab6c44;
    lVar32 = lVar45 + lVar46 * 0x188;
    *(float *)(lVar32 + 0x148) = fVar60 + *(float *)(lVar32 + 0x148);
    *(float *)(lVar32 + 0x164) = fVar60 + *(float *)(lVar32 + 0x164);
    *(float *)(lVar32 + 0x154) = fVar53 + *(float *)(lVar32 + 0x154);
    uVar19 = *(undefined8 *)(lVar32 + 0x14c);
    *(undefined8 *)(lVar32 + 0x14c) =
         CONCAT44(fVar53 + (float)((ulong)uVar19 >> 0x20),fVar53 + (float)uVar19);
    if (uVar2 == uVar33) {
      uVar33 = *in_stack_000001d0 - 1;
      if (uVar14 == uVar33) goto LAB_037926b4;
    }
    else {
      lVar32 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar32 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar32 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
      lVar37 = (long)(int)uVar33;
      lVar40 = lVar32 + lVar37 * 0x60;
      fVar49 = fVar53 + *(float *)(lVar40 + 0x58);
      *(ulong *)(lVar40 + 0x50) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar40 + 0x50) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar40 + 0x50));
      *(float *)(lVar40 + 0x58) = fVar49;
      *(float *)(lVar40 + 0x5c) = fVar60 + *(float *)(lVar40 + 0x5c);
      if (uVar42 <= *(uint *)(lVar40 + 0x38)) goto thunk_FUN_01ab6c44;
      uVar16 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar40 + 0x38) * 0x188 + 0x124);
      lVar32 = lVar32 + lVar37 * 0x60;
      *(float *)(lVar32 + 0x74) = fVar49;
      *(undefined4 *)(lVar32 + 0x70) = uVar16;
      lVar45 = *(long *)(in_stack_000001c0 + 0x48);
      if (lVar45 == 0) goto LAB_03793c9c;
      if (*(uint *)(lVar45 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
      lVar32 = *in_stack_000001e8;
      if (lVar32 == 0) goto LAB_03793c9c;
      uVar33 = *(uint *)(lVar45 + lVar37 * 0x60 + 0x44);
      if (*(uint *)(lVar32 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
      lVar45 = lVar45 + lVar37 * 0x60;
      *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar32 + (long)(int)uVar33 * 0x188 + 0x130);
      *(undefined4 *)(lVar45 + 0x7c) = *(undefined4 *)(lVar45 + 0x50);
      uVar33 = *in_stack_000001d0 - 1;
LAB_037926b4:
      if (uVar14 == uVar33) {
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar32 = lVar45 + lVar35 * 0x60;
        fVar49 = fVar53 + *(float *)(lVar32 + 0x58);
        *(ulong *)(lVar32 + 0x50) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar32 + 0x50) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar32 + 0x50));
        *(float *)(lVar32 + 0x58) = fVar49;
        *(float *)(lVar32 + 0x5c) = fVar60 + *(float *)(lVar32 + 0x5c);
        lVar37 = *in_stack_000001e8;
        if (lVar37 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar32 + 0x38)) goto thunk_FUN_01ab6c44;
        uVar16 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar32 + 0x38) * 0x188 + 0x124);
        lVar45 = lVar45 + lVar35 * 0x60;
        *(float *)(lVar45 + 0x74) = fVar49;
        *(undefined4 *)(lVar45 + 0x70) = uVar16;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar32 = *in_stack_000001e8;
        if (lVar32 == 0) goto LAB_03793c9c;
        uVar33 = *(uint *)(lVar45 + lVar35 * 0x60 + 0x44);
        if (*(uint *)(lVar32 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar35 * 0x60;
        *(undefined4 *)(lVar45 + 0x78) = *(undefined4 *)(lVar32 + (long)(int)uVar33 * 0x188 + 0x130)
        ;
        *(undefined4 *)(lVar45 + 0x7c) = *(undefined4 *)(lVar45 + 0x50);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar26 = FUN_026b82c4(uVar44,0);
    if (((((uVar26 & 1) == 0) && (1 < uVar44 - 0x2010)) && (uVar44 != 0xad)) && (uVar44 != 0x2d)) {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        if (uVar39 == 1) {
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
        if (((uVar39 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar30 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_000001d0 && ((uVar44 == 0x2019 || (uVar44 == 0x27)))))) {
          if (*(uint *)(lVar30 + 0x18) <= uVar39 - 2) goto thunk_FUN_01ab6c44;
          uVar4 = *(undefined2 *)(lVar30 + (long)in_stack_000001a8 + -0x464);
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b82c4(uVar4,0);
          if ((uVar26 & 1) != 0) {
            if (*(uint *)(lVar30 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
            uVar4 = *(undefined2 *)(lVar30 + (long)in_stack_000001a8 + -0x154);
            if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_026b82c4(uVar4,0);
            if ((uVar26 & 1) != 0) goto LAB_0379289c;
          }
        }
LAB_037930d8:
        if (uVar14 == *in_stack_000001d0 - 1) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b82c4(uVar44,0);
          fStack0000000000000170 = (float)uVar14;
          if ((uVar26 & 1) == 0) goto LAB_03793114;
        }
        else {
LAB_03793114:
          fStack0000000000000170 = (float)(iStack0000000000000178 - 1);
        }
        lVar45 = *plVar23;
        if (lVar45 == 0) goto LAB_03793c9c;
        uVar33 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar18 = *(int *)(lVar45 + 0x18);
        if (iVar18 < (int)(uVar33 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar23,iVar18 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar45 = *plVar23;
          if (lVar45 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + (long)(int)uVar33 * 0xc;
        *(uint *)(lVar45 + 0x20) = uStack0000000000000168;
        *(float *)(lVar45 + 0x24) = fStack0000000000000170;
        *(uint *)(lVar45 + 0x28) = ((int)fStack0000000000000170 - uStack0000000000000168) + 1;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar35 * 0x60;
        uStack000000000000016c = 0;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar45 + 0x34) = *(int *)(lVar45 + 0x34) + 1;
      }
    }
    else {
      if ((_uStack0000000000000168 & 0x100000000) == 0) {
        uStack0000000000000168 = uVar14;
      }
      if (uVar14 == *in_stack_000001d0 - 1) {
        lVar45 = *plVar23;
        if (lVar45 == 0) goto LAB_03793c9c;
        uVar33 = *(uint *)(in_stack_000001c0 + 0x1c);
        iVar18 = *(int *)(lVar45 + 0x18);
        if (iVar18 < (int)(uVar33 + 1)) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff37b8(plVar23,iVar18 + 1,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_get_Count__);
          lVar45 = *plVar23;
          if (lVar45 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + (long)(int)uVar33 * 0xc;
        *(uint *)(lVar45 + 0x20) = uStack0000000000000168;
        *(uint *)(lVar45 + 0x24) = uVar14;
        *(uint *)(lVar45 + 0x28) = uVar39 - uStack0000000000000168;
        lVar45 = *(long *)(in_stack_000001c0 + 0x48);
        *(int *)(in_stack_000001c0 + 0x1c) = *(int *)(in_stack_000001c0 + 0x1c) + 1;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar2) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar35 * 0x60;
        iStack0000000000000138 = iStack0000000000000138 + 1;
        *(int *)(lVar45 + 0x34) = *(int *)(lVar45 + 0x34) + 1;
      }
LAB_0379289c:
      uStack000000000000016c = 1;
    }
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar33 = *(uint *)(lVar45 + 0x18);
    if (uVar33 <= uVar14) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar45 + lVar46 * 0x188 + 0x19c) >> 2 & 1) == 0) {
      if (bVar8) {
LAB_037928d0:
        if (uVar39 - 2 < uVar33) {
          uVar16 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x354);
          uVar61 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x318);
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
      iVar18 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70);
      *(int *)(lVar45 + lVar46 * 0x188 + 0x178) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = iVar18 + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (uVar44 != 0x200b && (bVar12 & 1) == 0) {
        fVar49 = *(float *)(lVar45 + lVar46 * 0x188 + 0x16c);
        if (fVar56 <= fVar49) {
          fVar56 = fVar49;
        }
        if (iVar18 != iStack00000000000000c0) {
          fStack000000000000015c = fVar58;
        }
        if (lVar22 == 0) goto LAB_03793c9c;
        fVar49 = *(float *)(lVar45 + lVar46 * 0x188 + 0x150);
        if (fStack0000000000000174 <= ABS(fVar47)) {
          fStack0000000000000174 = ABS(fVar47);
        }
        FUN_03779650(&stack0x000016a0,lVar22,0);
        memcpy(&stack0x00001610,&stack0x000016a0,0x60);
        fVar64 = (float)FUN_03776a10(&stack0x00001610,0);
        fVar49 = fVar49 + fVar56 * fVar64;
        iStack00000000000000c0 = iVar18;
        if (fVar49 <= fStack000000000000015c) {
          fStack000000000000015c = fVar49;
        }
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (bVar8 || bVar11)) {
LAB_03792a80:
        if (!bVar8) goto LAB_03792a8c;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar44,0);
          if ((uVar26 & 1) != 0) goto LAB_03792a80;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        _bStack00000000000000d8 = *(float *)(lVar45 + 0x16c);
        fStack00000000000000d0 = *(float *)(lVar45 + 0x124);
        bVar8 = fVar56 != 0.0;
        fVar49 = _bStack00000000000000d8;
        if (bVar8) {
          fVar49 = fVar56;
        }
        fVar56 = fVar49;
        uVar52 = *(undefined4 *)(lVar45 + 0x174);
        uStack00000000000000cc = 0;
        fVar49 = fVar47;
        if (bVar8) {
          fVar49 = fStack0000000000000174;
        }
        fStack00000000000000c8 = fStack000000000000015c;
        fStack0000000000000174 = fVar49;
      }
      if (*in_stack_000001d0 == 1) {
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        uVar16 = *(undefined4 *)(lVar45 + 0x130);
        uVar61 = *(undefined4 *)(lVar45 + 0x16c);
LAB_03792b34:
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,uVar16,
                     fStack000000000000015c,0,_bStack00000000000000d8,uVar61);
      }
      else {
        if ((uVar14 == uVar5) || ((int)uVar6 <= (int)uVar14)) {
          lVar45 = *in_stack_000001e8;
          if (lVar45 != 0) {
            lVar35 = lVar46;
            uVar33 = uVar14;
            if (uVar44 == 0x200b || (bVar12 & 1) != 0) {
              lVar35 = lVar36;
              uVar33 = uVar6;
            }
            if (uVar33 < *(uint *)(lVar45 + 0x18)) {
              lVar45 = lVar45 + lVar35 * 0x188;
              uVar16 = *(undefined4 *)(lVar45 + 0x130);
              uVar61 = *(undefined4 *)(lVar45 + 0x16c);
              goto LAB_03792b34;
            }
            goto thunk_FUN_01ab6c44;
          }
          goto LAB_03793c9c;
        }
        if (bVar11) {
          lVar45 = *in_stack_000001e8;
          if (lVar45 != 0) {
            uVar33 = *(uint *)(lVar45 + 0x18);
            goto LAB_037928d0;
          }
          goto LAB_03793c9c;
        }
        if ((int)(*in_stack_000001d0 - 1) <= (int)uVar14) {
LAB_03793294:
          bVar8 = true;
          goto LAB_03792b70;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
        uVar26 = FUN_03779528(uVar52,*(undefined4 *)(lVar45 + (long)in_stack_000001a8),0);
        if ((uVar26 & 1) != 0) goto LAB_03793294;
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        FUN_0379d0d0(fStack00000000000000d0,fStack00000000000000c8,uStack00000000000000cc,
                     *(undefined4 *)(lVar45 + 0x130),fStack000000000000015c,0,
                     _bStack00000000000000d8,*(undefined4 *)(lVar45 + 0x16c));
      }
      fVar56 = 0.0;
      bVar8 = false;
      fStack000000000000015c = DAT_00d38d70;
      fStack0000000000000174 = 0.0;
    }
LAB_03792b70:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
    if (lVar22 == 0) goto LAB_03793c9c;
    uVar33 = *(uint *)(lVar45 + lVar46 * 0x188 + 0x19c);
    FUN_03779650(&stack0x000016a0,lVar22,0);
    memcpy(&stack0x00001610,&stack0x000016a0,0x60);
    fVar49 = (float)FUN_03776a30(&stack0x00001610,0);
    if ((uVar33 >> 6 & 1) == 0) {
      if (bVar10) {
        lVar45 = *in_stack_000001e8;
        if (lVar45 != 0) {
          if (uVar39 - 2 < *(uint *)(lVar45 + 0x18)) {
            fVar53 = *(float *)(lVar45 + (long)in_stack_000001a8 + -0x334);
            uVar16 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x354);
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
      lVar45 = *in_stack_000001e8;
      if ((lVar45 == 0) || (lVar35 = *(long *)(unaff_x19 + 0x15b8), lVar35 == 0)) goto LAB_03793c9c;
      if ((*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x1a38)) ||
         (*(uint *)(lVar45 + 0x18) <= uVar14)) goto thunk_FUN_01ab6c44;
      *(int *)(lVar45 + lVar46 * 0x188 + 0x180) =
           *(int *)(lVar35 + (long)(int)*(uint *)(unaff_x19 + 0x1a38) * 0x38 + 0x54) << 2;
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if ((((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) || ((int)uVar6 < (int)uVar14)) ||
         (!(bool)(~bVar10 & (bVar11 ^ 1U)))) {
LAB_03792cf0:
        if (!bVar10) goto LAB_03792cf8;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar44,0);
          if ((uVar26 & 1) != 0) goto LAB_03792cf0;
          lVar45 = *in_stack_000001e8;
          if (lVar45 == 0) goto LAB_03793c9c;
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar45 = lVar45 + lVar46 * 0x188;
        fStack00000000000000f0 = *(float *)(lVar45 + 0x16c);
        in_stack_000000e8._4_4_ = *(float *)(lVar45 + 0x124);
        fStack00000000000000a8 = *(float *)(lVar45 + 0x68);
        in_stack_000000a0._4_4_ = *(float *)(lVar45 + 0x150);
        fStack00000000000000e0 = fVar49 * fStack00000000000000f0 + in_stack_000000a0._4_4_;
        uStack00000000000000dc = 0;
      }
      uVar33 = *in_stack_000001d0;
      if (uVar33 == 1) {
LAB_03792ef4:
        lVar35 = *in_stack_000001e8;
        if (lVar35 == 0) goto LAB_03793c9c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14) goto thunk_FUN_01ab6c44;
        lVar35 = lVar35 + lVar46 * 0x188;
      }
      else {
        lVar45 = lVar46;
        if (uVar14 == uVar5) {
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto LAB_03793c9c;
          uVar33 = uVar14;
          if ((uVar44 != 0x200b & (bVar12 ^ 1)) == 0) {
            lVar45 = lVar36;
            uVar33 = uVar6;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        }
        else {
          if ((int)uVar33 <= (int)uVar14) {
LAB_03792fdc:
            if ((int)uVar14 < (int)uVar33) {
              iVar18 = FUN_036d3364(lVar22,0);
              if (*(uint *)(lVar30 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
              lVar45 = *(long *)(lVar30 + (long)in_stack_000001a8 + -0x134);
              if (lVar45 == 0) goto LAB_03793c9c;
              iVar15 = FUN_036d3364(lVar45,0);
              if (iVar18 != iVar15) goto LAB_03792ef4;
            }
            if (!bVar11) {
              bVar10 = true;
              goto LAB_03793338;
            }
            lVar45 = *in_stack_000001e8;
            if (lVar45 != 0) {
              if (uVar39 - 2 < *(uint *)(lVar45 + 0x18)) {
                fVar53 = *(float *)(lVar45 + (long)in_stack_000001a8 + -0x334);
                uVar16 = *(undefined4 *)(lVar45 + (long)in_stack_000001a8 + -0x354);
                goto LAB_037932fc;
              }
              goto thunk_FUN_01ab6c44;
            }
            goto LAB_03793c9c;
          }
          lVar35 = *in_stack_000001e8;
          if (lVar35 == 0) goto LAB_03793c9c;
          if (*(uint *)(lVar35 + 0x18) <= uVar39) goto thunk_FUN_01ab6c44;
          if (*(float *)(lVar35 + (long)in_stack_000001a8 + -0x10c) == fStack00000000000000a8) {
            fVar64 = *(float *)(lVar35 + (long)in_stack_000001a8 + -0x24);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__ + 0xe0
                        ) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_037a2200(fVar53 + fVar64,in_stack_000000a0._4_4_,0);
            if ((uVar26 & 1) != 0) {
              uVar33 = *in_stack_000001d0;
              goto LAB_03792fdc;
            }
            lVar35 = *in_stack_000001e8;
            if (lVar35 == 0) goto LAB_03793c9c;
          }
          uVar33 = uVar14;
          if ((int)uVar6 < (int)uVar14) {
            lVar45 = lVar36;
            uVar33 = uVar6;
          }
          if (*(uint *)(lVar35 + 0x18) <= uVar33) goto thunk_FUN_01ab6c44;
        }
        lVar35 = lVar35 + lVar45 * 0x188;
      }
      fVar53 = *(float *)(lVar35 + 0x150);
      uVar16 = *(undefined4 *)(lVar35 + 0x130);
LAB_037932fc:
      FUN_0379d0d0(in_stack_000000e8._4_4_,fStack00000000000000e0,uStack00000000000000dc,uVar16,
                   fStack00000000000000f0 * fVar49 + fVar53,0,fStack00000000000000f0,
                   fStack00000000000000f0);
      bVar10 = false;
    }
LAB_03793338:
    lVar45 = *in_stack_000001e8;
    if (lVar45 == 0) goto LAB_03793c9c;
    uVar33 = (uint)*(undefined8 *)(lVar45 + 0x18);
    if (uVar33 <= uVar14) goto thunk_FUN_01ab6c44;
    if ((*(byte *)(lVar45 + lVar46 * 0x188 + 0x19d) >> 1 & 1) == 0) {
      if (bVar9) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
      }
LAB_03793428:
      bVar9 = false;
    }
    else {
      if ((*(int *)(in_stack_000001e0 + 0xd8) < (int)uVar14) ||
         (*(int *)(in_stack_000001e0 + 0xe0) < (int)uVar2)) {
        bVar11 = true;
      }
      else if (*(int *)(in_stack_000001e0 + 0x74) == 5) {
        bVar11 = *(int *)(lVar45 + lVar46 * 0x188 + 0x70) + 1 != *(int *)(in_stack_000001e0 + 0xf0);
      }
      else {
        bVar11 = false;
      }
      if (!bVar9) {
        if (((uVar44 == 0xd) || ((uVar44 & 0xfffe) == 10)) ||
           (((int)uVar6 < (int)uVar14 || (bVar11)))) goto LAB_03793428;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar26 = FUN_026b97f8(uVar44,0);
          if ((uVar26 & 1) != 0) goto LAB_03793428;
        }
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        lVar22 = *(long *)Method_System_Collections_Generic_Dictionary<int,_TerrainMap>_Add__;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar22 = *(long *)puVar7;
        }
        lVar45 = *in_stack_000001e8;
        if (lVar45 == 0) goto LAB_03793c9c;
        uVar33 = (uint)*(undefined8 *)(lVar45 + 0x18);
        if (uVar33 <= uVar14) goto thunk_FUN_01ab6c44;
        pfVar38 = *(float **)(lVar22 + 0xb8);
        fStack0000000000000128 = *pfVar38;
        in_stack_00000140._4_4_ = pfVar38[1];
        fStack000000000000012c = pfVar38[2];
        fStack0000000000000130 = pfVar38[3];
        uStack0000000000000124 = 0;
      }
      if (uVar33 <= uVar14) goto thunk_FUN_01ab6c44;
      lVar45 = lVar45 + lVar46 * 0x188;
      fVar64 = *(float *)(lVar45 + 0x130);
      fVar51 = *(float *)(lVar45 + 0x124);
      fVar53 = *(float *)(lVar45 + 0x148);
      fVar48 = *(float *)(lVar45 + 0x14c);
      fVar50 = *(float *)(lVar45 + 0x154);
      fVar49 = *(float *)(lVar45 + 0x164);
      uVar26 = FUN_037a20cc(&stack0x00000210,&stack0x000001f0,0);
      lVar45 = *(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
      if ((uVar26 & 1) == 0) {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar45);
        }
        fVar66 = (float)FUN_037a1dd8(uVar24,0);
        bVar9 = (bVar12 & 1) == 0;
        if (bVar9) {
          fVar53 = fVar51;
        }
        if (bVar9) {
          fVar49 = fVar64;
        }
        if (fVar53 - fVar66 <= fStack0000000000000128) {
          fStack0000000000000128 = fVar53 - fVar66;
        }
        fVar53 = (float)FUN_037a1de0(uVar24,0);
        if (fStack000000000000012c <= fVar49 + fVar53) {
          fStack000000000000012c = fVar49 + fVar53;
        }
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        fVar53 = (float)FUN_037a1df0(uVar24,0);
        if (fVar50 - fVar53 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar50 - fVar53;
        }
        fVar53 = (float)FUN_037a1de8(uVar24,0);
        if (fStack0000000000000130 <= fVar48 + fVar53) {
          fStack0000000000000130 = fVar48 + fVar53;
        }
      }
      else {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar45);
        }
        fVar66 = (float)FUN_037a1de0(uVar24,0);
        if ((bVar12 & 1) == 0) {
          fVar53 = fVar51;
        }
        if (fVar50 <= in_stack_00000140._4_4_) {
          in_stack_00000140._4_4_ = fVar50;
        }
        fVar53 = (fVar53 + (fStack000000000000012c - fVar66)) * 0.5;
        if (fStack0000000000000130 <= fVar48) {
          fStack0000000000000130 = fVar48;
        }
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,fVar53,
                     fStack0000000000000130,uStack0000000000000124);
        puVar7 = Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__;
        if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Task>_set_Item__ +
                    0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = (float)FUN_037a1df0(uVar21,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        in_stack_00000140._4_4_ = fVar50 - in_stack_00000140._4_4_;
        fStack000000000000012c = (float)FUN_037a1de0(uVar21,0);
        fVar50 = (float)FUN_037a1de8(uVar21,0);
        if ((bVar12 & 1) == 0) {
          fVar49 = fVar64;
        }
        fStack000000000000012c = fVar49 + fStack000000000000012c;
        uStack0000000000000124 = 0;
        fStack0000000000000128 = fVar53;
        fStack0000000000000130 = fVar48 + fVar50;
      }
      if ((((*in_stack_000001d0 == 1) || (uVar14 == uVar5)) || ((int)uVar6 <= (int)uVar14)) ||
         (bVar11)) {
        FUN_0379dd0c(fStack0000000000000128,in_stack_00000140._4_4_,uStack0000000000000124,
                     fStack000000000000012c,fStack0000000000000130,uStack0000000000000124);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar14 = *in_stack_000001d0;
    iStack0000000000000178 = iStack0000000000000178 + 1;
    in_stack_000001a8 = (long *)((long)in_stack_000001a8 + 0x188);
    bVar11 = (int)uVar39 < (int)uVar14;
    uVar33 = uVar2;
    uVar39 = uVar39 + 1;
  } while (bVar11);
  iVar18 = uVar2 + 1;
  plVar23 = (long *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
LAB_03793a5c:
  *(uint *)(in_stack_000001c0 + 0x10) = uVar14;
  uVar52 = *(undefined4 *)(unaff_x19 + 0x15c0);
  *(int *)(in_stack_000001c0 + 0x24) = iVar18;
  if ((int)uVar14 < 1 || iStack0000000000000138 == 0) {
    iStack0000000000000138 = 1;
  }
  *(int *)(in_stack_000001c0 + 0x1c) = iStack0000000000000138;
  *(undefined4 *)(in_stack_000001c0 + 0x14) = uVar52;
  *(int *)(in_stack_000001c0 + 0x28) = *(int *)(unaff_x19 + 0x350) + 1;
  if (1 < *(int *)(in_stack_000001c0 + 0x2c)) {
    uVar21 = 1;
    lVar30 = 0x70;
    do {
      lVar45 = *(long *)(in_stack_000001c0 + 0x58);
      if (lVar45 == 0) {
LAB_03793c9c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar45 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
      FUN_03785ba0(lVar45 + lVar30,0);
      if (*(int *)(in_stack_000001e0 + 0x100) != 0) {
        lVar45 = *(long *)(in_stack_000001c0 + 0x58);
        if (lVar45 == 0) goto LAB_03793c9c;
        if (*(int *)(*plVar23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if (*(uint *)(lVar45 + 0x18) <= uVar21) goto thunk_FUN_01ab6c44;
        FUN_03785bdc(lVar45 + lVar30,1,0);
      }
      uVar21 = uVar21 + 1;
      lVar30 = lVar30 + 0x50;
    } while ((long)uVar21 < (long)*(int *)(in_stack_000001c0 + 0x2c));
  }
LAB_0378c81c:
  if (*(long *)(in_stack_00000110 + 0x28) == in_stack_00001a38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


