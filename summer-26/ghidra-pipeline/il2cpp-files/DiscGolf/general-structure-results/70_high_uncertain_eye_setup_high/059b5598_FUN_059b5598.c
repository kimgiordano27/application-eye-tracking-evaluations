/*
FUNCTION_NAME: FUN_059b5598
ENTRY_POINT: 059b5598
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x059b57a0) */

void FUN_059b5598(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
                    /* try { // try from 059b5598 to 05ab559b has its CatchHandler @ 059b55a4 */
                    /* catch() { ... } // from try @ 059b5598 with catch @ 059b55a4 */
                    /* try { // try from 059b55a8 to 05ab55af has its CatchHandler @ 059b55b8 */
                    /* try { // try from 059b55b0 to 05ab55bb has its CatchHandler @ 059b5304 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 059b55a8 with catch @ 059b55b8
                        */
  if ((DAT_06dc1511 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_124_0_TypeInfo);
    DAT_06dc1511 = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  puVar2 = PTR_DAT_069fbff8;
  puVar1 = PTR_DAT_069fbff0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar4 = (long *)FUN_059b20a8(param_2);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059b5688;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar2,0);
LAB_059b5688:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_059b5754;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_059b56ec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar3,0);
LAB_059b56ec:
    auVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    FUN_059b25b8(param_1,auVar9._0_8_,auVar9._8_8_);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_059b5770;
    }
  }
LAB_059b5754:
  puVar5 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)puVar1,0);
LAB_059b5770:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


