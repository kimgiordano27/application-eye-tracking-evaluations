/*
FUNCTION_NAME: OVRGLTFLoader.<LoadGLTF>d__37$$System.IDisposable.Dispose
ENTRY_POINT: 06a96454
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVRGLTFLoader_<LoadGLTF>d__37__System_IDisposable_Dispose(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long in_x9;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  uVar3 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined4 *)(unaff_x19 + 0x50);
    puVar5 = (undefined4 *)(unaff_x19 + 0x54);
    puVar6 = (undefined4 *)(unaff_x19 + 0x58);
    puVar7 = (undefined4 *)(unaff_x19 + 0x5c);
  }
  else {
    puVar4 = (undefined4 *)(unaff_x19 + 0x40);
    puVar5 = (undefined4 *)(unaff_x19 + 0x44);
    puVar6 = (undefined4 *)(unaff_x19 + 0x48);
    puVar7 = (undefined4 *)(unaff_x19 + 0x4c);
  }
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*unaff_x20 + 0x2a8))(*puVar4,*puVar5,*puVar6,*puVar7);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if (lVar8 != 0) {
      if (DAT_086ef190 == (code *)0x0) {
        DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      }
      lVar8 = (*DAT_086ef190)(lVar8);
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if (lVar9 != 0) {
        if (DAT_086ef8c8 == (code *)0x0) {
          DAT_086ef8c8 = (code *)FUN_033d1b68("UnityEngine.Transform::get_childCount()");
        }
        iVar2 = (*DAT_086ef8c8)(lVar9);
        if (lVar8 != 0) {
          if (DAT_086ef278 == (code *)0x0) {
            DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)")
            ;
          }
          (*DAT_086ef278)(lVar8,0 < iVar2);
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 != 0) {
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            lVar8 = (*DAT_086ef190)(lVar8);
            if (lVar8 != 0) {
              cVar1 = *(char *)(unaff_x19 + 0x68);
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
              }
                    /* WARNING: Could not recover jumptable at 0x06a965c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*DAT_086ef278)(lVar8,cVar1 == '\0');
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


