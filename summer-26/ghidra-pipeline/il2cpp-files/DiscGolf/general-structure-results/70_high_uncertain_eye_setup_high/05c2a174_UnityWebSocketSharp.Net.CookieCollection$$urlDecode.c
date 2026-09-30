/*
FUNCTION_NAME: UnityWebSocketSharp.Net.CookieCollection$$urlDecode
ENTRY_POINT: 05c2a174
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityWebSocketSharp_Net_CookieCollection__urlDecode(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  undefined8 *in_x10;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar6 = *(undefined8 *)(in_x9 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = thunk_FUN_02dd3144(*in_x10);
  FUN_05c2bf60(lVar3,uVar6,uVar7,0);
  *unaff_x20 = lVar3;
  LeanTween__value();
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = FUN_05c2c01c(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xe)
                       ,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  _in_stack_00000030 = FUN_0555c350(lVar3,0,0);
  uVar4 = FUN_05410178(&stack0x00000030,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
    LeanTween__value(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031e120c(unaff_x19 + 2,&stack0x00000030);
  }
  else {
    FUN_05410190(&stack0x00000030,0);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(unaff_x24 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(*(long *)(unaff_x24 + 0x38) + 0x2c) == '\0') {
      uVar6 = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
      uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
      lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_Remove__
                                );
      FUN_058a6164(lVar3,uVar6,uVar7,0);
      plVar5 = (long *)(unaff_x24 + 0x30);
      *plVar5 = lVar3;
      LeanTween__value(plVar5,lVar3);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = FUN_058a6390(*plVar5,*(undefined8 *)(unaff_x24 + 0x38),
                           *(undefined8 *)(unaff_x19 + 0xe),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      _in_stack_00000020 = FUN_0481d044(lVar3,0,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
      uVar4 = FUN_04b88f80(&stack0x00000020,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        LeanTween__value(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_031df43c(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar6 = FUN_04b88fc8(&stack0x00000020,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined8 *)(unaff_x24 + 0x20) = uVar6;
      LeanTween__value();
      uVar6 = 1;
    }
    puVar2 = PTR_DAT_069fd9c0;
    iVar1 = *(int *)(*unaff_x25 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_02df485c();
    }
    FUN_03fa2848(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
  }
  return;
}


