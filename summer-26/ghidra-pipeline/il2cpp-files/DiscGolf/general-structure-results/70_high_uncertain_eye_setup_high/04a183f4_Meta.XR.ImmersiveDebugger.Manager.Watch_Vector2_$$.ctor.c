/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.ctor
ENTRY_POINT: 04a183f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___ctor(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  code *in_x9;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x24;
  
  lVar2 = (*in_x9)();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_04a18580:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar6 = *(long **)(lVar2 + 0x20);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x23 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar6);
      }
    }
    uVar7 = *(undefined8 *)PTR_DAT_06a10988;
    if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar3 = (long *)FUN_054f73b4(uVar7,0);
    plVar4 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
    if (plVar4 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar2 = thunk_FUN_02dd3048(plVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
        uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar7,0);
      }
      if ((int)plVar4[3] == 0) goto LAB_04a18580;
      plVar4[4] = (long)plVar6;
      LeanTween__value(plVar4 + 4,plVar6);
      if (plVar3 != (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar3 + 0x9c8))
                                   (plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x9d0));
        if (plVar3 != (long *)0x0) {
          uVar5 = (**(code **)(*plVar3 + 0x328))(plVar3,plVar6,*(undefined8 *)(*plVar3 + 0x330));
          if ((uVar5 & 1) == 0) {
            lVar2 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_02dcfd18();
            }
            if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            plVar6 = (long *)thunk_FUN_02dd3144();
            lVar2 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_02dcfd18(lVar2);
            }
            FUN_043a9b44(plVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
          }
          else {
            uVar7 = *(undefined8 *)PTR_DAT_06a10990;
            if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar7 = FUN_054f73b4(uVar7,0);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02df485c(*unaff_x23);
            }
            plVar6 = (long *)FUN_05529ba8(uVar7,plVar6,0);
            lVar2 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_02dcfd18(lVar2);
            }
            lVar2 = **(long **)(lVar2 + 0xc0);
            if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_02dcfd18(lVar2);
            }
            if (plVar6 != (long *)0x0) {
              if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) !=
                  lVar2)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar6);
              }
            }
          }
          return plVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


