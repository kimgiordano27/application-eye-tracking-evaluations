/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 0907f214
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__add_HMDUnmounted(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000018;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar10 = *(float *)(lVar2 + 0x18);
  fVar11 = *(float *)(lVar2 + 0x1c);
  fVar12 = *(float *)(lVar2 + 0x20);
  fVar3 = (float)FUN_0a1ecf3c();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    fVar4 = (float)FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
    fVar4 = fVar3 * 0.5 - fVar4;
    fVar7 = 0.0;
    fVar3 = 0.0;
    if (0.0 <= fVar4) {
      fVar3 = fVar4;
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (lVar2 = FUN_0a17834c(*(long *)(unaff_x20 + 0x20),0), lVar2 != 0)) {
      fVar4 = (float)FUN_0a18a1a0(lVar2,0);
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (fVar8 = fVar7, fVar9 = param_3, lVar2 = FUN_0a17834c(*(long *)(unaff_x20 + 0x20),0),
         lVar2 != 0)) {
        fVar5 = (float)FUN_0a18a1a0(lVar2,0);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          fVar10 = fVar10 * fVar3;
          fVar11 = fVar11 * fVar3;
          fVar12 = fVar12 * fVar3;
          uVar6 = FUN_0a1ecdb4(*(long *)(unaff_x20 + 0x20),0);
                    /* try { // try from 0907f2dc to 0917f2ff has its CatchHandler @ 0907f354 */
          uVar1 = FUN_09081000(fVar5 - fVar10,fVar8 - fVar11,fVar9 - fVar12,fVar10 + fVar4,
                               fVar11 + fVar7,fVar12 + param_3,uVar6);
          if ((uVar1 & 1) == 0) {
            if (DAT_0b31f3e7 == '\0') {
              FUN_04947ee4(PTR_DAT_0ac0def8);
              DAT_0b31f3e7 = '\x01';
            }
            in_stack_00000058 = **(undefined8 **)(*unaff_x22 + 0xb8);
            in_stack_00000060 = *(undefined4 *)(*(undefined8 **)(*unaff_x22 + 0xb8) + 1);
          }
          else {
            FUN_06fc65c0(&stack0x00000074,&stack0x000000a0,*(undefined8 *)PTR_DAT_0ac78710);
            uStack0000000000000044 = in_stack_00000098;
            uStack000000000000003c = in_stack_00000090;
            FUN_090812c8(&stack0x00000058,unaff_s12,in_stack_00000018._4_4_,unaff_s10);
          }
          *unaff_x19 = in_stack_00000058;
          *(undefined4 *)(unaff_x19 + 1) = in_stack_00000060;
          return uVar1 & 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


