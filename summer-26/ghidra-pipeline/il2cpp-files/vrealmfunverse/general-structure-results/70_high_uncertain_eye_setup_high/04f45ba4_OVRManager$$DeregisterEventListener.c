/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 04f45ba4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__DeregisterEventListener
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long unaff_x19;
  long unaff_x20;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  
  FUN_02b3c81c(*(undefined8 *)(param_4 + 0x5a8));
  *(undefined1 *)(unaff_x20 + 0x9c2) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_04f3eaf4((long)&stack0x00000010 + 4,*(long *)(unaff_x19 + 0x20),0);
    uVar6 = uStack000000000000002c;
    uVar5 = uStack0000000000000028;
    fVar4 = fStack0000000000000024;
    uVar3 = uStack000000000000001c;
    uVar2 = uStack0000000000000018;
    uStack0000000000000078 = uStack0000000000000020;
    uStack000000000000007c = in_stack_00000010._4_4_;
    fVar10 = fStack0000000000000024;
    fVar7 = (float)FUN_04f45008();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar13 = param_3;
      fVar11 = fVar10;
      fVar8 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x28),0);
      fVar14 = fVar13;
      fVar12 = fVar11;
      fVar9 = (float)FUN_04f45b04();
      puVar1 = PTR_DAT_063185a8;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_05c9c070(fVar7 + (fVar8 - fVar9),fVar10 + (fVar11 - fVar12),param_3 + (fVar13 - fVar14),
                     *(long *)(unaff_x19 + 0x28),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c9a2f0((long)&stack0x00000010 + 4,0);
        *(ulong *)(unaff_x19 + 0x58) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
        *(ulong *)(unaff_x19 + 0x50) = CONCAT44(uStack0000000000000018,in_stack_00000010._4_4_);
        *(ulong *)(unaff_x19 + 100) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(ulong *)(unaff_x19 + 0x5c) = CONCAT44(fStack0000000000000024,uStack0000000000000020);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_04f3f86c(uStack000000000000007c,uVar2,uVar3,*(long *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_04f3f808(uStack0000000000000078,fVar4,uVar5,uVar6,*(long *)(unaff_x19 + 0x20),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


