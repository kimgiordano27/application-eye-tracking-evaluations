/*
FUNCTION_NAME: FUN_030f9054
ENTRY_POINT: 030f9054
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_030f9054(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  puVar3 = StringLiteral_13677;
  if ((DAT_03ff1c23 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13684);
    thunk_FUN_01ad9084(StringLiteral_13685);
    thunk_FUN_01ad9084(StringLiteral_13679);
    thunk_FUN_01ad9084(StringLiteral_13686);
    thunk_FUN_01ad9084(StringLiteral_2657);
    thunk_FUN_01ad9084(StringLiteral_2658);
    thunk_FUN_01ad9084(StringLiteral_2659);
    thunk_FUN_01ad9084(StringLiteral_2660);
    thunk_FUN_01ad9084(StringLiteral_2294);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_13677);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1c23 = 1;
  }
  lVar6 = *(long *)puVar3;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)puVar3;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    uVar7 = FUN_0255af58(lVar6,0,*(undefined8 *)StringLiteral_13684);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)puVar3;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar3;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
    if (lVar6 != 0) {
      uVar8 = FUN_0255aae0(lVar6,*(undefined8 *)StringLiteral_13686);
      lVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                );
      FUN_02b2c1b0(lVar6,uVar8,*(undefined8 *)StringLiteral_2294);
      if (lVar6 != 0) {
        FUN_02b2d2d4(&local_78,lVar6,*(undefined8 *)StringLiteral_2660);
        puVar5 = StringLiteral_13685;
        puVar4 = StringLiteral_13679;
        puVar2 = StringLiteral_2658;
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        while( true ) {
          uVar9 = System_Collections_Generic_EqualityComparer<Vector3>___ctor
                            (&local_60,*(undefined8 *)puVar2);
          uVar7 = local_50;
          if ((uVar9 & 1) == 0) {
            FUN_02734648(&local_60,*(undefined8 *)StringLiteral_2657);
            return;
          }
          lVar6 = *(long *)puVar3;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar6 = *(long *)puVar3;
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) break;
          uVar8 = FUN_0255aca0(lVar6,uVar7 & 0xffffffff,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar9 = FUN_03922f24(uVar8,0,0);
          if ((uVar9 & 1) != 0) {
            lVar6 = *(long *)puVar3;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar6 = *(long *)puVar3;
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_0255c1c8(lVar6,uVar7 & 0xffffffff,*(undefined8 *)puVar5);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


