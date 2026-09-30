/*
FUNCTION_NAME: FUN_059ac238
ENTRY_POINT: 059ac238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_059ac238(long param_1,long param_2,int param_3,uint param_4)

{
  byte bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar5 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(PTR_DAT_06a0f6f8);
    FUN_0544bf54(uVar5,uVar6,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar5 = thunk_FUN_02dd3144();
      puVar3 = PTR_DAT_06a199a8;
    }
    else {
      if (-1 < (int)param_4) {
        if (*(int *)(param_2 + 0x18) - param_3 < (int)param_4) {
          thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
          uVar5 = thunk_FUN_02dd3144();
          uVar6 = thunk_FUN_02dfd288(OVRMesh_IOVRMeshDataProvider_TypeInfo);
          FUN_05452924(uVar5,uVar6,0);
          goto LAB_059ac3ac;
        }
        FUN_059ac044();
        if (param_4 != 0) {
          if (*(char *)(param_1 + 0x38) == '\0') {
            *(undefined1 *)(param_1 + 0x38) = 1;
            if (*(long *)(param_1 + 0x40) == 0) goto LAB_059ac3c4;
            bVar1 = FUN_059ab678(*(long *)(param_1 + 0x40),0);
            *(byte *)(param_1 + 0x48) = bVar1 & 1;
          }
          plVar2 = *(long **)(param_1 + 0x30);
          if (plVar2 == (long *)0x0) {
LAB_059ac3c4:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar2 + 0x388))
                    (plVar2,param_2,param_3,param_4,*(undefined8 *)(*plVar2 + 0x390));
          *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + (ulong)param_4;
        }
        return;
      }
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar5 = thunk_FUN_02dd3144();
      puVar3 = PTR_DAT_06a0d220;
    }
    uVar6 = thunk_FUN_02dfd288(puVar3);
    uVar4 = thunk_FUN_02dfd288(OVRManager_XrApi_TypeInfo);
    FUN_0544f840(uVar5,uVar6,uVar4,0);
  }
LAB_059ac3ac:
  uVar6 = thunk_FUN_02dfd288(OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,uVar6);
}


