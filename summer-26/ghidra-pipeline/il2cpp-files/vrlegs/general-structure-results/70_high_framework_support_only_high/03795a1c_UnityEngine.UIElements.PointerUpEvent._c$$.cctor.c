/*
FUNCTION_NAME: UnityEngine.UIElements.PointerUpEvent.<>c$$.cctor
ENTRY_POINT: 03795a1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 UnityEngine_UIElements_PointerUpEvent_<>c___cctor(void)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  long unaff_x22;
  undefined8 uVar23;
  long unaff_x23;
  void *__dest;
  long *unaff_x24;
  long lVar24;
  long *plVar25;
  long *unaff_x25;
  undefined8 uVar26;
  long unaff_x27;
  undefined8 uVar27;
  long *plVar28;
  char *unaff_x28;
  long lVar29;
  long in_stack_00000018;
  int iStack0000000000000034;
  uint uStack000000000000005c;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000170;
  uint uStack0000000000000178;
  undefined1 uStack000000000000017c;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined4 *)(unaff_x25 + 1) = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  FUN_037846a0((int)unaff_x25[0xd],&stack0x000000c0,0,*unaff_x24,0,*unaff_x25,0);
  in_stack_00000128 = in_stack_000000c8;
  in_stack_00000120 = in_stack_000000c0;
  in_stack_00000138 = in_stack_000000d8;
  in_stack_00000130 = in_stack_000000d0;
  in_stack_00000148 = in_stack_000000e8;
  in_stack_00000140 = in_stack_000000e0;
  in_stack_00000150 = in_stack_000000f0;
  FUN_020aa864(unaff_x25 + 2,&stack0x00000120,*unaff_x20);
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__;
  if (unaff_x25[0x32e] == 0) goto LAB_03796df0;
  FUN_0219c0c4(unaff_x25[0x32e],*(undefined8 *)PTR_DAT_03cd6f90);
  plVar1 = (long *)(unaff_x19 + 0x15b8);
  FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x68),plVar1,
               *(undefined8 *)(unaff_x19 + 0x19e0),0);
  if (unaff_x22 == 0) {
    unaff_x22 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
    FUN_037a6284(unaff_x22,0);
  }
  else {
    lVar18 = *(long *)(unaff_x22 + 0x30);
    if (lVar18 == 0) goto LAB_03796df0;
    iVar6 = *(int *)(unaff_x19 + 0x28);
    if (*(int *)(lVar18 + 0x18) < iVar6) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814((long *)(unaff_x22 + 0x30),iVar6,0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                  );
    }
  }
  *unaff_x28 = '\x01';
  if (*(int *)(unaff_x27 + 0x74) == 1) {
    FUN_0379e2a8();
    if (*(long *)(unaff_x19 + 0x1a00) == 0) {
      *(undefined4 *)(unaff_x27 + 0x74) = 3;
      if (in_stack_00000018 == 0) goto LAB_03796df0;
      if (*(char *)(in_stack_00000018 + 0x89) != '\0') {
        if (*unaff_x24 == 0) goto LAB_03796df0;
        uVar17 = FUN_036d3824(*unaff_x24,0);
        uVar17 = FUN_025bdc88(*(undefined8 *)OVRPlugin_TrackedKeyboardQueryFlags_TypeInfo,uVar17,
                              *(undefined8 *)OVRPlugin_TrackingConfidence_TypeInfo,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
        }
        FUN_036772fc(uVar17,0);
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03796df0;
      iVar6 = FUN_036d3364(*(long *)(unaff_x19 + 0x1a08),0);
      if (*unaff_x24 == 0) goto LAB_03796df0;
      iVar7 = FUN_036d3364(*unaff_x24,0);
      if (iVar6 != iVar7) {
        if (in_stack_00000018 == 0) goto LAB_03796df0;
        if (*(char *)(in_stack_00000018 + 0x38) == '\0') {
LAB_03795bc4:
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03796df0;
          uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1a08) + 0x28);
        }
        else {
          if (*unaff_x25 == 0) goto LAB_03796df0;
          iVar6 = FUN_036d3364(*unaff_x25,0);
          if ((*(long *)(unaff_x19 + 0x1a08) == 0) ||
             (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x1a08) + 0x28), lVar18 == 0))
          goto LAB_03796df0;
          iVar7 = FUN_036d3364(lVar18,0);
          if (iVar6 == iVar7) goto LAB_03795bc4;
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03796df0;
          uVar17 = *(undefined8 *)(unaff_x19 + 0x70);
          uVar26 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1a08) + 0x28);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_03783d84(uVar17,uVar26,0);
        }
        *(undefined8 *)(unaff_x19 + 0x1a10) = uVar17;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a10);
        uVar8 = FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x1a10),*(undefined8 *)(unaff_x19 + 0x1a08)
                             ,plVar1,*(undefined8 *)(unaff_x19 + 0x19e0),0);
        lVar18 = *(long *)(unaff_x19 + 0x15b8);
        *(uint *)(unaff_x19 + 0x1a18) = uVar8;
        if (lVar18 == 0) goto LAB_03796df0;
        if (*(uint *)(lVar18 + 0x18) <= uVar8) {
LAB_03796df4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar18 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (unaff_x23 == 0) goto LAB_03796df0;
  uVar8 = *(uint *)(unaff_x23 + 0x18);
  plVar25 = (long *)(unaff_x22 + 0x30);
  if (0 < (int)uVar8) {
    uVar21 = 0;
    iStack0000000000000034 = 0;
LAB_03795d08:
    if (uVar8 <= uVar21) goto LAB_03796df4;
    puVar20 = (uint *)(unaff_x23 + (long)(int)uVar21 * 0x10 + 0x24);
    if (*puVar20 == 0) goto LAB_03796b00;
    if (unaff_x22 == 0) goto LAB_03796df0;
    iVar6 = *(int *)(unaff_x19 + 0xe8);
    if ((*plVar25 == 0) || (*(int *)(*plVar25 + 0x18) <= iVar6)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(plVar25,iVar6 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                  );
      uVar8 = *(uint *)(unaff_x23 + 0x18);
    }
    if (uVar8 <= uVar21) goto LAB_03796df4;
    uVar8 = *puVar20;
    if ((uVar8 == 0x3c) && (*(char *)(unaff_x27 + 0xb5) != '\0')) {
      uVar11 = *(undefined4 *)(unaff_x19 + 0x78);
      uVar12 = FUN_037974c0();
      uVar22 = uStack0000000000000178;
      if ((uVar12 & 1) == 0) goto LAB_03795f38;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_03796df4;
      if (*unaff_x28 != '\x02') goto LAB_03796ae8;
      lVar18 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar18 != 0) {
        if (*(uint *)(unaff_x19 + 0x78) < *(uint *)(lVar18 + 0x18)) {
          lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x78) * 0x38;
          iVar6 = *(int *)(unaff_x23 + (long)(int)uVar21 * 0x10 + 0x28);
          *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
          lVar18 = *plVar25;
          if (lVar18 != 0) {
            if (*(uint *)(unaff_x19 + 0xe8) < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188;
              *(short *)(lVar18 + 0x20) = *(short *)(unaff_x19 + 0x157c) + -0x2000;
              *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)(unaff_x19 + 0x68);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar18 = *plVar25;
              if (lVar18 != 0) {
                uVar8 = *(uint *)(unaff_x19 + 0xe8);
                if (uVar8 < *(uint *)(lVar18 + 0x18)) {
                  *(undefined4 *)(lVar18 + (long)(int)uVar8 * 0x188 + 0x60) =
                       *(undefined4 *)(unaff_x19 + 0x78);
                  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
                     (lVar13 = FUN_037862e0(*(long *)(unaff_x19 + 0xe0),0), lVar13 != 0)) {
                    FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x157c),&stack0x000000c0,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_long>_set_Item__
                                );
                    if (uVar8 < *(uint *)(lVar18 + 0x18)) {
                      *(undefined8 *)(lVar18 + (long)(int)uVar8 * 0x188 + 0x30) = in_stack_000000c0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar18 = *plVar25;
                      if (lVar18 != 0) {
                        uVar8 = *(uint *)(unaff_x19 + 0xe8);
                        if (uVar8 < *(uint *)(lVar18 + 0x18)) {
                          cVar5 = *unaff_x28;
                          lVar13 = lVar18 + (long)(int)uVar8 * 0x188;
                          *(int *)(lVar13 + 0x24) = iVar6;
                          *(char *)(lVar13 + 0x28) = cVar5;
                          if (uVar22 < *(uint *)(unaff_x23 + 0x18)) {
                            *(int *)(lVar18 + (long)(int)uVar8 * 0x188 + 0x2c) =
                                 (*(int *)(unaff_x23 + (long)(int)uVar22 * 0x10 + 0x28) - iVar6) + 1
                            ;
                            *unaff_x28 = '\x01';
                            *(undefined4 *)(unaff_x19 + 0x78) = uVar11;
                            uVar21 = uVar22;
                            goto UnityEngine_UIElements_PointerLeaveEvent___ctor;
                          }
                        }
                        goto LAB_03796df4;
                      }
                      goto LAB_03796df0;
                    }
                    goto LAB_03796df4;
                  }
                  goto LAB_03796df0;
                }
                goto LAB_03796df4;
              }
              goto LAB_03796df0;
            }
            goto LAB_03796df4;
          }
          goto LAB_03796df0;
        }
        goto LAB_03796df4;
      }
      goto LAB_03796df0;
    }
LAB_03795f38:
    uVar17 = *(undefined8 *)(unaff_x19 + 0x68);
    uVar26 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar11 = *(undefined4 *)(unaff_x19 + 0x78);
    if (*unaff_x28 != '\x01') goto LAB_0379604c;
    uVar22 = *(uint *)(unaff_x19 + 0x124);
    if ((uVar22 >> 4 & 1) == 0) {
      if ((uVar22 >> 3 & 1) == 0) {
        if ((uVar22 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b812c(uVar8,0);
          goto joined_r0x03795fc4;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8070(uVar8,0);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar8 = FUN_026b8594(uVar8,0);
          goto LAB_03796048;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b812c(uVar8,0);
joined_r0x03795fc4:
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_026b8410(uVar8,0);
LAB_03796048:
        uVar8 = uVar8 & 0xffff;
      }
    }
LAB_0379604c:
    lVar18 = FUN_0379e454();
    uStack000000000000005c = uVar8;
    if (lVar18 == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_03796df4;
      FUN_0379e748(0,uVar8,*(undefined4 *)(unaff_x23 + (long)(int)uVar21 * 0x10 + 0x28),*unaff_x24,
                   unaff_x22);
      if (in_stack_00000018 == 0) goto LAB_03796df0;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_03796df4;
      uStack000000000000005c = 0x25a1;
      if (*(uint *)(in_stack_00000018 + 0x3c) != 0) {
        uStack000000000000005c = *(uint *)(in_stack_00000018 + 0x3c);
      }
      *puVar20 = uStack000000000000005c;
      lVar18 = FUN_03782bd4(uStack000000000000005c,*(undefined8 *)(unaff_x19 + 0x68),1,
                            *(undefined4 *)(unaff_x19 + 0x124),*(undefined4 *)(unaff_x19 + 0x134),
                            (long)&stack0x00000178 + 4,0);
      if ((lVar18 == 0) &&
         (((lVar18 = *(long *)(in_stack_00000018 + 0x30), lVar18 == 0 ||
           (*(int *)(lVar18 + 0x18) < 1)) ||
          (lVar18 = FUN_0378314c(uStack000000000000005c,*(undefined8 *)(unaff_x19 + 0x68),lVar18,1,
                                 *(undefined4 *)(unaff_x19 + 0x124),
                                 *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0),
          lVar18 == 0)))) {
        uVar27 = *(undefined8 *)(in_stack_00000018 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_036cee6c(uVar27,0,0);
        if (((uVar12 & 1) == 0) ||
           (lVar18 = FUN_03782bd4(uStack000000000000005c,*(undefined8 *)(in_stack_00000018 + 0x20),1
                                  ,*(undefined4 *)(unaff_x19 + 0x124),
                                  *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0),
           lVar18 == 0)) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_03796df4;
          *puVar20 = 0x20;
          uStack000000000000005c = 0x20;
          lVar18 = FUN_03782bd4(0x20,*(undefined8 *)(unaff_x19 + 0x68),1,
                                *(undefined4 *)(unaff_x19 + 0x124),
                                *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0);
          if (lVar18 == 0) {
            if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_03796df4;
            *puVar20 = 3;
            uStack000000000000005c = 3;
            lVar18 = FUN_03782bd4(3,*(undefined8 *)(unaff_x19 + 0x68),1,
                                  *(undefined4 *)(unaff_x19 + 0x124),
                                  *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0);
          }
        }
      }
      if (*(char *)(in_stack_00000018 + 0x89) != '\0') {
        if (uVar8 >> 0x10 == 0) {
          in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar8);
          uVar27 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x000000c0);
          if ((*(long *)(unaff_x27 + 0x40) == 0) ||
             (uVar23 = FUN_036d3824(*(long *)(unaff_x27 + 0x40),0), lVar18 == 0)) goto LAB_03796df0;
          in_stack_00000118._4_4_ = FUN_0377baf0(lVar18,0);
          uVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000118 + 4);
          puVar15 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>_Add__
          ;
        }
        else {
          in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar8);
          uVar27 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x000000c0);
          if ((*(long *)(unaff_x27 + 0x40) == 0) ||
             (uVar23 = FUN_036d3824(*(long *)(unaff_x27 + 0x40),0), lVar18 == 0)) goto LAB_03796df0;
          in_stack_00000118._4_4_ = FUN_0377baf0(lVar18,0);
          uVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000118 + 4);
          puVar15 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>__ctor__
          ;
        }
        uVar27 = FUN_025be8b0(*puVar15,uVar27,uVar23,uVar14,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_036772fc(uVar27,0);
      }
    }
    lVar13 = *plVar25;
    if (lVar13 == 0) goto LAB_03796df0;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
    puVar15 = (undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188 + 0x38);
    *puVar15 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,0);
    if (lVar18 == 0) goto LAB_03796df0;
    cVar5 = FUN_03787a60(lVar18,0);
    if (cVar5 == '\x01') {
      lVar13 = FUN_03783144(lVar18,0);
      if (lVar13 == 0) goto LAB_03796df0;
      iVar6 = FUN_0377e104(lVar13,0);
      if (*unaff_x24 == 0) goto LAB_03796df0;
      iVar7 = FUN_0377e104(*unaff_x24,0);
      if (iVar6 != iVar7) {
        plVar28 = (long *)FUN_03783144(lVar18,0);
        if (plVar28 == (long *)0x0) {
          *unaff_x24 = 0;
        }
        else {
          bVar2 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__ +
                           0x130);
          if (*(byte *)(*plVar28 + 0x130) < bVar2) {
            plVar28 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) !=
                   *(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__) {
            plVar28 = (long *)0x0;
          }
          *unaff_x24 = (long)plVar28;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      bVar4 = iVar6 != iVar7;
      if ((*unaff_x24 == 0) || (lVar13 = FUN_03779cb4(*unaff_x24,0), lVar13 == 0))
      goto LAB_03796df0;
      lVar13 = *(long *)(lVar13 + 0x38);
      uVar9 = FUN_0377acf0(lVar18,0);
      if (lVar13 == 0) goto LAB_03796df0;
      in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar9);
      uVar12 = FUN_0219f8b8(lVar13,&stack0x000000c0,&stack0x00000170,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                           );
      if ((uVar12 & 1) == 0) goto LAB_0379664c;
      if (in_stack_00000170 == 0) {
        if (unaff_x28[0x470] != '\0') goto LAB_03796b0c;
        goto LAB_03796b1c;
      }
      iVar6 = 0;
      while (iVar6 < *(int *)(in_stack_00000170 + 0x18)) {
        FUN_02215a88(in_stack_00000170,iVar6,&stack0x000000c0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_get_Keys__);
        in_stack_00000160 = in_stack_000000c0;
        in_stack_00000168 = in_stack_000000c8;
        lVar13 = UnityEngine_UIElements_DefaultEventSystem_<>c__<SendInputEvents>b__37_1
                           (&stack0x00000160,0);
        if (lVar13 == 0) goto LAB_03796df0;
        uVar12 = *(ulong *)(lVar13 + 0x18);
        iVar7 = FUN_037793f0(&stack0x00000160,0);
        uVar8 = (uint)uVar12;
        if (1 < (int)uVar8) {
          uVar22 = 1;
          do {
            if (*(uint *)(unaff_x23 + 0x18) <= uVar21 + uVar22) goto LAB_03796df4;
            if (*unaff_x24 == 0) goto LAB_03796df0;
            iVar10 = FUN_0377df20(*unaff_x24,
                                  *(undefined4 *)
                                   (unaff_x23 + (long)(int)(uVar21 + uVar22) * 0x10 + 0x24),0);
            lVar13 = UnityEngine_UIElements_DefaultEventSystem_<>c__<SendInputEvents>b__37_1
                               (&stack0x00000160,0);
            if (lVar13 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= uVar22) goto LAB_03796df4;
            if (iVar10 != *(int *)(lVar13 + (long)(int)uVar22 * 4 + 0x20)) goto LAB_037965a0;
            uVar22 = uVar22 + 1;
          } while (uVar8 != uVar22);
        }
        if (iVar7 != 0) {
          if (*unaff_x24 == 0) goto LAB_03796df0;
          uVar16 = FUN_0377fff0(*unaff_x24,iVar7,&stack0x00000158,0);
          if ((uVar16 & 1) != 0) {
            lVar13 = *plVar25;
            if (lVar13 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
            *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188 + 0x38) =
                 in_stack_00000158;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((int)uVar8 < 1) goto LAB_03796644;
            uVar16 = 0;
            uVar22 = 0;
            if (uVar21 <= *(uint *)(unaff_x23 + 0x18)) {
              uVar22 = *(uint *)(unaff_x23 + 0x18) - uVar21;
            }
            goto LAB_03796610;
          }
        }
LAB_037965a0:
        iVar6 = iVar6 + 1;
        if (in_stack_00000170 == 0) goto LAB_03796df0;
      }
    }
    else {
      bVar4 = false;
    }
LAB_0379664c:
    lVar13 = *plVar25;
    if (lVar13 == 0) goto LAB_03796df0;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188;
    plVar28 = (long *)(lVar13 + 0x30);
    *plVar28 = lVar18;
    *(undefined1 *)(lVar13 + 0x28) = 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar28,lVar18);
    lVar13 = *plVar25;
    if (lVar13 == 0) goto LAB_03796df0;
    uVar8 = *(uint *)(unaff_x19 + 0xe8);
    if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_03796df4;
    lVar24 = lVar13 + (long)(int)uVar8 * 0x188;
    *(undefined1 *)(lVar24 + 100) = uStack000000000000017c;
    *(short *)(lVar24 + 0x20) = (short)uStack000000000000005c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_03796df4;
    lVar24 = unaff_x23 + (long)(int)uVar21 * 0x10;
    lVar13 = lVar13 + (long)(int)uVar8 * 0x188;
    *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)(lVar24 + 0x28);
    *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)(lVar24 + 0x2c);
    *(long *)(lVar13 + 0x40) = *unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    cVar5 = FUN_03787a60(lVar18,0);
    if (cVar5 == '\x02') {
      plVar28 = (long *)FUN_03783144(lVar18,0);
      if (plVar28 == (long *)0x0) goto LAB_03796df0;
      bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__ +
                       0x130);
      if ((*(byte *)(*plVar28 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__))
      goto LAB_03796df0;
      uVar8 = FUN_03784994(plVar28[5],plVar28,plVar1,*(undefined8 *)(unaff_x19 + 0x19e0),0);
      lVar18 = *(long *)(unaff_x19 + 0x15b8);
      *(uint *)(unaff_x19 + 0x78) = uVar8;
      if (lVar18 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_03796df4;
      lVar18 = lVar18 + (long)(int)uVar8 * 0x38;
      *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
      lVar18 = *plVar25;
      if (lVar18 == 0) goto LAB_03796df0;
      uVar8 = *(uint *)(unaff_x19 + 0xe8);
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_03796df4;
      lVar18 = lVar18 + (long)(int)uVar8 * 0x188;
      *(undefined1 *)(lVar18 + 0x28) = 2;
      *(undefined4 *)(lVar18 + 0x60) = *(undefined4 *)(unaff_x19 + 0x78);
      *unaff_x28 = '\x01';
      *(undefined4 *)(unaff_x19 + 0x78) = uVar11;
UnityEngine_UIElements_PointerLeaveEvent___ctor:
      iStack0000000000000034 = iStack0000000000000034 + 1;
    }
    else {
      if (bVar4) {
        if (*unaff_x24 == 0) goto LAB_03796df0;
        iVar6 = FUN_0377e104(*unaff_x24,0);
        if (*(long *)(unaff_x27 + 0x40) == 0) goto LAB_03796df0;
        iVar7 = FUN_0377e104(*(long *)(unaff_x27 + 0x40),0);
        if (iVar6 != iVar7) {
          if (in_stack_00000018 == 0) goto LAB_03796df0;
          if (*(char *)(in_stack_00000018 + 0x38) == '\0') {
            if (*unaff_x24 == 0) goto LAB_03796df0;
            uVar27 = *(undefined8 *)(*unaff_x24 + 0x28);
          }
          else {
            if (*unaff_x24 == 0) goto LAB_03796df0;
            uVar27 = *(undefined8 *)(*unaff_x24 + 0x28);
            lVar13 = *unaff_x25;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar27 = FUN_03783d84(lVar13,uVar27,0);
          }
          *(undefined8 *)(unaff_x19 + 0x70) = uVar27;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25);
          uVar9 = FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x68),
                               plVar1,*(undefined8 *)(unaff_x19 + 0x19e0),0);
          *(undefined4 *)(unaff_x19 + 0x78) = uVar9;
        }
      }
      lVar13 = FUN_03787a68(lVar18,0);
      if (lVar13 == 0) goto LAB_03796df0;
      iVar6 = FUN_03776eb8(lVar13,0);
      if (0 < iVar6) {
        lVar13 = *unaff_x24;
        lVar24 = *unaff_x25;
        lVar18 = FUN_03787a68(lVar18,0);
        if (lVar18 == 0) goto LAB_03796df0;
        uVar9 = FUN_03776eb8(lVar18,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                    + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                            );
        }
        uVar27 = UnityEngine_UIElements_EventDispatcher__CreateForRuntime(lVar13,lVar24,uVar9,0);
        *(undefined8 *)(unaff_x19 + 0x70) = uVar27;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,uVar27);
        uVar9 = FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x68),
                             plVar1,*(undefined8 *)(unaff_x19 + 0x19e0),0);
        bVar4 = true;
        *(undefined4 *)(unaff_x19 + 0x78) = uVar9;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(uStack000000000000005c,0);
      if ((uStack000000000000005c != 0x200b) && ((uVar12 & 1) == 0)) {
        lVar18 = *(long *)(unaff_x19 + 0x15b8);
        if (lVar18 == 0) goto LAB_03796df0;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x78)) goto LAB_03796df4;
        piVar19 = (int *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x78) * 0x38 + 0x54);
        iVar6 = *piVar19;
        if (0x3ffe < iVar6) {
          uVar23 = *(undefined8 *)(unaff_x19 + 0x70);
          uVar27 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(uVar27,uVar23,0);
          uVar8 = FUN_0378475c(uVar27,*(undefined8 *)(unaff_x19 + 0x68),plVar1,
                               *(undefined8 *)(unaff_x19 + 0x19e0),0);
          lVar18 = *(long *)(unaff_x19 + 0x15b8);
          *(uint *)(unaff_x19 + 0x78) = uVar8;
          if (lVar18 == 0) goto LAB_03796df0;
          if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_03796df4;
          piVar19 = (int *)(lVar18 + (long)(int)uVar8 * 0x38 + 0x54);
          iVar6 = *piVar19;
        }
        *piVar19 = iVar6 + 1;
      }
      lVar18 = *plVar25;
      if (lVar18 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
      *(long *)(lVar18 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188 + 0x58) = *unaff_x25;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar18 = *plVar25;
      if (lVar18 == 0) goto LAB_03796df0;
      uVar8 = *(uint *)(unaff_x19 + 0xe8);
      if (*(uint *)(lVar18 + 0x18) <= uVar8) goto LAB_03796df4;
      uVar22 = *(uint *)(unaff_x19 + 0x78);
      *(uint *)(lVar18 + (long)(int)uVar8 * 0x188 + 0x60) = uVar22;
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_03796df4;
      *(bool *)(lVar18 + (long)(int)uVar22 * 0x38 + 0x41) = bVar4;
      if (bVar4) {
        puVar15 = (undefined8 *)(lVar18 + (long)(int)uVar22 * 0x38 + 0x48);
        *puVar15 = uVar26;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar26);
        *(undefined8 *)(unaff_x19 + 0x68) = uVar17;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        *(undefined8 *)(unaff_x19 + 0x70) = uVar26;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x25,uVar26);
        uVar8 = *(uint *)(unaff_x19 + 0xe8);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar11;
      }
    }
    *(uint *)(unaff_x19 + 0xe8) = uVar8 + 1;
    uVar22 = uVar21;
LAB_03796ae8:
    uVar8 = *(uint *)(unaff_x23 + 0x18);
    uVar21 = uVar22 + 1;
    if ((int)uVar8 <= (int)uVar21) goto LAB_03796b00;
    goto LAB_03795d08;
  }
  iStack0000000000000034 = 0;
LAB_03796b00:
  if (unaff_x28[0x470] != '\0') {
LAB_03796b0c:
    unaff_x28[0x470] = '\0';
LAB_03796db4:
    return *(undefined4 *)(unaff_x19 + 0xe8);
  }
  if (unaff_x22 != 0) {
LAB_03796b1c:
    *(int *)(unaff_x22 + 0x14) = iStack0000000000000034;
    if (*(long *)(unaff_x19 + 0x19e0) != 0) {
      uVar8 = FUN_0219b384(*(long *)(unaff_x19 + 0x19e0),*(undefined8 *)PTR_DAT_03ceb270);
      plVar28 = (long *)(unaff_x22 + 0x58);
      *(uint *)(unaff_x22 + 0x2c) = uVar8;
      puVar3 = Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__;
      if (*plVar28 != 0) {
        if (*(int *)(*plVar28 + 0x18) < (int)uVar8) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff3814(plVar28,uVar8,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                      );
        }
        if (*(char *)(unaff_x19 + 0x2c) != '\0') {
          if (*plVar25 == 0) goto LAB_03796df0;
          iVar6 = *(int *)(unaff_x19 + 0xe8);
          if (0x100 < *(int *)(*plVar25 + 0x18) - iVar6) {
            iVar7 = 0x100;
            if (0x100 < iVar6 + 1) {
              iVar7 = iVar6 + 1;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff3814(plVar25,iVar7,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                        );
          }
        }
        puVar3 = Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
        if (0 < (int)uVar8) {
          uVar21 = 0;
          do {
            lVar18 = *plVar1;
            if (lVar18 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_03796df4;
            lVar13 = *plVar28;
            if (lVar13 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_03796df4;
            lVar29 = (long)(int)uVar21;
            lVar24 = lVar13 + lVar29 * 0x50;
            iVar6 = *(int *)(lVar18 + lVar29 * 0x38 + 0x54);
            plVar25 = (long *)(lVar24 + 0x28);
            lVar18 = *plVar25;
            __dest = (void *)(lVar24 + 0x20);
            if (lVar18 == 0) {
              in_stack_000000f8 = 0;
              in_stack_000000f0 = 0;
              in_stack_00000108 = 0;
              in_stack_00000100 = 0;
              in_stack_000000d8 = 0;
              in_stack_000000d0 = 0;
              in_stack_000000e8 = 0;
              in_stack_000000e0 = 0;
              in_stack_000000c8 = 0;
              in_stack_000000c0 = 0;
              FUN_037854c0(&stack0x000000c0,iVar6 + 1,0);
              memcpy(&stack0x00000070,&stack0x000000c0,0x50);
              if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_03796df4;
              memcpy(__dest,&stack0x00000070,0x50);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar25,0);
            }
            else {
              iVar7 = *(int *)(lVar18 + 0x18);
              if (iVar7 < iVar6 * 4) {
                if (iVar6 < 0x401) {
                  iVar6 = FUN_036c1d60(iVar6,0);
                }
                else {
LAB_03796ce0:
                  iVar6 = iVar6 + 0x100;
                }
              }
              else {
                if (iVar7 + iVar6 * -4 < 0x401) goto LAB_03796d1c;
                if (0x400 < iVar6) goto LAB_03796ce0;
                iVar6 = FUN_036c1d60(iVar6,0);
                if (iVar6 < 0x101) {
                  iVar6 = 0x100;
                }
              }
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0378597c(__dest,iVar6,0);
            }
LAB_03796d1c:
            lVar18 = *plVar28;
            if ((lVar18 == 0) || (lVar13 = *plVar1, lVar13 == 0)) goto LAB_03796df0;
            if ((*(uint *)(lVar13 + 0x18) <= uVar21) || (*(uint *)(lVar18 + 0x18) <= uVar21))
            goto LAB_03796df4;
            *(undefined8 *)(lVar18 + lVar29 * 0x50 + 0x60) =
                 *(undefined8 *)(lVar13 + lVar29 * 0x38 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar18 = *plVar28;
            if ((lVar18 == 0) || (lVar13 = *plVar1, lVar13 == 0)) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_03796df4;
            lVar13 = *(long *)(lVar13 + lVar29 * 0x38 + 0x28);
            if (lVar13 == 0) goto LAB_03796df0;
            uVar11 = FUN_03779c74(lVar13,0);
            if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_03796df4;
            uVar21 = uVar21 + 1;
            *(undefined4 *)(lVar18 + lVar29 * 0x50 + 0x68) = uVar11;
          } while (uVar8 != uVar21);
        }
        goto LAB_03796db4;
      }
    }
  }
LAB_03796df0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while( true ) {
    lVar13 = unaff_x23 + (long)(int)(uVar21 + (int)uVar16) * 0x10;
    if (uVar16 == 0) {
      *(uint *)(lVar13 + 0x2c) = uVar8;
    }
    else {
      *(undefined4 *)(lVar13 + 0x24) = 0x1a;
    }
    uVar16 = uVar16 + 1;
    if ((uVar12 & 0xffffffff) == uVar16) break;
LAB_03796610:
    if (uVar22 == uVar16) goto LAB_03796df4;
  }
LAB_03796644:
  uVar21 = (uVar21 + uVar8) - 1;
  goto LAB_0379664c;
}


