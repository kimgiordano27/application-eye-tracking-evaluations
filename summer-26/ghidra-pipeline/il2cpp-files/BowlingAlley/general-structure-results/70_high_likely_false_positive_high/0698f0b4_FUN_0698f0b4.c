/*
FUNCTION_NAME: FUN_0698f0b4
ENTRY_POINT: 0698f0b4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0698f0b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  
  puVar9 = Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>_GetPooled__;
  puVar8 = Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>__ctor__;
  puVar7 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__;
  puVar6 = Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__;
  puVar5 = Method_Unity_VisualScripting_Modulo<Vector4>__ctor__;
  puVar4 = Method_Unity_VisualScripting_Modulo<Vector3>__ctor__;
  puVar3 = Method_Unity_VisualScripting_Modulo<Vector2>__ctor__;
  puVar2 = Method_Unity_VisualScripting_Modulo<float>__ctor__;
  puVar1 = Method_Unity_VisualScripting_Modulo<object>__ctor__;
  if ((DAT_076e1d71 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Modulo<Vector3>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Modulo<Vector2>__ctor__);
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Modulo<Vector4>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureOutEvent>__ctor__
                      );
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Modulo<float>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_Init__
                      );
    thunk_FUN_032e1da0(Method_Unity_VisualScripting_Modulo<object>__ctor__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_PostDispatch__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>_GetPooled__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_get_localMousePosition__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_button__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_clickCount__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_localMousePosition__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_modifiers__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mouseDelta__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_GetPooled__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_Init__);
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_get_button__);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_get_localMousePosition__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_get_mousePosition__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterEvent>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__
                      );
    DAT_076e1d71 = 1;
  }
  FUN_068aa130(param_1,0);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_05616b14(uVar10,param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x48),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
  FUN_056154b4(uVar10,param_1,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x50),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
  FUN_056154b4(uVar10,param_1,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x58),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar7);
  FUN_056154b4(uVar10,param_1,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x60) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x60),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar9);
  FUN_05616b14(uVar10,param_1,
               *(undefined8 *)
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>__ctor__);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x68),uVar10);
  uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                               Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_PostDispatch__
                             );
  FUN_05616b14(uVar10,param_1,
               *(undefined8 *)
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_Init__);
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0x70),uVar10);
  plVar12 = *(long **)(param_1 + 0x18);
  if (plVar12 != (long *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    lVar11 = thunk_FUN_032f181c(*(undefined8 *)
                                 (*plVar12 +
                                  (ulong)*(ushort *)
                                          (*(long *)
                                            Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_clickCount__
                                          + 0x50) * 0x10 + 0x140));
    (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 != (long *)0x0) {
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      lVar11 = thunk_FUN_032f181c(*(undefined8 *)
                                   (*plVar12 +
                                    (ulong)*(ushort *)
                                            (*(long *)
                                              Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_get_localMousePosition__
                                            + 0x50) * 0x10 + 0x140));
      (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
      plVar12 = *(long **)(param_1 + 0x18);
      if (plVar12 != (long *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 0x58);
        lVar11 = thunk_FUN_032f181c(*(undefined8 *)
                                     (*plVar12 +
                                      (ulong)*(ushort *)
                                              (*(long *)
                                                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mouseDelta__
                                              + 0x50) * 0x10 + 0x140));
        (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
        plVar12 = *(long **)(param_1 + 0x18);
        if (plVar12 != (long *)0x0) {
          uVar10 = *(undefined8 *)(param_1 + 0x60);
          lVar11 = thunk_FUN_032f181c(*(undefined8 *)
                                       (*plVar12 +
                                        (ulong)*(ushort *)
                                                (*(long *)
                                                  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_localMousePosition__
                                                + 0x50) * 0x10 + 0x140));
          (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 != (long *)0x0) {
            uVar10 = *(undefined8 *)(param_1 + 0x68);
            lVar11 = thunk_FUN_032f181c(*(undefined8 *)
                                         (*plVar12 +
                                          (ulong)*(ushort *)
                                                  (*(long *)
                                                  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_button__
                                                  + 0x50) * 0x10 + 0x140));
            (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
            puVar8 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterEvent>__ctor__;
            puVar7 = 
            Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_get_mousePosition__;
            puVar6 = 
            Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_get_localMousePosition__;
            puVar5 = Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_get_button__;
            puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_Init__;
            puVar3 = Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>_GetPooled__;
            puVar2 = Method_UnityEngine_UIElements_MouseEventBase<MouseDownEvent>__ctor__;
            puVar1 = 
            Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_mousePosition__
            ;
            plVar12 = *(long **)(param_1 + 0x18);
            if (plVar12 != (long *)0x0) {
              uVar10 = *(undefined8 *)(param_1 + 0x70);
              lVar11 = thunk_FUN_032f181c(*(undefined8 *)
                                           (*plVar12 +
                                            (ulong)*(ushort *)
                                                    (*(long *)
                                                  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_modifiers__
                                                  + 0x50) * 0x10 + 0x140));
              (**(code **)(lVar11 + 8))(plVar12,uVar10,lVar11);
              uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar7);
              FUN_04af1118(uVar10,*(undefined8 *)puVar1);
              *(undefined8 *)(param_1 + 0x78) = uVar10;
              thunk_FUN_0333a630((undefined8 *)(param_1 + 0x78),uVar10);
              uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar6);
              FUN_04af1118(uVar10,*(undefined8 *)puVar2);
              *(undefined8 *)(param_1 + 0x80) = uVar10;
              thunk_FUN_0333a630((undefined8 *)(param_1 + 0x80),uVar10);
              uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
              FUN_04af1118(uVar10,*(undefined8 *)puVar4);
              *(undefined8 *)(param_1 + 0x88) = uVar10;
              thunk_FUN_0333a630((undefined8 *)(param_1 + 0x88),uVar10);
              uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar5);
              FUN_04af1118(uVar10,*(undefined8 *)puVar3);
              *(undefined8 *)(param_1 + 0x90) = uVar10;
              thunk_FUN_0333a630((undefined8 *)(param_1 + 0x90),uVar10);
              uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                           Method_System_Collections_Generic_List<OpenXRInput_SerializedBinding>_get_Count__
                                         );
              FUN_06964b18(uVar10,0);
              *(undefined8 *)(param_1 + 0x40) = uVar10;
              thunk_FUN_0333a630((undefined8 *)(param_1 + 0x40),uVar10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


