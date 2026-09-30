/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_0
ENTRY_POINT: 05c94dd4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
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
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long in_x11;
  undefined4 unaff_w20;
  long unaff_x23;
  long *unaff_x24;
  
  while (in_x11 != unaff_x23) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05c94e0c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x14) * 0x10 + 0x138);
LAB_05c94e0c:
  (*(code *)*puVar1)();
  lVar2 = thunk_FUN_02d9d438();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
  lVar2 = *unaff_x24;
  plVar3 = (long *)thunk_FUN_02d9d438();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
  lVar4 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x16) * 0x10 + 0x138);
        goto LAB_05c94e98;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4(plVar3,lVar2,0x16);
LAB_05c94e98:
                    /* WARNING: Could not recover jumptable at 0x05c94eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar3,unaff_w20,puVar1[1]);
  return;
}


