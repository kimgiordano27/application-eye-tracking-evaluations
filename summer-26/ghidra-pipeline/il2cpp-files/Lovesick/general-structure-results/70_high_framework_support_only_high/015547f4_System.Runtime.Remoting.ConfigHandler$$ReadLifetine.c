/*
FUNCTION_NAME: System.Runtime.Remoting.ConfigHandler$$ReadLifetine
ENTRY_POINT: 015547f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Runtime_Remoting_ConfigHandler__ReadLifetine(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  long *plVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  int unaff_w27;
  float unaff_s8;
  float unaff_s10;
  float fVar8;
  float unaff_s15;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000018 = 0;
  FUN_02687990(&stack0x00000018,0);
  FUN_0266afe0();
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  FUN_0266f0f8();
  uVar3 = FUN_0267c994(*unaff_x24,0);
  lVar4 = thunk_FUN_00d62348(*unaff_x23);
  puVar1 = Method_System_Collections_ObjectModel_Collection<IEnumerable<Claim>>__ctor__;
  if (lVar4 != 0) {
    fVar8 = (float)unaff_w27 / (float)unaff_w20;
    FUN_0267d648(lVar4,uVar3,0);
    FUN_0267dc2c(lVar4,*(undefined8 *)(unaff_x19 + 0x28),0);
    FUN_0267d974(0,0,0,0x3f800000,lVar4,0);
    FUN_0267decc(unaff_s15 - fVar8 * unaff_s15,unaff_s15 - (unaff_s8 / unaff_s10) * unaff_s15,lVar4,
                 0);
    FUN_0267e0c0(fVar8,unaff_s8 / unaff_s10,lVar4,0);
    *(long *)(unaff_x19 + 0x40) = lVar4;
    uVar3 = FUN_0268b6ac();
    uVar3 = FUN_015f5b28(uVar3,*(undefined8 *)puVar1,0);
    lVar4 = thunk_FUN_00d62348(*unaff_x26);
    if (lVar4 != 0) {
      FUN_0268afbc(lVar4,uVar3,0);
      lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar4,0);
      uVar3 = FUN_0268fd10();
      puVar1 = OVRPlugin_OVRP_1_93_0_TypeInfo;
      if (lVar5 != 0) {
        FUN_026a0040(lVar5,uVar3,0,0);
        lVar5 = FUN_010e5800(lVar4,*(undefined8 *)puVar1);
        puVar1 = UnityEngine_Pose___TypeInfo;
        if (lVar5 != 0) {
          FUN_02666150(lVar5,*(undefined8 *)(unaff_x19 + 0x38),0);
          lVar5 = FUN_010e5800(lVar4,*(undefined8 *)puVar1);
          *(long *)(unaff_x19 + 0x30) = lVar5;
          puVar1 = Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__;
          if (lVar5 != 0) {
            FUN_026689d4(lVar5,*(undefined8 *)(unaff_x19 + 0x40),0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar5 = FUN_0153b754(0);
            if (lVar5 != 0) {
              FUN_0268aca4(lVar4,*(undefined4 *)(lVar5 + 0x48),0);
              lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                (lVar4,0);
              puVar1 = StringLiteral_8403;
              if (lVar4 != 0) {
                FUN_0269fd98(fStack000000000000008c,lVar4,0);
                uVar3 = FUN_0268b6ac();
                uVar3 = FUN_015f5b28(uVar3,*(undefined8 *)puVar1,0);
                lVar4 = thunk_FUN_00d62348(*unaff_x26);
                if (lVar4 != 0) {
                  FUN_0268afbc(lVar4,uVar3,0);
                  lVar5 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                    (lVar4,0);
                  uVar3 = FUN_0268fd10();
                  puVar1 = 
                  Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_GetEnumerator__
                  ;
                  if (lVar5 != 0) {
                    FUN_026a0040(lVar5,uVar3,0,0);
                    lVar5 = FUN_010e5800(lVar4,*(undefined8 *)puVar1);
                    *(long *)(unaff_x19 + 0x20) = lVar5;
                    if (lVar5 != 0) {
                      *(undefined1 *)(lVar5 + 0x1c) = 1;
                      bVar2 = FUN_0269e8f0(0);
                      *(byte *)(lVar5 + 0xf8) = ~bVar2 & 1;
                      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
                         (plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xf0),
                         plVar7 != (long *)0x0)) {
                        lVar5 = *(long *)(unaff_x19 + 0x28);
                        if ((lVar5 != 0) &&
                           (lVar6 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar6 == 0)) {
                          uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar3,0);
                        }
                        if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        plVar7[4] = lVar5;
                        lVar5 = *(long *)(unaff_x19 + 0x20);
                        if (lVar5 != 0) {
                          *(undefined4 *)(lVar5 + 0x18) = 2;
                          lVar6 = FUN_0153b754(0);
                          if (lVar6 != 0) {
                            *(undefined4 *)(lVar5 + 0xd4) = *(undefined4 *)(lVar6 + 0x4c);
                            lVar5 = *(long *)(unaff_x19 + 0x20);
                            if (lVar5 != 0) {
                              *(undefined1 *)(lVar5 + 0xdc) = 1;
                              lVar5 = FUN_0268fd10(lVar5,0);
                              if (lVar5 != 0) {
                                FUN_0269fd98(fStack000000000000008c *
                                             ((float)unaff_w20 / (float)unaff_w27),
                                             uStack0000000000000088,0x3f800000,lVar5,0);
                                if (*(long *)(unaff_x19 + 0x20) != 0) {
                                  *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0xe4) = 1;
                                  lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                    (lVar4,0);
                                  if (((*(long *)(unaff_x19 + 0x50) != 0) &&
                                      (lVar5 = FUN_01551e1c(*(long *)(unaff_x19 + 0x50)), lVar5 != 0
                                      )) && (lVar4 != 0)) {
                                    FUN_026a0040(lVar4,*(undefined8 *)(lVar5 + 0x38),0,0);
                                    return;
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
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


