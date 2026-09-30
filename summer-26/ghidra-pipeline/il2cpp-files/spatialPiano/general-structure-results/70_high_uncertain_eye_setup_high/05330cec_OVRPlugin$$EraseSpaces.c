/*
FUNCTION_NAME: OVRPlugin$$EraseSpaces
ENTRY_POINT: 05330cec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__EraseSpaces
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float in_stack_00000000;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  
  if (param_4 != 0) {
    FUN_05348760(&stack0x00000020,param_4,*(undefined4 *)(unaff_x19 + 0x20),0);
    fVar4 = in_stack_00000028;
    uVar3 = in_stack_00000020;
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      FUN_05348760(&stack0x00000020,*(long *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x19 + 0x24),0)
      ;
      fVar5 = in_stack_00000028;
      uVar1 = in_stack_00000020;
                    /* catch() { ... } // from try @ 05330e40 with catch @ 05330d34
                       catch() { ... } // from try @ 05330e8c with catch @ 05330d34
                       catch() { ... } // from try @ 05330ef0 with catch @ 05330d34 */
      if (DAT_06bb42bf == '\0') {
        FUN_02f08768(PTR_DAT_067c8f80);
        DAT_06bb42bf = '\x01';
      }
                    /* try { // try from 05330d58 to 05430d5f has its CatchHandler @ 05330e5c */
      fVar8 = (float)uVar3;
      fVar6 = (float)uVar1 - fVar8;
      fVar9 = (float)((ulong)uVar3 >> 0x20);
      fVar7 = (float)((ulong)uVar1 >> 0x20) - fVar9;
      fVar5 = fVar5 - fVar4;
                    /* try { // try from 05330d64 to 05430d73 has its CatchHandler @ 05330e58 */
      if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
                    /* try { // try from 05330d88 to 05430d8f has its CatchHandler @ 05330e54 */
      fVar2 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
      if (fVar2 <= DAT_011b06e4) {
                    /* try { // try from 05330db4 to 05430dcb has its CatchHandler @ 05330e58 */
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
                    /* try { // try from 05330dcc to 05430dd3 has its CatchHandler @ 05330e4c */
        uVar3 = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
                    /* try { // try from 05330de0 to 05430df3 has its CatchHandler @ 05330e48 */
        fVar10 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
      }
      else {
        fVar10 = fVar5 / fVar2;
        uVar3 = CONCAT44(fVar7 / fVar2,fVar6 / fVar2);
                    /* try { // try from 05330da8 to 05430daf has its CatchHandler @ 05330e50 */
      }
      if (DAT_06bb8a49 == '\0') {
        FUN_02f08768(PTR_DAT_067c8fa8);
        DAT_06bb8a49 = '\x01';
      }
      fVar11 = (float)uVar3;
      fVar12 = (float)((ulong)uVar3 >> 0x20);
      fVar2 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
      if (**(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) <= fVar2) {
        fVar4 = (param_3 - fVar4) * fVar10 +
                (in_stack_00000010 - fVar8) * fVar11 + (in_stack_00000000 - fVar9) * fVar12;
        uVar3 = CONCAT44((fVar12 * fVar4) / fVar2,(fVar11 * fVar4) / fVar2);
        fVar2 = (fVar10 * fVar4) / fVar2;
      }
      else {
        if (DAT_06bb42c1 == '\0') {
          FUN_02f08768(PTR_DAT_067c8f78);
          DAT_06bb42c1 = '\x01';
        }
        uVar3 = **(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
        fVar2 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_067c8f78 + 0xb8) + 1);
      }
      return 0.0 < fVar5 * fVar2 + fVar6 * (float)uVar3 + fVar7 * (float)((ulong)uVar3 >> 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05330ed8 to 05430ee7 has its CatchHandler @ 05330ee8 */
  FUN_02f089c8();
}


