/*
FUNCTION_NAME: FUN_049363f4
ENTRY_POINT: 049363f4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_049363f4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  if ((DAT_07548f9c & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f24a8);
    FUN_03188a78(PTR_DAT_070f24b0);
    DAT_07548f9c = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4();
  }
  if (param_1 != 0) {
    uVar4 = FUN_06b25758(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x1f8),0);
    if (((uVar4 & 1) == 0) || (*(long *)(param_1 + 0x528) == 0)) {
      return;
    }
    fVar14 = *(float *)(param_1 + 0x4bc);
    fVar9 = (float)FUN_06b206b8(param_1,0);
    if (*(long *)(param_1 + 0x528) != 0) {
      fVar10 = (float)FUN_06b206b8(*(long *)(param_1 + 0x528),0);
      if ((*(long *)(param_1 + 0x528) != 0) &&
         (plVar5 = (long *)FUN_06b18750(*(long *)(param_1 + 0x528),0), puVar1 = PTR_DAT_070f24a8,
         plVar5 != (long *)0x0)) {
        lVar3 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f24a8) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
              goto LAB_04936544;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070f24a8,0x2c);
LAB_04936544:
        fVar11 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
        plVar5 = (long *)FUN_06b18750(param_1,0);
        if (plVar5 != (long *)0x0) {
          lVar3 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
                goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0x2c);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
          fVar12 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
          fVar15 = *(float *)(param_1 + 0x4c0);
          plVar5 = (long *)FUN_06b18750(param_1,0);
          if (plVar5 != (long *)0x0) {
            lVar3 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
                  goto LAB_04936630;
                }
                uVar4 = uVar4 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0x2c);
LAB_04936630:
            fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
            lVar3 = *(long *)(param_1 + 0x520);
            if (lVar3 == 0) {
              lVar3 = *(long *)(param_1 + 0x528);
            }
            if (*(long *)(param_1 + 0x500) != 0) {
              fVar11 = (fVar9 - fVar10) - fVar11;
              plVar5 = (long *)FUN_06b1e818(*(long *)(param_1 + 0x500),0);
              auVar16 = FUN_06b3dc78((fVar15 - fVar11) - fVar13,0);
              puVar2 = PTR_DAT_070f24b0;
              if (plVar5 != (long *)0x0) {
                lVar7 = *plVar5;
                uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar4 != 0) {
                  piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f24b0) {
                      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0x55) * 0x10 + 0x138);
                      goto FUN_049366e0;
                    }
                    uVar4 = uVar4 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar4 != 0);
                }
                puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_070f24b0,0x55);
FUN_049366e0:
                (*(code *)*puVar6)(plVar5,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar6[1]);
                if ((lVar3 != 0) && (plVar5 = (long *)FUN_06b18750(lVar3,0), plVar5 != (long *)0x0))
                {
                  lVar3 = *plVar5;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                        puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                        goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo;
                      }
                      uVar4 = uVar4 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0x4e);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo:
                  fVar9 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                  if (*(long *)(param_1 + 0x500) != 0) {
                    fVar10 = *(float *)(param_1 + 0x4b8);
                    plVar5 = (long *)FUN_06b18750(*(long *)(param_1 + 0x500),0);
                    if (plVar5 != (long *)0x0) {
                      lVar3 = *plVar5;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      fVar9 = (float)(int)(fVar9 * fVar10) - (fVar14 + fVar11 + fVar12);
                      if (uVar4 != 0) {
                        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                            goto LAB_049367ec;
                          }
                          uVar4 = uVar4 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar1,0x4e);
LAB_049367ec:
                      fVar14 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                      if (ABS(fVar14 - fVar9) <= DAT_012e37c4) {
                        return;
                      }
                      if (*(long *)(param_1 + 0x500) != 0) {
                        plVar5 = (long *)FUN_06b1e818(*(long *)(param_1 + 0x500),0);
                        fVar14 = 0.0;
                        if (0.0 <= fVar9) {
                          fVar14 = fVar9;
                        }
                        auVar16 = FUN_06b3dc78(fVar14,0);
                        if (plVar5 != (long *)0x0) {
                          lVar3 = *plVar5;
                          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                          if (uVar4 != 0) {
                            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                                puVar6 = (undefined8 *)
                                         (lVar3 + (long)(*piVar8 + 0xa5) * 0x10 + 0x138);
                                goto LAB_049368b0;
                              }
                              uVar4 = uVar4 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar4 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)puVar2,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)*puVar6)(plVar5,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,
                                             puVar6[1]);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


