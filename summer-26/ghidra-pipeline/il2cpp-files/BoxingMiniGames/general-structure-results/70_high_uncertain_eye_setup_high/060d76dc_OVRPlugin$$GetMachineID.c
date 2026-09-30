/*
FUNCTION_NAME: OVRPlugin$$GetMachineID
ENTRY_POINT: 060d76dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetMachineID
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = *(undefined8 *)(param_1 + 0x158);
  uStack0000000000000000 = *(undefined8 *)(param_1 + 0x150);
  uStack0000000000000018 = *(undefined8 *)(param_1 + 0x168);
  uVar8 = *(undefined8 *)(param_1 + 0x160);
  uStack0000000000000020 = *(undefined8 *)(param_1 + 0x170);
  uVar9 = param_4;
  uStack0000000000000010 = uVar8;
  FUN_060adf48();
  uVar7 = (undefined4)uVar8;
  uVar6 = FUN_071af474(0);
  lVar1 = FUN_071bd0d0();
  if (lVar1 != 0) {
    FUN_071d10c0(param_2,param_3,param_4,uVar6,uVar7,uVar9,param_5,lVar1,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_0718a8f8(*(long *)(unaff_x19 + 0x40),1,0);
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if (plVar5 == (long *)0x0) {
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
      }
      else {
        lVar1 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07a209e0) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_060d77c8;
            }
                    /* try { // try from 060d7798 to 061d77db has its CatchHandler @ 060d77f4 */
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)PTR_DAT_07a209e0,0);
LAB_060d77c8:
        uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      }
      lVar1 = 0x98;
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        lVar1 = 0x90;
      }
                    /* try { // try from 060d77ec to 061d77ef has its CatchHandler @ 060d77f0 */
      if (*(long *)(unaff_x19 + lVar1) != 0) {
                    /* catch() { ... } // from try @ 060d77ec with catch @ 060d77f0 */
                    /* catch() { ... } // from try @ 060d7798 with catch @ 060d77f4 */
        FUN_0716f384(uVar3,*(long *)(unaff_x19 + lVar1),0);
        FUN_060d73f4();
        FUN_060d7830();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


