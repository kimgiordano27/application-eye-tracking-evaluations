/*
FUNCTION_NAME: UnityEngine.UIElements.PointerCancelEvent$$.cctor
ENTRY_POINT: 03795adc
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


undefined4 UnityEngine_UIElements_PointerCancelEvent___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  char in_NG;
  bool in_ZR;
  char in_OV;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  long unaff_x19;
  long *unaff_x20;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  long unaff_x23;
  void *__dest;
  long *unaff_x24;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  long unaff_x27;
  undefined8 uVar26;
  long *plVar27;
  char *unaff_x28;
  long lVar28;
  long in_stack_00000018;
  int iStack0000000000000034;
  long *in_stack_00000040;
  uint uStack000000000000005c;
  long in_stack_00000060;
  long *in_stack_00000068;
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
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  long in_stack_00000170;
  uint uStack0000000000000178;
  undefined1 uStack000000000000017c;
  
  if (!in_ZR && in_NG == in_OV) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_01ff3814();
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
      iVar5 = FUN_036d3364(*(long *)(unaff_x19 + 0x1a08),0);
      if (*unaff_x24 == 0) goto LAB_03796df0;
      iVar6 = FUN_036d3364(*unaff_x24,0);
      if (iVar5 != iVar6) {
        if (in_stack_00000018 == 0) goto LAB_03796df0;
        if (*(char *)(in_stack_00000018 + 0x38) == '\0') {
LAB_03795bc4:
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03796df0;
          uVar17 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1a08) + 0x28);
        }
        else {
          if (*in_stack_00000040 == 0) goto LAB_03796df0;
          iVar5 = FUN_036d3364(*in_stack_00000040,0);
          if ((*(long *)(unaff_x19 + 0x1a08) == 0) ||
             (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x1a08) + 0x28), lVar11 == 0))
          goto LAB_03796df0;
          iVar6 = FUN_036d3364(lVar11,0);
          if (iVar5 == iVar6) goto LAB_03795bc4;
          if (*(long *)(unaff_x19 + 0x1a08) == 0) goto LAB_03796df0;
          uVar17 = *(undefined8 *)(unaff_x19 + 0x70);
          uVar25 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1a08) + 0x28);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar17 = FUN_03783d84(uVar17,uVar25,0);
        }
        *(undefined8 *)(unaff_x19 + 0x1a10) = uVar17;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x1a10);
        uVar7 = FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x1a10),*(undefined8 *)(unaff_x19 + 0x1a08)
                             ,in_stack_00000068,*(undefined8 *)(unaff_x19 + 0x19e0),0);
        lVar11 = *(long *)(unaff_x19 + 0x15b8);
        *(uint *)(unaff_x19 + 0x1a18) = uVar7;
        if (lVar11 == 0) goto LAB_03796df0;
        if (*(uint *)(lVar11 + 0x18) <= uVar7) {
LAB_03796df4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x38 + 0x54) = 0;
      }
    }
  }
  if (unaff_x23 == 0) goto LAB_03796df0;
  uVar7 = *(uint *)(unaff_x23 + 0x18);
  plVar24 = (long *)(in_stack_00000060 + 0x30);
  if (0 < (int)uVar7) {
    uVar20 = 0;
    iStack0000000000000034 = 0;
LAB_03795d08:
    if (uVar7 <= uVar20) goto LAB_03796df4;
    puVar19 = (uint *)(unaff_x23 + (long)(int)uVar20 * 0x10 + 0x24);
    if (*puVar19 == 0) goto LAB_03796b00;
    if (in_stack_00000060 == 0) goto LAB_03796df0;
    iVar5 = *(int *)(unaff_x19 + 0xe8);
    if ((*plVar24 == 0) || (*(int *)(*plVar24 + 0x18) <= iVar5)) {
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__ +
                  0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_01ff3814(plVar24,iVar5 + 1,1,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                  );
      uVar7 = *(uint *)(unaff_x23 + 0x18);
    }
    if (uVar7 <= uVar20) goto LAB_03796df4;
    uVar7 = *puVar19;
    if ((uVar7 == 0x3c) && (*(char *)(unaff_x27 + 0xb5) != '\0')) {
      uVar10 = *(undefined4 *)(unaff_x19 + 0x78);
      uVar12 = FUN_037974c0();
      uVar21 = uStack0000000000000178;
      if ((uVar12 & 1) == 0) goto LAB_03795f38;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_03796df4;
      if (*unaff_x28 != '\x02') goto LAB_03796ae8;
      lVar11 = *(long *)(unaff_x19 + 0x15b8);
      if (lVar11 != 0) {
        if (*(uint *)(unaff_x19 + 0x78) < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x78) * 0x38;
          iVar5 = *(int *)(unaff_x23 + (long)(int)uVar20 * 0x10 + 0x28);
          *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
          lVar11 = *plVar24;
          if (lVar11 != 0) {
            if (*(uint *)(unaff_x19 + 0xe8) < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188;
              *(short *)(lVar11 + 0x20) = *(short *)(unaff_x19 + 0x157c) + -0x2000;
              *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(unaff_x19 + 0x68);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              lVar11 = *plVar24;
              if (lVar11 != 0) {
                uVar7 = *(uint *)(unaff_x19 + 0xe8);
                if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x188 + 0x60) =
                       *(undefined4 *)(unaff_x19 + 0x78);
                  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
                     (lVar13 = FUN_037862e0(*(long *)(unaff_x19 + 0xe0),0), lVar13 != 0)) {
                    FUN_02215a88(lVar13,*(undefined4 *)(unaff_x19 + 0x157c),&stack0x000000c0,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_long>_set_Item__
                                );
                    if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                      *(undefined8 *)(lVar11 + (long)(int)uVar7 * 0x188 + 0x30) = in_stack_000000c0;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                      lVar11 = *plVar24;
                      if (lVar11 != 0) {
                        uVar7 = *(uint *)(unaff_x19 + 0xe8);
                        if (uVar7 < *(uint *)(lVar11 + 0x18)) {
                          cVar4 = *unaff_x28;
                          lVar13 = lVar11 + (long)(int)uVar7 * 0x188;
                          *(int *)(lVar13 + 0x24) = iVar5;
                          *(char *)(lVar13 + 0x28) = cVar4;
                          if (uVar21 < *(uint *)(unaff_x23 + 0x18)) {
                            *(int *)(lVar11 + (long)(int)uVar7 * 0x188 + 0x2c) =
                                 (*(int *)(unaff_x23 + (long)(int)uVar21 * 0x10 + 0x28) - iVar5) + 1
                            ;
                            *unaff_x28 = '\x01';
                            *(undefined4 *)(unaff_x19 + 0x78) = uVar10;
                            uVar20 = uVar21;
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
    uVar25 = *(undefined8 *)(unaff_x19 + 0x70);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x78);
    if (*unaff_x28 != '\x01') goto LAB_0379604c;
    uVar21 = *(uint *)(unaff_x19 + 0x124);
    if ((uVar21 >> 4 & 1) == 0) {
      if ((uVar21 >> 3 & 1) == 0) {
        if ((uVar21 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar12 = FUN_026b812c(uVar7,0);
          goto joined_r0x03795fc4;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_026b8070(uVar7,0);
        if ((uVar12 & 1) != 0) {
          if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar7 = FUN_026b8594(uVar7,0);
          goto LAB_03796048;
        }
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b812c(uVar7,0);
joined_r0x03795fc4:
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_026b8410(uVar7,0);
LAB_03796048:
        uVar7 = uVar7 & 0xffff;
      }
    }
LAB_0379604c:
    lVar11 = FUN_0379e454();
    uStack000000000000005c = uVar7;
    if (lVar11 == 0) {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_03796df4;
      FUN_0379e748(0,uVar7,*(undefined4 *)(unaff_x23 + (long)(int)uVar20 * 0x10 + 0x28),*unaff_x24,
                   in_stack_00000060);
      if (in_stack_00000018 == 0) goto LAB_03796df0;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_03796df4;
      uStack000000000000005c = 0x25a1;
      if (*(uint *)(in_stack_00000018 + 0x3c) != 0) {
        uStack000000000000005c = *(uint *)(in_stack_00000018 + 0x3c);
      }
      *puVar19 = uStack000000000000005c;
      lVar11 = FUN_03782bd4(uStack000000000000005c,*(undefined8 *)(unaff_x19 + 0x68),1,
                            *(undefined4 *)(unaff_x19 + 0x124),*(undefined4 *)(unaff_x19 + 0x134),
                            (long)&stack0x00000178 + 4,0);
      if ((lVar11 == 0) &&
         (((lVar11 = *(long *)(in_stack_00000018 + 0x30), lVar11 == 0 ||
           (*(int *)(lVar11 + 0x18) < 1)) ||
          (lVar11 = FUN_0378314c(uStack000000000000005c,*(undefined8 *)(unaff_x19 + 0x68),lVar11,1,
                                 *(undefined4 *)(unaff_x19 + 0x124),
                                 *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0),
          lVar11 == 0)))) {
        uVar26 = *(undefined8 *)(in_stack_00000018 + 0x20);
        if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar12 = FUN_036cee6c(uVar26,0,0);
        if (((uVar12 & 1) == 0) ||
           (lVar11 = FUN_03782bd4(uStack000000000000005c,*(undefined8 *)(in_stack_00000018 + 0x20),1
                                  ,*(undefined4 *)(unaff_x19 + 0x124),
                                  *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0),
           lVar11 == 0)) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_03796df4;
          *puVar19 = 0x20;
          uStack000000000000005c = 0x20;
          lVar11 = FUN_03782bd4(0x20,*(undefined8 *)(unaff_x19 + 0x68),1,
                                *(undefined4 *)(unaff_x19 + 0x124),
                                *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0);
          if (lVar11 == 0) {
            if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_03796df4;
            *puVar19 = 3;
            uStack000000000000005c = 3;
            lVar11 = FUN_03782bd4(3,*(undefined8 *)(unaff_x19 + 0x68),1,
                                  *(undefined4 *)(unaff_x19 + 0x124),
                                  *(undefined4 *)(unaff_x19 + 0x134),(long)&stack0x00000178 + 4,0);
          }
        }
      }
      if (*(char *)(in_stack_00000018 + 0x89) != '\0') {
        if (uVar7 >> 0x10 == 0) {
          in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar7);
          uVar26 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x000000c0);
          if ((*(long *)(unaff_x27 + 0x40) == 0) ||
             (uVar22 = FUN_036d3824(*(long *)(unaff_x27 + 0x40),0), lVar11 == 0)) goto LAB_03796df0;
          in_stack_00000118._4_4_ = FUN_0377baf0(lVar11,0);
          uVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000118 + 4);
          puVar15 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>_Add__
          ;
        }
        else {
          in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar7);
          uVar26 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,&stack0x000000c0);
          if ((*(long *)(unaff_x27 + 0x40) == 0) ||
             (uVar22 = FUN_036d3824(*(long *)(unaff_x27 + 0x40),0), lVar11 == 0)) goto LAB_03796df0;
          in_stack_00000118._4_4_ = FUN_0377baf0(lVar11,0);
          uVar14 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cc4ad8,(long)&stack0x00000118 + 4);
          puVar15 = (undefined8 *)
                    Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannels>__ctor__
          ;
        }
        uVar26 = FUN_025be8b0(*puVar15,uVar26,uVar22,uVar14,0);
        if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_036772fc(uVar26,0);
      }
    }
    lVar13 = *plVar24;
    if (lVar13 == 0) goto LAB_03796df0;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
    puVar15 = (undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188 + 0x38);
    *puVar15 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,0);
    if (lVar11 == 0) goto LAB_03796df0;
    cVar4 = FUN_03787a60(lVar11,0);
    if (cVar4 == '\x01') {
      lVar13 = FUN_03783144(lVar11,0);
      if (lVar13 == 0) goto LAB_03796df0;
      iVar5 = FUN_0377e104(lVar13,0);
      if (*unaff_x24 == 0) goto LAB_03796df0;
      iVar6 = FUN_0377e104(*unaff_x24,0);
      if (iVar5 != iVar6) {
        plVar27 = (long *)FUN_03783144(lVar11,0);
        if (plVar27 == (long *)0x0) {
          *unaff_x24 = 0;
        }
        else {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__ +
                           0x130);
          if (*(byte *)(*plVar27 + 0x130) < bVar1) {
            plVar27 = (long *)0x0;
          }
          else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar1 * 8 + -8) !=
                   *(long *)Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__) {
            plVar27 = (long *)0x0;
          }
          *unaff_x24 = (long)plVar27;
        }
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      bVar3 = iVar5 != iVar6;
      if ((*unaff_x24 == 0) || (lVar13 = FUN_03779cb4(*unaff_x24,0), lVar13 == 0))
      goto LAB_03796df0;
      lVar13 = *(long *)(lVar13 + 0x38);
      uVar8 = FUN_0377acf0(lVar11,0);
      if (lVar13 == 0) goto LAB_03796df0;
      in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,uVar8);
      uVar12 = FUN_0219f8b8(lVar13,&stack0x000000c0,&stack0x00000170,
                            *(undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_Remove__
                           );
      if ((uVar12 & 1) == 0) goto LAB_0379664c;
      if (in_stack_00000170 == 0) {
        if (unaff_x28[0x470] != '\0') goto LAB_03796b0c;
        goto LAB_03796b1c;
      }
      iVar5 = 0;
      while (iVar5 < *(int *)(in_stack_00000170 + 0x18)) {
        FUN_02215a88(in_stack_00000170,iVar5,&stack0x000000c0,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<int,_List<Renderer>>_get_Keys__);
        in_stack_00000160 = in_stack_000000c0;
        in_stack_00000168 = in_stack_000000c8;
        lVar13 = UnityEngine_UIElements_DefaultEventSystem_<>c__<SendInputEvents>b__37_1
                           (&stack0x00000160,0);
        if (lVar13 == 0) goto LAB_03796df0;
        uVar12 = *(ulong *)(lVar13 + 0x18);
        iVar6 = FUN_037793f0(&stack0x00000160,0);
        uVar7 = (uint)uVar12;
        if (1 < (int)uVar7) {
          uVar21 = 1;
          do {
            if (*(uint *)(unaff_x23 + 0x18) <= uVar20 + uVar21) goto LAB_03796df4;
            if (*unaff_x24 == 0) goto LAB_03796df0;
            iVar9 = FUN_0377df20(*unaff_x24,
                                 *(undefined4 *)
                                  (unaff_x23 + (long)(int)(uVar20 + uVar21) * 0x10 + 0x24),0);
            lVar13 = UnityEngine_UIElements_DefaultEventSystem_<>c__<SendInputEvents>b__37_1
                               (&stack0x00000160,0);
            if (lVar13 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_03796df4;
            if (iVar9 != *(int *)(lVar13 + (long)(int)uVar21 * 4 + 0x20)) goto LAB_037965a0;
            uVar21 = uVar21 + 1;
          } while (uVar7 != uVar21);
        }
        if (iVar6 != 0) {
          if (*unaff_x24 == 0) goto LAB_03796df0;
          uVar16 = FUN_0377fff0(*unaff_x24,iVar6,&stack0x00000158,0);
          if ((uVar16 & 1) != 0) {
            lVar13 = *plVar24;
            if (lVar13 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
            *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188 + 0x38) =
                 in_stack_00000158;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            if ((int)uVar7 < 1) goto LAB_03796644;
            uVar16 = 0;
            uVar21 = 0;
            if (uVar20 <= *(uint *)(unaff_x23 + 0x18)) {
              uVar21 = *(uint *)(unaff_x23 + 0x18) - uVar20;
            }
            goto LAB_03796610;
          }
        }
LAB_037965a0:
        iVar5 = iVar5 + 1;
        if (in_stack_00000170 == 0) goto LAB_03796df0;
      }
    }
    else {
      bVar3 = false;
    }
LAB_0379664c:
    lVar13 = *plVar24;
    if (lVar13 == 0) goto LAB_03796df0;
    if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
    lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188;
    plVar27 = (long *)(lVar13 + 0x30);
    *plVar27 = lVar11;
    *(undefined1 *)(lVar13 + 0x28) = 1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar27,lVar11);
    lVar13 = *plVar24;
    if (lVar13 == 0) goto LAB_03796df0;
    uVar7 = *(uint *)(unaff_x19 + 0xe8);
    if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_03796df4;
    lVar23 = lVar13 + (long)(int)uVar7 * 0x188;
    *(undefined1 *)(lVar23 + 100) = uStack000000000000017c;
    *(short *)(lVar23 + 0x20) = (short)uStack000000000000005c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_03796df4;
    lVar23 = unaff_x23 + (long)(int)uVar20 * 0x10;
    lVar13 = lVar13 + (long)(int)uVar7 * 0x188;
    *(undefined4 *)(lVar13 + 0x24) = *(undefined4 *)(lVar23 + 0x28);
    *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)(lVar23 + 0x2c);
    *(long *)(lVar13 + 0x40) = *unaff_x24;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    cVar4 = FUN_03787a60(lVar11,0);
    if (cVar4 == '\x02') {
      plVar27 = (long *)FUN_03783144(lVar11,0);
      if (plVar27 == (long *)0x0) goto LAB_03796df0;
      bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__ +
                       0x130);
      if ((*(byte *)(*plVar27 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_Material>_Add__))
      goto LAB_03796df0;
      uVar7 = FUN_03784994(plVar27[5],plVar27,in_stack_00000068,*(undefined8 *)(unaff_x19 + 0x19e0),
                           0);
      lVar11 = *(long *)(unaff_x19 + 0x15b8);
      *(uint *)(unaff_x19 + 0x78) = uVar7;
      if (lVar11 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_03796df4;
      lVar11 = lVar11 + (long)(int)uVar7 * 0x38;
      *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
      lVar11 = *plVar24;
      if (lVar11 == 0) goto LAB_03796df0;
      uVar7 = *(uint *)(unaff_x19 + 0xe8);
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_03796df4;
      lVar11 = lVar11 + (long)(int)uVar7 * 0x188;
      *(undefined1 *)(lVar11 + 0x28) = 2;
      *(undefined4 *)(lVar11 + 0x60) = *(undefined4 *)(unaff_x19 + 0x78);
      *unaff_x28 = '\x01';
      *(undefined4 *)(unaff_x19 + 0x78) = uVar10;
UnityEngine_UIElements_PointerLeaveEvent___ctor:
      iStack0000000000000034 = iStack0000000000000034 + 1;
    }
    else {
      if (bVar3) {
        if (*unaff_x24 == 0) goto LAB_03796df0;
        iVar5 = FUN_0377e104(*unaff_x24,0);
        if (*(long *)(unaff_x27 + 0x40) == 0) goto LAB_03796df0;
        iVar6 = FUN_0377e104(*(long *)(unaff_x27 + 0x40),0);
        if (iVar5 != iVar6) {
          if (in_stack_00000018 == 0) goto LAB_03796df0;
          if (*(char *)(in_stack_00000018 + 0x38) == '\0') {
            if (*unaff_x24 == 0) goto LAB_03796df0;
            uVar26 = *(undefined8 *)(*unaff_x24 + 0x28);
          }
          else {
            if (*unaff_x24 == 0) goto LAB_03796df0;
            uVar26 = *(undefined8 *)(*unaff_x24 + 0x28);
            lVar13 = *in_stack_00000040;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                        + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar26 = FUN_03783d84(lVar13,uVar26,0);
          }
          *(undefined8 *)(unaff_x19 + 0x70) = uVar26;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000040);
          uVar8 = FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x68),
                               in_stack_00000068,*(undefined8 *)(unaff_x19 + 0x19e0),0);
          *(undefined4 *)(unaff_x19 + 0x78) = uVar8;
        }
      }
      lVar13 = FUN_03787a68(lVar11,0);
      if (lVar13 == 0) goto LAB_03796df0;
      iVar5 = FUN_03776eb8(lVar13,0);
      if (0 < iVar5) {
        lVar13 = *unaff_x24;
        lVar23 = *in_stack_00000040;
        lVar11 = FUN_03787a68(lVar11,0);
        if (lVar11 == 0) goto LAB_03796df0;
        uVar8 = FUN_03776eb8(lVar11,0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                    + 0xe0) == 0) {
          thunk_FUN_01a58e78(*(long *)
                              Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Count__
                            );
        }
        uVar26 = UnityEngine_UIElements_EventDispatcher__CreateForRuntime(lVar13,lVar23,uVar8,0);
        *(undefined8 *)(unaff_x19 + 0x70) = uVar26;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000040,uVar26);
        uVar8 = FUN_0378475c(*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x68),
                             in_stack_00000068,*(undefined8 *)(unaff_x19 + 0x19e0),0);
        bVar3 = true;
        *(undefined4 *)(unaff_x19 + 0x78) = uVar8;
      }
      if (*(int *)(*(long *)PTR_DAT_03cc02b0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar12 = FUN_026b63d8(uStack000000000000005c,0);
      if ((uStack000000000000005c != 0x200b) && ((uVar12 & 1) == 0)) {
        lVar11 = *(long *)(unaff_x19 + 0x15b8);
        if (lVar11 == 0) goto LAB_03796df0;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x78)) goto LAB_03796df4;
        piVar18 = (int *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x78) * 0x38 + 0x54);
        iVar5 = *piVar18;
        if (0x3ffe < iVar5) {
          uVar22 = *(undefined8 *)(unaff_x19 + 0x70);
          uVar26 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369922c(uVar26,uVar22,0);
          uVar7 = FUN_0378475c(uVar26,*(undefined8 *)(unaff_x19 + 0x68),in_stack_00000068,
                               *(undefined8 *)(unaff_x19 + 0x19e0),0);
          lVar11 = *(long *)(unaff_x19 + 0x15b8);
          *(uint *)(unaff_x19 + 0x78) = uVar7;
          if (lVar11 == 0) goto LAB_03796df0;
          if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_03796df4;
          piVar18 = (int *)(lVar11 + (long)(int)uVar7 * 0x38 + 0x54);
          iVar5 = *piVar18;
        }
        *piVar18 = iVar5 + 1;
      }
      lVar11 = *plVar24;
      if (lVar11 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0xe8)) goto LAB_03796df4;
      *(long *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0xe8) * 0x188 + 0x58) = *in_stack_00000040
      ;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar11 = *plVar24;
      if (lVar11 == 0) goto LAB_03796df0;
      uVar7 = *(uint *)(unaff_x19 + 0xe8);
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_03796df4;
      uVar21 = *(uint *)(unaff_x19 + 0x78);
      *(uint *)(lVar11 + (long)(int)uVar7 * 0x188 + 0x60) = uVar21;
      lVar11 = *in_stack_00000068;
      if (lVar11 == 0) goto LAB_03796df0;
      if (*(uint *)(lVar11 + 0x18) <= uVar21) goto LAB_03796df4;
      *(bool *)(lVar11 + (long)(int)uVar21 * 0x38 + 0x41) = bVar3;
      if (bVar3) {
        puVar15 = (undefined8 *)(lVar11 + (long)(int)uVar21 * 0x38 + 0x48);
        *puVar15 = uVar25;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar25);
        *(undefined8 *)(unaff_x19 + 0x68) = uVar17;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        *(undefined8 *)(unaff_x19 + 0x70) = uVar25;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000040,uVar25);
        uVar7 = *(uint *)(unaff_x19 + 0xe8);
        *(undefined4 *)(unaff_x19 + 0x78) = uVar10;
      }
    }
    *(uint *)(unaff_x19 + 0xe8) = uVar7 + 1;
    uVar21 = uVar20;
LAB_03796ae8:
    uVar7 = *(uint *)(unaff_x23 + 0x18);
    uVar20 = uVar21 + 1;
    if ((int)uVar7 <= (int)uVar20) goto LAB_03796b00;
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
  if (in_stack_00000060 != 0) {
LAB_03796b1c:
    *(int *)(in_stack_00000060 + 0x14) = iStack0000000000000034;
    if (*(long *)(unaff_x19 + 0x19e0) != 0) {
      uVar7 = FUN_0219b384(*(long *)(unaff_x19 + 0x19e0),*(undefined8 *)PTR_DAT_03ceb270);
      plVar27 = (long *)(in_stack_00000060 + 0x58);
      *(uint *)(in_stack_00000060 + 0x2c) = uVar7;
      puVar2 = Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__;
      if (*plVar27 != 0) {
        if (*(int *)(*plVar27 + 0x18) < (int)uVar7) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<int,_TextColorGradient>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_01ff3814(plVar27,uVar7,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                      );
        }
        if (*(char *)(unaff_x19 + 0x2c) != '\0') {
          if (*plVar24 == 0) goto LAB_03796df0;
          iVar5 = *(int *)(unaff_x19 + 0xe8);
          if (0x100 < *(int *)(*plVar24 + 0x18) - iVar5) {
            iVar6 = 0x100;
            if (0x100 < iVar5 + 1) {
              iVar6 = iVar5 + 1;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            FUN_01ff3814(plVar24,iVar6,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_set_Item__
                        );
          }
        }
        puVar2 = Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
        if (0 < (int)uVar7) {
          uVar20 = 0;
          do {
            lVar11 = *in_stack_00000068;
            if (lVar11 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_03796df4;
            lVar13 = *plVar27;
            if (lVar13 == 0) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_03796df4;
            lVar28 = (long)(int)uVar20;
            lVar23 = lVar13 + lVar28 * 0x50;
            iVar5 = *(int *)(lVar11 + lVar28 * 0x38 + 0x54);
            plVar24 = (long *)(lVar23 + 0x28);
            lVar11 = *plVar24;
            __dest = (void *)(lVar23 + 0x20);
            if (lVar11 == 0) {
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
              FUN_037854c0(&stack0x000000c0,iVar5 + 1,0);
              memcpy(&stack0x00000070,&stack0x000000c0,0x50);
              if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_03796df4;
              memcpy(__dest,&stack0x00000070,0x50);
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar24,0);
            }
            else {
              iVar6 = *(int *)(lVar11 + 0x18);
              if (iVar6 < iVar5 * 4) {
                if (iVar5 < 0x401) {
                  iVar5 = FUN_036c1d60(iVar5,0);
                }
                else {
LAB_03796ce0:
                  iVar5 = iVar5 + 0x100;
                }
              }
              else {
                if (iVar6 + iVar5 * -4 < 0x401) goto LAB_03796d1c;
                if (0x400 < iVar5) goto LAB_03796ce0;
                iVar5 = FUN_036c1d60(iVar5,0);
                if (iVar5 < 0x101) {
                  iVar5 = 0x100;
                }
              }
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              FUN_0378597c(__dest,iVar5,0);
            }
LAB_03796d1c:
            lVar11 = *plVar27;
            if ((lVar11 == 0) || (lVar13 = *in_stack_00000068, lVar13 == 0)) goto LAB_03796df0;
            if ((*(uint *)(lVar13 + 0x18) <= uVar20) || (*(uint *)(lVar11 + 0x18) <= uVar20))
            goto LAB_03796df4;
            *(undefined8 *)(lVar11 + lVar28 * 0x50 + 0x60) =
                 *(undefined8 *)(lVar13 + lVar28 * 0x38 + 0x38);
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            lVar11 = *plVar27;
            if ((lVar11 == 0) || (lVar13 = *in_stack_00000068, lVar13 == 0)) goto LAB_03796df0;
            if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_03796df4;
            lVar13 = *(long *)(lVar13 + lVar28 * 0x38 + 0x28);
            if (lVar13 == 0) goto LAB_03796df0;
            uVar10 = FUN_03779c74(lVar13,0);
            if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_03796df4;
            uVar20 = uVar20 + 1;
            *(undefined4 *)(lVar11 + lVar28 * 0x50 + 0x68) = uVar10;
          } while (uVar7 != uVar20);
        }
        goto LAB_03796db4;
      }
    }
  }
LAB_03796df0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while( true ) {
    lVar13 = unaff_x23 + (long)(int)(uVar20 + (int)uVar16) * 0x10;
    if (uVar16 == 0) {
      *(uint *)(lVar13 + 0x2c) = uVar7;
    }
    else {
      *(undefined4 *)(lVar13 + 0x24) = 0x1a;
    }
    uVar16 = uVar16 + 1;
    if ((uVar12 & 0xffffffff) == uVar16) break;
LAB_03796610:
    if (uVar21 == uVar16) goto LAB_03796df4;
  }
LAB_03796644:
  uVar20 = (uVar20 + uVar7) - 1;
  goto LAB_0379664c;
}


