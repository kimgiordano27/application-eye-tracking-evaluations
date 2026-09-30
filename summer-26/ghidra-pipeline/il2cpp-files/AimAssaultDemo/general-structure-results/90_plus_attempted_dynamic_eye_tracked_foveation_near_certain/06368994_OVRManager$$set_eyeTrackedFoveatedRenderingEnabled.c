/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 06368994
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 165
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x06368ad4) */

long OVRManager__set_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  
  if (param_2 != 1) {
    FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
                    /* WARNING: Subroutine does not return */
    FUN_0381d6e4(param_1);
  }
  plVar9 = (long *)__cxa_begin_catch(param_1);
  lVar11 = *plVar9;
  __cxa_end_catch();
  FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
  if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar11);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_05b0fb30(&stack0x00000008,*(long *)(unaff_x20 + 0x28),*unaff_x29);
    in_stack_00000058 = in_stack_00000010;
    in_stack_00000050 = in_stack_00000008;
    in_stack_00000068 = in_stack_00000020;
    in_stack_00000060 = in_stack_00000018;
    in_stack_00000070 = in_stack_00000028;
    while (uVar5 = FUN_05e3d424(&stack0x00000050,*unaff_x25), uVar8 = in_stack_00000060,
          (uVar5 & 1) != 0) {
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar9 = (long *)(in_stack_00000078 + 0x88);
      if (*plVar9 == 0) {
        lVar11 = thunk_FUN_037788cc(*unaff_x26);
        FUN_05b0e950(lVar11,*unaff_x27);
        *plVar9 = lVar11;
        thunk_FUN_037aeb94(plVar9,lVar11);
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
      }
      plVar9 = *(long **)(in_stack_00000078 + 0x88);
      uVar6 = FUN_063683dc();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar11 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x28) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_06368770;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x28,1);
LAB_06368770:
      (*(code *)*puVar7)(plVar9,uVar8,uVar6,puVar7[1]);
    }
    FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      FUN_049cf910(&stack0x00000008,*(long *)(unaff_x20 + 0x30),*(undefined8 *)PTR_DAT_07db5698);
      puVar4 = PTR_DAT_07db5668;
      puVar3 = PTR_DAT_07db33b0;
      puVar2 = PTR_DAT_07db33a0;
      puVar1 = PTR_DAT_07db3348;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000018;
      while (uVar5 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar4), (uVar5 & 1) != 0) {
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar9 = (long *)(in_stack_00000078 + 0x78);
        if (*plVar9 == 0) {
          lVar11 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
          FUN_049ce6c0(lVar11,*(undefined8 *)puVar2);
          *plVar9 = lVar11;
          thunk_FUN_037aeb94(plVar9,lVar11);
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
        }
        plVar9 = *(long **)(in_stack_00000078 + 0x78);
        uVar8 = FUN_063683dc();
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar11 = *plVar9;
        uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_063688a4;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar1,2);
LAB_063688a4:
        (*(code *)*puVar7)(plVar9,uVar8,puVar7[1]);
      }
      FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
      lVar11 = in_stack_00000078;
      if (*(long *)(unaff_x20 + 0x38) != 0) {
        uVar8 = FUN_063683dc();
        if (lVar11 == 0) goto LAB_06368964;
        puVar7 = (undefined8 *)(lVar11 + 0x90);
        *puVar7 = uVar8;
        thunk_FUN_037aeb94(puVar7,uVar8);
      }
      lVar11 = in_stack_00000078;
      if (*(long *)(unaff_x20 + 0x40) != 0) {
        uVar8 = FUN_063683dc();
        if (lVar11 == 0) goto LAB_06368964;
        puVar7 = (undefined8 *)(lVar11 + 0x98);
        *puVar7 = uVar8;
        thunk_FUN_037aeb94(puVar7,uVar8);
      }
      return in_stack_00000078;
    }
  }
LAB_06368964:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


