/*
FUNCTION_NAME: FUN_0267a240
ENTRY_POINT: 0267a240
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0267a240(long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  
                    /* try { // try from 0267a250 to 0277a253 has its CatchHandler @ 0267a274 */
                    /* try { // try from 0267a254 to 0277a27b has its CatchHandler @ 0267a044 */
  if ((DAT_041242aa & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7278);
                    /* catch() { ... } // from try @ 0267a250 with catch @ 0267a274 */
                    /* try { // try from 0267a27c to 0277a283 has its CatchHandler @ 0267a298 */
    FUN_01ab69ac(PTR_DAT_03cc0330);
                    /* try { // try from 0267a284 to 0277a28f has its CatchHandler @ 0267a044 */
    FUN_01ab69ac(PTR_DAT_03cd7690);
                    /* try { // try from 0267a290 to 0277a297 has its CatchHandler @ 0267a298 */
    DAT_041242aa = 1;
  }
  if (param_4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0267a27c with catch @ 0267a298
                       catch(type#2 @ 00000000) { ... } // from try @ 0267a290 with catch @ 0267a298
                        */
    uVar3 = FUN_025cb0a0(0);
    if ((uVar3 & 1) != 0) {
      uVar2 = OVRPlugin__SetControllerLocalizedVibration(param_4,0);
      if (param_2 == 0) goto LAB_0267a3ec;
      plVar4 = (long *)thunk_FUN_01a5dd74(param_2,0);
      if (plVar4 == (long *)0x0) goto LAB_0267a3ec;
      uVar5 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      uVar5 = FUN_025b1328(*(undefined8 *)PTR_DAT_03cd7690,uVar5,0);
      FUN_025cb0a8(0,uVar2,uVar5,0,0);
    }
    puVar1 = PTR_DAT_03cc0330;
    lVar6 = *(long *)PTR_DAT_03cc0330;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar6 = *(long *)puVar1;
    }
    if (*(char *)(*(long *)(lVar6 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_027f7e40(param_4,0);
    }
  }
  *param_1 = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1,param_2);
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cd7278) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0267a3bc;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cd7278,1);
LAB_0267a3bc:
    (*(code *)*puVar7)(plVar4,plVar4,puVar7[1]);
    if (param_3 != 0) {
      *(long *)(param_3 + 0x18) = *param_1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(param_3 + 0x18));
      return;
    }
  }
LAB_0267a3ec:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


