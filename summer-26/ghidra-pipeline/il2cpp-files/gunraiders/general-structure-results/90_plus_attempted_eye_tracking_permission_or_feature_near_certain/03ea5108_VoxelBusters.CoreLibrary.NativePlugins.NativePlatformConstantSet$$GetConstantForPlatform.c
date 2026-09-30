/*
FUNCTION_NAME: VoxelBusters.CoreLibrary.NativePlugins.NativePlatformConstantSet$$GetConstantForPlatform
ENTRY_POINT: 03ea5108
PROGRAM: gunraiders-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_1
*/


void VoxelBusters_CoreLibrary_NativePlugins_NativePlatformConstantSet__GetConstantForPlatform
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x21;
  long lVar11;
  long unaff_x23;
  undefined8 *puVar12;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  
  puVar12 = *(undefined8 **)(unaff_x23 + 0xe50);
  FUN_03f14d48(param_1,param_2,0);
  *(undefined8 *)(unaff_x19 + 0x418) = unaff_x21;
  FUN_03f17740();
  lVar11 = *(long *)(unaff_x19 + 0x418);
  uVar6 = thunk_FUN_01c496e0(*puVar12);
  FUN_02b1ee9c();
  puVar3 = MQTTnet_MqttFactory_TypeInfo;
  if (lVar11 != 0) {
    FUN_02305eac(lVar11,uVar6,0,*(undefined8 *)MQTTnet_MqttFactory_TypeInfo);
    puVar1 = OVRFaceExpressions_TypeInfo;
    if (*(long *)(unaff_x19 + 0x418) != 0) {
      FUN_03f14d08(*(long *)(unaff_x19 + 0x418),1,0);
      lVar11 = *(long *)(unaff_x19 + 0x438);
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_02b1ee9c();
      puVar1 = OVRGLTFAccessor_TypeInfo;
      if (lVar11 != 0) {
        FUN_02305eac(lVar11,uVar6,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
        lVar11 = *(long *)(unaff_x19 + 0x438);
        uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_02b1ee9c();
        if (lVar11 != 0) {
          FUN_02305eac(lVar11,uVar6,0,*(undefined8 *)OVREyeGaze_TypeInfo);
          if (*(long *)(unaff_x19 + 0x438) != 0) {
            FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),*(undefined8 *)(unaff_x19 + 0x418),0);
            lVar11 = thunk_FUN_01c496e0(*unaff_x26);
            FUN_03f15048(lVar11,0);
            if (lVar11 != 0) {
              FUN_03f14d48(lVar11,*(undefined8 *)StringLiteral_11604,0);
              *(long *)(unaff_x19 + 0x430) = lVar11;
              FUN_03f1bb6c(lVar11,1,0);
              lVar11 = *(long *)(unaff_x19 + 0x430);
              uVar6 = thunk_FUN_01c496e0(*puVar12);
              FUN_02b1ee9c();
              if (lVar11 != 0) {
                FUN_02305eac(lVar11,uVar6,0,*(undefined8 *)puVar3);
                if (*(long *)(unaff_x19 + 0x430) != 0) {
                  FUN_03f17740(*(long *)(unaff_x19 + 0x430),
                               *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x40),0);
                  if (*(long *)(unaff_x19 + 0x430) != 0) {
                    FUN_03f11bcc(*(long *)(unaff_x19 + 0x430),2,0);
                    puVar5 = StringLiteral_11685;
                    puVar1 = MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo;
                    if (*(long *)(unaff_x19 + 0x418) != 0) {
                      FUN_03f1bbb8(*(long *)(unaff_x19 + 0x418),*(undefined8 *)(unaff_x19 + 0x430),0
                                  );
                      FUN_03ea5958();
                      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                      FUN_0285e7cc();
                      lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                      FUN_03ea9d84(0,0x4f000000,lVar11,uVar6,0,0);
                      if (lVar11 != 0) {
                        FUN_03f1145c(lVar11,*(undefined8 *)StringLiteral_11686,0);
                        *(long *)(unaff_x19 + 0x420) = lVar11;
                        FUN_03f17740(lVar11,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x60),0);
                        puVar4 = 
                        System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
                        if (*(long *)(unaff_x19 + 0x420) != 0) {
                          plVar7 = (long *)FUN_03f0d9bc(*(long *)(unaff_x19 + 0x420),0);
                          uVar6 = FUN_030d67d4(1,*(undefined8 *)puVar4);
                          puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                          if (plVar7 != (long *)0x0) {
                            lVar11 = *plVar7;
                            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                            if (uVar9 != 0) {
                              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar10 + -2) ==
                                    *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                                  puVar8 = (undefined8 *)
                                           (lVar11 + (long)(*piVar10 + 0x12) * 0x10 + 0x138);
                                  goto LAB_03ea542c;
                                }
                                uVar9 = uVar9 - 1;
                                piVar10 = piVar10 + 4;
                              } while (uVar9 != 0);
                            }
                            puVar8 = (undefined8 *)
                                     FUN_01c72498(plVar7,*(long *)
                                                  Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                                  0x12);
LAB_03ea542c:
                            (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]);
                            in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x378);
                            FUN_03f1e3ec(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x420),0);
                            uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                            FUN_0285e7cc();
                            lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                            FUN_03ea9d84(0,0x4f000000,lVar11,uVar6,1,0);
                            if (lVar11 != 0) {
                              FUN_03f1145c(lVar11,*(undefined8 *)StringLiteral_11689,0);
                              *(long *)(unaff_x19 + 0x428) = lVar11;
                              puVar1 = PTR_DAT_0422fad8;
                              if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                 (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d0),
                                 lVar11 != 0)) {
                                lVar11 = *(long *)(lVar11 + 0x480);
                                uVar6 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fad8);
                                FUN_03245f44();
                                puVar5 = StringLiteral_11671;
                                if (lVar11 != 0) {
                                  FUN_027b8330(lVar11,uVar6,*(undefined8 *)StringLiteral_11671);
                                  if ((*(long *)(unaff_x19 + 0x428) != 0) &&
                                     (lVar11 = *(long *)(*(long *)(unaff_x19 + 0x428) + 0x3d0),
                                     lVar11 != 0)) {
                                    lVar11 = *(long *)(lVar11 + 0x480);
                                    uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                    FUN_03245f44();
                                    if (lVar11 != 0) {
                                      FUN_027b8330(lVar11,uVar6,*(undefined8 *)puVar5);
                                      if (*(long *)(unaff_x19 + 0x420) != 0) {
                                        lVar11 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d8);
                                        uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                        FUN_03245f44();
                                        if ((lVar11 != 0) &&
                                           (lVar11 = *(long *)(lVar11 + 0x4a0), lVar11 != 0)) {
                                          FUN_03e12778(lVar11,uVar6,0);
                                          if (*(long *)(unaff_x19 + 0x420) != 0) {
                                            lVar11 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3e0)
                                            ;
                                            uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                            FUN_03245f44();
                                            if ((lVar11 != 0) &&
                                               (lVar11 = *(long *)(lVar11 + 0x4a0), lVar11 != 0)) {
                                              FUN_03e12778(lVar11,uVar6,0);
                                              if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                lVar11 = *(long *)(*(long *)(unaff_x19 + 0x428) +
                                                                  0x3d8);
                                                uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                FUN_03245f44();
                                                if ((lVar11 != 0) &&
                                                   (lVar11 = *(long *)(lVar11 + 0x4a0), lVar11 != 0)
                                                   ) {
                                                  FUN_03e12778(lVar11,uVar6,0);
                                                  if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                    lVar11 = *(long *)(*(long *)(unaff_x19 + 0x428)
                                                                      + 0x3e0);
                                                    uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_03245f44();
                                                    if ((lVar11 != 0) &&
                                                       (lVar11 = *(long *)(lVar11 + 0x4a0),
                                                       lVar11 != 0)) {
                                                      FUN_03e12778(lVar11,uVar6,0);
                                                      if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                        FUN_03f17740(*(long *)(unaff_x19 + 0x428),
                                                                     *(undefined8 *)
                                                                      (*(long *)(*unaff_x25 + 0xb8)
                                                                      + 0x68),0);
                                                        if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                          plVar7 = (long *)FUN_03f0d9bc(*(long *)(
                                                  unaff_x19 + 0x428),0);
                                                  uVar6 = FUN_030d67d4(1,*(undefined8 *)puVar4);
                                                  if (plVar7 != (long *)0x0) {
                                                    lVar11 = *plVar7;
                                                    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                                                    if (uVar9 != 0) {
                                                      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar10 + -2) ==
                                                            *(long *)puVar2) {
                                                          puVar8 = (undefined8 *)
                                                                   (lVar11 + (long)(*piVar10 + 0x12)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_03ea56ec;
                                                        }
                                                        uVar9 = uVar9 - 1;
                                                        piVar10 = piVar10 + 4;
                                                      } while (uVar9 != 0);
                                                    }
                                                    puVar8 = (undefined8 *)
                                                             FUN_01c72498(plVar7,*(long *)puVar2,
                                                                          0x12);
LAB_03ea56ec:
                                                    (*(code *)*puVar8)(plVar7,uVar6,puVar8[1]);
                                                    puVar1 = StringLiteral_11672;
                                                    if (*(long *)(unaff_x19 + 0x438) != 0) {
                                                      FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),
                                                                   *(undefined8 *)
                                                                    (unaff_x19 + 0x428),0);
                                                      FUN_03ea4550();
                                                      thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                      FUN_02b1ee9c();
                                                      FUN_02305eac();
                                                      lVar11 = *(long *)(unaff_x19 + 0x428);
                                                      uVar6 = thunk_FUN_01c496e0(*puVar12);
                                                      FUN_02b1ee9c();
                                                      if (lVar11 != 0) {
                                                        FUN_02305eac(lVar11,uVar6,0,
                                                                     *(undefined8 *)puVar3);
                                                        lVar11 = *(long *)(unaff_x19 + 0x420);
                                                        uVar6 = thunk_FUN_01c496e0(*puVar12);
                                                        FUN_02b1ee9c();
                                                        if (lVar11 != 0) {
                                                          FUN_02305eac(lVar11,uVar6,0,
                                                                       *(undefined8 *)puVar3);
                                                          *(undefined4 *)(unaff_x19 + 1000) =
                                                               0xbf800000;
                                                          FUN_03ea4064();
                                                          *(undefined4 *)(unaff_x19 + 0x3ec) =
                                                               0xbf800000;
                                                          FUN_03ea4278();
                                                          if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                                             (lVar11 = *(long *)(*(long *)(unaff_x19
                                                                                          + 0x420) +
                                                                                0x3d0), lVar11 != 0)
                                                             ) {
                                                            lVar11 = *(long *)(lVar11 + 0x448);
                                                            uVar6 = thunk_FUN_01c496e0(*puVar12);
                                                            FUN_02b1ee9c();
                                                            if (lVar11 != 0) {
                                                              FUN_02305eac(lVar11,uVar6,0,
                                                                           *(undefined8 *)puVar3);
                                                              if ((*(long *)(unaff_x19 + 0x428) != 0
                                                                  ) && (lVar11 = *(long *)(*(long *)
                                                  (unaff_x19 + 0x428) + 0x3d0), lVar11 != 0)) {
                                                    lVar11 = *(long *)(lVar11 + 0x448);
                                                    uVar6 = thunk_FUN_01c496e0(*puVar12);
                                                    FUN_02b1ee9c();
                                                    puVar5 = OVRResources_TypeInfo;
                                                    puVar1 = 
                                                  MQTTnet_Packets_MqttUnsubAckPacket_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    FUN_02305eac(lVar11,uVar6,0,
                                                                 *(undefined8 *)puVar3);
                                                    uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar5
                                                                              );
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a0) = uVar6;
                                                    uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar1
                                                                              );
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a8) = uVar6;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


