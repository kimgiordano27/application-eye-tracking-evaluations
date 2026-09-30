/*
FUNCTION_NAME: FUN_03ea4db0
ENTRY_POINT: 03ea4db0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 129
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_03ea4db0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined8 local_68;
  
  puVar1 = System_ReflectionOnlyType_TypeInfo;
  if ((DAT_04542dee & 1) == 0) {
    FUN_01c5d288(MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fad8);
    FUN_01c5d288(StringLiteral_11669);
    FUN_01c5d288(StringLiteral_11664);
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(MQTTnet_MqttFactory_TypeInfo);
    FUN_01c5d288(StringLiteral_11670);
    FUN_01c5d288(StringLiteral_11671);
    FUN_01c5d288(OVRFaceExpressions_TypeInfo);
    FUN_01c5d288(MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo);
    FUN_01c5d288(OVRResources_TypeInfo);
    FUN_01c5d288(StringLiteral_11672);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(MQTTnet_Packets_MqttUnsubAckPacket_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(StringLiteral_11673);
    FUN_01c5d288(StringLiteral_11674);
    FUN_01c5d288(StringLiteral_11675);
    FUN_01c5d288(StringLiteral_11676);
    FUN_01c5d288(StringLiteral_11677);
    FUN_01c5d288(StringLiteral_11678);
    FUN_01c5d288(StringLiteral_11679);
    FUN_01c5d288(StringLiteral_11680);
    FUN_01c5d288(StringLiteral_11681);
    FUN_01c5d288(StringLiteral_11682);
    FUN_01c5d288(StringLiteral_11683);
    FUN_01c5d288(StringLiteral_11684);
    FUN_01c5d288(MQTTnet_Formatter_MqttPacketBuffer_TypeInfo);
    FUN_01c5d288(StringLiteral_11685);
    FUN_01c5d288(System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo);
    FUN_01c5d288(System_ReflectionOnlyType_TypeInfo);
    FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
    FUN_01c5d288(StringLiteral_11686);
    FUN_01c5d288(StringLiteral_11687);
    FUN_01c5d288(StringLiteral_11688);
    FUN_01c5d288(StringLiteral_11689);
    FUN_01c5d288(StringLiteral_11604);
    DAT_04542dee = 1;
  }
  local_68 = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0xffffffff;
  puVar5 = MQTTnet_Formatter_MqttPacketBuffer_TypeInfo;
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar9 = *(long *)puVar1;
  }
  uVar16 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x28);
  *(undefined4 *)(param_1 + 0x3f0) = 0x41900000;
  *(undefined4 *)(param_1 + 0x3e0) = uVar16;
  puVar1 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar9 = *(long *)puVar5;
  }
  puVar12 = *(undefined4 **)(lVar9 + 0xb8);
  uVar16 = *puVar12;
  *(undefined8 *)(param_1 + 0x3f8) = DAT_00b921b8;
  *(undefined4 *)(param_1 + 0x3f4) = uVar16;
  *(undefined4 *)(param_1 + 0x400) = puVar12[1];
  uVar13 = *(undefined8 *)(puVar12 + 2);
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x410) = uVar13;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03f15048(param_1,0);
  FUN_03f17740(param_1,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),0);
  lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03f15048(lVar9,0);
  if (lVar9 != 0) {
    FUN_03f14d48(lVar9,*(undefined8 *)StringLiteral_11687,0);
    *(long *)(param_1 + 0x438) = lVar9;
    FUN_03f17740(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38),0);
    local_68 = *(undefined8 *)(param_1 + 0x378);
    FUN_03f1e3ec(&local_68,*(undefined8 *)(param_1 + 0x438),0);
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03f15048(lVar9,0);
    puVar6 = StringLiteral_11675;
    puVar4 = MQTTnet_Diagnostics_MqttNetNullLogger_TypeInfo;
    if (lVar9 != 0) {
      FUN_03f14d48(lVar9,*(undefined8 *)StringLiteral_11688,0);
      *(long *)(param_1 + 0x418) = lVar9;
      FUN_03f17740(lVar9,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),0);
      lVar9 = *(long *)(param_1 + 0x418);
      uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
      FUN_02b1ee9c(uVar13,param_1,*(undefined8 *)puVar6,0);
      puVar3 = MQTTnet_MqttFactory_TypeInfo;
      if (lVar9 != 0) {
        FUN_02305eac(lVar9,uVar13,0,*(undefined8 *)MQTTnet_MqttFactory_TypeInfo);
        puVar2 = StringLiteral_11673;
        puVar7 = OVRFaceExpressions_TypeInfo;
        if (*(long *)(param_1 + 0x418) != 0) {
          FUN_03f14d08(*(long *)(param_1 + 0x418),1,0);
          lVar9 = *(long *)(param_1 + 0x438);
          uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
          FUN_02b1ee9c(uVar13,param_1,*(undefined8 *)puVar2,0);
          puVar2 = StringLiteral_11674;
          puVar7 = OVRGLTFAccessor_TypeInfo;
          if (lVar9 != 0) {
            FUN_02305eac(lVar9,uVar13,0,*(undefined8 *)OVRExternalComposition_TypeInfo);
            lVar9 = *(long *)(param_1 + 0x438);
            uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
            FUN_02b1ee9c(uVar13,param_1,*(undefined8 *)puVar2,0);
            if (lVar9 != 0) {
              FUN_02305eac(lVar9,uVar13,0,*(undefined8 *)OVREyeGaze_TypeInfo);
              if (*(long *)(param_1 + 0x438) != 0) {
                FUN_03f1bbb8(*(long *)(param_1 + 0x438),*(undefined8 *)(param_1 + 0x418),0);
                lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                FUN_03f15048(lVar9,0);
                if (lVar9 != 0) {
                  FUN_03f14d48(lVar9,*(undefined8 *)StringLiteral_11604,0);
                  *(long *)(param_1 + 0x430) = lVar9;
                  FUN_03f1bb6c(lVar9,1,0);
                  lVar9 = *(long *)(param_1 + 0x430);
                  uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                  FUN_02b1ee9c(uVar13,param_1,*(undefined8 *)puVar6,0);
                  if (lVar9 != 0) {
                    FUN_02305eac(lVar9,uVar13,0,*(undefined8 *)puVar3);
                    if (*(long *)(param_1 + 0x430) != 0) {
                      FUN_03f17740(*(long *)(param_1 + 0x430),
                                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40),0);
                      if (*(long *)(param_1 + 0x430) != 0) {
                        FUN_03f11bcc(*(long *)(param_1 + 0x430),2,0);
                        puVar7 = StringLiteral_11685;
                        puVar6 = StringLiteral_11682;
                        puVar1 = MQTTnet_Client_MqttClientOptionsBuilder_TypeInfo;
                        if (*(long *)(param_1 + 0x418) != 0) {
                          FUN_03f1bbb8(*(long *)(param_1 + 0x418),*(undefined8 *)(param_1 + 0x430),0
                                      );
                          FUN_03ea5958(param_1,param_2);
                          uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                          FUN_0285e7cc(uVar13,param_1,*(undefined8 *)puVar6,0);
                          lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                          FUN_03ea9d84(0,0x4f000000,lVar9,uVar13,0,0);
                          if (lVar9 != 0) {
                            FUN_03f1145c(lVar9,*(undefined8 *)StringLiteral_11686,0);
                            *(long *)(param_1 + 0x420) = lVar9;
                            FUN_03f17740(lVar9,*(undefined8 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x60),0);
                            puVar6 = 
                            System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
                            if (*(long *)(param_1 + 0x420) != 0) {
                              plVar10 = (long *)FUN_03f0d9bc(*(long *)(param_1 + 0x420),0);
                              uVar13 = FUN_030d67d4(1,*(undefined8 *)puVar6);
                              puVar8 = StringLiteral_11683;
                              puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                              if (plVar10 != (long *)0x0) {
                                lVar9 = *plVar10;
                                uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                if (uVar14 != 0) {
                                  piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar15 + -2) ==
                                        *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                                      puVar11 = (undefined8 *)
                                                (lVar9 + (long)(*piVar15 + 0x12) * 0x10 + 0x138);
                                      goto LAB_03ea542c;
                                    }
                                    uVar14 = uVar14 - 1;
                                    piVar15 = piVar15 + 4;
                                  } while (uVar14 != 0);
                                }
                                puVar11 = (undefined8 *)
                                          FUN_01c72498(plVar10,*(long *)
                                                  Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                                  0x12);
LAB_03ea542c:
                                (*(code *)*puVar11)(plVar10,uVar13,puVar11[1]);
                                local_68 = *(undefined8 *)(param_1 + 0x378);
                                FUN_03f1e3ec(&local_68,*(undefined8 *)(param_1 + 0x420),0);
                                uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                FUN_0285e7cc(uVar13,param_1,*(undefined8 *)puVar8,0);
                                lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
                                FUN_03ea9d84(0,0x4f000000,lVar9,uVar13,1,0);
                                if (lVar9 != 0) {
                                  FUN_03f1145c(lVar9,*(undefined8 *)StringLiteral_11689,0);
                                  *(long *)(param_1 + 0x428) = lVar9;
                                  puVar7 = StringLiteral_11684;
                                  puVar1 = PTR_DAT_0422fad8;
                                  if ((*(long *)(param_1 + 0x420) != 0) &&
                                     (lVar9 = *(long *)(*(long *)(param_1 + 0x420) + 0x3d0),
                                     lVar9 != 0)) {
                                    lVar9 = *(long *)(lVar9 + 0x480);
                                    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422fad8);
                                    FUN_03245f44(uVar13,param_1,*(undefined8 *)puVar7,0);
                                    puVar8 = StringLiteral_11671;
                                    if (lVar9 != 0) {
                                      FUN_027b8330(lVar9,uVar13,*(undefined8 *)StringLiteral_11671);
                                      if ((*(long *)(param_1 + 0x428) != 0) &&
                                         (lVar9 = *(long *)(*(long *)(param_1 + 0x428) + 0x3d0),
                                         lVar9 != 0)) {
                                        lVar9 = *(long *)(lVar9 + 0x480);
                                        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                        FUN_03245f44(uVar13,param_1,*(undefined8 *)puVar7,0);
                                        if (lVar9 != 0) {
                                          FUN_027b8330(lVar9,uVar13,*(undefined8 *)puVar8);
                                          if (*(long *)(param_1 + 0x420) != 0) {
                                            lVar9 = *(long *)(*(long *)(param_1 + 0x420) + 0x3d8);
                                            uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                            FUN_03245f44(uVar13,param_1,*(undefined8 *)puVar7,0);
                                            if ((lVar9 != 0) &&
                                               (lVar9 = *(long *)(lVar9 + 0x4a0), lVar9 != 0)) {
                                              FUN_03e12778(lVar9,uVar13,0);
                                              if (*(long *)(param_1 + 0x420) != 0) {
                                                lVar9 = *(long *)(*(long *)(param_1 + 0x420) + 0x3e0
                                                                 );
                                                uVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                                                FUN_03245f44(uVar13,param_1,*(undefined8 *)puVar7,0)
                                                ;
                                                if ((lVar9 != 0) &&
                                                   (lVar9 = *(long *)(lVar9 + 0x4a0), lVar9 != 0)) {
                                                  FUN_03e12778(lVar9,uVar13,0);
                                                  if (*(long *)(param_1 + 0x428) != 0) {
                                                    lVar9 = *(long *)(*(long *)(param_1 + 0x428) +
                                                                     0x3d8);
                                                    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_03245f44(uVar13,param_1,
                                                                 *(undefined8 *)puVar7,0);
                                                    if ((lVar9 != 0) &&
                                                       (lVar9 = *(long *)(lVar9 + 0x4a0), lVar9 != 0
                                                       )) {
                                                      FUN_03e12778(lVar9,uVar13,0);
                                                      if (*(long *)(param_1 + 0x428) != 0) {
                                                        lVar9 = *(long *)(*(long *)(param_1 + 0x428)
                                                                         + 0x3e0);
                                                        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar1);
                                                        FUN_03245f44(uVar13,param_1,
                                                                     *(undefined8 *)puVar7,0);
                                                        if ((lVar9 != 0) &&
                                                           (lVar9 = *(long *)(lVar9 + 0x4a0),
                                                           lVar9 != 0)) {
                                                          FUN_03e12778(lVar9,uVar13,0);
                                                          if (*(long *)(param_1 + 0x428) != 0) {
                                                            FUN_03f17740(*(long *)(param_1 + 0x428),
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)puVar5
                                                                                    + 0xb8) + 0x68),
                                                                         0);
                                                            if (*(long *)(param_1 + 0x428) != 0) {
                                                              plVar10 = (long *)FUN_03f0d9bc(*(long 
                                                  *)(param_1 + 0x428),0);
                                                  uVar13 = FUN_030d67d4(1,*(undefined8 *)puVar6);
                                                  if (plVar10 != (long *)0x0) {
                                                    lVar9 = *plVar10;
                                                    uVar14 = (ulong)*(ushort *)(lVar9 + 0x12e);
                                                    if (uVar14 != 0) {
                                                      piVar15 = (int *)(*(long *)(lVar9 + 0xb0) + 8)
                                                      ;
                                                      do {
                                                        if (*(long *)(piVar15 + -2) ==
                                                            *(long *)puVar2) {
                                                          puVar11 = (undefined8 *)
                                                                    (lVar9 + (long)(*piVar15 + 0x12)
                                                                             * 0x10 + 0x138);
                                                          goto LAB_03ea56ec;
                                                        }
                                                        uVar14 = uVar14 - 1;
                                                        piVar15 = piVar15 + 4;
                                                      } while (uVar14 != 0);
                                                    }
                                                    puVar11 = (undefined8 *)
                                                              FUN_01c72498(plVar10,*(long *)puVar2,
                                                                           0x12);
LAB_03ea56ec:
                                                    (*(code *)*puVar11)(plVar10,uVar13,puVar11[1]);
                                                    puVar7 = StringLiteral_11680;
                                                    puVar6 = StringLiteral_11679;
                                                    puVar5 = StringLiteral_11672;
                                                    puVar1 = StringLiteral_11670;
                                                    if (*(long *)(param_1 + 0x438) != 0) {
                                                      FUN_03f1bbb8(*(long *)(param_1 + 0x438),
                                                                   *(undefined8 *)(param_1 + 0x428),
                                                                   0);
                                                      FUN_03ea4550(param_1,2);
                                                      uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar5);
                                                      FUN_02b1ee9c(uVar13,param_1,
                                                                   *(undefined8 *)puVar6,0);
                                                      FUN_02305eac(param_1,uVar13,0,
                                                                   *(undefined8 *)puVar1);
                                                      lVar9 = *(long *)(param_1 + 0x428);
                                                      uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                   puVar4);
                                                      FUN_02b1ee9c(uVar13,param_1,
                                                                   *(undefined8 *)puVar7,0);
                                                      if (lVar9 != 0) {
                                                        FUN_02305eac(lVar9,uVar13,0,
                                                                     *(undefined8 *)puVar3);
                                                        lVar9 = *(long *)(param_1 + 0x420);
                                                        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                     puVar4);
                                                        FUN_02b1ee9c(uVar13,param_1,
                                                                     *(undefined8 *)puVar7,0);
                                                        if (lVar9 != 0) {
                                                          FUN_02305eac(lVar9,uVar13,0,
                                                                       *(undefined8 *)puVar3);
                                                          *(undefined4 *)(param_1 + 1000) =
                                                               0xbf800000;
                                                          FUN_03ea4064(param_1);
                                                          *(undefined4 *)(param_1 + 0x3ec) =
                                                               0xbf800000;
                                                          FUN_03ea4278(param_1);
                                                          puVar1 = StringLiteral_11676;
                                                          if ((*(long *)(param_1 + 0x420) != 0) &&
                                                             (lVar9 = *(long *)(*(long *)(param_1 +
                                                                                         0x420) +
                                                                               0x3d0), lVar9 != 0))
                                                          {
                                                            lVar9 = *(long *)(lVar9 + 0x448);
                                                            uVar13 = thunk_FUN_01c496e0(*(undefined8
                                                                                          *)puVar4);
                                                            FUN_02b1ee9c(uVar13,param_1,
                                                                         *(undefined8 *)puVar1,0);
                                                            if (lVar9 != 0) {
                                                              FUN_02305eac(lVar9,uVar13,0,
                                                                           *(undefined8 *)puVar3);
                                                              puVar1 = StringLiteral_11681;
                                                              if ((*(long *)(param_1 + 0x428) != 0)
                                                                 && (lVar9 = *(long *)(*(long *)(
                                                  param_1 + 0x428) + 0x3d0), lVar9 != 0)) {
                                                    lVar9 = *(long *)(lVar9 + 0x448);
                                                    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_02b1ee9c(uVar13,param_1,
                                                                 *(undefined8 *)puVar1,0);
                                                    puVar6 = StringLiteral_11678;
                                                    puVar4 = StringLiteral_11677;
                                                    puVar5 = OVRResources_TypeInfo;
                                                    puVar1 = 
                                                  MQTTnet_Packets_MqttUnsubAckPacket_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    FUN_02305eac(lVar9,uVar13,0,
                                                                 *(undefined8 *)puVar3);
                                                    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_02b1ee9c(uVar13,param_1,
                                                                 *(undefined8 *)puVar4,0);
                                                    *(undefined8 *)(param_1 + 0x4a0) = uVar13;
                                                    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                                                                 puVar1);
                                                    FUN_02b1ee9c(uVar13,param_1,
                                                                 *(undefined8 *)puVar6,0);
                                                    *(undefined8 *)(param_1 + 0x4a8) = uVar13;
                                                    if (DAT_0452d6e8 == '\0') {
                                                      FUN_01c5d288(PTR_DAT_042301a8);
                                                      DAT_0452d6e8 = '\x01';
                                                    }
                                                    FUN_03ea3c90(**(undefined4 **)
                                                                   (*(long *)PTR_DAT_042301a8 + 0xb8
                                                                   ),(*(undefined4 **)
                                                                       (*(long *)PTR_DAT_042301a8 +
                                                                       0xb8))[1],param_1);
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


