/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_CreateVirtualKeyboard
ENTRY_POINT: 05d4e610
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_CreateVirtualKeyboard(long param_1)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  uint unaff_w21;
  long *unaff_x22;
  long lVar6;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar6 = *(long *)(unaff_x19 + 0x80);
    if (lVar6 == 0) break;
    plVar5 = *(long **)(param_1 + (long)(int)unaff_w21 * 8 + 0x20);
    if (plVar5 == (long *)0x0) break;
    lVar2 = *plVar5;
                    /* catch() { ... } // from try @ 05d4e604 with catch @ 05d4e62c */
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 05d4e634 to 05e4e63b has its CatchHandler @ 05d4e650 */
    if (uVar3 != 0) {
                    /* try { // try from 05d4e63c to 05e4e647 has its CatchHandler @ 05d4e468 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 05d4e648 to 05e4e64f has its CatchHandler @ 05d4e650 */
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_05d4e678;
        }
        uVar3 = uVar3 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d4e634 with catch @ 05d4e650
                       catch(type#2 @ 00000000) { ... } // from try @ 05d4e648 with catch @ 05d4e650
                        */
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*unaff_x22,1);
LAB_05d4e678:
    (*(code *)*puVar1)(plVar5,lVar6 + 0x30,puVar1[1]);
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 0x1a) {
      return 1;
    }
    param_1 = *(long *)(unaff_x19 + 0xa0);
    if (param_1 == 0) break;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


