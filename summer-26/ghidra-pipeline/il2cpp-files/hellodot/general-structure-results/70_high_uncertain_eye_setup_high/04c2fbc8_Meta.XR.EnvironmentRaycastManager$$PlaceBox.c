/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$PlaceBox
ENTRY_POINT: 04c2fbc8
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__PlaceBox(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *plVar10;
  long *unaff_x25;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000018;
  
  auVar11 = FUN_033df434();
  uVar2 = auVar11._0_8_;
  uVar3 = 0;
  if (auVar11._8_8_ != 0) {
    uVar2 = FUN_033dbf6c(auVar11._8_8_,*(undefined8 *)PTR_DAT_065e6298);
    uVar3 = uVar2;
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c(uVar2,uVar3);
  }
  uVar3 = FUN_04c2da10();
  *(undefined8 *)(unaff_x21 + 0x48) = uVar3;
  puVar1 = PTR_DAT_065dfdc0;
  lVar4 = *(long *)PTR_DAT_065dfdc0;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *(long *)puVar1;
  }
  plVar10 = (long *)**(undefined8 **)(lVar4 + 0xb8);
                    /* try { // try from 04c2fc2c to 04d2fc2f has its CatchHandler @ 04c2fd04 */
                    /* try { // try from 04c2fc30 to 04d2fc33 has its CatchHandler @ 04c2fcf4 */
                    /* try { // try from 04c2fc34 to 04d2fc3f has its CatchHandler @ 04c2f6c0 */
  plVar5 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 04c2fc40 to 04d2fc43 has its CatchHandler @ 04c2fc48 */
  lVar4 = *(long *)(unaff_x21 + 0x40);
                    /* try { // try from 04c2fc44 to 04d2fc6b has its CatchHandler @ 04c2f6c0 */
                    /* catch() { ... } // from try @ 04c2fc40 with catch @ 04c2fc48 */
                    /* catch() { ... } // from try @ 04c2f8bc with catch @ 04c2fc4c
                       catch() { ... } // from try @ 04c2fb78 with catch @ 04c2fc4c */
                    /* catch() { ... } // from try @ 04c2fad8 with catch @ 04c2fc50 */
                    /* catch() { ... } // from try @ 04c2f87c with catch @ 04c2fc54 */
  if ((lVar4 != 0) &&
     (lVar6 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  plVar5[4] = lVar4;
                    /* try { // try from 04c2fc6c to 04d2fc6f has its CatchHandler @ 04c2fc7c */
  in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x48);
                    /* catch() { ... } // from try @ 04c2fc6c with catch @ 04c2fc7c */
  lVar4 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065da1a8,&stack0x00000018);
  if ((lVar4 != 0) &&
     (lVar6 = thunk_FUN_02cea798(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar3 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3,0);
  }
  if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  plVar5[5] = lVar4;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar4 = *plVar10;
                    /* try { // try from 04c2fcbc to 04d2fcef has its CatchHandler @ 04c2fdbc */
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  uVar3 = *(undefined8 *)PTR_DAT_065e62b0;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_065e39d8) {
        puVar7 = (undefined8 *)(lVar4 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_04c2fd9c;
      }
      uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 04c2fac4 with catch @ 04c2fcf0
                       try { // try from 04c2fcf0 to 04d2fd2f has its CatchHandler @ 04c2f6c0 */
      piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 04c2fc30 with catch @ 04c2fcf4 */
    } while (uVar8 != 0);
  }
                    /* catch() { ... } // from try @ 04c2faac with catch @ 04c2fd00 */
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar10,*(long *)PTR_DAT_065e39d8,3);
                    /* catch() { ... } // from try @ 04c2fc2c with catch @ 04c2fd04 */
LAB_04c2fd9c:
  (*(code *)*puVar7)(plVar10,uVar3,plVar5,puVar7[1]);
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_065ce848;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,unaff_w20 & 1,*(undefined8 *)puVar1);
  return;
}


