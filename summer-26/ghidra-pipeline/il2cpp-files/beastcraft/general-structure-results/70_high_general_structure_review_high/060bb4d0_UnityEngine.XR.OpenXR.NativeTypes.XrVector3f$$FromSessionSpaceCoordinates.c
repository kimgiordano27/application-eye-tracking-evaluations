/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.NativeTypes.XrVector3f$$FromSessionSpaceCoordinates
ENTRY_POINT: 060bb4d0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x060bb780) */
/* WARNING: Removing unreachable block (ram,0x060bb878) */

void UnityEngine_XR_OpenXR_NativeTypes_XrVector3f__FromSessionSpaceCoordinates(long *param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 unaff_w19;
  long unaff_x21;
  long unaff_x27;
  long *plVar13;
  long unaff_x29;
  undefined8 *puVar14;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  
  plVar13 = *(long **)(unaff_x27 + 0x668);
  puVar14 = *(undefined8 **)(unaff_x29 + 0x688);
  do {
    lVar9 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a2ef38) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_060bb53c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02e759c0(param_1,*(long *)PTR_DAT_06a2ef38,0);
LAB_060bb53c:
    uVar11 = (*(code *)*puVar4)(param_1,puVar4[1]);
    plVar3 = in_stack_00000048;
    if ((uVar11 & 1) == 0) {
      plVar13 = (long *)*in_stack_00000010;
      if (plVar13 == (long *)0x0) goto LAB_060bb9bc;
      lVar9 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_060bb994;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar9 = *in_stack_00000048;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a3fa68) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_060bb5a8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_02e759c0(in_stack_00000048,*(long *)PTR_DAT_06a3fa68,0);
LAB_060bb5a8:
    lVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar11 = FUN_0561fdbc(lVar9,0);
    if ((uVar11 & 1) == 0) {
      uVar7 = thunk_FUN_02ea289c(System_Predicate<VisualElement>_TypeInfo);
      uVar7 = FUN_054838b8(uVar7,lVar9,0);
      thunk_FUN_02ea289c(PTR_DAT_06a30728);
      uVar8 = thunk_FUN_02e78ab8();
      FUN_0557a944(uVar8,uVar7,0);
      uVar7 = thunk_FUN_02ea289c(System_Predicate<Vector2>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02e3cb88(uVar8,uVar7);
    }
    lVar5 = *plVar13;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar5 = *plVar13;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05628afc(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      lVar5 = **(long **)(*plVar13 + 0xb8);
    }
    FUN_060bafb4(lVar9,lVar5,unaff_w19);
    if (**(long **)(*plVar13 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_03f2c008(&stack0x00000018,**(long **)(*plVar13 + 0xb8),
                 *(undefined8 *)System_Predicate<Transform>_TypeInfo);
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x00000030;
LAB_060bb664:
    uVar11 = FUN_04fc1198(&stack0x00000030,*puVar14);
    plVar3 = in_stack_00000040;
    if ((uVar11 & 1) != 0) {
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      plVar6 = (long *)(**(code **)(*in_stack_00000040 + 0x248))
                                 (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x250));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar9 = (**(code **)(*plVar6 + 0x898))(plVar6,*(undefined8 *)(*plVar6 + 0x8a0));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar11 = 0;
        uVar10 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3cccc();
          }
          uVar10 = FUN_03f2b9a8();
          if ((uVar10 & 1) != 0) {
            if (unaff_x21 != 0) {
              lVar9 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar2 = *(uint *)(unaff_x21 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                  puVar4 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar4 = plVar3;
                  thunk_FUN_02ee2be8(puVar4,plVar3);
                }
                else {
                  FUN_03f2b60c();
                }
                break;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      goto LAB_060bb664;
    }
    FUN_04fc1194(&stack0x00000030,*(undefined8 *)System_Predicate<Task>_TypeInfo);
    param_1 = in_stack_00000048;
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a2ef10) {
      puVar14 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_060bb9b0;
    }
  }
LAB_060bb994:
  puVar14 = (undefined8 *)FUN_02e759c0(plVar13,*(long *)PTR_DAT_06a2ef10,0);
LAB_060bb9b0:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_060bb9bc:
  if (in_stack_00000008 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccbc();
}


