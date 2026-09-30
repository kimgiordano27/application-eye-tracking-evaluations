/*
FUNCTION_NAME: OVRPlugin$$set_gpuLevel
ENTRY_POINT: 0566a530
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__set_gpuLevel(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  FUN_04950150(param_1,param_2,*(undefined8 *)System_Collections_Generic_List<ERSideWalk>_TypeInfo);
  if (*(long *)(unaff_x19 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_0495062c();
  plVar5 = (long *)*in_stack_00000018;
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto OVRPlugin__set_vsyncCount;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)PTR_DAT_069fbff0,0);
OVRPlugin__set_vsyncCount:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (in_stack_00000010 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


