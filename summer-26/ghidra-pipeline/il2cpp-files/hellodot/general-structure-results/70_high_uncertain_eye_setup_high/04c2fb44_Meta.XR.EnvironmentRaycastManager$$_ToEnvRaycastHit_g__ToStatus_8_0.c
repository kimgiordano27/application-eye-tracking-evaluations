/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$<ToEnvRaycastHit>g__ToStatus|8_0
ENTRY_POINT: 04c2fb44
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__<ToEnvRaycastHit>g__ToStatus_8_0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x25;
  long *unaff_x26;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000018;
  
  lVar6 = *unaff_x26;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar6);
    lVar6 = *unaff_x26;
  }
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar6);
                    /* try { // try from 04c2fb78 to 04d2fb7f has its CatchHandler @ 04c2fc4c */
      lVar6 = *unaff_x26;
    }
                    /* try { // try from 04c2fb80 to 04d2fc2b has its CatchHandler @ 04c2f6c0 */
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    uVar2 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e62a0);
    FUN_04a4cc10(uVar2,uVar10,*(undefined8 *)PTR_DAT_065e62a8,0);
    *(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 8) = uVar2;
  }
  auVar11 = FUN_033df434();
  uVar10 = auVar11._0_8_;
  uVar2 = 0;
  if (auVar11._8_8_ != 0) {
    uVar10 = FUN_033dbf6c(auVar11._8_8_,*(undefined8 *)PTR_DAT_065e6298);
    uVar2 = uVar10;
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c(uVar10,uVar2);
  }
  uVar2 = FUN_04c2da10();
  *(undefined8 *)(unaff_x21 + 0x48) = uVar2;
  puVar1 = PTR_DAT_065dfdc0;
  lVar6 = *(long *)PTR_DAT_065dfdc0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar6 = *(long *)puVar1;
  }
  plVar9 = (long *)**(undefined8 **)(lVar6 + 0xb8);
  plVar3 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = *(long *)(unaff_x21 + 0x40);
  if ((lVar6 != 0) &&
     (lVar4 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar2 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar2,0);
  }
  if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  plVar3[4] = lVar6;
  in_stack_00000018 = *(undefined8 *)(unaff_x21 + 0x48);
  lVar6 = thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065da1a8,&stack0x00000018);
  if ((lVar6 != 0) &&
     (lVar4 = thunk_FUN_02cea798(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
    uVar2 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar2,0);
  }
  if (*(uint *)(plVar3 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
  plVar3[5] = lVar6;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  uVar2 = *(undefined8 *)PTR_DAT_065e62b0;
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e39d8) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_04c2fd9c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065e39d8,3);
LAB_04c2fd9c:
  (*(code *)*puVar5)(plVar9,uVar2,plVar3,puVar5[1]);
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_065ce848;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_0411bcac(unaff_x19 + 2,unaff_w20 & 1,*(undefined8 *)puVar1);
  return;
}


