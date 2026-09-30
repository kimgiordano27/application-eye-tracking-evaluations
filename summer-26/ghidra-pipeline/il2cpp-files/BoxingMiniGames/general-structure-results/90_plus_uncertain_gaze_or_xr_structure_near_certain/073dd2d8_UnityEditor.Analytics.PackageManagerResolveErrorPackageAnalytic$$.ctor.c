/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerResolveErrorPackageAnalytic$$.ctor
ENTRY_POINT: 073dd2d8
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

void UnityEditor_Analytics_PackageManagerResolveErrorPackageAnalytic___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000040;
  
  while( true ) {
    FUN_073dd83c(param_1,unaff_w20,param_3);
    uVar1 = FUN_058831c4(&stack0x00000030,*unaff_x22);
    unaff_w20 = in_stack_00000040;
    if ((uVar1 & 1) == 0) {
      FUN_058831c0(&stack0x00000030,*unaff_x24);
      FUN_04b15ef4(in_stack_00000028,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                  );
      if (in_stack_00000020 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00(in_stack_00000020);
      }
      FUN_073dd74c();
      return;
    }
    plVar2 = *(long **)(unaff_x19 + 0x348);
    if (plVar2 == (long *)0x0) break;
    param_1 = *(long *)(unaff_x19 + 0x370);
    param_3 = (**(code **)(*plVar2 + 0x208))
                        (plVar2,in_stack_00000040,*(undefined8 *)(*plVar2 + 0x210));
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


