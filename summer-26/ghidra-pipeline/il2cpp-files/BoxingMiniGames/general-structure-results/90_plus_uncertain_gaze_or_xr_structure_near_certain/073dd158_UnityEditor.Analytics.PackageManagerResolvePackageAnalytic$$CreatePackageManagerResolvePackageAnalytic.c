/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerResolvePackageAnalytic$$CreatePackageManagerResolvePackageAnalytic
ENTRY_POINT: 073dd158
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd25c) */
/* WARNING: Removing unreachable block (ram,0x073dd39c) */
/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void UnityEditor_Analytics_PackageManagerResolvePackageAnalytic__CreatePackageManagerResolvePackageAnalytic
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined1 unaff_w24;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 in_stack_00000060;
  undefined1 in_stack_00000078;
  long in_stack_00000098;
  
  uVar3 = in_stack_00000078;
  while( true ) {
    do {
      in_stack_00000078 = uVar3;
      uVar5 = FUN_058831c4(&stack0x00000050,*unaff_x22);
      puVar2 = PTR_DAT_079fe890;
      if ((uVar5 & 1) == 0) {
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
        FUN_04527a98(&stack0x00000008,in_stack_00000098,*unaff_x23);
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000038 = in_stack_00000010;
        in_stack_00000030 = in_stack_00000008;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000030;
        while( true ) {
          uVar7 = FUN_058831c4(&stack0x00000030,*unaff_x22);
          uVar5 = in_stack_00000040;
          if ((uVar7 & 1) == 0) {
            FUN_058831c0(&stack0x00000030,*(undefined8 *)puVar2);
            lVar9 = in_stack_00000020;
            FUN_04b15ef4(in_stack_00000028,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                        );
            if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00(lVar9);
            }
            FUN_073dd74c();
            return;
          }
          plVar6 = *(long **)(unaff_x19 + 0x348);
          if (plVar6 == (long *)0x0) break;
          lVar9 = *(long *)(unaff_x19 + 0x370);
          uVar8 = (**(code **)(*plVar6 + 0x208))
                            (plVar6,in_stack_00000040 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x210))
          ;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_073dd83c(lVar9,uVar5 & 0xffffffff,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar6 = *(long **)(unaff_x19 + 0x348);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      iVar4 = (**(code **)(*plVar6 + 0x1e8))
                        (plVar6,in_stack_00000060,*(undefined8 *)(*plVar6 + 0x1f0));
      uVar3 = unaff_w24;
    } while (iVar4 < 0);
    if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar5 = FUN_073dd7e4(*(long *)(unaff_x19 + 0x370),iVar4);
    if ((uVar5 & 1) == 0) {
      in_stack_00000078 = unaff_w24;
    }
    if (in_stack_00000098 == 0) break;
    lVar9 = *(long *)(in_stack_00000098 + 0x10);
    lVar10 = *unaff_x21;
    *(int *)(in_stack_00000098 + 0x1c) = *(int *)(in_stack_00000098 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar1 = *(uint *)(in_stack_00000098 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(in_stack_00000098 + 0x18) = uVar1 + 1;
      *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar4;
      uVar3 = in_stack_00000078;
    }
    else {
      FUN_04526fb8(in_stack_00000098,iVar4,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      uVar3 = in_stack_00000078;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


