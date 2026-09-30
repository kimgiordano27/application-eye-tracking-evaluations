/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$Reset
ENTRY_POINT: 02bbc1b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Reset(ulong param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  uint *puVar8;
  
  uVar7 = 0;
  puVar8 = (uint *)(unaff_x23 + 0x20);
  do {
    if ((param_1 & 0xffffffff) <= uVar7) goto LAB_02bbc2ac;
    if (-1 < (int)*puVar8) {
      plVar6 = *(long **)(puVar8 + 2);
      if (plVar6 == (long *)0x0) goto LAB_02bbc2b0;
      uVar5 = (**(code **)(*plVar6 + 0x158))(plVar6,*(undefined8 *)(*plVar6 + 0x160));
      param_1 = (ulong)*(uint *)(unaff_x23 + 0x18);
      if (param_1 <= uVar7) goto LAB_02bbc2ac;
      *puVar8 = uVar5 & 0x7fffffff;
    }
    uVar7 = uVar7 + 1;
    puVar8 = puVar8 + 6;
  } while (unaff_x24 != uVar7);
  if (0 < (int)unaff_x24) {
    if (unaff_x23 == 0) {
LAB_02bbc2b0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = *(uint *)(unaff_x23 + 0x18);
    uVar7 = 0;
    do {
      if (uVar5 <= uVar7) {
LAB_02bbc2ac:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      iVar2 = *(int *)(unaff_x23 + uVar7 * 0x18 + 0x20);
      if (-1 < iVar2) {
        if (unaff_x21 == 0) goto LAB_02bbc2b0;
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
    } while (uVar7 != unaff_x24);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01f51358((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_01f51358();
  return;
}


