/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryNode
ENTRY_POINT: 01f97654
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


undefined8 OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryNode(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long unaff_x20;
  uint unaff_w23;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  do {
    if (in_x9 <= param_1) goto LAB_01f9778c;
    *(int *)(in_x11 + param_1 * 4) = (int)param_1;
    param_1 = param_1 + 1;
  } while ((long)param_1 < in_x10);
  if ((int)unaff_w23 < 2) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    bVar1 = false;
    do {
      if (((uint)*(ulong *)(unaff_x20 + 0x18) <= uVar5) ||
         ((*(ulong *)(unaff_x20 + 0x18) & 0xffffffff) <= lVar6 + 1U)) goto LAB_01f9778c;
      uVar4 = *(undefined8 *)(unaff_x20 + (long)(int)uVar5 * 8 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar2 = FUN_01f947fc(uVar4);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      else if (iVar2 == 2) {
        bVar1 = false;
        uVar5 = (int)lVar6 + 1;
      }
      lVar6 = lVar6 + 1;
    } while ((ulong)unaff_w23 - 1 != lVar6);
    if (bVar1) {
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar4 = thunk_FUN_0124bba8();
      uVar3 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      FUN_01ee31d4(uVar4,uVar3,0);
      uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1c78);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar4,uVar3);
    }
  }
  if (uVar5 < *(uint *)(unaff_x20 + 0x18)) {
    return *(undefined8 *)(unaff_x20 + (long)(int)uVar5 * 8 + 0x20);
  }
LAB_01f9778c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


