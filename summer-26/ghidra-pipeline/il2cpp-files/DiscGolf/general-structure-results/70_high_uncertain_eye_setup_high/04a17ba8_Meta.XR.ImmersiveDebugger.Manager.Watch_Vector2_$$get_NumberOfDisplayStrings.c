/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 04a17ba8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings
                 (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int in_w10;
  long unaff_x19;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x24;
  
  if (in_w10 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  puVar2 = PTR_DAT_06a0d350;
  plVar3 = (long *)FUN_054f73b4();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_04a17f08;
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  plVar5 = (long *)FUN_054f73b4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),0);
  if (plVar5 == (long *)0x0) goto LAB_04a17f04;
  uVar6 = (**(code **)(*plVar5 + 0x328))(plVar5,plVar3,*(undefined8 *)(*plVar5 + 0x330));
  if ((uVar6 & 1) == 0) {
    if (plVar3 == (long *)0x0) goto LAB_04a17f04;
    uVar6 = (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
    if ((uVar6 & 1) != 0) {
      uVar9 = (**(code **)(*plVar3 + 0x4c8))(plVar3,*(undefined8 *)(*plVar3 + 0x4d0));
      uVar10 = *(undefined8 *)PTR_DAT_06a0a830;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(unaff_x24 + 0xe0));
      }
      uVar10 = FUN_054f73b4(uVar10,0);
      uVar6 = FUN_055006dc(uVar9,uVar10,0);
      if ((uVar6 & 1) != 0) {
        lVar4 = (**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
        if (lVar4 == 0) goto LAB_04a17f04;
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_04a17f10:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        plVar3 = *(long **)(lVar4 + 0x20);
        if (plVar3 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
LAB_04a17f08:
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar3);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_06a10988;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar5 = (long *)FUN_054f73b4(uVar9,0);
        plVar7 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
        if (plVar7 == (long *)0x0) goto LAB_04a17f04;
        if ((plVar3 != (long *)0x0) &&
           (lVar4 = thunk_FUN_02dd3048(plVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar9 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar9,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_04a17f10;
        plVar7[4] = (long)plVar3;
        LeanTween__value(plVar7 + 4,plVar3);
        if (plVar5 == (long *)0x0) {
LAB_04a17f04:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x9c8))
                                   (plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x9d0));
        if (plVar5 == (long *)0x0) goto LAB_04a17f04;
        uVar6 = (**(code **)(*plVar5 + 0x328))(plVar5,plVar3,*(undefined8 *)(*plVar5 + 0x330));
        if ((uVar6 & 1) != 0) {
          lVar4 = *(long *)(unaff_x24 + 0xe0);
          puVar8 = (undefined8 *)PTR_DAT_06a10990;
          goto LAB_04a17c48;
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
    plVar3 = (long *)thunk_FUN_02dd3144();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    FUN_043a99b8(plVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  }
  else {
    lVar4 = *(long *)(unaff_x24 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_06a10980;
LAB_04a17c48:
    uVar9 = *puVar8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_054f73b4(uVar9,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    plVar3 = (long *)FUN_05529ba8(uVar9,plVar3,0);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar3);
      }
    }
  }
  return plVar3;
}


