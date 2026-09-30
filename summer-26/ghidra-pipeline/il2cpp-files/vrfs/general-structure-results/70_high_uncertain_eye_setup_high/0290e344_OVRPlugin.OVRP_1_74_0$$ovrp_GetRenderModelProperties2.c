/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetRenderModelProperties2
ENTRY_POINT: 0290e344
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetRenderModelProperties2(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *unaff_x25;
  
code_r0x0290e344:
  do {
    puVar1 = (undefined8 *)FUN_015c2a80(unaff_x25,param_2,0);
    while( true ) {
      (*(code *)*puVar1)(unaff_x25,unaff_w24,puVar1[1]);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1)
          == 0) {
        FUN_015c2790();
      }
      lVar2 = thunk_FUN_015d01b0();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar4,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
      thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,lVar2);
      unaff_w24 = unaff_w24 + 1;
      unaff_w19 = unaff_w19 + 1;
      if (unaff_w24 == unaff_w23) {
        return;
      }
      unaff_x25 = *(long **)(unaff_x21 + 0x10);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(param_2 + 0x132) & 1) == 0) {
        param_2 = FUN_015c2790(param_2);
      }
      lVar2 = *unaff_x25;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar5 == 0) break;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      while (*(long *)(piVar6 + -2) != param_2) {
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
        if (uVar5 == 0) goto code_r0x0290e344;
      }
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
    }
  } while( true );
}


