/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$PostDeserializeRemapParameterNames
ENTRY_POINT: 05c93278
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


void Unity_VisualScripting_InvokeMember__PostDeserializeRemapParameterNames(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar6;
  
  lVar3 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_System_Collections_Generic_List<JSONNode>_get_Item__) {
                    /* try { // try from 05c932c8 to 05d932cf has its CatchHandler @ 05c9348c */
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_05c932d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 05c932b8 to 05d932c3 has its CatchHandler @ 05c934a4 */
  puVar1 = (undefined8 *)
           FUN_02d9a5d4(param_1,*(long *)Method_System_Collections_Generic_List<JSONNode>_get_Item__
                        ,1);
LAB_05c932d4:
  (*(code *)*puVar1)(param_1,unaff_w20,puVar1[1]);
                    /* try { // try from 05c932e4 to 05d932e7 has its CatchHandler @ 05c93488 */
  lVar3 = (**(code **)(*unaff_x19 + 0x4b8))();
  if (lVar3 != 0) {
    uVar6 = *(undefined8 *)Method_System_Collections_Generic_List<JToken>_get_Item__;
    lVar2 = thunk_FUN_02d9d438(lVar3,uVar6);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(lVar3,uVar6);
    }
  }
                    /* try { // try from 05c93324 to 05d9332f has its CatchHandler @ 05c934d0 */
  return;
}


