/*
FUNCTION_NAME: FUN_066cd740
ENTRY_POINT: 066cd740
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_066cd740(undefined1 param_1 [16],double param_2,long param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_100;
  long lStack_f8;
  double local_f0;
  undefined8 uStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  long lStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  long lStack_98;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  double dStack_78;
  
  if ((DAT_073a10d5 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_073a10d5 = 1;
  }
  puVar4 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
  uStack_e8 = 0;
  local_f0 = 0.0;
  dStack_d8 = 0.0;
  local_e0 = 0.0;
  lStack_f8 = 0;
  local_100 = 0.0;
  if (*(long *)(param_3 + 0x28) != 0) {
    dVar11 = *(double *)(param_3 + 0x38);
    dVar8 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_5,
                                 *(undefined8 *)
                                  System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                );
    if (*(long *)(param_3 + 0x28) != 0) {
      dVar9 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_4,*(undefined8 *)puVar4);
      if (*(long *)(param_3 + 0x28) != 0) {
        FUN_0437effc(*(long *)(param_3 + 0x28),param_5,*(undefined8 *)puVar4);
        puVar2 = PTR_DAT_06f6d508;
        if (*(long *)(param_3 + 0x28) != 0) {
          dVar12 = param_2;
          FUN_0437effc(*(long *)(param_3 + 0x28),param_4,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          dVar8 = atan2(dVar11,dVar8 * dVar9 + param_2 * dVar12);
          dVar11 = 0.25;
          dVar8 = tan(dVar8 * 0.25);
          puVar2 = System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo;
          if (*(long *)(param_3 + 0x18) != 0) {
            FUN_043e994c(&local_a0,*(long *)(param_3 + 0x18),param_4,
                         *(undefined8 *)
                          System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo);
            lVar5 = lStack_98;
            if (*(long *)(param_3 + 0x28) != 0) {
              dVar12 = *(double *)(param_3 + 0x30);
              dVar9 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_5,*(undefined8 *)puVar4);
              if (*(long *)(param_3 + 0x28) != 0) {
                FUN_0437effc(*(long *)(param_3 + 0x28),param_5,*(undefined8 *)puVar4);
                dVar9 = dVar12 * (dVar9 - dVar8 * dVar11) + (double)lVar5;
                dVar12 = INFINITY;
                dVar11 = dVar9 + -0.5;
                if (0.0 <= dVar9) {
                  dVar11 = dVar9 + 0.5;
                }
                lVar5 = -0x8000000000000000;
                if (dVar11 != INFINITY) {
                  lVar5 = (long)dVar11;
                }
                if (*(long *)(param_3 + 0x18) != 0) {
                  FUN_043e994c(&local_a0,*(long *)(param_3 + 0x18),param_4,*(undefined8 *)puVar2);
                  dVar11 = local_90;
                  if (*(long *)(param_3 + 0x28) != 0) {
                    dVar9 = *(double *)(param_3 + 0x30);
                    FUN_0437effc(*(long *)(param_3 + 0x28),param_5,*(undefined8 *)puVar4);
                    if (*(long *)(param_3 + 0x28) != 0) {
                      dVar10 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_5,
                                                    *(undefined8 *)puVar4);
                      dVar9 = dVar9 * (dVar12 + dVar8 * dVar10) + (double)(long)dVar11;
                      dVar12 = INFINITY;
                      dVar11 = dVar9 + -0.5;
                      if (0.0 <= dVar9) {
                        dVar11 = dVar9 + 0.5;
                      }
                      lVar6 = -0x8000000000000000;
                      if (dVar11 != INFINITY) {
                        lVar6 = (long)dVar11;
                      }
                      FUN_066be1a4(&local_100,lVar5,lVar6,0);
                      if (*(long *)(param_3 + 0x28) != 0) {
                        dVar11 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_5,
                                                      *(undefined8 *)puVar4);
                        if (*(long *)(param_3 + 0x28) != 0) {
                          FUN_0437effc(*(long *)(param_3 + 0x28),param_5,*(undefined8 *)puVar4);
                          local_e0 = dVar11 - dVar8 * dVar12;
                          if (*(long *)(param_3 + 0x28) != 0) {
                            FUN_0437effc(*(long *)(param_3 + 0x28),param_5,*(undefined8 *)puVar4);
                            if (*(long *)(param_3 + 0x28) != 0) {
                              dVar11 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_5,
                                                            *(undefined8 *)puVar4);
                              puVar3 = System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
                              dStack_d8 = dVar12 + dVar8 * dVar11;
                              lVar5 = *(long *)(param_3 + 0x20);
                              if (lVar5 != 0) {
                                lStack_c8 = lStack_f8;
                                local_d0 = local_100;
                                uStack_b8 = uStack_e8;
                                local_c0 = local_f0;
                                local_b0 = local_e0;
                                lVar6 = *(long *)(lVar5 + 0x10);
                                lVar7 = *(long *)
                                         System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo
                                ;
                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                dStack_a8 = dStack_d8;
                                if (lVar6 != 0) {
                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                    lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
                                    *(undefined8 *)(lVar6 + 0x38) = uStack_e8;
                                    *(double *)(lVar6 + 0x30) = local_f0;
                                    *(double *)(lVar6 + 0x48) = dStack_d8;
                                    *(double *)(lVar6 + 0x40) = local_e0;
                                    *(long *)(lVar6 + 0x28) = lStack_f8;
                                    *(double *)(lVar6 + 0x20) = local_100;
                                    dVar11 = local_100;
                                  }
                                  else {
                                    lStack_98 = lStack_f8;
                                    local_a0 = local_100;
                                    uStack_88 = uStack_e8;
                                    local_90 = local_f0;
                                    local_80 = local_e0;
                                    dVar11 = local_f0;
                                    dStack_78 = dStack_d8;
                                    FUN_043e9ce8(lVar5,&local_a0,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  if (*(long *)(param_3 + 0x18) != 0) {
                                    FUN_043e994c(&local_a0,*(long *)(param_3 + 0x18),param_4,
                                                 *(undefined8 *)puVar2);
                                    lVar5 = lStack_98;
                                    if (*(long *)(param_3 + 0x28) != 0) {
                                      dVar12 = *(double *)(param_3 + 0x30);
                                      dVar9 = (double)FUN_0437effc(*(long *)(param_3 + 0x28),param_4
                                                                   ,*(undefined8 *)puVar4);
                                      if (*(long *)(param_3 + 0x28) != 0) {
                                        FUN_0437effc(*(long *)(param_3 + 0x28),param_4,
                                                     *(undefined8 *)puVar4);
                                        dVar9 = dVar12 * (dVar9 + dVar8 * dVar11) + (double)lVar5;
                                        dVar12 = INFINITY;
                                        dVar11 = dVar9 + -0.5;
                                        if (0.0 <= dVar9) {
                                          dVar11 = dVar9 + 0.5;
                                        }
                                        lVar5 = -0x8000000000000000;
                                        if (dVar11 != INFINITY) {
                                          lVar5 = (long)dVar11;
                                        }
                                        if (*(long *)(param_3 + 0x18) != 0) {
                                          FUN_043e994c(&local_a0,*(long *)(param_3 + 0x18),param_4,
                                                       *(undefined8 *)puVar2);
                                          dVar11 = local_90;
                                          if (*(long *)(param_3 + 0x28) != 0) {
                                            dVar9 = *(double *)(param_3 + 0x30);
                                            FUN_0437effc(*(long *)(param_3 + 0x28),param_4,
                                                         *(undefined8 *)puVar4);
                                            if (*(long *)(param_3 + 0x28) != 0) {
                                              dVar10 = (double)FUN_0437effc(*(long *)(param_3 + 0x28
                                                                                     ),param_4,
                                                                            *(undefined8 *)puVar4);
                                              dVar9 = dVar9 * (dVar12 - dVar8 * dVar10) +
                                                      (double)(long)dVar11;
                                              dVar12 = INFINITY;
                                              dVar11 = dVar9 + -0.5;
                                              if (0.0 <= dVar9) {
                                                dVar11 = dVar9 + 0.5;
                                              }
                                              lVar6 = -0x8000000000000000;
                                              if (dVar11 != INFINITY) {
                                                lVar6 = (long)dVar11;
                                              }
                                              FUN_066be1a4(&local_100,lVar5,lVar6,0);
                                              if (*(long *)(param_3 + 0x28) != 0) {
                                                dVar11 = (double)FUN_0437effc(*(long *)(param_3 +
                                                                                       0x28),param_5
                                                                              ,*(undefined8 *)puVar4
                                                                             );
                                                if (*(long *)(param_3 + 0x28) != 0) {
                                                  FUN_0437effc(*(long *)(param_3 + 0x28),param_5,
                                                               *(undefined8 *)puVar4);
                                                  local_e0 = dVar11 + dVar8 * dVar12;
                                                  if (*(long *)(param_3 + 0x28) != 0) {
                                                    FUN_0437effc(*(long *)(param_3 + 0x28),param_5,
                                                                 *(undefined8 *)puVar4);
                                                    if (*(long *)(param_3 + 0x28) != 0) {
                                                      dVar11 = (double)FUN_0437effc(*(long *)(
                                                  param_3 + 0x28),param_5,*(undefined8 *)puVar4);
                                                  dStack_d8 = dVar12 - dVar8 * dVar11;
                                                  lVar5 = *(long *)(param_3 + 0x20);
                                                  if (lVar5 != 0) {
                                                    lVar7 = *(long *)puVar3;
                                                    lStack_c8 = lStack_f8;
                                                    local_d0 = local_100;
                                                    uStack_b8 = uStack_e8;
                                                    local_c0 = local_f0;
                                                    local_b0 = local_e0;
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    dStack_a8 = dStack_d8;
                                                    if (lVar6 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        lVar6 = lVar6 + (long)(int)uVar1 * 0x30;
                                                        *(undefined8 *)(lVar6 + 0x38) = uStack_e8;
                                                        *(double *)(lVar6 + 0x30) = local_f0;
                                                        *(double *)(lVar6 + 0x48) = dStack_d8;
                                                        *(double *)(lVar6 + 0x40) = local_e0;
                                                        *(long *)(lVar6 + 0x28) = lStack_f8;
                                                        *(double *)(lVar6 + 0x20) = local_100;
                                                      }
                                                      else {
                                                        lStack_98 = lStack_f8;
                                                        local_a0 = local_100;
                                                        uStack_88 = uStack_e8;
                                                        local_90 = local_f0;
                                                        local_80 = local_e0;
                                                        dStack_78 = dStack_d8;
                                                        FUN_043e9ce8(lVar5,&local_a0,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar7 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


