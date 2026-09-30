/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_DestroyPassthroughColorLut
ENTRY_POINT: 076ea83c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_84_0__ovrp_DestroyPassthroughColorLut(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  
  FUN_05329de0();
  puVar2 = PTR_DAT_08f8e6c8;
  puVar1 = PTR_DAT_08f66370;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f8e6c8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_076ea8c8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20();
LAB_076ea8c8:
    (*(code *)*puVar3)();
    plVar8 = *(long **)(unaff_x19 + 0x28);
    uVar4 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_07449f28();
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
            goto OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar2,0xe);
OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2:
                    /* WARNING: Could not recover jumptable at 0x076ea968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


