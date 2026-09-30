/*
FUNCTION_NAME: UnityEngine.SceneManagement.Scene$$GetRootGameObjectsInternal
ENTRY_POINT: 05f7fb00
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_SceneManagement_Scene__GetRootGameObjectsInternal(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  
  plVar6 = (long *)FUN_02d60934();
  puVar4 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  puVar2 = PTR_DAT_06762360;
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    puVar7 = (undefined8 *)
             FUN_037b9bf0(*(long *)(unaff_x20 + 0x1a8),*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo
                         );
    in_stack_00000078 = *puVar7;
    lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000078);
    if (plVar6 != (long *)0x0) {
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_05f80108:
        uVar11 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar11,0);
      }
      if ((int)plVar6[3] == 0) {
LAB_05f80104:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar6[4] = lVar8;
      thunk_FUN_02dd37b4(plVar6 + 4,lVar8);
      if (*(long *)(unaff_x20 + 0x1b0) != 0) {
        puVar7 = (undefined8 *)FUN_037b9bf0(*(long *)(unaff_x20 + 0x1b0),*(undefined8 *)puVar4);
        in_stack_00000068 = *puVar7;
        lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000068);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
        goto LAB_05f80108;
        if (*(uint *)(plVar6 + 3) < 2) goto LAB_05f80104;
        plVar6[5] = lVar8;
        thunk_FUN_02dd37b4(plVar6 + 5,lVar8);
        if (*(long *)(unaff_x20 + 0x1b8) != 0) {
          puVar7 = (undefined8 *)FUN_037b9bf0(*(long *)(unaff_x20 + 0x1b8),*(undefined8 *)puVar4);
          in_stack_00000060 = *puVar7;
          lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000060);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
          goto LAB_05f80108;
          if (*(uint *)(plVar6 + 3) < 3) goto LAB_05f80104;
          plVar6[6] = lVar8;
          thunk_FUN_02dd37b4(plVar6 + 6,lVar8);
          if (*(long *)(unaff_x20 + 0x1c0) != 0) {
            puVar7 = (undefined8 *)FUN_037b9bf0(*(long *)(unaff_x20 + 0x1c0),*(undefined8 *)puVar4);
            in_stack_00000058 = *puVar7;
            lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000058);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
            goto LAB_05f80108;
            puVar3 = Method_System_Linq_Enumerable_ToList<JsonSchemaModel>__;
            if (*(uint *)(plVar6 + 3) < 4) goto LAB_05f80104;
            plVar6[7] = lVar8;
            thunk_FUN_02dd37b4(plVar6 + 7,lVar8);
            FUN_04e8e72c(*(undefined8 *)puVar3,plVar6,0);
            if (unaff_x19 != (long *)0x0) {
              FUN_04e97bc4();
              plVar6 = (long *)FUN_02d60934(*unaff_x25,4);
              if (*(long *)(unaff_x20 + 0x1c8) != 0) {
                puVar7 = (undefined8 *)
                         FUN_037b9bf0(*(long *)(unaff_x20 + 0x1c8),*(undefined8 *)puVar4);
                in_stack_00000050 = *puVar7;
                lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000050);
                if (plVar6 != (long *)0x0) {
                  if ((lVar8 != 0) &&
                     (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)
                     ) goto LAB_05f80108;
                  if ((int)plVar6[3] == 0) goto LAB_05f80104;
                  plVar6[4] = lVar8;
                  thunk_FUN_02dd37b4(plVar6 + 4,lVar8);
                  if (*(long *)(unaff_x20 + 0x1d0) != 0) {
                    puVar7 = (undefined8 *)
                             FUN_037b9bf0(*(long *)(unaff_x20 + 0x1d0),*(undefined8 *)puVar4);
                    in_stack_00000048 = *puVar7;
                    lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000048);
                    if ((lVar8 != 0) &&
                       (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar9 == 0)) goto LAB_05f80108;
                    if (*(uint *)(plVar6 + 3) < 2) goto LAB_05f80104;
                    plVar6[5] = lVar8;
                    thunk_FUN_02dd37b4(plVar6 + 5,lVar8);
                    puVar3 = 
                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                    ;
                    if (*(long *)(unaff_x20 + 0x1d8) != 0) {
                      puVar10 = (undefined4 *)
                                FUN_037b61ac(*(long *)(unaff_x20 + 0x1d8),
                                             *(undefined8 *)
                                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                                            );
                      puVar1 = PTR_DAT_0675e258;
                      uStack0000000000000044 = *puVar10;
                      lVar8 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x78),
                                                 (long)&stack0x00000040 + 4);
                      if ((lVar8 != 0) &&
                         (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar9 == 0)) goto LAB_05f80108;
                      if (*(uint *)(plVar6 + 3) < 3) goto LAB_05f80104;
                      plVar6[6] = lVar8;
                      thunk_FUN_02dd37b4(plVar6 + 6,lVar8);
                      if (*(long *)(unaff_x20 + 0x1e0) != 0) {
                        puVar10 = (undefined4 *)
                                  FUN_037b61ac(*(long *)(unaff_x20 + 0x1e0),*(undefined8 *)puVar3);
                        uStack0000000000000040 = *puVar10;
                        lVar8 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x78),&stack0x00000040);
                        if ((lVar8 != 0) &&
                           (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar9 == 0)) goto LAB_05f80108;
                        puVar5 = Method_System_Linq_Enumerable_ToList<JsonSchema>__;
                        if (*(uint *)(plVar6 + 3) < 4) goto LAB_05f80104;
                        plVar6[7] = lVar8;
                        thunk_FUN_02dd37b4(plVar6 + 7,lVar8);
                        FUN_04e8e72c(*(undefined8 *)puVar5,plVar6,0);
                        FUN_04e97bc4();
                        if (*(long *)(unaff_x20 + 0x1e8) != 0) {
                          puVar7 = (undefined8 *)
                                   FUN_037b9bf0(*(long *)(unaff_x20 + 0x1e8),*(undefined8 *)puVar4);
                          in_stack_00000038 = *puVar7;
                          uVar11 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000038);
                          if (*(long *)(unaff_x20 + 0x1f0) != 0) {
                            puVar7 = (undefined8 *)
                                     FUN_037b9bf0(*(long *)(unaff_x20 + 0x1f0),*(undefined8 *)puVar4
                                                 );
                            in_stack_00000030 = *puVar7;
                            uVar12 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000030);
                            puVar5 = 
                            Method_System_Linq_Enumerable_ToList<MarkToBaseAdjustmentRecord>__;
                            if (*(long *)(unaff_x20 + 0x1f8) != 0) {
                              puVar10 = (undefined4 *)
                                        FUN_037b61ac(*(long *)(unaff_x20 + 0x1f8),
                                                     *(undefined8 *)puVar3);
                              in_stack_00000028._4_4_ = *puVar10;
                              uVar13 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x78),
                                                          (long)&stack0x00000028 + 4);
                              FUN_04e8e6e8(*(undefined8 *)puVar5,uVar11,uVar12,uVar13,0);
                              FUN_04e97bc4();
                              plVar6 = (long *)FUN_02d60934(*unaff_x25,4);
                              if (*(long *)(unaff_x20 + 0x200) != 0) {
                                puVar7 = (undefined8 *)
                                         FUN_037b9bf0(*(long *)(unaff_x20 + 0x200),
                                                      *(undefined8 *)puVar4);
                                in_stack_00000020 = *puVar7;
                                lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&stack0x00000020);
                                if (plVar6 != (long *)0x0) {
                                  if ((lVar8 != 0) &&
                                     (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)
                                                                        (*plVar6 + 0x40)),
                                     lVar9 == 0)) goto LAB_05f80108;
                                  if ((int)plVar6[3] != 0) {
                                    plVar6[4] = lVar8;
                                    thunk_FUN_02dd37b4(plVar6 + 4,lVar8);
                                    if (*(long *)(unaff_x20 + 0x208) == 0) goto LAB_05f80100;
                                    puVar7 = (undefined8 *)
                                             FUN_037b9bf0(*(long *)(unaff_x20 + 0x208),
                                                          *(undefined8 *)puVar4);
                                    in_stack_00000018 = *puVar7;
                                    lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,
                                                               &stack0x00000018);
                                    if ((lVar8 != 0) &&
                                       (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)
                                                                          (*plVar6 + 0x40)),
                                       lVar9 == 0)) goto LAB_05f80108;
                                    if (1 < *(uint *)(plVar6 + 3)) {
                                      plVar6[5] = lVar8;
                                      thunk_FUN_02dd37b4(plVar6 + 5,lVar8);
                                      if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_05f80100;
                                      puVar7 = (undefined8 *)
                                               FUN_037b9bf0(*(long *)(unaff_x20 + 0x210),
                                                            *(undefined8 *)puVar4);
                                      in_stack_00000010 = *puVar7;
                                      lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,
                                                                 &stack0x00000010);
                                      if ((lVar8 != 0) &&
                                         (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)
                                                                            (*plVar6 + 0x40)),
                                         lVar9 == 0)) goto LAB_05f80108;
                                      if (2 < *(uint *)(plVar6 + 3)) {
                                        plVar6[6] = lVar8;
                                        thunk_FUN_02dd37b4(plVar6 + 6,lVar8);
                                        if (*(long *)(unaff_x20 + 0x218) == 0) goto LAB_05f80100;
                                        puVar7 = (undefined8 *)
                                                 FUN_037b9bf0(*(long *)(unaff_x20 + 0x218),
                                                              *(undefined8 *)puVar4);
                                        in_stack_00000008 = *puVar7;
                                        lVar8 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,
                                                                   &stack0x00000008);
                                        if ((lVar8 != 0) &&
                                           (lVar9 = thunk_FUN_02d9d438(lVar8,*(undefined8 *)
                                                                              (*plVar6 + 0x40)),
                                           lVar9 == 0)) goto LAB_05f80108;
                                        puVar2 = Method_System_Linq_Enumerable_ToList<KerningPair>__
                                        ;
                                        if (3 < *(uint *)(plVar6 + 3)) {
                                          plVar6[7] = lVar8;
                                          thunk_FUN_02dd37b4(plVar6 + 7,lVar8);
                                          FUN_04e8e72c(*(undefined8 *)puVar2,plVar6,0);
                                          FUN_04e97bc4();
                                          (**(code **)(*unaff_x19 + 0x168))();
                                          return;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_05f80104;
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
LAB_05f80100:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


