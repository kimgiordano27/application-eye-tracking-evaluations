/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceDiscoveryResults
ENTRY_POINT: 051caff4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceDiscoveryResults(long param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  float fVar7;
  byte bStack0000000000000000;
  undefined8 uStack0000000000000004;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
                    /* try { // try from 051cb010 to 052cb017 has its CatchHandler @ 051cb27c */
      puVar3 = (undefined8 *)(param_1 + (long)(in_x10[4] + 6) * 0x10 + 0x138);
      goto LAB_051cb01c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
                    /* try { // try from 051caffc to 052cafff has its CatchHandler @ 051cb280 */
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051cb01c:
                    /* try { // try from 051cb024 to 052cb03f has its CatchHandler @ 051cb2ac */
  (*(code *)*puVar3)();
  *(undefined2 *)(unaff_x19 + 0x22) = *(undefined2 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x18) = uStack0000000000000004;
  *(byte *)(unaff_x19 + 0x20) = bStack0000000000000000 >> 5 & 1;
  *(byte *)(unaff_x19 + 0x21) = bStack0000000000000000 >> 4 & 1;
  puVar2 = PTR_DAT_065d65c0;
                    /* try { // try from 051cb050 to 052cb05b has its CatchHandler @ 051cb2a8 */
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065d65c0) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_051cb0b0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 051cb094 to 052cb0bb has its CatchHandler @ 051cb370 */
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051cb0b0:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 051cb0dc to 052cb0e3 has its CatchHandler @ 051cb2a4 */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_051cb118;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051cb118:
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_051cb17c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_051cb17c:
  (*(code *)*puVar3)();
  FUN_0515b1f4(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  FUN_0515b1f4(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar7 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar1 = *(float *)(unaff_x19 + 0x1c) / fVar7;
  if (fVar7 <= 0.0) {
    fVar1 = 0.5;
  }
  FUN_0516796c(fVar1,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


