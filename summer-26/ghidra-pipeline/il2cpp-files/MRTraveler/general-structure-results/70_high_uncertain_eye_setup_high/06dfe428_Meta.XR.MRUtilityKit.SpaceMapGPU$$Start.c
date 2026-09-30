/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$Start
ENTRY_POINT: 06dfe428
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dfe660) */
/* WARNING: Removing unreachable block (ram,0x06dfe72c) */

undefined8 Meta_XR_MRUtilityKit_SpaceMapGPU__Start(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  long *in_stack_00000008;
  undefined8 in_stack_00000028;
  
  plVar5 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar4 = PTR_DAT_08e92468;
  puVar3 = PTR_DAT_08e7ebe8;
  puVar2 = PTR_DAT_08e6a290;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
                    /* try { // try from 06dfe448 to 06efe44f has its CatchHandler @ 06dfe544 */
  plVar1 = (long *)(unaff_x19 + 0x20);
                    /* try { // try from 06dfe460 to 06efe46f has its CatchHandler @ 06dfe540 */
  do {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 06dfe484 to 06efe493 has its CatchHandler @ 06dfe52c */
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06dfe4b4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 06dfe4a0 to 06efe4a7 has its CatchHandler @ 06dfe530 */
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar2,0);
LAB_06dfe4b4:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 06dfe4c0 to 06efe4cf has its CatchHandler @ 06dfe528 */
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_06dfe654;
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_06dfe62c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 06dfe4d0 to 06efe50f has its CatchHandler @ 06dfe368 */
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06dfe510;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar4,0);
LAB_06dfe510:
                    /* try { // try from 06dfe510 to 06efe513 has its CatchHandler @ 06dfe53c */
                    /* try { // try from 06dfe514 to 06efe517 has its CatchHandler @ 06dfe368 */
                    /* try { // try from 06dfe518 to 06efe51b has its CatchHandler @ 06dfe538 */
    lVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 06dfe51c to 06efe51f has its CatchHandler @ 06dfe534 */
                    /* try { // try from 06dfe520 to 06efe523 has its CatchHandler @ 06dfe524 */
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
                    /* catch() { ... } // from try @ 06dfe520 with catch @ 06dfe524
                       try { // try from 06dfe524 to 06efe55b has its CatchHandler @ 06dfe368 */
                    /* catch() { ... } // from try @ 06dfe4c0 with catch @ 06dfe528 */
                    /* catch() { ... } // from try @ 06dfe484 with catch @ 06dfe52c */
    uVar9 = FUN_0717850c(lVar8,0);
                    /* catch() { ... } // from try @ 06dfe4a0 with catch @ 06dfe530 */
    if ((uVar9 & 1) == 0) {
                    /* catch() { ... } // from try @ 06dfe448 with catch @ 06dfe544 */
      lVar11 = *plVar1;
      if (lVar11 == 0) {
        lVar11 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e92450);
                    /* try { // try from 06dfe55c to 06efe55f has its CatchHandler @ 06dfe588 */
                    /* try { // try from 06dfe560 to 06efe58f has its CatchHandler @ 06dfe368 */
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  ();
        *plVar1 = lVar11;
        thunk_FUN_03d233cc(plVar1,lVar11);
      }
                    /* catch() { ... } // from try @ 06dfe55c with catch @ 06dfe588 */
                    /* try { // try from 06dfe590 to 06efe597 has its CatchHandler @ 06dfe5ac */
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 06dfe598 to 06efe5a3 has its CatchHandler @ 06dfe368 */
        thunk_FUN_03cd7500();
      }
      if (DAT_09411ba7 == '\0') {
                    /* try { // try from 06dfe5a4 to 06efe5ab has its CatchHandler @ 06dfe5ac */
        FUN_03c8f898(puVar3);
                    /* catch() { ... } // from try @ 06dfe590 with catch @ 06dfe5ac
                       catch() { ... } // from try @ 06dfe5a4 with catch @ 06dfe5ac */
        DAT_09411ba7 = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar7 = *(long *)puVar3;
      }
      FUN_0717fddc(lVar8,lVar11,in_stack_00000028,0x80000,
                   *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
    }
    else {
                    /* catch() { ... } // from try @ 06dfe51c with catch @ 06dfe534 */
                    /* catch() { ... } // from try @ 06dfe518 with catch @ 06dfe538 */
                    /* catch() { ... } // from try @ 06dfe510 with catch @ 06dfe53c */
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + -1;
                    /* catch() { ... } // from try @ 06dfe460 with catch @ 06dfe540 */
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06dfe648;
    }
  }
LAB_06dfe62c:
  puVar6 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a288,0);
LAB_06dfe648:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_06dfe654:
  if ((*in_stack_00000008 != 0) && (lVar8 = *(long *)(*in_stack_00000008 + 0x10), lVar8 != 0)) {
    uVar9 = FUN_0717850c(lVar8,0);
    if (((uVar9 & 1) == 0) && (*(int *)(unaff_x19 + 0x18) < *(int *)(unaff_x19 + 0x1c))) {
      if (*in_stack_00000008 == 0) goto LAB_06dfe6dc;
      FUN_05ac913c(*in_stack_00000008,1,*(undefined8 *)PTR_DAT_08e866f8);
    }
    if (*in_stack_00000008 != 0) {
      return *(undefined8 *)(*in_stack_00000008 + 0x10);
    }
  }
LAB_06dfe6dc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


