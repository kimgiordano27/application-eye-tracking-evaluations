/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<TMP_LinkInfo>
ENTRY_POINT: 0211e848
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__set_Item<TMP_LinkInfo>(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  uint uVar7;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xa78));
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputDevice>__
                    );
  *(undefined1 *)(unaff_x22 + 0xc99) = 1;
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *unaff_x23;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x78) != '\0') {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0211c608();
    lVar4 = *unaff_x23;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *unaff_x23;
  }
  uVar1 = *(uint *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if ((int)uVar1 < 1) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      uVar1 = *(uint *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
    }
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__
                                    );
      FUN_030f23f0(unaff_x21,uVar1,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<float,_byte>__);
    }
    puVar3 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        lVar4 = *unaff_x23;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *unaff_x23;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
        if (lVar4 == 0) goto LAB_0211ea00;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar4 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_0211ea00;
        if ((*(long *)(lVar4 + 0x48) == unaff_x20) &&
           (((unaff_x19 & 1) == 0 || (*(char *)(lVar4 + 0x110) != '\0')))) {
          if (unaff_x21 == 0) goto LAB_0211ea00;
          lVar5 = *(long *)(unaff_x21 + 0x10);
          lVar6 = *(long *)puVar3;
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_0211ea00;
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
            *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar4;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(unaff_x21,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    if (unaff_x21 == 0) {
LAB_0211ea00:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = 0;
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      lVar4 = unaff_x21;
    }
  }
  return lVar4;
}


