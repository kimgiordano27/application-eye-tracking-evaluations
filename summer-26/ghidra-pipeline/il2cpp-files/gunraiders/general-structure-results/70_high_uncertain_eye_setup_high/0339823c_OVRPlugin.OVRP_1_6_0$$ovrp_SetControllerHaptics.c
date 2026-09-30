/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 0339823c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  int unaff_w27;
  
  FUN_0339b734();
  puVar2 = Method_TMPro_FastAction<object,_Compute_DT_EventArgs>_Call__;
  puVar1 = PTR_DAT_04237768;
  if (unaff_w27 == 0) {
    plVar4 = (long *)thunk_FUN_01c495e4();
    if (plVar4 != (long *)0x0) {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033983d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar2,0);
LAB_033983d8:
      unaff_x20 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    return unaff_x20;
  }
  if (*(char *)(unaff_x24 + 200) == '\0') {
    if (*(char *)(unaff_x24 + 0xf0) == '\0') {
      lVar8 = *(long *)(unaff_x24 + 0x108);
      if (lVar8 == 0) {
        lVar8 = FUN_0338dc7c();
      }
      lVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
      if (lVar6 != 0) {
        if ((unaff_x20 != (long *)0x0) && (lVar7 = thunk_FUN_01c495e4(), lVar7 == 0)) {
          uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar11,0);
        }
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        *(long **)(lVar6 + 0x20) = unaff_x20;
        if (lVar8 != 0) {
          plVar4 = (long *)(**(code **)(lVar8 + 0x18))
                                     (*(undefined8 *)(lVar8 + 0x40),lVar6,
                                      *(undefined8 *)(lVar8 + 0x28));
          return plVar4;
        }
      }
    }
    else if (unaff_x20 != (long *)0x0) {
      lVar8 = *unaff_x20;
      uVar11 = *(undefined8 *)(unaff_x24 + 0xc0);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04237768) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_033983f8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_033983f8:
      uVar3 = (*(code *)*puVar5)();
      plVar4 = (long *)FUN_032f73c0(uVar11,uVar3,0);
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03398464;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498();
LAB_03398464:
      (*(code *)*puVar5)();
      return plVar4;
    }
  }
  else if ((unaff_x21 != 0) && (plVar4 = *(long **)(unaff_x21 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x428))(plVar4,*(undefined8 *)(*plVar4 + 0x430));
    plVar4 = (long *)FUN_0336e4e0();
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


