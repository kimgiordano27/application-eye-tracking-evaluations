/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$ToString
ENTRY_POINT: 058d8b50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 114
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint2x4__ToString(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  float fVar5;
  
  if (param_1 != 0) {
    uVar4 = Unity_Mathematics_uint4__get_zxxz(param_1,0);
    *(undefined4 *)(unaff_x19 + 0x14c) = uVar4;
    puVar1 = OVRPlugin_OVRP_1_34_0_TypeInfo;
    if (*(long *)(unaff_x20 + 0x1f0) != 0) {
      pfVar2 = (float *)FUN_037b9bf0(*(long *)(unaff_x20 + 0x1f0),
                                     *(undefined8 *)OVRPlugin_OVRP_1_34_0_TypeInfo);
      fVar5 = DAT_01208264;
      *(float *)(unaff_x19 + 0x158) = (*pfVar2 + 1.0) * DAT_01208264 * 0.5;
      if (*(long *)(unaff_x20 + 0x1f0) != 0) {
        lVar3 = FUN_037b9bf0(*(long *)(unaff_x20 + 0x1f0),*(undefined8 *)puVar1);
        *(float *)(unaff_x19 + 0x154) = (*(float *)(lVar3 + 4) + 1.0) * fVar5 * 0.5;
        if (*(long *)(unaff_x20 + 0x1f8) != 0) {
          pfVar2 = (float *)FUN_037b61ac(*(long *)(unaff_x20 + 0x1f8),
                                         *(undefined8 *)
                                          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000352_BurstDirectCall_TypeInfo
                                        );
          fVar5 = *pfVar2 * fVar5;
          *(float *)(unaff_x19 + 0x15c) = fVar5 + fVar5;
          if (*(long *)(unaff_x20 + 0x1b0) != 0) {
            uVar4 = FUN_037b0320(*(long *)(unaff_x20 + 0x1b0),
                                 *(undefined8 *)
                                  Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_TypeInfo
                                );
            *(undefined4 *)(unaff_x19 + 0xfc) = uVar4;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


