/*
FUNCTION_NAME: Unity.Collections.xxHash3.Hash128Long_00000A71$PostfixBurstDelegate$$EndInvoke
ENTRY_POINT: 07de01a0
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;validity_gate;weak_pose_support;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;weak_vector_component_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07de02c8) */

void Unity_Collections_xxHash3_Hash128Long_00000A71_PostfixBurstDelegate__EndInvoke
               (uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  long *plVar5;
  long unaff_x22;
  undefined1 auVar6 [16];
  
  plVar5 = *(long **)(unaff_x21 + 0xc18);
  if ((*(byte *)(unaff_x22 + 0xd0) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f67c18);
    *(undefined1 *)(unaff_x22 + 0xd0) = 1;
  }
  lVar2 = *plVar5;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0408f364();
    lVar2 = *plVar5;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(uint *)(lVar4 + 0x18) <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_04031894();
  }
  lVar4 = *(long *)(lVar4 + (long)(int)param_1 * 8 + 0x20);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    auVar6 = Unity_XR_OpenVR_OpenVRHMD__get_leftEyeVelocity(param_1);
    puVar1 = PTR_DAT_08f90398;
    lVar2 = auVar6._0_8_;
    if ((DAT_0954f0aa & 1) == 0) {
      FUN_0403162c(PTR_DAT_08f90398);
      DAT_0954f0aa = 1;
    }
    uVar3 = *(undefined8 *)puVar1;
    *(undefined1 *)(lVar2 + 0x2d) = 1;
    FUN_06324c9c(lVar2 + 0x30,auVar6._8_8_ & 0xffffffff,uVar3);
    if (*(char *)(lVar2 + 0x2c) == '\0') {
      FUN_07de0490();
    }
    return;
  }
  FUN_07e41c64(lVar4,param_2,0);
  return;
}


