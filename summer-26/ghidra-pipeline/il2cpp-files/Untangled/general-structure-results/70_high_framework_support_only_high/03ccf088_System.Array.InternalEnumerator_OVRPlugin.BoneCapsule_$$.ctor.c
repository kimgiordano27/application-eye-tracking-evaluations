/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 03ccf088
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>___ctor(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  ulong in_x9;
  long in_x10;
  int in_w11;
  undefined4 in_register_0000405c;
  long in_x12;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  do {
                    /* try { // try from 03ccf088 to 03dcf08f has its CatchHandler @ 03ccf0c8 */
                    /* try { // try from 03ccf090 to 03dcf093 has its CatchHandler @ 03ccf0b8 */
                    /* try { // try from 03ccf094 to 03dcf09f has its CatchHandler @ 03ccf0c8 */
    iVar3 = 0;
    if (unaff_w20 != 0) {
      iVar3 = *(int *)(in_x12 + 0x20) / unaff_w20;
    }
    uVar2 = *(int *)(in_x12 + 0x20) - iVar3 * unaff_w20;
                    /* try { // try from 03ccf0a0 to 03dcf0a3 has its CatchHandler @ 03ccf0ac */
    if (*(uint *)(unaff_x22 + 0x18) <= uVar2) {
LAB_03ccf150:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
                    /* try { // try from 03ccf0a4 to 03dcf0df has its CatchHandler @ 03ccea74 */
    lVar4 = unaff_x22 + (long)(int)uVar2 * 4;
    lVar5 = (long)(int)in_w8;
    in_w8 = in_w8 + 1;
    *(int *)(unaff_x21 + lVar5 * CONCAT44(in_register_0000405c,in_w11) + 0x24) =
         *(int *)(lVar4 + 0x20) + -1;
    *(uint *)(lVar4 + 0x20) = in_w8;
    do {
      in_x9 = in_x9 + 1;
      in_x10 = in_x10 + 0x18;
      if ((long)*(int *)(unaff_x19 + 0x24) <= (long)in_x9) {
        *(uint *)(unaff_x19 + 0x24) = in_w8;
        *(long *)(unaff_x19 + 0x18) = unaff_x21;
        thunk_FUN_02f411dc();
        *(long *)(unaff_x19 + 0x10) = unaff_x22;
        thunk_FUN_02f411dc((long *)(unaff_x19 + 0x10));
        *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
        return;
      }
      lVar4 = *(long *)(unaff_x19 + 0x18);
      if (lVar4 == 0) goto LAB_03ccf154;
      if (*(uint *)(lVar4 + 0x18) <= in_x9) goto LAB_03ccf150;
    } while (*(int *)(lVar4 + in_x10) < 0);
    puVar1 = (undefined8 *)(lVar4 + in_x10);
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    if (unaff_x21 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= in_w8) goto LAB_03ccf150;
    in_x12 = unaff_x21 + (long)(int)in_w8 * (long)in_w11;
    *(undefined8 *)(in_x12 + 0x30) = puVar1[2];
    *(undefined8 *)(in_x12 + 0x28) = uVar7;
    *(undefined8 *)(in_x12 + 0x20) = uVar6;
    if (*(uint *)(unaff_x21 + 0x18) <= in_w8) goto LAB_03ccf150;
  } while (unaff_x22 != 0);
LAB_03ccf154:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


