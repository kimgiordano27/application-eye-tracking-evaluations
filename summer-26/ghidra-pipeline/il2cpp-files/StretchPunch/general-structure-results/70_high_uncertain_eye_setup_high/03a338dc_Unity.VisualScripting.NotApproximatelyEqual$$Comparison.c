/*
FUNCTION_NAME: Unity.VisualScripting.NotApproximatelyEqual$$Comparison
ENTRY_POINT: 03a338dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a33c9c) */

void Unity_VisualScripting_NotApproximatelyEqual__Comparison(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long unaff_x20;
  long *unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  char cStack000000000000001c;
  
  FUN_01d7d918(PTR_DAT_04237998);
  FUN_01d7d918(PTR_DAT_042379a0);
  FUN_01d7d918(StringLiteral_1827);
  FUN_01d7d918(PTR_DAT_042379a8);
  FUN_01d7d918(StringLiteral_2241);
  FUN_01d7d918(PTR_DAT_042379b0);
  *(undefined1 *)(unaff_x19 + 0xf1c) = 1;
  lVar1 = *unaff_x22;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar1 = *unaff_x22;
  }
  uVar8 = **(undefined8 **)(lVar1 + 0xb8);
  cStack000000000000001c = '\0';
  FUN_033f4894(uVar8,&stack0x0000001c,0);
  if (*(int *)(*(long *)StringLiteral_1319 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar1 = FUN_03a2d354(*(undefined8 *)StringLiteral_2241);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_020a31f4();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  FUN_03a33d84();
  plVar2 = (long *)FUN_03a34018();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar1 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)StringLiteral_1827) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_03a33a14;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,*(long *)StringLiteral_1827,9);
LAB_03a33a14:
  (*(code *)*puVar3)(plVar2);
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar1 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  uVar4 = FUN_03a34018();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70(uVar4,uVar4);
  }
  uVar6 = FUN_02b258e8(lVar1,uVar4,&stack0x00000010,*(undefined8 *)PTR_DAT_04237988);
  if ((uVar6 & 1) == 0) {
    lVar1 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar1,*(undefined8 *)PTR_DAT_04237998);
    lVar5 = *unaff_x22;
    in_stack_00000010 = lVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    lVar1 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar4 = FUN_03a34018();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar4,uVar4);
    }
    FUN_02b23db4(lVar1,uVar4,in_stack_00000010,*(undefined8 *)PTR_DAT_04237978);
  }
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar6 = FUN_02f17d24();
  if ((uVar6 & 1) == 0) {
    uVar4 = FUN_03a34018();
    uVar4 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379b0,uVar4);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d41b48(uVar4,0);
  }
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar1 = *unaff_x22;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  uVar4 = FUN_03a3407c();
  if (lVar1 != 0) {
    uVar6 = FUN_02b258e8(lVar1,uVar4,&stack0x00000008,*(undefined8 *)PTR_DAT_04237980);
    if ((uVar6 & 1) == 0) {
      lVar1 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (lVar1,*(undefined8 *)PTR_DAT_04237998);
      lVar5 = *unaff_x22;
      in_stack_00000008 = lVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar5 = *unaff_x22;
      }
      lVar1 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      uVar4 = FUN_03a3407c();
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70(uVar4,uVar4);
      }
      FUN_02b23db4(lVar1,uVar4,in_stack_00000008,*(undefined8 *)PTR_DAT_04237970);
    }
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar6 = FUN_02f17d24();
    if ((uVar6 & 1) == 0) {
      uVar4 = FUN_03a3407c();
      uVar4 = FUN_03aea920(uVar4,0);
      uVar4 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379a8,uVar4);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_03d41b48(uVar4,0);
    }
    if (cStack000000000000001c != '\0') {
      thunk_FUN_01dccd6c(uVar8,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70(uVar4,uVar4);
}


