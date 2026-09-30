/*
FUNCTION_NAME: OVRPlugin.OVRP_1_73_0$$.cctor
ENTRY_POINT: 05d4e504
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_73_0___cctor(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_06fb8620;
  lVar5 = *(long *)(unaff_x19 + 0x80);
  if ((lVar5 != 0) && (plVar7 = *(long **)(unaff_x19 + 0x88), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 05d4e538 to 05e4e53f has its CatchHandler @ 05d4e5f0 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb8620) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_05d4e570;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb8620,1);
LAB_05d4e570:
                    /* try { // try from 05d4e57c to 05e4e5a7 has its CatchHandler @ 05d4e5f4 */
    (*(code *)*puVar2)(plVar7,lVar5 + 0x24,puVar2[1]);
    lVar5 = *(long *)(unaff_x19 + 0x80);
    if ((lVar5 != 0) && (plVar7 = *(long **)(unaff_x19 + 0x90), plVar7 != (long *)0x0)) {
      lVar3 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06fb75f0) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_05d4e5ec;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)PTR_DAT_06fb75f0,1);
LAB_05d4e5ec:
      (*(code *)*puVar2)(plVar7,lVar5 + 0x18,puVar2[1]);
      uVar8 = 0;
      while (lVar5 = *(long *)(unaff_x19 + 0xa0), lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        lVar3 = *(long *)(unaff_x19 + 0x80);
        if ((lVar3 == 0) ||
           (plVar7 = *(long **)(lVar5 + (long)(int)uVar8 * 8 + 0x20), plVar7 == (long *)0x0)) break;
        lVar5 = *plVar7;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_05d4e678;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar7,*(long *)puVar1,1);
LAB_05d4e678:
        (*(code *)*puVar2)(plVar7,lVar3 + 0x30,puVar2[1]);
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


