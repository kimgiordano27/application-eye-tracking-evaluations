/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$ToggleFollowRotation
ENTRY_POINT: 04da0880
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__ToggleFollowRotation(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  
  uVar3 = FUN_0623c008();
  puVar2 = PTR_DAT_067cbde8;
  lVar6 = *(long *)PTR_DAT_067cbde8;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar6);
    lVar6 = *(long *)puVar2;
  }
  FUN_06388940(uVar3,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 8),0);
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    plVar4 = (long *)FUN_0623c008(*(long *)(unaff_x20 + 0x18),0);
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_067cbdd0 + 0x130);
      if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
          (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_067cbdd0)
          ) && (plVar4 = (long *)FUN_06389a0c(plVar4,0), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      }
    }
    plVar4 = *(long **)(unaff_x20 + 0x10);
    if (plVar4 != (long *)0x0) {
      lVar6 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02f41e9c(lVar6);
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Update;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02f421d0(plVar4,lVar6,4);
Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__Update:
                    /* WARNING: Could not recover jumptable at 0x04da09c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


