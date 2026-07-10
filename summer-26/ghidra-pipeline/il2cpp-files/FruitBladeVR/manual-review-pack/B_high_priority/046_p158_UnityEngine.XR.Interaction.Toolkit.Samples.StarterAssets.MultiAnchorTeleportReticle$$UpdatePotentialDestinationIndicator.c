/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.MultiAnchorTeleportReticle$$UpdatePotentialDestinationIndicator
ENTRY_POINT: 03609e90
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__UpdatePotentialDestinationIndicator
               (long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if ((DAT_03ef6922 & 1) == 0) {
    FUN_01c5c92c(
                PTR_Method_Unity_XR_CoreUtils_Datums_DatumProperty<TeleportVolumeDestinationSettings,_TeleportVolumeDestinationSettingsDatum>_get_Value___03ce2600
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_ITeleportationVolumeAnchorFilter_TypeInfo_03ce2608
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<Transform>_get_Count___03cb69a0);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<Transform>_get_Item___03cb69a8);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6922 = 1;
  }
  uVar9 = UnityEngine_Time__get_time(0);
  *(undefined4 *)(param_1 + 0x48) = uVar9;
  if (((*(long *)(param_1 + 0x40) == 0) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x1e0), lVar2 == 0)) ||
     (lVar2 = Unity_XR_CoreUtils_Datums_DatumProperty<object,_object>__get_Value
                        (lVar2,*(undefined8 *)
                                PTR_Method_Unity_XR_CoreUtils_Datums_DatumProperty<TeleportVolumeDestinationSettings,_TeleportVolumeDestinationSettingsDatum>_get_Value___03ce2600
                        ), lVar2 == 0)) goto LAB_0360a074;
  if (*(char *)(lVar2 + 0x18) == '\0') goto LAB_0360a058;
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (plVar3 = (long *)UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationMultiAnchorVolume__get_destinationEvaluationFilter
                                 (*(long *)(param_1 + 0x40),0), plVar3 == (long *)0x0))
  goto LAB_0360a074;
  lVar2 = *plVar3;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          *(long *)
           PTR_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_ITeleportationVolumeAnchorFilter_TypeInfo_03ce2608
         ) {
        puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_03609f94;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01c8cb54(plVar3,*(long *)
                                PTR_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_ITeleportationVolumeAnchorFilter_TypeInfo_03ce2608
                        ,0);
LAB_03609f94:
  iVar1 = (*(code *)*puVar4)(plVar3,uVar8,puVar4[1]);
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_0360a074;
  if (iVar1 < 0) {
LAB_0360a058:
    lVar2 = *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0x1d8);
    if (lVar2 == 0) goto LAB_0360a074;
    if (*(int *)(lVar2 + 0x18) <= iVar1) goto LAB_0360a058;
    lVar5 = System_Collections_Generic_List<object>__get_Item
                      (lVar2,iVar1,
                       *(undefined8 *)
                        PTR_Method_System_Collections_Generic_List<Transform>_get_Item___03cb69a8);
    if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    }
    uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
    lVar2 = *(long *)(param_1 + 0x30);
    if ((uVar6 & 1) == 0) {
      if (lVar2 != 0) {
        UnityEngine_GameObject__SetActive(lVar2,1,0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (uVar8 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x30),0), lVar5 != 0))
        {
          UnityEngine_Transform__get_position(lVar5,0);
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_MultiAnchorTeleportReticle__PointAtTarget
                    (uVar8);
          return;
        }
      }
      goto LAB_0360a074;
    }
  }
  if (lVar2 != 0) {
    UnityEngine_GameObject__SetActive(lVar2,0,0);
    return;
  }
LAB_0360a074:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


