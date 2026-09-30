/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 01f91744
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  code *in_x9;
  long *unaff_x20;
  uint uVar9;
  
  lVar4 = (*in_x9)();
  puVar3 = PTR_DAT_027bb830;
  if (lVar4 == 0) {
LAB_01f91820:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (0 < (int)uVar1) {
    uVar9 = 0;
    do {
      if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar5 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_01f91820;
      lVar8 = *plVar5;
      bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60();
      }
      plVar5 = (long *)(**(code **)(lVar8 + 0x308))();
      if (plVar5 != (long *)0x0) {
        plVar6 = (long *)thunk_FUN_0122c1cc(plVar5,0);
        if (plVar6 == (long *)0x0) goto LAB_01f91820;
        uVar7 = (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
        if ((uVar7 & 1) == 0) {
          lVar4 = *plVar5;
          goto LAB_01f91804;
        }
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  lVar4 = *unaff_x20;
LAB_01f91804:
                    /* WARNING: Could not recover jumptable at 0x01f91818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x158))();
  return;
}


