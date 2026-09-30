/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 056735dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_EyeTextureArrayEnabled(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined8 unaff_x23;
  undefined4 unaff_w24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  uint unaff_w28;
  
  do {
    thunk_FUN_02df485c(param_1);
    do {
                    /* try { // try from 056735e8 to 057735f7 has its CatchHandler @ 0567383c */
                    /* try { // try from 056735f8 to 05773857 has its CatchHandler @ 056734c0 */
      iVar1 = FUN_0564aaa8(unaff_w22,unaff_x23,unaff_x20 + 0x44,&stack0x0000000c,0);
      if (iVar1 == 0) {
        if (*(int *)(unaff_x20 + 0x1a0) == -1) {
          *(undefined4 *)(unaff_x20 + 0x1a0) = unaff_w24;
        }
        lVar2 = *(long *)(*unaff_x27 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02dcfd18();
        }
        if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05686fc4();
      }
      else {
        unaff_w28 = 0;
      }
      unaff_x25 = unaff_x25 + 1;
      if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x25) {
        return unaff_w28 & 1;
      }
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      unaff_w22 = *(undefined4 *)(unaff_x20 + 0xc0);
      unaff_x23 = FUN_05362cb4();
      param_1 = *unaff_x26;
    } while (*(int *)(param_1 + 0xe4) != 0);
  } while( true );
}


