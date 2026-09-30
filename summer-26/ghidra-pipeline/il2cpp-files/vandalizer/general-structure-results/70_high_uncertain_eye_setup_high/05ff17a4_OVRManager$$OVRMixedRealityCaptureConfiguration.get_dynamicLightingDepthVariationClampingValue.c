/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue
ENTRY_POINT: 05ff17a4
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


void OVRManager__OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_05ff17fc;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_0322c1e8();
LAB_05ff17fc:
  (*(code *)*puVar1)();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
    uVar2 = thunk_FUN_0322f148(*unaff_x22);
    FUN_056fa11c();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_05ff1890;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0322c1e8(plVar6,*unaff_x23,1);
LAB_05ff1890:
      (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_05f218c8(*(long *)(unaff_x19 + 0x28),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


