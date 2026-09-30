/*
FUNCTION_NAME: VoxelBusters.CoreLibrary.NativePlugins.PlatformConstant$$set_Value
ENTRY_POINT: 03ea51b8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 137
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void VoxelBusters_CoreLibrary_NativePlugins_PlatformConstant__set_Value(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  long lVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  
  puVar1 = OVRGLTFAccessor_TypeInfo;
  if (unaff_x21 != 0) {
    FUN_02305eac();
    lVar10 = *(long *)(unaff_x19 + 0x438);
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_02b1ee9c();
    if (lVar10 != 0) {
      FUN_02305eac(lVar10,uVar5,0,*(undefined8 *)OVREyeGaze_TypeInfo);
      if (*(long *)(unaff_x19 + 0x438) != 0) {
        FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),*(undefined8 *)(unaff_x19 + 0x418),0);
        lVar10 = thunk_FUN_01c496e0(*unaff_x26);
        FUN_03f15048(lVar10,0);
        if (lVar10 != 0) {
          FUN_03f14d48(lVar10,*(undefined8 *)StringLiteral_11604,0);
          *(long *)(unaff_x19 + 0x430) = lVar10;
          FUN_03f1bb6c(lVar10,1,0);
          lVar10 = *(long *)(unaff_x19 + 0x430);
          uVar5 = thunk_FUN_01c496e0(*unaff_x23);
          FUN_02b1ee9c();
          if (lVar10 != 0) {
            FUN_02305eac(lVar10,uVar5,0,*unaff_x24);
            if (*(long *)(unaff_x19 + 0x430) != 0) {
              FUN_03f17740(*(long *)(unaff_x19 + 0x430),
                           *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x40),0);
              if (*(long *)(unaff_x19 + 0x430) != 0) {
                FUN_03f11bcc(*(long *)(unaff_x19 + 0x430),2,0);
                puVar4 = StringLiteral_11685;
                puVar1 = MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo;
                if (*(long *)(unaff_x19 + 0x418) != 0) {
                  FUN_03f1bbb8(*(long *)(unaff_x19 + 0x418),*(undefined8 *)(unaff_x19 + 0x430),0);
                  FUN_03ea5958();
                  uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                  FUN_0285e7cc();
                  lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                  FUN_03ea9d84(0,0x4f000000,lVar10,uVar5,0,0);
                  if (lVar10 != 0) {
                    FUN_03f1145c(lVar10,*(undefined8 *)StringLiteral_11686,0);
                    *(long *)(unaff_x19 + 0x420) = lVar10;
                    FUN_03f17740(lVar10,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x60),0);
                    puVar3 = System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
                    if (*(long *)(unaff_x19 + 0x420) != 0) {
                      plVar6 = (long *)FUN_03f0d9bc(*(long *)(unaff_x19 + 0x420),0);
                      uVar5 = FUN_030d67d4(1,*(undefined8 *)puVar3);
                      puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                      if (plVar6 != (long *)0x0) {
                        lVar10 = *plVar6;
                        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                        if (uVar8 != 0) {
                          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar9 + -2) ==
                                *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                              puVar7 = (undefined8 *)
                                       (lVar10 + (long)(*piVar9 + 0x12) * 0x10 + 0x138);
                              goto LAB_03ea542c;
                            }
                            uVar8 = uVar8 - 1;
                            piVar9 = piVar9 + 4;
                          } while (uVar8 != 0);
                        }
                        puVar7 = (undefined8 *)
                                 FUN_01c72498(plVar6,*(long *)
                                                  Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                              0x12);
LAB_03ea542c:
                        (*(code *)*puVar7)(plVar6,uVar5,puVar7[1]);
                        in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x378);
                        FUN_03f1e3ec(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x420),0);
                        uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                        FUN_0285e7cc();
                        lVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                        FUN_03ea9d84(0,0x4f000000,lVar10,uVar5,1,0);
                        if (lVar10 != 0) {
                          FUN_03f1145c(lVar10,*(undefined8 *)StringLiteral_11689,0);
                          *(long *)(unaff_x19 + 0x428) = lVar10;
                          puVar1 = PTR_DAT_0422fad8;
                          if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                             (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d0), lVar10 != 0)
                             ) {
                            lVar10 = *(long *)(lVar10 + 0x480);
                            uVar5 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fad8);
                            FUN_03245f44();
                            puVar4 = StringLiteral_11671;
                            if (lVar10 != 0) {
                              FUN_027b8330(lVar10,uVar5,*(undefined8 *)StringLiteral_11671);
                              if ((*(long *)(unaff_x19 + 0x428) != 0) &&
                                 (lVar10 = *(long *)(*(long *)(unaff_x19 + 0x428) + 0x3d0),
                                 lVar10 != 0)) {
                                lVar10 = *(long *)(lVar10 + 0x480);
                                uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                FUN_03245f44();
                                if (lVar10 != 0) {
                                  FUN_027b8330(lVar10,uVar5,*(undefined8 *)puVar4);
                                  if (*(long *)(unaff_x19 + 0x420) != 0) {
                                    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d8);
                                    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                    FUN_03245f44();
                                    if ((lVar10 != 0) &&
                                       (lVar10 = *(long *)(lVar10 + 0x4a0), lVar10 != 0)) {
                                      FUN_03e12778(lVar10,uVar5,0);
                                      if (*(long *)(unaff_x19 + 0x420) != 0) {
                                        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3e0);
                                        uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                        FUN_03245f44();
                                        if ((lVar10 != 0) &&
                                           (lVar10 = *(long *)(lVar10 + 0x4a0), lVar10 != 0)) {
                                          FUN_03e12778(lVar10,uVar5,0);
                                          if (*(long *)(unaff_x19 + 0x428) != 0) {
                                            lVar10 = *(long *)(*(long *)(unaff_x19 + 0x428) + 0x3d8)
                                            ;
                                            uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                            FUN_03245f44();
                                            if ((lVar10 != 0) &&
                                               (lVar10 = *(long *)(lVar10 + 0x4a0), lVar10 != 0)) {
                                              FUN_03e12778(lVar10,uVar5,0);
                                              if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                lVar10 = *(long *)(*(long *)(unaff_x19 + 0x428) +
                                                                  0x3e0);
                                                uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                FUN_03245f44();
                                                if ((lVar10 != 0) &&
                                                   (lVar10 = *(long *)(lVar10 + 0x4a0), lVar10 != 0)
                                                   ) {
                                                  FUN_03e12778(lVar10,uVar5,0);
                                                  if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                    FUN_03f17740(*(long *)(unaff_x19 + 0x428),
                                                                 *(undefined8 *)
                                                                  (*(long *)(*unaff_x25 + 0xb8) +
                                                                  0x68),0);
                                                    if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                      plVar6 = (long *)FUN_03f0d9bc(*(long *)(
                                                  unaff_x19 + 0x428),0);
                                                  uVar5 = FUN_030d67d4(1,*(undefined8 *)puVar3);
                                                  if (plVar6 != (long *)0x0) {
                                                    lVar10 = *plVar6;
                                                    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                                    if (uVar8 != 0) {
                                                      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar9 + -2) ==
                                                            *(long *)puVar2) {
                                                          puVar7 = (undefined8 *)
                                                                   (lVar10 + (long)(*piVar9 + 0x12)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_03ea56ec;
                                                        }
                                                        uVar8 = uVar8 - 1;
                                                        piVar9 = piVar9 + 4;
                                                      } while (uVar8 != 0);
                                                    }
                                                    puVar7 = (undefined8 *)
                                                             FUN_01c72498(plVar6,*(long *)puVar2,
                                                                          0x12);
LAB_03ea56ec:
                                                    (*(code *)*puVar7)(plVar6,uVar5,puVar7[1]);
                                                    puVar1 = StringLiteral_11672;
                                                    if (*(long *)(unaff_x19 + 0x438) != 0) {
                                                      FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),
                                                                   *(undefined8 *)
                                                                    (unaff_x19 + 0x428),0);
                                                      FUN_03ea4550();
                                                      thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                      FUN_02b1ee9c();
                                                      FUN_02305eac();
                                                      lVar10 = *(long *)(unaff_x19 + 0x428);
                                                      uVar5 = thunk_FUN_01c496e0(*unaff_x23);
                                                      FUN_02b1ee9c();
                                                      if (lVar10 != 0) {
                                                        FUN_02305eac(lVar10,uVar5,0,*unaff_x24);
                                                        lVar10 = *(long *)(unaff_x19 + 0x420);
                                                        uVar5 = thunk_FUN_01c496e0(*unaff_x23);
                                                        FUN_02b1ee9c();
                                                        if (lVar10 != 0) {
                                                          FUN_02305eac(lVar10,uVar5,0,*unaff_x24);
                                                          *(undefined4 *)(unaff_x19 + 1000) =
                                                               0xbf800000;
                                                          FUN_03ea4064();
                                                          *(undefined4 *)(unaff_x19 + 0x3ec) =
                                                               0xbf800000;
                                                          FUN_03ea4278();
                                                          if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                                             (lVar10 = *(long *)(*(long *)(unaff_x19
                                                                                          + 0x420) +
                                                                                0x3d0), lVar10 != 0)
                                                             ) {
                                                            lVar10 = *(long *)(lVar10 + 0x448);
                                                            uVar5 = thunk_FUN_01c496e0(*unaff_x23);
                                                            FUN_02b1ee9c();
                                                            if (lVar10 != 0) {
                                                              FUN_02305eac(lVar10,uVar5,0,*unaff_x24
                                                                          );
                                                              if ((*(long *)(unaff_x19 + 0x428) != 0
                                                                  ) && (lVar10 = *(long *)(*(long *)
                                                  (unaff_x19 + 0x428) + 0x3d0), lVar10 != 0)) {
                                                    lVar10 = *(long *)(lVar10 + 0x448);
                                                    uVar5 = thunk_FUN_01c496e0(*unaff_x23);
                                                    FUN_02b1ee9c();
                                                    puVar4 = OVRResources_TypeInfo;
                                                    puVar1 = 
                                                  MQTTnet_Packets_MqttUnsubAckPacket_TypeInfo;
                                                  if (lVar10 != 0) {
                                                    FUN_02305eac(lVar10,uVar5,0,*unaff_x24);
                                                    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar4
                                                                              );
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a0) = uVar5;
                                                    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a8) = uVar5;
                                                    if (DAT_0452d6e8 == '\0') {
                                                      FUN_01c5d288(PTR_DAT_042301a8);
                                                      DAT_0452d6e8 = '\x01';
                                                    }
                                                    FUN_03ea3c90(**(undefined4 **)
                                                                   (*(long *)PTR_DAT_042301a8 + 0xb8
                                                                   ),(*(undefined4 **)
                                                                       (*(long *)PTR_DAT_042301a8 +
                                                                       0xb8))[1]);
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
  FUN_01c5d4a4();
}


