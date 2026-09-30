/*
FUNCTION_NAME: FUN_05e5aa7c
ENTRY_POINT: 05e5aa7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e5aa7c(long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_066dc61e & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_138__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_140__);
    DAT_066dc61e = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x18) < 1) {
      lVar3 = *param_3;
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c45700(lVar3 == 0,0);
      *(undefined2 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      lVar3 = *param_3;
LAB_05e5ab90:
      *(long *)(param_1 + 0xb8) = lVar3;
      thunk_FUN_02bb0e9c((long *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      return;
    }
    uVar1 = FUN_038abdcc(param_2,0,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_140__);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x108);
      uVar2 = FUN_05e7351c(lVar3,0);
      FUN_05e5c2f0(param_3,uVar1 & 0xffffffff,uVar1 >> 0x20,uVar4,param_1 + 0xc0,param_1 + 0xd0,
                   param_1 + 0xe0,uVar2);
      lVar3 = *param_3;
      if (lVar3 != 0) {
        *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(lVar3 + 0x1c);
        goto LAB_05e5ab90;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


