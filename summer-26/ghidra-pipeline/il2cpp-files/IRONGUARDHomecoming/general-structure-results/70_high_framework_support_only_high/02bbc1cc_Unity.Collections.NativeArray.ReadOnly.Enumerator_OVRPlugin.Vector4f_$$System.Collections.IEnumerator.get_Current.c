/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02bbc1cc
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
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
  
  while (plVar6 = *(long **)(unaff_x26 + 2), plVar6 != (long *)0x0) {
                    /* catch() { ... } // from try @ 02bbc18c with catch @ 02bbc1d8
                       catch() { ... } // from try @ 02bbc1c8 with catch @ 02bbc1d8 */
                    /* try { // try from 02bbc1dc to 02cbc1df has its CatchHandler @ 02bbc1e8 */
    uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
                    /* try { // try from 02bbc1e0 to 02cbc1eb has its CatchHandler @ 02bbbe08 */
    uVar2 = *(uint *)(unaff_x23 + 0x18);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bbc1dc with catch @ 02bbc1e8
                        */
    if (uVar2 <= unaff_x25) goto LAB_02bbc2ac;
    *unaff_x26 = uVar5 & 0x7fffffff;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = unaff_x26 + 6;
      if (unaff_x24 == unaff_x25) {
        if ((int)unaff_x24 < 1) goto LAB_02bbc278;
        if (unaff_x23 == 0) goto LAB_02bbc2b0;
        uVar2 = *(uint *)(unaff_x23 + 0x18);
        uVar7 = 0;
        goto LAB_02bbc21c;
      }
      if (uVar2 <= unaff_x25) goto LAB_02bbc2ac;
    } while ((int)*unaff_x26 < 0);
  }
LAB_02bbc2b0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_02bbc21c:
  if (uVar2 <= uVar7) {
LAB_02bbc2ac:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  iVar3 = *(int *)(unaff_x23 + uVar7 * 0x18 + 0x20);
  if (-1 < iVar3) {
    if (unaff_x21 == 0) goto LAB_02bbc2b0;
    iVar4 = 0;
    if (unaff_w20 != 0) {
      iVar4 = iVar3 / unaff_w20;
    }
    uVar5 = iVar3 - iVar4 * unaff_w20;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_02bbc2ac;
    lVar1 = unaff_x21 + (ulong)uVar5 * 4;
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


