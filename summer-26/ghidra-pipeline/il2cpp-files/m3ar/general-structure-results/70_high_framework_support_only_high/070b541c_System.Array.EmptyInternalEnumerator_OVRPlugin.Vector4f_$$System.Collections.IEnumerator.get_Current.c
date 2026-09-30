/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 070b541c
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  int unaff_w24;
  ulong uVar8;
  int iVar9;
  
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  uVar2 = *(int *)(param_1 + 0x20) - 1;
  uVar8 = (ulong)uVar2;
  if (uVar2 < uVar1) {
    iVar9 = 0;
    do {
      if (*(int *)(unaff_x23 + 0x20 + (-(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4)) ==
          unaff_w24) {
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0406aaec(lVar4);
        }
        lVar5 = *unaff_x21;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_070b54c0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20();
LAB_070b54c0:
        uVar6 = (*(code *)*puVar3)();
        if ((uVar6 & 1) != 0) {
          return uVar8;
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
      }
      if (uVar1 <= (uint)uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      uVar2 = *(uint *)(unaff_x23 + 0x20 + (long)(int)(uint)uVar8 * 0x10 + 4);
      uVar8 = (ulong)uVar2;
      if ((int)uVar1 <= iVar9) {
        FUN_07506dec(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      iVar9 = iVar9 + 1;
    } while (uVar2 < uVar1);
  }
  return uVar8;
}


