/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 076d8c34
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf__ToString(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  
  do {
    uVar3 = FUN_08589e5c(param_1,0,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 == 0) {
LAB_076d8c94:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 076d8c98 to 077d8caf has its CatchHandler @ 076d8d74 */
        FUN_04031894();
      }
      if (unaff_x22 == 0) goto LAB_076d8c94;
      lVar4 = lVar4 + unaff_x21 * unaff_x26;
      FUN_08597db0(*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                   *(undefined4 *)(lVar4 + 0x28),unaff_x22,0);
    }
    unaff_x21 = unaff_x21 + 1;
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076d8ba8;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076d8ba8:
    iVar1 = (*(code *)*puVar2)();
    if ((long)iVar1 <= (long)unaff_x21) {
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076d8b08 with catch @ 076d8c80
                        */
      return;
    }
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_076d8c08;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076d8c08:
    param_1 = (*(code *)*puVar2)();
    unaff_x22 = param_1;
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x25);
    }
  } while( true );
}


