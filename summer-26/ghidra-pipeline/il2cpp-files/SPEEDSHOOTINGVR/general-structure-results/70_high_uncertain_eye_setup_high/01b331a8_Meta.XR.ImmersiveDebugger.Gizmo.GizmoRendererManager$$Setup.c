/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Setup
ENTRY_POINT: 01b331a8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Setup(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bc48);
    FUN_00fdc2e4(PTR_DAT_0234d9f0);
    FUN_00fdc2e4(PTR_DAT_0234d4e0);
    *(undefined1 *)(unaff_x19 + 0x774) = 1;
  }
  lVar2 = FUN_00fdc388(*unaff_x22,6);
  lVar4 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  uVar3 = FUN_01d47d28(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x118));
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      thunk_FUN_0106e12c((undefined8 *)(lVar2 + 0x20),uVar3);
      puVar1 = PTR_DAT_0234d9f0;
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_0234d9f0;
        thunk_FUN_0106e12c();
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        uVar3 = FUN_01d47d28(param_2 + 4,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x120));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar3;
          thunk_FUN_0106e12c((undefined8 *)(lVar2 + 0x30),uVar3);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)puVar1;
            thunk_FUN_0106e12c();
            lVar4 = *(long *)(unaff_x21 + 0x20);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0103c244();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_0103c244();
            }
            in_stack_00000010 = 0xffffffffffffffff;
            in_stack_00000018 = *(undefined4 *)(param_2 + 8);
            in_stack_00000008 = lVar4;
            uVar3 = FUN_01d7bfd8(&stack0x00000008,0);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = uVar3;
              thunk_FUN_0106e12c((undefined8 *)(lVar2 + 0x40),uVar3);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_0234d4e0;
                thunk_FUN_0106e12c();
                FUN_01c515a0(lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


