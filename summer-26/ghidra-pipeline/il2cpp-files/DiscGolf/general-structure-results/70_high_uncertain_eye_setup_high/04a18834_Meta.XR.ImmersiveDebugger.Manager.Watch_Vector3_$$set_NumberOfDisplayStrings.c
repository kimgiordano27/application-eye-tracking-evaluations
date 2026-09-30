/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_NumberOfDisplayStrings
ENTRY_POINT: 04a18834
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_NumberOfDisplayStrings(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a10980);
    FUN_02d965b8(PTR_DAT_06a10988);
    FUN_02d965b8(PTR_DAT_06a10990);
    FUN_02d965b8(PTR_DAT_06a0a830);
    FUN_02d965b8(PTR_DAT_06a0d350);
    FUN_02d965b8(PTR_DAT_069fc720);
    *(undefined1 *)(unaff_x20 + 0x297) = 1;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  puVar2 = PTR_DAT_069fb9c0;
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  puVar3 = PTR_DAT_06a0d350;
  plVar5 = (long *)FUN_054f73b4(uVar10,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_04a18c14;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  plVar6 = (long *)FUN_054f73b4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),0);
  if (plVar6 == (long *)0x0) goto LAB_04a18c10;
  uVar7 = (**(code **)(*plVar6 + 0x328))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x330));
  if ((uVar7 & 1) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_04a18c10;
    uVar7 = (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
    if ((uVar7 & 1) != 0) {
      uVar10 = (**(code **)(*plVar5 + 0x4c8))(plVar5,*(undefined8 *)(*plVar5 + 0x4d0));
      uVar11 = *(undefined8 *)PTR_DAT_06a0a830;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(puVar2 + 0xe0));
      }
      uVar11 = FUN_054f73b4(uVar11,0);
      uVar7 = FUN_055006dc(uVar10,uVar11,0);
      if ((uVar7 & 1) != 0) {
        lVar4 = (**(code **)(*plVar5 + 0x4e8))(plVar5,*(undefined8 *)(*plVar5 + 0x4f0));
        if (lVar4 == 0) goto LAB_04a18c10;
        if (*(int *)(lVar4 + 0x18) == 0) {
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar5 = *(long **)(lVar4 + 0x20);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_04a18c14:
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar5);
          }
        }
        uVar10 = *(undefined8 *)PTR_DAT_06a10988;
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar6 = (long *)FUN_054f73b4(uVar10,0);
        plVar8 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
        if (plVar8 == (long *)0x0) goto LAB_04a18c10;
        if ((plVar5 != (long *)0x0) &&
           (lVar4 = thunk_FUN_02dd3048(plVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
          uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar10,0);
        }
        if ((int)plVar8[3] == 0)
        goto Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings;
        plVar8[4] = (long)plVar5;
        LeanTween__value(plVar8 + 4,plVar5);
        if (plVar6 == (long *)0x0) {
LAB_04a18c10:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar6 = (long *)(**(code **)(*plVar6 + 0x9c8))
                                   (plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x9d0));
        if (plVar6 == (long *)0x0) goto LAB_04a18c10;
        uVar7 = (**(code **)(*plVar6 + 0x328))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x330));
        if ((uVar7 & 1) != 0) {
          lVar4 = *(long *)(puVar2 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_06a10990;
          goto LAB_04a18954;
        }
      }
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    plVar5 = (long *)thunk_FUN_02dd3144();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    FUN_043a9cc8(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    lVar4 = *(long *)(puVar2 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_06a10980;
LAB_04a18954:
    uVar10 = *puVar9;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_054f73b4(uVar10,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_05529ba8(uVar10,plVar5,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar5);
      }
    }
  }
  return plVar5;
}


