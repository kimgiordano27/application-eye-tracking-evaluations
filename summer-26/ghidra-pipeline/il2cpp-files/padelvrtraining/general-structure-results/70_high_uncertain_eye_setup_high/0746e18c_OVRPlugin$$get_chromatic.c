/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 0746e18c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_chromatic
                (ulong param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  float fVar1;
  undefined *puVar2;
  float *pfVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000004;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000028;
  uint uStack000000000000002c;
  float fStack0000000000000030;
  undefined8 uStack0000000000000038;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  _fStack0000000000000030 = 0;
  uStack0000000000000038 = 0;
  uStack000000000000002c = (uint)param_1;
  fStack0000000000000024 = param_2;
  fStack0000000000000028 = param_3;
  if (*(char *)(unaff_x19 + 0x37d) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    param_1 = (ulong)uStack000000000000002c;
                    /* try { // try from 0746e1c8 to 0756e1cb has its CatchHandler @ 0746e24c */
    *(undefined1 *)(unaff_x19 + 0x37d) = 1;
  }
                    /* try { // try from 0746e1cc to 0756e1d7 has its CatchHandler @ 0746e25c */
  puVar2 = PTR_DAT_091a1008;
  fVar8 = param_4 - (float)param_1;
  fVar7 = param_5 - fStack0000000000000024;
  fVar6 = param_6 - fStack0000000000000028;
                    /* try { // try from 0746e1e8 to 0756e1f3 has its CatchHandler @ 0746e258 */
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    param_1 = (ulong)uStack000000000000002c;
                    /* try { // try from 0746e1f4 to 0756e22b has its CatchHandler @ 0746e0a0 */
  }
  fVar1 = DAT_0191476c;
  fVar4 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
  fStack0000000000000014 = param_4;
  fStack000000000000001c = param_6;
  if (fVar4 <= DAT_0191476c) {
                    /* try { // try from 0746e238 to 0756e23b has its CatchHandler @ 0746e250 */
                    /* try { // try from 0746e23c to 0756e23f has its CatchHandler @ 0746e244 */
                    /* try { // try from 0746e240 to 0756e277 has its CatchHandler @ 0746e0a0 */
    if (DAT_098362c7 == '\0') {
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e23c with catch @ 0746e244
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e180 with catch @ 0746e248
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e1c8 with catch @ 0746e24c
                        */
      FUN_03d2d2b0(PTR_DAT_091a0f88);
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e238 with catch @ 0746e250
                        */
      param_1 = (ulong)uStack000000000000002c;
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e234 with catch @ 0746e254
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e1e8 with catch @ 0746e258
                        */
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e1cc with catch @ 0746e25c
                        */
      DAT_098362c7 = '\x01';
    }
                    /* catch(type#1 @ 08cb6798) { ... } // from try @ 0746e22c with catch @ 0746e260
                        */
    pfVar3 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar8 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar6 = pfVar3[2];
  }
  else {
    fVar8 = fVar8 / fVar4;
                    /* try { // try from 0746e22c to 0756e233 has its CatchHandler @ 0746e260 */
    fVar7 = fVar7 / fVar4;
    fVar6 = fVar6 / fVar4;
                    /* try { // try from 0746e234 to 0756e237 has its CatchHandler @ 0746e254 */
  }
  fVar9 = in_stack_000000a8;
  fVar4 = fStack00000000000000a0;
  if (*(char *)(unaff_x19 + 0x37d) == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    param_1 = (ulong)uStack000000000000002c;
    *(undefined1 *)(unaff_x19 + 0x37d) = 1;
  }
  fVar4 = fVar4 - (float)param_1;
  fVar10 = fStack00000000000000a4 - fStack0000000000000024;
  fVar9 = fVar9 - fStack0000000000000028;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    param_1 = (ulong)uStack000000000000002c;
  }
  fVar5 = SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar10 * fVar10);
  if (fVar5 <= fVar1) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      param_1 = (ulong)uStack000000000000002c;
      DAT_098362c7 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar4 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar9 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    fVar10 = fVar10 / fVar5;
    fVar9 = fVar9 / fVar5;
  }
  if (ABS(fVar6 * fVar9 + fVar8 * fVar4 + fVar7 * fVar10) <= DAT_01914610) {
    fStack0000000000000004 = fStack00000000000000a4;
    FUN_0747b884(param_1,fStack0000000000000024,fStack0000000000000028,fStack0000000000000014,
                 param_5,fStack000000000000001c,&stack0x00000030,0);
  }
  else {
    if (*(char *)(unaff_x19 + 0x37d) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      *(undefined1 *)(unaff_x19 + 0x37d) = 1;
    }
    fVar7 = in_stack_000000b8;
    fVar6 = fStack00000000000000b0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    fVar7 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fStack00000000000000b4 * fStack00000000000000b4);
    if (fVar7 <= fVar1) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      fStack0000000000000030 = **(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    }
    else {
      fStack0000000000000030 = fVar6 / fVar7;
    }
  }
  return fStack0000000000000030;
}


