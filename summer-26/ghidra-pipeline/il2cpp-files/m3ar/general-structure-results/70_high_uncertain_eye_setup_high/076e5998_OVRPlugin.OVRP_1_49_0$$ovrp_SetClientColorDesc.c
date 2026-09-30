/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_SetClientColorDesc
ENTRY_POINT: 076e5998
PROGRAM: m3ar-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_SetClientColorDesc
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  int *piVar3;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined4 uVar4;
  
  do {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == param_6) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
        goto LAB_076e59d8;
      }
      in_x9 = in_x9 - 1;
      piVar3 = piVar3 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_0406ae20(unaff_x21,param_6,1);
LAB_076e59d8:
      uVar4 = (*(code *)*puVar1)(unaff_x21,unaff_x20 & 0xffffffff,puVar1[1]);
      if (unaff_x25 == 0) {
LAB_076e5a34:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(unaff_x25 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      lVar2 = unaff_x25 + unaff_x20 * unaff_x24;
      unaff_x20 = unaff_x20 + 1;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = param_3;
      *(undefined4 *)(lVar2 + 0x28) = param_4;
      if (unaff_x20 == unaff_x23) {
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          FUN_0854a1a8(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),0);
          return;
        }
        goto LAB_076e5a34;
      }
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (unaff_x21 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x138), unaff_x21 == (long *)0x0))
      goto LAB_076e5a34;
      param_1 = *unaff_x21;
      unaff_x25 = *(long *)(unaff_x19 + 0x30);
      param_6 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


