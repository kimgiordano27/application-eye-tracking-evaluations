/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Values$$Setup
ENTRY_POINT: 04da5cd4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Values__Setup(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long unaff_x22;
  undefined8 unaff_x23;
  
  puVar4 = (undefined8 *)thunk_FUN_02f66c64();
  *puVar4 = unaff_x23;
  FUN_050032cc();
  puVar2 = PTR_DAT_067ce588;
  puVar1 = PTR_DAT_067ce580;
  if (unaff_x22 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar6 = thunk_FUN_02f45270();
    uVar9 = thunk_FUN_02f6ef30(PTR_DAT_067ce550);
    FUN_0504ee1c(uVar6,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6);
  }
  if (unaff_x20 != 0) {
    FUN_02f08788(*(undefined8 *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80),8);
    plVar5 = (long *)thunk_FUN_02f66c64();
    *plVar5 = unaff_x22;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar6 = FUN_050a94a4();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar1);
    }
    uVar6 = FUN_050888f4(uVar6,0);
    FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0x20,8);
    puVar4 = (undefined8 *)thunk_FUN_02f66c64();
    *puVar4 = uVar6;
    puVar1 = PTR_DAT_067ce548;
    if (unaff_x21 == 0) {
      if (*(int *)(*(long *)PTR_DAT_067ce548 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      if (DAT_06bb7d9f == '\0') {
        FUN_02f08768(PTR_DAT_067ce548);
        DAT_06bb7d9f = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar7 = *(long *)puVar1;
      }
      unaff_x21 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    }
    puVar1 = PTR_DAT_067ce570;
    FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0x40,8);
    plVar5 = (long *)thunk_FUN_02f66c64();
    *plVar5 = unaff_x21;
    thunk_FUN_02f66c64();
    uVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8))();
    FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0xa0,8);
    puVar4 = (undefined8 *)thunk_FUN_02f66c64();
    *puVar4 = uVar6;
    plVar5 = (long *)thunk_FUN_02f66c64();
    if (*plVar5 == 0) {
      FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0xc0,1);
      puVar8 = (undefined1 *)thunk_FUN_02f66c64();
      *puVar8 = 1;
    }
    puVar4 = (undefined8 *)thunk_FUN_02f66c64();
    uVar6 = *puVar4;
    FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0x80,8);
    puVar4 = (undefined8 *)thunk_FUN_02f66c64();
    *puVar4 = uVar6;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar10 = *(long *)PTR_DAT_067ce568;
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02f41e9c();
    }
    plVar5 = (long *)**(long **)(lVar7 + 0xb8);
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,0x1000,*(undefined8 *)(*plVar5 + 0x180));
      FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0x140,8);
      puVar4 = (undefined8 *)thunk_FUN_02f66c64();
      puVar1 = PTR_DAT_067ce590;
      *puVar4 = uVar6;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      iVar3 = SystemNative_GetReadDirRBufferSize(0);
      if (iVar3 < 1) {
        uVar6 = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_067ce578 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar10 = *(long *)PTR_DAT_067ce560;
        lVar7 = *(long *)(lVar10 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar7 = *(long *)(lVar10 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02f41e9c();
        }
        plVar5 = (long *)**(long **)(lVar7 + 0xb8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,iVar3,*(undefined8 *)(*plVar5 + 0x180));
      }
      FUN_02f08788(*(long *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80) + 0x160,8);
      puVar4 = (undefined8 *)thunk_FUN_02f66c64();
      *puVar4 = uVar6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


