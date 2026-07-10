/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume$$GetClosestPointOfAttachTransform
ENTRY_POINT: 03690f00
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Interactables_XRInteractableSnapVolume__GetClosestPointOfAttachTransform
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  
  if ((DAT_03ef6e1d & 1) == 0) {
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                );
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef6e1d = 1;
  }
  puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
  plVar7 = *(long **)(param_4 + 0x48);
  if (plVar7 == (long *)0x0) {
LAB_03690ff4:
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
  }
  else {
    lVar2 = *(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      uVar3 = UnityEngine_Object__op_Inequality(plVar7,0,0);
      if ((uVar3 & 1) == 0) goto LAB_03690ff4;
      plVar7 = *(long **)(param_4 + 0x48);
      if (plVar7 == (long *)0x0) goto LAB_036910e8;
    }
    lVar2 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)
             PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50)
        {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_03691018;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c8cb54(plVar7,*(long *)
                                  PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                          ,7);
LAB_03691018:
    lVar2 = (*(code *)*puVar4)(plVar7,param_5,puVar4[1]);
  }
  if (lVar2 != 0) {
    uVar8 = UnityEngine_Transform__get_position(lVar2,0);
    uVar6 = *(undefined8 *)(param_4 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar3 & 1) == 0) {
      if ((*(long *)(param_4 + 0x40) == 0) ||
         (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x40),0), lVar2 == 0))
      goto LAB_036910e8;
      uVar3 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_036910e8;
        uVar3 = UnityEngine_Collider__get_enabled(*(long *)(param_4 + 0x40),0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x40) == 0) goto LAB_036910e8;
          uVar8 = UnityEngine_Collider__ClosestPoint
                            (uVar8,param_2,param_3,*(long *)(param_4 + 0x40),0);
        }
      }
    }
    return uVar8;
  }
LAB_036910e8:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


