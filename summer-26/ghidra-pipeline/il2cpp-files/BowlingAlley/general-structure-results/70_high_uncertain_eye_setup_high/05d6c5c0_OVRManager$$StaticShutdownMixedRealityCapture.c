/*
FUNCTION_NAME: OVRManager$$StaticShutdownMixedRealityCapture
ENTRY_POINT: 05d6c5c0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticShutdownMixedRealityCapture(void)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  float fVar7;
  float fVar8;
  undefined4 in_stack_00000048;
  
  *(undefined1 *)(unaff_x19 + 0x20) = in_w8;
  *(undefined4 *)(unaff_x19 + 0x1c) = in_stack_00000048;
  bVar2 = FUN_05d76564(&stack0x00000040,0);
  *(byte *)(unaff_x19 + 0x21) = bVar2 & 1;
  puVar1 = PTR_DAT_072ada08;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
                    /* try { // try from 05d6c604 to 05e6c607 has its CatchHandler @ 05d6ca4c */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 05d6c608 to 05e6c61f has its CatchHandler @ 05d6ca58 */
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_072ada08) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_05d6c640;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d6c640:
  (*(code *)*puVar3)();
                    /* try { // try from 05d6c654 to 05e6c673 has its CatchHandler @ 05d6ca5c */
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* try { // try from 05d6c698 to 05e6c69b has its CatchHandler @ 05d6ca54 */
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_05d6c6a8;
      }
                    /* try { // try from 05d6c67c to 05e6c683 has its CatchHandler @ 05d6ca50 */
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d6c6a8:
                    /* try { // try from 05d6c6a8 to 05e6c6b3 has its CatchHandler @ 05d6ca60 */
  (*(code *)*puVar3)();
  lVar4 = *unaff_x20;
                    /* try { // try from 05d6c6c4 to 05e6c6c7 has its CatchHandler @ 05d6ca64 */
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 05d6c6c8 to 05e6c6d3 has its CatchHandler @ 05d6ca80 */
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
        goto LAB_05d6c70c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d6c70c:
  (*(code *)*puVar3)();
  FUN_05cf74bc(0x3f000000,unaff_x19 + 0x24,&stack0x00000020,0);
  FUN_05cf74bc(0x3f000000,unaff_x19 + 0x40,&stack0x00000020,0);
  fVar7 = *(float *)(unaff_x19 + 0x18) + *(float *)(unaff_x19 + 0x1c);
  fVar8 = *(float *)(unaff_x19 + 0x1c) / fVar7;
  if (fVar7 <= 0.0) {
    fVar8 = 0.5;
  }
  FUN_05d05424(fVar8,unaff_x19 + 0x24,unaff_x19 + 0x40,unaff_x19 + 0x5c,0);
  return;
}


