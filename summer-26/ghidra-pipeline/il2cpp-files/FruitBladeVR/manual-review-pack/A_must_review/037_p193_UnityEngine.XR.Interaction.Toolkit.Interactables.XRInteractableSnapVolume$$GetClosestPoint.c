/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume$$GetClosestPoint
ENTRY_POINT: 03690d34
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume__GetClosestPoint
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  if ((DAT_03ef6e1c & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                );
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6e1c = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    if ((*(long *)(param_4 + 0x40) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x40),0), lVar3 == 0))
    goto LAB_03690ec4;
    uVar2 = UnityEngine_GameObject__get_activeInHierarchy(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_4 + 0x40) == 0) goto LAB_03690ec4;
      uVar2 = UnityEngine_Collider__get_enabled(*(long *)(param_4 + 0x40),0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_4 + 0x40) != 0) {
          UnityEngine_Collider__ClosestPoint(param_1,param_2,param_3,*(long *)(param_4 + 0x40),0);
          return;
        }
        goto LAB_03690ec4;
      }
    }
  }
  plVar7 = *(long **)(param_4 + 0x48);
  if (plVar7 == (long *)0x0) {
LAB_03690eb4:
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
  }
  else {
    lVar3 = *(long *)puVar1;
    if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar2 = UnityEngine_Object__op_Inequality(plVar7,0,0);
      if ((uVar2 & 1) == 0) goto LAB_03690eb4;
      plVar7 = *(long **)(param_4 + 0x48);
      if (plVar7 == (long *)0x0) goto LAB_03690ec4;
    }
    lVar3 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50)
        {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_03690ed8;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c8cb54(plVar7,*(long *)
                                  PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                          ,6);
LAB_03690ed8:
    lVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  if (lVar3 != 0) {
    UnityEngine_Transform__get_position(lVar3,0);
    return;
  }
LAB_03690ec4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


