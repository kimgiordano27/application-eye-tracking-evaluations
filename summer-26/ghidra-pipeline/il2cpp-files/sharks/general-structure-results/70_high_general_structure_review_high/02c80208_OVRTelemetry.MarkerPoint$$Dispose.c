/*
FUNCTION_NAME: OVRTelemetry.MarkerPoint$$Dispose
ENTRY_POINT: 02c80208
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long OVRTelemetry_MarkerPoint__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long *unaff_x21;
  
  FUN_017fc350();
  *(undefined1 *)(unaff_x20 + 0xe0) = 1;
  puVar1 = PTR_DAT_037f39a0;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar5 = FUN_02c7ff24();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc(*(long *)puVar1);
  }
  uVar6 = FUN_033bab48(0);
  if (((uVar6 & 1) == 0) || (uVar6 = FUN_02c8048c(), (uVar6 & 1) == 0)) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    iVar4 = FUN_033b92bc(0);
    if (iVar4 != 7) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar4 = FUN_033b92bc(0);
      if (iVar4 != 2) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        iVar4 = FUN_033b92bc(0);
        if (iVar4 != 0xb) {
          thunk_FUN_01851c08(PTR_DAT_037f9c48);
          uVar5 = thunk_FUN_01861bbc();
          uVar9 = thunk_FUN_01851c08(PTR_DAT_0380d7a0);
          FUN_02bd14b0(uVar5,uVar9,0);
          goto LAB_02c80440;
        }
        lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380d760);
        uVar9 = FUN_02c108e4(lVar7,0);
        if (lVar7 == 0) goto LAB_02c8040c;
        lVar7 = FUN_02c566c4(uVar9,uVar5);
        goto LAB_02c80344;
      }
    }
    lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380d778);
    FUN_02c108e4(lVar7,0);
    if (lVar7 == 0) goto LAB_02c8040c;
    lVar7 = FUN_02c805d8(lVar7,uVar5);
  }
  else {
    lVar7 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380d770);
    FUN_02c108e4(lVar7,0);
    if (lVar7 == 0) goto LAB_02c8040c;
    lVar7 = FUN_02c804b0(lVar7);
  }
LAB_02c80344:
  lVar8 = *unaff_x21;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar8 = *unaff_x21;
  }
  lVar10 = *(long *)(lVar8 + 0xb8);
  *(bool *)lVar10 = lVar7 != 0;
  if (lVar7 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f3900);
    uVar5 = thunk_FUN_01861bbc();
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380d790);
    FUN_033ea810(uVar5,uVar9,0);
LAB_02c80440:
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380d798);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar5,uVar9);
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar10 = *(long *)(*unaff_x21 + 0xb8);
  }
  puVar3 = PTR_DAT_0380d788;
  puVar2 = PTR_DAT_0380d780;
  puVar1 = PTR_DAT_037f2c60;
  if (*(char *)(lVar10 + 1) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_033bdab0(*(undefined8 *)puVar2,0);
  }
  lVar8 = thunk_FUN_01861bbc(*(undefined8 *)puVar1);
  FUN_033e9b48(lVar8,*(undefined8 *)puVar3,0);
  if (lVar8 != 0) {
    FUN_01b26ee4(lVar8,*(undefined8 *)PTR_DAT_0380d768);
    return lVar7;
  }
LAB_02c8040c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


