/*
FUNCTION_NAME: Viewer$$Previous
ENTRY_POINT: 01d419f8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Viewer__Previous(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (uVar4 == 0) {
    if (lVar3 == 0) goto LAB_01d41b48;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_01d41b4c;
    if ((*(long *)(lVar3 + 0x20) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar3 + 0x20),0), lVar3 == 0))
    goto LAB_01d41b48;
    UnityEngine_GameObject__SetActive(lVar3,0,0);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) goto LAB_01d41b48;
    iVar1 = *(int *)(lVar3 + 0x18);
    uVar4 = iVar1 - 1;
    *(uint *)(param_1 + 0x28) = uVar4;
    if (iVar1 == 0) goto LAB_01d41b4c;
  }
  else {
    if (lVar3 == 0) goto LAB_01d41b48;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_01d41b4c;
    lVar3 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
    if ((lVar3 == 0) || (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
    goto LAB_01d41b48;
    UnityEngine_GameObject__SetActive(lVar3,0,0);
    lVar3 = *(long *)(param_1 + 0x20);
    uVar4 = *(int *)(param_1 + 0x28) - 1;
    *(uint *)(param_1 + 0x28) = uVar4;
    if (lVar3 == 0) goto LAB_01d41b48;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) goto LAB_01d41b4c;
  }
  lVar3 = *(long *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
  if ((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 != 0)) {
    lVar3 = UnityEngine_GameObject__get_transform(lVar3,0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       ((lVar2 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x30),0), lVar2 != 0 &&
        (UnityEngine_Transform__get_position(lVar2,0), lVar3 != 0)))) {
      UnityEngine_Transform__set_position(lVar3,0);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x28)) {
LAB_01d41b4c:
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbdc();
        }
        lVar3 = *(long *)(lVar3 + (long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x20);
        if ((lVar3 != 0) && (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 != 0)) {
          UnityEngine_GameObject__SetActive(lVar3,1,0);
          return;
        }
      }
    }
  }
LAB_01d41b48:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


