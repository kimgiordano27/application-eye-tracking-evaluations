/*
FUNCTION_NAME: FUN_02e73144
ENTRY_POINT: 02e73144
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02e73144(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff0474 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5174);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_5694);
    thunk_FUN_01ad9084(StringLiteral_5745);
    DAT_03ff0474 = 1;
  }
  lVar3 = System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped___ctor();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar4 = FUN_03922f24(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTyped___ctor();
  if ((lVar5 != 0) && (plVar6 = (long *)FUN_02e72fb4(), plVar6 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)StringLiteral_5174 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_5174))
    {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_02e732f8;
      FUN_038ea808(*(long *)(param_1 + 0x28),plVar6[8],0);
    }
  }
  puVar2 = StringLiteral_5694;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
    plVar8 = (long *)(*(long *)(lVar3 + 0x30) + 0x10);
    lVar5 = *plVar8;
    uVar7 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_5694);
    FUN_02e701ec(uVar7,param_1,*(undefined8 *)StringLiteral_5745);
    plVar6 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar5,uVar7,0);
    if (plVar6 == (long *)0x0) {
      *plVar8 = 0;
    }
    else {
      lVar5 = *(long *)puVar2;
      if ((*plVar6 != lVar5) || (*plVar8 = (long)plVar6, *plVar6 != lVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar6);
      }
    }
    thunk_FUN_01b4f09c(plVar8,plVar6);
    uVar7 = FUN_02e79838(lVar3,param_1);
    FUN_03920cb0(lVar3,uVar7,0);
    return;
  }
LAB_02e732f8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


