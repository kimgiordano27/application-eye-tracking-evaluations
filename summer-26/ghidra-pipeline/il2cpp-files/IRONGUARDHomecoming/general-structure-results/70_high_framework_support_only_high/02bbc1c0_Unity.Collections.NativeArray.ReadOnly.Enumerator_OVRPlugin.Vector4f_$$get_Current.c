/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 02bbc1c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__get_Current
               (ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_CY;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  uint *unaff_x26;
  
  while (!(bool)in_CY) {
                    /* try { // try from 02bbc1c8 to 02cbc1d7 has its CatchHandler @ 02bbc1d8 */
    if (-1 < (int)*unaff_x26) {
      plVar6 = *(long **)(unaff_x26 + 2);
      if (plVar6 == (long *)0x0) goto LAB_02bbc2b0;
      uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
      param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
      if (param_1 <= unaff_x25) break;
      *unaff_x26 = uVar5 & 0x7fffffff;
    }
    unaff_x25 = unaff_x25 + 1;
    unaff_x26 = unaff_x26 + 6;
    if (unaff_x24 == unaff_x25) {
      if ((int)unaff_x24 < 1) goto LAB_02bbc278;
      if (unaff_x23 == 0) goto LAB_02bbc2b0;
      uVar5 = *(uint *)(unaff_x23 + 0x18);
      uVar7 = 0;
      goto LAB_02bbc21c;
    }
    in_CY = (param_1 & 0xffffffff) <= unaff_x25;
  }
LAB_02bbc2ac:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
LAB_02bbc21c:
  if (uVar5 <= uVar7) goto LAB_02bbc2ac;
  iVar2 = *(int *)(unaff_x23 + uVar7 * 0x18 + 0x20);
  if (-1 < iVar2) {
    if (unaff_x21 == 0) {
LAB_02bbc2b0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar2 / unaff_w20;
    }
    uVar3 = iVar2 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) goto LAB_02bbc2ac;
    lVar1 = unaff_x21 + (ulong)uVar3 * 4;
    *(int *)(unaff_x23 + uVar7 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
    *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
  }
  uVar7 = uVar7 + 1;
  if (uVar7 == unaff_x24) {
LAB_02bbc278:
    *(long *)(unaff_x19 + 0x10) = unaff_x21;
    thunk_FUN_01f51358((long *)(unaff_x19 + 0x10));
    *(long *)(unaff_x19 + 0x18) = unaff_x23;
    thunk_FUN_01f51358();
    return;
  }
  goto LAB_02bbc21c;
}


