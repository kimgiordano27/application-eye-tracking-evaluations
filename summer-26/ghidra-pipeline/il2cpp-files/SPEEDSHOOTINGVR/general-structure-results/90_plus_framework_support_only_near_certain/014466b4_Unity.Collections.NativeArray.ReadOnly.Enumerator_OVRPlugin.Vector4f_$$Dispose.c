/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 014466b4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__Dispose(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar10;
  long *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  uint uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  uStack0000000000000000 = unaff_w25;
  do {
    uVar10 = (uint)param_1;
    if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * 0x10 + 0x20) == unaff_w27) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0103c244(lVar6);
      }
      lVar7 = *unaff_x23;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01446740;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_01446740:
      uVar8 = (*(code *)*puVar4)();
      if ((uVar8 & 1) != 0) {
        if ((uStack0000000000000000 & 0xff) == 2) {
          uStack0000000000000004 = in_stack_00000008._4_4_;
          uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000004);
          FUN_01d6947c(uVar5,0);
        }
        else if ((uStack0000000000000000 & 0xff) == 1) {
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + (long)(int)unaff_w24 * 0x10 + 0x2c) = unaff_w19;
            return 1;
          }
          goto LAB_014469b0;
        }
        return 0;
      }
      uVar10 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar10 <= unaff_w24) goto LAB_014469b0;
    unaff_w24 = *(uint *)(unaff_x26 + (long)(int)unaff_w24 * 0x10 + 0x24);
    if ((int)uVar10 <= unaff_w29) {
      FUN_01d69580(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w29 = unaff_w29 + 1;
  } while (unaff_w24 < (uint)param_1);
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x20 + 0x20);
    if (uVar10 == (uint)param_1) {
      FUN_01446d50();
      lVar6 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
      if (lVar6 == 0) goto LAB_014469b4;
      uVar1 = *(uint *)(lVar6 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_014469b0;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_014469b0;
    lVar6 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) {
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar6 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x10 + 0x24);
  }
  lVar6 = unaff_x26 + lVar6 * 0x10;
  *(int *)(lVar6 + 0x20) = unaff_w27;
  *(int *)(lVar6 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar6 + 0x28) = in_stack_00000008._4_4_;
  *(undefined4 *)(lVar6 + 0x2c) = unaff_w19;
  *unaff_x28 = uVar10 + 1;
  return 1;
}


