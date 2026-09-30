/*
FUNCTION_NAME: FUN_053d4854
ENTRY_POINT: 053d4854
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053d4854(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  undefined1 auStack_70 [16];
  long local_60;
  long local_58;
  
  if ((DAT_066d09db & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_PropagationPaths_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_28_0_TypeInfo);
    DAT_066d09db = 1;
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x8b8))(auStack_70,param_1,param_2,*(undefined8 *)(*param_1 + 0x8c0));
    puVar2 = OVRPlugin_OVRP_1_28_0_TypeInfo;
    puVar1 = UnityEngine_UIElements_PropagationPaths_TypeInfo;
    if (local_60 != 0) {
      if (0 < *(int *)(local_60 + 0x18)) {
        uVar7 = 0;
        do {
          if (local_58 == 0) goto LAB_053d49b8;
          if (*(uint *)(local_58 + 0x18) <= uVar7) {
LAB_053d49bc:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          plVar8 = (long *)(local_58 + (long)(int)uVar7 * 8 + 0x20);
          plVar4 = (long *)*plVar8;
          if (plVar4 == (long *)0x0) goto LAB_053d49b8;
          uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
          uVar6 = thunk_FUN_04c08854(uVar5,*(undefined8 *)puVar1,0);
          bVar3 = *(uint *)(local_58 + 0x18) <= uVar7;
          if ((uVar6 & 1) == 0) {
            if (bVar3) goto LAB_053d49bc;
            plVar4 = (long *)*plVar8;
            if (plVar4 == (long *)0x0) goto LAB_053d49b8;
            uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
            uVar6 = thunk_FUN_04c08854(uVar5,*(undefined8 *)puVar2,0);
            if ((uVar6 & 1) != 0) {
              if (*(uint *)(local_58 + 0x18) <= uVar7) goto LAB_053d49bc;
              *param_4 = *plVar8;
              plVar4 = param_4;
              goto LAB_053d4988;
            }
          }
          else {
            if (bVar3) goto LAB_053d49bc;
            *param_3 = *plVar8;
            plVar4 = param_3;
LAB_053d4988:
            thunk_FUN_02bb0e9c(plVar4);
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < *(int *)(local_60 + 0x18));
      }
      return;
    }
  }
LAB_053d49b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


