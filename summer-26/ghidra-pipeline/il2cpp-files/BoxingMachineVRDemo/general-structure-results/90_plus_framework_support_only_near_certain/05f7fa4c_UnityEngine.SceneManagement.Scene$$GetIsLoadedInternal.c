/*
FUNCTION_NAME: UnityEngine.SceneManagement.Scene$$GetIsLoadedInternal
ENTRY_POINT: 05f7fa4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_SceneManagement_Scene__GetIsLoadedInternal(long param_1)

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
  
  puVar3 = PTR_DAT_06764da0;
  puVar2 = PTR_DAT_0675e2d0;
  if ((DAT_06b84348 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_02d6084c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0675e2d0);
    FUN_02d6084c(PTR_DAT_06764da0);
    FUN_02d6084c(PTR_DAT_06762360);
    FUN_02d6084c(Method_System_Linq_Enumerable_ToList<JsonSchema>__);
    FUN_02d6084c(Method_System_Linq_Enumerable_ToList<JsonSchemaModel>__);
    FUN_02d6084c(Method_System_Linq_Enumerable_ToList<KerningPair>__);
    FUN_02d6084c(Method_System_Linq_Enumerable_ToList<MarkToBaseAdjustmentRecord>__);
    DAT_06b84348 = 1;
  }
  plVar7 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04e9624c(plVar7,0);
  plVar8 = (long *)FUN_02d60934(*(undefined8 *)puVar2,4);
  puVar5 = OVRPlugin_OVRP_1_34_0_TypeInfo;
  puVar3 = PTR_DAT_06762360;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    puVar9 = (undefined8 *)
             FUN_037b9bf0(*(long *)(param_1 + 0x1a8),*(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
    in_stack_00000078 = *puVar9;
    lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000078);
    if (plVar8 != (long *)0x0) {
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_05f80108:
        uVar12 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar12,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_05f80104:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar8[4] = lVar10;
      thunk_FUN_02dd37b4(plVar8 + 4,lVar10);
      if (*(long *)(param_1 + 0x1b0) != 0) {
        puVar9 = (undefined8 *)FUN_037b9bf0(*(long *)(param_1 + 0x1b0),*(undefined8 *)puVar5);
        in_stack_00000068 = *puVar9;
        lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000068);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_05f80108;
        if (*(uint *)(plVar8 + 3) < 2) goto LAB_05f80104;
        plVar8[5] = lVar10;
        thunk_FUN_02dd37b4(plVar8 + 5,lVar10);
        if (*(long *)(param_1 + 0x1b8) != 0) {
          puVar9 = (undefined8 *)FUN_037b9bf0(*(long *)(param_1 + 0x1b8),*(undefined8 *)puVar5);
          in_stack_00000060 = *puVar9;
          lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000060);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
          goto LAB_05f80108;
          if (*(uint *)(plVar8 + 3) < 3) goto LAB_05f80104;
          plVar8[6] = lVar10;
          thunk_FUN_02dd37b4(plVar8 + 6,lVar10);
          if (*(long *)(param_1 + 0x1c0) != 0) {
            puVar9 = (undefined8 *)FUN_037b9bf0(*(long *)(param_1 + 0x1c0),*(undefined8 *)puVar5);
            in_stack_00000058 = *puVar9;
            lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000058);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
            goto LAB_05f80108;
            puVar4 = Method_System_Linq_Enumerable_ToList<JsonSchemaModel>__;
            if (*(uint *)(plVar8 + 3) < 4) goto LAB_05f80104;
            plVar8[7] = lVar10;
            thunk_FUN_02dd37b4(plVar8 + 7,lVar10);
            uVar12 = FUN_04e8e72c(*(undefined8 *)puVar4,plVar8,0);
            if (plVar7 != (long *)0x0) {
              FUN_04e97bc4(plVar7,uVar12,0);
              plVar8 = (long *)FUN_02d60934(*(undefined8 *)puVar2,4);
              if (*(long *)(param_1 + 0x1c8) != 0) {
                puVar9 = (undefined8 *)
                         FUN_037b9bf0(*(long *)(param_1 + 0x1c8),*(undefined8 *)puVar5);
                in_stack_00000050 = *puVar9;
                lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000050);
                if (plVar8 != (long *)0x0) {
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar11 == 0)) goto LAB_05f80108;
                  if ((int)plVar8[3] == 0) goto LAB_05f80104;
                  plVar8[4] = lVar10;
                  thunk_FUN_02dd37b4(plVar8 + 4,lVar10);
                  if (*(long *)(param_1 + 0x1d0) != 0) {
                    puVar9 = (undefined8 *)
                             FUN_037b9bf0(*(long *)(param_1 + 0x1d0),*(undefined8 *)puVar5);
                    in_stack_00000048 = *puVar9;
                    lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000048);
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar11 == 0)) goto LAB_05f80108;
                    if (*(uint *)(plVar8 + 3) < 2) goto LAB_05f80104;
                    plVar8[5] = lVar10;
                    thunk_FUN_02dd37b4(plVar8 + 5,lVar10);
                    puVar4 = 
                    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                    ;
                    if (*(long *)(param_1 + 0x1d8) != 0) {
                      puVar13 = (undefined4 *)
                                FUN_037b61ac(*(long *)(param_1 + 0x1d8),
                                             *(undefined8 *)
                                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                                            );
                      puVar1 = PTR_DAT_0675e258;
                      uStack0000000000000044 = *puVar13;
                      lVar10 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x78),
                                                  (long)&stack0x00000040 + 4);
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar11 == 0)) goto LAB_05f80108;
                      if (*(uint *)(plVar8 + 3) < 3) goto LAB_05f80104;
                      plVar8[6] = lVar10;
                      thunk_FUN_02dd37b4(plVar8 + 6,lVar10);
                      if (*(long *)(param_1 + 0x1e0) != 0) {
                        puVar13 = (undefined4 *)
                                  FUN_037b61ac(*(long *)(param_1 + 0x1e0),*(undefined8 *)puVar4);
                        uStack0000000000000040 = *puVar13;
                        lVar10 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x78),&stack0x00000040)
                        ;
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar11 == 0)) goto LAB_05f80108;
                        puVar6 = Method_System_Linq_Enumerable_ToList<JsonSchema>__;
                        if (*(uint *)(plVar8 + 3) < 4) goto LAB_05f80104;
                        plVar8[7] = lVar10;
                        thunk_FUN_02dd37b4(plVar8 + 7,lVar10);
                        uVar12 = FUN_04e8e72c(*(undefined8 *)puVar6,plVar8,0);
                        FUN_04e97bc4(plVar7,uVar12,0);
                        if (*(long *)(param_1 + 0x1e8) != 0) {
                          puVar9 = (undefined8 *)
                                   FUN_037b9bf0(*(long *)(param_1 + 0x1e8),*(undefined8 *)puVar5);
                          in_stack_00000038 = *puVar9;
                          uVar12 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000038);
                          if (*(long *)(param_1 + 0x1f0) != 0) {
                            puVar9 = (undefined8 *)
                                     FUN_037b9bf0(*(long *)(param_1 + 0x1f0),*(undefined8 *)puVar5);
                            in_stack_00000030 = *puVar9;
                            uVar14 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000030);
                            puVar6 = 
                            Method_System_Linq_Enumerable_ToList<MarkToBaseAdjustmentRecord>__;
                            if (*(long *)(param_1 + 0x1f8) != 0) {
                              puVar13 = (undefined4 *)
                                        FUN_037b61ac(*(long *)(param_1 + 0x1f8),
                                                     *(undefined8 *)puVar4);
                              in_stack_00000028._4_4_ = *puVar13;
                              uVar15 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x78),
                                                          (long)&stack0x00000028 + 4);
                              uVar12 = FUN_04e8e6e8(*(undefined8 *)puVar6,uVar12,uVar14,uVar15,0);
                              FUN_04e97bc4(plVar7,uVar12,0);
                              plVar8 = (long *)FUN_02d60934(*(undefined8 *)puVar2,4);
                              if (*(long *)(param_1 + 0x200) != 0) {
                                puVar9 = (undefined8 *)
                                         FUN_037b9bf0(*(long *)(param_1 + 0x200),
                                                      *(undefined8 *)puVar5);
                                in_stack_00000020 = *puVar9;
                                lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&stack0x00000020);
                                if (plVar8 != (long *)0x0) {
                                  if ((lVar10 != 0) &&
                                     (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)
                                                                          (*plVar8 + 0x40)),
                                     lVar11 == 0)) goto LAB_05f80108;
                                  if ((int)plVar8[3] != 0) {
                                    plVar8[4] = lVar10;
                                    thunk_FUN_02dd37b4(plVar8 + 4,lVar10);
                                    if (*(long *)(param_1 + 0x208) == 0) goto LAB_05f80100;
                                    puVar9 = (undefined8 *)
                                             FUN_037b9bf0(*(long *)(param_1 + 0x208),
                                                          *(undefined8 *)puVar5);
                                    in_stack_00000018 = *puVar9;
                                    lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,
                                                                &stack0x00000018);
                                    if ((lVar10 != 0) &&
                                       (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)
                                                                            (*plVar8 + 0x40)),
                                       lVar11 == 0)) goto LAB_05f80108;
                                    if (1 < *(uint *)(plVar8 + 3)) {
                                      plVar8[5] = lVar10;
                                      thunk_FUN_02dd37b4(plVar8 + 5,lVar10);
                                      if (*(long *)(param_1 + 0x210) == 0) goto LAB_05f80100;
                                      puVar9 = (undefined8 *)
                                               FUN_037b9bf0(*(long *)(param_1 + 0x210),
                                                            *(undefined8 *)puVar5);
                                      in_stack_00000010 = *puVar9;
                                      lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,
                                                                  &stack0x00000010);
                                      if ((lVar10 != 0) &&
                                         (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)
                                                                              (*plVar8 + 0x40)),
                                         lVar11 == 0)) goto LAB_05f80108;
                                      if (2 < *(uint *)(plVar8 + 3)) {
                                        plVar8[6] = lVar10;
                                        thunk_FUN_02dd37b4(plVar8 + 6,lVar10);
                                        if (*(long *)(param_1 + 0x218) == 0) goto LAB_05f80100;
                                        puVar9 = (undefined8 *)
                                                 FUN_037b9bf0(*(long *)(param_1 + 0x218),
                                                              *(undefined8 *)puVar5);
                                        in_stack_00000008 = *puVar9;
                                        lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,
                                                                    &stack0x00000008);
                                        if ((lVar10 != 0) &&
                                           (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)
                                                                                (*plVar8 + 0x40)),
                                           lVar11 == 0)) goto LAB_05f80108;
                                        puVar2 = Method_System_Linq_Enumerable_ToList<KerningPair>__
                                        ;
                                        if (3 < *(uint *)(plVar8 + 3)) {
                                          plVar8[7] = lVar10;
                                          thunk_FUN_02dd37b4(plVar8 + 7,lVar10);
                                          uVar12 = FUN_04e8e72c(*(undefined8 *)puVar2,plVar8,0);
                                          FUN_04e97bc4(plVar7,uVar12,0);
                                          (**(code **)(*plVar7 + 0x168))
                                                    (plVar7,*(undefined8 *)(*plVar7 + 0x170));
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


