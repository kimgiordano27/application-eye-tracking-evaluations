/*
FUNCTION_NAME: FUN_05d92754
ENTRY_POINT: 05d92754
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2
*/


undefined8 FUN_05d92754(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__;
  if ((DAT_06b82db4 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PreDispatch__);
    FUN_02d6084c(PTR_DAT_067634e8);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_button__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__)
    ;
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_modifiers__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_Init__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pointerId__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pointerType__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_position__);
    FUN_02d6084c(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pressedButtons__
                );
    DAT_06b82db4 = 1;
  }
  uVar4 = FUN_04da9074(param_1,*(undefined8 *)puVar2);
  puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pressedButtons__;
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    plVar7 = (long *)(param_1 + 0xe0);
    if (*plVar7 == 0) {
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x18), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar8 = *(undefined8 *)(param_1 + 0x68);
      lVar5 = *(long *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pressedButtons__;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar5 = *(long *)puVar2;
      }
      iVar1 = *(int *)(lVar9 + 0x18);
      lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if (lVar9 == 0) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        uVar10 = **(undefined8 **)(lVar5 + 0xb8);
        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                  );
        FUN_04d5b3b8(lVar9,uVar10,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pointerId__
                     ,0);
        plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar6 = lVar9;
        thunk_FUN_02dd37b4(plVar6,lVar9);
      }
      iVar3 = FUN_033a2238(uVar8,lVar9,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__
                          );
      if (iVar3 == iVar1) {
        lVar9 = *(long *)puVar2;
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
        if (lVar5 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar9 = *(long *)puVar2;
          }
          uVar10 = **(undefined8 **)(lVar9 + 0xb8);
          lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                    );
          FUN_04d5b3b8(lVar5,uVar10,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_pointerType__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar6 = lVar5;
          thunk_FUN_02dd37b4(plVar6,lVar5);
        }
        uVar8 = FUN_033b861c(uVar8,lVar5,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_button__
                            );
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar9);
          lVar9 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
        if (lVar5 == 0) {
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar9);
            lVar9 = *(long *)puVar2;
          }
          uVar10 = **(undefined8 **)(lVar9 + 0xb8);
          lVar5 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_modifiers__
                                    );
          FUN_04d5b73c(lVar5,uVar10,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_position__
                       ,0);
          plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
          *plVar6 = lVar5;
          thunk_FUN_02dd37b4(plVar6,lVar5);
        }
        uVar8 = FUN_033aae90(uVar8,lVar5,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PreDispatch__
                            );
        lVar9 = FUN_033b7c6c(uVar8,*(undefined8 *)PTR_DAT_067634e8);
        *plVar7 = lVar9;
        thunk_FUN_02dd37b4(plVar7,lVar9);
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


