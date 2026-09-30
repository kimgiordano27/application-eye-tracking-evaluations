/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceSemanticLabels
ENTRY_POINT: 01f9e820
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceSemanticLabels(long param_1)

{
  int iVar1;
  bool in_CY;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  if (in_CY) {
LAB_01f9e7a0:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  lVar2 = *(long *)(unaff_x20 + ((param_1 << 0x20) >> 0x1d) + 0x20);
  if (lVar2 == 0) {
LAB_01f9e8fc:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar3 = FUN_01ee6798(lVar2,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x18) != 0) {
      iVar4 = (int)*(long *)(unaff_x20 + 0x18);
      iVar1 = iVar4 + -1;
      if (iVar1 <= *(int *)(unaff_x19 + 0x18)) {
        if (iVar4 == 0) goto LAB_01f9e7a0;
        plVar5 = *(long **)(unaff_x20 + (long)iVar1 * 8 + 0x20);
        if ((plVar5 == (long *)0x0) ||
           (lVar2 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0)),
           lVar2 == 0)) goto LAB_01f9e8fc;
        uVar3 = FUN_01f80ec8(lVar2,0);
        if ((uVar3 & 1) != 0) {
          uVar6 = *(undefined8 *)PTR_DAT_027c1be0;
          if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar6 = FUN_01f7d8a0(uVar6,0);
          uVar3 = (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,0,*(undefined8 *)(*plVar5 + 0x210));
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          goto LAB_01f9e8e0;
        }
      }
    }
    uVar6 = 0;
  }
  else {
LAB_01f9e8e0:
    uVar6 = 1;
  }
  return uVar6;
}


