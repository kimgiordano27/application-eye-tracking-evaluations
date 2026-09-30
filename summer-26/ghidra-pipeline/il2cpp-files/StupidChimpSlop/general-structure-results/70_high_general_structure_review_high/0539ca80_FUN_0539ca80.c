/*
FUNCTION_NAME: FUN_0539ca80
ENTRY_POINT: 0539ca80
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
FUN_0539ca80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_DAT_06659f80;
  puVar1 = PTR_DAT_0664a728;
  if ((DAT_06a53160 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664a728);
    FUN_02d4dc40(UnityEngine_ICanvasRaycastFilter_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_Triggers_IAsyncOnPostRenderHandler_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06659f80);
    FUN_02d4dc40(System_Net_HttpAbortDelegate_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerExitHandler_TypeInfo);
    FUN_02d4dc40(System_Net_Http_HttpMethod_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerDownHandler_TypeInfo);
    DAT_06a53160 = 1;
  }
  FUN_053fbea8(param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar3 = (long *)FUN_0539c25c(param_1);
  lVar4 = FUN_053fb6c8(plVar3,0x11,0);
  FUN_053fb75c(plVar3,0x11,5,lVar4,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      uVar5 = FUN_053fb808(plVar3,0x11,param_2,*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)puVar2,
                           *(undefined8 *)System_Net_HttpAbortDelegate_TypeInfo,0xffffffff,0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        uVar6 = FUN_053fb808(plVar3,0x11,param_3,*(undefined8 *)(lVar4 + 0x28),*(undefined8 *)puVar2
                             ,*(undefined8 *)System_Net_Http_HttpMethod_TypeInfo,0xffffffff,0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          uVar7 = FUN_053fb808(plVar3,0x11,param_4,*(undefined8 *)(lVar4 + 0x30),
                               *(undefined8 *)puVar2,
                               *(undefined8 *)
                                Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerDownHandler_TypeInfo
                               ,0xffffffff,0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            uVar8 = FUN_053fb808(plVar3,0x11,param_5,*(undefined8 *)(lVar4 + 0x38),
                                 *(undefined8 *)puVar2,
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerExitHandler_TypeInfo
                                 ,0xffffffff,0);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              uVar9 = FUN_053fb808(plVar3,0x11,param_6,*(undefined8 *)(lVar4 + 0x40),
                                   *(undefined8 *)puVar2,
                                   *(undefined8 *)
                                    Cysharp_Threading_Tasks_Triggers_IAsyncOnPostRenderHandler_TypeInfo
                                   ,0xffffffff,0);
              puVar1 = UnityEngine_ICanvasRaycastFilter_TypeInfo;
              if (plVar3 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
                uVar11 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
                FUN_053b257c(uVar11,param_1,uVar10,uVar5,uVar6,uVar7,uVar8,uVar9,0);
                return uVar11;
              }
              goto LAB_0539cd30;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
LAB_0539cd30:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


