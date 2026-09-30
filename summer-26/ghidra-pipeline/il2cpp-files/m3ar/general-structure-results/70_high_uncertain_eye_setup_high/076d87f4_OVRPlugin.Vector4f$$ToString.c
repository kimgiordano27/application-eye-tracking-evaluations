/*
FUNCTION_NAME: OVRPlugin.Vector4f$$ToString
ENTRY_POINT: 076d87f4
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


void OVRPlugin_Vector4f__ToString
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar7;
  undefined4 uVar8;
  
code_r0x076d87f4:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
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
    lVar7 = *(long *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x24);
    }
    uVar5 = FUN_0858816c(lVar3,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(char *)(unaff_x28 + 0xc10) == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x28 + 0xc10) = 1;
      }
      puVar4 = *(undefined4 **)(*unaff_x22 + 0xb8);
      uVar8 = *puVar4;
      param_3 = puVar4[1];
      param_4 = puVar4[2];
    }
    else {
      if (lVar3 == 0) goto LAB_076d891c;
      uVar8 = FUN_08597cec(lVar3,0);
    }
    if (lVar7 == 0) {
LAB_076d891c:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_x21) {
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar7 = lVar7 + unaff_x21 * unaff_x27;
    unaff_x21 = unaff_x21 + 1;
    *(undefined4 *)(lVar7 + 0x20) = uVar8;
    *(undefined4 *)(lVar7 + 0x24) = param_3;
    *(undefined4 *)(lVar7 + 0x28) = param_4;
    param_1 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x25) goto code_r0x076d87f4;
        uVar5 = uVar5 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
  } while( true );
}


