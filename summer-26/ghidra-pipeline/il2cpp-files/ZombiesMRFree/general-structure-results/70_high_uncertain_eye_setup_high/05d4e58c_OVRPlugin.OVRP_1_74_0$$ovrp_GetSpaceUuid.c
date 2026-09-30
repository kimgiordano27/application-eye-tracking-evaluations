/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetSpaceUuid
ENTRY_POINT: 05d4e58c
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


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_GetSpaceUuid(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  uint uVar6;
  long *unaff_x22;
  long lVar7;
  
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 05d4e5ac to 05e4e5af has its CatchHandler @ 05d4e5ec */
                    /* try { // try from 05d4e5b0 to 05e4e5df has its CatchHandler @ 05d4e468 */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb75f0) {
                    /* try { // try from 05d4e5e0 to 05e4e5e3 has its CatchHandler @ 05d4e5e8 */
                    /* try { // try from 05d4e5e4 to 05e4e603 has its CatchHandler @ 05d4e468 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e5e0 with catch @ 05d4e5e8
                        */
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_05d4e5ec;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d4e5ec:
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e5ac with catch @ 05d4e5ec
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e538 with catch @ 05d4e5f0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 05d4e57c with catch @ 05d4e5f4
                        */
    (*(code *)*puVar1)();
    uVar6 = 0;
                    /* try { // try from 05d4e604 to 05e4e607 has its CatchHandler @ 05d4e62c */
    while (lVar2 = *(long *)(unaff_x19 + 0xa0), lVar2 != 0) {
                    /* try { // try from 05d4e608 to 05e4e633 has its CatchHandler @ 05d4e468 */
      if (*(uint *)(lVar2 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar7 = *(long *)(unaff_x19 + 0x80);
      if (lVar7 == 0) break;
      plVar5 = *(long **)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
      if (plVar5 == (long *)0x0) break;
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_05d4e678;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*unaff_x22,1);
LAB_05d4e678:
      (*(code *)*puVar1)(plVar5,lVar7 + 0x30,puVar1[1]);
      uVar6 = uVar6 + 1;
      if (uVar6 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


