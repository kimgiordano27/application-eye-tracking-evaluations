/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_140
ENTRY_POINT: 056ad088
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


long OVRPlugin_<>c__<_cctor>b__807_140(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long unaff_x19;
  long unaff_x20;
  uint uVar14;
  long lVar15;
  long *in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000040;
  ulong in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_02d965b8();
  FUN_02d965b8(System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_TypeInfo)
  ;
  FUN_02d965b8(System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_Dictionary<string,_List<int>>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo);
  FUN_02d965b8(System_Net_Http_Headers_TryParseDelegate<string>_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xaa4) = 1;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000050 = (long *)0x0;
                    /* try { // try from 056ad0f0 to 057ad0ff has its CatchHandler @ 056ad150 */
  if ((unaff_x20 == 0) || (iVar6 = FUN_04e932a8(), iVar6 == 0)) {
    return 0;
  }
  uVar7 = FUN_04e932a8();
  lVar8 = FUN_02d966a4(*(undefined8 *)System_Net_Http_Headers_TryParseDelegate<string>_TypeInfo,
                       uVar7);
  FUN_04e93a24(&stack0x00000010);
  puVar3 = System_Collections_Generic_Dictionary<string,_List<IBaseUxmlObjectFactory>>_TypeInfo;
  puVar2 = PTR_DAT_069fb9c0;
  uVar14 = 0;
  lVar1 = lVar8 + 0x20;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  in_stack_00000058 = in_stack_00000028;
  in_stack_00000050 = in_stack_00000020;
  in_stack_00000060 = in_stack_00000030;
  do {
    uVar9 = FUN_05232904(&stack0x00000040,*(undefined8 *)puVar3);
    plVar5 = in_stack_00000058;
    plVar4 = in_stack_00000050;
    if ((uVar9 & 1) == 0) {
      FUN_05232a24(&stack0x00000040,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<string,_InputFeatureUsage<bool>>_TypeInfo)
      ;
      return lVar8;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = thunk_FUN_02da6564(in_stack_00000058,0);
    lVar15 = *(long *)(puVar2 + 0x48);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = FUN_054f73b4(lVar15 + 0x20,0);
    uVar9 = FUN_055006dc(uVar10,uVar11,0);
    if ((uVar9 & 1) == 0) {
      uVar10 = thunk_FUN_02da6564(plVar5,0);
      lVar15 = *(long *)(puVar2 + 0x90);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar11 = FUN_054f73b4(lVar15 + 0x20,0);
      uVar9 = FUN_055006dc(uVar10,uVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar10 = thunk_FUN_02da6564(plVar5,0);
        lVar15 = *(long *)(puVar2 + 0x80);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar11 = FUN_054f73b4(lVar15 + 0x20,0);
        uVar9 = FUN_055006dc(uVar10,uVar11,0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_02dfd288(PTR_DAT_069fcb10);
          uVar10 = thunk_FUN_02dd3144();
          uVar11 = thunk_FUN_02dfd288(System_Net_Http_Headers_TryParseDelegate<Uri>_TypeInfo);
          Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                    (uVar10,uVar11,0);
          uVar11 = thunk_FUN_02dfd288(
                                     System_Net_Http_Headers_TryParseListDelegate<AuthenticationHeaderValue>_TypeInfo
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar10,uVar11);
        }
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x80) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar5);
        }
        puVar13 = (undefined8 *)thunk_FUN_02dd328c(plVar5);
        uVar10 = *puVar13;
        in_stack_00000010 = plVar4;
        LeanTween__value(&stack0x00000010,plVar4);
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,2);
        in_stack_00000020 = (long *)0x0;
        in_stack_00000030 = uVar10;
        LeanTween__value(&stack0x00000020,0);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x40) = in_stack_00000030;
        *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
        *(long **)(lVar15 + 0x20) = in_stack_00000010;
        *(long **)(lVar15 + 0x38) = in_stack_00000028;
        *(long **)(lVar15 + 0x30) = in_stack_00000020;
        LeanTween__value(lVar1 + (long)(int)uVar14 * 0x28,0);
      }
      else {
        in_stack_00000030 = 0;
        in_stack_00000018 = 0;
        in_stack_00000010 = (long *)0x0;
        in_stack_00000028 = (long *)0x0;
        in_stack_00000020 = (long *)0x0;
        if (*plVar5 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar5);
        }
        in_stack_00000010 = plVar4;
        LeanTween__value(&stack0x00000010,plVar4);
        in_stack_00000018 = in_stack_00000018 & 0xffffffff00000000;
        in_stack_00000020 = plVar5;
        LeanTween__value(&stack0x00000020,plVar5);
        in_stack_00000028 = (long *)((ulong)in_stack_00000028 & 0xffffffff00000000);
        in_stack_00000030 = 0;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
        *(undefined8 *)(lVar15 + 0x40) = 0;
        *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
        *(long **)(lVar15 + 0x20) = in_stack_00000010;
        *(long **)(lVar15 + 0x38) = in_stack_00000028;
        *(long **)(lVar15 + 0x30) = in_stack_00000020;
        LeanTween__value(lVar1 + (long)(int)uVar14 * 0x28,0);
      }
    }
    else {
      in_stack_00000030 = 0;
      in_stack_00000018 = 0;
      in_stack_00000010 = (long *)0x0;
      in_stack_00000028 = (long *)0x0;
      in_stack_00000020 = (long *)0x0;
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(puVar2 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar5);
      }
      puVar12 = (undefined4 *)thunk_FUN_02dd328c(plVar5);
      uVar7 = *puVar12;
      in_stack_00000010 = plVar4;
      LeanTween__value(&stack0x00000010,plVar4);
      in_stack_00000028 = (long *)CONCAT44(in_stack_00000028._4_4_,uVar7);
      in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,1);
      in_stack_00000020 = (long *)0x0;
      LeanTween__value(&stack0x00000020,0);
      in_stack_00000030 = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar15 = lVar8 + (long)(int)uVar14 * 0x28;
      *(undefined8 *)(lVar15 + 0x40) = 0;
      *(ulong *)(lVar15 + 0x28) = in_stack_00000018;
      *(long **)(lVar15 + 0x20) = in_stack_00000010;
      *(long **)(lVar15 + 0x38) = in_stack_00000028;
      *(long **)(lVar15 + 0x30) = in_stack_00000020;
      LeanTween__value(lVar1 + (long)(int)uVar14 * 0x28,0);
    }
    uVar14 = uVar14 + 1;
  } while( true );
}


