/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 090c8324
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add
               (undefined1 param_1 [16],long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_2 + 0x24) = in_x9;
  *(long *)(param_2 + 0x1c) = param_1._8_8_;
  *(long *)(param_2 + 0x14) = param_1._0_8_;
  uVar2 = *(undefined8 *)(param_3 + 0x38);
  *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(param_3 + 0x30);
  FUN_08da0170(uVar2,*(undefined8 *)(unaff_x19 + 0x38),param_4,0);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 != 0) {
    FUN_08da0170(lVar3,*(undefined8 *)(unaff_x19 + 0x40),*(undefined4 *)(lVar3 + 0x18),0);
    FUN_08da0170(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x19 + 0x48),0x1a,0);
    lVar3 = *(long *)(unaff_x19 + 0x58);
    if (lVar3 != 0) {
      FUN_08da0170(*(undefined8 *)(unaff_x20 + 0x58),lVar3,*(undefined4 *)(lVar3 + 0x18),0);
      lVar3 = *(long *)(unaff_x19 + 0x60);
      if (lVar3 != 0) {
        FUN_08da0170(*(undefined8 *)(unaff_x20 + 0x60),lVar3,*(undefined4 *)(lVar3 + 0x18),0);
        lVar3 = *(long *)(unaff_x19 + 0x68);
        if (lVar3 != 0) {
          FUN_08da0170(*(undefined8 *)(unaff_x20 + 0x68),lVar3,*(undefined4 *)(lVar3 + 0x18),0);
          *(undefined4 *)(unaff_x19 + 0x70) = *(undefined4 *)(unaff_x20 + 0x70);
          uVar2 = *(undefined8 *)(unaff_x20 + 0x84);
          uVar5 = *(undefined8 *)(unaff_x20 + 0x7c);
          uVar4 = *(undefined8 *)(unaff_x20 + 0x74);
          *(undefined4 *)(unaff_x19 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x8c);
          *(undefined8 *)(unaff_x19 + 0x84) = uVar2;
          *(undefined8 *)(unaff_x19 + 0x7c) = uVar5;
          *(undefined8 *)(unaff_x19 + 0x74) = uVar4;
          uVar1 = *(undefined4 *)(unaff_x20 + 0x90);
          *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
          *(undefined4 *)(unaff_x19 + 0x90) = uVar1;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x98));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


