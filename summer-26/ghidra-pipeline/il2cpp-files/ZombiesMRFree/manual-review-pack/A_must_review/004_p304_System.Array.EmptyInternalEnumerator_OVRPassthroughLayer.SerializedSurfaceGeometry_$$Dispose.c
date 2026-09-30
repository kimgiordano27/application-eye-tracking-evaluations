/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 053ae480
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 182
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
          (uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar10;
  undefined4 unaff_w25;
  long unaff_x26;
  int *piVar11;
  char unaff_w29;
  int iVar12;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto LAB_053ae808;
  uVar10 = *(uint *)(lVar5 + 0x18);
  param_1 = param_1 & 0x7fffffff;
  iVar12 = 0;
  if (uVar10 != 0) {
    iVar12 = (int)param_1 / (int)uVar10;
  }
  uVar4 = param_1 - iVar12 * uVar10;
  if (uVar10 <= uVar4) {
LAB_053ae804:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  piVar11 = (int *)(lVar5 + (ulong)uVar4 * 4 + 0x20);
  uVar10 = *piVar11 - 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x26 == 0) goto LAB_053ae808;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar4 = (uint)uVar6;
    if (uVar10 < uVar4) {
      iVar12 = 0;
      do {
        uVar4 = (uint)uVar6;
        lVar5 = (long)(int)uVar10;
        if (*(uint *)(unaff_x26 + (long)(int)uVar10 * 0x14 + 0x20) == param_1) {
          plVar3 = (long *)FUN_040052a8(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_053ae804;
          if (plVar3 == (long *)0x0) goto LAB_053ae808;
          uVar8 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,*(undefined8 *)(unaff_x26 + lVar5 * 0x14 + 0x28),
                             in_stack_00000018,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar8 & 1) != 0) {
            if (unaff_w29 == '\x02') goto LAB_053ae7d8;
            if (unaff_w29 != '\x01') {
              return 0;
            }
            if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + lVar5 * 0x14 + 0x30) = unaff_w25;
              return 1;
            }
            goto LAB_053ae804;
          }
          uVar4 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar4 <= uVar10) goto LAB_053ae804;
        uVar10 = *(uint *)(unaff_x26 + lVar5 * 0x14 + 0x24);
        if ((int)uVar4 <= iVar12) {
          FUN_05b108f4(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar4 = (uint)uVar6;
      } while (uVar10 < uVar4);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_053ae808;
    uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar4 = (uint)uVar6;
    if (uVar10 < uVar4) {
      iVar12 = 0;
      uStack000000000000000c = unaff_w25;
      do {
        uVar4 = (uint)uVar6;
        if (*(uint *)(unaff_x26 + (long)(int)uVar10 * 0x14 + 0x20) == param_1) {
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02feb2c4(lVar5);
          }
          lVar7 = *unaff_x23;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_053ae57c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_053ae57c:
          uVar8 = (*(code *)*puVar2)();
          if ((uVar8 & 1) != 0) {
            if (unaff_w29 == '\x02') {
LAB_053ae7d8:
              in_stack_00000010 = in_stack_00000018;
              uVar6 = thunk_FUN_0301043c(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                         &stack0x00000010);
              FUN_05b107f0(uVar6,0);
              return 0;
            }
            if (unaff_w29 != '\x01') {
              return 0;
            }
            if (uVar10 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + (long)(int)uVar10 * 0x14 + 0x30) = uStack000000000000000c;
              return 1;
            }
            goto LAB_053ae804;
          }
          uVar4 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar4 <= uVar10) goto LAB_053ae804;
        uVar10 = *(uint *)(unaff_x26 + (long)(int)uVar10 * 0x14 + 0x24);
        if ((int)uVar4 <= iVar12) {
          FUN_05b108f4(0);
        }
        uVar6 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar12 = iVar12 + 1;
        uVar4 = (uint)uVar6;
        unaff_w25 = uStack000000000000000c;
      } while (uVar10 < uVar4);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x20 + 0x20);
    if (uVar10 == uVar4) {
      System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>__MoveNext();
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
      if (lVar5 == 0) goto LAB_053ae808;
      uVar4 = *(uint *)(lVar5 + 0x18);
      iVar12 = 0;
      if (uVar4 != 0) {
        iVar12 = (int)param_1 / (int)uVar4;
      }
      uVar1 = param_1 - iVar12 * uVar4;
      if (uVar4 <= uVar1) goto LAB_053ae804;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      piVar11 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_053ae808:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_053ae804;
    lVar5 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_053ae804;
    lVar5 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar5 * 0x14 + 0x24);
  }
  lVar5 = unaff_x26 + lVar5 * 0x14;
  *(uint *)(lVar5 + 0x20) = param_1;
  *(int *)(lVar5 + 0x24) = *piVar11 + -1;
  *(undefined4 *)(lVar5 + 0x30) = unaff_w25;
  *(undefined8 *)(lVar5 + 0x28) = in_stack_00000018;
  *piVar11 = uVar10 + 1;
  return 1;
}


