/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 0161784c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 129
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_9
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar12;
  undefined8 *unaff_x25;
  long unaff_x26;
  int *piVar13;
  uint unaff_w29;
  int iVar14;
  undefined8 uVar15;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar5 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0122e748(lVar5);
  }
  lVar7 = *unaff_x23;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_016178c8;
      }
      uVar10 = uVar10 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016178c8:
  uVar2 = (*(code *)*puVar3)();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0)
  goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
  uVar12 = *(uint *)(lVar5 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar14 = 0;
  if (uVar12 != 0) {
    iVar14 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar14 * uVar12;
  if (uVar6 < uVar12) {
    piVar13 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar13 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0)
      goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar5 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x28 + 0x20) == uVar2) {
            plVar4 = (long *)FUN_013cb7ec(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_01617cc4;
            if (plVar4 == (long *)0x0)
            goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x28),
                                in_stack_00000028._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) goto LAB_01617c98;
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000020 = unaff_x25[2];
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_01617cc4;
              lVar7 = unaff_x26 + lVar5 * 0x28;
              *(undefined8 *)(lVar7 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar7 + 0x30) = in_stack_00000010;
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) goto FUN_01617c88;
              goto LAB_01617cc4;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_01617cc4;
          uVar12 = *(uint *)(unaff_x26 + lVar5 * 0x28 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_01f885a0(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0)
      goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar6 = (uint)uVar8;
          lVar5 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x28 + 0x20) == uVar2) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0122e748(lVar7);
            }
            lVar9 = *unaff_x23;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_016179b8;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_0122ea3c();
LAB_016179b8:
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
LAB_01617c98:
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
                uVar8 = thunk_FUN_0124b7d8(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58),
                                           &stack0x00000010);
                FUN_01f8849c(uVar8,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000020 = unaff_x25[2];
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
                lVar7 = unaff_x26 + lVar5 * 0x28;
                *(undefined8 *)(lVar7 + 0x40) = in_stack_00000020;
                *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
                *(undefined8 *)(lVar7 + 0x30) = in_stack_00000010;
                if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
FUN_01617c88:
                  thunk_FUN_01286abc(unaff_x26 + lVar5 * 0x28 + 0x38,0);
                  return 1;
                }
              }
              goto LAB_01617cc4;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_01617cc4;
          uVar12 = *(uint *)(unaff_x26 + lVar5 * 0x28 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_01f885a0(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x20 + 0x20);
      if (uVar12 == uVar6) {
        Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4s>__get_Current();
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
        if (lVar5 == 0)
        goto Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose;
        uVar6 = *(uint *)(lVar5 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1) goto LAB_01617cc4;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar13 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_01617cc4;
      lVar5 = (long)(int)uVar12;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar12 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_01617cc4;
      lVar5 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x28 + 0x24);
    }
    lVar5 = unaff_x26 + lVar5 * 0x28;
    *(uint *)(lVar5 + 0x20) = uVar2;
    *(int *)(lVar5 + 0x24) = *piVar13 + -1;
    *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
    uVar15 = unaff_x25[1];
    uVar8 = *unaff_x25;
    *(undefined8 *)(lVar5 + 0x40) = unaff_x25[2];
    *(undefined8 *)(lVar5 + 0x38) = uVar15;
    *(undefined8 *)(lVar5 + 0x30) = uVar8;
    thunk_FUN_01286abc(lVar5 + 0x38,0);
    *piVar13 = uVar12 + 1;
    return 1;
  }
LAB_01617cc4:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


