/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 04a183c0
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long *unaff_x23;
  long unaff_x24;
  
  thunk_FUN_02df485c();
  FUN_054f73b4();
  uVar2 = FUN_055006dc();
  if ((uVar2 & 1) == 0) {
LAB_04a184fc:
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    plVar6 = (long *)thunk_FUN_02dd3144();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    FUN_043a9b44(plVar6,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return plVar6;
  }
  lVar3 = (**(code **)(*unaff_x20 + 0x4e8))();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_04a18580:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar6 = *(long **)(lVar3 + 0x20);
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
    plVar4 = (long *)FUN_054f73b4(uVar7,0);
    plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
    if (plVar5 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar3 = thunk_FUN_02dd3048(plVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar7,0);
      }
      if ((int)plVar5[3] == 0) goto LAB_04a18580;
      plVar5[4] = (long)plVar6;
      LeanTween__value(plVar5 + 4,plVar6);
      if ((plVar4 != (long *)0x0) &&
         (plVar4 = (long *)(**(code **)(*plVar4 + 0x9c8))
                                     (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x9d0)),
         plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x328))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x330));
        if ((uVar2 & 1) != 0) {
          uVar7 = *(undefined8 *)PTR_DAT_06a10990;
          if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar7 = FUN_054f73b4(uVar7,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x23);
          }
          plVar6 = (long *)FUN_05529ba8(uVar7,plVar6,0);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02dcfd18(lVar3);
          }
          lVar3 = **(long **)(lVar3 + 0xc0);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02dcfd18(lVar3);
          }
          if (plVar6 == (long *)0x0) {
            return (long *)0x0;
          }
          if ((*(byte *)(lVar3 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) ==
              lVar3)) {
            return plVar6;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar6);
        }
        goto LAB_04a184fc;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


