/*
FUNCTION_NAME: UnityEditor.Analytics.PackageManagerResetPackageAnalytic$$.ctor
ENTRY_POINT: 073dd240
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */

void UnityEditor_Analytics_PackageManagerResetPackageAnalytic___ctor(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long lVar6;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000098;
  
  puVar1 = PTR_DAT_079fe890;
  FUN_058831c0(param_1,*(undefined8 *)PTR_DAT_079fe890);
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00();
  }
  if ((unaff_w21 == 0xb) || (unaff_w21 == 0)) {
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
    while (uVar3 = FUN_058831c4(&stack0x00000030,*unaff_x22), uVar2 = in_stack_00000040,
          (uVar3 & 1) != 0) {
      plVar4 = *(long **)(unaff_x19 + 0x348);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = *(long *)(unaff_x19 + 0x370);
      uVar5 = (**(code **)(*plVar4 + 0x208))
                        (plVar4,in_stack_00000040 & 0xffffffff,*(undefined8 *)(*plVar4 + 0x210));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_073dd83c(lVar6,uVar2 & 0xffffffff,uVar5);
    }
    FUN_058831c0(&stack0x00000030,*(undefined8 *)puVar1);
    unaff_w21 = 0xf;
  }
  lVar6 = in_stack_00000020;
  FUN_04b15ef4(in_stack_00000028,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
              );
  if (lVar6 == 0) {
    if ((unaff_w21 == 0) || (unaff_w21 == 0xf)) {
      FUN_073dd74c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00(lVar6);
}


