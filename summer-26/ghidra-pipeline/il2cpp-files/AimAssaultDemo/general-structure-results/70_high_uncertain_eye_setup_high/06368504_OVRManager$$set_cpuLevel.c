/*
FUNCTION_NAME: OVRManager$$set_cpuLevel
ENTRY_POINT: 06368504
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__set_cpuLevel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x20;
  long *plVar13;
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
  
  if (param_1 != 0) {
    uVar6 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                      ();
    if ((uVar6 & 1) != 0) {
      return in_stack_00000078;
    }
    if ((unaff_x20 != 0) &&
       (in_stack_00000078 = FUN_063675ec(*(undefined8 *)(unaff_x20 + 0x18)),
       *(long *)(unaff_x19 + 0x18) != 0)) {
      FUN_05b0f6ec();
      puVar1 = PTR_DAT_07db5630;
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        FUN_05b0fb30(&stack0x00000008,*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_07db5630);
        puVar5 = PTR_DAT_07db5670;
        puVar4 = PTR_DAT_07db5650;
        puVar3 = PTR_DAT_07db5640;
        puVar2 = PTR_DAT_07db3350;
        in_stack_00000058 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000008;
        in_stack_00000068 = in_stack_00000020;
        in_stack_00000060 = in_stack_00000018;
        in_stack_00000070 = in_stack_00000028;
        while (uVar6 = FUN_05e3d424(&stack0x00000050,*(undefined8 *)puVar5),
              uVar10 = in_stack_00000060, (uVar6 & 1) != 0) {
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar13 = (long *)(in_stack_00000078 + 0x80);
          if (*plVar13 == 0) {
            lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
            FUN_05b0e950(lVar7,*(undefined8 *)puVar3);
            *plVar13 = lVar7;
            thunk_FUN_037aeb94(plVar13,lVar7);
            if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          plVar13 = *(long **)(in_stack_00000078 + 0x80);
          uVar8 = FUN_063683dc();
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar11 = *plVar13;
          lVar7 = *(long *)puVar2;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_06368660;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_0377596c(plVar13,lVar7,1);
LAB_06368660:
          (*(code *)*puVar9)(plVar13,uVar10,uVar8,puVar9[1]);
        }
        FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
        if (*(long *)(unaff_x20 + 0x28) != 0) {
          FUN_05b0fb30(&stack0x00000008,*(long *)(unaff_x20 + 0x28),*(undefined8 *)puVar1);
          in_stack_00000058 = in_stack_00000010;
          in_stack_00000050 = in_stack_00000008;
          in_stack_00000068 = in_stack_00000020;
          in_stack_00000060 = in_stack_00000018;
          in_stack_00000070 = in_stack_00000028;
          while (uVar6 = FUN_05e3d424(&stack0x00000050,*(undefined8 *)puVar5),
                uVar10 = in_stack_00000060, (uVar6 & 1) != 0) {
            if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            plVar13 = (long *)(in_stack_00000078 + 0x88);
            if (*plVar13 == 0) {
              lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
              FUN_05b0e950(lVar7,*(undefined8 *)puVar3);
              *plVar13 = lVar7;
              thunk_FUN_037aeb94(plVar13,lVar7);
              if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
            }
            plVar13 = *(long **)(in_stack_00000078 + 0x88);
            uVar8 = FUN_063683dc();
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            lVar11 = *plVar13;
            lVar7 = *(long *)puVar2;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_06368770;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_0377596c(plVar13,lVar7,1);
LAB_06368770:
            (*(code *)*puVar9)(plVar13,uVar10,uVar8,puVar9[1]);
          }
          FUN_05e3d544(&stack0x00000050,*(undefined8 *)PTR_DAT_07db5658);
          if (*(long *)(unaff_x20 + 0x30) != 0) {
            FUN_049cf910(&stack0x00000008,*(long *)(unaff_x20 + 0x30),
                         *(undefined8 *)PTR_DAT_07db5698);
            puVar4 = PTR_DAT_07db5668;
            puVar3 = PTR_DAT_07db33b0;
            puVar2 = PTR_DAT_07db33a0;
            puVar1 = PTR_DAT_07db3348;
            in_stack_00000038 = in_stack_00000010;
            in_stack_00000030 = in_stack_00000008;
            in_stack_00000040 = in_stack_00000018;
            while (uVar6 = FUN_05d64e98(&stack0x00000030,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
              if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              plVar13 = (long *)(in_stack_00000078 + 0x78);
              if (*plVar13 == 0) {
                lVar7 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
                FUN_049ce6c0(lVar7,*(undefined8 *)puVar2);
                *plVar13 = lVar7;
                thunk_FUN_037aeb94(plVar13,lVar7);
                if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
              }
              plVar13 = *(long **)(in_stack_00000078 + 0x78);
              uVar10 = FUN_063683dc();
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar7 = *plVar13;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                    goto LAB_063688a4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar1,2);
LAB_063688a4:
              (*(code *)*puVar9)(plVar13,uVar10,puVar9[1]);
            }
            FUN_05d64e94(&stack0x00000030,*(undefined8 *)PTR_DAT_07db5660);
            lVar7 = in_stack_00000078;
            if (*(long *)(unaff_x20 + 0x38) != 0) {
              uVar10 = FUN_063683dc();
              if (lVar7 == 0) goto LAB_06368964;
              puVar9 = (undefined8 *)(lVar7 + 0x90);
              *puVar9 = uVar10;
              thunk_FUN_037aeb94(puVar9,uVar10);
            }
            lVar7 = in_stack_00000078;
            if (*(long *)(unaff_x20 + 0x40) != 0) {
              uVar10 = FUN_063683dc();
              if (lVar7 == 0) goto LAB_06368964;
              puVar9 = (undefined8 *)(lVar7 + 0x98);
              *puVar9 = uVar10;
              thunk_FUN_037aeb94(puVar9,uVar10);
            }
            return in_stack_00000078;
          }
        }
      }
    }
  }
LAB_06368964:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


