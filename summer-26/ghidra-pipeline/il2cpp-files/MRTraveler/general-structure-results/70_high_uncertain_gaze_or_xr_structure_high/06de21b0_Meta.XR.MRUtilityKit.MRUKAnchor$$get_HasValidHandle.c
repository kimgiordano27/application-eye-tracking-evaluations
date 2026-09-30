/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$get_HasValidHandle
ENTRY_POINT: 06de21b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__get_HasValidHandle(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x378));
  FUN_03c8f898(PTR_DAT_08e918b0);
  *(undefined1 *)(unaff_x22 + 0xd8f) = 1;
  lVar2 = *unaff_x21;
  in_stack_00000008 = 0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *unaff_x21;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 8) != '\0') {
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_06de22b4;
    uVar3 = FUN_0674be18(*(long *)(unaff_x20 + 0x20),unaff_w19,&stack0x00000008,
                         *(undefined8 *)PTR_DAT_08e918c0);
    uVar1 = in_stack_00000008;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0888876c(uVar1,0);
    }
  }
  plVar6 = *(long **)(unaff_x20 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e82378) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0x19) * 0x10 + 0x138);
          goto FUN_06de2294;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e82378,0x19);
FUN_06de2294:
    (*(code *)*puVar4)(plVar6,unaff_w19,puVar4[1]);
    return;
  }
LAB_06de22b4:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


