/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_Media_IsCastingToRemoteClient
ENTRY_POINT: 03167cd4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_66_0__ovrp_Media_IsCastingToRemoteClient
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  int *piVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 uVar4;
  
  do {
    if (in_x9 != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == param_6) {
          puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 1) * 0x10 + 0x138);
          goto LAB_03167d18;
        }
        in_x9 = in_x9 - 1;
        piVar3 = piVar3 + 4;
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78(unaff_x22,param_6,1);
LAB_03167d18:
    uVar4 = (*(code *)*puVar1)(unaff_x22,unaff_x21 & 0xffffffff,puVar1[1]);
    if (unaff_x26 == 0) goto LAB_03167d78;
    if (*(uint *)(unaff_x26 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar2 = unaff_x26 + unaff_x21 * unaff_x25;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar2 + 0x20) = uVar4;
    *(undefined4 *)(lVar2 + 0x24) = param_3;
    *(undefined4 *)(lVar2 + 0x28) = param_4;
    if (unaff_x21 == unaff_x24) {
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_038fd298(*(long *)(unaff_x19 + 0x28),*unaff_x20,0);
        return;
      }
LAB_03167d78:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (unaff_x22 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x138), unaff_x22 == (long *)0x0))
    goto LAB_03167d78;
    param_1 = *unaff_x22;
    unaff_x26 = *(long *)(unaff_x19 + 0x30);
    param_6 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
}


