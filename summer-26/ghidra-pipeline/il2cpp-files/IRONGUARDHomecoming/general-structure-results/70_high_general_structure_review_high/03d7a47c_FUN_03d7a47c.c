/*
FUNCTION_NAME: FUN_03d7a47c
ENTRY_POINT: 03d7a47c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


long * FUN_03d7a47c(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  
  puVar1 = 
  Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
  ;
  if ((DAT_0483a32b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__);
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04575808);
    DAT_0483a32b = 1;
  }
  puVar3 = PTR_DAT_04575808;
  puVar2 = Method_UnityEngine_UI_CanvasUpdateRegistry_PerformUpdate__;
  plVar4 = (long *)FUN_01f08890(*(undefined8 *)puVar1,4);
  uVar9 = 0;
  plVar8 = plVar4 + 4;
  while( true ) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = FUN_03d33a9c(param_1,0);
    if (plVar4 == (long *)0x0) goto LAB_03d7a5ec;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar9) break;
    *plVar8 = lVar5;
    thunk_FUN_01f51358(plVar8,lVar5);
    if (*(uint *)(plVar4 + 3) <= uVar9) break;
    lVar5 = *plVar8;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar5 == 0) {
LAB_03d7a5ec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0404f968(lVar5,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                 1 << (ulong)(uVar9 & 0x1f),0);
    if (*(uint *)(plVar4 + 3) <= uVar9) break;
    if (*plVar8 == 0) goto LAB_03d7a5ec;
    FUN_0404ec90(*plVar8,param_2,0);
    uVar9 = uVar9 + 1;
    plVar8 = plVar8 + 1;
    if (uVar9 == 4) {
      return plVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


