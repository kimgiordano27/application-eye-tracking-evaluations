/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 06d7b838
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack000000000000003c;
  undefined4 uStack000000000000008c;
  
  FUN_03c8f898(PTR_DAT_08e69f40);
  *(undefined1 *)(unaff_x24 + 0xffc) = 1;
  puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
  uStack000000000000008c = *puVar4;
  uVar5 = puVar4[1];
  uStack0000000000000018 = puVar4[2];
  uVar6 = puVar4[3];
  uStack000000000000001c = uVar5;
  uStack000000000000003c = uStack0000000000000018;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_085decd4();
  if ((uVar3 & 1) == 0) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    uStack0000000000000020 = *puVar4;
    uStack000000000000001c = puVar4[1];
    uStack0000000000000018 = puVar4[2];
  }
  else {
    if (unaff_x19 == 0) goto LAB_06d7bb2c;
    uStack0000000000000020 = FUN_085eb198();
  }
  uVar2 = uStack000000000000008c;
  uVar1 = uStack000000000000003c;
  if ((unaff_x21 == 0) && (DAT_0940fffc == '\0')) {
    FUN_03c8f898(PTR_DAT_08e69f40);
    DAT_0940fffc = '\x01';
  }
  FUN_085eb388();
  FUN_085d23b0(0);
  FUN_085eb410();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar3 = FUN_085decd4();
  if ((uVar3 & 1) != 0) {
    if (unaff_x19 == 0) {
LAB_06d7bb2c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_085ebce8(uStack0000000000000020,uStack000000000000001c,uStack0000000000000018,uVar2,uVar5,
                 uVar1,uVar6);
  }
  return;
}


