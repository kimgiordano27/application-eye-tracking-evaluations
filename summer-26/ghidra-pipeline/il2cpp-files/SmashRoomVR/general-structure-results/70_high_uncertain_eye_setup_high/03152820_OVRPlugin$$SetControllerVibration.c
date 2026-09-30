/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 03152820
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03152ae4) */

uint OVRPlugin__SetControllerVibration(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x20;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xf90));
  thunk_FUN_01ad9084(PTR_DAT_03d80248);
  thunk_FUN_01ad9084(PTR_DAT_03d80250);
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
  thunk_FUN_01ad9084(PTR_DAT_03d7f538);
  *(undefined1 *)(unaff_x19 + 0xfeb) = 1;
  uVar7 = FUN_0391b7d0();
  if ((uVar7 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if ((*(long *)(unaff_x20 + 0x40) == 0) ||
       (plVar12 = *(long **)(*(long *)(unaff_x20 + 0x40) + 0x10), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar9 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d80248) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_031528dc;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d80248,0);
LAB_031528dc:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar5 = PTR_DAT_03d80250;
    puVar4 = PTR_DAT_03d7f538;
    puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03152954;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar3,0);
LAB_03152954:
      uVar6 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if ((uVar6 & 1) == 0) break;
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_031529b4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar5,0);
LAB_031529b4:
      lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      plVar13 = *(long **)(unaff_x20 + 0x38);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar10 = *plVar13;
      uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar1 = *(undefined4 *)(lVar9 + 0x10);
      uVar2 = *(undefined4 *)(lVar9 + 0x14);
      uVar15 = *(undefined8 *)(lVar9 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03152a24;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar4,0);
LAB_03152a24:
      uVar7 = (*(code *)*puVar8)(plVar13,uVar14,uVar2,uVar1,uVar15,puVar8[1]);
    } while ((uVar7 & 1) != 0);
    uVar6 = uVar6 ^ 1;
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03152aa4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ae9f78(plVar12,*(long *)
                                     Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_03152aa4:
      (*(code *)*puVar8)(plVar12,puVar8[1]);
    }
  }
  return uVar6 & 1;
}


