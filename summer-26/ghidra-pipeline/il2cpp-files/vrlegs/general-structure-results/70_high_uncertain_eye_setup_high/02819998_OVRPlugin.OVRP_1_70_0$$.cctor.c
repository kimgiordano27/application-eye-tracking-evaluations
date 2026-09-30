/*
FUNCTION_NAME: OVRPlugin.OVRP_1_70_0$$.cctor
ENTRY_POINT: 02819998
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


long * OVRPlugin_OVRP_1_70_0___cctor(long *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x22;
  undefined8 *puVar14;
  undefined8 uVar15;
  long unaff_x23;
  long *plVar16;
  uint uVar17;
  
  puVar2 = PTR_DAT_03cbe5e8;
  puVar14 = *(undefined8 **)(unaff_x22 + 0x208);
  if ((*(byte *)(unaff_x23 + 0x391) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd8520);
    FUN_01ab69ac(PTR_DAT_03cfe5e8);
    FUN_01ab69ac(PTR_DAT_03cc7208);
    FUN_01ab69ac(PTR_DAT_03cfe5f0);
    FUN_01ab69ac(PTR_DAT_03cc07a8);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    *(undefined1 *)(unaff_x23 + 0x391) = 1;
  }
  puVar3 = PTR_DAT_03cc07a8;
  uVar15 = *puVar14;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar7 = (long *)FUN_0277b678(uVar15,0);
  plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,1);
  if (plVar8 != (long *)0x0) {
    if ((param_2 != 0) &&
       (lVar9 = thunk_FUN_01a89d6c(param_2,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
      uVar15 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar15,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_02819c9c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar8[4] = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,param_2);
    if (((plVar7 != (long *)0x0) &&
        (uVar15 = (**(code **)(*plVar7 + 0xc08))(plVar7,plVar8,*(undefined8 *)(*plVar7 + 0xc10)),
        param_1 != (long *)0x0)) &&
       (lVar9 = (**(code **)(*param_1 + 0x878))(param_1,0x14,*(undefined8 *)(*param_1 + 0x880)),
       puVar5 = PTR_DAT_03cfe5f0, puVar4 = PTR_DAT_03cfe5e8, puVar3 = PTR_DAT_03cd8520, lVar9 != 0))
    {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar1 < 1) {
        plVar7 = (long *)0x0;
      }
      else {
        uVar17 = 0;
        plVar8 = (long *)0x0;
        do {
          if (uVar1 <= uVar17) goto LAB_02819c9c;
          plVar16 = *(long **)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
          if ((plVar16 == (long *)0x0) ||
             (plVar10 = (long *)(**(code **)(*plVar16 + 0x2c8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x2d0)),
             plVar10 == (long *)0x0)) goto LAB_02819c98;
          lVar11 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02819b68;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar14 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar4,0);
LAB_02819b68:
          iVar6 = (*(code *)*puVar14)(plVar10,puVar14[1]);
          plVar7 = plVar8;
          if (iVar6 == 1) {
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                  puVar14 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_02819bc8;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar14 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar5,0);
LAB_02819bc8:
            plVar10 = (long *)(*(code *)*puVar14)(plVar10,0,puVar14[1]);
            if (plVar10 == (long *)0x0) goto LAB_02819c98;
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1e8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            lVar11 = *(long *)puVar2;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar11);
            }
            uVar12 = FUN_02786d28(uVar15,plVar10,0);
            if ((uVar12 & 1) != 0) {
              return plVar16;
            }
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar12 = FUN_0267bc0c(plVar8,0,0);
            if ((uVar12 & 1) != 0) {
              if (plVar10 == (long *)0x0) goto LAB_02819c98;
              uVar12 = (**(code **)(*plVar10 + 0x388))
                                 (plVar10,param_3,*(undefined8 *)(*plVar10 + 0x390));
              plVar7 = plVar16;
              if ((uVar12 & 1) == 0) {
                plVar7 = plVar8;
              }
            }
          }
          uVar1 = *(uint *)(lVar9 + 0x18);
          uVar17 = uVar17 + 1;
          plVar8 = plVar7;
        } while ((int)uVar17 < (int)uVar1);
      }
      return plVar7;
    }
  }
LAB_02819c98:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


