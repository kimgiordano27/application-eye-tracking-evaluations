/*
FUNCTION_NAME: FUN_059ae588
ENTRY_POINT: 059ae588
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_059ae588(long param_1,long param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_06dc1484 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    DAT_06dc1484 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar6 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(PTR_DAT_06a0f6f8);
    FUN_0544bf54(uVar6,uVar3,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar6 = thunk_FUN_02dd3144();
      puVar4 = PTR_DAT_06a199a8;
    }
    else {
      if (-1 < (int)param_4) {
        if (*(int *)(param_2 + 0x18) - param_3 < (int)param_4) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar6 = thunk_FUN_02dd3144();
          uVar3 = thunk_FUN_02dfd288(OVRMesh_IOVRMeshDataProvider_TypeInfo);
          FUN_05452924(uVar6,uVar3,0);
          goto LAB_059ae758;
        }
        FUN_059ae394(param_1);
        if (param_4 != 0) {
          if (*(char *)(param_1 + 0x47) == '\0') {
            plVar2 = *(long **)(param_1 + 0x30);
            if (plVar2 == (long *)0x0) goto LAB_059ae770;
            uVar3 = (**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
            *(undefined8 *)(param_1 + 0x48) = uVar3;
            *(undefined1 *)(param_1 + 0x47) = 1;
          }
          uVar1 = *(undefined4 *)(param_1 + 0x40);
          if (*(int *)(*(long *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar1 = FUN_059ae774(uVar1,param_2,param_3,param_4);
          plVar2 = *(long **)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x40) = uVar1;
          if (plVar2 == (long *)0x0) {
LAB_059ae770:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar2 + 0x388))
                    (plVar2,param_2,param_3,param_4,*(undefined8 *)(*plVar2 + 0x390));
          *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + (ulong)param_4;
        }
        return;
      }
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar6 = thunk_FUN_02dd3144();
      puVar4 = PTR_DAT_06a0d220;
    }
    uVar3 = thunk_FUN_02dfd288(puVar4);
    uVar5 = thunk_FUN_02dfd288(OVRManager_XrApi_TypeInfo);
    FUN_0544f840(uVar6,uVar3,uVar5,0);
  }
LAB_059ae758:
  uVar3 = thunk_FUN_02dfd288(OVRPlugin_GetBoneSkeleton3Delegate_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar6,uVar3);
}


