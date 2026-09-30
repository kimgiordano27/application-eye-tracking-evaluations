/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 05d7be44
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 0x15) * 0x10 + 0x138);
        goto LAB_05d7bea0;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac();
LAB_05d7bea0:
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x38);
  uVar2 = thunk_FUN_032a56a0(*unaff_x22);
  FUN_0589e07c();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x15) * 0x10 + 0x138);
        goto LAB_05d7bf24;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_032937ac(plVar6,*unaff_x23,0x15);
LAB_05d7bf24:
                    /* WARNING: Could not recover jumptable at 0x05d7bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,uVar2,puVar1[1]);
  return;
}


