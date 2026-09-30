/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 04563e44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  
  if (param_1 != 0) {
    if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_02f45174(), lVar1 == 0)) {
      uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,0);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(long *)(param_1 + 0x20) = unaff_x20;
    if (unaff_x21 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*unaff_x21 + 0x938))();
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x298))();
        if ((uVar3 & 1) == 0) {
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02f41e9c();
          }
          plVar2 = (long *)thunk_FUN_02f45270();
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c(lVar1);
          }
          FUN_03e8c90c(plVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
        }
        else {
          uVar4 = *(undefined8 *)PTR_DAT_067cda80;
          if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar4 = FUN_050e4454(uVar4,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*unaff_x23);
          }
          plVar2 = (long *)FUN_05115b34(uVar4);
          lVar1 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c(lVar1);
          }
          lVar1 = **(long **)(lVar1 + 0xc0);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02f41e9c(lVar1);
          }
          if (plVar2 != (long *)0x0) {
            if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) !=
                lVar1)) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08d48(plVar2);
            }
          }
        }
        return plVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


