/*
FUNCTION_NAME: OVRManager$$CreateMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 02c844d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVRManager__CreateMixedRealityCaptureConfigurationFileFromCmd(void)

{
  void *pvVar1;
  ulong uVar2;
  long unaff_x29;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *in_stack_00000000;
  long lStack0000000000000008;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000004c;
  undefined4 uStack000000000000008c;
  byte bStack0000000000000097;
  
  lStack0000000000000008 = unaff_x29 + -0x50;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(*(long *)(unaff_x29 + -0x28) + 0x20);
  NullCheck(*(void **)(unaff_x29 + -0x58));
  Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4
            (unaff_x29 + -0x88,*(undefined8 *)(unaff_x29 + -0x58));
  uVar4 = *(undefined8 *)(unaff_x29 + -0x88);
  in_stack_00000000[1] = *(undefined8 *)(unaff_x29 + -0x80);
  *in_stack_00000000 = uVar4;
  *(undefined8 *)(unaff_x29 + -0x60) = *(undefined8 *)(unaff_x29 + -0x78);
  in_stack_00000000[5] = in_stack_00000000[1];
  in_stack_00000000[4] = *in_stack_00000000;
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x60);
  uStack000000000000008c = (undefined4)(*(ulong *)(unaff_x29 + -0x20) >> 0x20);
  bStack0000000000000097 =
       Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555
                 (*(ulong *)(unaff_x29 + -0x20) & 0xffffffff,uStack000000000000008c,
                  *(undefined4 *)(unaff_x29 + -0x18),lStack0000000000000008,0);
  bStack0000000000000097 = bStack0000000000000097 & 1;
  if (bStack0000000000000097 != 0) {
    pvVar1 = *(void **)(*(long *)(unaff_x29 + -0x28) + 0x20);
    uVar2 = *(ulong *)(unaff_x29 + -0x20);
    uVar5 = *(undefined4 *)(unaff_x29 + -0x18);
    NullCheck(pvVar1);
    uStack000000000000004c = (undefined4)(uVar2 >> 0x20);
    uVar3 = Collider_ClosestPointOnBounds_mBF2F0C0E76C5F11AED801931D780823A94630952
                      (uVar2 & 0xffffffff,pvVar1,0);
    *(ulong *)(unaff_x29 + -0x20) = CONCAT44(uStack000000000000004c,uVar3);
    *(undefined4 *)(unaff_x29 + -0x18) = uVar5;
  }
  pvVar1 = *(void **)(*(long *)(unaff_x29 + -0x28) + 0x20);
  uVar2 = *(ulong *)(unaff_x29 + -0x20);
  uVar5 = *(undefined4 *)(unaff_x29 + -0x18);
  NullCheck(pvVar1);
  uStack000000000000001c = (undefined4)(uVar2 >> 0x20);
  uVar3 = Collider_ClosestPoint_mFFF9B6F6CF9F18B22B325835A3E2E78A1C03BFCB
                    (uVar2 & 0xffffffff,pvVar1,0);
  *(ulong *)(unaff_x29 + -0x10) = CONCAT44(uStack000000000000001c,uVar3);
  *(undefined4 *)(unaff_x29 + -8) = uVar5;
  return *(undefined4 *)(unaff_x29 + -0x10);
}


