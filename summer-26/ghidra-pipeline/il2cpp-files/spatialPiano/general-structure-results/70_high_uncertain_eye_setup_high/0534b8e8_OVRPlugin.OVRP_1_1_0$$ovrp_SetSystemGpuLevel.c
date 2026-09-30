/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetSystemGpuLevel
ENTRY_POINT: 0534b8e8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetSystemGpuLevel(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  if (param_1 == 0) goto LAB_0534c124;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
                    /* try { // try from 0534b8fc to 0544b903 has its CatchHandler @ 0534b9a8 */
    *(undefined4 *)(param_1 + 0x20) = 0x11;
    if (0x10 < uVar1) {
      *(long *)(unaff_x19 + 0xa0) = param_1;
      lVar3 = FUN_02f0880c(*unaff_x21,1);
      if (lVar3 == 0) goto LAB_0534c124;
      if (*(int *)(lVar3 + 0x18) != 0) {
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        *(undefined4 *)(lVar3 + 0x20) = 0x12;
        if (0x11 < uVar1) {
          *(long *)(unaff_x19 + 0xa8) = lVar3;
                    /* try { // try from 0534b940 to 0544b96b has its CatchHandler @ 0534b9ac */
          lVar3 = FUN_02f0880c(*unaff_x21,1);
          if (lVar3 == 0) goto LAB_0534c124;
          if (*(int *)(lVar3 + 0x18) != 0) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            *(undefined4 *)(lVar3 + 0x20) = 0x17;
            if (0x12 < uVar1) {
              *(long *)(unaff_x19 + 0xb0) = lVar3;
              uVar4 = FUN_02f0880c(*unaff_x21,0);
              if (0x13 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0xb8) = uVar4;
                uVar4 = FUN_02f0880c(*unaff_x21,0);
                if (0x14 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
                  uVar4 = FUN_02f0880c(*unaff_x21,0);
                  if (0x15 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 200) = uVar4;
                    uVar4 = FUN_02f0880c(*unaff_x21,0);
                    if (0x16 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0xd0) = uVar4;
                      uVar4 = FUN_02f0880c(*unaff_x21,0);
                      if (0x17 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
                        puVar2 = UnityEngine_Rendering_FindNonRegisteredMaterialsJob_TypeInfo;
                        uVar4 = *(undefined8 *)
                                 UnityEngine_Rendering_FindNonRegisteredMeshesJob_TypeInfo;
                        *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18) = unaff_x19;
                        lVar3 = thunk_FUN_02f45270(uVar4);
                        FUN_03a6e09c(lVar3,*(undefined8 *)puVar2);
                        puVar2 = UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo;
                        if (lVar3 != 0) {
                          lVar5 = *(long *)(lVar3 + 0x10);
                          lVar6 = *(long *)UnityEngine_Rendering_FindDrawInstancesJob_TypeInfo;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar5 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 6;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,6,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,7,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 8;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,8,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 9;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,9,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 10;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,10,*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                     0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0xb,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0xc,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0xd,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0xe,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0xf,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0x10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0x11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,0x12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,2,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,3,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,4,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar5 = *(long *)(lVar3 + 0x10);
                              lVar6 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar5 == 0) goto LAB_0534c124;
                            }
                            puVar2 = Oculus_Interaction_GrabAPI_FingerPinchGrabAPI_TypeInfo;
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
                            }
                            else {
                              FUN_03a6e8d0(lVar3,5,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                            }
                            uVar4 = *unaff_x21;
                            *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar3;
                            uVar4 = FUN_02f0880c(uVar4,5);
                            FUN_05009b54(uVar4,*(undefined8 *)puVar2,0);
                            *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar4;
                            return;
                          }
                        }
LAB_0534c124:
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
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
  FUN_02f089d0();
}


