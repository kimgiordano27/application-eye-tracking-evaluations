/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_NumberOfValues
ENTRY_POINT: 04a188c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_NumberOfValues(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x23;
  long *plVar10;
  long unaff_x24;
  
  plVar10 = *(long **)(unaff_x23 + 0x350);
  plVar2 = (long *)FUN_054f73b4();
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(*plVar10 + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) goto LAB_04a18c14;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  plVar4 = (long *)FUN_054f73b4(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),0);
  if (plVar4 == (long *)0x0) goto LAB_04a18c10;
  uVar5 = (**(code **)(*plVar4 + 0x328))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x330));
  if ((uVar5 & 1) == 0) {
    if (plVar2 == (long *)0x0) goto LAB_04a18c10;
    uVar5 = (**(code **)(*plVar2 + 0x448))(plVar2,*(undefined8 *)(*plVar2 + 0x450));
    if ((uVar5 & 1) != 0) {
      uVar8 = (**(code **)(*plVar2 + 0x4c8))(plVar2,*(undefined8 *)(*plVar2 + 0x4d0));
      uVar9 = *(undefined8 *)PTR_DAT_06a0a830;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(unaff_x24 + 0xe0));
      }
      uVar9 = FUN_054f73b4(uVar9,0);
      uVar5 = FUN_055006dc(uVar8,uVar9,0);
      if ((uVar5 & 1) != 0) {
        lVar3 = (**(code **)(*plVar2 + 0x4e8))(plVar2,*(undefined8 *)(*plVar2 + 0x4f0));
        if (lVar3 == 0) goto LAB_04a18c10;
        if (*(int *)(lVar3 + 0x18) == 0) {
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar2 = *(long **)(lVar3 + 0x20);
        if (plVar2 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar10 + 0x130);
          if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10)) {
LAB_04a18c14:
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar2);
          }
        }
        uVar8 = *(undefined8 *)PTR_DAT_06a10988;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar4 = (long *)FUN_054f73b4(uVar8,0);
        plVar6 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
        if (plVar6 == (long *)0x0) goto LAB_04a18c10;
        if ((plVar2 != (long *)0x0) &&
           (lVar3 = thunk_FUN_02dd3048(plVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
          uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar8,0);
        }
        if ((int)plVar6[3] == 0)
        goto Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings;
        plVar6[4] = (long)plVar2;
        LeanTween__value(plVar6 + 4,plVar2);
        if (plVar4 == (long *)0x0) {
LAB_04a18c10:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar4 = (long *)(**(code **)(*plVar4 + 0x9c8))
                                   (plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x9d0));
        if (plVar4 == (long *)0x0) goto LAB_04a18c10;
        uVar5 = (**(code **)(*plVar4 + 0x328))(plVar4,plVar2,*(undefined8 *)(*plVar4 + 0x330));
        if ((uVar5 & 1) != 0) {
          lVar3 = *(long *)(unaff_x24 + 0xe0);
          puVar7 = (undefined8 *)PTR_DAT_06a10990;
          goto LAB_04a18954;
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
    plVar2 = (long *)thunk_FUN_02dd3144();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    FUN_043a9cc8(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
  }
  else {
    lVar3 = *(long *)(unaff_x24 + 0xe0);
    puVar7 = (undefined8 *)PTR_DAT_06a10980;
LAB_04a18954:
    uVar8 = *puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar8 = FUN_054f73b4(uVar8,0);
    if (*(int *)(*plVar10 + 0xe4) == 0) {
      thunk_FUN_02df485c(*plVar10);
    }
    plVar2 = (long *)FUN_05529ba8(uVar8,plVar2,0);
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar2);
      }
    }
  }
  return plVar2;
}


