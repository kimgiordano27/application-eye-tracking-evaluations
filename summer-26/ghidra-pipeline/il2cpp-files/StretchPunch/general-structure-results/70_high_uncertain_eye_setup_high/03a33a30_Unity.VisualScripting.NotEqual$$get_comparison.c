/*
FUNCTION_NAME: Unity.VisualScripting.NotEqual$$get_comparison
ENTRY_POINT: 03a33a30
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a33c9c) */

void Unity_VisualScripting_NotEqual__get_comparison(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_01dc4f30();
  lVar4 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  uVar1 = FUN_03a34018();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70(uVar1,uVar1);
  }
  uVar2 = FUN_02b258e8(lVar4,uVar1,&stack0x00000010,*(undefined8 *)PTR_DAT_04237988);
  if ((uVar2 & 1) == 0) {
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar4,*(undefined8 *)PTR_DAT_04237998);
    lVar3 = *unaff_x22;
    in_stack_00000010 = lVar4;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    uVar1 = FUN_03a34018();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar1,uVar1);
    }
    FUN_02b23db4(lVar4,uVar1,in_stack_00000010,*(undefined8 *)PTR_DAT_04237978);
  }
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = FUN_02f17d24();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_03a34018();
    uVar1 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379b0,uVar1);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d41b48(uVar1,0);
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar4 = *unaff_x22;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  uVar1 = FUN_03a3407c();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70(uVar1,uVar1);
  }
  uVar2 = FUN_02b258e8(lVar4,uVar1,&stack0x00000008,*(undefined8 *)PTR_DAT_04237980);
  if ((uVar2 & 1) == 0) {
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar4,*(undefined8 *)PTR_DAT_04237998);
    lVar3 = *unaff_x22;
    in_stack_00000008 = lVar4;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x22;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    uVar1 = FUN_03a3407c();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar1,uVar1);
    }
    FUN_02b23db4(lVar4,uVar1,in_stack_00000008,*(undefined8 *)PTR_DAT_04237970);
  }
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = FUN_02f17d24();
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_03a3407c();
    uVar1 = FUN_03aea920(uVar1,0);
    uVar1 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379a8,uVar1);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d41b48(uVar1,0);
  }
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_01dccd6c();
  }
  return;
}


