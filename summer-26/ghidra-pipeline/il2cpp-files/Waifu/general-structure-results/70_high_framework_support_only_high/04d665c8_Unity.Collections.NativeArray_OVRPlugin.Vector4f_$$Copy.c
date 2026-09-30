/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04d665c8
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(undefined8 *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x21;
  long *unaff_x23;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  uVar5 = FUN_03398a84();
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618(lVar6);
  }
  Newtonsoft_Json_Linq_JToken__SelectTokens
            (uVar5,uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38),0);
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8) = uVar5;
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x30);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0338f618();
  }
  if (DAT_08908cd0 != 0) {
    uVar1 = *(long *)(lVar6 + 0xb8) + 8;
    puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d666dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x23 + 0x188))();
  return;
}


