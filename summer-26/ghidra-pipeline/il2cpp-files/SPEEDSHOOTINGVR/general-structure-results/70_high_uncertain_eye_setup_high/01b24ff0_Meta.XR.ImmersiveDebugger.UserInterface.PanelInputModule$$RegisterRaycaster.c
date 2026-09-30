/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$RegisterRaycaster
ENTRY_POINT: 01b24ff0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster(long param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x22;
  byte in_stack_00000008;
  undefined1 uStack000000000000000c;
  
  if (*(long *)(param_1 + 0x40) != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  pbVar3 = (byte *)thunk_FUN_01040230();
  uStack000000000000000c = *unaff_x22;
  bVar1 = *pbVar3;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0),&stack0x0000000c);
  in_stack_00000008 = bVar1 & 1;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000008);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0234d9c0) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01b250c0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_0103c348();
LAB_01b250c0:
  uVar2 = (*(code *)*puVar5)();
  return uVar2 & 1;
}


