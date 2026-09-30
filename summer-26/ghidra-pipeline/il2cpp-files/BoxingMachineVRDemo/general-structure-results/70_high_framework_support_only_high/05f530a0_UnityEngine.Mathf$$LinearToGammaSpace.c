/*
FUNCTION_NAME: UnityEngine.Mathf$$LinearToGammaSpace
ENTRY_POINT: 05f530a0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool UnityEngine_Mathf__LinearToGammaSpace(ulong param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  uint *puVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_73_0_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x151) = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 400) != 0)) {
    uVar2 = FUN_0583d7f0(*(long *)(param_2 + 400),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_2 + 0x188) == 0) goto LAB_05f53110;
      puVar3 = (uint *)FUN_037b0144(*(long *)(param_2 + 0x188),
                                    *(undefined8 *)OVRPlugin_OVRP_1_73_0_TypeInfo);
      bVar1 = ((*puVar3 ^ 0xffffffff) & 3) == 0;
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
LAB_05f53110:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


