/*
FUNCTION_NAME: FUN_06f6f324
ENTRY_POINT: 06f6f324
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_19;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long FUN_06f6f324(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_07626920;
  puVar1 = PTR_DAT_0759b3b8;
  if ((DAT_07a599b4 & 1) == 0) {
    FUN_031f20f4(System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo);
    FUN_031f20f4(PTR_DAT_075f3af0);
    FUN_031f20f4(OVRBone_TypeInfo);
    FUN_031f20f4(PTR_DAT_075dd8b8);
    FUN_031f20f4(OVRBoneCapsule_TypeInfo);
    FUN_031f20f4(PTR_DAT_076363c8);
    FUN_031f20f4(PTR_DAT_07626920);
    FUN_031f20f4(OVRBoundary_TypeInfo);
    FUN_031f20f4(System_NullConsoleDriver_TypeInfo);
    FUN_031f20f4(OVRBounded2D_TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b3b8);
    FUN_031f20f4(OVRDynamicObject_TypeInfo);
    FUN_031f20f4(PTR_DAT_07636428);
    FUN_031f20f4(OVRExternalComposition_TypeInfo);
    FUN_031f20f4(PTR_DAT_075a88c8);
    FUN_031f20f4(OVREyeGaze_TypeInfo);
    DAT_07a599b4 = 1;
  }
  plVar5 = (long *)FUN_031f21dc(*(undefined8 *)puVar1,2);
  uVar13 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
              (*(long *)(PTR_DAT_0759b388 + 0xe0));
  }
  lVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  if (plVar5 == (long *)0x0) goto LAB_06f6fc2c;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_0322f04c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_06f6fc34:
    uVar13 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar13,0);
  }
  puVar3 = OVRBounded2D_TypeInfo;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_0329bf60(plVar5 + 4,lVar6);
    lVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0322f04c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_06f6fc34;
    puVar4 = OVREyeGaze_TypeInfo;
    puVar3 = System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar6;
      thunk_FUN_0329bf60(plVar5 + 5,lVar6);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar6 = FUN_06f6b258(0x43480000,0x43480000,*(undefined8 *)puVar4,plVar5);
      plVar5 = (long *)FUN_031f21dc(*(undefined8 *)puVar1,2);
      lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar2,0);
      if (plVar5 == (long *)0x0) goto LAB_06f6fc2c;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_0322f04c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_06f6fc34;
      puVar2 = OVRBoundary_TypeInfo;
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar7;
        thunk_FUN_0329bf60(plVar5 + 4,lVar7);
        lVar7 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar2,0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_0322f04c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
        goto LAB_06f6fc34;
        puVar3 = System_NullConsoleDriver_TypeInfo;
        puVar2 = PTR_DAT_07636428;
        if (1 < *(uint *)(plVar5 + 3)) {
          plVar5[5] = lVar7;
          thunk_FUN_0329bf60(plVar5 + 5,lVar7);
          lVar7 = FUN_06f6b3b8(*(undefined8 *)puVar2,lVar6,plVar5);
          plVar5 = (long *)FUN_031f21dc(*(undefined8 *)puVar1,1);
          lVar8 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(undefined8 *)puVar3,0);
          if (plVar5 != (long *)0x0) {
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_0322f04c(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
            goto LAB_06f6fc34;
            puVar1 = PTR_DAT_075a88c8;
            if ((int)plVar5[3] == 0) goto LAB_06f6fc30;
            plVar5[4] = lVar8;
            thunk_FUN_0329bf60(plVar5 + 4,lVar8);
            lVar8 = FUN_06f6b3b8(*(undefined8 *)puVar1,lVar7,plVar5);
            local_70 = param_1[6];
            uStack_88 = param_1[3];
            local_90 = param_1[2];
            uStack_78 = param_1[5];
            uStack_80 = param_1[4];
            uStack_98 = param_1[1];
            local_a0 = *param_1;
            lVar9 = FUN_06f6cd08(&local_a0);
            puVar1 = PTR_DAT_075dd8b8;
            if (lVar9 != 0) {
              thunk_FUN_06e5f83c(lVar9,*(undefined8 *)OVRDynamicObject_TypeInfo,0);
              FUN_06f6b4e0(lVar9,lVar6);
              lVar10 = FUN_03e0d6e0(lVar9,*(undefined8 *)puVar1);
              if (DAT_07a3ca88 == '\0') {
                FUN_031f20f4(PTR_DAT_0759ba78);
                DAT_07a3ca88 = '\x01';
              }
              puVar1 = PTR_DAT_0759ba78;
              if (lVar10 != 0) {
                FUN_06e68e48(**(undefined4 **)(*(long *)PTR_DAT_0759ba78 + 0xb8),
                             (*(undefined4 **)(*(long *)PTR_DAT_0759ba78 + 0xb8))[1],lVar10,0);
                if (DAT_07a3fdd1 == '\0') {
                  FUN_031f20f4(PTR_DAT_0759ba78);
                  DAT_07a3fdd1 = '\x01';
                }
                FUN_06e68fd4(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
                             *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),lVar10,0);
                if (DAT_07a3ca88 == '\0') {
                  FUN_031f20f4(PTR_DAT_0759ba78);
                  DAT_07a3ca88 = '\x01';
                }
                FUN_06e69478(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                             (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar10,0);
                FUN_06e69224(lVar10,0);
                FUN_06e692ec(0,lVar10,0);
                local_b0 = param_1[6];
                uStack_c8 = param_1[3];
                local_d0 = param_1[2];
                uStack_b8 = param_1[5];
                uStack_c0 = param_1[4];
                uStack_d8 = param_1[1];
                local_e0 = *param_1;
                lVar10 = FUN_06f6cd08(&local_e0);
                puVar2 = PTR_DAT_076363c8;
                if (lVar10 != 0) {
                  thunk_FUN_06e5f83c(lVar10,*(undefined8 *)OVRExternalComposition_TypeInfo,0);
                  FUN_06f6b4e0(lVar10,lVar6);
                  lVar11 = FUN_03e0d6e0(lVar10,*(undefined8 *)puVar2);
                  if (lVar11 != 0) {
                    FUN_07157530(lVar11,2,1,0);
                    lVar11 = FUN_03e0d6e0(lVar10,*(undefined8 *)PTR_DAT_075dd8b8);
                    if (DAT_07a3fdd1 == '\0') {
                      FUN_031f20f4(PTR_DAT_0759ba78);
                      DAT_07a3fdd1 = '\x01';
                    }
                    if (lVar11 != 0) {
                      FUN_06e68e48(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c),lVar11,
                                   0);
                      if (DAT_07a3ca87 == '\0') {
                        FUN_031f20f4(PTR_DAT_0759ba78);
                        DAT_07a3ca87 = '\x01';
                      }
                      FUN_06e68fd4(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar11,0
                                  );
                      if (DAT_07a3ca87 == '\0') {
                        FUN_031f20f4(PTR_DAT_0759ba78);
                        DAT_07a3ca87 = '\x01';
                      }
                      FUN_06e69478(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar11,0
                                  );
                      uVar13 = FUN_06e69224(lVar11,0);
                      FUN_06e692ec(uVar13,0,lVar11,0);
                      if (lVar7 != 0) {
                        lVar11 = FUN_03e0d6e0(lVar7,*(undefined8 *)PTR_DAT_075dd8b8);
                        if (DAT_07a3ca88 == '\0') {
                          FUN_031f20f4(PTR_DAT_0759ba78);
                          DAT_07a3ca88 = '\x01';
                        }
                        if (lVar11 != 0) {
                          FUN_06e68e48(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                       (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar11,0);
                          if (DAT_07a3ca87 == '\0') {
                            FUN_031f20f4(PTR_DAT_0759ba78);
                            DAT_07a3ca87 = '\x01';
                          }
                          FUN_06e68fd4(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                                       lVar11,0);
                          if (DAT_07a3ca88 == '\0') {
                            FUN_031f20f4(PTR_DAT_0759ba78);
                            DAT_07a3ca88 = '\x01';
                          }
                          FUN_06e692ec(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                       (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar11,0);
                          if (DAT_07a402a6 == '\0') {
                            FUN_031f20f4(PTR_DAT_0759ba78);
                            DAT_07a402a6 = '\x01';
                          }
                          FUN_06e69478(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),
                                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14),
                                       lVar11,0);
                          if (lVar8 != 0) {
                            lVar8 = FUN_03e0d6e0(lVar8,*(undefined8 *)PTR_DAT_075dd8b8);
                            if (DAT_07a402a6 == '\0') {
                              FUN_031f20f4(PTR_DAT_0759ba78);
                              DAT_07a402a6 = '\x01';
                            }
                            if (lVar8 != 0) {
                              FUN_06e68e48(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10)
                                           ,*(undefined4 *)
                                             (*(long *)(*(long *)puVar1 + 0xb8) + 0x14),lVar8,0);
                              if (DAT_07a3ca87 == '\0') {
                                FUN_031f20f4(PTR_DAT_0759ba78);
                                DAT_07a3ca87 = '\x01';
                              }
                              FUN_06e68fd4(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                           *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),
                                           lVar8,0);
                              FUN_06e692ec(0,0x43960000,lVar8,0);
                              if (DAT_07a402a6 == '\0') {
                                FUN_031f20f4(PTR_DAT_0759ba78);
                                DAT_07a402a6 = '\x01';
                              }
                              FUN_06e69478(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10)
                                           ,*(undefined4 *)
                                             (*(long *)(*(long *)puVar1 + 0xb8) + 0x14),lVar8,0);
                              if ((lVar6 != 0) &&
                                 (lVar12 = FUN_03e0d6e0(lVar6,*(undefined8 *)OVRBoneCapsule_TypeInfo
                                                       ), puVar1 = PTR_DAT_075f3af0, lVar12 != 0)) {
                                *(long *)(lVar12 + 0x20) = lVar8;
                                thunk_FUN_0329bf60((long *)(lVar12 + 0x20),lVar8);
                                FUN_071578bc(lVar12,lVar11,0);
                                puVar2 = PTR_DAT_076363c8;
                                uVar13 = FUN_03e0d6e0(lVar9,*(undefined8 *)PTR_DAT_076363c8);
                                FUN_071579a8(lVar12,uVar13,0);
                                uVar13 = FUN_03e0d6e0(lVar10,*(undefined8 *)puVar2);
                                FUN_07157b48(lVar12,uVar13,0);
                                FUN_07157ce8(lVar12,2,0);
                                FUN_07157cf8(lVar12,2,0);
                                FUN_07157d08(0xc0400000,lVar12,0);
                                FUN_07157da0(0xc0400000,lVar12,0);
                                plVar5 = (long *)FUN_03e0d6e0(lVar6,*(undefined8 *)puVar1);
                                puVar2 = OVRBone_TypeInfo;
                                if (plVar5 != (long *)0x0) {
                                  FUN_06f6babc(plVar5,param_1[1]);
                                  FUN_06f6bd84(plVar5,1);
                                  lVar8 = *(long *)(*(long *)
                                                  System_Collections_Specialized_NotifyCollectionChangedAction_TypeInfo
                                                  + 0xb8);
                                  (**(code **)(*plVar5 + 0x2a8))
                                            (*(undefined4 *)(lVar8 + 0x30),
                                             *(undefined4 *)(lVar8 + 0x34),
                                             *(undefined4 *)(lVar8 + 0x38),
                                             *(undefined4 *)(lVar8 + 0x3c),plVar5,
                                             *(undefined8 *)(*plVar5 + 0x2b0));
                                  lVar8 = FUN_03e0d6e0(lVar7,*(undefined8 *)puVar2);
                                  if (lVar8 != 0) {
                                    FUN_071508f0(lVar8,0,0);
                                    lVar7 = FUN_03e0d6e0(lVar7,*(undefined8 *)puVar1);
                                    if (lVar7 != 0) {
                                      FUN_06f6babc(lVar7,param_1[6]);
                                      FUN_06f6bd84(lVar7,1);
                                      return lVar6;
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
LAB_06f6fc2c:
                    /* WARNING: Subroutine does not return */
          FUN_031f2390();
        }
      }
    }
  }
LAB_06f6fc30:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


