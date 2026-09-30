/*
FUNCTION_NAME: OVRPlugin$$CreateVirtualKeyboard
ENTRY_POINT: 05328b24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__CreateVirtualKeyboard(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x23;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 in_stack_00000008 [16];
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
                    /* catch() { ... } // from try @ 05328b04 with catch @ 05328b28 */
                    /* try { // try from 05328b2c to 05428b33 has its CatchHandler @ 05328b3c */
  if (uVar3 != 0) {
                    /* try { // try from 05328b34 to 05428b3f has its CatchHandler @ 05327458 */
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 05328b2c with catch @ 05328b3c */
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
        goto LAB_05328b70;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05328b70:
  (*(code *)*puVar1)();
  plVar5 = *(long **)(unaff_x20 + 0x40);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)System_Xml_Schema_Datatype_anySimpleType_TypeInfo) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto OVRPlugin__DestroyVirtualKeyboard;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_02f421d0(plVar5,*(long *)System_Xml_Schema_Datatype_anySimpleType_TypeInfo,3);
OVRPlugin__DestroyVirtualKeyboard:
  (*(code *)*puVar1)(&stack0x00000008 + 4,plVar5,puVar1[1]);
  in_stack_00000060 = in_stack_00000008._4_8_;
  uStack0000000000000074 = in_stack_00000020;
  uStack000000000000006c = in_stack_00000018;
  FUN_052c2514(&stack0x00000080,&stack0x00000060,0);
  FUN_052c2514(&stack0x00000080,&stack0x000000a0,0);
  uVar7 = *(undefined8 *)(unaff_x23 + 0x14);
  uVar6 = *(undefined8 *)(unaff_x23 + 0xc);
  unaff_x19[1] = in_stack_00000088;
  *unaff_x19 = in_stack_00000080;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uVar7;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar6;
  return;
}


