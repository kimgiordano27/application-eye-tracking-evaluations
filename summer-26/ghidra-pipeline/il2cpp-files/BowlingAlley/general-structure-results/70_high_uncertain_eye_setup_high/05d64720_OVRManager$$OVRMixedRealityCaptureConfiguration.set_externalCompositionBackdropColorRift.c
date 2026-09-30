/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift
ENTRY_POINT: 05d64720
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint OVRManager__OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar6;
  undefined8 in_stack_00000008;
  
  plVar6 = *(long **)(unaff_x21 + 0x50);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072b1108) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072b1108,0);
OVRManager__OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072b1118) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto FUN_05d647e8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072b1118,1);
FUN_05d647e8:
      uVar1 = (*(code *)*puVar2)(plVar6,unaff_w20,(long)&stack0x00000008 + 4,puVar2[1]);
      if ((uVar1 & 1) == 0) {
        in_stack_00000008._4_4_ = 0;
      }
      *unaff_x19 = in_stack_00000008._4_4_;
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


