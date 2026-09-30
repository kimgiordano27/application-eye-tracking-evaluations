/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 06ad86a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x21;
  long *plVar12;
  uint uVar13;
  undefined4 unaff_w25;
  long lVar14;
  int *piVar15;
  char unaff_w29;
  int iVar16;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_06ad857c();
  plVar12 = *(long **)(unaff_x20 + 0x30);
  lVar14 = *(long *)(unaff_x20 + 0x18);
  if (plVar12 == (long *)0x0) {
    uVar3 = FUN_0711f264(&stack0x00000018,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 400));
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_06ad874c;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar12,lVar5,1);
LAB_06ad874c:
    uVar3 = (*(code *)*puVar4)(plVar12);
  }
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) goto LAB_06ad8ac0;
  uVar13 = *(uint *)(lVar5 + 0x18);
  uVar3 = uVar3 & 0x7fffffff;
  iVar16 = 0;
  if (uVar13 != 0) {
    iVar16 = (int)uVar3 / (int)uVar13;
  }
  uVar6 = uVar3 - iVar16 * uVar13;
  if (uVar13 <= uVar6) {
LAB_06ad8abc:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  piVar15 = (int *)(lVar5 + (ulong)uVar6 * 4 + 0x20);
  uVar13 = *piVar15 - 1;
  if (plVar12 == (long *)0x0) {
    if (lVar14 == 0) goto LAB_06ad8ac0;
    uVar8 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar13 < uVar6) {
      iVar16 = 0;
      do {
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0x18 + 0x20) == uVar3) {
          plVar12 = (long *)FUN_041d81b8(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
          if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_06ad8abc;
          if (plVar12 == (long *)0x0) goto LAB_06ad8ac0;
          uVar10 = (**(code **)(*plVar12 + 0x1b8))
                             (plVar12,*(undefined8 *)(lVar14 + lVar5 * 0x18 + 0x28),
                              in_stack_00000018,*(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar10 & 1) != 0) {
            if (unaff_w29 == '\x02') goto LAB_06ad8a90;
            if (unaff_w29 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              *(undefined4 *)(lVar14 + lVar5 * 0x18 + 0x30) = unaff_w25;
              return 1;
            }
            goto LAB_06ad8abc;
          }
          uVar6 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar6 <= uVar13) goto LAB_06ad8abc;
        uVar13 = *(uint *)(lVar14 + lVar5 * 0x18 + 0x24);
        if ((int)uVar6 <= iVar16) {
          FUN_07122f08(0);
        }
        uVar8 = *(undefined8 *)(lVar14 + 0x18);
        iVar16 = iVar16 + 1;
        uVar6 = (uint)uVar8;
      } while (uVar13 < uVar6);
    }
  }
  else {
    if (lVar14 == 0) goto LAB_06ad8ac0;
    uVar8 = *(undefined8 *)(lVar14 + 0x18);
    uVar6 = (uint)uVar8;
    if (uVar13 < uVar6) {
      iVar16 = 0;
      uStack000000000000000c = unaff_w25;
      do {
        uVar2 = in_stack_00000018;
        uVar6 = (uint)uVar8;
        lVar5 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0x18 + 0x20) == uVar3) {
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
          uVar8 = *(undefined8 *)(lVar14 + lVar5 * 0x18 + 0x28);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03cf1244(lVar7);
          }
          lVar9 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_06ad8834;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_03cf1348(plVar12,lVar7,0);
LAB_06ad8834:
          uVar10 = (*(code *)*puVar4)(plVar12,uVar8,uVar2,puVar4[1]);
          if ((uVar10 & 1) != 0) {
            if (unaff_w29 == '\x02') {
LAB_06ad8a90:
              in_stack_00000010 = in_stack_00000018;
              uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                         &stack0x00000010);
              FUN_07122e04(uVar8,0);
              return 0;
            }
            if (unaff_w29 != '\x01') {
              return 0;
            }
            if (uVar13 < *(uint *)(lVar14 + 0x18)) {
              *(undefined4 *)(lVar14 + lVar5 * 0x18 + 0x30) = uStack000000000000000c;
              return 1;
            }
            goto LAB_06ad8abc;
          }
          uVar6 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar6 <= uVar13) goto LAB_06ad8abc;
        uVar13 = *(uint *)(lVar14 + lVar5 * 0x18 + 0x24);
        if ((int)uVar6 <= iVar16) {
          FUN_07122f08(0);
        }
        uVar8 = *(undefined8 *)(lVar14 + 0x18);
        iVar16 = iVar16 + 1;
        uVar6 = (uint)uVar8;
        unaff_w25 = uStack000000000000000c;
      } while (uVar13 < uVar6);
    }
  }
  if (*(int *)(unaff_x20 + 0x28) < 1) {
    uVar13 = *(uint *)(unaff_x20 + 0x20);
    if (uVar13 == uVar6) {
      FUN_06ad8e5c();
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar13 + 1;
      if (lVar5 == 0) goto LAB_06ad8ac0;
      uVar6 = *(uint *)(lVar5 + 0x18);
      iVar16 = 0;
      if (uVar6 != 0) {
        iVar16 = (int)uVar3 / (int)uVar6;
      }
      uVar1 = uVar3 - iVar16 * uVar6;
      if (uVar6 <= uVar1) goto LAB_06ad8abc;
      lVar14 = *(long *)(unaff_x20 + 0x18);
      piVar15 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar14 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar13 + 1;
    }
    if (lVar14 == 0) {
LAB_06ad8ac0:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_06ad8abc;
    lVar5 = (long)(int)uVar13;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
    uVar13 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_06ad8abc;
    lVar5 = (long)(int)uVar13;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar14 + lVar5 * 0x18 + 0x24);
  }
  lVar14 = lVar14 + lVar5 * 0x18;
  *(uint *)(lVar14 + 0x20) = uVar3;
  *(int *)(lVar14 + 0x24) = *piVar15 + -1;
  *(undefined4 *)(lVar14 + 0x30) = unaff_w25;
  *(undefined8 *)(lVar14 + 0x28) = in_stack_00000018;
  *piVar15 = uVar13 + 1;
  return 1;
}


