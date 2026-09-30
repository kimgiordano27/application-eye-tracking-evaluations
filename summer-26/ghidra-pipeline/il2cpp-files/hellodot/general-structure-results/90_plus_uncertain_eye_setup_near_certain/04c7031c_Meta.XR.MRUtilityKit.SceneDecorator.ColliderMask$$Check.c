/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$Check
ENTRY_POINT: 04c7031c
PROGRAM: hellodot-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__Check(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000008;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e38);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e7e40);
  *(undefined1 *)(unaff_x21 + 0xa69) = 1;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  puVar1 = PTR_DAT_065e7260;
  FUN_04c6722c(in_stack_00000008);
  lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
                    /* try { // try from 04c70378 to 04d7038b has its CatchHandler @ 04c70674 */
  FUN_04f7383c(lVar6,0);
  puVar4 = PTR_DAT_065e7e18;
  puVar3 = PTR_DAT_065e4308;
  puVar2 = PTR_DAT_065c86d8;
  puVar1 = PTR_DAT_065c86c0;
  if (unaff_x22 == 0) {
    uVar10 = 0;
    uVar15 = uVar10;
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 04c703a0 to 04d703a3 has its CatchHandler @ 04c70604 */
  *(undefined8 *)(lVar6 + 0x18) = uVar15;
  *(undefined8 *)(lVar6 + 0x10) = uVar10;
                    /* try { // try from 04c703b8 to 04d703e3 has its CatchHandler @ 04c7066c */
  plVar7 = (long *)(**(code **)(*unaff_x20 + 0x2d8))();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04c706d4 to 04d706db has its CatchHandler @ 04c706dc */
    FUN_02ce7c7c();
  }
  plVar8 = (long *)(**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 04c70400 to 04d70413 has its CatchHandler @ 04c7051c */
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_04c70440;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* try { // try from 04c70428 to 04d7042b has its CatchHandler @ 04c70514 */
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar3,0);
LAB_04c70440:
                    /* try { // try from 04c70440 to 04d704bb has its CatchHandler @ 04c70520 */
    iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (iVar5 != 0) {
      lVar6 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
      FUN_04f7383c(lVar6,0);
      auVar17 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
      if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 04c705bc with catch @ 04c706dc
                       catch() { ... } // from try @ 04c70648 with catch @ 04c706dc
                       catch() { ... } // from try @ 04c706b4 with catch @ 04c706dc
                       catch() { ... } // from try @ 04c706d4 with catch @ 04c706dc */
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined1 (*) [16])(lVar6 + 0x10) = auVar17;
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_065e53a8) {
                    /* try { // try from 04c704e0 to 04d704f3 has its CatchHandler @ 04c70670 */
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_04c704f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065e53a8,2);
LAB_04c704f0:
      uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      lVar6 = *(long *)PTR_DAT_065e7e40;
                    /* try { // try from 04c7050c to 04d7050f has its CatchHandler @ 04c70518 */
                    /* try { // try from 04c70510 to 04d70533 has its CatchHandler @ 04c70194 */
      if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 04c70428 with catch @ 04c70514 */
                    /* catch() { ... } // from try @ 04c7050c with catch @ 04c70518 */
        thunk_FUN_02cd038c(lVar6);
                    /* catch() { ... } // from try @ 04c70400 with catch @ 04c7051c */
                    /* catch() { ... } // from try @ 04c70440 with catch @ 04c70520 */
        lVar6 = *(long *)PTR_DAT_065e7e40;
      }
      lVar14 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar14 == 0) {
                    /* try { // try from 04c70534 to 04d70537 has its CatchHandler @ 04c705f4 */
                    /* try { // try from 04c70538 to 04d705bb has its CatchHandler @ 04c70194 */
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar6);
          lVar6 = *(long *)PTR_DAT_065e7e40;
        }
        uVar15 = **(undefined8 **)(lVar6 + 0xb8);
        lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
        FUN_04a5701c(lVar14,uVar15,*(undefined8 *)PTR_DAT_065e7e30,0);
        lVar6 = *(long *)PTR_DAT_065e7e40;
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar14;
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar6);
        lVar6 = *(long *)PTR_DAT_065e7e40;
      }
      lVar16 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                    /* try { // try from 04c705bc to 04d705db has its CatchHandler @ 04c706dc */
      if (lVar16 == 0) {
        if (*(int *)(lVar6 + 0xe0) == 0) {
          thunk_FUN_02cd038c(lVar6);
                    /* try { // try from 04c705dc to 04d705e3 has its CatchHandler @ 04c70668 */
          lVar6 = *(long *)PTR_DAT_065e7e40;
        }
                    /* try { // try from 04c705e4 to 04d70623 has its CatchHandler @ 04c70194 */
        uVar15 = **(undefined8 **)(lVar6 + 0xb8);
                    /* catch() { ... } // from try @ 04c70534 with catch @ 04c705f4 */
        lVar16 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
                    /* catch() { ... } // from try @ 04c702bc with catch @ 04c70600 */
                    /* catch() { ... } // from try @ 04c703a0 with catch @ 04c70604 */
                    /* catch() { ... } // from try @ 04c702d4 with catch @ 04c70608 */
                    /* catch() { ... } // from try @ 04c70290 with catch @ 04c7060c */
        FUN_04a5701c(lVar16,uVar15,*(undefined8 *)PTR_DAT_065e7e38,0);
                    /* try { // try from 04c70624 to 04d70627 has its CatchHandler @ 04c70638 */
        *(long *)(*(long *)(*(long *)PTR_DAT_065e7e40 + 0xb8) + 0x10) = lVar16;
      }
                    /* catch() { ... } // from try @ 04c70624 with catch @ 04c70638 */
      uVar10 = FUN_033f7aa4(uVar10,lVar14,lVar16,*(undefined8 *)PTR_DAT_065e4d98);
                    /* try { // try from 04c70648 to 04d70667 has its CatchHandler @ 04c706dc */
      plVar11 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e7b68);
      FUN_04c5aa60(plVar11,0);
                    /* catch() { ... } // from try @ 04c705dc with catch @ 04c70668
                       try { // try from 04c70668 to 04d7068f has its CatchHandler @ 04c70194 */
                    /* catch() { ... } // from try @ 04c703b8 with catch @ 04c7066c */
                    /* catch() { ... } // from try @ 04c704e0 with catch @ 04c70670 */
                    /* catch() { ... } // from try @ 04c70378 with catch @ 04c70674 */
      uVar15 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400));
      if (plVar11 != (long *)0x0) {
                    /* try { // try from 04c70690 to 04d70693 has its CatchHandler @ 04c706a4 */
        (**(code **)(*plVar11 + 0x408))(plVar11,uVar15,*(undefined8 *)(*plVar11 + 0x410));
                    /* catch() { ... } // from try @ 04c70690 with catch @ 04c706a4 */
        (**(code **)(*plVar11 + 0x348))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x350));
                    /* try { // try from 04c706b4 to 04d706c7 has its CatchHandler @ 04c706dc */
                    /* try { // try from 04c706c8 to 04d706d3 has its CatchHandler @ 04c70194 */
        (**(code **)(*unaff_x20 + 0x558))();
        return plVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar15,uVar15);
    }
  }
  plVar7 = (long *)thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04678954(plVar7,*(undefined8 *)puVar1);
  return plVar7;
}


