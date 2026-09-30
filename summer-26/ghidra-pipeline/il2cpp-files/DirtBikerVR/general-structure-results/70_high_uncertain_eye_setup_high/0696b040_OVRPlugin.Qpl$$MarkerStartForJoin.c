/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerStartForJoin
ENTRY_POINT: 0696b040
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerStartForJoin(long *param_1,long *param_2)

{
  float fVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
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
  
  uVar9 = *(undefined8 *)(*(long *)(*param_1 + 0xb8) + 0x18);
  fVar8 = *(float *)(*(long *)(*param_1 + 0xb8) + 0x20);
  fVar6 = (float)(**(code **)(*param_2 + 0x388))(param_2,*(undefined8 *)(*param_2 + 0x390));
  if (((*(long *)(unaff_x20 + 0x78) != 0) &&
      (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 != (long *)0x0)) &&
     (fVar7 = (float)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230)),
     unaff_x22 != 0)) {
    fVar6 = fVar6 + fVar7;
    fVar7 = -(float)((ulong)uVar9 >> 0x20) * fVar6;
                    /* try { // try from 0696b0a0 to 06a6b10f has its CatchHandler @ 0696a944 */
    FUN_07cab7ec(CONCAT44(fVar7,-(float)uVar9 * fVar6),fVar7,fVar6 * -fVar8);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      uVar9 = FUN_07d1c63c(*(long *)(unaff_x20 + 0x30),0);
      puVar5 = (undefined8 *)(unaff_x20 + 0x48);
      *puVar5 = uVar9;
      thunk_FUN_03afed3c(puVar5,0);
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        uVar9 = FUN_07d1c660(*(long *)(unaff_x20 + 0x30),0);
        puVar4 = (undefined8 *)(unaff_x20 + 0x50);
        *puVar4 = uVar9;
        thunk_FUN_03afed3c(puVar4,0);
        if (((*(long *)(unaff_x20 + 200) != 0) && (*(long *)(unaff_x20 + 0x78) != 0)) &&
           (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 != (long *)0x0)) {
                    /* try { // try from 0696b110 to 06a6b117 has its CatchHandler @ 0696b208 */
          fVar7 = *(float *)(*(long *)(unaff_x20 + 200) + 0x3c);
          fVar8 = (float)(**(code **)(*plVar2 + 0x4c8))(plVar2,*(undefined8 *)(*plVar2 + 0x4d0));
          fVar6 = DAT_015c5928;
                    /* try { // try from 0696b124 to 06a6b197 has its CatchHandler @ 0696b210 */
          if (*unaff_x21 != 0) {
            fVar7 = fVar7 / fVar8;
            fVar8 = *(float *)(*unaff_x21 + 0x40);
            if (fVar7 <= fVar8) {
              fVar8 = fVar7;
            }
            fVar1 = DAT_015c5928;
            if (DAT_015c5928 <= fVar7) {
              fVar1 = fVar8;
            }
            FUN_07d1d580(&stack0x00000100,fVar1,0);
            in_stack_000000e8 = in_stack_00000108;
            in_stack_000000e0 = in_stack_00000100;
            in_stack_000000f8 = in_stack_00000118;
            in_stack_000000f0 = in_stack_00000110;
            FUN_07d1c798(puVar5,&stack0x000000e0,0);
            lVar3 = *(long *)(unaff_x20 + 0x78);
            if (lVar3 != 0) {
              fVar7 = *(float *)(lVar3 + 0x40);
              fVar8 = -fVar7;
              if (0.0 <= fVar7) {
                fVar8 = fVar7;
              }
              if (fVar8 < 5.0) {
                FUN_07d1d580(&stack0x00000100,0,0);
                in_stack_000000c8 = in_stack_00000108;
                in_stack_000000c0 = in_stack_00000100;
                in_stack_000000d8 = in_stack_00000118;
                in_stack_000000d0 = in_stack_00000110;
                FUN_07d1d0d8(puVar4,&stack0x000000c0,0);
                FUN_07d1d580(&stack0x000000a0,0,0);
                in_stack_00000088 = in_stack_000000a8;
                in_stack_00000080 = in_stack_000000a0;
                in_stack_00000098 = in_stack_000000b8;
                in_stack_00000090 = in_stack_000000b0;
LAB_0696b1e8:
                UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_TransitionDurationProperty__get_ussName
                          (puVar4);
                uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
                FUN_07ca4ee0(DAT_015c5b5c,uVar9,0);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar9;
                thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar9);
                *(undefined4 *)(unaff_x19 + 0x10) = 1;
                return;
              }
              plVar2 = *(long **)(lVar3 + 0x80);
              if (plVar2 != (long *)0x0) {
                fVar8 = (float)(**(code **)(*plVar2 + 0x228))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x230));
                FUN_07d1d580(&stack0x00000100,fVar7 * fVar8 * fVar6,0);
                in_stack_00000068 = in_stack_00000108;
                in_stack_00000060 = in_stack_00000100;
                in_stack_00000078 = in_stack_00000118;
                in_stack_00000070 = in_stack_00000110;
                FUN_07d1c9b4(puVar5,&stack0x00000060,0);
                FUN_07d1d580(&stack0x000000a0,0,0);
                in_stack_00000048 = in_stack_000000a8;
                in_stack_00000040 = in_stack_000000a0;
                in_stack_00000058 = in_stack_000000b8;
                in_stack_00000050 = in_stack_000000b0;
                FUN_07d1d0d8(puVar4,&stack0x00000040,0);
                if ((*(long *)(unaff_x20 + 0x78) != 0) &&
                   (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 != (long *)0x0))
                {
                  fVar6 = (float)(**(code **)(*plVar2 + 0x4e8))
                                           (plVar2,*(undefined8 *)(*plVar2 + 0x4f0));
                  if ((*(long *)(unaff_x20 + 0x78) != 0) &&
                     (plVar2 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x80), plVar2 != (long *)0x0
                     )) {
                    fVar8 = (float)(**(code **)(*plVar2 + 0x528))
                                             (plVar2,*(undefined8 *)(*plVar2 + 0x530));
                    if (*unaff_x21 != 0) {
                      FUN_07d1d580(&stack0x00000020,
                                   (fVar6 * DAT_015c5c98 + fVar8 * DAT_015c5b88) *
                                   *(float *)(*unaff_x21 + 0x38),0);
                      goto LAB_0696b1e8;
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
  FUN_03a8a9c0();
}


