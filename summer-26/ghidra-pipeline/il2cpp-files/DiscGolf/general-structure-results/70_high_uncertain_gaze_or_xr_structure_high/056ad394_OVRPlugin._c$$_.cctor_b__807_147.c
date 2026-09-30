/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_147
ENTRY_POINT: 056ad394
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


void OVRPlugin_<>c__<_cctor>b__807_147(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  int unaff_w29;
  undefined8 uVar7;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    puVar5 = (undefined8 *)thunk_FUN_02dd328c(unaff_x20);
    uVar7 = *puVar5;
    in_stack_00000010 = unaff_x21;
    LeanTween__value(&stack0x00000010,unaff_x21);
    in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
    in_stack_00000020 = (long *)0x0;
    in_stack_00000030 = uVar7;
    LeanTween__value(unaff_x23 + 0x10,0);
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar6 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
    *(undefined8 *)(lVar6 + 0x40) = in_stack_00000030;
    *(ulong *)(lVar6 + 0x28) = in_stack_00000018;
    *(undefined8 *)(lVar6 + 0x20) = in_stack_00000010;
    *(ulong *)(lVar6 + 0x38) = in_stack_00000028;
    *(long **)(lVar6 + 0x30) = in_stack_00000020;
    LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    while( true ) {
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
        uVar7 = thunk_FUN_02da6564(in_stack_00000058,0);
        lVar6 = *(long *)(unaff_x27 + 0x48);
        if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar3 = FUN_054f73b4(lVar6 + 0x20,0);
        uVar2 = FUN_055006dc(uVar7,uVar3,0);
        if ((uVar2 & 1) == 0) break;
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(unaff_x20);
        }
        puVar4 = (undefined4 *)thunk_FUN_02dd328c(unaff_x20);
        uVar1 = *puVar4;
        in_stack_00000010 = unaff_x21;
        LeanTween__value(&stack0x00000010,unaff_x21);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,uVar1);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
        in_stack_00000020 = (long *)0x0;
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
        lVar6 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar6 + 0x40) = 0;
        *(ulong *)(lVar6 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar6 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar6 + 0x38) = in_stack_00000028;
        *(long **)(lVar6 + 0x30) = in_stack_00000020;
        LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      uVar7 = thunk_FUN_02da6564(unaff_x20,0);
      lVar6 = *(long *)(unaff_x27 + 0x90);
      if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar3 = FUN_054f73b4(lVar6 + 0x20,0);
      uVar2 = FUN_055006dc(uVar7,uVar3,0);
      if ((uVar2 & 1) == 0) break;
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*unaff_x20 != *(long *)(unaff_x27 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(unaff_x20);
      }
      in_stack_00000010 = unaff_x21;
      LeanTween__value(&stack0x00000010,unaff_x21);
      in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
      in_stack_00000020 = unaff_x20;
      LeanTween__value(unaff_x23 + 0x10,unaff_x20);
      in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
      in_stack_00000030 = 0;
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar6 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(ulong *)(lVar6 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar6 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar6 + 0x38) = in_stack_00000028;
      *(long **)(lVar6 + 0x30) = in_stack_00000020;
      LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    uVar7 = thunk_FUN_02da6564(unaff_x20,0);
    lVar6 = *(long *)(unaff_x27 + 0x80);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = FUN_054f73b4(lVar6 + 0x20,0);
    uVar2 = FUN_055006dc(uVar7,uVar3,0);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069fcb10);
      uVar7 = thunk_FUN_02dd3144();
      uVar3 = thunk_FUN_02dfd288(System_Net_Http_Headers_TryParseDelegate<Uri>_TypeInfo);
      Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                (uVar7,uVar3,0);
      uVar3 = thunk_FUN_02dfd288(
                                System_Net_Http_Headers_TryParseListDelegate<AuthenticationHeaderValue>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,uVar3);
    }
    in_stack_00000030 = 0;
    in_stack_00000018 = 0;
    in_stack_00000010 = 0;
    in_stack_00000028 = 0;
    in_stack_00000020 = (long *)0x0;
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(*(long *)(unaff_x27 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(unaff_x20);
    }
  } while( true );
}


