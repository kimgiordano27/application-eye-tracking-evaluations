/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController$$GetPosition
ENTRY_POINT: 036a3e34
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Estrada_DefaultMicrophoneController__GetPosition(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  int iVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar3 = FUN_0335b6c8(&DAT_083cf7d0,1);
  uVar4 = FUN_033c6698(uVar3,*(undefined8 *)*unaff_x20);
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar5 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar5,&PTR_PTR_07e8c608,0);
  }
  __cxa_end_catch();
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_079b2acc(0xff800000,*(long *)(unaff_x19 + 0x68),0,0xffffffff);
    lVar7 = *(long *)(unaff_x19 + 0x68);
    if (lVar7 != 0) {
      if (DAT_086ec8f0 == (code *)0x0) {
        DAT_086ec8f0 = (code *)FUN_033d1b68("UnityEngine.Animator::StopPlayback()");
      }
      (*DAT_086ec8f0)(lVar7);
      if (*(long *)(unaff_x19 + 0x68) != 0) {
        if (*(char *)(unaff_x19 + 0x25) != '\0') {
          unaff_x22 = unaff_x23;
        }
        FUN_079b2acc(0xff800000,*(long *)(unaff_x19 + 0x68),*unaff_x22,0xffffffff);
        if (*(char *)(unaff_x19 + 0x2c) != '\0') {
          uVar3 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x21 + 0x2c8),
                               0);
          FUN_07a06400(uVar3,*(undefined4 *)(unaff_x19 + 0x28),0);
        }
        if (*(char *)(unaff_x19 + 0x2c) != '\0') {
          uVar3 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x21 + 0x2c8),
                               0);
          FUN_07a06400(uVar3,*(undefined4 *)(unaff_x19 + 0x28),0);
        }
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          return;
        }
        lVar7 = *(long *)(unaff_x19 + 0x50);
        if (lVar7 != 0) {
          iVar6 = 0;
          while( true ) {
            if (*(int *)(lVar7 + 0x18) <= iVar6) {
              return;
            }
            lVar7 = *(long *)(unaff_x19 + 0x40);
            if (lVar7 == 0) break;
            if (DAT_086ef930 == (code *)0x0) {
              DAT_086ef930 = (code *)FUN_033d1b68("UnityEngine.Transform::GetChild(System.Int32)");
            }
            lVar7 = (*DAT_086ef930)(lVar7,iVar6);
            if (lVar7 == 0) break;
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            lVar7 = (*DAT_086ef190)(lVar7);
            if (lVar7 == 0) break;
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar2 = (*DAT_086ef250)(lVar7);
            if (lVar2 == 0) break;
            lVar2 = FUN_07a1ba3c(lVar2,DAT_08442728,0);
            if (DAT_086ef250 == (code *)0x0) {
              DAT_086ef250 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
            }
            lVar7 = (*DAT_086ef250)(lVar7);
            if ((lVar7 == 0) || (lVar7 = FUN_07a1ba3c(lVar7,DAT_08442680,0), lVar2 == 0)) break;
            iVar1 = *(int *)(unaff_x19 + 0x28);
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            lVar2 = (*DAT_086ef190)(lVar2);
            if (lVar2 == 0) break;
            if (iVar6 == iVar1) {
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
              }
              (*DAT_086ef278)(lVar2,1);
              if (lVar7 == 0) break;
              if (DAT_086ef190 == (code *)0x0) {
                DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              }
              lVar7 = (*DAT_086ef190)(lVar7);
              if (lVar7 == 0) break;
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
              }
              uVar3 = 0;
            }
            else {
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
              }
              (*DAT_086ef278)(lVar2,0);
              if (lVar7 == 0) break;
              if (DAT_086ef190 == (code *)0x0) {
                DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
              }
              lVar7 = (*DAT_086ef190)(lVar7);
              if (lVar7 == 0) break;
              if (DAT_086ef278 == (code *)0x0) {
                DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
              }
              uVar3 = 1;
            }
            (*DAT_086ef278)(lVar7,uVar3);
            lVar7 = *(long *)(unaff_x19 + 0x50);
            iVar6 = iVar6 + 1;
            if (lVar7 == 0) break;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


