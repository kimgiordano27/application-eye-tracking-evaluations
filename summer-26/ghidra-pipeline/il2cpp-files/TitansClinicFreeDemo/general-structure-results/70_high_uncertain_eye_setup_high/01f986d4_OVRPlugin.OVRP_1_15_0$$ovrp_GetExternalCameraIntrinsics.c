/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraIntrinsics
ENTRY_POINT: 01f986d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  ulong unaff_x28;
  
  while (FUN_01fea2f8(), unaff_x22 != 0) {
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x24) {
LAB_01f987b4:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (unaff_x21 == (long *)0x0) break;
    unaff_x25 = unaff_x25 - unaff_x28;
    FUN_01fea2f8();
    do {
      uVar1 = (int)unaff_x24 - 1;
      unaff_x24 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
LAB_01f98720:
        if (unaff_x25 == 0) {
          if (unaff_x20 == 0) {
            if (*(long *)(unaff_x23 + 0x18) != 0) {
              if ((int)*(long *)(unaff_x23 + 0x18) == 0) goto LAB_01f987b4;
              if (*(long *)(unaff_x23 + 0x20) == 0) {
                if (unaff_x22 == 0) goto LAB_01f987b8;
                if (*(int *)(unaff_x22 + 0x18) != 0) {
                  return *(undefined8 *)(unaff_x22 + 0x20);
                }
                goto LAB_01f987b4;
              }
            }
            return *(undefined8 *)PTR_DAT_027bedb0;
          }
          if (unaff_x21 == (long *)0x0) goto LAB_01f987b8;
          lVar3 = *unaff_x21;
        }
        else {
          if (unaff_x19 == (long *)0x0) goto LAB_01f987b8;
          lVar3 = *unaff_x19;
        }
                    /* WARNING: Could not recover jumptable at 0x01f98760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar3 + 0x168))();
        return uVar2;
      }
      if (uVar1 == 0) {
        if (*(uint *)(unaff_x23 + 0x18) == 0) goto LAB_01f987b4;
        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_01f98720;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= uVar1) goto LAB_01f987b4;
      unaff_x28 = *(ulong *)(unaff_x23 + unaff_x24 * 8 + 0x20);
    } while ((unaff_x28 & (unaff_x25 ^ 0xffffffffffffffff)) != 0);
    if (unaff_x21 == (long *)0x0) break;
  }
LAB_01f987b8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


