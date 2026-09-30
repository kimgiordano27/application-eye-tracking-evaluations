/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetInitialized
ENTRY_POINT: 0749e578
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetInitialized
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  
  *(long *)(unaff_x20 + 0x374) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x36c) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x368) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x360) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_03d1023c();
    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
    thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x23 + 0xb8));
    lVar6 = thunk_FUN_03d2ef40(*unaff_x23);
    FUN_0749d784();
    puVar5 = PTR_DAT_09223cc0;
    puVar4 = PTR_DAT_09223cb8;
    puVar3 = PTR_DAT_09223cb0;
    puVar2 = PTR_DAT_09223ca8;
    puVar1 = PTR_DAT_09223ca0;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar7 = *(long *)PTR_DAT_09223cc0;
      uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar7 = *(long *)puVar5;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
      FUN_054b7910(uVar8,uVar11,*(undefined8 *)puVar4,0);
      uVar10 = FUN_04f0fabc(uVar10,uVar8,*(undefined8 *)puVar1);
      uVar10 = FUN_04f1efa0(uVar10,*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        thunk_FUN_03d1023c();
        plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *plVar9 = lVar6;
        thunk_FUN_03d1023c(plVar9,lVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


