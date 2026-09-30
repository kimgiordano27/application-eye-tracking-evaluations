/*
FUNCTION_NAME: FUN_05f7fa34
ENTRY_POINT: 05f7fa34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05f7fa34(long param_1)

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
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
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
    local_58 = *puVar9;
    lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_58);
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
        local_68 = *puVar9;
        lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_68);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_05f80108;
        if (*(uint *)(plVar8 + 3) < 2) goto LAB_05f80104;
        plVar8[5] = lVar10;
        thunk_FUN_02dd37b4(plVar8 + 5,lVar10);
        if (*(long *)(param_1 + 0x1b8) != 0) {
          puVar9 = (undefined8 *)FUN_037b9bf0(*(long *)(param_1 + 0x1b8),*(undefined8 *)puVar5);
          local_70 = *puVar9;
          lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_70);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
          goto LAB_05f80108;
          if (*(uint *)(plVar8 + 3) < 3) goto LAB_05f80104;
          plVar8[6] = lVar10;
          thunk_FUN_02dd37b4(plVar8 + 6,lVar10);
          if (*(long *)(param_1 + 0x1c0) != 0) {
            puVar9 = (undefined8 *)FUN_037b9bf0(*(long *)(param_1 + 0x1c0),*(undefined8 *)puVar5);
            local_78 = *puVar9;
            lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_78);
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
                local_80 = *puVar9;
                lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_80);
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
                    local_88 = *puVar9;
                    lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_88);
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
                      local_8c = *puVar13;
                      lVar10 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x78),&local_8c
                                                 );
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar11 == 0)) goto LAB_05f80108;
                      if (*(uint *)(plVar8 + 3) < 3) goto LAB_05f80104;
                      plVar8[6] = lVar10;
                      thunk_FUN_02dd37b4(plVar8 + 6,lVar10);
                      if (*(long *)(param_1 + 0x1e0) != 0) {
                        puVar13 = (undefined4 *)
                                  FUN_037b61ac(*(long *)(param_1 + 0x1e0),*(undefined8 *)puVar4);
                        local_90 = *puVar13;
                        lVar10 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x78),&local_90);
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
                          local_98 = *puVar9;
                          uVar12 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_98);
                          if (*(long *)(param_1 + 0x1f0) != 0) {
                            puVar9 = (undefined8 *)
                                     FUN_037b9bf0(*(long *)(param_1 + 0x1f0),*(undefined8 *)puVar5);
                            local_a0 = *puVar9;
                            uVar14 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_a0);
                            puVar6 = 
                            Method_System_Linq_Enumerable_ToList<MarkToBaseAdjustmentRecord>__;
                            if (*(long *)(param_1 + 0x1f8) != 0) {
                              puVar13 = (undefined4 *)
                                        FUN_037b61ac(*(long *)(param_1 + 0x1f8),
                                                     *(undefined8 *)puVar4);
                              local_a4 = *puVar13;
                              uVar15 = thunk_FUN_02d9d164(*(undefined8 *)(puVar1 + 0x78),&local_a4);
                              uVar12 = FUN_04e8e6e8(*(undefined8 *)puVar6,uVar12,uVar14,uVar15,0);
                              FUN_04e97bc4(plVar7,uVar12,0);
                              plVar8 = (long *)FUN_02d60934(*(undefined8 *)puVar2,4);
                              if (*(long *)(param_1 + 0x200) != 0) {
                                puVar9 = (undefined8 *)
                                         FUN_037b9bf0(*(long *)(param_1 + 0x200),
                                                      *(undefined8 *)puVar5);
                                local_b0 = *puVar9;
                                lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_b0);
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
                                    local_b8 = *puVar9;
                                    lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_b8);
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
                                      local_c0 = *puVar9;
                                      lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_c0);
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
                                        local_c8 = *puVar9;
                                        lVar10 = thunk_FUN_02d9d164(*(undefined8 *)puVar3,&local_c8)
                                        ;
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


