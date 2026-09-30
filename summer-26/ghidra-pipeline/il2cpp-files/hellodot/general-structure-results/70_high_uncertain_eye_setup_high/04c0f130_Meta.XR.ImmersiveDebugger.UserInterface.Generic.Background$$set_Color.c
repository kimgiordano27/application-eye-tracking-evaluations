/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_Color
ENTRY_POINT: 04c0f130
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_Color
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(in_x10[4] + 2) * 0x10 + 0x138);
      goto LAB_04c0f158;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c0f158:
  plVar3 = (long *)(*(code *)*puVar2)();
  uVar4 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e5320,*(undefined8 *)(unaff_x19 + 10),0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar5 = *plVar3;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x14);
  lVar9 = *(long *)PTR_DAT_065e5318;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar7 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto LAB_04c0f1e8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_02ce0a7c(plVar3);
LAB_04c0f1e8:
  lVar5 = thunk_FUN_02d0bd98(*(undefined8 *)(lVar5 + 8),lVar9);
  lVar5 = (**(code **)(lVar5 + 8))(plVar3,uVar4,uVar8,lVar5);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar10 = FUN_04fa5130(lVar5,0,0);
  uVar6 = FUN_04e5bb90();
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar10;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_030c14b8(unaff_x19 + 2);
  }
  else {
    FUN_04e5bbac();
    if (*(long *)(unaff_x19 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(*(long *)(unaff_x19 + 0x12) + 0x30) = *(undefined8 *)(unaff_x19 + 0x14);
    lVar5 = thunk_FUN_02cea894(*unaff_x24);
    FUN_04f7383c(lVar5,0);
    if (*(long *)(unaff_x19 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = FUN_04c11ddc(*(long *)(unaff_x19 + 0x12),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar4 = FUN_05685b20(lVar9,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined8 *)(lVar5 + 0x18) = uVar4;
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e5308;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar5,*(undefined8 *)puVar1);
  }
  return;
}


