/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Hook$$.ctor
ENTRY_POINT: 01b33b74
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


void Meta_XR_ImmersiveDebugger_Manager_Hook___ctor(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x21;
  
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar3 + 0xc0));
  lVar3 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar3 + 0xc0),&stack0x0000001c);
  puVar1 = PTR_DAT_0234d9d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar3 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01b33c28;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b33c28:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    lVar3 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x0000001c);
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01b33ce8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b33ce8:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_01b33d50;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b33d50:
      (*(code *)*puVar4)();
    }
  }
  return;
}


