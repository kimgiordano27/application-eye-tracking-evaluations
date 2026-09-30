/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 04e214c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
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
  
  if (in_x9 != 0) {
                    /* try { // try from 04e214c8 to 04f214cb has its CatchHandler @ 04e214cc */
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e214c8 with catch @ 04e214cc
                       try { // try from 04e214cc to 04f214ef has its CatchHandler @ 04e21264 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e214a0 with catch @ 04e214d0
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e21434 with catch @ 04e214d4
                        */
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value;
      }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e214a4 with catch @ 04e214d8
                        */
      in_x9 = in_x9 + -1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_031c0d08();
                    /* try { // try from 04e214f0 to 04f21507 has its CatchHandler @ 04e21558 */
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value:
  uVar1 = (*(code *)*puVar4)();
  lVar5 = *(long *)(unaff_x22 + 0x20);
  uStack0000000000000034 = *(undefined1 *)(unaff_x21 + 0x2c);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x40),&stack0x00000034);
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04e215cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_031c0d08();
LAB_04e215cc:
  uVar2 = (*(code *)*puVar4)();
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_070f5978) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04e2099c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_031c0d08();
LAB_04e2099c:
  uVar3 = (*(code *)*puVar4)();
  FUN_0594e5f4(unaff_w23,unaff_w24,uVar1,uVar2,uVar3,0);
  return;
}


