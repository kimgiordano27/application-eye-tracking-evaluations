/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_IsInsightPassthroughSupported
ENTRY_POINT: 02819a20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_71_0__ovrp_IsInsightPassthroughSupported(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long *unaff_x21;
  long *plVar14;
  undefined8 *unaff_x23;
  long *plVar15;
  long *unaff_x25;
  uint uVar16;
  
  thunk_FUN_01a58e78();
  plVar6 = (long *)FUN_0277b678();
  lVar7 = FUN_01ab6a94(*unaff_x23,1);
  if (lVar7 != 0) {
    if ((unaff_x20 != 0) && (lVar8 = thunk_FUN_01a89d6c(), lVar8 == 0)) {
      uVar9 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar9,0);
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_02819c9c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(long *)(lVar7 + 0x20) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (((plVar6 != (long *)0x0) &&
        (uVar9 = (**(code **)(*plVar6 + 0xc08))(plVar6,lVar7,*(undefined8 *)(*plVar6 + 0xc10)),
        unaff_x21 != (long *)0x0)) &&
       (lVar7 = (**(code **)(*unaff_x21 + 0x878))(), puVar4 = PTR_DAT_03cfe5f0,
       puVar3 = PTR_DAT_03cfe5e8, puVar2 = PTR_DAT_03cd8520, lVar7 != 0)) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if ((int)uVar1 < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        uVar16 = 0;
        plVar14 = (long *)0x0;
        do {
          if (uVar1 <= uVar16) goto LAB_02819c9c;
          plVar15 = *(long **)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
          if ((plVar15 == (long *)0x0) ||
             (plVar10 = (long *)(**(code **)(*plVar15 + 0x2c8))
                                          (plVar15,*(undefined8 *)(*plVar15 + 0x2d0)),
             plVar10 == (long *)0x0)) goto LAB_02819c98;
          lVar8 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02819b68;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar3,0);
LAB_02819b68:
          iVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          plVar6 = plVar14;
          if (iVar5 == 1) {
            lVar8 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                  puVar11 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02819bc8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar11 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar4,0);
LAB_02819bc8:
            plVar10 = (long *)(*(code *)*puVar11)(plVar10,0,puVar11[1]);
            if (plVar10 == (long *)0x0) goto LAB_02819c98;
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01a58e78(*unaff_x25);
            }
            uVar12 = FUN_02786d28(uVar9,plVar10,0);
            if ((uVar12 & 1) != 0) {
              return plVar15;
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_0267bc0c(plVar14,0,0);
            if ((uVar12 & 1) != 0) {
              if (plVar10 == (long *)0x0) goto LAB_02819c98;
              uVar12 = (**(code **)(*plVar10 + 0x388))(plVar10);
              plVar6 = plVar15;
              if ((uVar12 & 1) == 0) {
                plVar6 = plVar14;
              }
            }
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar16 = uVar16 + 1;
          plVar14 = plVar6;
        } while ((int)uVar16 < (int)uVar1);
      }
      return plVar6;
    }
  }
LAB_02819c98:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


