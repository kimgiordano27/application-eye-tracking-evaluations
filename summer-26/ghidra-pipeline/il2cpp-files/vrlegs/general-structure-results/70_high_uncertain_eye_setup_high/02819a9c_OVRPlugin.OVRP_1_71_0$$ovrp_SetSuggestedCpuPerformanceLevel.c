/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_SetSuggestedCpuPerformanceLevel
ENTRY_POINT: 02819a9c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_71_0__ovrp_SetSuggestedCpuPerformanceLevel(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x21;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *unaff_x25;
  uint uVar15;
  
  lVar6 = (**(code **)(*unaff_x21 + 0x878))();
  puVar4 = PTR_DAT_03cfe5f0;
  puVar3 = PTR_DAT_03cfe5e8;
  puVar2 = PTR_DAT_03cd8520;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if ((int)uVar1 < 1) {
      plVar14 = (long *)0x0;
    }
    else {
      uVar15 = 0;
      plVar12 = (long *)0x0;
      do {
        if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar13 = *(long **)(lVar6 + (long)(int)uVar15 * 8 + 0x20);
        if ((plVar13 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar13 + 0x2c8))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x2d0)),
           plVar7 == (long *)0x0)) goto LAB_02819c98;
        lVar9 = *plVar7;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_02819b68;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar3,0);
LAB_02819b68:
        iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        plVar14 = plVar12;
        if (iVar5 == 1) {
          lVar9 = *plVar7;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_02819bc8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar4,0);
LAB_02819bc8:
          plVar7 = (long *)(*(code *)*puVar8)(plVar7,0,puVar8[1]);
          if (plVar7 == (long *)0x0) goto LAB_02819c98;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01a58e78(*unaff_x25);
          }
          uVar10 = FUN_02786d28(param_1,plVar7,0);
          if ((uVar10 & 1) != 0) {
            return plVar13;
          }
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar10 = FUN_0267bc0c(plVar12,0,0);
          if ((uVar10 & 1) != 0) {
            if (plVar7 == (long *)0x0) goto LAB_02819c98;
            uVar10 = (**(code **)(*plVar7 + 0x388))(plVar7);
            plVar14 = plVar13;
            if ((uVar10 & 1) == 0) {
              plVar14 = plVar12;
            }
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar15 = uVar15 + 1;
        plVar12 = plVar14;
      } while ((int)uVar15 < (int)uVar1);
    }
    return plVar14;
  }
LAB_02819c98:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


