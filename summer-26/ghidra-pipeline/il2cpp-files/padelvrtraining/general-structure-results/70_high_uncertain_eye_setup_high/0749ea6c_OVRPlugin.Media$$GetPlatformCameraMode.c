/*
FUNCTION_NAME: OVRPlugin.Media$$GetPlatformCameraMode
ENTRY_POINT: 0749ea6c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__GetPlatformCameraMode(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
code_r0x0749ea6c:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_0749ea5c;
LAB_0749ea74:
  puVar1 = (undefined8 *)FUN_03d8f370(unaff_x20,param_3,1);
  do {
    (*(code *)*puVar1)(unaff_x20,unaff_x23 + 0x30,puVar1[1]);
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 0x1a) {
      return 1;
    }
    lVar2 = *(long *)(unaff_x19 + 0xa0);
    if (lVar2 == 0) {
LAB_0749eac4:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar2 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    unaff_x23 = *(long *)(unaff_x19 + 0x80);
    if (unaff_x23 == 0) goto LAB_0749eac4;
    unaff_x20 = *(long **)(lVar2 + (long)(int)unaff_w21 * 8 + 0x20);
    if (unaff_x20 == (long *)0x0) goto LAB_0749eac4;
    param_1 = *unaff_x20;
    param_3 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_0749ea74;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0749ea5c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x0749ea6c;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
  } while( true );
}


