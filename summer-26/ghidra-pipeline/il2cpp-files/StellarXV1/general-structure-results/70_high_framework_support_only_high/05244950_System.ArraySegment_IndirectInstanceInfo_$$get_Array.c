/*
FUNCTION_NAME: System.ArraySegment<IndirectInstanceInfo>$$get_Array
ENTRY_POINT: 05244950
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_ArraySegment<IndirectInstanceInfo>__get_Array(void)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  lVar1 = FUN_040b1acc();
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_04a84cd0(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,in_stack_00000018,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_06222404();
      plVar2 = (long *)FUN_08a595bc(uVar4,0);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_05244a4c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_092b8d88,0);
LAB_05244a4c:
      (*(code *)*puVar5)(plVar2);
      return;
    }
  }
  System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>();
  return;
}


