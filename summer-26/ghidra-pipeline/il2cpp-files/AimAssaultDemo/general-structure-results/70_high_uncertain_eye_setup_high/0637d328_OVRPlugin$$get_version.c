/*
FUNCTION_NAME: OVRPlugin$$get_version
ENTRY_POINT: 0637d328
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


/* WARNING: Removing unreachable block (ram,0x0637d42c) */

undefined8 OVRPlugin__get_version(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x25;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0637d35c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_0637d35c:
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac();
  }
                    /* try { // try from 0637d390 to 0647d3bb has its CatchHandler @ 0637d1c8 */
  if (unaff_w23 != 1) {
                    /* try { // try from 0637d3bc to 0647d3df has its CatchHandler @ 0637d414 */
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 0637d3e0 to 0647d3e7 has its CatchHandler @ 0637d3f4 */
                    /* catch() { ... } // from try @ 0637d294 with catch @ 0637d3e8
                       try { // try from 0637d3e8 to 0647d427 has its CatchHandler @ 0637d1c8 */
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
                    /* catch() { ... } // from try @ 0637d2bc with catch @ 0637d40c */
                    /* catch() { ... } // from try @ 0637d2d0 with catch @ 0637d410 */
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0637d414;
          }
                    /* catch() { ... } // from try @ 0637d278 with catch @ 0637d3ec */
          uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 0637d248 with catch @ 0637d3f0 */
          piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 0637d384 with catch @ 0637d3f4
                       catch() { ... } // from try @ 0637d3e0 with catch @ 0637d3f4 */
        } while (uVar4 != 0);
      }
                    /* catch() { ... } // from try @ 0637d258 with catch @ 0637d400 */
      puVar1 = (undefined8 *)FUN_0377596c();
LAB_0637d414:
                    /* catch() { ... } // from try @ 0637d3bc with catch @ 0637d414 */
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0637d428 to 0647d42b has its CatchHandler @ 0637d490 */
    FUN_0381d6e4();
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar6 = *plVar2;
  __cxa_end_catch();
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0637d290;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_0637d290:
    (*(code *)*puVar1)();
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar6);
  }
  return 0;
}


