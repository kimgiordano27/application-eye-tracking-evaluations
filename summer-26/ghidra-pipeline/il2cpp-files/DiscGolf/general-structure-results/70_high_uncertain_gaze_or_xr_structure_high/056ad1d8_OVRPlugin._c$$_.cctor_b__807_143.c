/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_143
ENTRY_POINT: 056ad1d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


void OVRPlugin_<>c__<_cctor>b__807_143(undefined1 param_1 [16])

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w29;
  undefined8 uStack0000000000000010;
  ulong uStack0000000000000018;
  long *plStack0000000000000020;
  ulong uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uStack0000000000000018 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  do {
    plStack0000000000000020 = (long *)uStack0000000000000010;
    uStack0000000000000028 = uStack0000000000000018;
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(unaff_x20);
    }
    puVar5 = (undefined4 *)thunk_FUN_02dd328c(unaff_x20);
    uVar1 = *puVar5;
    uStack0000000000000010 = unaff_x21;
    LeanTween__value(&stack0x00000010,unaff_x21);
    uStack0000000000000028 = CONCAT44(uStack0000000000000028._4_4_,uVar1);
    uStack0000000000000018 = CONCAT44(uStack0000000000000018._4_4_,1);
    plStack0000000000000020 = (long *)0x0;
    LeanTween__value(unaff_x23 + 0x10,0);
    in_stack_00000030 = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(ulong *)(lVar7 + 0x28) = uStack0000000000000018;
    *(undefined8 *)(lVar7 + 0x20) = uStack0000000000000010;
    *(ulong *)(lVar7 + 0x38) = uStack0000000000000028;
    *(long **)(lVar7 + 0x30) = plStack0000000000000020;
    LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
      unaff_w24 = unaff_w24 + 1;
      uVar2 = FUN_05232904(&stack0x00000040,*unaff_x26);
      unaff_x20 = in_stack_00000058;
      unaff_x21 = in_stack_00000050;
      if ((uVar2 & 1) == 0) {
        FUN_05232a24(&stack0x00000040,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<string,_InputFeatureUsage<bool>>_TypeInfo
                    );
        return;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = thunk_FUN_02da6564(in_stack_00000058,0);
      lVar7 = *(long *)(unaff_x27 + 0x48);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_054f73b4(lVar7 + 0x20,0);
      uVar2 = FUN_055006dc(uVar3,uVar4,0);
      if ((uVar2 & 1) != 0) break;
      uVar3 = thunk_FUN_02da6564(unaff_x20,0);
      lVar7 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_054f73b4(lVar7 + 0x20,0);
      uVar2 = FUN_055006dc(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = thunk_FUN_02da6564(unaff_x20,0);
        lVar7 = *(long *)(unaff_x27 + 0x80);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_054f73b4(lVar7 + 0x20,0);
        uVar2 = FUN_055006dc(uVar3,uVar4,0);
        if ((uVar2 & 1) == 0) {
          thunk_FUN_02dfd288(PTR_DAT_069fcb10);
          uVar3 = thunk_FUN_02dd3144();
          uVar4 = thunk_FUN_02dfd288(System_Net_Http_Headers_TryParseDelegate<Uri>_TypeInfo);
          Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                    (uVar3,uVar4,0);
          uVar4 = thunk_FUN_02dfd288(
                                    System_Net_Http_Headers_TryParseListDelegate<AuthenticationHeaderValue>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar3,uVar4);
        }
        in_stack_00000030 = 0;
        uStack0000000000000018 = 0;
        uStack0000000000000010 = 0;
        uStack0000000000000028 = 0;
        plStack0000000000000020 = (long *)0x0;
        if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(unaff_x20);
        }
        puVar6 = (undefined8 *)thunk_FUN_02dd328c(unaff_x20);
        uVar3 = *puVar6;
        uStack0000000000000010 = unaff_x21;
        LeanTween__value(&stack0x00000010,unaff_x21);
        uStack0000000000000018 = CONCAT44(uStack0000000000000018._4_4_,2);
        plStack0000000000000020 = (long *)0x0;
        in_stack_00000030 = uVar3;
        LeanTween__value(unaff_x23 + 0x10,0);
        uStack0000000000000028 = uStack0000000000000028 & 0xffffffff00000000;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar7 + 0x28) = uStack0000000000000018;
        *(undefined8 *)(lVar7 + 0x20) = uStack0000000000000010;
        *(ulong *)(lVar7 + 0x38) = uStack0000000000000028;
        *(long **)(lVar7 + 0x30) = plStack0000000000000020;
        LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      else {
        in_stack_00000030 = 0;
        uStack0000000000000018 = 0;
        uStack0000000000000010 = 0;
        uStack0000000000000028 = 0;
        plStack0000000000000020 = (long *)0x0;
        if (*unaff_x20 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(unaff_x20);
        }
        uStack0000000000000010 = unaff_x21;
        LeanTween__value(&stack0x00000010,unaff_x21);
        uStack0000000000000018 = uStack0000000000000018 & 0xffffffff00000000;
        plStack0000000000000020 = unaff_x20;
        LeanTween__value(unaff_x23 + 0x10,unaff_x20);
        uStack0000000000000028 = uStack0000000000000028 & 0xffffffff00000000;
        in_stack_00000030 = 0;
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar7 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(ulong *)(lVar7 + 0x28) = uStack0000000000000018;
        *(undefined8 *)(lVar7 + 0x20) = uStack0000000000000010;
        *(ulong *)(lVar7 + 0x38) = uStack0000000000000028;
        *(long **)(lVar7 + 0x30) = plStack0000000000000020;
        LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
    }
    uStack0000000000000010 = 0;
    uStack0000000000000018 = 0;
    in_stack_00000030 = 0;
  } while( true );
}


