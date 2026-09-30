/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox2D
ENTRY_POINT: 01f9e718
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox2D(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long unaff_x19;
  long *plVar10;
  uint unaff_w21;
  long *unaff_x22;
  
  uVar9 = *(ulong *)(unaff_x19 + 0x18);
  uVar6 = uVar9 & 0xffffffff;
  uVar2 = (uint)*(ulong *)(param_1 + 0x18);
  uVar8 = (uint)uVar9;
  if (uVar8 == uVar2) {
                    /* try { // try from 01f9e73c to 0209e767 has its CatchHandler @ 01f9eb98 */
    if (((unaff_w21 & 0x10100) == 0x10000) && (0 < (int)uVar8)) {
      if (uVar6 != 0) {
        uVar9 = 0;
        uVar7 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
        do {
          lVar3 = *(long *)(unaff_x19 + 0x20 + uVar9 * 8);
          if (lVar3 != 0) {
            if (uVar6 <= uVar9) break;
                    /* try { // try from 01f9e774 to 0209e77b has its CatchHandler @ 01f9eb84 */
            uVar6 = FUN_01ee8e78(lVar3,*(undefined8 *)(param_1 + 0x20 + uVar9 * 8),0);
            if ((uVar6 & 1) == 0) goto LAB_01f9e8e8;
            uVar7 = (ulong)*(uint *)(param_1 + 0x18);
          }
          uVar6 = uVar7;
          uVar9 = uVar9 + 1;
                    /* try { // try from 01f9e788 to 0209e793 has its CatchHandler @ 01f9eb74 */
          if ((long)(int)uVar6 <= (long)uVar9) goto LAB_01f9e8e0;
                    /* try { // try from 01f9e794 to 0209e923 has its CatchHandler @ 01f9e4b4 */
          uVar7 = uVar6;
        } while (uVar9 < *(uint *)(unaff_x19 + 0x18));
      }
      goto LAB_01f9e7a0;
    }
LAB_01f9e8e0:
    uVar4 = 1;
  }
  else {
    if ((unaff_w21 & 0x3300) != 0) {
      if ((int)uVar2 < (int)uVar8) {
        uVar2 = (**(code **)(*unaff_x22 + 600))();
        if ((uVar2 >> 1 & 1) != 0) goto LAB_01f9e8e0;
      }
      else if ((unaff_w21 >> 0x12 & 1) != 0) {
        if (uVar2 <= uVar8) goto LAB_01f9e7a0;
        lVar3 = *(long *)(param_1 + ((long)(uVar9 << 0x20) >> 0x1d) + 0x20);
        if (lVar3 == 0) goto LAB_01f9e8fc;
        uVar6 = FUN_01ee6798(lVar3,0);
        if ((uVar6 & 1) != 0) goto LAB_01f9e8e0;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        iVar5 = (int)*(long *)(param_1 + 0x18);
        iVar1 = iVar5 + -1;
        if (iVar1 <= *(int *)(unaff_x19 + 0x18)) {
          if (iVar5 == 0) {
LAB_01f9e7a0:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          plVar10 = *(long **)(param_1 + (long)iVar1 * 8 + 0x20);
          if ((plVar10 == (long *)0x0) ||
             (lVar3 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
             lVar3 == 0)) {
LAB_01f9e8fc:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
          uVar6 = FUN_01f80ec8(lVar3,0);
          if ((uVar6 & 1) != 0) {
            uVar4 = *(undefined8 *)PTR_DAT_027c1be0;
            if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar4 = FUN_01f7d8a0(uVar4,0);
            uVar6 = (**(code **)(*plVar10 + 0x208))
                              (plVar10,uVar4,0,*(undefined8 *)(*plVar10 + 0x210));
            if ((uVar6 & 1) == 0) {
              return 0;
            }
            goto LAB_01f9e8e0;
          }
        }
      }
    }
LAB_01f9e8e8:
    uVar4 = 0;
  }
  return uVar4;
}


