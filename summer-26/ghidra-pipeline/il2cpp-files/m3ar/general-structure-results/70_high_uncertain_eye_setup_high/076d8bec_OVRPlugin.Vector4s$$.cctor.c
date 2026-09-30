/*
FUNCTION_NAME: OVRPlugin.Vector4s$$.cctor
ENTRY_POINT: 076d8bec
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4s___cctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  
code_r0x076d8bec:
  puVar2 = (undefined8 *)FUN_0406ae20();
  do {
    lVar3 = (*(code *)*puVar2)();
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x25);
    }
    uVar4 = FUN_08589e5c(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (lVar5 == 0) {
LAB_076d8c94:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (lVar3 == 0) goto LAB_076d8c94;
      lVar5 = lVar5 + unaff_x21 * unaff_x26;
      FUN_08597db0(*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                   *(undefined4 *)(lVar5 + 0x28),lVar3,0);
    }
    unaff_x21 = unaff_x21 + 1;
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076d8ba8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076d8ba8:
    iVar1 = (*(code *)*puVar2)();
    if ((long)iVar1 <= (long)unaff_x21) {
      return;
    }
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 == 0) goto code_r0x076d8bec;
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *unaff_x24) {
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 4;
      if (uVar4 == 0) goto code_r0x076d8bec;
    }
    puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
}


