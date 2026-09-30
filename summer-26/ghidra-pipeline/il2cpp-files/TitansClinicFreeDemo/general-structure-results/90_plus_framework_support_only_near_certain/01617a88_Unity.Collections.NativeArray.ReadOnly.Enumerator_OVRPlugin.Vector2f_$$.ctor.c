/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 01617a88
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>___ctor(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  int unaff_w19;
  uint uVar9;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 uVar10;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while( true ) {
    uVar9 = *(uint *)(in_x9 + 0x24);
    if ((int)param_1 <= unaff_w19) {
      FUN_01f885a0(0);
    }
    param_1 = *(ulong *)(unaff_x26 + 0x18);
    unaff_w19 = unaff_w19 + 1;
    if ((uint)param_1 <= uVar9) break;
    lVar7 = (long)(int)uVar9;
    if (*(int *)(unaff_x26 + (long)(int)uVar9 * (long)(int)unaff_x22 + 0x20) == unaff_w27) {
      plVar4 = (long *)FUN_013cb7ec(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_01617cc4;
      if (plVar4 == (long *)0x0) {
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar5 = (**(code **)(*plVar4 + 0x1b8))
                        (plVar4,*(undefined4 *)(unaff_x26 + lVar7 * unaff_x22 + 0x28),
                         in_stack_00000028._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
      if ((uVar5 & 1) != 0) {
        if (unaff_w29 == '\x02') {
          in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
          uVar6 = thunk_FUN_0124b7d8(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58),
                                     &stack0x00000010);
          FUN_01f8849c(uVar6,0);
        }
        else if (unaff_w29 == '\x01') {
          in_stack_00000020 = unaff_x25[2];
          in_stack_00000018 = unaff_x25[1];
          in_stack_00000010 = *unaff_x25;
          if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
            lVar8 = unaff_x26 + lVar7 * 0x28;
            *(undefined8 *)(lVar8 + 0x40) = in_stack_00000020;
            *(undefined8 *)(lVar8 + 0x38) = in_stack_00000018;
            *(undefined8 *)(lVar8 + 0x30) = in_stack_00000010;
            if (uVar9 < *(uint *)(unaff_x26 + 0x18)) {
              thunk_FUN_01286abc(unaff_x26 + lVar7 * 0x28 + 0x38,0);
              return 1;
            }
          }
          goto LAB_01617cc4;
        }
        return 0;
      }
      param_1 = (ulong)*(uint *)(unaff_x26 + 0x18);
    }
    if ((uint)param_1 <= uVar9) goto LAB_01617cc4;
    in_x9 = unaff_x26 + lVar7 * unaff_x22;
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x20 + 0x20);
    if (uVar9 == (uint)param_1) {
      Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__get_Current();
      lVar7 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
      if (lVar7 == 0)
      goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
      uVar1 = *(uint *)(lVar7 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_01617cc4;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
    }
    if (unaff_x26 == 0)
    goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) {
LAB_01617cc4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    lVar7 = (long)(int)uVar9;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar9 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_01617cc4;
    lVar7 = (long)(int)uVar9;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x28 + 0x24);
  }
  lVar7 = unaff_x26 + lVar7 * 0x28;
  *(int *)(lVar7 + 0x20) = unaff_w27;
  *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar7 + 0x28) = in_stack_00000028._4_4_;
  uVar10 = unaff_x25[1];
  uVar6 = *unaff_x25;
  *(undefined8 *)(lVar7 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar7 + 0x38) = uVar10;
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  thunk_FUN_01286abc(lVar7 + 0x38,0);
  *unaff_x28 = uVar9 + 1;
  return 1;
}


