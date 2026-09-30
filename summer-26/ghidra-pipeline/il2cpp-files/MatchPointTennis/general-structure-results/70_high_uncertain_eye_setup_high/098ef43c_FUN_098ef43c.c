/*
FUNCTION_NAME: FUN_098ef43c
ENTRY_POINT: 098ef43c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_098ef43c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long local_40;
  undefined4 local_34;
  
  puVar3 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo;
  if ((DAT_0a549029 & 1) == 0) {
    FUN_04447ba8(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_04447ba8(UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f25dc0);
    FUN_04447ba8(UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f89348);
    FUN_04447ba8(PTR_DAT_09f8f648);
    DAT_0a549029 = 1;
  }
  local_34 = 0;
  local_40 = 0;
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_09908838(lVar7,param_1,param_2,0);
  puVar3 = UnityEngine_Pool_ObjectPool<Awaitable>_TypeInfo;
  if (lVar7 == 0) goto LAB_098ef684;
  uVar8 = FUN_09908bc4(lVar7,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*(long *)puVar3);
  }
  lVar9 = FUN_098ef240(uVar8);
  puVar2 = PTR_DAT_09f25dc0;
  if (lVar9 != 0) {
    if (*(int *)(*(long *)PTR_DAT_09f25dc0 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar10 = FUN_098d105c(lVar9,0);
    if ((uVar10 & 1) != 0) {
      uVar8 = FUN_09908bec(lVar7,0);
      uVar10 = FUN_07a3bf64(uVar8,&local_34,0);
      uVar4 = local_34;
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar10 = FUN_098ce52c(uVar4,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = FUN_09908be4(lVar7,0);
          if (lVar11 == 0) {
LAB_098ef684:
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          iVar6 = FUN_078b96cc(lVar11,0x25,0);
          if ((iVar6 == -1) &&
             (iVar6 = FUN_078b9674(lVar11,*(undefined8 *)PTR_DAT_09f8f648,4,0), uVar4 = local_34,
             iVar6 == -1)) {
            uVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f89348);
            FUN_088378e0(uVar8,lVar9,uVar4,0);
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar9 = *(long *)puVar3;
            }
            if (**(long **)(lVar9 + 0xb8) == 0) goto LAB_098ef684;
            uVar10 = FUN_074444a8(**(long **)(lVar9 + 0xb8),uVar8,&local_40,
                                  *(undefined8 *)
                                   OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo
                                 );
            if ((uVar10 & 1) != 0) {
              if (local_40 == 0) goto LAB_098ef684;
              cVar1 = *(char *)(local_40 + 0x38);
              bVar5 = FUN_09908bcc(lVar7,0);
              if ((cVar1 == '\0') != (bool)(bVar5 & 1)) {
                if (local_40 == 0) goto LAB_098ef684;
                FUN_098eebc0(local_40,lVar7);
              }
            }
          }
        }
      }
    }
  }
  return;
}


