/*
FUNCTION_NAME: FUN_06b5dcd4
ENTRY_POINT: 06b5dcd4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3
*/


uint FUN_06b5dcd4(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_07a4fa9e & 1) == 0) {
    FUN_031f20f4(PTR_DAT_07635e20);
    DAT_07a4fa9e = 1;
  }
  *param_4 = 0;
  iVar2 = FUN_06b8a8b8(param_2,0);
  puVar1 = PTR_DAT_07635e20;
  uVar5 = 0;
  if (param_3 < iVar2) {
    uVar5 = 0;
    do {
      iVar2 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                        (param_2,param_3,0);
      if (iVar2 != 0x22) {
        iVar2 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                          (param_2,param_3,0);
        if (iVar2 == 0x3e) {
          *param_4 = param_3;
          return uVar5;
        }
        uVar3 = UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_PostfixBurstDelegate__Invoke
                          (param_2,param_3,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
        }
        uVar4 = FUN_06b8bb94(uVar3,0);
        uVar5 = uVar5 * 0x21 ^ uVar4 & 0xffff;
      }
      param_3 = param_3 + 1;
      iVar2 = FUN_06b8a8b8(param_2,0);
    } while (param_3 < iVar2);
  }
  return uVar5;
}


