/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 01617914
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
          (undefined8 param_1)

{
  uint uVar1;
  bool in_CY;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  uint unaff_w29;
  int iVar11;
  undefined8 uVar12;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar5 = (uint)param_1;
  if (!in_CY) {
    iVar11 = 0;
    uStack0000000000000004 = unaff_w29;
    do {
      uVar5 = (uint)param_1;
      lVar10 = (long)(int)unaff_w24;
      if (*(int *)(unaff_x26 + (long)(int)unaff_w24 * 0x28 + 0x20) == unaff_w27) {
        lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0122e748(lVar4);
        }
        lVar6 = *unaff_x23;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_016179b8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_0122ea3c();
LAB_016179b8:
        uVar7 = (*(code *)*puVar2)();
        if ((uVar7 & 1) != 0) {
          if ((uStack0000000000000004 & 0xff) == 2) {
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
            uVar3 = thunk_FUN_0124b7d8(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58),
                                       &stack0x00000010);
            FUN_01f8849c(uVar3,0);
          }
          else if ((uStack0000000000000004 & 0xff) == 1) {
            in_stack_00000020 = unaff_x25[2];
            in_stack_00000018 = unaff_x25[1];
            in_stack_00000010 = *unaff_x25;
            if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
              lVar4 = unaff_x26 + lVar10 * 0x28;
              *(undefined8 *)(lVar4 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar4 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar4 + 0x30) = in_stack_00000010;
              if (unaff_w24 < *(uint *)(unaff_x26 + 0x18)) {
                thunk_FUN_01286abc(unaff_x26 + lVar10 * 0x28 + 0x38,0);
                return 1;
              }
            }
            goto LAB_01617cc4;
          }
          return 0;
        }
        uVar5 = *(uint *)(unaff_x26 + 0x18);
      }
      if (uVar5 <= unaff_w24) goto LAB_01617cc4;
      unaff_w24 = *(uint *)(unaff_x26 + lVar10 * 0x28 + 0x24);
      if ((int)uVar5 <= iVar11) {
        FUN_01f885a0(0);
      }
      param_1 = *(undefined8 *)(unaff_x26 + 0x18);
      iVar11 = iVar11 + 1;
      uVar5 = (uint)param_1;
    } while (unaff_w24 < uVar5);
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x20 + 0x20);
    if (uVar9 == uVar5) {
      Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__get_Current();
      lVar10 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
      if (lVar10 == 0)
      goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
      uVar5 = *(uint *)(lVar10 + 0x18);
      iVar11 = 0;
      if (uVar5 != 0) {
        iVar11 = unaff_w27 / (int)uVar5;
      }
      uVar1 = unaff_w27 - iVar11 * uVar5;
      if (uVar5 <= uVar1) goto LAB_01617cc4;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar10 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
    }
    if (unaff_x26 == 0) {
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_01617cc4;
    lVar10 = (long)(int)uVar9;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar9 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) {
LAB_01617cc4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    lVar10 = (long)(int)uVar9;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar10 * 0x28 + 0x24);
  }
  lVar10 = unaff_x26 + lVar10 * 0x28;
  *(int *)(lVar10 + 0x20) = unaff_w27;
  *(int *)(lVar10 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar10 + 0x28) = in_stack_00000028._4_4_;
  uVar12 = unaff_x25[1];
  uVar3 = *unaff_x25;
  *(undefined8 *)(lVar10 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar10 + 0x38) = uVar12;
  *(undefined8 *)(lVar10 + 0x30) = uVar3;
  thunk_FUN_01286abc(lVar10 + 0x38,0);
  *unaff_x28 = uVar9 + 1;
  return 1;
}


