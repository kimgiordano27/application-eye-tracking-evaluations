/*
FUNCTION_NAME: OVRTelemetryMarker$$get_State
ENTRY_POINT: 04fbe09c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRTelemetryMarker__get_State(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *plVar11;
  long unaff_x22;
  ulong uVar12;
  long *unaff_x26;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x22 + 0xe59) = 1;
  puVar3 = System_Func<Quaternion,_int,_float>_TypeInfo;
  puVar2 = System_Func<Pose,_int,_float>_TypeInfo;
  FUN_0433d440();
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_04fa6744();
  uVar4 = FUN_04dd5138(uVar5,0);
  lVar6 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_037a5d48(lVar6,(ulong)uVar4,*(undefined8 *)puVar2);
  plVar11 = (long *)(unaff_x19 + 0x10);
  *plVar11 = lVar6;
  thunk_FUN_02bb0e9c(plVar11,lVar6);
  puVar3 = System_Func<MemberInfo,_DebugMember,_bool>_TypeInfo;
  puVar2 = System_Func<Length,_Length,_bool>_TypeInfo;
  if (0 < (int)uVar4) {
    uVar12 = 0;
    do {
      lVar6 = *plVar11;
      FUN_04dd513c(uVar12,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*unaff_x26);
      }
      uVar5 = FUN_04fa65ec();
      uVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
      FUN_04fd1ccc(uVar7,uVar5);
      if (lVar6 == 0) {
LAB_04fbe234:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_04fbe234;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar7;
        thunk_FUN_02bb0e9c(puVar8,uVar7);
      }
      else {
        FUN_037a6538(lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar12 = uVar12 + 1;
    } while (uVar4 != uVar12);
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar5 = FUN_04fa6670();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0x18),uVar5);
  return;
}


