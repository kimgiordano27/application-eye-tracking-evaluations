/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 0636d5c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636d794) */
/* WARNING: Removing unreachable block (ram,0x0636d7f8) */

void OVRManager__UpdateDynamicResolutionVersion(void)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  int in_stack_00000008;
  int iStack000000000000000c;
  
code_r0x0636d5c8:
  iStack000000000000000c = unaff_w24;
  thunk_FUN_037784fc(*(undefined8 *)(unaff_x27 + 0x48),&stack0x0000000c);
                    /* try { // try from 0636d5dc to 0646d5eb has its CatchHandler @ 0636d5f4 */
  plVar4 = (long *)(**(code **)(*unaff_x20 + 0x248))();
                    /* catch() { ... } // from try @ 0636d5bc with catch @ 0636d5f0 */
                    /* catch() { ... } // from try @ 0636d5a0 with catch @ 0636d5f4
                       catch() { ... } // from try @ 0636d5dc with catch @ 0636d5f4 */
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 0636d5fc to 0646d5ff has its CatchHandler @ 0636d6cc */
                    /* try { // try from 0636d600 to 0646d66f has its CatchHandler @ 0636cd24 */
                    /* catch() { ... } // from try @ 0636d150 with catch @ 0636d604 */
    bVar1 = *(byte *)(*unaff_x28 + 0x130);
                    /* catch() { ... } // from try @ 0636d0f8 with catch @ 0636d608 */
                    /* catch() { ... } // from try @ 0636d0e0 with catch @ 0636d60c */
                    /* catch() { ... } // from try @ 0636d2c0 with catch @ 0636d610 */
                    /* catch() { ... } // from try @ 0636cf28 with catch @ 0636d614 */
                    /* catch() { ... } // from try @ 0636d2bc with catch @ 0636d618 */
                    /* catch() { ... } // from try @ 0636cedc with catch @ 0636d61c */
                    /* catch() { ... } // from try @ 0636d2b4 with catch @ 0636d620 */
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
      if (unaff_x22 != 0) {
        FUN_06372ec8(plVar4,unaff_x22);
        (**(code **)(*plVar4 + 0x6f8))(plVar4,unaff_x22);
      }
      goto LAB_0636d4f8;
    }
  }
                    /* catch() { ... } // from try @ 0636d280 with catch @ 0636d624 */
  if (unaff_x22 != 0) {
                    /* catch() { ... } // from try @ 0636d174 with catch @ 0636d628
                       catch() { ... } // from try @ 0636d300 with catch @ 0636d628 */
                    /* catch() { ... } // from try @ 0636cefc with catch @ 0636d62c */
    plVar4 = (long *)FUN_06372d34(unaff_x22);
                    /* catch() { ... } // from try @ 0636d008 with catch @ 0636d630 */
                    /* catch() { ... } // from try @ 0636d0a0 with catch @ 0636d634 */
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
                    /* catch() { ... } // from try @ 0636d03c with catch @ 0636d638 */
    iVar2 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    if (iVar2 != 10) {
      in_stack_00000008 = unaff_w24;
      thunk_FUN_037784fc(*(undefined8 *)(unaff_x27 + 0x48),&stack0x00000008);
      (**(code **)(*unaff_x20 + 600))();
    }
  }
LAB_0636d4f8:
  do {
    unaff_w24 = unaff_w24 + 1;
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0636d544;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_0636d544:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_037787d0();
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0636d724;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0636d5a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_0636d5a4:
    unaff_x22 = (*(code *)*puVar3)();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    iVar2 = FUN_063728dc();
    if (unaff_w24 < iVar2) goto code_r0x0636d5c8;
    FUN_06372d34(unaff_x22);
    (**(code **)(*unaff_x20 + 0x6e8))();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0636d740;
    }
  }
LAB_0636d724:
  puVar3 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x25,0);
LAB_0636d740:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


