/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 014467a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>___ctor(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_x9;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  uint uVar7;
  long lVar8;
  uint unaff_w24;
  char unaff_w25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  while( true ) {
    uVar7 = (uint)param_1;
    lVar8 = (long)(int)unaff_w24;
    if (*(int *)(in_x9 + 0x20) == unaff_w27) {
      plVar4 = (long *)FUN_01169cd0(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w24) goto LAB_014469b0;
      if (plVar4 == (long *)0x0) goto LAB_014469b4;
      uVar5 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(unaff_x26 + lVar8 * 0x10 + 0x28),
                         uStack000000000000000c,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((uVar5 & 1) != 0) {
        if (unaff_w25 == '\x02') {
          uStack0000000000000008 = uStack000000000000000c;
          uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000008);
          FUN_01d6947c(uVar6,0);
        }
        else if (unaff_w25 == '\x01') {
          if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
            *(undefined4 *)(unaff_x26 + lVar8 * 0x10 + 0x2c) = unaff_w19;
            return 1;
          }
          goto LAB_014469b0;
        }
        return 0;
      }
      uVar7 = *(uint *)(unaff_x26 + 0x18);
    }
    if (uVar7 <= unaff_w24) goto LAB_014469b0;
    unaff_w24 = *(uint *)(unaff_x26 + lVar8 * 0x10 + 0x24);
    if ((int)uVar7 <= unaff_w22) {
      FUN_01d69580(0);
    }
    param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    if ((uint)param_1 <= unaff_w24) break;
    in_x9 = unaff_x26 + (long)(int)unaff_w24 * 0x10;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar7 = *(uint *)(unaff_x20 + 0x20);
    if (uVar7 == (uint)param_1) {
      FUN_01446d50();
      lVar8 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar7 + 1;
      if (lVar8 == 0) goto LAB_014469b4;
      uVar1 = *(uint *)(lVar8 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_014469b0;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar8 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar7 + 1;
    }
    if (unaff_x26 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_014469b0;
    lVar8 = (long)(int)uVar7;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar7 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar7) {
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar8 = (long)(int)uVar7;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar8 * 0x10 + 0x24);
  }
  lVar8 = unaff_x26 + lVar8 * 0x10;
  *(int *)(lVar8 + 0x20) = unaff_w27;
  *(int *)(lVar8 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar8 + 0x28) = uStack000000000000000c;
  *(undefined4 *)(lVar8 + 0x2c) = unaff_w19;
  *unaff_x28 = uVar7 + 1;
  return 1;
}


