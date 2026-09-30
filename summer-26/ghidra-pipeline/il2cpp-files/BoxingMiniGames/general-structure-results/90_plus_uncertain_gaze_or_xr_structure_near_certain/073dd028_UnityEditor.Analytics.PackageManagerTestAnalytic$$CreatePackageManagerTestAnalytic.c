/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerTestAnalytic$$CreatePackageManagerTestAnalytic
ENTRY_POINT: 073dd028
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd25c) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */
/* WARNING: Removing unreachable block (ram,0x073dd39c) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void UnityEditor_Analytics_PackageManagerTestAnalytic__CreatePackageManagerTestAnalytic(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  ulong in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined1 uStack0000000000000078;
  undefined7 uStack0000000000000079;
  undefined8 in_stack_00000080;
  long in_stack_00000098;
  
  FUN_03642964();
  FUN_03642964(
              Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
              );
  *(undefined1 *)(unaff_x20 + 0x72a) = 1;
  uStack0000000000000078 = 0;
  uStack0000000000000079 = 0;
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000098 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000040 = 0;
  thunk_FUN_036b7ad0(&stack0x00000080);
  uStack0000000000000078 = 0;
  if (*(long *)(unaff_x19 + 0x370) != 0) {
    FUN_073db64c();
    if ((*(long *)(unaff_x19 + 0x370) != 0) &&
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x370) + 0x38), lVar7 != 0)) {
      FUN_055fb440(lVar7,*(undefined8 *)PTR_DAT_07a31068);
      plVar8 = *(long **)(unaff_x19 + 0x348);
      if ((plVar8 == (long *)0x0) ||
         (lVar7 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400)), lVar7 == 0)
         ) {
        if (*(long *)(unaff_x19 + 0x370) != 0) {
          FUN_073dd6d0();
          goto LAB_073dd210;
        }
      }
      else if (*(long *)(unaff_x19 + 0x370) != 0) {
        iVar6 = FUN_073dd79c();
        if (iVar6 < 1) {
          if (*(long *)(unaff_x19 + 0x370) == 0) goto LAB_073dd388;
          iVar6 = FUN_073dd79c();
          if (iVar6 == 0) {
            if (*(long *)(unaff_x19 + 0x370) == 0) goto LAB_073dd388;
            iVar6 = FUN_073db64c();
            if (0 < iVar6) {
              if (*(long *)(unaff_x19 + 0x370) == 0) goto LAB_073dd388;
              FUN_073dd6d0();
              uStack0000000000000078 = 1;
            }
          }
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_07a02e00 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          _in_stack_00000068 =
               FUN_0539b8a8(&stack0x00000098,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<VisualTreeDataBindingsUpdater_VersionInfo>_get_Current__
                           );
          puVar5 = PTR_DAT_079fe8a8;
          in_stack_00000028 = &stack0x00000068;
          in_stack_00000020 = 0;
          if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x370) + 0x28);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_04527a98(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_079fe8a8);
          puVar4 = PTR_DAT_079fe898;
          puVar2 = PTR_DAT_079f4d70;
          in_stack_00000058 = in_stack_00000010;
          in_stack_00000050 = in_stack_00000008;
          in_stack_00000060 = in_stack_00000018;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000050;
          while( true ) {
            uVar9 = FUN_058831c4(&stack0x00000050,*(undefined8 *)puVar4);
            puVar3 = PTR_DAT_079fe890;
            if ((uVar9 & 1) == 0) break;
            plVar8 = *(long **)(unaff_x19 + 0x348);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            iVar6 = (**(code **)(*plVar8 + 0x1e8))
                              (plVar8,in_stack_00000060 & 0xffffffff,
                               *(undefined8 *)(*plVar8 + 0x1f0));
            if (iVar6 < 0) {
              uStack0000000000000078 = 1;
            }
            else {
              if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              uVar9 = FUN_073dd7e4(*(long *)(unaff_x19 + 0x370),iVar6);
              if ((uVar9 & 1) == 0) {
                uStack0000000000000078 = 1;
              }
              if (in_stack_00000098 == 0) {
LAB_073dd374:
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar7 = *(long *)(in_stack_00000098 + 0x10);
              lVar12 = *(long *)puVar2;
              *(int *)(in_stack_00000098 + 0x1c) = *(int *)(in_stack_00000098 + 0x1c) + 1;
              if (lVar7 == 0) goto LAB_073dd374;
              uVar1 = *(uint *)(in_stack_00000098 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(in_stack_00000098 + 0x18) = uVar1 + 1;
                *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
              }
              else {
                FUN_04526fb8(in_stack_00000098,iVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_058831c0(&stack0x00000050,*(undefined8 *)PTR_DAT_079fe890);
          if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_073dd6d0();
          if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_04527a98(&stack0x00000008,in_stack_00000098,*(undefined8 *)puVar5);
          in_stack_00000040 = in_stack_00000018;
          in_stack_00000038 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000008;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000030;
          while( true ) {
            uVar10 = FUN_058831c4(&stack0x00000030,*(undefined8 *)puVar4);
            uVar9 = in_stack_00000040;
            if ((uVar10 & 1) == 0) break;
            plVar8 = *(long **)(unaff_x19 + 0x348);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar7 = *(long *)(unaff_x19 + 0x370);
            uVar11 = (**(code **)(*plVar8 + 0x208))
                               (plVar8,in_stack_00000040 & 0xffffffff,
                                *(undefined8 *)(*plVar8 + 0x210));
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_073dd83c(lVar7,uVar9 & 0xffffffff,uVar11);
          }
          FUN_058831c0(&stack0x00000030,*(undefined8 *)puVar3);
          lVar7 = in_stack_00000020;
          FUN_04b15ef4(in_stack_00000028,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                      );
          if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c00(lVar7);
          }
        }
LAB_073dd210:
        FUN_073dd74c();
        return;
      }
    }
  }
LAB_073dd388:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


