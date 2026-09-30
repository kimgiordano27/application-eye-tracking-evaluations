/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$MoveNext
ENTRY_POINT: 08a81434
PROGRAM: Hyper-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__MoveNext
               (code *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  undefined4 uVar6;
  long unaff_x20;
  long *plVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  (*param_1)();
  FUN_08997474();
  if ((*(long *)(unaff_x20 + 0x148) != 0) && (*(int *)(*(long *)(unaff_x20 + 0x148) + 0x10) == 2)) {
    plVar7 = *(long **)(unaff_x20 + 0x10);
    *(undefined1 *)(unaff_x20 + 400) = 1;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x2f) * 0x10 + 0x138);
          goto LAB_08a814d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac4c9f0,0x2f);
LAB_08a814d4:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac4e5c8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
          goto LAB_08a81540;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac4e5c8,0xc);
LAB_08a81540:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    FUN_08997474();
  }
  uVar4 = FUN_08a7dc5c();
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    *(undefined1 *)(unaff_x20 + 400) = 1;
    FUN_089adadc();
    _in_stack_00000010 = FUN_089ad9bc();
    if (*(int *)(*(long *)PTR_DAT_0ac42dc8 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac42dc8);
    }
    _in_stack_00000020 = FUN_08df3b4c(&stack0x00000010,0);
    if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac3f8b8);
    }
    uVar4 = FUN_086abadc(&stack0x00000020,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0xc) = _in_stack_00000020;
      thunk_FUN_049ee3d8(unaff_x19 + 0xc,0);
      FUN_053c24c8(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_0ac3f8b8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_086abc1c(&stack0x00000020,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(unaff_x20 + 0x88);
    if (lVar3 == 0) {
      uVar6 = 1;
    }
    else {
      uVar6 = 1;
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),1,*(undefined8 *)(lVar3 + 0x28));
    }
  }
  puVar1 = PTR_DAT_0ac4f028;
  *unaff_x19 = 0xfffffffe;
  FUN_0812771c(unaff_x19 + 2,uVar6,*(undefined8 *)puVar1);
  return;
}


