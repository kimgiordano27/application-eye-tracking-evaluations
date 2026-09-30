/*
FUNCTION_NAME: Meta.WitAi.Events.TelemetryEvents$$.ctor
ENTRY_POINT: 013ff00c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
Meta_WitAi_Events_TelemetryEvents___ctor
          (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  int *piVar27;
  long lVar28;
  long *unaff_x19;
  long lVar29;
  long *plVar30;
  undefined8 uVar31;
  long lVar32;
  long unaff_x25;
  undefined4 uVar33;
  undefined4 uVar34;
  ulong in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  long in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_000001c0;
  
  *(undefined4 *)(unaff_x25 + 0x18) = 0;
  puVar7 = 
  Field_<PrivateImplementationDetails>_7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
  ;
  puVar6 = Method_System_ValueTuple<WebHeaderCollection,_byte[],_int>__ctor__;
  puVar5 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  puVar3 = Oculus_Platform_Models_AchievementProgressList_TypeInfo;
  puVar4 = UnityEngine_Pool_ObjectPool<LayoutRebuilder>_TypeInfo;
  puVar2 = PTR_DAT_033f0af0;
  if (param_1 == 0) goto LAB_01400718;
  uVar13 = 0;
LAB_013ff050:
  puVar8 = StringLiteral_12558;
  if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar13) {
    lVar29 = unaff_x19[0x21];
    if (lVar29 != 0) {
      iVar11 = 0;
      goto LAB_013ff4ac;
    }
    goto LAB_01400718;
  }
  if (*(uint *)(param_1 + 0x18) <= uVar13) goto LAB_0140071c;
  uVar16 = FUN_013fb818();
  if ((uVar16 & 1) != 0) {
    lVar29 = *(long *)(unaff_x25 + 0x20);
    if (lVar29 == 0) {
      lVar29 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_OVREnumerable_Enumerator<OVRAnchor>_get_Current__);
      if (lVar29 == 0) goto LAB_01400718;
      FUN_0136b58c();
      *(long *)(unaff_x25 + 0x20) = lVar29;
    }
    iVar11 = FUN_010ad5f0(in_stack_000000a8,lVar29,*(undefined8 *)puVar7);
    if (iVar11 != -1) goto LAB_013ff0c8;
    iVar11 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (1 < iVar11) {
      lVar29 = *(long *)(unaff_x25 + 0x10);
      if (lVar29 == 0) goto LAB_01400718;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
      lVar29 = *(long *)(lVar29 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20);
      if (lVar29 == 0) goto LAB_01400718;
      uVar31 = FUN_0268b6ac(lVar29,0);
      uVar31 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar31,
                            *(undefined8 *)System_Converter<IActiveState,_Object>_TypeInfo,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02661754(uVar31,0);
    }
    lVar29 = *(long *)(unaff_x25 + 0x10);
    if (lVar29 == 0) goto LAB_01400718;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
    *(undefined8 *)(lVar29 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20) = 0;
LAB_013ff478:
    in_stack_00000150._4_4_ = *(int *)(unaff_x25 + 0x18);
    param_1 = *(long *)(unaff_x25 + 0x10);
    uVar13 = in_stack_00000150._4_4_ + 1;
    *(uint *)(unaff_x25 + 0x18) = uVar13;
    if (param_1 == 0) goto LAB_01400718;
    goto LAB_013ff050;
  }
LAB_013ff0c8:
  lVar29 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
  if (lVar29 == 0) goto LAB_01400718;
  FUN_01400720();
  lVar21 = *(long *)(unaff_x25 + 0x10);
  if (lVar21 == 0) goto LAB_01400718;
  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
  FUN_014007d4(lVar29,0,*(undefined8 *)(lVar21 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20))
  ;
  uVar31 = *(undefined8 *)(lVar29 + 200);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_0268b4e0(uVar31,0,0);
  if ((uVar16 & 1) == 0) {
    if (*(long *)(lVar29 + 200) == 0) goto LAB_01400718;
    in_stack_00000158 = FUN_02665444(*(long *)(lVar29 + 200),0);
    iVar11 = (**(code **)(*unaff_x19 + 0x4f8))();
    if (4 < iVar11) {
      if (in_stack_00000158 == 0) goto LAB_01400718;
      uStack00000000000000f0 = (undefined4)*(undefined8 *)(in_stack_00000158 + 0x18);
      uVar31 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x000000f0);
      uVar31 = FUN_01600b5c(*(undefined8 *)puVar4,uVar31,*(undefined8 *)(lVar29 + 0x18),0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar31,0);
    }
    if (in_stack_00000158 == 0) {
      uVar31 = *(undefined8 *)(lVar29 + 0x20);
      uVar18 = *(undefined8 *)StringLiteral_3316;
      uVar20 = *(undefined8 *)
                RCG_Lovesick_InteractiveObjects_MysticVibrationZone_<HoldingInZone_Coroutine>d__23_TypeInfo
      ;
      goto LAB_013ff63c;
    }
    lVar21 = *(long *)(lVar29 + 0xc0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_0268b4e0(lVar21,0,0);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_013f4460(lVar21,0);
      lVar22 = in_stack_00000158;
      if ((uVar16 & 1) != 0) {
        if (*(long *)(lVar29 + 0x18) != 0) {
          uVar31 = FUN_0268b6ac(*(long *)(lVar29 + 0x18),0);
          uVar18 = *(undefined8 *)StringLiteral_3316;
          puVar19 = (undefined8 *)PTR_DAT_033f1a28;
          goto LAB_013ff630;
        }
        goto LAB_01400718;
      }
      if ((in_stack_00000158 == 0) || (lVar21 == 0)) goto LAB_01400718;
      iVar11 = FUN_02666048(lVar21,0);
      if (iVar11 < *(int *)(lVar22 + 0x18)) {
        uVar12 = FUN_02666048(lVar21,0);
        FUN_010afdd4(&stack0x00000158,uVar12,*(undefined8 *)StringLiteral_9152);
      }
      lVar22 = *(long *)(unaff_x25 + 0x10);
      if (lVar22 == 0) goto LAB_01400718;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
      uVar31 = *(undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_02681b9c(uVar31,0,0);
      if ((uVar16 & 1) != 0) {
        FUN_00bbdb6c(in_stack_000000a0,lVar29,
                     *(undefined8 *)
                      Method_TokenMachine_<BillPlacedAnimation>d__26_System_Collections_IEnumerator_Reset__
                    );
        lVar22 = *(long *)(unaff_x25 + 0x10);
        if (lVar22 != 0) {
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
          plVar17 = *(long **)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20);
          if (plVar17 != (long *)0x0) {
            uVar31 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
            lVar22 = *(long *)(unaff_x25 + 0x10);
            if (lVar22 != 0) {
              if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
              lVar22 = *(long *)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20);
              if (lVar22 != 0) {
                uStack00000000000000f0 = FUN_02681c0c(lVar22,0);
                uVar18 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,&stack0x000000f0);
                uVar31 = FUN_01600b5c(*(undefined8 *)puVar3,uVar31,uVar18,0);
                *(undefined8 *)(lVar29 + 0x20) = uVar31;
                lVar22 = *(long *)(unaff_x25 + 0x10);
                if (lVar22 != 0) {
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
                  lVar22 = *(long *)(lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20);
                  if (lVar22 != 0) {
                    uVar12 = FUN_02681c0c(lVar22,0);
                    *(undefined4 *)(lVar29 + 0x10) = uVar12;
                    lVar22 = *(long *)(unaff_x25 + 0x10);
                    if (lVar22 != 0) {
                      if (*(uint *)(unaff_x25 + 0x18) < *(uint *)(lVar22 + 0x18)) {
                        *(undefined8 *)(lVar29 + 0x18) =
                             *(undefined8 *)
                              (lVar22 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8 + 0x20);
                        uVar12 = FUN_02665480(lVar21,0);
                        *(undefined4 *)(lVar29 + 0x30) = uVar12;
                        *(long *)(lVar29 + 0xb0) = in_stack_00000158;
                        goto LAB_013ff478;
                      }
                      goto LAB_0140071c;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_01400718;
      }
      goto LAB_013ff478;
    }
    if (*(long *)(lVar29 + 0x18) == 0) goto LAB_01400718;
    uVar31 = FUN_0268b6ac(*(long *)(lVar29 + 0x18),0);
    uVar18 = *(undefined8 *)StringLiteral_3316;
    puVar19 = (undefined8 *)StringLiteral_7949;
  }
  else {
    if (*(long *)(lVar29 + 0x18) == 0) goto LAB_01400718;
    uVar31 = FUN_0268b6ac(*(long *)(lVar29 + 0x18),0);
    uVar18 = *(undefined8 *)StringLiteral_3316;
    puVar19 = (undefined8 *)
              RCG_Lovesick_InteractiveObjects_MysticVibrationZone_<HoldingInZone_Coroutine>d__23_TypeInfo
    ;
  }
LAB_013ff630:
  uVar20 = *puVar19;
LAB_013ff63c:
  uVar31 = FUN_01600424(uVar18,uVar31,uVar20,0);
  if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)StringLiteral_302);
  }
  FUN_026610e4(uVar31,0);
  lVar23 = *(long *)(unaff_x25 + 0x10);
  if (lVar23 != 0) {
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x25 + 0x18)) goto LAB_0140071c;
    lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x25 + 0x18) * 8;
    goto LAB_013ff68c;
  }
  goto LAB_01400718;
  while( true ) {
    lVar29 = unaff_x19[0x21];
    iVar11 = iVar11 + 1;
    if (lVar29 == 0) break;
LAB_013ff4ac:
    if (*(int *)(lVar29 + 0x18) <= iVar11) {
      if (unaff_x19[0x14] != 0) {
        FUN_02040900(unaff_x19[0x14],0);
        if (unaff_x19[0x15] != 0) {
          FUN_02040900(unaff_x19[0x15],0);
          plVar30 = (long *)unaff_x19[0x3c];
          lVar29 = unaff_x19[0x21];
          plVar17 = (long *)FUN_013eae18();
          if (plVar17 != (long *)0x0) {
            lVar21 = *plVar17;
            uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar16 == 0) goto LAB_013ff5fc;
            piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            goto LAB_013ff5e4;
          }
        }
      }
      break;
    }
    FUN_0132138c(lVar29,iVar11,&stack0x000000f0,*(undefined8 *)puVar8);
    if (CONCAT44(uStack00000000000000f4,uStack00000000000000f0) == 0) break;
    if (*(char *)(CONCAT44(uStack00000000000000f4,uStack00000000000000f0) + 0xb9) == '\0') {
      if (unaff_x19[0x21] == 0) break;
      FUN_0132138c(unaff_x19[0x21],iVar11,&stack0x000000f0,*(undefined8 *)puVar8);
      lVar29 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
      if (lVar29 == 0) break;
      uVar16 = FUN_01400910(lVar29,0);
      if ((uVar16 & 1) == 0) {
        if (*(long *)(lVar29 + 0x18) != 0) {
          uVar31 = FUN_0268b6ac(*(long *)(lVar29 + 0x18),0);
          uVar20 = *(undefined8 *)StringLiteral_3316;
          uVar18 = *(undefined8 *)
                    RCG_Lovesick_InteractiveObjects_MysticVibrationZone_<HoldingInZone_Coroutine>d__23_TypeInfo
          ;
          goto FUN_01400688;
        }
        break;
      }
    }
  }
  goto LAB_01400718;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar27 = piVar27 + 4;
    if (uVar16 == 0) break;
LAB_013ff5e4:
    if (*(long *)(piVar27 + -2) ==
        *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
      puVar19 = (undefined8 *)(lVar21 + (long)(*piVar27 + 0x24) * 0x10 + 0x138);
      goto LAB_013ff6f0;
    }
  }
LAB_013ff5fc:
  puVar19 = (undefined8 *)
            FUN_00d59724(plVar17,*(long *)
                                  Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                         ,0x24);
LAB_013ff6f0:
  uVar12 = (*(code *)*puVar19)(plVar17,puVar19[1]);
  plVar17 = (long *)FUN_013eae18();
  if (plVar17 != (long *)0x0) {
    lVar21 = *plVar17;
    uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
    if (uVar16 != 0) {
      piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) ==
            *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
          puVar19 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_013ff768;
        }
        uVar16 = uVar16 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar16 != 0);
    }
    puVar19 = (undefined8 *)
              FUN_00d59724(plVar17,*(long *)
                                    Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                           ,0);
LAB_013ff768:
    uVar13 = (*(code *)*puVar19)(plVar17,puVar19[1]);
    if (plVar30 != (long *)0x0) {
      lVar21 = *plVar30;
      uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
      if (uVar16 != 0) {
        piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar2) {
            puVar19 = (undefined8 *)(lVar21 + (long)(*piVar27 + 2) * 0x10 + 0x138);
            goto Meta_WitAi_Events_SpeechEvents__AddListener;
          }
          uVar16 = uVar16 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar16 != 0);
      }
      puVar19 = (undefined8 *)FUN_00d59724(plVar30,*(long *)puVar2,2);
Meta_WitAi_Events_SpeechEvents__AddListener:
      (*(code *)*puVar19)(plVar30,lVar29,in_stack_000000a0,in_stack_00000070._4_4_,uVar12,uVar13 & 1
                          ,puVar19[1]);
      if (unaff_x19[0x15] != 0) {
        FUN_02040968(unaff_x19[0x15],0);
        lVar29 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                              in_stack_00000080._4_4_);
        plVar17 = (long *)unaff_x19[0x3a];
        if (plVar17 != (long *)0x0) {
          lVar21 = *plVar17;
          uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
          if (uVar16 != 0) {
            piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) ==
                  *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                 ) {
                puVar19 = (undefined8 *)(lVar21 + (long)(*piVar27 + 3) * 0x10 + 0x138);
                goto LAB_013ff874;
              }
              uVar16 = uVar16 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar16 != 0);
          }
          puVar19 = (undefined8 *)
                    FUN_00d59724(plVar17,*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                 ,3);
LAB_013ff874:
          (*(code *)*puVar19)(plVar17,in_stack_000000a8,puVar19[1]);
          if (in_stack_000000a8 != 0) {
            if (0 < (int)*(ulong *)(in_stack_000000a8 + 0x18)) {
              uVar16 = 0;
              uVar24 = *(ulong *)(in_stack_000000a8 + 0x18) & 0xffffffff;
              do {
                in_stack_00000148 = 0;
                if (uVar24 <= uVar16) goto LAB_0140071c;
                FUN_013fb870();
                lVar21 = in_stack_00000148;
                if (in_stack_00000148 == 0) {
                  iVar11 = (**(code **)(*unaff_x19 + 0x4f8))();
                  if (1 < iVar11) {
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_02661754(*(undefined8 *)
                                  OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureSize_TypeInfo,0)
                    ;
                  }
                }
                else {
                  if ((DAT_0377694e & 1) == 0) {
                    thunk_FUN_00d48444(
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                    DAT_0377694e = 1;
                  }
                  *(undefined2 *)(lVar21 + 0xb8) = 0x101;
                  plVar17 = (long *)FUN_013eae18();
                  if (plVar17 == (long *)0x0) goto LAB_01400718;
                  lVar22 = *plVar17;
                  uVar24 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar24 != 0) {
                    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) ==
                          *(long *)
                           Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
                        puVar19 = (undefined8 *)(lVar22 + (long)(*piVar27 + 0x24) * 0x10 + 0x138);
                        goto LAB_013ff9b8;
                      }
                      uVar24 = uVar24 - 1;
                      piVar27 = piVar27 + 4;
                    } while (uVar24 != 0);
                  }
                  puVar19 = (undefined8 *)
                            FUN_00d59724(plVar17,*(long *)
                                                  Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                         ,0x24);
LAB_013ff9b8:
                  iVar11 = (*(code *)*puVar19)(plVar17,puVar19[1]);
                  if (iVar11 == 1) {
                    plVar17 = (long *)unaff_x19[0x3a];
                    if (plVar17 == (long *)0x0) goto LAB_01400718;
                    lVar22 = *plVar17;
                    uVar24 = (ulong)*(ushort *)(lVar22 + 0x12a);
                    if (uVar24 != 0) {
                      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) ==
                            *(long *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                           ) {
                          puVar19 = (undefined8 *)(lVar22 + (long)(*piVar27 + 7) * 0x10 + 0x138);
                          goto LAB_013ffa2c;
                        }
                        uVar24 = uVar24 - 1;
                        piVar27 = piVar27 + 4;
                      } while (uVar24 != 0);
                    }
                    puVar19 = (undefined8 *)
                              FUN_00d59724(plVar17,*(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                           ,7);
LAB_013ffa2c:
                    (*(code *)*puVar19)(plVar17,lVar21,puVar19[1]);
                  }
                  lVar21 = *(long *)(lVar21 + 0x78);
                  if (lVar21 == 0) goto LAB_01400718;
                  uVar13 = *(uint *)(lVar21 + 0x18);
                  if (0 < (long)((ulong)uVar13 << 0x20)) {
                    uVar24 = 0;
                    do {
                      if (lVar29 == 0) goto LAB_01400718;
                      if ((*(uint *)(lVar29 + 0x18) <= uVar24) || (uVar13 <= uVar24))
                      goto LAB_0140071c;
                      *(int *)(lVar29 + 0x20 + uVar24 * 4) =
                           *(int *)(lVar21 + 0x20 + uVar24 * 4) +
                           *(int *)(lVar29 + 0x20 + uVar24 * 4);
                      uVar24 = uVar24 + 1;
                    } while ((long)uVar24 < (long)(int)uVar13);
                  }
                }
                uVar24 = (ulong)*(uint *)(in_stack_000000a8 + 0x18);
                uVar16 = uVar16 + 1;
              } while ((long)uVar16 < (long)(int)*(uint *)(in_stack_000000a8 + 0x18));
            }
            if (unaff_x19[0x16] != 0) {
              FUN_02040900(unaff_x19[0x16],0);
              puVar4 = StringLiteral_12558;
              puVar2 = Method_System_Nullable<char>_get_Value__;
              lVar29 = unaff_x19[0x21];
              if (lVar29 != 0) {
                iVar11 = 0;
LAB_013ffb00:
                if (iVar11 < *(int *)(lVar29 + 0x18)) {
                  FUN_0132138c(lVar29,iVar11,&stack0x000000f0,*(undefined8 *)puVar4);
                  if (CONCAT44(uStack00000000000000f4,uStack00000000000000f0) != 0) {
                    if (*(char *)(CONCAT44(uStack00000000000000f4,uStack00000000000000f0) + 0xb9) !=
                        '\0') goto LAB_013ffc38;
                    if (unaff_x19[0x21] != 0) {
                      FUN_0132138c(unaff_x19[0x21],iVar11,&stack0x000000f0,*(undefined8 *)puVar4);
                      lVar29 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
                      plVar17 = (long *)FUN_013eae18();
                      if (plVar17 != (long *)0x0) {
                        lVar21 = *plVar17;
                        uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
                        if (uVar16 != 0) {
                          piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) ==
                                *(long *)
                                 Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__)
                            {
                              puVar19 = (undefined8 *)
                                        (lVar21 + (long)(*piVar27 + 0x24) * 0x10 + 0x138);
                              goto LAB_013ffbb4;
                            }
                            uVar16 = uVar16 - 1;
                            piVar27 = piVar27 + 4;
                          } while (uVar16 != 0);
                        }
                        puVar19 = (undefined8 *)
                                  FUN_00d59724(plVar17,*(long *)
                                                  Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                               ,0x24);
LAB_013ffbb4:
                        iVar14 = (*(code *)*puVar19)(plVar17,puVar19[1]);
                        if (iVar14 != 1) goto LAB_013ffc38;
                        plVar17 = (long *)unaff_x19[0x3a];
                        if (plVar17 != (long *)0x0) {
                          lVar21 = *plVar17;
                          uVar16 = (ulong)*(ushort *)(lVar21 + 0x12a);
                          if (uVar16 != 0) {
                            piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar27 + -2) ==
                                  *(long *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                 ) {
                                puVar19 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
                                goto LAB_013ffc24;
                              }
                              uVar16 = uVar16 - 1;
                              piVar27 = piVar27 + 4;
                            } while (uVar16 != 0);
                          }
                          puVar19 = (undefined8 *)
                                    FUN_00d59724(plVar17,*(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                                 ,0);
LAB_013ffc24:
                          uVar16 = (*(code *)*puVar19)(plVar17,lVar29,puVar19[1]);
                          puVar3 = PTR_DAT_033f4580;
                          if ((uVar16 & 1) != 0) goto LAB_013ffc38;
                          if ((lVar29 != 0) && (*(long *)(lVar29 + 0x18) != 0)) {
                            uVar31 = FUN_0268b6ac(*(long *)(lVar29 + 0x18),0);
                            uVar18 = *(undefined8 *)puVar3;
                            uVar20 = *(undefined8 *)StringLiteral_3316;
FUN_01400688:
                            uVar31 = FUN_01600424(uVar20,uVar31,uVar18,0);
                            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                              thunk_FUN_00d32864(*(long *)StringLiteral_302);
                            }
                            goto LAB_014006bc;
                          }
                        }
                      }
                    }
                  }
                }
                else if (unaff_x19[0x16] != 0) {
                  FUN_02040968(unaff_x19[0x16],0);
                  if (unaff_x19[0x14] != 0) {
                    FUN_02040968(unaff_x19[0x14],0);
                    lVar29 = thunk_FUN_00d62348(*(undefined8 *)
                                                 UnityEngine_UIElements_StyleSheets_Syntax_Expression___TypeInfo
                                               );
                    if (lVar29 != 0) {
                      FUN_01298da0(lVar29,*(undefined8 *)puVar2);
                      lVar21 = FUN_00da4fb8(*(undefined8 *)
                                             Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                            in_stack_00000080._4_4_);
                      if (*(int *)(in_stack_000000a0 + 0x18) < 1) goto LAB_0140049c;
                      uVar16 = 0;
                      goto LAB_013ffcbc;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_01400718;
LAB_013ffc38:
  lVar29 = unaff_x19[0x21];
  iVar11 = iVar11 + 1;
  if (lVar29 == 0) goto LAB_01400718;
  goto LAB_013ffb00;
LAB_013ffcbc:
  FUN_0132138c(in_stack_000000a0,uVar16 & 0xffffffff,&stack0x000000f0,
               *(undefined8 *)StringLiteral_12558);
  lVar22 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
  if (lVar22 != 0) {
    lVar32 = *(long *)(lVar22 + 0xc0);
    uVar31 = *(undefined8 *)(lVar22 + 0xb0);
    uVar24 = FUN_014177c0(in_stack_00000088,uVar31,0,lVar32,unaff_x19[0x3c],lVar29,in_stack_00000090
                          ,*(undefined8 *)(lVar22 + 0x18));
    lVar23 = *(long *)(unaff_x25 + 0x10);
    if (lVar23 == 0) goto LAB_01400718;
    bVar9 = *(uint *)(lVar23 + 0x18) <= uVar16;
    if ((uVar24 & 1) != 0) {
      if (bVar9) goto LAB_0140071c;
      uVar18 = *(undefined8 *)(lVar23 + uVar16 * 8 + 0x20);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_02681b9c(uVar18,0,0);
      uVar34 = (undefined4)param_4;
      uVar12 = (undefined4)param_3;
      uVar33 = (undefined4)param_5;
      if ((uVar24 & 1) == 0) goto LAB_0140047c;
      plVar17 = (long *)FUN_013eae18();
      if (plVar17 != (long *)0x0) {
        lVar23 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar24 != 0) {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) ==
                *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
              puVar19 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_013ffdc0;
            }
            uVar24 = uVar24 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar24 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_00d59724(plVar17,*(long *)
                                        Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                               ,0);
LAB_013ffdc0:
        uVar24 = (*(code *)*puVar19)(plVar17,puVar19[1]);
        if ((uVar24 & 1) != 0) {
          if (lVar32 == 0) goto LAB_01400718;
          uVar15 = FUN_0266a58c(lVar32,0);
          *(undefined4 *)(lVar22 + 0x34) = uVar15;
        }
        lVar23 = *(long *)(lVar22 + 200);
        if ((int)unaff_x19[0x20] == -1) {
          if (lVar23 == 0) goto LAB_01400718;
          uVar15 = FUN_026664dc(lVar23,0);
          *(undefined4 *)(unaff_x19 + 0x20) = uVar15;
        }
        plVar17 = (long *)FUN_013eae18();
        if (plVar17 == (long *)0x0) goto LAB_01400718;
        lVar32 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar32 + 0x12a);
        if (uVar24 != 0) {
          piVar27 = (int *)(*(long *)(lVar32 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) ==
                *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
              puVar19 = (undefined8 *)(lVar32 + (long)(*piVar27 + 0x16) * 0x10 + 0x138);
              goto LAB_013ffe7c;
            }
            uVar24 = uVar24 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar24 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_00d59724(plVar17,*(long *)
                                        Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                               ,0x16);
LAB_013ffe7c:
        iVar11 = (*(code *)*puVar19)(plVar17,puVar19[1]);
        if (iVar11 == 0) {
          if (lVar23 == 0) goto LAB_01400718;
          lVar32 = unaff_x19[0x20];
          iVar11 = FUN_026664dc(lVar23,0);
          if (((int)lVar32 != iVar11) && (iVar11 = (**(code **)(*unaff_x19 + 0x4f8))(), 1 < iVar11))
          {
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_01400718;
            uVar18 = FUN_0268b6ac(*(long *)(lVar22 + 0x18),0);
            uVar18 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar18,
                                  *(undefined8 *)System_Net_TimerThread_TypeInfo,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar18,0);
          }
          uVar24 = FUN_013f40b0(*(undefined8 *)(lVar22 + 0x18),0);
          if (((uVar24 & 1) == 0) && (iVar11 = (**(code **)(*unaff_x19 + 0x4f8))(), 1 < iVar11)) {
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_01400718;
            uVar18 = FUN_0268b6ac(*(long *)(lVar22 + 0x18),0);
            uVar18 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar18,
                                  *(undefined8 *)StringLiteral_13309,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar18,0);
          }
          iVar11 = FUN_026664dc(lVar23,0);
          if ((iVar11 == -1) && (iVar11 = (**(code **)(*unaff_x19 + 0x4f8))(), 1 < iVar11)) {
            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_01400718;
            uVar18 = FUN_0268b6ac(*(long *)(lVar22 + 0x18),0);
            uVar18 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar18,
                                  *(undefined8 *)
                                   Method_Unity_XR_CoreUtils_Datums_DatumProperty<FloatAffordanceTheme,_FloatAffordanceThemeDatum>_get_Value__
                                  ,0);
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)StringLiteral_302);
            }
            FUN_02661754(uVar18,0);
          }
        }
        else if (lVar23 == 0) goto LAB_01400718;
        uVar15 = FUN_026664dc(lVar23,0);
        *(undefined4 *)(lVar22 + 0x48) = uVar15;
        uVar15 = FUN_013f4914(lVar23,0);
        *(undefined4 *)(lVar22 + 0x4c) = uVar15;
        *(undefined4 *)(lVar22 + 0x50) = uVar12;
        *(undefined4 *)(lVar22 + 0x54) = uVar34;
        *(undefined4 *)(lVar22 + 0x58) = uVar33;
        uVar24 = FUN_013fc098();
        if ((uVar24 & 1) == 0) goto LAB_014006c4;
        FUN_02667cd8(&stack0x000000f0,lVar23,0);
        in_stack_00000130 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
        in_stack_00000138 = in_stack_000000f8;
        in_stack_00000140 = in_stack_00000100;
        uVar33 = FUN_02687be0(&stack0x00000130,0);
        *(undefined4 *)(lVar22 + 0x5c) = uVar33;
        *(undefined4 *)(lVar22 + 0x60) = uVar12;
        *(undefined4 *)(lVar22 + 100) = uVar34;
        puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
        uVar18 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                              in_stack_00000080._4_4_);
        *(undefined8 *)(lVar22 + 0x78) = uVar18;
        uVar18 = FUN_00da4fb8(*(undefined8 *)puVar2,in_stack_00000080._4_4_);
        *(undefined8 *)(lVar22 + 0x70) = uVar18;
        *(undefined8 *)(lVar22 + 0xb0) = uVar31;
        lVar23 = (**(code **)(*unaff_x19 + 0x498))();
        if (lVar23 == 0) goto LAB_01400718;
        uVar24 = FUN_013e8cb8(lVar23,0);
        if (((uVar24 & 1) != 0) && (uVar24 = FUN_013fc75c(), (uVar24 & 1) == 0)) goto LAB_014006c4;
        plVar17 = (long *)FUN_013eae18();
        if (plVar17 == (long *)0x0) goto LAB_01400718;
        lVar23 = *plVar17;
        uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
        if (uVar24 != 0) {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) ==
                *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
              puVar19 = (undefined8 *)(lVar23 + (long)(*piVar27 + 0x24) * 0x10 + 0x138);
              goto LAB_014001b0;
            }
            uVar24 = uVar24 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar24 != 0);
        }
        puVar19 = (undefined8 *)
                  FUN_00d59724(plVar17,*(long *)
                                        Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                               ,0x24);
LAB_014001b0:
        iVar11 = (*(code *)*puVar19)(plVar17,puVar19[1]);
        if (iVar11 == 1) {
          if (unaff_x19[0x14] == 0) goto LAB_01400718;
          FUN_02040900(unaff_x19[0x14],0);
          if (unaff_x19[0x17] == 0) goto LAB_01400718;
          FUN_02040900(unaff_x19[0x17],0);
          plVar17 = (long *)unaff_x19[0x3a];
          if (plVar17 == (long *)0x0) goto LAB_01400718;
          lVar23 = *plVar17;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) ==
                  *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                 ) {
                puVar19 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
                goto 
                Meta_WitAi_Events_UnityEventListeners_AudioEventListener__get_OnMicStartedListening;
              }
              uVar24 = uVar24 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar24 != 0);
          }
          puVar19 = (undefined8 *)
                    FUN_00d59724(plVar17,*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                                 ,0);
Meta_WitAi_Events_UnityEventListeners_AudioEventListener__get_OnMicStartedListening:
          uVar24 = (*(code *)*puVar19)(plVar17,lVar22,puVar19[1]);
          if ((uVar24 & 1) == 0) goto LAB_014006c4;
          if (unaff_x19[0x17] == 0) goto LAB_01400718;
          FUN_02040968(unaff_x19[0x17],0);
          if (unaff_x19[0x14] == 0) goto LAB_01400718;
          FUN_02040968(unaff_x19[0x14],0);
        }
        plVar17 = (long *)FUN_013eae18();
        if (plVar17 != (long *)0x0) {
          lVar23 = *plVar17;
          uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
          if (uVar24 != 0) {
            piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) ==
                  *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
                puVar19 = (undefined8 *)(lVar23 + (long)(*piVar27 + 0x2a) * 0x10 + 0x138);
                goto LAB_014002e0;
              }
              uVar24 = uVar24 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar24 != 0);
          }
          puVar19 = (undefined8 *)
                    FUN_00d59724(plVar17,*(long *)
                                          Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                 ,0x2a);
LAB_014002e0:
          lVar23 = (*(code *)*puVar19)(plVar17,puVar19[1]);
          if (lVar23 == 0) {
LAB_014003a4:
            lVar23 = *(long *)(lVar22 + 0xd0);
            if (lVar23 != 0) {
              uVar13 = *(uint *)(lVar23 + 0x18);
              if (0 < (int)uVar13) {
                lVar32 = *(long *)(lVar22 + 0x80);
                uVar26 = 0;
                do {
                  if (lVar32 == 0) goto LAB_01400718;
                  if (*(uint *)(lVar32 + 0x18) <= uVar26) goto LAB_0140071c;
                  if (lVar21 == 0) goto LAB_01400718;
                  uVar1 = *(uint *)(lVar32 + (long)(int)uVar26 * 4 + 0x20);
                  if (*(uint *)(lVar21 + 0x18) <= uVar1) goto LAB_0140071c;
                  piVar27 = (int *)(lVar21 + (long)(int)uVar1 * 4 + 0x20);
                  if (uVar13 <= uVar26) goto LAB_0140071c;
                  lVar28 = *(long *)(lVar23 + (long)(int)uVar26 * 8 + 0x20);
                  if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x10), lVar28 == 0))
                  goto LAB_01400718;
                  uVar26 = uVar26 + 1;
                  *piVar27 = *piVar27 + *(int *)(lVar28 + 0x18);
                } while ((int)uVar26 < (int)uVar13);
              }
              if ((*(long *)(lVar22 + 0x18) != 0) &&
                 (lVar23 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                     (*(long *)(lVar22 + 0x18),0), lVar23 != 0)) {
                uVar31 = FUN_026a0144(&stack0x000000f0,lVar23,0);
                param_3 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
                in_stack_000000c8 = in_stack_00000108;
                in_stack_000000c0 = in_stack_00000100;
                in_stack_000000d8 = in_stack_00000118;
                in_stack_000000d0 = in_stack_00000110;
                in_stack_000000b8 = in_stack_000000f8;
                in_stack_000000e8 = in_stack_00000128;
                in_stack_000000e0 = in_stack_00000120;
                param_4 = in_stack_00000100;
                param_5 = in_stack_00000120;
                in_stack_000000b0 = param_3;
                bVar10 = FUN_014009f0(uVar31,&stack0x000000b0);
                *(byte *)(lVar22 + 0x69) = bVar10 & 1;
                goto LAB_0140047c;
              }
            }
          }
          else {
            uVar24 = FUN_013fd0d8();
            plVar17 = (long *)FUN_013eae18();
            if (plVar17 != (long *)0x0) {
              lVar23 = *plVar17;
              uVar25 = (ulong)*(ushort *)(lVar23 + 0x12a);
              if (uVar25 != 0) {
                piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar27 + -2) ==
                      *(long *)Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__) {
                    puVar19 = (undefined8 *)(lVar23 + (long)(*piVar27 + 0x2a) * 0x10 + 0x138);
                    goto LAB_01400368;
                  }
                  uVar25 = uVar25 - 1;
                  piVar27 = piVar27 + 4;
                } while (uVar25 != 0);
              }
              puVar19 = (undefined8 *)
                        FUN_00d59724(plVar17,*(long *)
                                              Method_System_Text_RegularExpressions_RegexParser_ScanCharEscape__
                                     ,0x2a);
LAB_01400368:
              uVar31 = (*(code *)*puVar19)(plVar17,puVar19[1]);
              if ((uVar24 & 1) == 0) {
                lVar23 = thunk_FUN_00d6225c(uVar31,*(undefined8 *)
                                                    System_Func<ParameterInfo,_Type>_TypeInfo);
                if (lVar23 != 0) goto LAB_014003a4;
                puVar19 = (undefined8 *)OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar19 = (undefined8 *)OVR_OpenVR_IVRCompositor__GetTrackingSpace_TypeInfo;
                }
              }
              else {
                lVar23 = thunk_FUN_00d6225c(uVar31,*(undefined8 *)PTR_DAT_033ee3c8);
                if (lVar23 != 0) goto LAB_014003a4;
                puVar19 = (undefined8 *)Method_System_Collections_Generic_List<Face>__ctor__;
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar19 = (undefined8 *)Method_System_Collections_Generic_List<Face>__ctor__;
                }
              }
              uVar31 = *puVar19;
LAB_014006bc:
              FUN_026610e4(uVar31,0);
              goto LAB_014006c4;
            }
          }
        }
      }
      goto LAB_01400718;
    }
    if (!bVar9) {
      lVar23 = lVar23 + uVar16 * 8;
LAB_013ff68c:
      *(undefined8 *)(lVar23 + 0x20) = 0;
      return 0;
    }
    goto LAB_0140071c;
  }
  goto LAB_01400718;
LAB_0140047c:
  uVar16 = uVar16 + 1;
  if ((long)*(int *)(in_stack_000000a0 + 0x18) <= (long)uVar16) goto LAB_0140049c;
  goto LAB_013ffcbc;
LAB_0140049c:
  lVar29 = *(long *)(unaff_x25 + 0x10);
  if (lVar29 != 0) {
    lVar21 = 4;
    do {
      uVar16 = lVar21 - 4;
      if ((long)(int)*(uint *)(lVar29 + 0x18) <= (long)uVar16) {
        uVar16 = FUN_01411e58();
        if ((uVar16 & 1) == 0) {
LAB_014006c4:
          uVar31 = 0;
        }
        else {
          uVar31 = 1;
          *(undefined4 *)(unaff_x19 + 2) = 1;
        }
        return uVar31;
      }
      if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0140071c;
      uVar31 = *(undefined8 *)(lVar29 + lVar21 * 8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_02681b9c(uVar31,0,0);
      if (((uVar24 & 1) != 0) && ((in_stack_00000060 & 0x100000000) != 0)) {
        lVar29 = *(long *)(unaff_x25 + 0x10);
        if (lVar29 == 0) break;
        if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0140071c;
        FUN_01434370(*(undefined8 *)(lVar29 + lVar21 * 8),0);
        iVar11 = (**(code **)(*unaff_x19 + 0x4f8))();
        if (iVar11 == 5) {
          lVar29 = *(long *)(unaff_x25 + 0x10);
          if (lVar29 == 0) break;
          if (*(uint *)(lVar29 + 0x18) <= uVar16) {
LAB_0140071c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar29 = *(long *)(lVar29 + lVar21 * 8);
          if (lVar29 == 0) break;
          uVar31 = FUN_0268b6ac(lVar29,0);
          lVar29 = *(long *)(unaff_x25 + 0x10);
          if (lVar29 == 0) break;
          if (*(uint *)(lVar29 + 0x18) <= uVar16) goto LAB_0140071c;
          lVar29 = *(long *)(lVar29 + lVar21 * 8);
          if (lVar29 == 0) break;
          in_stack_00000150._4_4_ = FUN_02681c0c(lVar29,0);
          uVar18 = FUN_0176eb1c((long)&stack0x00000150 + 4,0);
          uVar31 = FUN_0160073c(*(undefined8 *)PTR_DAT_033f6988,uVar31,
                                *(undefined8 *)PTR_DAT_033f6c08,uVar18,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)StringLiteral_302);
          }
          FUN_02660dac(uVar31,0);
        }
      }
      lVar29 = *(long *)(unaff_x25 + 0x10);
      lVar21 = lVar21 + 1;
    } while (lVar29 != 0);
  }
LAB_01400718:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


