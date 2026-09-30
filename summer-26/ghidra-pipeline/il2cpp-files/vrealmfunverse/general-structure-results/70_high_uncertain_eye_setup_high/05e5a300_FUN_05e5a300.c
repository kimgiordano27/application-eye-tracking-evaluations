/*
FUNCTION_NAME: FUN_05e5a300
ENTRY_POINT: 05e5a300
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05e5a300(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_066dc616 & 1) == 0) {
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_131__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                );
    DAT_066dc616 = 1;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = *(int *)(param_1 + 0x38) + param_2;
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__1__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05e799b4(0);
    if ((long)(uVar3 & 0xffffffff) < (long)iVar1) {
      if (DAT_066dc62c == '\0') {
        FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_126__);
        DAT_066dc62c = '\x01';
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 == 0) goto LAB_05e5a468;
        lVar6 = *(long *)(lVar4 + 0x10);
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        lVar7 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__810_126__;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_05e5a468;
        uVar2 = *(uint *)(lVar4 + 0x18);
        if (uVar2 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = uVar5;
        }
        else {
          FUN_038ac0c0(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      *(int *)(param_1 + 0x38) = param_2;
      *(int *)(param_1 + 0x3c) = param_3;
    }
    else {
      *(int *)(param_1 + 0x38) = iVar1;
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_3;
    }
    if (*(char *)(param_1 + 0x48) != '\0') {
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_03f0c8e4(*(long *)(param_1 + 0x40),CONCAT44(param_3,param_2),
                     *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_131__);
        return;
      }
LAB_05e5a468:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  return;
}


