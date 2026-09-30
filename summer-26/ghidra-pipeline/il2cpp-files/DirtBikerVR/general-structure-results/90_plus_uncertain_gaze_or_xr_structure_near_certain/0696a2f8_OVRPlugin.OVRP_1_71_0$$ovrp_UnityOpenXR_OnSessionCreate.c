/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 0696a2f8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *unaff_x24;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  
  lVar1 = FUN_04658320(param_2,param_3,1,**(undefined8 **)(param_1 + 0x18));
  plVar6 = (long *)(unaff_x19 + 0x38);
  *plVar6 = lVar1;
  thunk_FUN_03afed3c(plVar6,lVar1);
  if (*plVar6 != 0) {
    lVar1 = FUN_07c9c69c(*plVar6,0);
    if (DAT_08974d89 == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d89 = '\x01';
    }
    plVar2 = *(long **)(unaff_x20 + 0x80);
    if (plVar2 != (long *)0x0) {
      fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
      uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
      fVar8 = (float)(**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
      if (lVar1 != 0) {
        FUN_07cab7ec(-(float)uVar11 * fVar8,-(float)((ulong)uVar11 >> 0x20) * fVar8,
                     -(fVar10 * fVar8),lVar1,0);
        if (*plVar6 != 0) {
          lVar1 = FUN_07c9c69c(*plVar6,0);
          if (DAT_08974d8a == '\0') {
            FUN_03a8a718(PTR_DAT_08486860);
            DAT_08974d8a = '\x01';
          }
          if (lVar1 != 0) {
            puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
            FUN_07cac71c(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar1,0);
            if (*plVar6 != 0) {
              lVar1 = FUN_04561560(*plVar6,*(undefined8 *)PTR_DAT_084b7010);
              plVar6 = (long *)(unaff_x19 + 0x28);
              *plVar6 = lVar1;
              thunk_FUN_03afed3c(plVar6,lVar1);
              if (*plVar6 != 0) {
                thunk_FUN_07ca23d0(*plVar6,*(undefined8 *)PTR_DAT_084b7028,0);
                if (*plVar6 != 0) {
                  in_stack_00000008 = FUN_07d1c684(*plVar6,0);
                  plVar2 = *(long **)(unaff_x20 + 0x80);
                  if (plVar2 != (long *)0x0) {
                    fVar8 = (float)(**(code **)(*plVar2 + 0x248))
                                             (plVar2,*(undefined8 *)(*plVar2 + 0x250));
                    FUN_07d1d2c8(fVar8 * 1.5,&stack0x00000008,0);
                    if (*plVar6 != 0) {
                      uVar11 = FUN_07d1c684(*plVar6,0);
                      puVar7 = (undefined8 *)(unaff_x19 + 0x58);
                      *puVar7 = uVar11;
                      thunk_FUN_03afed3c(puVar7,0);
                      plVar6 = *(long **)(unaff_x20 + 0x80);
                      if (plVar6 != (long *)0x0) {
                        (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
                        FUN_07d1d2c8(puVar7,0);
                        if (((*unaff_x21 != 0) && (lVar1 = *(long *)(*unaff_x21 + 0xd0), lVar1 != 0)
                            ) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) {
                          uVar11 = *(undefined8 *)(lVar1 + 0x20);
                          if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                            thunk_FUN_03ae8be4();
                          }
                          uVar3 = FUN_07c9c218(uVar11,0,0);
                          if ((uVar3 & 1) == 0) {
                            if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4();
                            }
                            FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b7038,0);
                            return;
                          }
                          if (((*unaff_x21 != 0) &&
                              (lVar1 = *(long *)(*unaff_x21 + 0xd0), lVar1 != 0)) &&
                             ((lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0 &&
                              ((unaff_x20 != 0 && (*(long *)(unaff_x20 + 0x80) != 0)))))) {
                            uVar5 = *(undefined8 *)(lVar1 + 0x20);
                            uVar11 = FUN_07c98f88(*(long *)(unaff_x20 + 0x80),0);
                            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
                              thunk_FUN_03ae8be4(*unaff_x24);
                            }
                            lVar1 = FUN_04658320(uVar5,uVar11,1,*(undefined8 *)PTR_DAT_084b7018);
                            plVar6 = (long *)(unaff_x19 + 0x40);
                            *plVar6 = lVar1;
                            thunk_FUN_03afed3c(plVar6,lVar1);
                            if (*plVar6 != 0) {
                              lVar1 = FUN_07c9c69c(*plVar6,0);
                              if (DAT_08974d89 == '\0') {
                                FUN_03a8a718(PTR_DAT_084868a0);
                                DAT_08974d89 = '\x01';
                              }
                              plVar2 = *(long **)(unaff_x20 + 0x80);
                              if (plVar2 != (long *)0x0) {
                                uVar11 = *(undefined8 *)
                                          (*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
                                fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) +
                                                   0x20);
                                fVar8 = (float)(**(code **)(*plVar2 + 0x338))
                                                         (plVar2,*(undefined8 *)(*plVar2 + 0x340));
                                plVar2 = *(long **)(unaff_x20 + 0x80);
                                if ((plVar2 != (long *)0x0) &&
                                   (fVar9 = (float)(**(code **)(*plVar2 + 0x228))
                                                             (plVar2,*(undefined8 *)
                                                                      (*plVar2 + 0x230)), lVar1 != 0
                                   )) {
                                  fVar8 = fVar8 + fVar9;
                                  FUN_07cab7ec(-(float)uVar11 * fVar8,
                                               -(float)((ulong)uVar11 >> 0x20) * fVar8,
                                               fVar8 * -fVar10,lVar1,0);
                                  if (*plVar6 != 0) {
                                    lVar1 = FUN_07c9c69c(*plVar6,0);
                                    if (DAT_08974d8a == '\0') {
                                      FUN_03a8a718(PTR_DAT_08486860);
                                      DAT_08974d8a = '\x01';
                                    }
                                    if (lVar1 != 0) {
                                      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                                      FUN_07cac71c(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar1,0);
                                      if (*plVar6 != 0) {
                                        lVar1 = FUN_04561560(*plVar6,*(undefined8 *)PTR_DAT_084b7010
                                                            );
                                        plVar6 = (long *)(unaff_x19 + 0x30);
                                        *plVar6 = lVar1;
                                        thunk_FUN_03afed3c(plVar6,lVar1);
                                        if (*plVar6 != 0) {
                                          thunk_FUN_07ca23d0(*plVar6,*(undefined8 *)PTR_DAT_084b7030
                                                             ,0);
                                          if (*plVar6 != 0) {
                                            uVar11 = FUN_07d1c684(*plVar6,0);
                                            puVar7 = (undefined8 *)(unaff_x19 + 0x58);
                                            *puVar7 = uVar11;
                                            thunk_FUN_03afed3c(puVar7,0);
                                            plVar6 = *(long **)(unaff_x20 + 0x80);
                                            if (plVar6 != (long *)0x0) {
                                              (**(code **)(*plVar6 + 0x248))
                                                        (plVar6,*(undefined8 *)(*plVar6 + 0x250));
                                              FUN_07d1d2c8(puVar7,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


