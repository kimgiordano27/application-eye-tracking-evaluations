/*
FUNCTION_NAME: FUN_0583cdb0
ENTRY_POINT: 0583cdb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0583cdb0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 local_50;
  
  if ((DAT_066d2d94 & 1) == 0) {
    FUN_02b3c81c(Method_Pico_Platform_Message<UserRoomList>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_PostDispatch__
                );
    FUN_02b3c81c(
                Method_Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_ExtractMin__
                );
    FUN_02b3c81c(
                Method_Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_get_Count__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_get_button__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_MouseCaptureEventBase<MouseCaptureEvent>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_get_localMousePosition__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_MouseEventBase<ContextClickEvent>_GetPooled__);
    FUN_02b3c81c(PTR_DAT_0631fe38);
    FUN_02b3c81c(PTR_DAT_0631f5d0);
    FUN_02b3c81c(PTR_DAT_0631fe48);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_button__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_clickCount__
                );
    DAT_066d2d94 = 1;
  }
  local_50 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  local_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_05842e90(*(long *)(param_1 + 0x90),0);
    puVar2 = 
    Method_Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_get_Count__
    ;
    puVar1 = 
    Method_Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_ExtractMin__
    ;
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_0583d030;
    FUN_0452e1f4(&local_c8,*(long *)(param_1 + 0x98),
                 *(undefined8 *)Method_Pico_Platform_Message<UserRoomList>__ctor__);
    local_50 = local_a8;
    puStack_68 = puStack_c0;
    local_70 = local_c8;
    local_58 = lStack_b0;
    uStack_60 = local_b8;
    local_c8 = 0;
    puStack_c0 = &local_70;
    while (uVar7 = FUN_047e368c(&local_70,*(undefined8 *)puVar2), lVar6 = local_58, (uVar7 & 1) != 0
          ) {
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((*(long *)(local_58 + 0x18) != 0) &&
         (uVar7 = FUN_05842e70(*(long *)(local_58 + 0x18),0), (uVar7 & 1) != 0)) {
        if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05842e90(*(long *)(lVar6 + 0x18),0);
        if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05842e90(*(long *)(lVar6 + 0x20),0);
        if (*(long *)(lVar6 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_05842e90(*(long *)(lVar6 + 0x28),0);
      }
    }
    FUN_047e37ac(&local_70,*(undefined8 *)puVar1);
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_03a62eb4(param_1 + 0x180,*(undefined8 *)PTR_DAT_0631fe38);
  }
  puVar5 = Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_button__;
  puVar4 = 
  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_get_localMousePosition__
  ;
  puVar3 = Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_get_button__;
  puVar2 = Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_PostDispatch__;
  puVar1 = PTR_DAT_0631f5d0;
  if (*(long *)(param_1 + 400) != 0) {
    FUN_03f07294(&local_90,*(long *)(param_1 + 400),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_MouseEventBase<ContextualMenuPopulateEvent>_set_clickCount__
                );
    local_c8 = 0;
    puStack_c0 = &local_90;
    while (uVar7 = FUN_046f4464(&local_90,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
      auVar8 = FUN_046f4544(&local_90,*(undefined8 *)puVar4);
      local_a0 = auVar8;
      FUN_039fa4e8(local_a0,*(undefined8 *)puVar1);
    }
    FUN_046f4458(&local_90,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 400) != 0) {
      FUN_03f06fbc(*(long *)(param_1 + 400),*(undefined8 *)puVar5);
      return;
    }
  }
LAB_0583d030:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


