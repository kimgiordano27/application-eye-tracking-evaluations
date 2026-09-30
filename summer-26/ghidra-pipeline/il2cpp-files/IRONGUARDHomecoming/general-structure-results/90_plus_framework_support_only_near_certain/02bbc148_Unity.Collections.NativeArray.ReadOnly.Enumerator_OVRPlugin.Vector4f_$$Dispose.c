/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 02bbc148
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Dispose
               (long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  int unaff_w20;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  uint *puVar11;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 400);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar7 = FUN_01f08890(lVar7,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar9 = (ulong)uVar2;
  FUN_0358d498(*(undefined8 *)(unaff_x19 + 0x18),0,lVar7,0,uVar9,0);
  if ((0 < (int)uVar2) && ((unaff_x25 & 1) != 0)) {
    if (lVar7 == 0) goto LAB_02bbc2b0;
    uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
    uVar10 = 0;
    puVar11 = (uint *)(lVar7 + 0x20);
    do {
      if (uVar8 <= uVar10) goto LAB_02bbc2ac;
      if (-1 < (int)*puVar11) {
        plVar6 = *(long **)(puVar11 + 2);
        if (plVar6 == (long *)0x0) goto LAB_02bbc2b0;
        uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
        uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
        if (uVar8 <= uVar10) goto LAB_02bbc2ac;
        *puVar11 = uVar5 & 0x7fffffff;
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 6;
    } while (uVar9 != uVar10);
  }
  if (0 < (int)uVar2) {
    if (lVar7 == 0) {
LAB_02bbc2b0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar10 = 0;
    do {
      if (uVar2 <= uVar10) {
LAB_02bbc2ac:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      iVar3 = *(int *)(lVar7 + uVar10 * 0x18 + 0x20);
      if (-1 < iVar3) {
        if (param_2 == 0) goto LAB_02bbc2b0;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(param_2 + 0x18) <= uVar5) goto LAB_02bbc2ac;
        lVar1 = param_2 + (ulong)uVar5 * 4;
        *(int *)(lVar7 + uVar10 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  *(long *)(unaff_x19 + 0x10) = param_2;
  thunk_FUN_01f51358((long *)(unaff_x19 + 0x10),param_2);
  *(long *)(unaff_x19 + 0x18) = lVar7;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x18),lVar7);
  return;
}


