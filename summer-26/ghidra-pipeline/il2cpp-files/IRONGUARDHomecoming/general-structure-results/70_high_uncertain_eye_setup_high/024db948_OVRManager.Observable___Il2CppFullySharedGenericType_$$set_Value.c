/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 024db948
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  ulong uVar8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  uStack0000000000000048 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  iVar2 = thunk_FUN_01eca4a4();
  if (1 < iVar2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback<SystemVoipState>__);
    uVar4 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Callback_SetNotificationCallback__);
    FUN_0357bdc0(uVar4,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4);
  }
  uVar3 = FUN_03582fa8();
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    uVar8 = 0;
    bVar1 = true;
    do {
      memcpy(&stack0x00000048,
             (void *)((long)unaff_x21 + uVar8 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
             (ulong)*(uint *)(*unaff_x21 + 0x104));
      in_stack_00000038 = uStack0000000000000050;
      in_stack_00000030 = uStack0000000000000048;
      in_stack_00000040 = uStack0000000000000058;
      uVar4 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = unaff_x20[2];
      in_stack_00000020 = unaff_x20[1];
      in_stack_00000018 = *unaff_x20;
      in_stack_00000008 = lVar7;
      uVar5 = thunk_FUN_035c4260(&stack0x00000008,uVar4,0);
      if ((uVar5 & 1) != 0) {
        return bVar1;
      }
      uVar8 = uVar8 + 1;
      bVar1 = uVar8 < uVar3;
    } while (uVar3 != uVar8);
  }
  return bVar1;
}


