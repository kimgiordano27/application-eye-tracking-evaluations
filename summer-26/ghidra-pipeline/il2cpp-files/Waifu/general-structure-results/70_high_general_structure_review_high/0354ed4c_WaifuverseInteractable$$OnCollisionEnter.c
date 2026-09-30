/*
FUNCTION_NAME: WaifuverseInteractable$$OnCollisionEnter
ENTRY_POINT: 0354ed4c
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4
*/


void WaifuverseInteractable__OnCollisionEnter(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),plVar2,
               *(undefined8 *)(*plVar2 + 0x2b0));
    lVar5 = *(long *)(unaff_x19 + 0x28);
    if ((lVar5 != 0) && (plVar2 = *(long **)(lVar5 + 0x38), plVar2 != (long *)0x0)) {
      (**(code **)(*plVar2 + 0x2a8))
                (*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                 *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),plVar2,
                 *(undefined8 *)(*plVar2 + 0x2b0));
      lVar5 = *(long *)(unaff_x19 + 0x28);
      if ((lVar5 != 0) && (plVar2 = *(long **)(lVar5 + 0x40), plVar2 != (long *)0x0)) {
        (**(code **)(*plVar2 + 0x2a8))
                  (*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x14),
                   *(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),plVar2,
                   *(undefined8 *)(*plVar2 + 0x2b0));
        lVar5 = *(long *)(unaff_x19 + 0x38);
        if ((lVar5 != 0) && (plVar2 = *(long **)(lVar5 + 0x18), plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 0x2a8))
                    (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                     *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),plVar2,
                     *(undefined8 *)(*plVar2 + 0x2b0));
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x28), lVar6 != 0)) {
            cVar1 = *(char *)(lVar5 + 0x10);
            if (DAT_086ef190 == (code *)0x0) {
              DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
            }
            lVar5 = (*DAT_086ef190)(lVar6);
            if (lVar5 != 0) {
              if (cVar1 == '\0') {
                if (DAT_086ef278 == (code *)0x0) {
                  DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                }
                (*DAT_086ef278)(lVar5,0);
              }
              else {
                if (DAT_086ef278 == (code *)0x0) {
                  DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                }
                (*DAT_086ef278)(lVar5,1);
                lVar5 = *(long *)(unaff_x19 + 0x30);
                if ((lVar5 == 0) || (plVar2 = *(long **)(lVar5 + 0x28), plVar2 == (long *)0x0))
                goto LAB_0354f0e0;
                (**(code **)(*plVar2 + 0x2a8))
                          (*(undefined4 *)(lVar5 + 0x14),*(undefined4 *)(lVar5 + 0x18),
                           *(undefined4 *)(lVar5 + 0x1c),*(undefined4 *)(lVar5 + 0x20),plVar2,
                           *(undefined8 *)(*plVar2 + 0x2b0));
              }
              if (*(long *)(unaff_x19 + 0x28) != 0) {
                if (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x34) == '\0') {
                  FUN_0354f0e4();
                }
                else {
                  FUN_0354f0e4();
                  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                     (*(long *)(*(long *)(unaff_x19 + 0x28) + 0x28) == 0)) goto LAB_0354f0e0;
                  FUN_0354f0e4();
                  if (DAT_086d7cc6 == '\0') {
                    FUN_0335b6c8(&DAT_083d2c90,1);
                    DataMemoryBarrier(2,3);
                    DAT_086d7cc6 = '\x01';
                  }
                  lVar5 = *(long *)(unaff_x19 + 0x28);
                  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) ||
                     (*(long *)(lVar5 + 0x40) == 0)) goto LAB_0354f0e0;
                  fVar7 = *(float *)(*(long *)(lVar5 + 0x28) + 0xf4);
                  fVar8 = **(float **)(DAT_083d2c90 + 0xb8);
                  fVar9 = (*(float **)(DAT_083d2c90 + 0xb8))[1];
                  lVar5 = FUN_07ae9390(*(long *)(lVar5 + 0x40),0);
                  FUN_07a00714(fVar8 * DAT_012edabc,fVar9 * DAT_012edabc,
                               (1.0 - fVar7) * 360.0 * DAT_012edabc,0);
                  if (lVar5 == 0) goto LAB_0354f0e0;
                  FUN_07a19258(lVar5,0);
                }
                lVar5 = *(long *)(unaff_x19 + 0x38);
                if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x18), lVar6 != 0)) {
                  cVar1 = *(char *)(lVar5 + 0x10);
                  if (DAT_086ef190 == (code *)0x0) {
                    DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
                  }
                  lVar5 = (*DAT_086ef190)(lVar6);
                  if (lVar5 != 0) {
                    if (cVar1 == '\0') {
                      if (DAT_086ef278 == (code *)0x0) {
                        DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                      }
                      (*DAT_086ef278)(lVar5,0);
                      return;
                    }
                    if (DAT_086ef278 == (code *)0x0) {
                      DAT_086ef278 = (code *)FUN_033d1b68(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                    }
                    (*DAT_086ef278)(lVar5,1);
                    fStack000000000000000c = *(float *)(unaff_x19 + 0x48);
                    lVar5 = *(long *)(unaff_x19 + 0x38);
                    if (lVar5 != 0) {
                      uVar4 = DAT_0843a628;
                      if (*(int *)(lVar5 + 0x30) == 1) {
                        plVar2 = *(long **)(lVar5 + 0x18);
                        fStack0000000000000008 =
                             *(float *)(unaff_x19 + 0x20) - fStack000000000000000c;
                        if (*(char *)(lVar5 + 0x11) != '\0') {
                          uVar4 = DAT_0843a650;
                        }
                        puVar3 = (undefined8 *)&stack0x00000008;
                      }
                      else {
                        if (*(int *)(lVar5 + 0x30) != 0) {
                          return;
                        }
                        plVar2 = *(long **)(lVar5 + 0x18);
                        if (*(char *)(lVar5 + 0x11) != '\0') {
                          uVar4 = DAT_0843a650;
                        }
                        puVar3 = (undefined8 *)((long)&stack0x00000008 + 4);
                      }
                      uVar4 = FUN_06843068(puVar3,uVar4,0);
                      if (plVar2 != (long *)0x0) {
                        (**(code **)(*plVar2 + 0x5e8))
                                  (plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x5f0));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0354f0e0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


