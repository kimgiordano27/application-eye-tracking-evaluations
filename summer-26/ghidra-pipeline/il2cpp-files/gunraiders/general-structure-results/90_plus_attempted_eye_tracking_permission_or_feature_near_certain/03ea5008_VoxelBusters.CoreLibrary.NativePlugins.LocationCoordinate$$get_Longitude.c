/*
FUNCTION_NAME: VoxelBusters.CoreLibrary.NativePlugins.LocationCoordinate$$get_Longitude
ENTRY_POINT: 03ea5008
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


void VoxelBusters_CoreLibrary_NativePlugins_LocationCoordinate__get_Longitude(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x25;
  long *unaff_x26;
  undefined4 uVar14;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01c1d1e8();
  puVar10 = *(undefined4 **)(*unaff_x25 + 0xb8);
  uVar14 = *puVar10;
  *(undefined8 *)(unaff_x19 + 0x3f8) = DAT_00b921b8;
  *(undefined4 *)(unaff_x19 + 0x3f4) = uVar14;
  *(undefined4 *)(unaff_x19 + 0x400) = puVar10[1];
  uVar11 = *(undefined8 *)(puVar10 + 2);
  *(undefined8 *)(unaff_x19 + 0x448) = 0;
  *(undefined8 *)(unaff_x19 + 0x440) = 0;
  *(undefined8 *)(unaff_x19 + 0x410) = uVar11;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03f15048();
  FUN_03f17740();
  lVar7 = thunk_FUN_01c496e0(*unaff_x26);
  FUN_03f15048(lVar7,0);
  if (lVar7 != 0) {
    FUN_03f14d48(lVar7,*(undefined8 *)StringLiteral_11687,0);
    *(long *)(unaff_x19 + 0x438) = lVar7;
    FUN_03f17740(lVar7,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x38),0);
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x378);
    FUN_03f1e3ec(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x438),0);
    lVar7 = thunk_FUN_01c496e0(*unaff_x26);
    FUN_03f15048(lVar7,0);
    puVar4 = MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo;
    if (lVar7 != 0) {
      FUN_03f14d48(lVar7,*(undefined8 *)StringLiteral_11688,0);
      *(long *)(unaff_x19 + 0x418) = lVar7;
      FUN_03f17740(lVar7,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18),0);
      lVar7 = *(long *)(unaff_x19 + 0x418);
      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
      FUN_02b1ee9c();
      puVar3 = MQTTnet_MqttFactory_TypeInfo;
      if (lVar7 != 0) {
        FUN_02305eac(lVar7,uVar11,0,*(undefined8 *)MQTTnet_MqttFactory_TypeInfo);
        puVar1 = OVRFaceExpressions_TypeInfo;
        if (*(long *)(unaff_x19 + 0x418) != 0) {
          FUN_03f14d08(*(long *)(unaff_x19 + 0x418),1,0);
          lVar7 = *(long *)(unaff_x19 + 0x438);
          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
          FUN_02b1ee9c();
          puVar1 = OVRGLTFAccessor_TypeInfo;
          if (lVar7 != 0) {
            FUN_02305eac(lVar7,uVar11,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
            lVar7 = *(long *)(unaff_x19 + 0x438);
            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
            FUN_02b1ee9c();
            if (lVar7 != 0) {
              FUN_02305eac(lVar7,uVar11,0,*(undefined8 *)OVREyeGaze_TypeInfo);
              if (*(long *)(unaff_x19 + 0x438) != 0) {
                FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),*(undefined8 *)(unaff_x19 + 0x418),0);
                lVar7 = thunk_FUN_01c496e0(*unaff_x26);
                FUN_03f15048(lVar7,0);
                if (lVar7 != 0) {
                  FUN_03f14d48(lVar7,*(undefined8 *)StringLiteral_11604,0);
                  *(long *)(unaff_x19 + 0x430) = lVar7;
                  FUN_03f1bb6c(lVar7,1,0);
                  lVar7 = *(long *)(unaff_x19 + 0x430);
                  uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                  FUN_02b1ee9c();
                  if (lVar7 != 0) {
                    FUN_02305eac(lVar7,uVar11,0,*(undefined8 *)puVar3);
                    if (*(long *)(unaff_x19 + 0x430) != 0) {
                      FUN_03f17740(*(long *)(unaff_x19 + 0x430),
                                   *(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x40),0);
                      if (*(long *)(unaff_x19 + 0x430) != 0) {
                        FUN_03f11bcc(*(long *)(unaff_x19 + 0x430),2,0);
                        puVar6 = StringLiteral_11685;
                        puVar1 = MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo;
                        if (*(long *)(unaff_x19 + 0x418) != 0) {
                          FUN_03f1bbb8(*(long *)(unaff_x19 + 0x418),
                                       *(undefined8 *)(unaff_x19 + 0x430),0);
                          FUN_03ea5958();
                          uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                          FUN_0285e7cc();
                          lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                          FUN_03ea9d84(0,0x4f000000,lVar7,uVar11,0,0);
                          if (lVar7 != 0) {
                            FUN_03f1145c(lVar7,*(undefined8 *)StringLiteral_11686,0);
                            *(long *)(unaff_x19 + 0x420) = lVar7;
                            FUN_03f17740(lVar7,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x60),
                                         0);
                            puVar5 = 
                            System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
                            if (*(long *)(unaff_x19 + 0x420) != 0) {
                              plVar8 = (long *)FUN_03f0d9bc(*(long *)(unaff_x19 + 0x420),0);
                              uVar11 = FUN_030d67d4(1,*(undefined8 *)puVar5);
                              puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                              if (plVar8 != (long *)0x0) {
                                lVar7 = *plVar8;
                                uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                if (uVar12 != 0) {
                                  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar13 + -2) ==
                                        *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                                      puVar9 = (undefined8 *)
                                               (lVar7 + (long)(*piVar13 + 0x12) * 0x10 + 0x138);
                                      goto LAB_03ea542c;
                                    }
                                    uVar12 = uVar12 - 1;
                                    piVar13 = piVar13 + 4;
                                  } while (uVar12 != 0);
                                }
                                puVar9 = (undefined8 *)
                                         FUN_01c72498(plVar8,*(long *)
                                                  Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                                  0x12);
LAB_03ea542c:
                                (*(code *)*puVar9)(plVar8,uVar11,puVar9[1]);
                                in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x378);
                                FUN_03f1e3ec(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x420),0);
                                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                FUN_0285e7cc();
                                lVar7 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
                                FUN_03ea9d84(0,0x4f000000,lVar7,uVar11,1,0);
                                if (lVar7 != 0) {
                                  FUN_03f1145c(lVar7,*(undefined8 *)StringLiteral_11689,0);
                                  *(long *)(unaff_x19 + 0x428) = lVar7;
                                  puVar1 = PTR_DAT_0422fad8;
                                  if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                     (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d0),
                                     lVar7 != 0)) {
                                    lVar7 = *(long *)(lVar7 + 0x480);
                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fad8);
                                    FUN_03245f44();
                                    puVar6 = StringLiteral_11671;
                                    if (lVar7 != 0) {
                                      FUN_027b8330(lVar7,uVar11,*(undefined8 *)StringLiteral_11671);
                                      if ((*(long *)(unaff_x19 + 0x428) != 0) &&
                                         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x428) + 0x3d0),
                                         lVar7 != 0)) {
                                        lVar7 = *(long *)(lVar7 + 0x480);
                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                        FUN_03245f44();
                                        if (lVar7 != 0) {
                                          FUN_027b8330(lVar7,uVar11,*(undefined8 *)puVar6);
                                          if (*(long *)(unaff_x19 + 0x420) != 0) {
                                            lVar7 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d8);
                                            uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                            FUN_03245f44();
                                            if ((lVar7 != 0) &&
                                               (lVar7 = *(long *)(lVar7 + 0x4a0), lVar7 != 0)) {
                                              FUN_03e12778(lVar7,uVar11,0);
                                              if (*(long *)(unaff_x19 + 0x420) != 0) {
                                                lVar7 = *(long *)(*(long *)(unaff_x19 + 0x420) +
                                                                 0x3e0);
                                                uVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                FUN_03245f44();
                                                if ((lVar7 != 0) &&
                                                   (lVar7 = *(long *)(lVar7 + 0x4a0), lVar7 != 0)) {
                                                  FUN_03e12778(lVar7,uVar11,0);
                                                  if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                    lVar7 = *(long *)(*(long *)(unaff_x19 + 0x428) +
                                                                     0x3d8);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_03245f44();
                                                    if ((lVar7 != 0) &&
                                                       (lVar7 = *(long *)(lVar7 + 0x4a0), lVar7 != 0
                                                       )) {
                                                      FUN_03e12778(lVar7,uVar11,0);
                                                      if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                        lVar7 = *(long *)(*(long *)(unaff_x19 +
                                                                                   0x428) + 0x3e0);
                                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar1);
                                                        FUN_03245f44();
                                                        if ((lVar7 != 0) &&
                                                           (lVar7 = *(long *)(lVar7 + 0x4a0),
                                                           lVar7 != 0)) {
                                                          FUN_03e12778(lVar7,uVar11,0);
                                                          if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                            FUN_03f17740(*(long *)(unaff_x19 + 0x428
                                                                                  ),
                                                                         *(undefined8 *)
                                                                          (*(long *)(*unaff_x25 +
                                                                                    0xb8) + 0x68),0)
                                                            ;
                                                            if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                              plVar8 = (long *)FUN_03f0d9bc(*(long *
                                                  )(unaff_x19 + 0x428),0);
                                                  uVar11 = FUN_030d67d4(1,*(undefined8 *)puVar5);
                                                  if (plVar8 != (long *)0x0) {
                                                    lVar7 = *plVar8;
                                                    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                                    if (uVar12 != 0) {
                                                      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar13 + -2) ==
                                                            *(long *)puVar2) {
                                                          puVar9 = (undefined8 *)
                                                                   (lVar7 + (long)(*piVar13 + 0x12)
                                                                            * 0x10 + 0x138);
                                                          goto LAB_03ea56ec;
                                                        }
                                                        uVar12 = uVar12 - 1;
                                                        piVar13 = piVar13 + 4;
                                                      } while (uVar12 != 0);
                                                    }
                                                    puVar9 = (undefined8 *)
                                                             FUN_01c72498(plVar8,*(long *)puVar2,
                                                                          0x12);
LAB_03ea56ec:
                                                    (*(code *)*puVar9)(plVar8,uVar11,puVar9[1]);
                                                    puVar1 = StringLiteral_11672;
                                                    if (*(long *)(unaff_x19 + 0x438) != 0) {
                                                      FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),
                                                                   *(undefined8 *)
                                                                    (unaff_x19 + 0x428),0);
                                                      FUN_03ea4550();
                                                      thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                      FUN_02b1ee9c();
                                                      FUN_02305eac();
                                                      lVar7 = *(long *)(unaff_x19 + 0x428);
                                                      uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_02b1ee9c();
                                                      if (lVar7 != 0) {
                                                        FUN_02305eac(lVar7,uVar11,0,
                                                                     *(undefined8 *)puVar3);
                                                        lVar7 = *(long *)(unaff_x19 + 0x420);
                                                        uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_02b1ee9c();
                                                        if (lVar7 != 0) {
                                                          FUN_02305eac(lVar7,uVar11,0,
                                                                       *(undefined8 *)puVar3);
                                                          *(undefined4 *)(unaff_x19 + 1000) =
                                                               0xbf800000;
                                                          FUN_03ea4064();
                                                          *(undefined4 *)(unaff_x19 + 0x3ec) =
                                                               0xbf800000;
                                                          FUN_03ea4278();
                                                          if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                                             (lVar7 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x420) +
                                                                               0x3d0), lVar7 != 0))
                                                          {
                                                            lVar7 = *(long *)(lVar7 + 0x448);
                                                            uVar11 = thunk_FUN_01c496e0(*(undefined8
                                                                                          *)puVar4);
                                                            FUN_02b1ee9c();
                                                            if (lVar7 != 0) {
                                                              FUN_02305eac(lVar7,uVar11,0,
                                                                           *(undefined8 *)puVar3);
                                                              if ((*(long *)(unaff_x19 + 0x428) != 0
                                                                  ) && (lVar7 = *(long *)(*(long *)(
                                                  unaff_x19 + 0x428) + 0x3d0), lVar7 != 0)) {
                                                    lVar7 = *(long *)(lVar7 + 0x448);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_02b1ee9c();
                                                    puVar1 = OVRResources_TypeInfo;
                                                    puVar4 = 
                                                  MQTTnet_Packets_MqttUnsubAckPacket_TypeInfo;
                                                  if (lVar7 != 0) {
                                                    FUN_02305eac(lVar7,uVar11,0,
                                                                 *(undefined8 *)puVar3);
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a0) = uVar11;
                                                    uVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a8) = uVar11;
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


