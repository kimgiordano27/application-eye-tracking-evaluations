/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_CreateSpatialAnchor
ENTRY_POINT: 02819d14
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_72_0__ovrp_CreateSpatialAnchor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int unaff_w19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x518));
  *(undefined1 *)(unaff_x23 + 0x392) = 1;
  puVar3 = PTR_DAT_03cda358;
  puVar2 = PTR_DAT_03cd85f0;
  puVar1 = PTR_DAT_03ccbd08;
  plVar6 = (long *)thunk_FUN_01a89e68(*unaff_x22);
  Animancer_AnimancerState__OnSetIsPlaying(plVar6,*unaff_x21);
  while (unaff_x20 != (long *)0x0) {
    lVar10 = *unaff_x20;
    lVar9 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_02819da4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(unaff_x20,lVar9,1);
LAB_02819da4:
    uVar4 = (*(code *)*puVar7)(unaff_x20,puVar7[1]);
    if (plVar6 == (long *)0x0) break;
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02819e08;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar6,lVar9,2);
LAB_02819e08:
    (*(code *)*puVar7)(plVar6,uVar4,puVar7[1]);
    lVar10 = *plVar6;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02819e64;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar6,lVar9,0);
LAB_02819e64:
    iVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (iVar5 == unaff_w19) {
      return plVar6;
    }
    lVar10 = *unaff_x20;
    lVar9 = *(long *)puVar1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_02819ec8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(unaff_x20,lVar9,1);
LAB_02819ec8:
    iVar5 = (*(code *)*puVar7)(unaff_x20,puVar7[1]);
    if (iVar5 == 0) {
      return plVar6;
    }
    lVar10 = *unaff_x20;
    lVar9 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02819f24;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(unaff_x20,lVar9,0);
LAB_02819f24:
    uVar8 = (*(code *)*puVar7)(unaff_x20,0,puVar7[1]);
    unaff_x20 = (long *)thunk_FUN_01a89d6c(uVar8,*(undefined8 *)puVar2);
    if (unaff_x20 == (long *)0x0) {
      return plVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


