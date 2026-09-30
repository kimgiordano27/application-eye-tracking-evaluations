/*
FUNCTION_NAME: FUN_05511444
ENTRY_POINT: 05511444
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_05511444(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_06bbf5b3 & 1) == 0) {
    FUN_02f08768(OVRPlugin_OVRP_1_86_0_TypeInfo);
    DAT_06bbf5b3 = 1;
  }
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x40), lVar5 != 0)) {
    if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_1 + 0x10)) {
LAB_0551155c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar1 = *(uint *)(param_2 + 0x48);
    plVar9 = *(long **)(param_2 + 0x38);
    plVar8 = *(long **)(lVar5 + (long)(int)*(uint *)(param_1 + 0x10) * 8 + 0x20);
    *(uint *)(param_2 + 0x48) = uVar1 + 1;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)OVRPlugin_OVRP_1_86_0_TypeInfo) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05511504;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)OVRPlugin_OVRP_1_86_0_TypeInfo,0);
LAB_05511504:
      lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (plVar9 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar4,0);
        }
        if (uVar1 < *(uint *)(plVar9 + 3)) {
          plVar9[(long)(int)uVar1 + 4] = lVar5;
          return 1;
        }
        goto LAB_0551155c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


