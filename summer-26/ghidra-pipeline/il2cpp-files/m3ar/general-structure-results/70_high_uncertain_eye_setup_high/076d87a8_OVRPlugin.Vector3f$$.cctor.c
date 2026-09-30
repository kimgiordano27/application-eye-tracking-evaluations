/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 076d87a8
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


void OVRPlugin_Vector3f___cctor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long lVar8;
  undefined4 uVar9;
  
  plVar7 = *(long **)(unaff_x22 + 0x568);
  *(undefined8 *)(unaff_x19 + 0x30) = param_4;
  do {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076d8800;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076d8800:
    iVar1 = (*(code *)*puVar2)();
    if ((long)iVar1 <= (long)unaff_x21) {
      return;
    }
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076d8860;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_076d8860:
    lVar3 = (*(code *)*puVar2)();
    lVar8 = *(long *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x24);
    }
    uVar5 = FUN_0858816c(lVar3,0,0);
    if ((uVar5 & 1) == 0) {
      if (DAT_09539c10 == '\0') {
        FUN_0403162c(plVar7);
        DAT_09539c10 = '\x01';
      }
      puVar4 = *(undefined4 **)(*plVar7 + 0xb8);
      uVar9 = *puVar4;
      param_2 = puVar4[1];
      param_3 = puVar4[2];
    }
    else {
      if (lVar3 == 0) goto LAB_076d891c;
      uVar9 = FUN_08597cec(lVar3,0);
    }
    if (lVar8 == 0) {
LAB_076d891c:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar8 = lVar8 + unaff_x21 * unaff_x27;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(undefined4 *)(lVar8 + 0x24) = param_2;
    *(undefined4 *)(lVar8 + 0x28) = param_3;
  } while( true );
}


