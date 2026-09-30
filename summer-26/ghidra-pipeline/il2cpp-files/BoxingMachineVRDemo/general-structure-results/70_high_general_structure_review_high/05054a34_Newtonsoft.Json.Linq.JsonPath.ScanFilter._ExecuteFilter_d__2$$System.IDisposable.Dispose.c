/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ScanFilter.<ExecuteFilter>d__2$$System.IDisposable.Dispose
ENTRY_POINT: 05054a34
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05054b68) */
/* WARNING: Removing unreachable block (ram,0x05054db0) */
/* WARNING: Removing unreachable block (ram,0x0505549c) */

undefined8
Newtonsoft_Json_Linq_JsonPath_ScanFilter_<ExecuteFilter>d__2__System_IDisposable_Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    if (in_w8 != unaff_w24) goto LAB_05054aa4;
    do {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = unaff_x28;
        thunk_FUN_02dd37b4(plVar5,unaff_x28);
      }
      else {
        FUN_03aac494();
      }
LAB_05054aa4:
      do {
        if (in_stack_00000008 == 0) {
          lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0677c3c8);
          *(long *)(lVar7 + 0x10) = unaff_x29;
          thunk_FUN_02dd37b4((long *)(lVar7 + 0x10),unaff_x29);
          *(int *)(lVar7 + 0x18) = unaff_w24;
          FUN_048956f0();
        }
LAB_050548a0:
        do {
          lVar7 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x20) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_050548ec;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x21,*unaff_x20,0);
LAB_050548ec:
          uVar8 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
          if ((uVar8 & 1) == 0) {
            if (unaff_x21 != (long *)0x0) {
              lVar7 = *unaff_x21;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0675f3d0) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_05054b50;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x21,*(long *)PTR_DAT_0675f3d0,0);
LAB_05054b50:
              (*(code *)*puVar3)(unaff_x21,puVar3[1]);
            }
            puVar2 = PTR_DAT_06775680;
            if (*(int *)(*(long *)PTR_DAT_06775680 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            in_stack_00000000 = FUN_05053a4c(in_stack_00000000);
            if (in_stack_00000000 == 0) {
              if (unaff_x23 != 0) {
                uVar4 = FUN_03aadf10();
                return uVar4;
              }
            }
            else {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              unaff_w24 = unaff_w24 + 1;
              plVar5 = (long *)FUN_05054240(in_stack_00000000);
              if (plVar5 != (long *)0x0) {
                lVar7 = *plVar5;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06774c18) {
                      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_0505488c;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_06774c18,0);
LAB_0505488c:
                unaff_x21 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
                if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60ae8();
                }
                goto LAB_050548a0;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar7 = *unaff_x21;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05054948;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(unaff_x21,*unaff_x26,0);
LAB_05054948:
          unaff_x28 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
          if (unaff_x28 == 0) {
            thunk_FUN_02dc61f4(PTR_DAT_0677c410);
            uVar4 = thunk_FUN_02d9d534();
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677c498);
            FUN_04f3a674(uVar4,uVar6,0);
            uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0677c4a0);
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar4,uVar6);
          }
          uVar4 = System_RuntimeType__get_MetadataToken(unaff_x28,0);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar8 = FUN_0501fa14();
          if ((uVar8 & 1) == 0) break;
          if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar8 = (**(code **)(*unaff_x19 + 0x298))();
        } while ((uVar8 & 1) == 0);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar8 = FUN_0489720c();
        if ((uVar8 & 1) != 0) {
          if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          unaff_x29 = *(long *)(in_stack_00000008 + 0x10);
          if (unaff_w24 != 0) goto LAB_050549e4;
LAB_05054a1c:
          if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          break;
        }
        if (*(int *)(*(long *)PTR_DAT_06775680 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        unaff_x29 = FUN_05053e04(uVar4);
        if (unaff_w24 == 0) goto LAB_05054a1c;
LAB_050549e4:
        if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
      } while (*(char *)(unaff_x29 + 0x15) == '\0');
    } while ((*(char *)(unaff_x29 + 0x14) != '\0') || (in_stack_00000008 == 0));
    in_w8 = *(int *)(in_stack_00000008 + 0x18);
  } while( true );
}


