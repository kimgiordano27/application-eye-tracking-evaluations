/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$RestoreCursorState
ENTRY_POINT: 05e3aef8
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void UnityEngine_TextEditingUtilities__RestoreCursorState(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  puVar3 = PTR_DAT_065ce360;
  puVar1 = PTR_DAT_065c8a10;
  if ((*(byte *)(unaff_x20 + 0x3e2) & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06631c28);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_0662e788);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca3f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce360);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cebc0);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Protobuf_MessageParser<PlumageStyle>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<PlumageV2GenePearl>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<PoiCategorizationEntryTelemetry>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<PoiCategorizationOperationTelemetry>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x3e2) = 1;
  }
  plVar7 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04dc5d24(plVar7,0);
  plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar1,4);
  puVar5 = PTR_DAT_06631c28;
  puVar3 = PTR_DAT_065cebc0;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    puVar9 = (undefined8 *)FUN_036aac40(*(long *)(param_1 + 0x1a8),*(undefined8 *)PTR_DAT_06631c28);
    in_stack_00000068 = *puVar9;
    lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000068);
    if (plVar8 != (long *)0x0) {
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_05e3b524:
        uVar12 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
        FUN_02ce7b54(uVar12,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_05e3b520:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      plVar8[4] = lVar10;
      if (*(long *)(param_1 + 0x1b0) != 0) {
        puVar9 = (undefined8 *)FUN_036aac40(*(long *)(param_1 + 0x1b0),*(undefined8 *)puVar5);
        in_stack_00000060 = *puVar9;
        lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000060);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_05e3b524;
        if (*(uint *)(plVar8 + 3) < 2) goto LAB_05e3b520;
        plVar8[5] = lVar10;
        if (*(long *)(param_1 + 0x1b8) != 0) {
          puVar9 = (undefined8 *)FUN_036aac40(*(long *)(param_1 + 0x1b8),*(undefined8 *)puVar5);
          in_stack_00000058 = *puVar9;
          lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000058);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
          goto LAB_05e3b524;
          if (*(uint *)(plVar8 + 3) < 3) goto LAB_05e3b520;
          plVar8[6] = lVar10;
          if (*(long *)(param_1 + 0x1c0) != 0) {
            puVar9 = (undefined8 *)FUN_036aac40(*(long *)(param_1 + 0x1c0),*(undefined8 *)puVar5);
            in_stack_00000050 = *puVar9;
            lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000050);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
            goto LAB_05e3b524;
            puVar2 = Google_Protobuf_MessageParser<PlumageV2GenePearl>_TypeInfo;
            if (*(uint *)(plVar8 + 3) < 4) goto LAB_05e3b520;
            plVar8[7] = lVar10;
            uVar12 = FUN_04db9b3c(*(undefined8 *)puVar2,plVar8,0);
            if (plVar7 != (long *)0x0) {
              FUN_04dc7640(plVar7,uVar12,0);
              plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar1,4);
              if (*(long *)(param_1 + 0x1c8) != 0) {
                puVar9 = (undefined8 *)
                         FUN_036aac40(*(long *)(param_1 + 0x1c8),*(undefined8 *)puVar5);
                in_stack_00000048 = *puVar9;
                lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000048);
                if (plVar8 != (long *)0x0) {
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar11 == 0)) goto LAB_05e3b524;
                  if ((int)plVar8[3] == 0) goto LAB_05e3b520;
                  plVar8[4] = lVar10;
                  if (*(long *)(param_1 + 0x1d0) != 0) {
                    puVar9 = (undefined8 *)
                             FUN_036aac40(*(long *)(param_1 + 0x1d0),*(undefined8 *)puVar5);
                    in_stack_00000040 = *puVar9;
                    lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000040);
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar11 == 0)) goto LAB_05e3b524;
                    if (*(uint *)(plVar8 + 3) < 2) goto LAB_05e3b520;
                    plVar8[5] = lVar10;
                    puVar4 = PTR_DAT_0662e788;
                    puVar2 = PTR_DAT_065ca3f8;
                    if (*(long *)(param_1 + 0x1d8) != 0) {
                      puVar13 = (undefined4 *)
                                FUN_036a679c(*(long *)(param_1 + 0x1d8),
                                             *(undefined8 *)PTR_DAT_0662e788);
                      uStack000000000000003c = *puVar13;
                      lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,(long)&stack0x00000038 + 4);
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar11 == 0)) goto LAB_05e3b524;
                      if (*(uint *)(plVar8 + 3) < 3) goto LAB_05e3b520;
                      plVar8[6] = lVar10;
                      if (*(long *)(param_1 + 0x1e0) != 0) {
                        puVar13 = (undefined4 *)
                                  FUN_036a679c(*(long *)(param_1 + 0x1e0),*(undefined8 *)puVar4);
                        uStack0000000000000038 = *puVar13;
                        lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,&stack0x00000038);
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar11 == 0)) goto LAB_05e3b524;
                        puVar6 = Google_Protobuf_MessageParser<PlumageStyle>_TypeInfo;
                        if (*(uint *)(plVar8 + 3) < 4) goto LAB_05e3b520;
                        plVar8[7] = lVar10;
                        uVar12 = FUN_04db9b3c(*(undefined8 *)puVar6,plVar8,0);
                        FUN_04dc7640(plVar7,uVar12,0);
                        if (*(long *)(param_1 + 0x1e8) != 0) {
                          puVar9 = (undefined8 *)
                                   FUN_036aac40(*(long *)(param_1 + 0x1e8),*(undefined8 *)puVar5);
                          in_stack_00000030 = *puVar9;
                          uVar12 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000030);
                          if (*(long *)(param_1 + 0x1f0) != 0) {
                            puVar9 = (undefined8 *)
                                     FUN_036aac40(*(long *)(param_1 + 0x1f0),*(undefined8 *)puVar5);
                            in_stack_00000028 = *puVar9;
                            uVar14 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000028);
                            puVar6 = 
                            Google_Protobuf_MessageParser<PoiCategorizationOperationTelemetry>_TypeInfo
                            ;
                            if (*(long *)(param_1 + 0x1f8) != 0) {
                              puVar13 = (undefined4 *)
                                        FUN_036a679c(*(long *)(param_1 + 0x1f8),
                                                     *(undefined8 *)puVar4);
                              in_stack_00000020._4_4_ = *puVar13;
                              uVar15 = thunk_FUN_02cea4e8(*(undefined8 *)puVar2,
                                                          (long)&stack0x00000020 + 4);
                              uVar12 = FUN_04db9af8(*(undefined8 *)puVar6,uVar12,uVar14,uVar15,0);
                              FUN_04dc7640(plVar7,uVar12,0);
                              plVar8 = (long *)FUN_02ce7ad4(*(undefined8 *)puVar1,4);
                              if (*(long *)(param_1 + 0x200) != 0) {
                                puVar9 = (undefined8 *)
                                         FUN_036aac40(*(long *)(param_1 + 0x200),
                                                      *(undefined8 *)puVar5);
                                in_stack_00000018 = *puVar9;
                                lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,&stack0x00000018);
                                if (plVar8 != (long *)0x0) {
                                  if ((lVar10 != 0) &&
                                     (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)
                                                                          (*plVar8 + 0x40)),
                                     lVar11 == 0)) goto LAB_05e3b524;
                                  if ((int)plVar8[3] != 0) {
                                    plVar8[4] = lVar10;
                                    if (*(long *)(param_1 + 0x208) == 0) goto LAB_05e3b51c;
                                    puVar9 = (undefined8 *)
                                             FUN_036aac40(*(long *)(param_1 + 0x208),
                                                          *(undefined8 *)puVar5);
                                    in_stack_00000010 = *puVar9;
                                    lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,
                                                                &stack0x00000010);
                                    if ((lVar10 != 0) &&
                                       (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)
                                                                            (*plVar8 + 0x40)),
                                       lVar11 == 0)) goto LAB_05e3b524;
                                    if (1 < *(uint *)(plVar8 + 3)) {
                                      plVar8[5] = lVar10;
                                      if (*(long *)(param_1 + 0x210) == 0) goto LAB_05e3b51c;
                                      puVar9 = (undefined8 *)
                                               FUN_036aac40(*(long *)(param_1 + 0x210),
                                                            *(undefined8 *)puVar5);
                                      in_stack_00000008 = *puVar9;
                                      lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3,
                                                                  &stack0x00000008);
                                      if ((lVar10 != 0) &&
                                         (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)
                                                                              (*plVar8 + 0x40)),
                                         lVar11 == 0)) goto LAB_05e3b524;
                                      if (2 < *(uint *)(plVar8 + 3)) {
                                        plVar8[6] = lVar10;
                                        if (*(long *)(param_1 + 0x218) == 0) goto LAB_05e3b51c;
                                        FUN_036aac40(*(long *)(param_1 + 0x218),
                                                     *(undefined8 *)puVar5);
                                        lVar10 = thunk_FUN_02cea4e8(*(undefined8 *)puVar3);
                                        if ((lVar10 != 0) &&
                                           (lVar11 = thunk_FUN_02cea798(lVar10,*(undefined8 *)
                                                                                (*plVar8 + 0x40)),
                                           lVar11 == 0)) goto LAB_05e3b524;
                                        puVar1 = 
                                        Google_Protobuf_MessageParser<PoiCategorizationEntryTelemetry>_TypeInfo
                                        ;
                                        if (3 < *(uint *)(plVar8 + 3)) {
                                          plVar8[7] = lVar10;
                                          uVar12 = FUN_04db9b3c(*(undefined8 *)puVar1,plVar8,0);
                                          FUN_04dc7640(plVar7,uVar12,0);
                                          (**(code **)(*plVar7 + 0x168))
                                                    (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                                          return;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_05e3b520;
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
LAB_05e3b51c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


