/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerEmbedPackageAnalytic$$CreatePackageManagerEmbedPackageAnalytic
ENTRY_POINT: 073dd1f0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x073dd25c) */
/* WARNING: Removing unreachable block (ram,0x073dd39c) */
/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void UnityEditor_Analytics_PackageManagerEmbedPackageAnalytic__CreatePackageManagerEmbedPackageAnalytic
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  int unaff_w20;
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
  
  do {
    FUN_04526fb8(param_2,unaff_w20,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
    uVar3 = in_stack_00000078;

    UnityEditor_Analytics_PackageManagerResolvePackageAnalytic__CreatePackageManagerResolvePackageAnalytic
    :
    do {
      in_stack_00000078 = uVar3;
      uVar4 = FUN_058831c4(&stack0x00000050,*unaff_x22);
      puVar2 = PTR_DAT_079fe890;
      if ((uVar4 & 1) == 0) {
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
          uVar6 = FUN_058831c4(&stack0x00000030,*unaff_x22);
          uVar4 = in_stack_00000040;
          if ((uVar6 & 1) == 0) {
            FUN_058831c0(&stack0x00000030,*(undefined8 *)puVar2);
            lVar8 = in_stack_00000020;
            FUN_04b15ef4(in_stack_00000028,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                        );
            if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c00(lVar8);
            }
            FUN_073dd74c();
            return;
          }
          plVar5 = *(long **)(unaff_x19 + 0x348);
          if (plVar5 == (long *)0x0) break;
          lVar8 = *(long *)(unaff_x19 + 0x370);
          uVar7 = (**(code **)(*plVar5 + 0x208))
                            (plVar5,in_stack_00000040 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x210))
          ;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          FUN_073dd83c(lVar8,uVar4 & 0xffffffff,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      plVar5 = *(long **)(unaff_x19 + 0x348);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      unaff_w20 = (**(code **)(*plVar5 + 0x1e8))
                            (plVar5,in_stack_00000060,*(undefined8 *)(*plVar5 + 0x1f0));
      uVar3 = unaff_w24;
    } while (unaff_w20 < 0);
    if (*(long *)(unaff_x19 + 0x370) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = FUN_073dd7e4(*(long *)(unaff_x19 + 0x370),unaff_w20);
    if ((uVar4 & 1) == 0) {
      in_stack_00000078 = unaff_w24;
    }
    if (in_stack_00000098 == 0) {
LAB_073dd374:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar8 = *(long *)(in_stack_00000098 + 0x10);
    lVar9 = *unaff_x21;
    *(int *)(in_stack_00000098 + 0x1c) = *(int *)(in_stack_00000098 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_073dd374;
    uVar1 = *(uint *)(in_stack_00000098 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(in_stack_00000098 + 0x18) = uVar1 + 1;
      *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
      uVar3 = in_stack_00000078;
      goto 
      UnityEditor_Analytics_PackageManagerResolvePackageAnalytic__CreatePackageManagerResolvePackageAnalytic
      ;
    }
    param_1 = *(long *)(lVar9 + 0x20);
    param_2 = in_stack_00000098;
  } while( true );
}


