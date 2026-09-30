/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StartColocationDiscovery
ENTRY_POINT: 090d79a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_103_0__ovrp_StartColocationDiscovery(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long lVar7;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_090d79e8;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 090d79c4 to 091d79c7 has its CatchHandler @ 090d79e8 */
    } while (in_x9 != 0);
  }
                    /* try { // try from 090d79c8 to 091d79eb has its CatchHandler @ 090d73d0 */
  puVar1 = (undefined8 *)FUN_04980e68();
LAB_090d79e8:
                    /* catch() { ... } // from try @ 090d79c4 with catch @ 090d79e8 */
                    /* try { // try from 090d79ec to 091d79f3 has its CatchHandler @ 090d79fc */
                    /* try { // try from 090d79f4 to 091d79ff has its CatchHandler @ 090d73d0 */
  (*(code *)*puVar1)();
  lVar7 = *(long *)(unaff_x19 + 0x80);
                    /* catch() { ... } // from try @ 090d79ec with catch @ 090d79fc */
  if ((lVar7 != 0) && (plVar6 = *(long **)(unaff_x19 + 0x90), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac77a88) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_090d7a60;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac77a88,1);
LAB_090d7a60:
    (*(code *)*puVar1)(plVar6,lVar7 + 0x18,puVar1[1]);
    uVar3 = 0;
    while (lVar7 = *(long *)(unaff_x19 + 0xa0), lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if ((lVar2 == 0) || (plVar6 = *(long **)(lVar7 + uVar3 * 8 + 0x20), plVar6 == (long *)0x0))
      break;
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_090d7aec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x21,1);
LAB_090d7aec:
      (*(code *)*puVar1)(plVar6,lVar2 + 0x30,puVar1[1]);
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


