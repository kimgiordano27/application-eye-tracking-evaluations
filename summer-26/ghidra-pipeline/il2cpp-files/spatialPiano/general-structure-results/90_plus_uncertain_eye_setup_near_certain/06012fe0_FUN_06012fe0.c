/*
FUNCTION_NAME: FUN_06012fe0
ENTRY_POINT: 06012fe0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_06012fe0(long param_1)

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
  
  puVar3 = PTR_DAT_067cafa0;
  puVar2 = PTR_DAT_067c9648;
  if ((DAT_06bc530e & 1) == 0) {
    FUN_02f08768(Method_Newtonsoft_Json_Utilities_CollectionUtils_AddRange<JsonProperty>__);
    FUN_02f08768(Method_UnityEngine_XR_ARFoundation_ARPlaneMeshGenerator_TryGenerateMesh__);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(PTR_DAT_067c9848);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_100__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_101__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_102__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_103__);
    DAT_06bc530e = 1;
  }
  plVar7 = (long *)thunk_FUN_02f45270(*(undefined8 *)puVar3);
  FUN_04f77e78(plVar7,0);
  plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,4);
  puVar5 = Method_Newtonsoft_Json_Utilities_CollectionUtils_AddRange<JsonProperty>__;
  puVar3 = PTR_DAT_067c9848;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    puVar9 = (undefined8 *)
             FUN_037c8858(*(long *)(param_1 + 0x1a8),
                          *(undefined8 *)
                           Method_Newtonsoft_Json_Utilities_CollectionUtils_AddRange<JsonProperty>__
                         );
    local_58 = *puVar9;
    lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_58);
    if (plVar8 != (long *)0x0) {
      if ((lVar10 != 0) &&
         (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_06013624:
        uVar12 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar12,0);
      }
      if ((int)plVar8[3] == 0) {
LAB_06013620:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar8[4] = lVar10;
      if (*(long *)(param_1 + 0x1b0) != 0) {
        puVar9 = (undefined8 *)FUN_037c8858(*(long *)(param_1 + 0x1b0),*(undefined8 *)puVar5);
        local_68 = *puVar9;
        lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_68);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_06013624;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_06013620;
        plVar8[5] = lVar10;
        if (*(long *)(param_1 + 0x1b8) != 0) {
          puVar9 = (undefined8 *)FUN_037c8858(*(long *)(param_1 + 0x1b8),*(undefined8 *)puVar5);
          local_70 = *puVar9;
          lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_70);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
          goto LAB_06013624;
          if (*(uint *)(plVar8 + 3) < 3) goto LAB_06013620;
          plVar8[6] = lVar10;
          if (*(long *)(param_1 + 0x1c0) != 0) {
            puVar9 = (undefined8 *)FUN_037c8858(*(long *)(param_1 + 0x1c0),*(undefined8 *)puVar5);
            local_78 = *puVar9;
            lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_78);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
            goto LAB_06013624;
            puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_101__;
            if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) goto LAB_06013620;
            plVar8[7] = lVar10;
            uVar12 = FUN_04f700a0(*(undefined8 *)puVar4,plVar8,0);
            if (plVar7 != (long *)0x0) {
              FUN_04f79730(plVar7,uVar12,0);
              plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,4);
              if (*(long *)(param_1 + 0x1c8) != 0) {
                puVar9 = (undefined8 *)
                         FUN_037c8858(*(long *)(param_1 + 0x1c8),*(undefined8 *)puVar5);
                local_80 = *puVar9;
                lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_80);
                if (plVar8 != (long *)0x0) {
                  if ((lVar10 != 0) &&
                     (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                     lVar11 == 0)) goto LAB_06013624;
                  if ((int)plVar8[3] == 0) goto LAB_06013620;
                  plVar8[4] = lVar10;
                  if (*(long *)(param_1 + 0x1d0) != 0) {
                    puVar9 = (undefined8 *)
                             FUN_037c8858(*(long *)(param_1 + 0x1d0),*(undefined8 *)puVar5);
                    local_88 = *puVar9;
                    lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_88);
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar11 == 0)) goto LAB_06013624;
                    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_06013620;
                    plVar8[5] = lVar10;
                    puVar4 = 
                    Method_UnityEngine_XR_ARFoundation_ARPlaneMeshGenerator_TryGenerateMesh__;
                    if (*(long *)(param_1 + 0x1d8) != 0) {
                      puVar13 = (undefined4 *)
                                FUN_037c4e24(*(long *)(param_1 + 0x1d8),
                                             *(undefined8 *)
                                              Method_UnityEngine_XR_ARFoundation_ARPlaneMeshGenerator_TryGenerateMesh__
                                            );
                      puVar1 = PTR_DAT_067c9338;
                      local_8c = *puVar13;
                      lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x78),&local_8c
                                                 );
                      if ((lVar10 != 0) &&
                         (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar11 == 0)) goto LAB_06013624;
                      if (*(uint *)(plVar8 + 3) < 3) goto LAB_06013620;
                      plVar8[6] = lVar10;
                      if (*(long *)(param_1 + 0x1e0) != 0) {
                        puVar13 = (undefined4 *)
                                  FUN_037c4e24(*(long *)(param_1 + 0x1e0),*(undefined8 *)puVar4);
                        local_90 = *puVar13;
                        lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x78),&local_90);
                        if ((lVar10 != 0) &&
                           (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)(*plVar8 + 0x40)),
                           lVar11 == 0)) goto LAB_06013624;
                        puVar6 = Method_OVRPlugin_<>c_<_cctor>b__837_100__;
                        if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) goto LAB_06013620;
                        plVar8[7] = lVar10;
                        uVar12 = FUN_04f700a0(*(undefined8 *)puVar6,plVar8,0);
                        FUN_04f79730(plVar7,uVar12,0);
                        if (*(long *)(param_1 + 0x1e8) != 0) {
                          puVar9 = (undefined8 *)
                                   FUN_037c8858(*(long *)(param_1 + 0x1e8),*(undefined8 *)puVar5);
                          local_98 = *puVar9;
                          uVar12 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_98);
                          if (*(long *)(param_1 + 0x1f0) != 0) {
                            puVar9 = (undefined8 *)
                                     FUN_037c8858(*(long *)(param_1 + 0x1f0),*(undefined8 *)puVar5);
                            local_a0 = *puVar9;
                            uVar14 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_a0);
                            puVar6 = Method_OVRPlugin_<>c_<_cctor>b__837_103__;
                            if (*(long *)(param_1 + 0x1f8) != 0) {
                              puVar13 = (undefined4 *)
                                        FUN_037c4e24(*(long *)(param_1 + 0x1f8),
                                                     *(undefined8 *)puVar4);
                              local_a4 = *puVar13;
                              uVar15 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar1 + 0x78),&local_a4);
                              uVar12 = FUN_04f7005c(*(undefined8 *)puVar6,uVar12,uVar14,uVar15,0);
                              FUN_04f79730(plVar7,uVar12,0);
                              plVar8 = (long *)FUN_02f0880c(*(undefined8 *)puVar2,4);
                              if (*(long *)(param_1 + 0x200) != 0) {
                                puVar9 = (undefined8 *)
                                         FUN_037c8858(*(long *)(param_1 + 0x200),
                                                      *(undefined8 *)puVar5);
                                local_b0 = *puVar9;
                                lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_b0);
                                if (plVar8 != (long *)0x0) {
                                  if ((lVar10 != 0) &&
                                     (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                          (*plVar8 + 0x40)),
                                     lVar11 == 0)) goto LAB_06013624;
                                  if ((int)plVar8[3] != 0) {
                                    plVar8[4] = lVar10;
                                    if (*(long *)(param_1 + 0x208) == 0) goto LAB_0601361c;
                                    puVar9 = (undefined8 *)
                                             FUN_037c8858(*(long *)(param_1 + 0x208),
                                                          *(undefined8 *)puVar5);
                                    local_b8 = *puVar9;
                                    lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_b8);
                                    if ((lVar10 != 0) &&
                                       (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                            (*plVar8 + 0x40)),
                                       lVar11 == 0)) goto LAB_06013624;
                                    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                                      plVar8[5] = lVar10;
                                      if (*(long *)(param_1 + 0x210) == 0) goto LAB_0601361c;
                                      puVar9 = (undefined8 *)
                                               FUN_037c8858(*(long *)(param_1 + 0x210),
                                                            *(undefined8 *)puVar5);
                                      local_c0 = *puVar9;
                                      lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_c0);
                                      if ((lVar10 != 0) &&
                                         (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                              (*plVar8 + 0x40)),
                                         lVar11 == 0)) goto LAB_06013624;
                                      if (2 < *(uint *)(plVar8 + 3)) {
                                        plVar8[6] = lVar10;
                                        if (*(long *)(param_1 + 0x218) == 0) goto LAB_0601361c;
                                        puVar9 = (undefined8 *)
                                                 FUN_037c8858(*(long *)(param_1 + 0x218),
                                                              *(undefined8 *)puVar5);
                                        local_c8 = *puVar9;
                                        lVar10 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_c8)
                                        ;
                                        if ((lVar10 != 0) &&
                                           (lVar11 = thunk_FUN_02f45174(lVar10,*(undefined8 *)
                                                                                (*plVar8 + 0x40)),
                                           lVar11 == 0)) goto LAB_06013624;
                                        puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_102__;
                                        if ((*(uint *)(plVar8 + 3) & 0xfffffffc) != 0) {
                                          plVar8[7] = lVar10;
                                          uVar12 = FUN_04f700a0(*(undefined8 *)puVar2,plVar8,0);
                                          FUN_04f79730(plVar7,uVar12,0);
                                          (**(code **)(*plVar7 + 0x168))
                                                    (plVar7,*(undefined8 *)(*plVar7 + 0x170));
                                          return;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_06013620;
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
LAB_0601361c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


