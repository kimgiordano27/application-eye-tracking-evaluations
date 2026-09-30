/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 04a17c24
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long unaff_x24;
  
  uVar2 = (**(code **)(*param_1 + 0x328))();
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_04a17f04;
    uVar2 = (**(code **)(*unaff_x20 + 0x448))();
    if ((uVar2 & 1) != 0) {
      uVar7 = (**(code **)(*unaff_x20 + 0x4c8))();
      uVar8 = *(undefined8 *)PTR_DAT_06a0a830;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(unaff_x24 + 0xe0));
      }
      uVar8 = FUN_054f73b4(uVar8,0);
      uVar2 = FUN_055006dc(uVar7,uVar8,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = (**(code **)(*unaff_x20 + 0x4e8))();
        if (lVar3 == 0) goto LAB_04a17f04;
        if (*(int *)(lVar3 + 0x18) == 0) {
LAB_04a17f10:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        unaff_x20 = *(long **)(lVar3 + 0x20);
        if (unaff_x20 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(unaff_x20);
          }
        }
        uVar7 = *(undefined8 *)PTR_DAT_06a10988;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar4 = (long *)FUN_054f73b4(uVar7,0);
        plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
        if (plVar5 == (long *)0x0) goto LAB_04a17f04;
        if ((unaff_x20 != (long *)0x0) &&
           (lVar3 = thunk_FUN_02dd3048(unaff_x20,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
          uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar7,0);
        }
        if ((int)plVar5[3] == 0) goto LAB_04a17f10;
        plVar5[4] = (long)unaff_x20;
        LeanTween__value(plVar5 + 4,unaff_x20);
        if (plVar4 == (long *)0x0) {
LAB_04a17f04:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x9c8))
                                   (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x9d0));
        if (plVar4 == (long *)0x0) goto LAB_04a17f04;
        uVar2 = (**(code **)(*plVar4 + 0x328))(plVar4,unaff_x20,*(undefined8 *)(*plVar4 + 0x330));
        if ((uVar2 & 1) != 0) {
          lVar3 = *(long *)(unaff_x24 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_06a10990;
          goto LAB_04a17c48;
        }
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    plVar4 = (long *)thunk_FUN_02dd3144();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    FUN_043a99b8(plVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  }
  else {
    lVar3 = *(long *)(unaff_x24 + 0xe0);
    puVar6 = (undefined8 *)PTR_DAT_06a10980;
LAB_04a17c48:
    uVar7 = *puVar6;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_054f73b4(uVar7,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x23);
    }
    plVar4 = (long *)FUN_05529ba8(uVar7,unaff_x20,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar4);
      }
    }
  }
  return plVar4;
}


