/*
FUNCTION_NAME: UnityEditor.Analytics.AssetImportStatusAnalytic$$.ctor
ENTRY_POINT: 073dd408
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073dd304) */
/* WARNING: Removing unreachable block (ram,0x073dd3ac) */

void UnityEditor_Analytics_AssetImportStatusAnalytic___ctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  long lVar6;
  int unaff_w21;
  int iVar7;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  long in_stack_00000098;
  
  if (unaff_w21 == 1) {
    plVar5 = (long *)__cxa_begin_catch();
    lVar6 = *plVar5;
    in_stack_00000008 = lVar6;
    __cxa_end_catch();
    puVar1 = PTR_DAT_079fe890;
    FUN_058831c0(in_stack_00000010,*(undefined8 *)PTR_DAT_079fe890);
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c00(lVar6);
    }
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
      plVar5 = *(long **)(unaff_x19 + 0x348);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      lVar6 = *(long *)(unaff_x19 + 0x370);
      uVar4 = (**(code **)(*plVar5 + 0x208))
                        (plVar5,in_stack_00000040 & 0xffffffff,*(undefined8 *)(*plVar5 + 0x210));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_073dd83c(lVar6,uVar2 & 0xffffffff,uVar4);
    }
    FUN_058831c0(&stack0x00000030,*(undefined8 *)puVar1);
    iVar7 = 0xf;
    lVar6 = in_stack_00000020;
  }
  else {
    FUN_0315ede8(&stack0x00000008);
    if (unaff_w21 != 1) {
      FUN_0362e544(&stack0x00000020);
                    /* WARNING: Subroutine does not return */
      FUN_03732a6c();
    }
    plVar5 = (long *)__cxa_begin_catch();
    lVar6 = *plVar5;
    in_stack_00000020 = lVar6;
    __cxa_end_catch();
    iVar7 = 0;
  }
  FUN_04b15ef4(in_stack_00000028,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
              );
  if (lVar6 == 0) {
    if ((iVar7 == 0) || (iVar7 == 0xf)) {
      FUN_073dd74c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00(lVar6);
}


