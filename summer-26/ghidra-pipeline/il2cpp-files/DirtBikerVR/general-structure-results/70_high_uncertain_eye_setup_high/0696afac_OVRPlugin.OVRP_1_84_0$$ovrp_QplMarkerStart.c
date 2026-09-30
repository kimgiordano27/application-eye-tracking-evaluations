/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 0696afac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(long param_1)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  byte unaff_w22;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *unaff_x24;
  float fVar8;
  float fVar9;
  float fVar10;
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
  
  if ((unaff_w22 & *(char *)(param_1 + 0x35) != '\0') == 0) {
    FUN_0696add4();
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9e200(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(unaff_x20 + 0x30) != 0) &&
         (lVar3 = FUN_07c99058(*(long *)(unaff_x20 + 0x30),0), lVar3 != 0)) {
        lVar3 = FUN_07c9c69c(lVar3,0);
        if (DAT_08974d89 == '\0') {
                    /* try { // try from 0696b018 to 06a6b01f has its CatchHandler @ 0696b20c */
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d89 = '\x01';
        }
                    /* try { // try from 0696b02c to 06a6b09f has its CatchHandler @ 0696b25c */
        if ((*(long *)(unaff_x20 + 0x78) != 0) &&
           (plVar4 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar4 != (long *)0x0)) {
          uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
          fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
          fVar8 = (float)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
          if ((*(long *)(unaff_x20 + 0x78) != 0) &&
             ((plVar4 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar4 != (long *)0x0 &&
              (fVar9 = (float)(**(code **)(*plVar4 + 0x228))
                                        (plVar4,*(undefined8 *)(*plVar4 + 0x230)), lVar3 != 0)))) {
            fVar8 = fVar8 + fVar9;
            fVar9 = -(float)((ulong)uVar5 >> 0x20) * fVar8;
            FUN_07cab7ec(CONCAT44(fVar9,-(float)uVar5 * fVar8),fVar9,fVar8 * -fVar10,lVar3,0);
            if (*(long *)(unaff_x20 + 0x30) != 0) {
              uVar5 = FUN_07d1c63c(*(long *)(unaff_x20 + 0x30),0);
              puVar7 = (undefined8 *)(unaff_x20 + 0x48);
              *puVar7 = uVar5;
              thunk_FUN_03afed3c(puVar7,0);
              if (*(long *)(unaff_x20 + 0x30) != 0) {
                uVar5 = FUN_07d1c660(*(long *)(unaff_x20 + 0x30),0);
                puVar6 = (undefined8 *)(unaff_x20 + 0x50);
                *puVar6 = uVar5;
                thunk_FUN_03afed3c(puVar6,0);
                if (((*(long *)(unaff_x20 + 200) != 0) && (*(long *)(unaff_x20 + 0x78) != 0)) &&
                   (plVar4 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar4 != (long *)0x0))
                {
                  fVar9 = *(float *)(*(long *)(unaff_x20 + 200) + 0x3c);
                  fVar10 = (float)(**(code **)(*plVar4 + 0x4c8))
                                            (plVar4,*(undefined8 *)(*plVar4 + 0x4d0));
                  fVar8 = DAT_015c5928;
                  if (*unaff_x21 != 0) {
                    fVar9 = fVar9 / fVar10;
                    fVar10 = *(float *)(*unaff_x21 + 0x40);
                    if (fVar9 <= fVar10) {
                      fVar10 = fVar9;
                    }
                    fVar1 = DAT_015c5928;
                    if (DAT_015c5928 <= fVar9) {
                      fVar1 = fVar10;
                    }
                    FUN_07d1d580(&stack0x00000100,fVar1,0);
                    in_stack_000000e8 = in_stack_00000108;
                    in_stack_000000e0 = in_stack_00000100;
                    in_stack_000000f8 = in_stack_00000118;
                    in_stack_000000f0 = in_stack_00000110;
                    FUN_07d1c798(puVar7,&stack0x000000e0,0);
                    lVar3 = *(long *)(unaff_x20 + 0x78);
                    if (lVar3 != 0) {
                      fVar9 = *(float *)(lVar3 + 0x40);
                      fVar10 = -fVar9;
                      if (0.0 <= fVar9) {
                        fVar10 = fVar9;
                      }
                      if (5.0 <= fVar10) {
                        plVar4 = *(long **)(lVar3 + 0x80);
                        if (plVar4 == (long *)0x0) goto LAB_0696b348;
                        fVar10 = (float)(**(code **)(*plVar4 + 0x228))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x230));
                        FUN_07d1d580(&stack0x00000100,fVar9 * fVar10 * fVar8,0);
                        in_stack_00000068 = in_stack_00000108;
                        in_stack_00000060 = in_stack_00000100;
                        in_stack_00000078 = in_stack_00000118;
                        in_stack_00000070 = in_stack_00000110;
                        FUN_07d1c9b4(puVar7,&stack0x00000060,0);
                        FUN_07d1d580(&stack0x000000a0,0,0);
                        in_stack_00000048 = in_stack_000000a8;
                        in_stack_00000040 = in_stack_000000a0;
                        in_stack_00000058 = in_stack_000000b8;
                        in_stack_00000050 = in_stack_000000b0;
                        FUN_07d1d0d8(puVar6,&stack0x00000040,0);
                        if ((*(long *)(unaff_x20 + 0x78) == 0) ||
                           (plVar4 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80),
                           plVar4 == (long *)0x0)) goto LAB_0696b348;
                        fVar8 = (float)(**(code **)(*plVar4 + 0x4e8))
                                                 (plVar4,*(undefined8 *)(*plVar4 + 0x4f0));
                        if ((*(long *)(unaff_x20 + 0x78) == 0) ||
                           (plVar4 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80),
                           plVar4 == (long *)0x0)) goto LAB_0696b348;
                        fVar10 = (float)(**(code **)(*plVar4 + 0x528))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 0x530));
                        if (*unaff_x21 == 0) goto LAB_0696b348;
                        FUN_07d1d580(&stack0x00000020,
                                     (fVar8 * DAT_015c5c98 + fVar10 * DAT_015c5b88) *
                                     *(float *)(*unaff_x21 + 0x38),0);
                      }
                      else {
                        FUN_07d1d580(&stack0x00000100,0,0);
                        in_stack_000000c8 = in_stack_00000108;
                        in_stack_000000c0 = in_stack_00000100;
                        in_stack_000000d8 = in_stack_00000118;
                        in_stack_000000d0 = in_stack_00000110;
                        FUN_07d1d0d8(puVar6,&stack0x000000c0,0);
                        FUN_07d1d580(&stack0x000000a0,0,0);
                        in_stack_00000088 = in_stack_000000a8;
                        in_stack_00000080 = in_stack_000000a0;
                        in_stack_00000098 = in_stack_000000b8;
                        in_stack_00000090 = in_stack_000000b0;
                      }
                      UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                                (puVar6);
                      goto LAB_0696b1e8;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0696b348:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
LAB_0696b1e8:
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
  FUN_07ca4ee0(DAT_015c5b5c,uVar5,0);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar5);
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}


