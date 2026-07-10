/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.BaseTeleportationInteractable$$SendTeleportRequest
ENTRY_POINT: 0363ef64
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__SendTeleportRequest
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4,long *param_5
          )

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 local_f0 [16];
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  
  if ((DAT_03ef6b41 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TryFindComponent___03ce3e40
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TypeInfo_03ce3e38
                );
                    /* try { // try from 0363efb0 to 0373efb3 has its CatchHandler @ 0363f4a0 */
    FUN_01c5c92c(PTR_UnityEngine_Debug_TypeInfo_03cb5ae0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<TeleportingEventArgs>_Get___03ce3e48
                );
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
                    /* try { // try from 0363efcc to 0373efeb has its CatchHandler @ 0363f470 */
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<TeleportingEventArgs>_System_IDisposable_Dispose___03ce3e50
                );
    FUN_01c5c92c(PTR_Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke___03ce3e58);
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo_03cb6048
                );
    FUN_01c5c92c(PTR_StringLiteral_5286_03ce3e60);
    DAT_03ef6b41 = 1;
  }
  puVar2 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  local_b0 = 0;
  local_e0 = 0;
  local_d8 = (long *)0x0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7c = 0;
  local_84 = 0;
  uStack_80 = 0;
  if (param_5 != (long *)0x0) {
                    /* try { // try from 0363f038 to 0373f06f has its CatchHandler @ 0363f48c */
    bVar1 = *(byte *)(*(long *)
                       PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo_03cb6048
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_5 + 0x130)) &&
       (*(long *)(*(long *)(*param_5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         PTR_UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo_03cb6048)) {
      if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar3 = UnityEngine_Object__op_Inequality(param_5,0,0);
      if ((uVar3 & 1) != 0) {
        uVar3 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor__TryGetCurrent3DRaycastHit
                          (param_5,&local_a0,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        lVar6 = param_4[7];
                    /* try { // try from 0363f0a8 to 0373f0d7 has its CatchHandler @ 0363f498 */
        uVar4 = UnityEngine_RaycastHit__get_collider(&local_a0,0);
        if (lVar6 == 0) goto LAB_0363f330;
        uVar3 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager__TryGetInteractableForCollider
                          (lVar6,uVar4,&local_d8,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (local_d8 != param_4) {
          return 0;
        }
        if (*(char *)((long)param_4 + 0x1b4) != '\0') {
          lVar6 = UnityEngine_Component__get_transform(param_4,0);
          if (lVar6 == 0) goto LAB_0363f330;
          uVar7 = UnityEngine_Transform__get_up(lVar6,0);
          uVar11 = param_2;
          uVar12 = param_3;
                    /* try { // try from 0363f110 to 0373f157 has its CatchHandler @ 0363f49c */
          uVar8 = UnityEngine_RaycastHit__get_normal(&local_a0,0);
          fVar9 = (float)FUN_03656df4(uVar7,param_2,param_3,uVar8,uVar11,uVar12,0);
          if (*(float *)(param_4 + 0x37) < fVar9) {
            return 0;
          }
        }
      }
    }
  }
  lVar6 = param_4[0x34];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
                    /* try { // try from 0363f164 to 0373f1eb has its CatchHandler @ 0363f494 */
  uVar3 = UnityEngine_Object__op_Equality(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)
                  PTR_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TypeInfo_03ce3e38
                + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar3 = UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<object>__TryFindComponent
                      (param_4 + 0x34,
                       *(undefined8 *)
                        PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<TeleportationProvider>_TryFindComponent___03ce3e40
                      );
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 0363f2e0 to 0373f2ff has its CatchHandler @ 0363f480 */
      if (*(int *)(*(long *)PTR_UnityEngine_Debug_TypeInfo_03cb5ae0 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
                    /* try { // try from 0363f30c to 0373f313 has its CatchHandler @ 0363f474 */
      UnityEngine_Debug__LogWarning(*(undefined8 *)PTR_StringLiteral_5286_03ce3e60,param_4,0);
      return 0;
    }
  }
  lVar6 = param_4[0x35];
  uVar10 = UnityEngine_Time__get_time(0);
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0;
  local_b8 = (ulong)uVar10 << 0x20;
  puStack_68 = (undefined1 *)uStack_98;
  local_70 = local_a0;
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_4c = uStack_7c;
  local_54 = local_84;
  uStack_50 = uStack_80;
  local_b0 = (int)lVar6;
  uVar3 = (**(code **)(*param_4 + 0x868))
                    (param_4,param_5,&local_70,&local_d0,*(undefined8 *)(*param_4 + 0x870));
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable__UpdateTeleportRequestRotation
            (param_4,param_5,&local_d0);
  plVar5 = (long *)param_4[0x34];
  if (plVar5 == (long *)0x0) {
LAB_0363f330:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
                    /* try { // try from 0363f218 to 0373f21b has its CatchHandler @ 0363f46c */
  puStack_68 = (undefined1 *)uStack_c8;
  local_70 = local_d0;
  uStack_58 = (undefined4)local_b8;
  local_54 = (undefined4)((ulong)local_b8 >> 0x20);
  uStack_60 = uStack_c0;
  uStack_50 = local_b0;
  uVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,&local_70,*(undefined8 *)(*plVar5 + 0x1c0));
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (param_4[0x38] != 0) {
    if (param_4[0x39] == 0) goto LAB_0363f330;
    local_f0 = UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<object>__Get
                         (param_4[0x39],&local_e0,
                          *(undefined8 *)
                           PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<TeleportingEventArgs>_Get___03ce3e48
                         );
                    /* try { // try from 0363f25c to 0373f28f has its CatchHandler @ 0363f490 */
    local_70 = 0;
    if (local_e0 == 0) {
      puStack_68 = local_f0;
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    *(long *)(local_e0 + 0x10) = (long)param_5;
    puStack_68 = local_f0;
    thunk_FUN_01cc8040((long *)(local_e0 + 0x10),param_5);
    if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    *(long *)(local_e0 + 0x18) = (long)param_4;
    thunk_FUN_01cc8040((long *)(local_e0 + 0x18),param_4);
    if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    *(undefined4 *)(local_e0 + 0x40) = local_b0;
                    /* try { // try from 0363f2a8 to 0373f2ab has its CatchHandler @ 0363f478 */
    *(undefined8 *)(local_e0 + 0x28) = uStack_c8;
    *(undefined8 *)(local_e0 + 0x20) = local_d0;
    *(long *)(local_e0 + 0x38) = local_b8;
    *(undefined8 *)(local_e0 + 0x30) = uStack_c0;
    if (param_4[0x38] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    UnityEngine_Events_UnityEvent<object>__Invoke
              (param_4[0x38],local_e0,
               *(undefined8 *)
                PTR_Method_UnityEngine_Events_UnityEvent<TeleportingEventArgs>_Invoke___03ce3e58);
                    /* try { // try from 0363f2c4 to 0373f2c7 has its CatchHandler @ 0363f4a0 */
    UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<object>__System_IDisposable_Dispose
              (local_f0,*(undefined8 *)
                         PTR_Method_UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_PooledObject<TeleportingEventArgs>_System_IDisposable_Dispose___03ce3e50
              );
  }
  return 1;
}


