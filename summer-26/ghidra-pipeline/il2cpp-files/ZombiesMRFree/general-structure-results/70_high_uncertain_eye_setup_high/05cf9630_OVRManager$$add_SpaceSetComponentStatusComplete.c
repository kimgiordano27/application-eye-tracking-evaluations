/*
FUNCTION_NAME: OVRManager$$add_SpaceSetComponentStatusComplete
ENTRY_POINT: 05cf9630
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__add_SpaceSetComponentStatusComplete(void)

{
  ulong uVar1;
  int in_w8;
  float *pfVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s14;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  if (in_w8 == 0) {
    FUN_02fe925c(PTR_DAT_06f6d5d8);
    *(undefined1 *)(unaff_x23 + 0x669) = 1;
  }
  pfVar2 = *(float **)(*unaff_x22 + 0xb8);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = pfVar2[2];
  if (DAT_0738e6c8 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e6c8 = '\x01';
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_05cf9a88(unaff_s14 * fVar4,unaff_s14 * fVar5,unaff_s14 * fVar6);
  OVRManager__remove_SpaceQueryComplete();
  uVar1 = FUN_05cf9bc4();
  if ((uVar1 & 1) != 0) {
    FUN_05cf9108();
  }
  lVar3 = *(long *)(unaff_x20 + 0x90);
  uStack0000000000000014 = unaff_x19[3];
  uStack0000000000000010 = (undefined4)((ulong)unaff_x19[2] >> 0x20);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)((long)unaff_x19 + 0xc) >> 0x20);
  if (lVar3 != 0) {
    in_stack_00000078 = (undefined4)*(undefined8 *)((long)unaff_x19 + 0xc);
    uStack000000000000007c = uStack000000000000000c;
    in_stack_00000080 = uStack0000000000000010;
    in_stack_00000070 = *(undefined8 *)((long)unaff_x19 + 4);
    uStack0000000000000084 = uStack0000000000000014;
    in_stack_00000090 = *unaff_x19;
    in_stack_00000098 = unaff_x19[1];
    in_stack_000000a0 = unaff_x19[2];
    in_stack_000000a8 = unaff_x19[3];
    in_stack_000000b0 = unaff_x19[4];
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),&stack0x00000090,&stack0x00000070,
               *(undefined8 *)(lVar3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


