/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_depthQuality
ENTRY_POINT: 05ff1784
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_depthQuality(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 *unaff_x22;
  
  FUN_056fa11c();
  puVar1 = PTR_DAT_075f6c80;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f6c80) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_05ff17fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8();
LAB_05ff17fc:
    (*(code *)*puVar2)();
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
      uVar3 = thunk_FUN_0322f148(*unaff_x22);
      FUN_056fa11c();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_05ff1890;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)puVar1,1);
LAB_05ff1890:
        (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_05f218c8(*(long *)(unaff_x19 + 0x28),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


