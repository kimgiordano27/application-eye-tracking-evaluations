/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$Setup
ENTRY_POINT: 04a18af4
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


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__Setup(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x23;
  long unaff_x24;
  
  plVar1 = (long *)FUN_054f73b4(param_1,0);
  lVar2 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc720,1);
  if (lVar2 != 0) {
    if ((unaff_x20 != 0) && (lVar3 = thunk_FUN_02dd3048(), lVar3 == 0)) {
      uVar5 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(long *)(lVar2 + 0x20) = unaff_x20;
    LeanTween__value();
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x9c8))(plVar1,lVar2,*(undefined8 *)(*plVar1 + 0x9d0))
      ;
      if (plVar1 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar1 + 0x328))();
        if ((uVar4 & 1) == 0) {
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02dcfd18();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          plVar1 = (long *)thunk_FUN_02dd3144();
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02dcfd18(lVar2);
          }
          FUN_043a9cc8(plVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
        }
        else {
          uVar5 = *(undefined8 *)PTR_DAT_06a10990;
          if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar5 = FUN_054f73b4(uVar5,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02df485c(*unaff_x23);
          }
          plVar1 = (long *)FUN_05529ba8(uVar5);
          lVar2 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02dcfd18(lVar2);
          }
          lVar2 = **(long **)(lVar2 + 0xc0);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_02dcfd18(lVar2);
          }
          if (plVar1 != (long *)0x0) {
            if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
               (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) !=
                lVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar1);
            }
          }
        }
        return plVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


