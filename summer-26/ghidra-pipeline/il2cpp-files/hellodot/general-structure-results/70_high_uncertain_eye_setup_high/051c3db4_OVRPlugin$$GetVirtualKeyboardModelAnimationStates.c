/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 051c3db4
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetVirtualKeyboardModelAnimationStates(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  long in_stack_00000030;
  undefined8 in_stack_00000048;
  
  do {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    fVar5 = *(float *)(unaff_x20 + 0x14);
    fVar4 = *(float *)(unaff_x20 + 0x18) * unaff_s10;
    while( true ) {
      bVar1 = FUN_051c3f48();
      fVar6 = ABS(in_stack_00000048._4_4_);
      if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_046bf4a0(in_stack_00000048._4_4_,fVar5 + fVar4,*(long *)(unaff_x19 + 0x58),unaff_x20,
                   *unaff_x24);
      *(byte *)(unaff_x19 + 0x61) = *(byte *)(unaff_x19 + 0x61) & bVar1 & fVar6 <= fVar5 + fVar4;
      uVar2 = FUN_0481f4e4(&stack0x00000020,*unaff_x23);
      if ((uVar2 & 1) == 0) {
        FUN_0481f4e0(&stack0x00000020,*(undefined8 *)PTR_DAT_06608d20);
        lVar3 = *(long *)(unaff_x19 + 0x50);
        if (lVar3 != 0) {
          fVar4 = (float)(**(code **)(lVar3 + 0x18))
                                   (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          bVar1 = *(byte *)(unaff_x19 + 0x61);
          if (unaff_w22 == bVar1) {
            fVar5 = *(float *)(unaff_x19 + 100);
          }
          else {
            *(float *)(unaff_x19 + 100) = fVar4;
            fVar5 = fVar4;
          }
          if (*(float *)(unaff_x19 + 0x48) <= fVar4 - fVar5) {
            *(byte *)(unaff_x19 + 0x60) = bVar1;
          }
          else {
            bVar1 = *(byte *)(unaff_x19 + 0x60);
          }
          return bVar1 != 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      unaff_x20 = in_stack_00000030;
      if (unaff_w22 != 0) break;
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      fVar5 = *(float *)(in_stack_00000030 + 0x14);
      fVar4 = *(float *)(in_stack_00000030 + 0x18) * unaff_s9;
    }
  } while( true );
}


