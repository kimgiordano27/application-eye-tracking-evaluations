/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_SetHandSkeletonVersion
ENTRY_POINT: 01dbf164
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_103_0__ovrp_SetHandSkeletonVersion(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  
  do {
    lVar1 = FUN_018985f8();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_0103ffe0(lVar1,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0))
    goto LAB_01dbf254;
    if (*(uint *)(unaff_x21 + 3) <= unaff_x22) goto LAB_01dbf250;
    *unaff_x23 = lVar1;
    thunk_FUN_0106e12c(unaff_x23,lVar1);
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 1;
  } while ((long)unaff_x22 < (long)((int)unaff_x21[3] + -1));
  lVar1 = thunk_FUN_0103ffe0();
  if (lVar1 != 0) {
    if ((int)unaff_x21[3] != 0) {
      *(undefined8 *)((long)unaff_x21 + ((unaff_x21[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20) =
           unaff_x19;
      thunk_FUN_0106e12c();
      uVar3 = thunk_FUN_010400dc(*unaff_x25);
      FUN_01c65690();
      return uVar3;
    }
LAB_01dbf250:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
LAB_01dbf254:
  uVar3 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,0);
}


