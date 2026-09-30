/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 051248e4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__StaticUpdateMixedRealityCapture(ulong param_1)

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
  long unaff_x21;
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
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780e08);
    FUN_02d6084c(PTR_DAT_06780e10);
    FUN_02d6084c(PTR_DAT_06780e18);
    FUN_02d6084c(PTR_DAT_06780e20);
    FUN_02d6084c(PTR_DAT_06780e28);
    FUN_02d6084c(PTR_DAT_06780e30);
    FUN_02d6084c(PTR_DAT_06780e38);
    FUN_02d6084c(PTR_DAT_06780e40);
    FUN_02d6084c(PTR_DAT_06780e48);
    FUN_02d6084c(PTR_DAT_06780e50);
    FUN_02d6084c(PTR_DAT_06780e58);
    FUN_02d6084c(PTR_DAT_0677eb08);
    FUN_02d6084c(PTR_DAT_0677eb10);
    FUN_02d6084c(PTR_DAT_06780e60);
    FUN_02d6084c(PTR_DAT_06780e68);
    FUN_02d6084c(PTR_DAT_06780e70);
    FUN_02d6084c(PTR_DAT_0677eb60);
    FUN_02d6084c(PTR_DAT_0677eb70);
    *(undefined1 *)(unaff_x21 + 0xbfc) = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000040 = 0;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    uVar6 = FUN_0489720c();
    if ((uVar6 & 1) != 0) {
      return in_stack_00000078;
    }
    if ((unaff_x20 != 0) &&
       (in_stack_00000078 = FUN_05123ac8(*(undefined8 *)(unaff_x20 + 0x18)),
       *(long *)(unaff_x19 + 0x18) != 0)) {
      FUN_048956dc();
      puVar1 = PTR_DAT_06780e08;
      if (*(long *)(unaff_x20 + 0x20) != 0) {
        System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                  (&stack0x00000008,*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_06780e08);
        puVar5 = PTR_DAT_06780e48;
        puVar4 = PTR_DAT_06780e28;
        puVar3 = PTR_DAT_06780e18;
        puVar2 = PTR_DAT_0677eb10;
        in_stack_00000058 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000008;
        in_stack_00000068 = in_stack_00000020;
        in_stack_00000060 = in_stack_00000018;
        in_stack_00000070 = in_stack_00000028;
        while (uVar6 = FUN_04b3a824(&stack0x00000050,*(undefined8 *)puVar5),
              uVar10 = in_stack_00000060, (uVar6 & 1) != 0) {
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          plVar13 = (long *)(in_stack_00000078 + 0x80);
          if (*plVar13 == 0) {
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
            FUN_04894d4c(lVar7,*(undefined8 *)puVar3);
            *plVar13 = lVar7;
            thunk_FUN_02dd37b4(plVar13,lVar7);
            if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
          }
          plVar13 = *(long **)(in_stack_00000078 + 0x80);
          uVar8 = FUN_051248b8();
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar11 = *plVar13;
          lVar7 = *(long *)puVar2;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar7) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_05124b3c;
              }
              uVar6 = uVar6 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 != 0);
          }
          puVar9 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar7,1);
LAB_05124b3c:
          (*(code *)*puVar9)(plVar13,uVar10,uVar8,puVar9[1]);
        }
        FUN_04b3a944(&stack0x00000050,*(undefined8 *)PTR_DAT_06780e30);
        if (*(long *)(unaff_x20 + 0x28) != 0) {
          System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                    (&stack0x00000008,*(long *)(unaff_x20 + 0x28),*(undefined8 *)puVar1);
          in_stack_00000058 = in_stack_00000010;
          in_stack_00000050 = in_stack_00000008;
          in_stack_00000068 = in_stack_00000020;
          in_stack_00000060 = in_stack_00000018;
          in_stack_00000070 = in_stack_00000028;
          while (uVar6 = FUN_04b3a824(&stack0x00000050,*(undefined8 *)puVar5),
                uVar10 = in_stack_00000060, (uVar6 & 1) != 0) {
            if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            plVar13 = (long *)(in_stack_00000078 + 0x88);
            if (*plVar13 == 0) {
              lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
              FUN_04894d4c(lVar7,*(undefined8 *)puVar3);
              *plVar13 = lVar7;
              thunk_FUN_02dd37b4(plVar13,lVar7);
              if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
            }
            plVar13 = *(long **)(in_stack_00000078 + 0x88);
            uVar8 = FUN_051248b8();
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            lVar11 = *plVar13;
            lVar7 = *(long *)puVar2;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar7) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                  goto LAB_05124c4c;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_02d9a5d4(plVar13,lVar7,1);
LAB_05124c4c:
            (*(code *)*puVar9)(plVar13,uVar10,uVar8,puVar9[1]);
          }
          FUN_04b3a944(&stack0x00000050,*(undefined8 *)PTR_DAT_06780e30);
          if (*(long *)(unaff_x20 + 0x30) != 0) {
            FUN_03aaceb0(&stack0x00000008,*(long *)(unaff_x20 + 0x30),
                         *(undefined8 *)PTR_DAT_06780e70);
            puVar4 = PTR_DAT_06780e40;
            puVar3 = PTR_DAT_0677eb70;
            puVar2 = PTR_DAT_0677eb60;
            puVar1 = PTR_DAT_0677eb08;
            in_stack_00000038 = in_stack_00000010;
            in_stack_00000030 = in_stack_00000008;
            in_stack_00000040 = in_stack_00000018;
            while (uVar6 = FUN_04a7a4a0(&stack0x00000030,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
              if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              plVar13 = (long *)(in_stack_00000078 + 0x78);
              if (*plVar13 == 0) {
                lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                FUN_03aabc60(lVar7,*(undefined8 *)puVar2);
                *plVar13 = lVar7;
                thunk_FUN_02dd37b4(plVar13,lVar7);
                if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
              }
              plVar13 = *(long **)(in_stack_00000078 + 0x78);
              uVar10 = FUN_051248b8();
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar7 = *plVar13;
              uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                    goto LAB_05124d80;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_02d9a5d4(plVar13,*(long *)puVar1,2);
LAB_05124d80:
              (*(code *)*puVar9)(plVar13,uVar10,puVar9[1]);
            }
            FUN_04a7a49c(&stack0x00000030,*(undefined8 *)PTR_DAT_06780e38);
            lVar7 = in_stack_00000078;
            if (*(long *)(unaff_x20 + 0x38) != 0) {
              uVar10 = FUN_051248b8();
              if (lVar7 == 0) goto LAB_05124e40;
              puVar9 = (undefined8 *)(lVar7 + 0x90);
              *puVar9 = uVar10;
              thunk_FUN_02dd37b4(puVar9,uVar10);
            }
            lVar7 = in_stack_00000078;
            if (*(long *)(unaff_x20 + 0x40) != 0) {
              uVar10 = FUN_051248b8();
              if (lVar7 == 0) goto LAB_05124e40;
              puVar9 = (undefined8 *)(lVar7 + 0x98);
              *puVar9 = uVar10;
              thunk_FUN_02dd37b4(puVar9,uVar10);
            }
            return in_stack_00000078;
          }
        }
      }
    }
  }
LAB_05124e40:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


