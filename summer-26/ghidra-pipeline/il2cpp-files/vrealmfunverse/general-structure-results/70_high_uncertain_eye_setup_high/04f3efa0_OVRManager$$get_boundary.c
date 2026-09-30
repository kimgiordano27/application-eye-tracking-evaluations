/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 04f3efa0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_boundary(undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  float fVar12;
  float fVar13;
  undefined4 uStack0000000000000004;
  undefined4 uStack000000000000001c;
  undefined4 uStack000000000000003c;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  
  *(undefined1 *)(unaff_x21 + 0x9a6) = 1;
  uStack00000000000000b8 = 0;
  uStack00000000000000b0 = 0;
  uStack00000000000000c8 = 0;
  uStack00000000000000c0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  if (DAT_066c1caa == '\0') {
    FUN_02b3c81c(PTR_DAT_06312438);
    DAT_066c1caa = '\x01';
  }
  puVar1 = PTR_DAT_06312438;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
    fVar11 = *(float *)(lVar3 + 0x18);
    fVar12 = *(float *)(lVar3 + 0x1c);
    fVar13 = *(float *)(lVar3 + 0x20);
    uStack000000000000001c = unaff_s9;
    fVar4 = (float)FUN_05d0be20(*(long *)(unaff_x20 + 0x20),0);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      fVar5 = (float)FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
      fVar5 = fVar4 * 0.5 - fVar5;
      fVar8 = 0.0;
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      if ((*(long *)(unaff_x20 + 0x20) != 0) &&
         (lVar3 = FUN_05c89340(*(long *)(unaff_x20 + 0x20),0), lVar3 != 0)) {
        fVar5 = (float)FUN_05c9bf94(lVar3,0);
        if ((*(long *)(unaff_x20 + 0x20) != 0) &&
           (fVar9 = fVar8, fVar10 = param_3, lVar3 = FUN_05c89340(*(long *)(unaff_x20 + 0x20),0),
           lVar3 != 0)) {
          fVar6 = (float)FUN_05c9bf94(lVar3,0);
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            fVar11 = fVar11 * fVar4;
            fVar12 = fVar12 * fVar4;
            fVar13 = fVar13 * fVar4;
            uVar7 = FUN_05d0bc98(*(long *)(unaff_x20 + 0x20),0);
            uStack0000000000000004 = uStack000000000000001c;
            uVar2 = FUN_04f40dd8(fVar6 - fVar11,fVar9 - fVar12,fVar10 - fVar13,fVar11 + fVar5,
                                 fVar12 + fVar8,fVar13 + param_3,uVar7);
            if ((uVar2 & 1) == 0) {
              if (DAT_066c1d97 == '\0') {
                FUN_02b3c81c(PTR_DAT_06312438);
                DAT_066c1d97 = '\x01';
              }
              in_stack_00000058 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
              in_stack_00000060 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar1 + 0xb8) + 1);
            }
            else {
              FUN_03ad9c7c(&stack0x00000074,&stack0x000000a0,
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>_TypeInfo);
              uStack0000000000000044 = in_stack_00000098;
              uStack000000000000003c = in_stack_00000090;
              FUN_04f410a0(&stack0x00000058,unaff_s12,uStack000000000000001c,unaff_s10);
            }
            *unaff_x19 = in_stack_00000058;
            *(undefined4 *)(unaff_x19 + 1) = in_stack_00000060;
            return uVar2 & 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


