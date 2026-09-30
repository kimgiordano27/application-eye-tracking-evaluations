/*
FUNCTION_NAME: OVRManager$$InitializeInsightPassthrough
ENTRY_POINT: 0636d3a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636d794) */
/* WARNING: Removing unreachable block (ram,0x0636d478) */
/* WARNING: Removing unreachable block (ram,0x0636d784) */
/* WARNING: Removing unreachable block (ram,0x0636d47c) */
/* WARNING: Removing unreachable block (ram,0x0636d48c) */
/* WARNING: Removing unreachable block (ram,0x0636d494) */
/* WARNING: Removing unreachable block (ram,0x0636d4bc) */
/* WARNING: Removing unreachable block (ram,0x0636d4a0) */
/* WARNING: Removing unreachable block (ram,0x0636d4ac) */
/* WARNING: Removing unreachable block (ram,0x0636d4c8) */
/* WARNING: Removing unreachable block (ram,0x0636d7f4) */
/* WARNING: Removing unreachable block (ram,0x0636d4dc) */
/* WARNING: Removing unreachable block (ram,0x0636d4f8) */
/* WARNING: Removing unreachable block (ram,0x0636d508) */
/* WARNING: Removing unreachable block (ram,0x0636d510) */
/* WARNING: Removing unreachable block (ram,0x0636d538) */
/* WARNING: Removing unreachable block (ram,0x0636d51c) */
/* WARNING: Removing unreachable block (ram,0x0636d528) */
/* WARNING: Removing unreachable block (ram,0x0636d544) */
/* WARNING: Removing unreachable block (ram,0x0636d6d8) */
/* WARNING: Removing unreachable block (ram,0x0636d6f0) */
/* WARNING: Removing unreachable block (ram,0x0636d704) */
/* WARNING: Removing unreachable block (ram,0x0636d70c) */
/* WARNING: Removing unreachable block (ram,0x0636d734) */
/* WARNING: Removing unreachable block (ram,0x0636d718) */
/* WARNING: Removing unreachable block (ram,0x0636d724) */
/* WARNING: Removing unreachable block (ram,0x0636d740) */
/* WARNING: Removing unreachable block (ram,0x0636d74c) */
/* WARNING: Removing unreachable block (ram,0x0636d750) */
/* WARNING: Removing unreachable block (ram,0x0636d554) */
/* WARNING: Removing unreachable block (ram,0x0636d564) */
/* WARNING: Removing unreachable block (ram,0x0636d56c) */
/* WARNING: Removing unreachable block (ram,0x0636d594) */
/* WARNING: Removing unreachable block (ram,0x0636d578) */
/* WARNING: Removing unreachable block (ram,0x0636d584) */
/* WARNING: Removing unreachable block (ram,0x0636d5a4) */
/* WARNING: Removing unreachable block (ram,0x0636d778) */
/* WARNING: Removing unreachable block (ram,0x0636d5b4) */
/* WARNING: Removing unreachable block (ram,0x0636d684) */
/* WARNING: Removing unreachable block (ram,0x0636d5c8) */
/* WARNING: Removing unreachable block (ram,0x0636d5f8) */
/* WARNING: Removing unreachable block (ram,0x0636d610) */
/* WARNING: Removing unreachable block (ram,0x0636d6ac) */
/* WARNING: Removing unreachable block (ram,0x0636d6b0) */
/* WARNING: Removing unreachable block (ram,0x0636d624) */
/* WARNING: Removing unreachable block (ram,0x0636d628) */
/* WARNING: Removing unreachable block (ram,0x0636d780) */
/* WARNING: Removing unreachable block (ram,0x0636d638) */
/* WARNING: Removing unreachable block (ram,0x0636d654) */
/* WARNING: Removing unreachable block (ram,0x0636d6a4) */
/* WARNING: Removing unreachable block (ram,0x0636d7f8) */
/* WARNING: Removing unreachable block (ram,0x0636d788) */

void OVRManager__InitializeInsightPassthrough(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0636d3d0;
    }
    in_x9 = in_x9 - 1;
                    /* try { // try from 0636d3a8 to 0646d3b7 has its CatchHandler @ 0636d528 */
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_0377596c();
                    /* try { // try from 0636d3bc to 0646d3f3 has its CatchHandler @ 0636d524 */
LAB_0636d3d0:
        (*(code *)*puVar1)();
        FUN_06372d34();
        (**(code **)(*unaff_x20 + 0x6e8))();
        lVar3 = *unaff_x23;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x22) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_0636d370;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_0377596c();
LAB_0636d370:
        uVar4 = (*(code *)*puVar1)();
        if ((uVar4 & 1) == 0) {
                    /* try { // try from 0636d404 to 0646d427 has its CatchHandler @ 0636d55c */
          plVar2 = (long *)thunk_FUN_037787d0();
          if (plVar2 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar2;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_0636d448;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_0636d430;
        }
        param_1 = *unaff_x23;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
                    /* try { // try from 0636d444 to 0646d44b has its CatchHandler @ 0636d55c */
    if (uVar4 == 0) break;
LAB_0636d430:
                    /* try { // try from 0636d438 to 0646d43b has its CatchHandler @ 0636d548 */
    if (*(long *)(piVar5 + -2) == *unaff_x25) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0636d464;
    }
  }
LAB_0636d448:
                    /* try { // try from 0636d44c to 0646d463 has its CatchHandler @ 0636d538 */
  puVar1 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x25,0);
LAB_0636d464:
                    /* try { // try from 0636d468 to 0646d49f has its CatchHandler @ 0636d530 */
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
}


