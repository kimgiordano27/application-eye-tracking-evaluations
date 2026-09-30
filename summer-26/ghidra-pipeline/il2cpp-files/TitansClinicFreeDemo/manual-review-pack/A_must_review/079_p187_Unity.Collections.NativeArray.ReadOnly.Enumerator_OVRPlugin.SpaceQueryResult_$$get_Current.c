/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 01617900
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__get_Current(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int in_w8;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar11;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  uint unaff_w29;
  int iVar12;
  undefined8 uVar13;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uVar11 = in_w8 - 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x26 == 0)
    goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar11 < uVar5) {
      iVar12 = 0;
      do {
        uVar5 = (uint)uVar6;
        lVar10 = (long)(int)uVar11;
        if (*(int *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x20) == unaff_w27) {
          plVar3 = (long *)FUN_013cb7ec(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_01617cc4;
          if (plVar3 == (long *)0x0)
          goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
          uVar8 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined4 *)(unaff_x26 + lVar10 * 0x28 + 0x28),
                             in_stack_00000028._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar8 & 1) != 0) {
            if ((unaff_w29 & 0xff) == 2) goto LAB_01617c98;
            if ((unaff_w29 & 0xff) != 1) {
              return 0;
            }
            in_stack_00000020 = unaff_x25[2];
            in_stack_00000018 = unaff_x25[1];
            in_stack_00000010 = *unaff_x25;
            if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_01617cc4;
            lVar4 = unaff_x26 + lVar10 * 0x28;
            *(undefined8 *)(lVar4 + 0x40) = in_stack_00000020;
            *(undefined8 *)(lVar4 + 0x38) = in_stack_00000018;
            *(undefined8 *)(lVar4 + 0x30) = in_stack_00000010;
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) goto FUN_01617c88;
            goto LAB_01617cc4;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_01617cc4;
        uVar11 = *(uint *)(unaff_x26 + lVar10 * 0x28 + 0x24);
        if ((int)uVar5 <= iVar12) {
          FUN_01f885a0(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar11 < uVar5);
    }
  }
  else {
    if (unaff_x26 == 0)
    goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar6;
    if (uVar11 < uVar5) {
      iVar12 = 0;
      uStack0000000000000004 = unaff_w29;
      do {
        uVar5 = (uint)uVar6;
        lVar10 = (long)(int)uVar11;
        if (*(int *)(unaff_x26 + (long)(int)uVar11 * 0x28 + 0x20) == unaff_w27) {
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0122e748(lVar4);
          }
          lVar7 = *unaff_x23;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_016179b8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_0122ea3c();
LAB_016179b8:
          uVar8 = (*(code *)*puVar2)();
          if ((uVar8 & 1) != 0) {
            if ((uStack0000000000000004 & 0xff) == 2) {
LAB_01617c98:
              in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
              uVar6 = thunk_FUN_0124b7d8(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58),
                                         &stack0x00000010);
              FUN_01f8849c(uVar6,0);
              return 0;
            }
            if ((uStack0000000000000004 & 0xff) != 1) {
              return 0;
            }
            in_stack_00000020 = unaff_x25[2];
            in_stack_00000018 = unaff_x25[1];
            in_stack_00000010 = *unaff_x25;
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
              lVar4 = unaff_x26 + lVar10 * 0x28;
              *(undefined8 *)(lVar4 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar4 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar4 + 0x30) = in_stack_00000010;
              if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
FUN_01617c88:
                thunk_FUN_01286abc(unaff_x26 + lVar10 * 0x28 + 0x38,0);
                return 1;
              }
            }
            goto LAB_01617cc4;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_01617cc4;
        uVar11 = *(uint *)(unaff_x26 + lVar10 * 0x28 + 0x24);
        if ((int)uVar5 <= iVar12) {
          FUN_01f885a0(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar5 = (uint)uVar6;
      } while (uVar11 < uVar5);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar5) {
      Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__get_Current();
      lVar10 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar10 == 0)
      goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
      uVar5 = *(uint *)(lVar10 + 0x18);
      iVar12 = 0;
      if (uVar5 != 0) {
        iVar12 = unaff_w27 / (int)uVar5;
      }
      uVar1 = unaff_w27 - iVar12 * uVar5;
      if (uVar5 <= uVar1) goto LAB_01617cc4;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar10 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_01617cc4;
    lVar10 = (long)(int)uVar11;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) {
LAB_01617cc4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    lVar10 = (long)(int)uVar11;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar10 * 0x28 + 0x24);
  }
  lVar10 = unaff_x26 + lVar10 * 0x28;
  *(int *)(lVar10 + 0x20) = unaff_w27;
  *(int *)(lVar10 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar10 + 0x28) = in_stack_00000028._4_4_;
  uVar13 = unaff_x25[1];
  uVar6 = *unaff_x25;
  *(undefined8 *)(lVar10 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar10 + 0x38) = uVar13;
  *(undefined8 *)(lVar10 + 0x30) = uVar6;
  thunk_FUN_01286abc(lVar10 + 0x38,0);
  *unaff_x28 = uVar11 + 1;
  return 1;
}


