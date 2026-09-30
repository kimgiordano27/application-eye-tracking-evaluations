/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 03159efc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 143
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0315a08c) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x03159efc:
  puVar1 = (undefined8 *)FUN_01dde8fc();
                    /* try { // try from 03159f04 to 03259f1b has its CatchHandler @ 03159f50 */
  do {
                    /* try { // try from 03159f1c to 03259f3f has its CatchHandler @ 03159c94 */
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_0315a038;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
                    /* try { // try from 03159f40 to 03259f4f has its CatchHandler @ 03159f50 */
    }
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 03159f04 with catch @ 03159f50
                       catch() { ... } // from try @ 03159f40 with catch @ 03159f50 */
                    /* try { // try from 03159f54 to 03259f57 has its CatchHandler @ 03159f60 */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 03159f58 to 03259f63 has its CatchHandler @ 03159c94 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03159f54 with catch @ 03159f60
                        */
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03159f8c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_03159f8c:
    uVar3 = (*(code *)*puVar1)();
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar6 = *(uint *)(unaff_x21 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_03158928();
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *(undefined8 *)(lVar4 + (long)(int)uVar6 * 8 + 0x20) = uVar3;
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 == 0) goto code_r0x03159efc;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != *unaff_x24) {
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
      if (uVar2 == 0) goto code_r0x03159efc;
    }
    puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0315a054;
    }
  }
LAB_0315a038:
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_0315a054:
  (*(code *)*puVar1)();
  return;
}


