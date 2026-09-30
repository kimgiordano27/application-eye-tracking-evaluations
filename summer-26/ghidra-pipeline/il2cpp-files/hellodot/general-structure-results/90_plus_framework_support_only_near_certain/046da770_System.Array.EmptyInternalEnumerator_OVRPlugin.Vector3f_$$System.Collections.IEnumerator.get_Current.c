/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 046da770
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_get_Current
               (undefined8 param_1)

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
  ulong uVar10;
  ulong unaff_x24;
  ulong uVar11;
  uint *puVar12;
  
  lVar6 = FUN_02ce7ad4(param_1,unaff_w20);
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x1a8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02ce0978(lVar8);
  }
  lVar8 = FUN_02ce7ad4(lVar8,unaff_w20);
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  uVar10 = (ulong)uVar2;
  FUN_04f53d58(*(undefined8 *)(unaff_x19 + 0x18),0,lVar8,0,uVar10,0);
  if ((0 < (int)uVar2) && ((unaff_x24 & 1) != 0)) {
    if (lVar8 == 0) goto LAB_046da8c4;
    uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
    uVar11 = 0;
    puVar12 = (uint *)(lVar8 + 0x20);
    do {
      if (uVar9 <= uVar11) goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor;
      if (-1 < (int)*puVar12) {
        plVar7 = *(long **)(puVar12 + 2);
        if (plVar7 == (long *)0x0) goto LAB_046da8c4;
        uVar5 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar9 <= uVar11) goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor;
        *puVar12 = uVar5 & 0x7fffffff;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 10;
    } while (uVar10 != uVar11);
  }
  if (0 < (int)uVar2) {
    if (lVar8 == 0) {
LAB_046da8c4:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    uVar11 = 0;
    do {
      if (uVar2 <= uVar11) {
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      iVar3 = *(int *)(lVar8 + uVar11 * 0x28 + 0x20);
      if (-1 < iVar3) {
        if (lVar6 == 0) goto LAB_046da8c4;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar3 / unaff_w20;
        }
        uVar5 = iVar3 - iVar4 * unaff_w20;
        if (*(uint *)(lVar6 + 0x18) <= uVar5)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>___cctor;
        lVar1 = lVar6 + (ulong)uVar5 * 4;
        *(int *)(lVar8 + uVar11 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar11 + 1;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar10);
  }
  *(long *)(unaff_x19 + 0x10) = lVar6;
  *(long *)(unaff_x19 + 0x18) = lVar8;
  return;
}


