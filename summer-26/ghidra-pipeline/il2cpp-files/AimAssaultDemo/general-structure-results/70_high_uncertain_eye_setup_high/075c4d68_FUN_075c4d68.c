/*
FUNCTION_NAME: FUN_075c4d68
ENTRY_POINT: 075c4d68
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_075c4d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  if ((DAT_0826e854 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(OVRPlugin_OVRP_1_61_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07de5f60);
    FUN_0373b518(OVRPlugin_OVRP_1_74_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_75_0_TypeInfo);
    DAT_0826e854 = 1;
  }
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_075c52bc(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = FUN_059ec97c(*(long *)(param_1 + 0x18),param_2,param_3,&local_38,
                         *(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
    if ((uVar1 & 1) == 0) {
      local_50 = param_2;
      uStack_48 = param_3;
      uVar3 = FUN_0623cf1c(&local_50,0);
      uVar3 = System_Convert__ToInt32(*(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo,uVar3,0);
      if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
      }
      FUN_0755de80(uVar3,0);
      return;
    }
    lVar2 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07de5f60);
    FUN_062855bc(lVar2,0);
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x18) = param_4;
      *(undefined4 *)(lVar2 + 0x10) = param_5;
      thunk_FUN_037aeb94((undefined8 *)(lVar2 + 0x18),param_4);
      if ((local_38 != 0) && (*(long *)(local_38 + 0x20) != 0)) {
        FUN_05566460(*(long *)(local_38 + 0x20),lVar2,*(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


