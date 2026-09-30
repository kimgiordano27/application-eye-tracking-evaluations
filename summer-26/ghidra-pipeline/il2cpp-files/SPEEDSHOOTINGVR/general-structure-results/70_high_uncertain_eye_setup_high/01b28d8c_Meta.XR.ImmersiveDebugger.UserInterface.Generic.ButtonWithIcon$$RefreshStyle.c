/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$RefreshStyle
ENTRY_POINT: 01b28d8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__RefreshStyle
               (undefined4 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((DAT_0247c74f & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234d9c0);
    DAT_0247c74f = 1;
  }
  uStack000000000000000c = *param_1;
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  uVar5 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0),&stack0x0000000c);
  puVar1 = PTR_DAT_0234d9c0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234d9c0) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_01b28e44;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348(param_2,*(long *)PTR_DAT_0234d9c0,1);
LAB_01b28e44:
  uVar2 = (*(code *)*puVar6)(param_2,uVar5,puVar6[1]);
  in_stack_00000008 = param_1[1];
  lVar4 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
  lVar4 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_01b28edc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_0103c348(param_2,*(long *)puVar1,1);
LAB_01b28edc:
  uVar3 = (*(code *)*puVar6)(param_2,uVar5,puVar6[1]);
  FUN_01d66c40(uVar2,uVar3,0);
  return;
}


