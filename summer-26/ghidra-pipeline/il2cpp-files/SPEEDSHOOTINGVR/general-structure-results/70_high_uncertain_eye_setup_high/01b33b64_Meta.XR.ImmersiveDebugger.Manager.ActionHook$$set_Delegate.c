/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook$$set_Delegate
ENTRY_POINT: 01b33b64
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionHook__set_Delegate(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000000;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000000 = *unaff_x20;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar5 + 0xc0));
  lVar5 = *(long *)(unaff_x21 + 0x20);
  uStack000000000000001c = uVar1;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0103c244(lVar5);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar5 + 0xc0),&stack0x0000001c);
  puVar3 = PTR_DAT_0234d9d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_01b33c28;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348();
LAB_01b33c28:
  iVar4 = (*(code *)*puVar6)();
  if (iVar4 == 0) {
    uStack0000000000000000 = unaff_x20[1];
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10));
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uStack000000000000001c = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244(lVar5);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x10),&stack0x0000001c);
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01b33ce8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0103c348();
LAB_01b33ce8:
    iVar4 = (*(code *)*puVar6)();
    if (iVar4 == 0) {
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01b33d50;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_0103c348();
LAB_01b33d50:
      (*(code *)*puVar6)();
    }
  }
  return;
}


