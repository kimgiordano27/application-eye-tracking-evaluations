/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMesh
ENTRY_POINT: 0532fcdc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceTriangleMesh(ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  ulong uStack0000000000000014;
  undefined4 uStack000000000000003c;
  uint uStack0000000000000044;
  
                    /* try { // try from 0532fcdc to 0542fd03 has its CatchHandler @ 05330344 */
  if ((param_1 & 1) == 0) {
    FUN_02f08768(System_Predicate<DebugUI_Panel>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x319) = 1;
  }
  puVar1 = System_Predicate<DebugUI_Panel>_TypeInfo;
  uStack000000000000003c = 0;
  uStack0000000000000044 = 0;
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
                    /* try { // try from 0532fd20 to 0542fd3b has its CatchHandler @ 05330350 */
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<DebugUI_Panel>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
        goto LAB_0532fd60;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0532fd60:
                    /* try { // try from 0532fd60 to 0542fd6b has its CatchHandler @ 05330334 */
  (*(code *)*puVar2)();
                    /* try { // try from 0532fd70 to 0542fd77 has its CatchHandler @ 05330328 */
  lVar3 = *unaff_x20;
                    /* try { // try from 0532fd78 to 0542fe9b has its CatchHandler @ 0532f550 */
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_0532fdc0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0532fdc0:
  (*(code *)*puVar2)();
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0532fe20;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0532fe20:
  (*(code *)*puVar2)();
  lVar3 = *unaff_x20;
  uStack0000000000000014 = (ulong)uStack0000000000000044;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  uStack000000000000000c = uStack000000000000003c;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_0532fe90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_0532fe90:
  (*(code *)*puVar2)();
                    /* try { // try from 0532fe9c to 0542fec3 has its CatchHandler @ 05330348 */
  FUN_0532fec8();
  return;
}


