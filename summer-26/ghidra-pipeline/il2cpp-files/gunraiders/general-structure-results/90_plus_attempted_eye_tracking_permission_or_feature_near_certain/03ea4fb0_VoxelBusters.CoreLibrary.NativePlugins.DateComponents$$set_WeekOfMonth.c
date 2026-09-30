/*
FUNCTION_NAME: VoxelBusters.CoreLibrary.NativePlugins.DateComponents$$set_WeekOfMonth
ENTRY_POINT: 03ea4fb0
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


void VoxelBusters_CoreLibrary_NativePlugins_DateComponents__set_WeekOfMonth(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined4 uVar15;
  undefined8 uStack0000000000000008;
  
  *(undefined1 *)(unaff_x22 + 0xdee) = 1;
  uStack0000000000000008 = 0;
  *(undefined4 *)(unaff_x19 + 0x3c8) = 0xffffffff;
  puVar5 = MQTTnet_Formatter_MqttPacketBuffer_TypeInfo;
  lVar8 = *unaff_x21;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar8 = *unaff_x21;
  }
  uVar15 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x28);
  *(undefined4 *)(unaff_x19 + 0x3f0) = 0x41900000;
  *(undefined4 *)(unaff_x19 + 0x3e0) = uVar15;
  puVar1 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar8 = *(long *)puVar5;
  }
  puVar11 = *(undefined4 **)(lVar8 + 0xb8);
  uVar15 = *puVar11;
  *(undefined8 *)(unaff_x19 + 0x3f8) = DAT_00b921b8;
  *(undefined4 *)(unaff_x19 + 0x3f4) = uVar15;
  *(undefined4 *)(unaff_x19 + 0x400) = puVar11[1];
  uVar12 = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(unaff_x19 + 0x448) = 0;
  *(undefined8 *)(unaff_x19 + 0x440) = 0;
  *(undefined8 *)(unaff_x19 + 0x410) = uVar12;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03f15048();
  FUN_03f17740();
  lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03f15048(lVar8,0);
  if (lVar8 != 0) {
    FUN_03f14d48(lVar8,*(undefined8 *)StringLiteral_11687,0);
    *(long *)(unaff_x19 + 0x438) = lVar8;
    FUN_03f17740(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38),0);
    uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x378);
    FUN_03f1e3ec(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x438),0);
    lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03f15048(lVar8,0);
    puVar4 = MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo;
    if (lVar8 != 0) {
      FUN_03f14d48(lVar8,*(undefined8 *)StringLiteral_11688,0);
      *(long *)(unaff_x19 + 0x418) = lVar8;
      FUN_03f17740(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
      lVar8 = *(long *)(unaff_x19 + 0x418);
      uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
      FUN_02b1ee9c();
      puVar3 = MQTTnet_MqttFactory_TypeInfo;
      if (lVar8 != 0) {
        FUN_02305eac(lVar8,uVar12,0,*(undefined8 *)MQTTnet_MqttFactory_TypeInfo);
        puVar7 = OVRFaceExpressions_TypeInfo;
        if (*(long *)(unaff_x19 + 0x418) != 0) {
          FUN_03f14d08(*(long *)(unaff_x19 + 0x418),1,0);
          lVar8 = *(long *)(unaff_x19 + 0x438);
          uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
          FUN_02b1ee9c();
          puVar7 = OVRGLTFAccessor_TypeInfo;
          if (lVar8 != 0) {
            FUN_02305eac(lVar8,uVar12,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
            lVar8 = *(long *)(unaff_x19 + 0x438);
            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
            FUN_02b1ee9c();
            if (lVar8 != 0) {
              FUN_02305eac(lVar8,uVar12,0,*(undefined8 *)OVREyeGaze_TypeInfo);
              if (*(long *)(unaff_x19 + 0x438) != 0) {
                FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),*(undefined8 *)(unaff_x19 + 0x418),0);
                lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                FUN_03f15048(lVar8,0);
                if (lVar8 != 0) {
                  FUN_03f14d48(lVar8,*(undefined8 *)StringLiteral_11604,0);
                  *(long *)(unaff_x19 + 0x430) = lVar8;
                  FUN_03f1bb6c(lVar8,1,0);
                  lVar8 = *(long *)(unaff_x19 + 0x430);
                  uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                  FUN_02b1ee9c();
                  if (lVar8 != 0) {
                    FUN_02305eac(lVar8,uVar12,0,*(undefined8 *)puVar3);
                    if (*(long *)(unaff_x19 + 0x430) != 0) {
                      FUN_03f17740(*(long *)(unaff_x19 + 0x430),
                                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40),0);
                      if (*(long *)(unaff_x19 + 0x430) != 0) {
                        FUN_03f11bcc(*(long *)(unaff_x19 + 0x430),2,0);
                        puVar7 = StringLiteral_11685;
                        puVar1 = MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo;
                        if (*(long *)(unaff_x19 + 0x418) != 0) {
                          FUN_03f1bbb8(*(long *)(unaff_x19 + 0x418),
                                       *(undefined8 *)(unaff_x19 + 0x430),0);
                          FUN_03ea5958();
                          uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                          FUN_0285e7cc();
                          lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                          FUN_03ea9d84(0,0x4f000000,lVar8,uVar12,0,0);
                          if (lVar8 != 0) {
                            FUN_03f1145c(lVar8,*(undefined8 *)StringLiteral_11686,0);
                            *(long *)(unaff_x19 + 0x420) = lVar8;
                            FUN_03f17740(lVar8,*(undefined8 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x60),0);
                            puVar6 = 
                            System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
                            if (*(long *)(unaff_x19 + 0x420) != 0) {
                              plVar9 = (long *)FUN_03f0d9bc(*(long *)(unaff_x19 + 0x420),0);
                              uVar12 = FUN_030d67d4(1,*(undefined8 *)puVar6);
                              puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                              if (plVar9 != (long *)0x0) {
                                lVar8 = *plVar9;
                                uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                if (uVar13 != 0) {
                                  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar14 + -2) ==
                                        *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                                      puVar10 = (undefined8 *)
                                                (lVar8 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
                                      goto LAB_03ea542c;
                                    }
                                    uVar13 = uVar13 - 1;
                                    piVar14 = piVar14 + 4;
                                  } while (uVar13 != 0);
                                }
                                puVar10 = (undefined8 *)
                                          FUN_01c72498(plVar9,*(long *)
                                                  Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                                  0x12);
LAB_03ea542c:
                                (*(code *)*puVar10)(plVar9,uVar12,puVar10[1]);
                                uStack0000000000000008 = *(undefined8 *)(unaff_x19 + 0x378);
                                FUN_03f1e3ec(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x420),0);
                                uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                FUN_0285e7cc();
                                lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                FUN_03ea9d84(0,0x4f000000,lVar8,uVar12,1,0);
                                if (lVar8 != 0) {
                                  FUN_03f1145c(lVar8,*(undefined8 *)StringLiteral_11689,0);
                                  *(long *)(unaff_x19 + 0x428) = lVar8;
                                  puVar1 = PTR_DAT_0422fad8;
                                  if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                     (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d0),
                                     lVar8 != 0)) {
                                    lVar8 = *(long *)(lVar8 + 0x480);
                                    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fad8);
                                    FUN_03245f44();
                                    puVar7 = StringLiteral_11671;
                                    if (lVar8 != 0) {
                                      FUN_027b8330(lVar8,uVar12,*(undefined8 *)StringLiteral_11671);
                                      if ((*(long *)(unaff_x19 + 0x428) != 0) &&
                                         (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x428) + 0x3d0),
                                         lVar8 != 0)) {
                                        lVar8 = *(long *)(lVar8 + 0x480);
                                        uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                        FUN_03245f44();
                                        if (lVar8 != 0) {
                                          FUN_027b8330(lVar8,uVar12,*(undefined8 *)puVar7);
                                          if (*(long *)(unaff_x19 + 0x420) != 0) {
                                            lVar8 = *(long *)(*(long *)(unaff_x19 + 0x420) + 0x3d8);
                                            uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                            FUN_03245f44();
                                            if ((lVar8 != 0) &&
                                               (lVar8 = *(long *)(lVar8 + 0x4a0), lVar8 != 0)) {
                                              FUN_03e12778(lVar8,uVar12,0);
                                              if (*(long *)(unaff_x19 + 0x420) != 0) {
                                                lVar8 = *(long *)(*(long *)(unaff_x19 + 0x420) +
                                                                 0x3e0);
                                                uVar12 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                FUN_03245f44();
                                                if ((lVar8 != 0) &&
                                                   (lVar8 = *(long *)(lVar8 + 0x4a0), lVar8 != 0)) {
                                                  FUN_03e12778(lVar8,uVar12,0);
                                                  if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x428) +
                                                                     0x3d8);
                                                    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_03245f44();
                                                    if ((lVar8 != 0) &&
                                                       (lVar8 = *(long *)(lVar8 + 0x4a0), lVar8 != 0
                                                       )) {
                                                      FUN_03e12778(lVar8,uVar12,0);
                                                      if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                        lVar8 = *(long *)(*(long *)(unaff_x19 +
                                                                                   0x428) + 0x3e0);
                                                        uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar1);
                                                        FUN_03245f44();
                                                        if ((lVar8 != 0) &&
                                                           (lVar8 = *(long *)(lVar8 + 0x4a0),
                                                           lVar8 != 0)) {
                                                          FUN_03e12778(lVar8,uVar12,0);
                                                          if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                            FUN_03f17740(*(long *)(unaff_x19 + 0x428
                                                                                  ),
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)puVar5
                                                                                    + 0xb8) + 0x68),
                                                                         0);
                                                            if (*(long *)(unaff_x19 + 0x428) != 0) {
                                                              plVar9 = (long *)FUN_03f0d9bc(*(long *
                                                  )(unaff_x19 + 0x428),0);
                                                  uVar12 = FUN_030d67d4(1,*(undefined8 *)puVar6);
                                                  if (plVar9 != (long *)0x0) {
                                                    lVar8 = *plVar9;
                                                    uVar13 = (ulong)*(ushort *)(lVar8 + 0x12e);
                                                    if (uVar13 != 0) {
                                                      piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar14 + -2) ==
                                                            *(long *)puVar2) {
                                                          puVar10 = (undefined8 *)
                                                                    (lVar8 + (long)(*piVar14 + 0x12)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_03ea56ec;
                                                        }
                                                        uVar13 = uVar13 - 1;
                                                        piVar14 = piVar14 + 4;
                                                      } while (uVar13 != 0);
                                                    }
                                                    puVar10 = (undefined8 *)
                                                              FUN_01c72498(plVar9,*(long *)puVar2,
                                                                           0x12);
LAB_03ea56ec:
                                                    (*(code *)*puVar10)(plVar9,uVar12,puVar10[1]);
                                                    puVar5 = StringLiteral_11672;
                                                    if (*(long *)(unaff_x19 + 0x438) != 0) {
                                                      FUN_03f1bbb8(*(long *)(unaff_x19 + 0x438),
                                                                   *(undefined8 *)
                                                                    (unaff_x19 + 0x428),0);
                                                      FUN_03ea4550();
                                                      thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                                      FUN_02b1ee9c();
                                                      FUN_02305eac();
                                                      lVar8 = *(long *)(unaff_x19 + 0x428);
                                                      uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_02b1ee9c();
                                                      if (lVar8 != 0) {
                                                        FUN_02305eac(lVar8,uVar12,0,
                                                                     *(undefined8 *)puVar3);
                                                        lVar8 = *(long *)(unaff_x19 + 0x420);
                                                        uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_02b1ee9c();
                                                        if (lVar8 != 0) {
                                                          FUN_02305eac(lVar8,uVar12,0,
                                                                       *(undefined8 *)puVar3);
                                                          *(undefined4 *)(unaff_x19 + 1000) =
                                                               0xbf800000;
                                                          FUN_03ea4064();
                                                          *(undefined4 *)(unaff_x19 + 0x3ec) =
                                                               0xbf800000;
                                                          FUN_03ea4278();
                                                          if ((*(long *)(unaff_x19 + 0x420) != 0) &&
                                                             (lVar8 = *(long *)(*(long *)(unaff_x19
                                                                                         + 0x420) +
                                                                               0x3d0), lVar8 != 0))
                                                          {
                                                            lVar8 = *(long *)(lVar8 + 0x448);
                                                            uVar12 = thunk_FUN_01c496e0(*(undefined8
                                                                                          *)puVar4);
                                                            FUN_02b1ee9c();
                                                            if (lVar8 != 0) {
                                                              FUN_02305eac(lVar8,uVar12,0,
                                                                           *(undefined8 *)puVar3);
                                                              if ((*(long *)(unaff_x19 + 0x428) != 0
                                                                  ) && (lVar8 = *(long *)(*(long *)(
                                                  unaff_x19 + 0x428) + 0x3d0), lVar8 != 0)) {
                                                    lVar8 = *(long *)(lVar8 + 0x448);
                                                    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_02b1ee9c();
                                                    puVar1 = OVRResources_TypeInfo;
                                                    puVar5 = 
                                                  MQTTnet_Packets_MqttUnsubAckPacket_TypeInfo;
                                                  if (lVar8 != 0) {
                                                    FUN_02305eac(lVar8,uVar12,0,
                                                                 *(undefined8 *)puVar3);
                                                    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a0) = uVar12;
                                                    uVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_02b1ee9c();
                                                    *(undefined8 *)(unaff_x19 + 0x4a8) = uVar12;
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


