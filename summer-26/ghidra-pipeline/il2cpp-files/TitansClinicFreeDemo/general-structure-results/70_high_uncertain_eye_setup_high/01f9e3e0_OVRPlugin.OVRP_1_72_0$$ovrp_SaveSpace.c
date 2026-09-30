/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_SaveSpace
ENTRY_POINT: 01f9e3e0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_SaveSpace(long param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  ulong unaff_x24;
  uint unaff_w25;
  
  iVar2 = (**(code **)(param_1 + 0x198))();
  if ((iVar2 != 0x20) && (iVar2 = (**(code **)(*unaff_x19 + 0x198))(), iVar2 != 0x80)) {
    if ((unaff_x20 & 1) == 0) {
      if ((unaff_w22 >> 2 & 1) == 0) {
        return 0;
      }
    }
    else {
      if ((unaff_w22 >> 3 & 1) == 0) {
        return 0;
      }
      if ((unaff_w25 & (unaff_w22 >> 6 ^ 0xffffffff)) != 0) {
        return 0;
      }
    }
  }
  if ((unaff_x24 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f9e2bc();
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (((((unaff_w22 >> 2 & 1) == 0) || ((unaff_w22 >> 5 & 1) == 0)) ||
      ((unaff_w21 & (unaff_w22 >> 1 ^ 0xffffffff) & unaff_w25) == 0)) || ((unaff_x20 & 1) != 0)) {
    return 1;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_027bacc8 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    uVar3 = FUN_01ee57ec(0,0,0);
    if ((uVar3 & 1) == 0) {
LAB_01f9e504:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
  }
  else {
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027bacc8)
    {
      unaff_x19 = (long *)0x0;
    }
    uVar3 = FUN_01ee57ec(unaff_x19,0,0);
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_01f9e504;
      uVar3 = FUN_01ee56bc(unaff_x19,0);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = FUN_01ee55d8(unaff_x19,0);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


