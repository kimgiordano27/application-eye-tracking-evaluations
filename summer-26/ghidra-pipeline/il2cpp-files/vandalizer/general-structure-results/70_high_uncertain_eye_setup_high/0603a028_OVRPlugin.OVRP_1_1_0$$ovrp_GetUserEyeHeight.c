/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 0603a028
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  
code_r0x0603a028:
  puVar1 = (undefined8 *)(param_1 + 0x138);
  while( true ) {
    (*(code *)*puVar1)(unaff_x20,unaff_x23 + 0x30,puVar1[1]);
    unaff_w21 = unaff_w21 + 1;
    if (unaff_w21 == 0x1a) {
      return 1;
    }
    lVar2 = *(long *)(unaff_x19 + 0xa0);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    unaff_x23 = *(long *)(unaff_x19 + 0x80);
    if (unaff_x23 == 0) break;
    unaff_x20 = *(long **)(lVar2 + (long)(int)unaff_w21 * 8 + 0x20);
    if (unaff_x20 == (long *)0x0) break;
    param_1 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          param_1 = param_1 + (long)(*piVar4 + 1) * 0x10;
          goto code_r0x0603a028;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8(unaff_x20,*unaff_x22,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


