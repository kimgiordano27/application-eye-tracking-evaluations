/*
FUNCTION_NAME: OVRPlugin$$GetActionStateFloat
ENTRY_POINT: 05748b2c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStateFloat(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  long *plVar9;
  ulong unaff_x23;
  ulong unaff_x24;
  
  FUN_02f07e70(PTR_DAT_06d37b60);
  *(undefined1 *)(unaff_x20 + 0x9e3) = 1;
  if (unaff_x21 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d57b50 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x21 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)PTR_DAT_06d57b50) {
        unaff_x21 = (long *)0x0;
      }
      if ((((unaff_x21 != (long *)0x0) && ((unaff_x24 & 1) != 0)) && ((unaff_x23 & 1) != 0)) &&
         ((unaff_x22 & 1) != 0)) {
        iVar2 = (**(code **)(*unaff_x21 + 0x238))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x240));
        if ((iVar2 == 0) &&
           (uVar3 = (**(code **)(*unaff_x21 + 0x288))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x290))
           , (uVar3 & 1) == 0)) {
          return;
        }
        plVar4 = (long *)unaff_x21[0x12];
        if (plVar4 != (long *)0x0) {
          plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,0,*(undefined8 *)(*plVar4 + 0x210))
          ;
          plVar9 = (long *)(unaff_x19 + 0x68);
          plVar7 = (long *)*plVar9;
          if (plVar7 == (long *)0x0) {
            *(long *)(unaff_x19 + 0x78) = (long)plVar4;
            thunk_FUN_02f411dc((long *)(unaff_x19 + 0x78),plVar4);
            plVar7 = (long *)(unaff_x19 + 0x60);
            if ((*plVar7 == 0) && (plVar9 = (long *)(unaff_x19 + 0x70), *plVar9 == 0)) {
              if (plVar4 == (long *)0x0) {
                *plVar7 = 0;
                thunk_FUN_02f411dc(plVar7,0);
                plVar4 = (long *)0x0;
                *plVar9 = 0;
              }
              else {
                lVar8 = *(long *)PTR_DAT_06d58798;
                bVar1 = *(byte *)(lVar8 + 0x130);
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar6 = (long *)0x0;
                }
                else {
                  plVar6 = plVar4;
                  if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                    plVar6 = (long *)0x0;
                  }
                }
                *plVar7 = (long)plVar6;
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar6 = (long *)0x0;
                }
                else {
                  plVar6 = plVar4;
                  if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                    plVar6 = (long *)0x0;
                  }
                }
                thunk_FUN_02f411dc(plVar7,plVar6);
                lVar8 = *(long *)PTR_DAT_06d37b60;
                bVar1 = *(byte *)(lVar8 + 0x130);
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar7 = (long *)0x0;
                }
                else {
                  plVar7 = plVar4;
                  if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                    plVar7 = (long *)0x0;
                  }
                }
                *plVar9 = (long)plVar7;
                if (*(byte *)(*plVar4 + 0x130) < bVar1) {
                  plVar4 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
                  plVar4 = (long *)0x0;
                }
              }
              thunk_FUN_02f411dc(plVar9,plVar4);
            }
            goto LAB_05748dd8;
          }
          (**(code **)(*plVar7 + 0x6e8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x6f0));
          plVar4 = (long *)*plVar9;
          if (plVar4 != (long *)0x0) {
            uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
            *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
            thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x78),uVar5);
            plVar4 = *(long **)(unaff_x19 + 0x68);
            if (plVar4 != (long *)0x0) {
              iVar2 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
              if (iVar2 == 4) {
                if (*plVar9 == 0) goto LAB_05748df4;
                *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(*plVar9 + 0x10);
                thunk_FUN_02f411dc(plVar9);
                FUN_056d1dec();
              }
LAB_05748dd8:
              FUN_05698a14(unaff_x21,0);
              return;
            }
          }
        }
LAB_05748df4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
    }
  }
  FUN_056d16cc();
  return;
}


