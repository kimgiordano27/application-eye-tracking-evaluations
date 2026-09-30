/*
FUNCTION_NAME: OVRManager$$remove_SpaceEraseComplete
ENTRY_POINT: 05ff002c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_SpaceEraseComplete(float param_1,float param_2,float param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 05ff002c to 060f0047 has its CatchHandler @ 05ff011c */
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    fVar7 = param_2;
    fVar8 = param_3;
    if (uVar4 != 0) {
                    /* try { // try from 05ff004c to 060f0083 has its CatchHandler @ 05ff0110 */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
                    /* try { // try from 05ff0084 to 060f0087 has its CatchHandler @ 05ff0144 */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05ff0088;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8();
LAB_05ff0088:
                    /* try { // try from 05ff0088 to 060f008b has its CatchHandler @ 05ff013c */
                    /* try { // try from 05ff008c to 060f00a3 has its CatchHandler @ 05ff0160 */
    (*(code *)*puVar2)();
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 05ff00a4 to 060f00ab has its CatchHandler @ 05ff0118 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 05ff00b4 to 060f00cf has its CatchHandler @ 05ff0114 */
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_05ff00e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8();
                    /* try { // try from 05ff00d4 to 060f010b has its CatchHandler @ 05ff010c */
LAB_05ff00e8:
    fVar6 = (float)(*(code *)*puVar2)();
    if (unaff_x19 != 0) {
                    /* catch() { ... } // from try @ 05ff00d4 with catch @ 05ff010c
                       try { // try from 05ff010c to 060f0177 has its CatchHandler @ 05fefe14 */
                    /* catch() { ... } // from try @ 05ff004c with catch @ 05ff0110 */
                    /* catch() { ... } // from try @ 05ff00b4 with catch @ 05ff0114 */
                    /* catch() { ... } // from try @ 05ff00a4 with catch @ 05ff0118 */
                    /* catch() { ... } // from try @ 05ff002c with catch @ 05ff011c */
      uVar4 = FUN_05feefb8((param_3 - fVar8) * (param_3 - fVar8) +
                           (param_1 - fVar6) * (param_1 - fVar6) +
                           (param_2 - fVar7) * (param_2 - fVar7));
      if ((uVar4 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_0445b184();
      }
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


