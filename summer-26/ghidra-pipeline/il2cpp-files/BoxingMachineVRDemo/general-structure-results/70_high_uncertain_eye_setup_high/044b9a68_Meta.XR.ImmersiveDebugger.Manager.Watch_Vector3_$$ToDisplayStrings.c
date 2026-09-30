/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$ToDisplayStrings
ENTRY_POINT: 044b9a68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__ToDisplayStrings(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x23;
  long unaff_x24;
  
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88();
    }
  }
  uVar6 = *(undefined8 *)PTR_DAT_0676b178;
  if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar2 = (long *)FUN_05015c2c(uVar6,0);
  lVar3 = FUN_02d60934(*(undefined8 *)PTR_DAT_0675f8d8,1);
  if (lVar3 != 0) {
    if ((unaff_x20 != (long *)0x0) && (lVar4 = thunk_FUN_02d9d438(), lVar4 == 0)) {
      uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar6,0);
    }
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    *(long **)(lVar3 + 0x20) = unaff_x20;
    thunk_FUN_02dd37b4();
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x958))(plVar2,lVar3,*(undefined8 *)(*plVar2 + 0x960))
      ;
      if (plVar2 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar2 + 0x298))();
        if ((uVar5 & 1) == 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_02d9a2e0();
          }
          plVar2 = (long *)thunk_FUN_02d9d534();
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0(lVar3);
          }
          FUN_03e4f15c(plVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
        }
        else {
          uVar6 = *(undefined8 *)PTR_DAT_0676b180;
          if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar6 = FUN_05015c2c(uVar6,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*unaff_x23);
          }
          plVar2 = (long *)FUN_05048158(uVar6);
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0(lVar3);
          }
          lVar3 = **(long **)(lVar3 + 0xc0);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02d9a2e0(lVar3);
          }
          if (plVar2 != (long *)0x0) {
            if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
               (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) !=
                lVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar2);
            }
          }
        }
        return plVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


