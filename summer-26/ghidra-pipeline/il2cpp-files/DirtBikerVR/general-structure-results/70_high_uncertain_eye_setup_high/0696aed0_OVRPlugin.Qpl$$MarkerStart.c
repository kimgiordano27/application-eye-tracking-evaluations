/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStart
ENTRY_POINT: 0696aed0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Qpl__MarkerStart(long param_1)

{
  float fVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  if ((DAT_0897d0db & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(PTR_DAT_08487fd0);
    DAT_0897d0db = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_0696b1e8:
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
    FUN_07ca4ee0(DAT_015c5b5c,uVar7,0);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x18),uVar7);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0x78) != 0)) &&
     (plVar4 = *(long **)(*(long *)(lVar8 + 0x78) + 0x80), plVar4 != (long *)0x0)) {
    bVar3 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    if (*(long *)(lVar8 + 0x78) != 0) {
      plVar4 = (long *)(lVar8 + 200);
      *plVar4 = *(long *)(*(long *)(lVar8 + 0x78) + 0x78);
      thunk_FUN_03afed3c(plVar4);
      puVar2 = PTR_DAT_08486738;
      lVar10 = *plVar4;
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_07c9e200(lVar10,0,0);
      if ((uVar5 & 1) == 0) {
        if (*plVar4 == 0) goto LAB_0696b348;
        if ((bVar3 & *(char *)(*plVar4 + 0x35) != '\0') != 0) {
          uVar7 = *(undefined8 *)(lVar8 + 0x30);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar5 = FUN_07c9e200(uVar7,0,0);
          if ((uVar5 & 1) != 0) goto LAB_0696b1e8;
          if ((*(long *)(lVar8 + 0x30) != 0) &&
             (lVar10 = FUN_07c99058(*(long *)(lVar8 + 0x30),0), lVar10 != 0)) {
            lVar10 = FUN_07c9c69c(lVar10,0);
            if (DAT_08974d89 == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d89 = '\x01';
            }
            if ((*(long *)(lVar8 + 0x78) != 0) &&
               (plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x80), plVar6 != (long *)0x0)) {
              uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
              fVar14 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
              fVar12 = (float)(**(code **)(*plVar6 + 0x388))
                                        (plVar6,*(undefined8 *)(*plVar6 + 0x390));
              if ((*(long *)(lVar8 + 0x78) != 0) &&
                 ((plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x80), plVar6 != (long *)0x0 &&
                  (fVar13 = (float)(**(code **)(*plVar6 + 0x228))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x230)), lVar10 != 0)
                  ))) {
                fVar12 = fVar12 + fVar13;
                fVar13 = -(float)((ulong)uVar7 >> 0x20) * fVar12;
                FUN_07cab7ec(CONCAT44(fVar13,-(float)uVar7 * fVar12),fVar13,fVar12 * -fVar14,lVar10,
                             0);
                if (*(long *)(lVar8 + 0x30) != 0) {
                  uVar7 = FUN_07d1c63c(*(long *)(lVar8 + 0x30),0);
                  puVar11 = (undefined8 *)(lVar8 + 0x48);
                  *puVar11 = uVar7;
                  thunk_FUN_03afed3c(puVar11,0);
                  if (*(long *)(lVar8 + 0x30) != 0) {
                    uVar7 = FUN_07d1c660(*(long *)(lVar8 + 0x30),0);
                    puVar9 = (undefined8 *)(lVar8 + 0x50);
                    *puVar9 = uVar7;
                    thunk_FUN_03afed3c(puVar9,0);
                    if (((*(long *)(lVar8 + 200) != 0) && (*(long *)(lVar8 + 0x78) != 0)) &&
                       (plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x80), plVar6 != (long *)0x0))
                    {
                      fVar13 = *(float *)(*(long *)(lVar8 + 200) + 0x3c);
                      fVar14 = (float)(**(code **)(*plVar6 + 0x4c8))
                                                (plVar6,*(undefined8 *)(*plVar6 + 0x4d0));
                      fVar12 = DAT_015c5928;
                      if (*plVar4 != 0) {
                        fVar13 = fVar13 / fVar14;
                        fVar14 = *(float *)(*plVar4 + 0x40);
                        if (fVar13 <= fVar14) {
                          fVar14 = fVar13;
                        }
                        fVar1 = DAT_015c5928;
                        if (DAT_015c5928 <= fVar13) {
                          fVar1 = fVar14;
                        }
                        FUN_07d1d580(&stack0x00000100,fVar1,0);
                        in_stack_000000e8 = in_stack_00000108;
                        in_stack_000000e0 = in_stack_00000100;
                        in_stack_000000f8 = in_stack_00000118;
                        in_stack_000000f0 = in_stack_00000110;
                        FUN_07d1c798(puVar11,&stack0x000000e0,0);
                        lVar10 = *(long *)(lVar8 + 0x78);
                        if (lVar10 != 0) {
                          fVar13 = *(float *)(lVar10 + 0x40);
                          fVar14 = -fVar13;
                          if (0.0 <= fVar13) {
                            fVar14 = fVar13;
                          }
                          if (5.0 <= fVar14) {
                            plVar6 = *(long **)(lVar10 + 0x80);
                            if (plVar6 == (long *)0x0) goto LAB_0696b348;
                            fVar14 = (float)(**(code **)(*plVar6 + 0x228))
                                                      (plVar6,*(undefined8 *)(*plVar6 + 0x230));
                            FUN_07d1d580(&stack0x00000100,fVar13 * fVar14 * fVar12,0);
                            in_stack_00000068 = in_stack_00000108;
                            in_stack_00000060 = in_stack_00000100;
                            in_stack_00000078 = in_stack_00000118;
                            in_stack_00000070 = in_stack_00000110;
                            FUN_07d1c9b4(puVar11,&stack0x00000060,0);
                            FUN_07d1d580(&stack0x000000a0,0,0);
                            in_stack_00000048 = in_stack_000000a8;
                            in_stack_00000040 = in_stack_000000a0;
                            in_stack_00000058 = in_stack_000000b8;
                            in_stack_00000050 = in_stack_000000b0;
                            FUN_07d1d0d8(puVar9,&stack0x00000040,0);
                            if ((*(long *)(lVar8 + 0x78) == 0) ||
                               (plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x80),
                               plVar6 == (long *)0x0)) goto LAB_0696b348;
                            fVar12 = (float)(**(code **)(*plVar6 + 0x4e8))
                                                      (plVar6,*(undefined8 *)(*plVar6 + 0x4f0));
                            if ((*(long *)(lVar8 + 0x78) == 0) ||
                               (plVar6 = *(long **)(*(long *)(lVar8 + 0x78) + 0x80),
                               plVar6 == (long *)0x0)) goto LAB_0696b348;
                            fVar14 = (float)(**(code **)(*plVar6 + 0x528))
                                                      (plVar6,*(undefined8 *)(*plVar6 + 0x530));
                            if (*plVar4 == 0) goto LAB_0696b348;
                            FUN_07d1d580(&stack0x00000020,
                                         (fVar12 * DAT_015c5c98 + fVar14 * DAT_015c5b88) *
                                         *(float *)(*plVar4 + 0x38),0);
                          }
                          else {
                            FUN_07d1d580(&stack0x00000100,0,0);
                            in_stack_000000c8 = in_stack_00000108;
                            in_stack_000000c0 = in_stack_00000100;
                            in_stack_000000d8 = in_stack_00000118;
                            in_stack_000000d0 = in_stack_00000110;
                            FUN_07d1d0d8(puVar9,&stack0x000000c0,0);
                            FUN_07d1d580(&stack0x000000a0,0,0);
                            in_stack_00000088 = in_stack_000000a8;
                            in_stack_00000080 = in_stack_000000a0;
                            in_stack_00000098 = in_stack_000000b8;
                            in_stack_00000090 = in_stack_000000b0;
                          }
                          UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                                    (puVar9);
                          goto LAB_0696b1e8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0696b348;
        }
      }
      FUN_0696add4(lVar8);
      goto LAB_0696b1e8;
    }
  }
LAB_0696b348:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


