/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_0
ENTRY_POINT: 084174b0
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember_<>c__<PostDeserializeRemapParameterNames>b__40_0
               (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x23;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x23 + 0xf40);
  lVar1 = thunk_FUN_03f4e590(param_1,*plVar7);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f139ac();
  }
  lVar1 = *plVar7;
  plVar7 = (long *)thunk_FUN_03f4e590();
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f139ac();
  }
  lVar2 = thunk_FUN_03f4e590();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f139ac();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar1) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xf) * 0x10 + 0x138);
        goto LAB_08417554;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f4b594(plVar7,lVar1,0xf);
LAB_08417554:
                    /* WARNING: Could not recover jumptable at 0x0841756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,lVar2,puVar3[1]);
  return;
}


