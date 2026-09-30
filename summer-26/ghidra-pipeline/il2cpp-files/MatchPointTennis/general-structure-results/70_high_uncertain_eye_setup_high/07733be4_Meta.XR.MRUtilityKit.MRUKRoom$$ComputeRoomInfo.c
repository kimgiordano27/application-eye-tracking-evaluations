/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$ComputeRoomInfo
ENTRY_POINT: 07733be4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


int Meta_XR_MRUtilityKit_MRUKRoom__ComputeRoomInfo(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x1e8) = in_w8;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (plVar2 = (long *)FUN_07715da0(*(long *)(unaff_x19 + 0x10),0), plVar2 != (long *)0x0)) {
                    /* try { // try from 07733c00 to 07833c3b has its CatchHandler @ 07733c60 */
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* catch() { ... } // from try @ 07733ba4 with catch @ 07733c18 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 07733bdc with catch @ 07733c24 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f30ab8) {
                    /* try { // try from 07733c48 to 07833c4f has its CatchHandler @ 07733c60 */
                    /* catch() { ... } // from try @ 07733b14 with catch @ 07733c50 */
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x24) * 0x10 + 0x138);
          goto LAB_07733c58;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 07733c3c to 07833c47 has its CatchHandler @ 07733298 */
    puVar3 = (undefined8 *)FUN_044822ac(plVar2,*(long *)PTR_DAT_09f30ab8,0x24);
LAB_07733c58:
                    /* catch() { ... } // from try @ 07733b64 with catch @ 07733c60
                       catch() { ... } // from try @ 07733bbc with catch @ 07733c60
                       catch() { ... } // from try @ 07733c00 with catch @ 07733c60
                       catch() { ... } // from try @ 07733c48 with catch @ 07733c60 */
    iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (iVar1 == 1) {
      if (((*(long *)(unaff_x19 + 0x40) == 0) || (*(long *)(unaff_x19 + 0x28) == 0)) ||
         (*(long *)(unaff_x19 + 0x20) == 0)) goto LAB_07733cac;
      iVar1 = (*(int *)(*(long *)(unaff_x19 + 0x28) + 0x20) -
              *(int *)(*(long *)(unaff_x19 + 0x20) + 0x20)) +
              *(int *)(*(long *)(unaff_x19 + 0x40) + 0x18);
    }
    else {
      iVar1 = 0;
    }
    return iVar1;
  }
LAB_07733cac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


