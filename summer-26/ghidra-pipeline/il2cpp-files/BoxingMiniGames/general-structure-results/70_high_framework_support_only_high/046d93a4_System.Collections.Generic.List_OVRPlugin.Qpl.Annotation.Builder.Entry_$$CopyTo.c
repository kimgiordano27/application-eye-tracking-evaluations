/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPlugin.Qpl.Annotation.Builder.Entry>$$CopyTo
ENTRY_POINT: 046d93a4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__CopyTo
               (undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(8);
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar4 = uVar3;
  do {
    uVar4 = uVar4 - 1;
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return;
    }
    lVar2 = *(long *)(param_2 + 0x10);
    if (lVar2 == 0) goto LAB_046d9484;
    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_046d9488;
    if (param_3 == 0) goto LAB_046d9484;
    lVar2 = lVar2 + (ulong)uVar4 * 0x28;
    in_stack_00000038 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000030 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x30);
    in_stack_00000050 = *(undefined8 *)(lVar2 + 0x40);
    uVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&stack0x00000030,
                       *(undefined8 *)(param_3 + 0x28));
  } while ((uVar1 & 1) == 0);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (ulong)uVar4 * 0x28;
      uVar6 = *(undefined8 *)(lVar2 + 0x28);
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      uVar7 = *(undefined8 *)(lVar2 + 0x30);
      param_1[4] = *(undefined8 *)(lVar2 + 0x40);
      param_1[1] = uVar6;
      *param_1 = uVar5;
      param_1[3] = uVar8;
      param_1[2] = uVar7;
      return;
    }
LAB_046d9488:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
LAB_046d9484:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


