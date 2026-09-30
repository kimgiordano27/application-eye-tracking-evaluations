/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerResolvePackageAnalytic$$.ctor
ENTRY_POINT: 073dd110
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd25c) */
/* WARNING: Removing unreachable block (ram,0x073dd39c) */
/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void UnityEditor_Analytics_PackageManagerResolvePackageAnalytic___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  undefined1 in_stack_00000078;
  long in_stack_00000098;
  
  puVar5 = PTR_DAT_079fe8a8;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  FUN_04527a98(&stack0x00000008,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_079fe8a8);
  puVar4 = PTR_DAT_079fe898;
  puVar2 = PTR_DAT_079f4d70;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000018;
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000050;
  while( true ) {
    while( true ) {
      uVar7 = FUN_058831c4(&stack0x00000050,*(undefined8 *)puVar4);
      puVar3 = PTR_DAT_079fe890;
      if ((uVar7 & 1) == 0) {
        FUN_058831c0(&stack0x00000050,*(undefined8 *)PTR_DAT_079fe890);
        if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_073dd6d0();
        if (in_stack_00000098 != 0) {
          FUN_04527a98(&stack0x00000008,in_stack_00000098,*(undefined8 *)puVar5);
          in_stack_00000040 = in_stack_00000018;
          in_stack_00000038 = in_stack_00000010;
          in_stack_00000030 = in_stack_00000008;
          in_stack_00000008 = 0;
          in_stack_00000010 = &stack0x00000030;
          while( true ) {
            uVar9 = FUN_058831c4(&stack0x00000030,*(undefined8 *)puVar4);
            uVar7 = in_stack_00000040;
            if ((uVar9 & 1) == 0) {
              FUN_058831c0(&stack0x00000030,*(undefined8 *)puVar3);
              lVar11 = in_stack_00000020;
              FUN_04b15ef4(in_stack_00000028,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                          );
              if (lVar11 == 0) {
                FUN_073dd74c();
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c00(lVar11);
            }
            plVar8 = *(long **)(unaff_x19 + 0x348);
            if (plVar8 == (long *)0x0) break;
            lVar11 = *(long *)(unaff_x19 + 0x370);
            uVar10 = (**(code **)(*plVar8 + 0x208))
                               (plVar8,in_stack_00000040 & 0xffffffff,
                                *(undefined8 *)(*plVar8 + 0x210));
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            FUN_073dd83c(lVar11,uVar7 & 0xffffffff,uVar10);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar8 = *(long **)(unaff_x19 + 0x348);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      iVar6 = (**(code **)(*plVar8 + 0x1e8))
                        (plVar8,in_stack_00000060 & 0xffffffff,*(undefined8 *)(*plVar8 + 0x1f0));
      if (-1 < iVar6) break;
      in_stack_00000078 = 1;
    }
    if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar7 = FUN_073dd7e4(*(long *)(unaff_x19 + 0x370),iVar6);
    if ((uVar7 & 1) == 0) {
      in_stack_00000078 = 1;
    }
    if (in_stack_00000098 == 0) break;
    lVar11 = *(long *)(in_stack_00000098 + 0x10);
    lVar12 = *(long *)puVar2;
    *(int *)(in_stack_00000098 + 0x1c) = *(int *)(in_stack_00000098 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar1 = *(uint *)(in_stack_00000098 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(in_stack_00000098 + 0x18) = uVar1 + 1;
      *(int *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
    }
    else {
      FUN_04526fb8(in_stack_00000098,iVar6,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


