/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 02bbc12c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>___ctor(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  ulong uVar10;
  ulong unaff_x25;
  ulong uVar11;
  uint *puVar12;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x22 + 0x3b8) = 1;
                    /* try { // try from 02bbc138 to 02cbc13b has its CatchHandler @ 02bbc16c */
                    /* try { // try from 02bbc13c to 02cbc14f has its CatchHandler @ 02bbc174 */
  lVar6 = FUN_01f08890(*unaff_x23,unaff_w20);
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 400);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar8 = FUN_01f08890(lVar8,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar10 = (ulong)uVar2;
  FUN_0358d498(*(undefined8 *)(unaff_x19 + 0x18),0,lVar8,0,uVar10,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (lVar8 == 0) goto LAB_02bbc2b0;
    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
    uVar11 = 0;
    puVar12 = (uint *)(lVar8 + 0x20);
    do {
      if (uVar9 <= uVar11) goto LAB_02bbc2ac;
      if (-1 < (int)*puVar12) {
        plVar7 = *(long **)(puVar12 + 2);
        if (plVar7 == (long *)0x0) goto LAB_02bbc2b0;
        uVar5 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar9 <= uVar11) goto LAB_02bbc2ac;
        *puVar12 = uVar5 & 0x7fffffff;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 6;
    } while (uVar10 != uVar11);
  }
  if (0 < (int)uVar2) {
    if (lVar8 == 0) {
LAB_02bbc2b0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    uVar11 = 0;
    do {
      if (uVar2 <= uVar11) {
LAB_02bbc2ac:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      iVar3 = *(int *)(lVar8 + uVar11 * 0x18 + 0x20);
      if (-1 < iVar3) {
        if (lVar6 == 0) goto LAB_02bbc2b0;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_02bbc2ac;
        lVar1 = lVar6 + (ulong)uVar5 * 4;
        *(int *)(lVar8 + uVar11 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar11 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  *(long *)(unaff_x19 + 0x10) = lVar6;
  thunk_FUN_01f51358((long *)(unaff_x19 + 0x10),lVar6);
  *(long *)(unaff_x19 + 0x18) = lVar8;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x18),lVar8);
  return;
}


