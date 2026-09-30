/*
FUNCTION_NAME: FUN_0685a9b8
ENTRY_POINT: 0685a9b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_0685a9b8(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_071d6b52 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_116_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_115_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_Hand_TypeInfo);
    DAT_071d6b52 = 1;
  }
  uStack_68 = param_4[1];
  local_70 = *param_4;
  uStack_58 = param_4[3];
  uStack_60 = param_4[2];
  FUN_068d2e30(param_1,param_2,param_3,&local_70,0);
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_Hand_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_Hand_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440(param_2);
    }
    plVar3 = *(long **)(param_1 + 0x70);
    lVar4 = param_2[0x7a];
    if (plVar3 != (long *)0x0) {
      local_50 = *param_4;
      uStack_48 = param_4[1];
      uStack_40 = param_4[2];
      uStack_38 = param_4[3];
      (**(code **)(*plVar3 + 0x178))(plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
      if (lVar4 != 0) {
        FUN_047106f8(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_115_0_TypeInfo);
        plVar3 = *(long **)(param_1 + 0x78);
        lVar4 = param_2[0x7a];
        if (plVar3 != (long *)0x0) {
          local_50 = *param_4;
          uStack_48 = param_4[1];
          uStack_40 = param_4[2];
          uStack_38 = param_4[3];
          (**(code **)(*plVar3 + 0x178))(plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
          if (lVar4 != 0) {
            FUN_047107a0(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_116_0_TypeInfo);
            plVar3 = *(long **)(param_1 + 0x80);
            if (plVar3 != (long *)0x0) {
              local_50 = *param_4;
              uStack_48 = param_4[1];
              uStack_40 = param_4[2];
              uStack_38 = param_4[3];
              uVar2 = (**(code **)(*plVar3 + 0x178))
                                (plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
              FUN_0685a200(param_2,uVar2);
              plVar3 = *(long **)(param_1 + 0x88);
              if (plVar3 != (long *)0x0) {
                local_50 = *param_4;
                uStack_48 = param_4[1];
                uStack_40 = param_4[2];
                uStack_38 = param_4[3];
                (**(code **)(*plVar3 + 0x178))
                          (plVar3,param_3,&local_50,*(undefined8 *)(*plVar3 + 0x180));
                plVar3 = (long *)param_2[0x7a];
                if (plVar3 != (long *)0x0) {
                  (**(code **)(*plVar3 + 0x7f8))(plVar3,*(undefined8 *)(*plVar3 + 0x800));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


