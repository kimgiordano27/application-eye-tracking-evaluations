/*
FUNCTION_NAME: OVRManager$$add_AudioOutChanged
ENTRY_POINT: 07c57cf8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c57e44) */

void OVRManager__add_AudioOutChanged(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  
code_r0x07c57cf8:
  if (!(bool)in_ZR) goto LAB_07c57ce4;
LAB_07c57cfc:
  puVar1 = (undefined8 *)FUN_044822ac();
  do {
                    /* try { // try from 07c57d18 to 07d57d43 has its CatchHandler @ 07c5747c */
                    /* catch() { ... } // from try @ 07c57d14 with catch @ 07c57d1c */
                    /* catch() { ... } // from try @ 07c57d10 with catch @ 07c57d20 */
    plVar2 = (long *)(*(code *)*puVar1)();
                    /* catch() { ... } // from try @ 07c57c2c with catch @ 07c57d24 */
                    /* catch() { ... } // from try @ 07c57b40 with catch @ 07c57d28 */
                    /* catch() { ... } // from try @ 07c57c40 with catch @ 07c57d2c */
    uVar3 = thunk_FUN_0448520c(*unaff_x25);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* try { // try from 07c57d44 to 07d57d47 has its CatchHandler @ 07c57d6c */
                    /* try { // try from 07c57d48 to 07d57d7b has its CatchHandler @ 07c5747c */
    FUN_073a8270();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 07c57d44 with catch @ 07c57d6c */
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
                    /* catch() { ... } // from try @ 07c57b54 with catch @ 07c57d90
                       try { // try from 07c57d90 to 07d57da7 has its CatchHandler @ 07c5747c */
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07c57c70;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
                    /* try { // try from 07c57d7c to 07d57d8f has its CatchHandler @ 07c57e00 */
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar2,*unaff_x26,0);
LAB_07c57c70:
                    /* try { // try from 07c57da8 to 07d57dab has its CatchHandler @ 07c57dd4 */
    (*(code *)*puVar1)(plVar2,uVar3,puVar1[1]);
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 07c57dac to 07d57de3 has its CatchHandler @ 07c5747c */
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07c57cbc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_07c57cbc:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_07c57df0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_07c57cfc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_07c57ce4:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x07c57cf8;
    }
                    /* try { // try from 07c57d10 to 07d57d13 has its CatchHandler @ 07c57d20 */
                    /* try { // try from 07c57d14 to 07d57d17 has its CatchHandler @ 07c57d1c */
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_07c57e0c;
    }
  }
LAB_07c57df0:
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_07c57e0c:
  (*(code *)*puVar1)();
  return;
}


