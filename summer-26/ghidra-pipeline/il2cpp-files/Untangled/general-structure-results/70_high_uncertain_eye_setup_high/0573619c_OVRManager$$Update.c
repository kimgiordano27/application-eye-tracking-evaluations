/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 0573619c
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x057363cc) */

undefined8 OVRManager__Update(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar14;
  
  FUN_02f07e70(PTR_DAT_06d58b60);
  *(undefined1 *)(unaff_x21 + 0x8f9) = 1;
  puVar1 = PTR_DAT_06d01f60;
  uVar5 = FUN_0572fd34();
  plVar6 = (long *)FUN_02f07f14(*unaff_x20,uVar5);
  plVar7 = (long *)FUN_05734320();
  puVar4 = PTR_DAT_06d58b68;
  puVar3 = PTR_DAT_06d582c8;
  puVar2 = PTR_DAT_06d02048;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar14 = 0;
  do {
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0573624c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar2,0);
LAB_0573624c:
                    /* catch() { ... } // from try @ 05736110 with catch @ 0573624c */
                    /* catch() { ... } // from try @ 057360c0 with catch @ 05736250 */
                    /* catch() { ... } // from try @ 057360ec with catch @ 05736254 */
    uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                    /* catch() { ... } // from try @ 057360c8 with catch @ 05736258 */
    if ((uVar12 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_05736374;
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 == 0) goto LAB_0573634c;
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
                    /* catch() { ... } // from try @ 05736114 with catch @ 0573625c */
    lVar11 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
                    /* try { // try from 05736274 to 0583628b has its CatchHandler @ 057364b0 */
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_057362a8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* try { // try from 0573628c to 0583640f has its CatchHandler @ 05735eac */
    puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar3,0);
LAB_057362a8:
    uVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
    thunk_FUN_05fd7490(lVar11,uVar9,0,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if ((lVar11 != 0) &&
       (lVar10 = thunk_FUN_02ef170c(lVar11,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
      uVar9 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,0);
    }
    if (*(uint *)(plVar6 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar6[(long)(int)uVar14 + 4] = lVar11;
    thunk_FUN_02f411dc(plVar6 + (long)(int)uVar14 + 4,lVar11);
    uVar14 = uVar14 + 1;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_05736368;
    }
  }
LAB_0573634c:
  puVar8 = (undefined8 *)FUN_02eea86c(plVar7,*(long *)puVar1,0);
LAB_05736368:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_05736374:
  uVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58970);
  FUN_05fd9338(uVar9,plVar6,0);
  return uVar9;
}


