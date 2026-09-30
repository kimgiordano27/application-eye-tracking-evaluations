/*
FUNCTION_NAME: FUN_0698fb84
ENTRY_POINT: 0698fb84
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_0698fb84(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__;
  if ((DAT_076e1d76 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0729e098);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_pressedButtons__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072893b8);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>__ctor__);
    thunk_FUN_032e1da0(PTR_DAT_0729e0b8);
    thunk_FUN_032e1da0(PTR_DAT_072893c0);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_GetPooled__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_Init__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_mousePosition__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__);
    DAT_076e1d76 = 1;
  }
  lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_059660a0(lVar8,0);
  puVar7 = Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__;
  puVar6 = Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>__ctor__;
  puVar5 = Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_mousePosition__;
  puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_GetPooled__;
  puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_get_pressedButtons__;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x10) = param_2;
    *(undefined8 *)(lVar8 + 0x18) = param_3;
    thunk_FUN_0333a630((undefined8 *)(lVar8 + 0x18),param_3);
    uVar9 = FUN_039954f8(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar1);
    uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
    FUN_055d2e5c(uVar10,lVar8,*(undefined8 *)puVar5,0);
    uVar9 = FUN_039a8198(uVar9,uVar10,*(undefined8 *)puVar2);
    uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
    Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
              (uVar10,lVar8,*(undefined8 *)puVar6,0);
    uVar9 = FUN_0399a7bc(uVar9,uVar10,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_PostDispatch__
                        );
    lVar8 = *(long *)puVar7;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *(long *)puVar7;
    }
    puVar2 = PTR_DAT_0729e098;
    puVar1 = PTR_DAT_072893b8;
    lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar8);
        lVar8 = *(long *)puVar7;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072893c0);
      FUN_055d2e5c(lVar12,uVar10,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_Init__,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar11 = lVar12;
      thunk_FUN_0333a630(plVar11,lVar12);
    }
    uVar9 = FUN_039a8198(uVar9,lVar12,*(undefined8 *)puVar1);
    uVar9 = FUN_0398c9a0(uVar9,*(undefined8 *)puVar2);
    lVar8 = *(long *)puVar7;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar8);
      lVar8 = *(long *)puVar7;
    }
    puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_Init__;
    lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar8);
        lVar8 = *(long *)puVar7;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0729e0b8);
      Meta_WitAi_Json_WitResponseArray_<get_Childs>d__13__System_IDisposable_Dispose
                (lVar12,uVar10,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_MouseEventBase<MouseMoveEvent>_get_localMousePosition__
                 ,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
      *plVar11 = lVar12;
      thunk_FUN_0333a630(plVar11,lVar12);
    }
    FUN_03995998(uVar9,lVar12,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


