/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$ToNativeArray
ENTRY_POINT: 05d43338
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__ToNativeArray(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_02fe925c(PTR_DAT_06fb53b0);
  FUN_02fe925c(PTR_DAT_06fb5318);
  FUN_02fe925c(PTR_DAT_06f6d618);
  *(undefined1 *)(unaff_x20 + 0xb1a) = 1;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
  uVar2 = thunk_FUN_03010710(uVar5,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
  uVar2 = thunk_FUN_03010710(uVar5,*unaff_x23);
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x70),uVar2);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_068f8810(uVar2,0,0);
  puVar1 = PTR_DAT_06fb5318;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar2 = thunk_FUN_03010710(uVar5,*(undefined8 *)PTR_DAT_06fb5318);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar2;
    uVar2 = thunk_FUN_03010710(uVar5,*(undefined8 *)puVar1);
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x80),uVar2);
  }
  if ((*(long *)(unaff_x19 + 0x48) != 0) &&
     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x98), lVar4 != 0)) {
    *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(unaff_x19 + 0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


