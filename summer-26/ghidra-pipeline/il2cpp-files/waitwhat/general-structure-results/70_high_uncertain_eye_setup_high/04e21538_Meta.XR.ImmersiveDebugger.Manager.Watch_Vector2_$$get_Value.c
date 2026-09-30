/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 04e21538
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  long *unaff_x26;
  undefined1 uStack0000000000000034;
  
  uVar1 = (*(code *)*param_1)();
                    /* try { // try from 04e21548 to 04f21557 has its CatchHandler @ 04e21558 */
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000034 = *(undefined1 *)(unaff_x21 + 0x2c);
                    /* catch() { ... } // from try @ 04e214f0 with catch @ 04e21558
                       catch() { ... } // from try @ 04e21548 with catch @ 04e21558 */
                    /* try { // try from 04e2155c to 04f2155f has its CatchHandler @ 04e21568 */
                    /* try { // try from 04e21560 to 04f2156b has its CatchHandler @ 04e21264 */
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04e2155c with catch @ 04e21568
                        */
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40),&stack0x00000034);
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04e215cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e215cc:
  uVar2 = (*(code *)*puVar5)();
  lVar4 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04e2099c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_031c0d08();
LAB_04e2099c:
  uVar3 = (*(code *)*puVar5)();
  FUN_0594e5f4(unaff_w23,unaff_w24,uVar1,uVar2,uVar3,0);
  return;
}


