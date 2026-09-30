/*
FUNCTION_NAME: Unity.VisualScripting.NotEqual$$.ctor
ENTRY_POINT: 03a339cc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a33c9c) */

void Unity_VisualScripting_NotEqual___ctor(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long in_x9;
  long *in_x10;
  int *piVar6;
  long *unaff_x22;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_03a33a14;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_03a33a14:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar2 = *unaff_x22;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  uVar3 = FUN_03a34018();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70(uVar3,uVar3);
  }
  uVar4 = FUN_02b258e8(lVar2,uVar3,&stack0x00000010,*(undefined8 *)PTR_DAT_04237988);
  if ((uVar4 & 1) == 0) {
    lVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar2,*(undefined8 *)PTR_DAT_04237998);
    lVar5 = *unaff_x22;
    in_stack_00000010 = lVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar3 = FUN_03a34018();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar3,uVar3);
    }
    FUN_02b23db4(lVar2,uVar3,in_stack_00000010,*(undefined8 *)PTR_DAT_04237978);
  }
  if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = FUN_02f17d24();
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_03a34018();
    uVar3 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379b0,uVar3);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d41b48(uVar3,0);
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar2 = *unaff_x22;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  uVar3 = FUN_03a3407c();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70(uVar3,uVar3);
  }
  uVar4 = FUN_02b258e8(lVar2,uVar3,&stack0x00000008,*(undefined8 *)PTR_DAT_04237980);
  if ((uVar4 & 1) == 0) {
    lVar2 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_042379a0);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar2,*(undefined8 *)PTR_DAT_04237998);
    lVar5 = *unaff_x22;
    in_stack_00000008 = lVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar5 = *unaff_x22;
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    uVar3 = FUN_03a3407c();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar3,uVar3);
    }
    FUN_02b23db4(lVar2,uVar3,in_stack_00000008,*(undefined8 *)PTR_DAT_04237970);
  }
  if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar4 = FUN_02f17d24();
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_03a3407c();
    uVar3 = FUN_03aea920(uVar3,0);
    uVar3 = FUN_0326cb0c(*(undefined8 *)PTR_DAT_042379a8,uVar3);
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_03d41b48(uVar3,0);
  }
  if (in_stack_00000018._4_1_ != '\0') {
    thunk_FUN_01dccd6c();
  }
  return;
}


