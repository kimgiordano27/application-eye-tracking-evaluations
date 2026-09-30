/*
FUNCTION_NAME: UnityEngine.UIElements.ContextualMenuManipulator$$OnKeyUpEvent
ENTRY_POINT: 0402f5dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0402f718) */

long UnityEngine_UIElements_ContextualMenuManipulator__OnKeyUpEvent(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *unaff_x22;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__);
  thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<bool>__ctor__);
  *(undefined1 *)(unaff_x19 + 0x585) = 1;
  plVar2 = *(long **)(*unaff_x22 + 0xb8);
  if (*plVar2 == 0) {
    plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_isDelayed__
                                       );
    uVar6 = *(undefined8 *)
             Method_UnityEngine_UIElements_TextInputBaseField<ulong>_get_textInputBase__;
    FUN_035ac8e8(plVar2,0);
    FUN_0402d3ac(plVar2,uVar6);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_02159f84(plVar2,*(undefined8 *)Method_System_Collections_Generic_Queue<bool>__ctor__
                         ,*(undefined8 *)
                           Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Add__);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar6;
    thunk_FUN_01f51358(*(undefined8 *)(*unaff_x22 + 0xb8));
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0402f6e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0402f6e8:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
    plVar2 = *(long **)(*unaff_x22 + 0xb8);
  }
  return *plVar2;
}


