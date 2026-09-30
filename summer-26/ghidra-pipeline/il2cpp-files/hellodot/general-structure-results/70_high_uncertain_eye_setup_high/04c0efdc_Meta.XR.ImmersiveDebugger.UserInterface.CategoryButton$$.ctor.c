/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.CategoryButton$$.ctor
ENTRY_POINT: 04c0efdc
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_CategoryButton___ctor(code *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x23;
  long lVar9;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined1 auVar10 [16];
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar2 = (*param_1)();
  *(undefined8 *)(unaff_x19 + 0x12) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x14) = *(undefined8 *)(unaff_x20 + 0x20);
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_04c0f048;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x23,2);
LAB_04c0f048:
  lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if (lVar4 != 0) {
    uVar2 = FUN_04dc07bc(0,0x39,8,0);
    plVar7 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce578);
    FUN_04f418d8(plVar7,0);
    uVar5 = FUN_04f2e990(uVar2,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar5,uVar5 & 0xffffffff);
    }
    uStack000000000000001c =
         (**(code **)(*plVar7 + 0x1a8))(plVar7,uVar5 & 0xffffffff,*(undefined8 *)(*plVar7 + 0x1b0));
    uStack0000000000000018 = 8;
    uVar2 = FUN_04f2e660(&stack0x00000018,0);
    uVar2 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065d75f8,uVar2,0);
    uVar2 = FUN_04f2e6f4((long)&stack0x00000018 + 4,uVar2,0);
    uVar2 = FUN_04db00f0(*(undefined8 *)(unaff_x19 + 0x14),uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x14) = uVar2;
    plVar7 = *(long **)(unaff_x20 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_04c0f158;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x23,2);
LAB_04c0f158:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    uVar2 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e5320,*(undefined8 *)(unaff_x19 + 10),0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x14);
    lVar9 = *(long *)PTR_DAT_065e5318;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(lVar9 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar6 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
          goto LAB_04c0f1e8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar4 = FUN_02ce0a7c(plVar7);
LAB_04c0f1e8:
    lVar4 = thunk_FUN_02d0bd98(*(undefined8 *)(lVar4 + 8),lVar9);
    lVar4 = (**(code **)(lVar4 + 8))(plVar7,uVar2,uVar8,lVar4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    auVar10 = FUN_04fa5130(lVar4,0,0);
    uVar5 = FUN_04e5bb90();
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar10;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_030c14b8(unaff_x19 + 2);
      return;
    }
    FUN_04e5bbac();
  }
  if (*(long *)(unaff_x19 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(*(long *)(unaff_x19 + 0x12) + 0x30) = *(undefined8 *)(unaff_x19 + 0x14);
  lVar4 = thunk_FUN_02cea894(*unaff_x24);
  FUN_04f7383c(lVar4,0);
  if (*(long *)(unaff_x19 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar9 = FUN_04c11ddc(*(long *)(unaff_x19 + 0x12),0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar2 = FUN_05685b20(lVar9,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) = uVar2;
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_065e5308;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04266690(unaff_x19 + 2,lVar4,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


