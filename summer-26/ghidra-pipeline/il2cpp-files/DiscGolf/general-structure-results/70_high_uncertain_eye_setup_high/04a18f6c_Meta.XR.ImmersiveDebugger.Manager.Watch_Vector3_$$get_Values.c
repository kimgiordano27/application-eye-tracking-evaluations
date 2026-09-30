/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_Values
ENTRY_POINT: 04a18f6c
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_Values
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long unaff_x24;
  
  if (*(long *)(param_1 + -8) != param_3) {
LAB_04a19284:
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(unaff_x20);
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  plVar3 = (long *)FUN_054f73b4(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x28),0);
  if (plVar3 == (long *)0x0) goto LAB_04a19280;
  uVar4 = (**(code **)(*plVar3 + 0x328))();
  if ((uVar4 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_04a19280;
    uVar4 = (**(code **)(*unaff_x20 + 0x448))();
    if ((uVar4 & 1) != 0) {
      uVar7 = (**(code **)(*unaff_x20 + 0x4c8))();
      uVar8 = *(undefined8 *)PTR_DAT_06a0a830;
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)(unaff_x24 + 0xe0));
      }
      uVar8 = FUN_054f73b4(uVar8,0);
      uVar4 = FUN_055006dc(uVar7,uVar8,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = (**(code **)(*unaff_x20 + 0x4e8))();
        if (lVar2 == 0) goto LAB_04a19280;
        if (*(int *)(lVar2 + 0x18) == 0) {
LAB_04a1928c:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        unaff_x20 = *(long **)(lVar2 + 0x20);
        if (unaff_x20 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x23 + 0x130);
          if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23))
          goto LAB_04a19284;
        }
        uVar7 = *(undefined8 *)PTR_DAT_06a10988;
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar3 = (long *)FUN_054f73b4(uVar7,0);
        plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
        if (plVar5 == (long *)0x0) goto LAB_04a19280;
        if ((unaff_x20 != (long *)0x0) &&
           (lVar2 = thunk_FUN_02dd3048(unaff_x20,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
          uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar7,0);
        }
        if ((int)plVar5[3] == 0) goto LAB_04a1928c;
        plVar5[4] = (long)unaff_x20;
        LeanTween__value(plVar5 + 4,unaff_x20);
        if (plVar3 == (long *)0x0) {
LAB_04a19280:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x9c8))
                                   (plVar3,plVar5,*(undefined8 *)(*plVar3 + 0x9d0));
        if (plVar3 == (long *)0x0) goto LAB_04a19280;
        uVar4 = (**(code **)(*plVar3 + 0x328))(plVar3,unaff_x20,*(undefined8 *)(*plVar3 + 0x330));
        if ((uVar4 & 1) != 0) {
          lVar2 = *(long *)(unaff_x24 + 0xe0);
          puVar6 = (undefined8 *)PTR_DAT_06a10990;
          goto LAB_04a18fc4;
        }
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    plVar3 = (long *)thunk_FUN_02dd3144();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    FUN_043a9e4c(plVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
  }
  else {
    lVar2 = *(long *)(unaff_x24 + 0xe0);
    puVar6 = (undefined8 *)PTR_DAT_06a10980;
LAB_04a18fc4:
    uVar7 = *puVar6;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar7 = FUN_054f73b4(uVar7,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x23);
    }
    plVar3 = (long *)FUN_05529ba8(uVar7,unaff_x20,0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar3);
      }
    }
  }
  return plVar3;
}


