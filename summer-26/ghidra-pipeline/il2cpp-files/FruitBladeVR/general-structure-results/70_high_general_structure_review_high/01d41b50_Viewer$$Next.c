/*
FUNCTION_NAME: Viewer$$Next
ENTRY_POINT: 01d41b50
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Viewer__Next(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (lVar4 == 0) goto LAB_01d41ca4;
  uVar1 = *(uint *)(lVar4 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 == uVar1 - 1) {
    if (uVar1 <= uVar2) goto LAB_01d41ca8;
    lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
    goto LAB_01d41ca4;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (lVar4 == 0) goto LAB_01d41ca4;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_01d41ca8;
  }
  else {
    if (uVar1 <= uVar2) goto LAB_01d41ca8;
    lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
    goto LAB_01d41ca4;
    UnityEngine_GameObject__SetActive(lVar4,0,0);
    lVar4 = *(long *)(param_1 + 0x20);
    uVar1 = *(int *)(param_1 + 0x28) + 1;
    *(uint *)(param_1 + 0x28) = uVar1;
    if (lVar4 == 0) goto LAB_01d41ca4;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_01d41ca8;
    lVar4 = lVar4 + (long)(int)uVar1 * 8;
  }
  if ((*(long *)(lVar4 + 0x20) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject(*(long *)(lVar4 + 0x20),0), lVar4 != 0)) {
    lVar4 = UnityEngine_GameObject__get_transform(lVar4,0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       ((lVar3 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x30),0), lVar3 != 0 &&
        (UnityEngine_Transform__get_position(lVar3,0), lVar4 != 0)))) {
      UnityEngine_Transform__set_position(lVar4,0);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x28)) {
LAB_01d41ca8:
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
        if ((lVar4 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
          UnityEngine_GameObject__SetActive(lVar4,1,0);
          return;
        }
      }
    }
  }
LAB_01d41ca4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


