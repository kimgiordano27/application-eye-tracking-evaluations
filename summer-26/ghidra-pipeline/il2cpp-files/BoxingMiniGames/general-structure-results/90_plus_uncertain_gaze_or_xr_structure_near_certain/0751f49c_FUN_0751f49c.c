/*
FUNCTION_NAME: FUN_0751f49c
ENTRY_POINT: 0751f49c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0751f6e4) */
/* WARNING: Removing unreachable block (ram,0x0751f7a4) */

undefined8
FUN_0751f49c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  puVar1 = PTR_DAT_079fd4b0;
  if ((DAT_07ef4bb8 & 1) == 0) {
    FUN_03642964(PTR_DAT_079fff08);
    FUN_03642964(PTR_DAT_07a20a90);
    FUN_03642964(PTR_DAT_07a20a98);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_set_recomputeTopElementUnderPointer__
                );
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>__ctor__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_Init__);
    FUN_03642964(Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__);
    DAT_07ef4bb8 = 1;
  }
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = OVRTask_CombinedTaskData_<>c<OVRResult<Guid,_Int32Enum>>__<_cctor>b__10_0
                    (param_3,*(undefined8 *)puVar2);
  puVar3 = Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>__ctor__;
  puVar2 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
  ;
  if ((uVar4 & 1) == 0) {
    if (param_4 == 0) {
LAB_0751f7a0:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (0 < *(int *)(param_4 + 0x18)) {
      uVar7 = thunk_FUN_036aa1c8(
                                Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PreDispatch__
                                );
      uVar7 = FUN_074ee0e4(uVar7,0);
      uVar8 = thunk_FUN_036aa1c8(
                                Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_get_actionKey__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar7,uVar8);
    }
  }
  FUN_0753ada4(param_2,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = FUN_03fc4cf8(*(undefined8 *)puVar3);
  thunk_FUN_0753b1d8(param_2,lVar5,0);
  puVar2 = PTR_DAT_07a20a98;
  if (lVar5 != 0) {
    iVar9 = 0;
    do {
      puVar3 = 
      Method_UnityEngine_UIElements_PointerEventBase<PointerCancelEvent>_set_recomputeTopElementUnderPointer__
      ;
      if (*(int *)(lVar5 + 0x18) <= iVar9) {
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_03fc4778(lVar5,*(undefined8 *)puVar3);
        if ((param_2 != 0) &&
           (lVar5 = FUN_071bd5dc(param_2,param_3,1,0),
           puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__,
           puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_Init__,
           lVar5 != 0)) {
          uVar7 = thunk_FUN_071c6398(param_2,0);
          FUN_074ef460(*(int *)(lVar5 + 0x18) != 0,*(undefined8 *)puVar2,param_3,uVar7,0);
          uVar7 = thunk_FUN_071c6398(param_2,0);
          FUN_074ef460(*(int *)(lVar5 + 0x18) == 1,*(undefined8 *)puVar1,param_3,uVar7,0);
          if (*(int *)(lVar5 + 0x18) != 0) {
            return *(undefined8 *)(lVar5 + 0x20);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        goto LAB_0751f7a0;
      }
      lVar6 = FUN_0459ed6c(lVar5,iVar9,*(undefined8 *)puVar2);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar7 = thunk_FUN_03652da4(lVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_074ee4f8(uVar7,param_3,0);
      if ((uVar4 & 1) == 0) {
        FUN_0750f69c(param_1,lVar6);
      }
      else {
        uVar7 = thunk_FUN_03652da4(lVar6,0);
        FUN_0751c658(param_1,lVar6,uVar7,param_4,param_5,param_6);
      }
      iVar9 = iVar9 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


