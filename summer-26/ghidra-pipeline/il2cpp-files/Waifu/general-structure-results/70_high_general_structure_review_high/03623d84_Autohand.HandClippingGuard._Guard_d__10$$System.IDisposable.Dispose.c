/*
FUNCTION_NAME: Autohand.HandClippingGuard.<Guard>d__10$$System.IDisposable.Dispose
ENTRY_POINT: 03623d84
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x03624258) */
/* WARNING: Removing unreachable block (ram,0x03624204) */
/* WARNING: Removing unreachable block (ram,0x03624264) */

void Autohand_HandClippingGuard_<Guard>d__10__System_IDisposable_Dispose(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  int in_w8;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  
  if (in_w8 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x80);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_06853510(*(undefined8 *)(lVar2 + 0x10),0,iVar1,0);
      }
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar2 = (*DAT_086ef188)();
      if (lVar2 != 0) {
        plVar3 = (long *)FUN_07a1bc74(lVar2,0);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        do {
          lVar2 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_083cc870) {
                puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_03624058;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,0);
LAB_03624058:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar6 & 1) == 0) {
            plVar3 = (long *)FUN_0339898c(plVar3,DAT_083cc7a8);
            if (plVar3 == (long *)0x0) goto LAB_036241f8;
            lVar2 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 == 0) goto LAB_03624198;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_03624180;
          }
          lVar2 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_083cc870) {
                puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_036240b8;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,1);
LAB_036240b8:
          plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_083d2258 + 0x130)) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_083d2258 + 0x130) * 8 + -8)
              != DAT_083d2258)) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1fec(plVar5);
          }
          if (DAT_086ef190 == (code *)0x0) {
            DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
          }
          lVar2 = (*DAT_086ef190)(plVar5);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          if (DAT_086ef278 == (code *)0x0) {
            DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)")
            ;
          }
          (*DAT_086ef278)(lVar2,1);
        } while( true );
      }
    }
  }
  else {
    FUN_03624750();
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    lVar2 = (*DAT_086ef188)();
    if (lVar2 != 0) {
      plVar3 = (long *)FUN_07a1bc74(lVar2,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      do {
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_083cc870) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_03623e38;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,0);
LAB_03623e38:
        uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar6 & 1) == 0) {
          plVar3 = (long *)FUN_0339898c(plVar3,DAT_083cc7a8);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar2 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar6 == 0) goto LAB_03623f74;
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          goto LAB_03623f5c;
        }
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_083cc870) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_03623e98;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc870,1);
LAB_03623e98:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_083d2258 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_083d2258 + 0x130) * 8 + -8) !=
            DAT_083d2258)) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec(plVar5);
        }
        if (DAT_086ef190 == (code *)0x0) {
          DAT_086ef190 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
        }
        lVar2 = (*DAT_086ef190)(plVar5);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        if (DAT_086ef278 == (code *)0x0) {
          DAT_086ef278 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
        (*DAT_086ef278)(lVar2,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03624180:
    if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_036241ec;
    }
  }
LAB_03624198:
  puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc7a8,0);
LAB_036241ec:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_036241f8:
  FUN_036243f0();
  FUN_036246a0();
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_03623f5c:
    if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_036241b4;
    }
  }
LAB_03623f74:
  puVar4 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083cc7a8,0);
LAB_036241b4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


