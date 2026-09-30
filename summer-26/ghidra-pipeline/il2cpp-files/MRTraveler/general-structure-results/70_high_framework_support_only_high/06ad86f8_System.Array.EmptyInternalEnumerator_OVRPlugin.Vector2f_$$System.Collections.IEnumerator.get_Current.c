/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06ad86f8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  long in_x10;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar11;
  undefined4 unaff_w25;
  long unaff_x26;
  int *piVar12;
  char unaff_w29;
  int iVar13;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  piVar12 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar12 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar12 + 1) * 0x10 + 0x138);
      goto LAB_06ad874c;
    }
    in_x9 = in_x9 + -1;
    piVar12 = piVar12 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06ad874c:
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_06ad8ac0;
  uVar11 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)uVar2 / (int)uVar11;
  }
  uVar5 = uVar2 - iVar13 * uVar11;
  if (uVar11 <= uVar5) {
LAB_06ad8abc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  piVar12 = (int *)(lVar6 + (ulong)uVar5 * 4 + 0x20);
  uVar11 = *piVar12 - 1;
  if (unaff_x23 == (long *)0x0) {
    if (unaff_x26 == 0) goto LAB_06ad8ac0;
    uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar7;
    if (uVar11 < uVar5) {
      iVar13 = 0;
      do {
        uVar5 = (uint)uVar7;
        lVar6 = (long)(int)uVar11;
        if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x20) == uVar2) {
          plVar4 = (long *)FUN_041d81b8(*(undefined8 *)
                                         (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_06ad8abc;
          if (plVar4 == (long *)0x0) goto LAB_06ad8ac0;
          uVar9 = (**(code **)(*plVar4 + 0x1b8))
                            (plVar4,*(undefined8 *)(unaff_x26 + lVar6 * 0x18 + 0x28),
                             in_stack_00000018,*(undefined8 *)(*plVar4 + 0x1c0));
          if ((uVar9 & 1) != 0) {
            if (unaff_w29 == '\x02') goto LAB_06ad8a90;
            if (unaff_w29 != '\x01') {
              return 0;
            }
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x30) = unaff_w25;
              return 1;
            }
            goto LAB_06ad8abc;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_06ad8abc;
        uVar11 = *(uint *)(unaff_x26 + lVar6 * 0x18 + 0x24);
        if ((int)uVar5 <= iVar13) {
          FUN_07122f08(0);
        }
        uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar5 = (uint)uVar7;
      } while (uVar11 < uVar5);
    }
  }
  else {
    if (unaff_x26 == 0) goto LAB_06ad8ac0;
    uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
    uVar5 = (uint)uVar7;
    if (uVar11 < uVar5) {
      iVar13 = 0;
      uStack000000000000000c = unaff_w25;
      do {
        uVar5 = (uint)uVar7;
        if (*(uint *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x20) == uVar2) {
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03cf1244(lVar6);
          }
          lVar8 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06ad8834;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06ad8834:
          uVar9 = (*(code *)*puVar3)();
          if ((uVar9 & 1) != 0) {
            if (unaff_w29 == '\x02') {
LAB_06ad8a90:
              in_stack_00000010 = in_stack_00000018;
              uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                         &stack0x00000010);
              FUN_07122e04(uVar7,0);
              return 0;
            }
            if (unaff_w29 != '\x01') {
              return 0;
            }
            if (uVar11 < *(uint *)(unaff_x26 + 0x18)) {
              *(undefined4 *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x30) = uStack000000000000000c;
              return 1;
            }
            goto LAB_06ad8abc;
          }
          uVar5 = *(uint *)(unaff_x26 + 0x18);
        }
        if (uVar5 <= uVar11) goto LAB_06ad8abc;
        uVar11 = *(uint *)(unaff_x26 + (long)(int)uVar11 * 0x18 + 0x24);
        if ((int)uVar5 <= iVar13) {
          FUN_07122f08(0);
        }
        uVar7 = *(undefined8 *)(unaff_x26 + 0x18);
        iVar13 = iVar13 + 1;
        uVar5 = (uint)uVar7;
        unaff_w25 = uStack000000000000000c;
      } while (uVar11 < uVar5);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x20 + 0x20);
    if (uVar11 == uVar5) {
      FUN_06ad8e5c();
      lVar6 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
      if (lVar6 == 0) goto LAB_06ad8ac0;
      uVar5 = *(uint *)(lVar6 + 0x18);
      iVar13 = 0;
      if (uVar5 != 0) {
        iVar13 = (int)uVar2 / (int)uVar5;
      }
      uVar1 = uVar2 - iVar13 * uVar5;
      if (uVar5 <= uVar1) goto LAB_06ad8abc;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      piVar12 = (int *)(lVar6 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar11 + 1;
    }
    if (unaff_x26 == 0) {
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_06ad8abc;
    lVar6 = (long)(int)uVar11;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar11 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar11) goto LAB_06ad8abc;
    lVar6 = (long)(int)uVar11;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x18 + 0x24);
  }
  lVar6 = unaff_x26 + lVar6 * 0x18;
  *(uint *)(lVar6 + 0x20) = uVar2;
  *(int *)(lVar6 + 0x24) = *piVar12 + -1;
  *(undefined4 *)(lVar6 + 0x30) = unaff_w25;
  *(undefined8 *)(lVar6 + 0x28) = in_stack_00000018;
  *piVar12 = uVar11 + 1;
  return 1;
}


