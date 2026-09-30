/*
FUNCTION_NAME: OVRPlugin.OVRP_1_19_0$$.cctor
ENTRY_POINT: 033f1278
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRPlugin_OVRP_1_19_0___cctor(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  
  if ((*(byte *)(unaff_x21 + 0xb71) & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    *(undefined1 *)(unaff_x21 + 0xb71) = 1;
  }
  if ((uint)param_1[1] == 0) {
    uVar4 = *param_1;
    if (param_2 <= uVar4) {
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar4 / param_2;
      }
      *param_1 = uVar4 - (uVar7 & 0xffffffff) * param_2;
      goto LAB_033f1348;
    }
LAB_033f1310:
    uVar7 = 0;
  }
  else {
    uVar4 = param_2 >> 0x20;
    uVar3 = (uint)(param_2 >> 0x20);
    if ((uint)param_1[1] < uVar3) {
      uVar5 = *(ulong *)((long)param_1 + 4);
      if (uVar5 < uVar4) goto LAB_033f1310;
      uVar1 = *param_1;
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar5 / uVar4;
      }
      if (*(int *)(*(long *)StringLiteral_9323 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar6 = (uVar7 & 0xffffffff) * (param_2 & 0xffffffff);
      uVar4 = CONCAT44((int)uVar5 - (int)uVar7 * uVar3,(int)uVar1) - uVar6;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033f1204 with catch @ 033f12ec
                        */
      if (CARRY8(uVar6,uVar4)) {
        do {
          bVar2 = CARRY8(uVar4,param_2);
          uVar4 = uVar4 + param_2;
          uVar7 = (ulong)((int)uVar7 - 1);
        } while (!bVar2);
      }
    }
    else {
      uVar7 = 0;
      uVar4 = *param_1 - (param_2 << 0x20);
      do {
        bVar2 = CARRY8(uVar4,param_2);
        uVar4 = uVar4 + param_2;
        uVar7 = (ulong)((int)uVar7 - 1);
      } while (!bVar2);
    }
    *param_1 = uVar4;
  }
LAB_033f1348:
  return uVar7 & 0xffffffff;
}


