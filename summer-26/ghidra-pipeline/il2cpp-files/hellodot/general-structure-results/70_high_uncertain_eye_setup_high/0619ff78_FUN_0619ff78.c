/*
FUNCTION_NAME: FUN_0619ff78
ENTRY_POINT: 0619ff78
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_0619ff78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  
  if ((DAT_06a83d54 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_32_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_55_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcb30);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_55_1_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_56_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_118_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_57_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_58_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_119_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_59_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_5_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_60_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_61_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_121_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_122_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_62_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_35_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_36_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_126_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_63_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_127_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_64_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_129_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_12_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_65_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_29_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_66_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c92b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_67_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_68_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_69_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_6_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_31_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_70_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06605f20);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_71_0_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_OVRP_1_72_0_TypeInfo);
    DAT_06a83d54 = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_126_0_TypeInfo;
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_126_0_TypeInfo
                           ), lVar8 != 0)) &&
     (lVar8 = FUN_0616f94c(lVar8,0), puVar1 = OVRPlugin_OVRP_1_5_0_TypeInfo, lVar8 != 0)) {
    FUN_0339769c(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
    puVar4 = OVRPlugin_OVRP_1_127_0_TypeInfo;
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                              *(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo),
        puVar5 = OVRPlugin_OVRP_1_55_1_TypeInfo, lVar8 != 0)) &&
       ((lVar8 = FUN_032065d4(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo), lVar8 != 0 &&
        (lVar8 = FUN_0616f94c(lVar8,0), lVar8 != 0)))) {
      FUN_0339769c(lVar8,*(undefined8 *)puVar1);
      if (((*(long *)(param_1 + 0x10) != 0) &&
          (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4),
          puVar1 = OVRPlugin_OVRP_1_56_0_TypeInfo, lVar8 != 0)) &&
         ((lVar8 = FUN_032065d4(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo), lVar8 != 0 &&
          (lVar8 = FUN_0616f94c(lVar8,0), puVar2 = OVRPlugin_OVRP_1_61_0_TypeInfo, lVar8 != 0)))) {
        FUN_0339769c(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
        if (((*(long *)(param_1 + 0x10) != 0) &&
            (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4), lVar8 != 0)) &&
           (lVar8 = FUN_032065d4(lVar8,*(undefined8 *)puVar5), lVar8 != 0)) {
          FUN_0616f94c(lVar8,0);
          if (((*(long *)(param_1 + 0x10) != 0) &&
              (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar4), lVar8 != 0))
             && ((lVar8 = FUN_032065d4(lVar8,*(undefined8 *)puVar1), lVar8 != 0 &&
                 (lVar8 = FUN_0616f94c(lVar8,0), lVar8 != 0)))) {
            FUN_0339769c(lVar8,*(undefined8 *)puVar2);
            if ((*(long *)(param_1 + 0x10) != 0) &&
               (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),*(undefined8 *)puVar3),
               puVar5 = OVRPlugin_OVRP_1_32_0_TypeInfo, puVar15 = (undefined8 *)PTR_DAT_065c92b8,
               puVar1 = PTR_DAT_065c89e8, lVar8 != 0)) {
              lVar8 = FUN_0616f94c(lVar8,0);
              plVar9 = (long *)FUN_02ce7ad4(*puVar15,3);
              lVar12 = *(long *)puVar1;
              uVar13 = *(undefined8 *)puVar5;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_02cd038c(lVar12);
              }
              lVar12 = FUN_04f3fb68(uVar13,0);
              if (plVar9 != (long *)0x0) {
                if ((lVar12 != 0) &&
                   (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0
                   )) {
LAB_061a0a70:
                  uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7b54(uVar13,0);
                }
                puVar5 = OVRPlugin_OVRP_1_66_0_TypeInfo;
                if ((int)plVar9[3] != 0) {
                  plVar9[4] = lVar12;
                  lVar12 = FUN_04f3fb68(*(undefined8 *)puVar5,0);
                  if ((lVar12 != 0) &&
                     (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar10 == 0)) goto LAB_061a0a70;
                  puVar5 = OVRPlugin_OVRP_1_55_0_TypeInfo;
                  if (1 < *(uint *)(plVar9 + 3)) {
                    plVar9[5] = lVar12;
                    lVar12 = FUN_04f3fb68(*(undefined8 *)puVar5,0);
                    if ((lVar12 != 0) &&
                       (lVar10 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar10 == 0)) goto LAB_061a0a70;
                    if (2 < *(uint *)(plVar9 + 3)) {
                      plVar9[6] = lVar12;
                      if (lVar8 != 0) {
                        FUN_06163f44(lVar8,plVar9,0);
                        if (((*(long *)(param_1 + 0x10) != 0) &&
                            (lVar8 = FUN_033aebfc(*(long *)(param_1 + 0x10),
                                                  *(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo,
                                                  *(undefined8 *)OVRPlugin_OVRP_1_35_0_TypeInfo),
                            lVar8 != 0)) &&
                           (lVar8 = FUN_0616f860(lVar8,*(undefined8 *)PTR_DAT_06605f20,0),
                           puVar5 = OVRPlugin_OVRP_1_60_0_TypeInfo, lVar8 != 0)) {
                          FUN_0339769c(lVar8,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
                          if ((*(long *)(param_1 + 0x10) != 0) &&
                             (lVar8 = OVRTask__Get<OVRResult<object,_Int32Enum>>
                                                (*(long *)(param_1 + 0x10),5,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_122_0_TypeInfo),
                             lVar8 != 0)) {
                            FUN_0339769c(lVar8,*(undefined8 *)puVar5);
                            puVar5 = OVRPlugin_OVRP_1_31_0_TypeInfo;
                            if (*(long *)(param_1 + 0x10) != 0) {
                              lVar8 = FUN_033aede4(0x40a00000,*(long *)(param_1 + 0x10),
                                                   *(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo);
                              lVar12 = *(long *)puVar5;
                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                thunk_FUN_02cd038c(lVar12);
                                lVar12 = *(long *)puVar5;
                              }
                              lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
                              if (lVar10 == 0) {
                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                  thunk_FUN_02cd038c(lVar12);
                                  lVar12 = *(long *)puVar5;
                                }
                                uVar13 = **(undefined8 **)(lVar12 + 0xb8);
                                lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcb30);
                                FUN_06182168(lVar10,uVar13,
                                             *(undefined8 *)OVRPlugin_OVRP_1_67_0_TypeInfo,0);
                                *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28) = lVar10;
                              }
                              if (lVar8 != 0) {
                                FUN_06163e60(lVar8,lVar10,0);
                                if (((*(long *)(param_1 + 0x10) != 0) &&
                                    (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                          *(undefined8 *)puVar4), lVar8 != 0)) &&
                                   (lVar8 = FUN_032065d4(lVar8,*(undefined8 *)
                                                                OVRPlugin_OVRP_1_118_0_TypeInfo),
                                   lVar8 != 0)) {
                                  lVar8 = FUN_0616f974(lVar8,0);
                                  lVar12 = *(long *)puVar5;
                                  if (*(int *)(lVar12 + 0xe0) == 0) {
                                    thunk_FUN_02cd038c(lVar12);
                                    lVar12 = *(long *)puVar5;
                                  }
                                  lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x30);
                                  if (lVar10 == 0) {
                                    if (*(int *)(lVar12 + 0xe0) == 0) {
                                      thunk_FUN_02cd038c(lVar12);
                                      lVar12 = *(long *)puVar5;
                                    }
                                    uVar13 = **(undefined8 **)(lVar12 + 0xb8);
                                    lVar10 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065dcb30);
                                    FUN_06182168(lVar10,uVar13,
                                                 *(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo,0);
                                    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30) = lVar10;
                                  }
                                  puVar2 = OVRPlugin_OVRP_1_12_0_TypeInfo;
                                  if (lVar8 != 0) {
                                    FUN_06163e60(lVar8,lVar10,0);
                                    uVar13 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
                                    thunk_FUN_05ef22b8(uVar13,0);
                                    uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
                                    thunk_FUN_05ef22b8(uVar11,0);
                                    puVar2 = OVRPlugin_OVRP_1_36_0_TypeInfo;
                                    if (((*(long *)(param_1 + 0x10) != 0) &&
                                        (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                              *(undefined8 *)
                                                               OVRPlugin_OVRP_1_36_0_TypeInfo),
                                        puVar6 = OVRPlugin_OVRP_1_59_0_TypeInfo, lVar8 != 0)) &&
                                       (lVar8 = FUN_0446d200(lVar8,*(undefined8 *)
                                                                    OVRPlugin_OVRP_1_71_0_TypeInfo,
                                                             *(undefined8 *)
                                                              OVRPlugin_OVRP_1_59_0_TypeInfo),
                                       lVar8 != 0)) {
                                      FUN_0616f92c(lVar8,0);
                                      if (((*(long *)(param_1 + 0x10) != 0) &&
                                          (lVar8 = FUN_033ac628(*(long *)(param_1 + 0x10),
                                                                *(undefined8 *)puVar2), lVar8 != 0))
                                         && (lVar8 = FUN_0446d200(lVar8,*(undefined8 *)
                                                                                                                                                  
                                                  OVRPlugin_OVRP_1_72_0_TypeInfo,
                                                  *(undefined8 *)puVar6), lVar8 != 0)) {
                                        FUN_0616f92c(lVar8,0);
                                        puVar2 = OVRPlugin_OVRP_1_121_0_TypeInfo;
                                        if (*(long *)(param_1 + 0x10) != 0) {
                                          lVar8 = FUN_033aebfc(*(long *)(param_1 + 0x10),uVar13,
                                                               *(undefined8 *)
                                                                OVRPlugin_OVRP_1_121_0_TypeInfo);
                                          lVar12 = *(long *)puVar5;
                                          if (*(int *)(lVar12 + 0xe0) == 0) {
                                            thunk_FUN_02cd038c(lVar12);
                                            lVar12 = *(long *)puVar5;
                                          }
                                          lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x40);
                                          if (lVar10 == 0) {
                                            if (*(int *)(lVar12 + 0xe0) == 0) {
                                              thunk_FUN_02cd038c(lVar12);
                                              lVar12 = *(long *)puVar5;
                                            }
                                            uVar14 = **(undefined8 **)(lVar12 + 0xb8);
                                            lVar10 = thunk_FUN_02cea894(*(undefined8 *)
                                                                         PTR_DAT_065dcb30);
                                            FUN_06182168(lVar10,uVar14,
                                                         *(undefined8 *)
                                                          OVRPlugin_OVRP_1_69_0_TypeInfo,0);
                                            *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40) =
                                                 lVar10;
                                            puVar15 = (undefined8 *)PTR_DAT_065c92b8;
                                          }
                                          if (lVar8 != 0) {
                                            FUN_06163e60(lVar8,lVar10,0);
                                            if (*(long *)(param_1 + 0x10) != 0) {
                                              lVar8 = FUN_033aebfc(*(long *)(param_1 + 0x10),uVar11,
                                                                   *(undefined8 *)puVar2);
                                              lVar12 = *(long *)puVar5;
                                              if (*(int *)(lVar12 + 0xe0) == 0) {
                                                thunk_FUN_02cd038c(lVar12);
                                                lVar12 = *(long *)puVar5;
                                              }
                                              lVar10 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x50);
                                              if (lVar10 == 0) {
                                                if (*(int *)(lVar12 + 0xe0) == 0) {
                                                  thunk_FUN_02cd038c(lVar12);
                                                  lVar12 = *(long *)puVar5;
                                                }
                                                uVar14 = **(undefined8 **)(lVar12 + 0xb8);
                                                lVar10 = thunk_FUN_02cea894(*(undefined8 *)
                                                                             PTR_DAT_065dcb30);
                                                FUN_06182168(lVar10,uVar14,
                                                             *(undefined8 *)
                                                              OVRPlugin_OVRP_1_6_0_TypeInfo,0);
                                                *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50)
                                                     = lVar10;
                                              }
                                              if (lVar8 != 0) {
                                                FUN_06163e60(lVar8,lVar10,0);
                                                puVar5 = OVRPlugin_OVRP_1_64_0_TypeInfo;
                                                if ((*(long *)(param_1 + 0x10) != 0) &&
                                                   (lVar8 = FUN_033b2e00(*(long *)(param_1 + 0x10),
                                                                         *(undefined8 *)
                                                                                                                                                    
                                                  OVRPlugin_OVRP_1_71_0_TypeInfo,
                                                  *(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo),
                                                  lVar8 != 0)) {
                                                  if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) ==
                                                      0) {
                                                    thunk_FUN_02cd038c();
                                                  }
                                                  uVar7 = FUN_05ef739c(0,uVar13,0);
                                                  FUN_0615c99c(uVar7 & 1,0);
                                                  if ((*(long *)(param_1 + 0x10) != 0) &&
                                                     (lVar8 = FUN_033b2e00(*(long *)(param_1 + 0x10)
                                                                           ,*(undefined8 *)
                                                                                                                                                          
                                                  OVRPlugin_OVRP_1_72_0_TypeInfo,
                                                  *(undefined8 *)puVar5), lVar8 != 0)) {
                                                    uVar7 = FUN_05ef739c(0,uVar11,0);
                                                    FUN_0615c99c(uVar7 & 1,0);
                                                    if ((*(long *)(param_1 + 0x10) != 0) &&
                                                       ((lVar8 = FUN_033ac628(*(long *)(param_1 +
                                                                                       0x10),
                                                                              *(undefined8 *)puVar3)
                                                        , lVar8 != 0 &&
                                                        (lVar8 = FUN_0616a930(lVar8,0,0), lVar8 != 0
                                                        )))) {
                                                      FUN_0616f94c(lVar8,0);
                                                      if ((*(long *)(param_1 + 0x10) != 0) &&
                                                         ((lVar8 = FUN_033ac628(*(long *)(param_1 +
                                                                                         0x10),
                                                                                *(undefined8 *)
                                                                                                                                                                  
                                                  OVRPlugin_OVRP_1_63_0_TypeInfo), lVar8 != 0 &&
                                                  (lVar8 = FUN_032065d4(lVar8,*(undefined8 *)
                                                                                                                                                              
                                                  OVRPlugin_OVRP_1_57_0_TypeInfo), lVar8 != 0)))) {
                                                    FUN_061691d0(lVar8,0);
                                                    if ((*(long *)(param_1 + 0x10) != 0) &&
                                                       ((lVar8 = FUN_033ac628(*(long *)(param_1 +
                                                                                       0x10),
                                                                              *(undefined8 *)puVar4)
                                                        , lVar8 != 0 &&
                                                        (lVar8 = FUN_032065d4(lVar8,*(undefined8 *)
                                                                                                                                                                          
                                                  OVRPlugin_OVRP_1_58_0_TypeInfo),
                                                  puVar3 = OVRPlugin_OVRP_1_129_0_TypeInfo,
                                                  lVar8 != 0)))) {
                                                    FUN_061691d0(lVar8,0);
                                                    lVar12 = *(long *)(param_1 + 0x10);
                                                    plVar9 = (long *)FUN_02ce7ad4(*puVar15,3);
                                                    lVar8 = *(long *)puVar1;
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    if (*(int *)(lVar8 + 0xe0) == 0) {
                                                      thunk_FUN_02cd038c(lVar8);
                                                    }
                                                    lVar8 = FUN_04f3fb68(uVar13,0);
                                                    if (plVar9 != (long *)0x0) {
                                                      if ((lVar8 != 0) &&
                                                         (lVar10 = thunk_FUN_02cea798(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
                                                  goto LAB_061a0a70;
                                                  puVar3 = OVRPlugin_OVRP_1_65_0_TypeInfo;
                                                  if ((int)plVar9[3] != 0) {
                                                    plVar9[4] = lVar8;
                                                    lVar8 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                                    if ((lVar8 != 0) &&
                                                       (lVar10 = thunk_FUN_02cea798(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
                                                  goto LAB_061a0a70;
                                                  puVar3 = OVRPlugin_OVRP_1_29_0_TypeInfo;
                                                  if (1 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[5] = lVar8;
                                                    lVar8 = FUN_04f3fb68(*(undefined8 *)puVar3,0);
                                                    if ((lVar8 != 0) &&
                                                       (lVar10 = thunk_FUN_02cea798(lVar8,*(
                                                  undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
                                                  goto LAB_061a0a70;
                                                  if (2 < *(uint *)(plVar9 + 3)) {
                                                    plVar9[6] = lVar8;
                                                    if ((((lVar12 != 0) &&
                                                         (lVar8 = FUN_0617bc20(lVar12,plVar9,0),
                                                         lVar8 != 0)) &&
                                                        (lVar8 = FUN_03397360(lVar8,*(undefined8 *)
                                                                                                                                                                          
                                                  OVRPlugin_OVRP_1_119_0_TypeInfo), lVar8 != 0)) &&
                                                  (lVar8 = FUN_0616a930(lVar8,0,0), lVar8 != 0)) {
                                                    FUN_0616f94c(lVar8,0);
                                                    FUN_061a0a84(param_1);
                                                    return;
                                                  }
                                                  goto LAB_061a0a68;
                                                  }
                                                  }
                                                  }
                                                  goto LAB_061a0a6c;
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
                      goto LAB_061a0a68;
                    }
                  }
                }
LAB_061a0a6c:
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c84();
              }
            }
          }
        }
      }
    }
  }
LAB_061a0a68:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


