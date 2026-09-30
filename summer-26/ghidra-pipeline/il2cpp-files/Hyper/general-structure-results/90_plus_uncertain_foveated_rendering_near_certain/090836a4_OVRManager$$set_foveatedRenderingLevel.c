/*
FUNCTION_NAME: OVRManager$$set_foveatedRenderingLevel
ENTRY_POINT: 090836a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__set_foveatedRenderingLevel(float param_1)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (param_1 <= unaff_s15) {
    if (DAT_0b31f3e7 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      DAT_0b31f3e7 = '\x01';
    }
    pfVar2 = *(float **)(*unaff_x23 + 0xb8);
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    param_1 = pfVar2[2];
  }
  else {
    fVar4 = unaff_s8 / param_1;
    fVar5 = unaff_s9 / param_1;
    param_1 = unaff_s10 / param_1;
  }
  if (DAT_0b32d33b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0a830);
    DAT_0b32d33b = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_09083afc(unaff_s14 * fVar4,unaff_s14 * fVar5,unaff_s14 * param_1);
  FUN_09083b64();
  uVar1 = FUN_09083c34();
  if ((uVar1 & 1) != 0) {
    FUN_090831bc();
  }
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (lVar3 != 0) {
    in_stack_00000048 = unaff_x19[1];
    in_stack_00000040 = *unaff_x19;
    in_stack_00000058 = unaff_x19[3];
    in_stack_00000050 = unaff_x19[2];
    in_stack_00000060 = unaff_x19[4];
    uStack0000000000000034 = *(undefined8 *)((long)unaff_x21 + 0x14);
    in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x21 + 0xc) >> 0x20);
    in_stack_00000020 = *unaff_x21;
    in_stack_00000028 = (undefined4)unaff_x21[1];
    uStack000000000000002c = (undefined4)((ulong)unaff_x21[1] >> 0x20);
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),&stack0x00000040,&stack0x00000020,
               *(undefined8 *)(lVar3 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


