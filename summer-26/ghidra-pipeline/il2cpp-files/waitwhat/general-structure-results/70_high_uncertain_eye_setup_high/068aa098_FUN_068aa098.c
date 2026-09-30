/*
FUNCTION_NAME: FUN_068aa098
ENTRY_POINT: 068aa098
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined1  [16] FUN_068aa098(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  undefined8 local_30;
  undefined4 local_28;
  
  if ((DAT_075590e4 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_119_0_TypeInfo);
    DAT_075590e4 = 1;
  }
  local_28 = 0;
  local_30 = 0;
  iVar1 = UnityEngine_SkinnedMeshRenderer__set_rootBone_Injected(param_1,&local_30,0,0);
  if (iVar1 == 0) {
    plVar2 = (long *)FUN_068a9eec(param_1);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)OVRPlugin_OVRP_1_119_0_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_068aa15c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)OVRPlugin_OVRP_1_119_0_TypeInfo,1);
LAB_068aa15c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    local_30._0_4_ = extraout_s0;
    uVar8 = extraout_var;
    uVar9 = extraout_var_00;
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
  }
  auVar7._4_4_ = uVar8;
  auVar7._0_4_ = (undefined4)local_30;
  auVar7._8_8_ = uVar9;
  return auVar7;
}


