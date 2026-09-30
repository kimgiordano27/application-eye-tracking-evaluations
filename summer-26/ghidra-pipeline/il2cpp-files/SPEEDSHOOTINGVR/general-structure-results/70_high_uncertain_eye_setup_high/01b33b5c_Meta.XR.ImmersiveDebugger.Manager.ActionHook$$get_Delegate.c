/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook$$get_Delegate
ENTRY_POINT: 01b33b5c
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


void Meta_XR_ImmersiveDebugger_Manager_ActionHook__get_Delegate(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  bool in_ZR;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x21;
  undefined4 uStack000000000000001c;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  puVar5 = (undefined4 *)thunk_FUN_01040230();
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  lVar6 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar6 + 0xc0));
  lVar6 = *(long *)(unaff_x21 + 0x20);
  uStack000000000000001c = uVar1;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0103c244(lVar6);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar6 + 0xc0),&stack0x0000001c);
  puVar3 = PTR_DAT_0234d9d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01b33c28;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b33c28:
  iVar4 = (*(code *)*puVar7)();
  if (iVar4 == 0) {
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10));
    lVar6 = *(long *)(unaff_x21 + 0x20);
    uStack000000000000001c = uVar2;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0103c244(lVar6);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x0000001c);
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01b33ce8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b33ce8:
    iVar4 = (*(code *)*puVar7)();
    if (iVar4 == 0) {
      lVar6 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01b33d50;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348();
LAB_01b33d50:
      (*(code *)*puVar7)();
    }
  }
  return;
}


