/*
FUNCTION_NAME: FUN_055026ac
ENTRY_POINT: 055026ac
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_055026ac(undefined8 param_1,long *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_06bbf55d & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_0_1_3_TypeInfo);
    DAT_06bbf55d = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_0_1_3_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRPlugin_OVRP_0_1_3_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(param_2);
    }
    plVar3 = (long *)param_2[3];
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      if (iVar2 < 0x27) {
        if (iVar2 == 0x17) {
          FUN_055021b0(param_1,param_2,param_3 & 1);
          return;
        }
        if (iVar2 == 0x26) goto LAB_05502774;
      }
      else {
        if (iVar2 == 0x34) {
LAB_05502774:
          FUN_05502600(param_1,param_2,param_3 & 1);
          return;
        }
        if (iVar2 == 0x37) {
          FUN_05501f14(param_1,param_2,param_3 & 1);
          return;
        }
      }
      plVar3 = (long *)param_2[3];
      FUN_02a7da48(plVar3);
      uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      uVar4 = FUN_054ddc44(uVar4,0);
      uVar5 = thunk_FUN_02f6ef30(OVRPlugin_OVRP_0_5_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


