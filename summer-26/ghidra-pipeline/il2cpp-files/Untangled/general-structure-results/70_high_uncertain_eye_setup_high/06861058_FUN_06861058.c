/*
FUNCTION_NAME: FUN_06861058
ENTRY_POINT: 06861058
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06861058(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_071d6b82 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_89_0_TypeInfo);
    DAT_071d6b82 = 1;
  }
  uStack_78 = param_4[1];
  local_80 = *param_4;
  uStack_68 = param_4[3];
  uStack_70 = param_4[2];
  FUN_068d2e30(param_1,param_2,param_3,&local_80,0);
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)0x0) {
    local_60 = *param_4;
    uStack_58 = param_4[1];
    uStack_50 = param_4[2];
    uStack_48 = param_4[3];
    uVar2 = (**(code **)(*plVar5 + 0x178))
                      (plVar5,param_3,&local_60,*(undefined8 *)(*plVar5 + 0x180));
    plVar5 = *(long **)(param_1 + 0x78);
    if (plVar5 != (long *)0x0) {
      local_60 = *param_4;
      uStack_58 = param_4[1];
      uStack_50 = param_4[2];
      uStack_48 = param_4[3];
      iVar3 = (**(code **)(*plVar5 + 0x178))
                        (plVar5,param_3,&local_60,*(undefined8 *)(*plVar5 + 0x180));
      plVar5 = *(long **)(param_1 + 0x80);
      if (plVar5 != (long *)0x0) {
        local_60 = *param_4;
        uStack_58 = param_4[1];
        uStack_50 = param_4[2];
        uStack_48 = param_4[3];
        uVar4 = (**(code **)(*plVar5 + 0x178))
                          (plVar5,param_3,&local_60,*(undefined8 *)(*plVar5 + 0x180));
        if (param_2 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_89_0_TypeInfo + 0x130);
          if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
             (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)OVRPlugin_OVRP_1_89_0_TypeInfo)) {
            FUN_0685e318((float)iVar3,param_2,uVar2,uVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(param_2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


