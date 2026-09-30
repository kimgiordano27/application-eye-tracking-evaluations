/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 028da410
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  int iVar7;
  uint uVar8;
  
  uVar1 = *(uint *)(unaff_x23 + 0x18);
  uVar8 = *(int *)(unaff_x22 + (param_1 & 0xffffffff) * 4 + 0x20) - 1;
  if (uVar8 < uVar1) {
    iVar7 = 0;
    do {
      if (*(int *)(unaff_x23 + (long)(int)uVar8 * 0x28 + 0x20) == unaff_w24) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01c72394(lVar3);
        }
        lVar4 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_028da4b8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01c72498();
LAB_028da4b8:
        uVar5 = (*(code *)*puVar2)();
        if ((uVar5 & 1) != 0) {
          return uVar8;
        }
        uVar1 = *(uint *)(unaff_x23 + 0x18);
      }
      if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      uVar8 = *(uint *)(unaff_x23 + (long)(int)uVar8 * 0x28 + 0x24);
      if ((int)uVar1 <= iVar7) {
        FUN_032f2aac(0);
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      iVar7 = iVar7 + 1;
    } while (uVar8 < uVar1);
  }
  return uVar8;
}


