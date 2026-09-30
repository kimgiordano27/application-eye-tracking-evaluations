/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 063b59ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  
                    /* try { // try from 063b59f4 to 064b5a1f has its CatchHandler @ 063b593c */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063b5974 with catch @ 063b59fc
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063b5964 with catch @ 063b5a00
                        */
  if ((DAT_0825c731 & 1) == 0) {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063b5950 with catch @ 063b5a04
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063b59ac with catch @ 063b5a08
                        */
    FUN_0373b518(PTR_DAT_07db72b8);
    FUN_0373b518(PTR_DAT_07db72c0);
                    /* try { // try from 063b5a20 to 064b5a23 has its CatchHandler @ 063b5a30 */
    FUN_0373b518(PTR_DAT_07db72c8);
    DAT_0825c731 = 1;
  }
                    /* catch() { ... } // from try @ 063b5a20 with catch @ 063b5a30 */
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
                    /* try { // try from 063b5a54 to 064b5a5b has its CatchHandler @ 063b5a5c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 063b5a3c with catch @ 063b5a5c
                       catch(type#2 @ 00000000) { ... } // from try @ 063b5a54 with catch @ 063b5a5c
                        */
      lVar3 = FUN_03fe2b68(param_1,*(undefined8 *)PTR_DAT_07db72c0);
    }
    else {
                    /* try { // try from 063b5a3c to 064b5a47 has its CatchHandler @ 063b5a5c */
                    /* try { // try from 063b5a48 to 064b5a53 has its CatchHandler @ 063b593c */
      lVar3 = FUN_03fe2e5c(param_1,param_3 & 1,*(undefined8 *)PTR_DAT_07db72b8);
    }
    puVar2 = PTR_DAT_07db72c8;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          plVar8 = *(long **)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_063b5b1c;
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_063b5aec;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar2,1);
LAB_063b5aec:
          (*(code *)*puVar4)(plVar8,puVar4[1]);
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      return;
    }
  }
LAB_063b5b1c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


