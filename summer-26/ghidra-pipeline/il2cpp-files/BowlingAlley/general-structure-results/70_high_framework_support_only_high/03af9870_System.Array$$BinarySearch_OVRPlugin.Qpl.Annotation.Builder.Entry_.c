/*
FUNCTION_NAME: System.Array$$BinarySearch<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03af9870
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__BinarySearch<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  FUN_03293514();
  if ((*(byte *)(**(long **)(unaff_x19 + 0x38) + 0x135) & 1) == 0) {
    FUN_032934b8();
  }
  lVar3 = thunk_FUN_032a56a0();
  FUN_03c50d4c(lVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8));
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = unaff_x20;
    thunk_FUN_0333a630(puVar7);
    puVar1 = PTR_DAT_072798f8;
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bb3828(0);
    puVar2 = PTR_DAT_07281658;
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_03b1c8f8(*puVar7,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x28));
      return uVar5;
    }
    uVar5 = **(undefined8 **)(*(long *)PTR_DAT_07281658 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar4 = FUN_06bece64(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb23f0(*(undefined8 *)PTR_DAT_07281668,0);
      return 0;
    }
    lVar6 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07281660);
    FUN_047a8b64(uVar5,lVar3,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x18),0);
    if (lVar6 != 0) {
      uVar5 = FUN_041e32e0(lVar6,uVar5,*(undefined8 *)PTR_DAT_07281650);
      lVar3 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar3 != 0) {
        uVar5 = FUN_038f5fd0(lVar3,uVar5,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x20));
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


