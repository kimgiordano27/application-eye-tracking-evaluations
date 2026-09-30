/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerResetPackageAnalytic$$CreatePackageManagerResetPackageAnalytic
ENTRY_POINT: 073dd288
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */
/* WARNING: Removing unreachable block (ram,0x073dd334) */

void UnityEditor_Analytics_PackageManagerResetPackageAnalytic__CreatePackageManagerResetPackageAnalytic
               (ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 uStack0000000000000008;
  undefined1 *puStack0000000000000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  ulong uStack0000000000000040;
  
  puStack0000000000000010 = (undefined1 *)&stack0x00000030;
  uStack0000000000000008 = 0;
  uStack0000000000000030 = param_2;
  uStack0000000000000040 = param_1;
  while( true ) {
    uVar2 = FUN_058831c4(&stack0x00000030,*unaff_x22);
    uVar1 = uStack0000000000000040;
    if ((uVar2 & 1) == 0) {
      FUN_058831c0(&stack0x00000030,*unaff_x24);
      FUN_04b15ef4(in_stack_00000028,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                  );
      if (in_stack_00000020 == 0) {
        FUN_073dd74c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03642c00(in_stack_00000020);
    }
    plVar3 = *(long **)(unaff_x19 + 0x348);
    if (plVar3 == (long *)0x0) break;
    lVar5 = *(long *)(unaff_x19 + 0x370);
    uVar4 = (**(code **)(*plVar3 + 0x208))
                      (plVar3,uStack0000000000000040 & 0xffffffff,*(undefined8 *)(*plVar3 + 0x210));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    FUN_073dd83c(lVar5,uVar1 & 0xffffffff,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


