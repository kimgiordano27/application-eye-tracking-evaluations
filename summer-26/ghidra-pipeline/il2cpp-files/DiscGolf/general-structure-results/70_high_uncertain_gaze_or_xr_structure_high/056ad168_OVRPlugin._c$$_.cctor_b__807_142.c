/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_142
ENTRY_POINT: 056ad168
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


void OVRPlugin_<>c__<_cctor>b__807_142(void)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long lVar9;
  long lVar10;
  int unaff_w29;
  undefined8 uStack0000000000000000;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
                    /* try { // try from 056ad168 to 057ad423 has its CatchHandler @ 056ad168
                       catch() { ... } // from try @ 056ad168 with catch @ 056ad168
                       catch() { ... } // from try @ 056ad760 with catch @ 056ad168
                       catch() { ... } // from try @ 056ad7c8 with catch @ 056ad168
                       catch() { ... } // from try @ 056ad908 with catch @ 056ad168
                       catch() { ... } // from try @ 056ad954 with catch @ 056ad168
                       catch() { ... } // from try @ 056ad99c with catch @ 056ad168
                       catch() { ... } // from try @ 056adb54 with catch @ 056ad168
                       catch() { ... } // from try @ 056adb78 with catch @ 056ad168 */
  uStack0000000000000000 = 0;
  lVar9 = *(long *)(unaff_x27 + 0x9c0);
  do {
    uVar3 = FUN_05232904(&stack0x00000040,*unaff_x26);
    plVar2 = in_stack_00000058;
    uVar8 = in_stack_00000050;
    if ((uVar3 & 1) == 0) {
      FUN_05232a24(&stack0x00000040,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<string,_InputFeatureUsage<bool>>_TypeInfo)
      ;
      return;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = thunk_FUN_02da6564(in_stack_00000058,0);
    lVar10 = *(long *)(lVar9 + 0x48);
    if (*(int *)(*(long *)(lVar9 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_054f73b4(lVar10 + 0x20,0);
    uVar3 = FUN_055006dc(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = thunk_FUN_02da6564(plVar2,0);
      lVar10 = *(long *)(lVar9 + 0x90);
      if (*(int *)(*(long *)(lVar9 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_054f73b4(lVar10 + 0x20,0);
      uVar3 = FUN_055006dc(uVar4,uVar5,0);
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_02da6564(plVar2,0);
        lVar10 = *(long *)(lVar9 + 0x80);
        if (*(int *)(*(long *)(lVar9 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar5 = FUN_054f73b4(lVar10 + 0x20,0);
        uVar3 = FUN_055006dc(uVar4,uVar5,0);
        if ((uVar3 & 1) == 0) {
          thunk_FUN_02dfd288(PTR_DAT_069fcb10);
          uVar8 = thunk_FUN_02dd3144();
          uVar4 = thunk_FUN_02dfd288(System_Net_Http_Headers_TryParseDelegate<Uri>_TypeInfo);
          Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                    (uVar8,uVar4,0);
          uVar4 = thunk_FUN_02dfd288(
                                    System_Net_Http_Headers_TryParseListDelegate<AuthenticationHeaderValue>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar8,uVar4);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(lVar9 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar2);
        }
        puVar7 = (undefined8 *)thunk_FUN_02dd328c(plVar2);
        uVar4 = *puVar7;
        in_stack_00000010 = uVar8;
        LeanTween__value(&stack0x00000010,uVar8);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar4;
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
        lVar10 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar10 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar10 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar10 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar10 + 0x38) = in_stack_00000028;
        *(long **)(lVar10 + 0x30) = in_stack_00000020;
        LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = 0;
        in_stack_00000028 = 0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar2 != *(long *)(lVar9 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar2);
        }
        in_stack_00000010 = uVar8;
        LeanTween__value(&stack0x00000010,uVar8);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar2;
        LeanTween__value(unaff_x23 + 0x10,plVar2);
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
        lVar10 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
        *(undefined8 *)(lVar10 + 0x40) = 0;
        *(ulong *)(lVar10 + 0x28) = in_stack_00000018;
        *(undefined8 *)(lVar10 + 0x20) = in_stack_00000010;
        *(ulong *)(lVar10 + 0x38) = in_stack_00000028;
        *(long **)(lVar10 + 0x30) = in_stack_00000020;
        LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      in_stack_00000028 = 0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)(lVar9 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar2);
      }
      puVar6 = (undefined4 *)thunk_FUN_02dd328c(plVar2);
      uVar1 = *puVar6;
      in_stack_00000010 = uVar8;
      LeanTween__value(&stack0x00000010,uVar8);
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
      lVar10 = unaff_x19 + (long)(int)unaff_w24 * (long)unaff_w29;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(ulong *)(lVar10 + 0x28) = in_stack_00000018;
      *(undefined8 *)(lVar10 + 0x20) = in_stack_00000010;
      *(ulong *)(lVar10 + 0x38) = in_stack_00000028;
      *(long **)(lVar10 + 0x30) = in_stack_00000020;
      LeanTween__value(unaff_x25 + (long)(int)unaff_w24 * (long)unaff_w29,0);
    }
    unaff_w24 = unaff_w24 + 1;
  } while( true );
}


