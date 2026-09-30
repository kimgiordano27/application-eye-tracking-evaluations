/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 01618184
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  FUN_01f89ca0(*(undefined8 *)(unaff_x19 + 0x18),0,param_1,0,(ulong)uVar2,0);
  if (0 < (int)uVar2) {
    if (param_1 == 0) {
LAB_01618258:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    do {
      if (uVar3 <= uVar7) {
LAB_01618254:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      iVar4 = *(int *)(param_1 + uVar7 * 0x28 + 0x20);
      if (-1 < iVar4) {
        if (unaff_x21 == 0) goto LAB_01618258;
        iVar6 = 0;
        if (unaff_w20 != 0) {
          iVar6 = iVar4 / unaff_w20;
        }
        uVar5 = iVar4 - iVar6 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar5) goto LAB_01618254;
        lVar1 = unaff_x21 + (ulong)uVar5 * 4;
        *(int *)(param_1 + uVar7 * 0x28 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
        *(int *)(lVar1 + 0x20) = (int)uVar7 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01286abc((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = param_1;
  thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x18),param_1);
  return;
}


