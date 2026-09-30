/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 04da16f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState
               (undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *plVar9;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x29;
  
  lVar2 = FUN_02f41e9c(param_2);
  lVar5 = *unaff_x22;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        lVar2 = lVar5 + (long)*piVar8 * 0x10 + 0x138;
        goto LAB_04da1748;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar2 = FUN_02f421d0();
LAB_04da1748:
  lVar2 = *(long *)(lVar2 + 8);
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8));
  lVar2 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  puVar4 = *(undefined8 **)(lVar2 + 0x58);
  uVar3 = *puVar4;
  if (-1 < *(int *)(*(long *)(lVar2 + 0x18) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  pcVar6 = (code *)puVar4[2];
  *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
  (*pcVar6)(uVar3);
  puVar4 = (undefined8 *)thunk_FUN_02f66c64();
  plVar9 = (long *)*puVar4;
  if (plVar9 != (long *)0x0) {
    lVar2 = **(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_04da182c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar2,3);
LAB_04da182c:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
    plVar9 = (long *)thunk_FUN_02f66c64();
    if (*plVar9 != 0) {
      plVar9 = (long *)FUN_0623c008(*plVar9,0);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_067cbdd0 + 0x130);
        if (((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
            (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
             *(long *)PTR_DAT_067cbdd0)) &&
           (plVar9 = (long *)FUN_06389a0c(plVar9,0), plVar9 != (long *)0x0)) {
          (**(code **)(*plVar9 + 0x178))(plVar9,1,*(undefined8 *)(*plVar9 + 0x180));
        }
      }
      if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_04da18f4;
    }
  }
  if (*(long *)(unaff_x24 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_04da18f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


