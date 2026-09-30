/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$_ovrp_GetSystemProductName
ENTRY_POINT: 02904528
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0___ovrp_GetSystemProductName(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x22;
  
  thunk_FUN_0159f088();
  *(undefined1 *)(unaff_x20 + 0xc65) = 1;
  puVar1 = PTR_DAT_06deb360;
  if (unaff_x22 == 0) {
    return 0;
  }
  lVar2 = thunk_FUN_015d0480();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160f170();
  }
  lVar2 = *(long *)puVar1;
  plVar3 = (long *)thunk_FUN_015d0480();
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 029045f8 to 02a045fb has its CatchHandler @ 0290461c */
                    /* try { // try from 029045fc to 02a045ff has its CatchHandler @ 02904618 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02904600 to 02a04603 has its CatchHandler @ 0290461c */
    FUN_0160f170();
  }
  lVar6 = *plVar3;
                    /* try { // try from 02904570 to 02a04577 has its CatchHandler @ 02904624 */
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
  if (uVar7 != 0) {
                    /* try { // try from 02904578 to 02a045f7 has its CatchHandler @ 02904308 */
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_029045d0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_015c2a80(plVar3,lVar2,5);
LAB_029045d0:
                    /* WARNING: Could not recover jumptable at 0x029045e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(plVar3);
  return uVar5;
}


