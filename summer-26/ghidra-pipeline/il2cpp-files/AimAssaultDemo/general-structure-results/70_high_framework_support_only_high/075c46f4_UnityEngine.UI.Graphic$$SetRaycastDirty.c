/*
FUNCTION_NAME: UnityEngine.UI.Graphic$$SetRaycastDirty
ENTRY_POINT: 075c46f4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void UnityEngine_UI_Graphic__SetRaycastDirty(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x22;
  
  FUN_0373b518(PTR_DAT_07d97418);
  FUN_0373b518(OVRPlugin_OVRP_1_52_0_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x84b) = 1;
  uVar1 = FUN_0623d4dc();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
    uVar4 = thunk_FUN_037788cc();
    uVar5 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_58_0_TypeInfo);
    uVar6 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_59_0_TypeInfo);
    FUN_061a1bb8(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_037a15ac(OVRPlugin_OVRP_1_6_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar4,uVar5);
  }
  plVar2 = (long *)FUN_075c3bec();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *plVar2;
  uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar1 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)OVRPlugin_OVRP_1_52_0_TypeInfo) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_075c4798;
      }
      uVar1 = uVar1 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c(plVar2,*(long *)OVRPlugin_OVRP_1_52_0_TypeInfo,2);
LAB_075c4798:
                    /* WARNING: Could not recover jumptable at 0x075c47bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2);
  return;
}


