/*
FUNCTION_NAME: FUN_066cdd14
ENTRY_POINT: 066cdd14
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


void FUN_066cdd14(double param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_a0;
  double dStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  double local_70;
  double dStack_68;
  
  if ((DAT_073a10d6 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo);
    DAT_073a10d6 = 1;
  }
  puVar2 = System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo;
  uStack_d8 = 0;
  local_e0 = 0;
  dStack_c8 = 0.0;
  local_d0 = 0.0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    dVar10 = *(double *)(param_2 + 0x30);
    FUN_043e994c(&local_90,*(long *)(param_2 + 0x18),param_3,
                 *(undefined8 *)System_Collections_Generic_List<AI_Ragdoll_ColliderPair>_TypeInfo);
    puVar3 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
    if (*(long *)(param_2 + 0x28) != 0) {
      dVar7 = (double)FUN_0437effc(*(long *)(param_2 + 0x28),param_4,
                                   *(undefined8 *)
                                    System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                                  );
      if (*(long *)(param_2 + 0x28) != 0) {
        dVar10 = dVar10 / param_1;
        dVar8 = (double)FUN_0437effc(*(long *)(param_2 + 0x28),param_3,*(undefined8 *)puVar3);
        dVar8 = dVar10 * (dVar7 + dVar8) + (double)lStack_88;
        dVar7 = dVar8 + -0.5;
        if (0.0 <= dVar8) {
          dVar7 = dVar8 + 0.5;
        }
        lVar4 = -0x8000000000000000;
        if (dVar7 != INFINITY) {
          lVar4 = (long)dVar7;
        }
        if (*(long *)(param_2 + 0x18) != 0) {
          FUN_043e994c(&local_90,*(long *)(param_2 + 0x18),param_3,*(undefined8 *)puVar2);
          if (*(long *)(param_2 + 0x28) != 0) {
            FUN_0437effc(*(long *)(param_2 + 0x28),param_4,*(undefined8 *)puVar3);
            if (*(long *)(param_2 + 0x28) != 0) {
              dVar8 = dVar7;
              FUN_0437effc(*(long *)(param_2 + 0x28),param_3,*(undefined8 *)puVar3);
              dVar8 = dVar10 * (dVar7 + dVar8) + (double)local_80;
              dVar7 = dVar8 + -0.5;
              if (0.0 <= dVar8) {
                dVar7 = dVar8 + 0.5;
              }
              lVar5 = -0x8000000000000000;
              if (dVar7 != INFINITY) {
                lVar5 = (long)dVar7;
              }
              FUN_066be1a4(&local_f0,lVar4,lVar5,0);
              if (*(long *)(param_2 + 0x28) != 0) {
                dVar8 = (double)FUN_0437effc(*(long *)(param_2 + 0x28),param_4,*(undefined8 *)puVar3
                                            );
                if (*(long *)(param_2 + 0x28) != 0) {
                  dVar9 = (double)FUN_0437effc(*(long *)(param_2 + 0x28),param_3,
                                               *(undefined8 *)puVar3);
                  local_d0 = dVar10 * (dVar8 + dVar9);
                  if (*(long *)(param_2 + 0x28) != 0) {
                    FUN_0437effc(*(long *)(param_2 + 0x28),param_4,*(undefined8 *)puVar3);
                    if (*(long *)(param_2 + 0x28) != 0) {
                      dVar8 = dVar7;
                      FUN_0437effc(*(long *)(param_2 + 0x28),param_3,*(undefined8 *)puVar3);
                      dStack_c8 = dVar10 * (dVar7 + dVar8);
                      lVar4 = *(long *)(param_2 + 0x20);
                      if (lVar4 != 0) {
                        uStack_b8 = uStack_e8;
                        local_c0 = local_f0;
                        uStack_a8 = uStack_d8;
                        local_b0 = local_e0;
                        local_a0 = local_d0;
                        lVar5 = *(long *)(lVar4 + 0x10);
                        lVar6 = *(long *)
                                 System_Collections_Generic_List<EventTrigger_Entry>_TypeInfo;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        dStack_98 = dStack_c8;
                        if (lVar5 != 0) {
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            lVar5 = lVar5 + (long)(int)uVar1 * 0x30;
                            *(undefined8 *)(lVar5 + 0x38) = uStack_d8;
                            *(undefined8 *)(lVar5 + 0x30) = local_e0;
                            *(double *)(lVar5 + 0x48) = dStack_c8;
                            *(double *)(lVar5 + 0x40) = local_d0;
                            *(undefined8 *)(lVar5 + 0x28) = uStack_e8;
                            *(undefined8 *)(lVar5 + 0x20) = local_f0;
                          }
                          else {
                            lStack_88 = uStack_e8;
                            local_90 = local_f0;
                            uStack_78 = uStack_d8;
                            local_80 = local_e0;
                            local_70 = local_d0;
                            dStack_68 = dStack_c8;
                            FUN_043e9ce8(lVar4,&local_90,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


