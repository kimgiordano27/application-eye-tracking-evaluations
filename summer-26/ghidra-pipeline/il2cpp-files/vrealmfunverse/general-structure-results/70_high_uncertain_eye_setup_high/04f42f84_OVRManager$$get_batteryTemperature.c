/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 04f42f84
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


void OVRManager__get_batteryTemperature(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
                    /* try { // try from 04f42f84 to 05042f8b has its CatchHandler @ 04f43174 */
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x20 + 0x9b1) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_04f3eaf4((long)&stack0x00000010 + 4,*(long *)(unaff_x19 + 0x20),0);
    uVar6 = uStack000000000000002c;
    uVar5 = uStack0000000000000028;
    uVar4 = uStack000000000000001c;
    uVar3 = uStack0000000000000018;
    uVar2 = in_stack_00000010._4_4_;
                    /* try { // try from 04f42fa4 to 05042faf has its CatchHandler @ 04f4317c */
                    /* try { // try from 04f42fb4 to 05042fc3 has its CatchHandler @ 04f43178 */
    fStack0000000000000078 = fStack0000000000000024;
    fStack000000000000007c = fStack0000000000000020;
    fVar11 = fStack0000000000000024;
    fVar10 = fStack0000000000000020;
    fVar7 = (float)FUN_04f42a4c();
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      fVar12 = fVar11;
                    /* try { // try from 04f42fdc to 05042fe3 has its CatchHandler @ 04f43168 */
      fVar8 = (float)FUN_05c9bf94(*(long *)(unaff_x19 + 0x28),0);
      fVar13 = fVar12;
      fVar9 = (float)FUN_04f430a4();
      puVar1 = PTR_DAT_063185a8;
      if (*(long *)(unaff_x19 + 0x28) != 0) {
                    /* try { // try from 04f42ff8 to 0504300b has its CatchHandler @ 04f43160 */
        FUN_05c9c070(fVar7 + (fVar8 - fVar9),fVar10 + 0.0,fVar11 + (fVar12 - fVar13),
                     *(long *)(unaff_x19 + 0x28),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c9a2f0((long)&stack0x00000010 + 4,0);
        *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(fStack0000000000000020,uStack000000000000001c);
        *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000018,in_stack_00000010._4_4_);
        *(ulong *)(unaff_x19 + 0xac) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *(ulong *)(unaff_x19 + 0xa4) = CONCAT44(fStack0000000000000024,fStack0000000000000020);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          FUN_04f3f86c(uVar2,uVar3,uVar4,*(long *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            FUN_04f3f808(fStack000000000000007c,fStack0000000000000078,uVar5,uVar6,
                         *(long *)(unaff_x19 + 0x20),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


