/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 05d42ce8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  while (lVar4 = *param_1, lVar4 != 0) {
    do {
      lVar4 = FUN_04430018(lVar4,unaff_x20 & 0xffffffff,*unaff_x23);
      if (lVar4 == 0) goto LAB_05d42d98;
      iVar1 = *(int *)(lVar4 + 0x18) + -1;
      uVar3 = FUN_02fe9340(*unaff_x24,iVar1);
      if (unaff_x19 == 0) goto LAB_05d42d98;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_05d42d9c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(undefined8 *)(unaff_x26 + unaff_x20 * 8) = uVar3;
      thunk_FUN_03048534(unaff_x26 + unaff_x25,uVar3);
      if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_05d42d98;
      uVar3 = FUN_04430018(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_05d42d9c;
      FUN_05b1314c(uVar3,*(undefined8 *)(unaff_x26 + unaff_x20 * 8),iVar1,0);
      unaff_x20 = unaff_x20 + 1;
      unaff_x25 = unaff_x25 + 8;
      lVar2 = *unaff_x22;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *unaff_x22;
      }
      lVar4 = **(long **)(lVar2 + 0xb8);
      if (lVar4 == 0) goto LAB_05d42d98;
      if ((long)*(int *)(lVar4 + 0x18) <= (long)unaff_x20) {
        return;
      }
    } while (*(int *)(lVar2 + 0xe0) != 0);
    thunk_FUN_02fdcff0();
    param_1 = *(long **)(*unaff_x22 + 0xb8);
  }
LAB_05d42d98:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


