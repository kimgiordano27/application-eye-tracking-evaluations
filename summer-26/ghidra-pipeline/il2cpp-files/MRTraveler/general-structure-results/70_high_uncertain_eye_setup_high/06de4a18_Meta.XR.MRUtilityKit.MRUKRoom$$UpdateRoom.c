/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$UpdateRoom
ENTRY_POINT: 06de4a18
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__UpdateRoom(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xab0));
  FUN_03c8f898(PTR_DAT_08e69878);
  FUN_03c8f898(PTR_DAT_08e91a48);
  FUN_03c8f898(PTR_DAT_08e91a50);
  *(undefined1 *)(unaff_x22 + 0xdbf) = 1;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    uVar1 = FUN_05a524f4();
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar2 = FUN_05a524f4(*(long *)(unaff_x20 + 0x30));
      if (((uVar1 | uVar2) & 1) != 0) {
        plVar3 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,1);
        in_stack_00000008 = unaff_x19;
        lVar4 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e83ab0,&stack0x00000008);
        if (plVar3 == (long *)0x0) goto LAB_06de4b38;
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03cf5138(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
          uVar6 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar6,0);
        }
        if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar3[4] = lVar4;
        thunk_FUN_03d233cc(plVar3 + 4,lVar4);
        FUN_06de507c();
      }
      return;
    }
  }
LAB_06de4b38:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


