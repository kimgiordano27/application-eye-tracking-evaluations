/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyFrom
ENTRY_POINT: 019971b0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyFrom(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  ulong unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  undefined8 uVar7;
  
  while (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= (uint)unaff_x21) goto LAB_0199726c;
    if (unaff_x20 == 0) break;
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(param_1 + unaff_x23 + 0x20)
                       ,*(undefined8 *)(param_1 + unaff_x23 + 0x28),
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) == 0) {
      iVar4 = *(int *)(unaff_x19 + 0x18);
FUN_019971fc:
      uVar6 = (uint)unaff_x21;
      if ((int)uVar6 < iVar4) {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) break;
        if ((*(uint *)(lVar5 + 0x18) <= uVar6) || (*(uint *)(lVar5 + 0x18) <= unaff_w22)) {
LAB_0199726c:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
        uVar7 = *puVar1;
        puVar2 = (undefined8 *)(lVar5 + 0x20 + (long)(int)unaff_w22 * 0x10);
        puVar2[1] = puVar1[1];
        *puVar2 = uVar7;
        iVar4 = *(int *)(unaff_x19 + 0x18);
        unaff_w22 = unaff_w22 + 1;
        unaff_x21 = (ulong)(uVar6 + 1);
      }
      if (iVar4 <= (int)unaff_x21) {
        *(uint *)(unaff_x19 + 0x18) = unaff_w22;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar4 - unaff_w22;
      }
      unaff_x23 = -(unaff_x21 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x21 & 0xffffffff) << 4;
      unaff_x21 = (ulong)(int)unaff_x21;
    }
    else {
                    /* catch() { ... } // from try @ 01997320 with catch @ 019971e0
                       catch() { ... } // from try @ 0199735c with catch @ 019971e0
                       catch() { ... } // from try @ 01997398 with catch @ 019971e0
                       catch() { ... } // from try @ 019973c4 with catch @ 019971e0
                       catch() { ... } // from try @ 01997438 with catch @ 019971e0 */
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x21 = unaff_x21 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)iVar4 <= (long)unaff_x21) goto FUN_019971fc;
    }
    param_1 = *(long *)(unaff_x19 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


