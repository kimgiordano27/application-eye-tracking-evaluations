/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationArea$$GenerateTeleportRequest
ENTRY_POINT: 03640f30
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_7;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationArea__GenerateTeleportRequest
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined8 local_38;
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef6b51 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6b51 = 1;
  }
  local_38 = 0;
  uVar2 = UnityEngine_RaycastHit__get_collider(param_7,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationArea__IsSphereCastRay
                      (param_6,&local_38);
    if ((uVar3 & 1) != 0) {
      uStack_68 = param_7[1];
      local_70 = *param_7;
      uVar2 = param_7[2];
      uStack_4c = *(undefined8 *)((long)param_7 + 0x24);
      uVar6 = *(undefined8 *)((long)param_7 + 0x1c);
      uStack_58 = (undefined4)param_7[3];
      local_54 = (undefined4)uVar6;
      uStack_50 = (undefined4)((ulong)uVar6 >> 0x20);
      uStack_60 = uVar2;
      uVar3 = UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationArea__IsSphereCastOverlap
                        (&local_70);
      param_3 = (undefined4)uVar6;
      param_2 = (undefined4)uVar2;
      if ((uVar3 & 1) != 0) goto LAB_03640fb8;
    }
    uVar5 = UnityEngine_RaycastHit__get_point(param_7,0);
    *param_8 = uVar5;
    param_8[1] = param_2;
    param_8[2] = param_3;
    lVar4 = UnityEngine_Component__get_transform(param_5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    uVar5 = UnityEngine_Transform__get_rotation(lVar4,0);
    uVar2 = 1;
    param_8[3] = uVar5;
    param_8[4] = param_2;
    param_8[5] = param_3;
    param_8[6] = param_4;
  }
  else {
LAB_03640fb8:
    uVar2 = 0;
  }
  return uVar2;
}


