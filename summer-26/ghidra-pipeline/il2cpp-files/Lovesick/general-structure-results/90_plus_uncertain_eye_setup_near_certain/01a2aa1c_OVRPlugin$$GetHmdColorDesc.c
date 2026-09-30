/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 01a2aa1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 102
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHmdColorDesc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint *puVar15;
  
  thunk_FUN_00d48444(UnityEngine_UIElements_UxmlIntAttributeDescription_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_4989);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcale_f32__);
  thunk_FUN_00d48444(Method_System_Data_DataView_System_Collections_IList_Clear__);
  thunk_FUN_00d48444(StringLiteral_10553);
  thunk_FUN_00d48444(StringLiteral_11627);
  thunk_FUN_00d48444(Method_Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c_<_cctor>b__4_0__);
  thunk_FUN_00d48444(Method_System_Runtime_Remoting_ActivatedClientTypeEntry__ctor__);
  thunk_FUN_00d48444(PTR_DAT_033f5038);
  *(undefined1 *)(unaff_x19 + 0xb30) = 1;
  lVar11 = thunk_FUN_00d62348(*unaff_x20);
  puVar10 = StringLiteral_11627;
  puVar9 = StringLiteral_4989;
  puVar8 = StringLiteral_3771;
  puVar7 = Method_Meta_XR_ImmersiveDebugger_Manager_TweakUtils_<>c_<_cctor>b__4_0__;
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcale_f32__;
  puVar4 = Method_UnityEngine_Playables_PlayableOutput_IsPlayableOutputOfType<AudioPlayableOutput>__
  ;
  puVar3 = Method_UnityEngine_ProBuilder_MeshOperations_MeshImporter_Import__;
  puVar2 = UnityEngine_UIElements_UxmlIntAttributeDescription_TypeInfo;
  puVar1 = PTR_DAT_033f5038;
  if (lVar11 != 0) {
    FUN_01320e50(lVar11,*(undefined8 *)StringLiteral_11645);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar5,0);
    FUN_00bfeb08(lVar11,uVar12,*(undefined8 *)puVar8);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar10,0);
    FUN_00bfeb08(lVar11,uVar12,*(undefined8 *)puVar8);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar2,0);
    FUN_00bfeb08(lVar11,uVar12,*(undefined8 *)puVar8);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar9,0);
    FUN_00bfeb08(lVar11,uVar12,*(undefined8 *)puVar8);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar1,0);
    FUN_00bfeb08(lVar11,uVar12,*(undefined8 *)puVar8);
    **(long **)(*(long *)puVar6 + 0xb8) = lVar11;
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,0x1a);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar7,0);
    *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = uVar12;
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,0x1a);
    FUN_016a34e8(uVar12,*(undefined8 *)Method_System_Data_DataView_System_Collections_IList_Clear__,
                 0);
    *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = uVar12;
    plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<RenderTexture>_GetHashCode__
                                   ,0x1a);
    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
    if (plVar13 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_01a2b51c:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      puVar15 = (uint *)(plVar13 + 3);
      if (*puVar15 != 0) {
        plVar13[4] = lVar11;
        puVar1 = Method_System_Runtime_Remoting_ActivatedClientTypeEntry__ctor__;
        lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,6);
        FUN_016a34e8(lVar11,*(undefined8 *)puVar1,0);
        if ((lVar11 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_01a2b51c;
        if (1 < *puVar15) {
          plVar13[5] = lVar11;
          lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
          if (lVar11 == 0) goto LAB_01a2b528;
          if (*(int *)(lVar11 + 0x18) != 0) {
            *(undefined4 *)(lVar11 + 0x20) = 3;
            lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar14 == 0) goto LAB_01a2b51c;
            if (2 < *puVar15) {
              plVar13[6] = lVar11;
              lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
              if (lVar11 == 0) goto LAB_01a2b528;
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined4 *)(lVar11 + 0x20) = 4;
                lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar14 == 0) goto LAB_01a2b51c;
                if (3 < *puVar15) {
                  plVar13[7] = lVar11;
                  lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                  if (lVar11 == 0) goto LAB_01a2b528;
                  if (*(int *)(lVar11 + 0x18) != 0) {
                    *(undefined4 *)(lVar11 + 0x20) = 5;
                    lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar14 == 0) goto LAB_01a2b51c;
                    if (4 < *puVar15) {
                      plVar13[8] = lVar11;
                      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                      if ((lVar11 != 0) &&
                         (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar14 == 0)) goto LAB_01a2b51c;
                      if (5 < *puVar15) {
                        plVar13[9] = lVar11;
                        lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                        if (lVar11 == 0) goto LAB_01a2b528;
                        if (*(int *)(lVar11 + 0x18) != 0) {
                          *(undefined4 *)(lVar11 + 0x20) = 7;
                          lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                          if (lVar14 == 0) goto LAB_01a2b51c;
                          if (6 < *puVar15) {
                            plVar13[10] = lVar11;
                            lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                            if (lVar11 == 0) goto LAB_01a2b528;
                            if (*(int *)(lVar11 + 0x18) != 0) {
                              *(undefined4 *)(lVar11 + 0x20) = 8;
                              lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                              if (lVar14 == 0) goto LAB_01a2b51c;
                              if (7 < *puVar15) {
                                plVar13[0xb] = lVar11;
                                lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                if (lVar11 == 0) goto LAB_01a2b528;
                                if (*(int *)(lVar11 + 0x18) != 0) {
                                  *(undefined4 *)(lVar11 + 0x20) = 9;
                                  lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                      (*plVar13 + 0x40));
                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                  if (8 < *puVar15) {
                                    plVar13[0xc] = lVar11;
                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                    if (lVar11 == 0) goto LAB_01a2b528;
                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                      *(undefined4 *)(lVar11 + 0x20) = 10;
                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                          (*plVar13 + 0x40));
                                      if (lVar14 == 0) goto LAB_01a2b51c;
                                      if (9 < *puVar15) {
                                        plVar13[0xd] = lVar11;
                                        lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                        if ((lVar11 != 0) &&
                                           (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                                (*plVar13 + 0x40)),
                                           lVar14 == 0)) goto LAB_01a2b51c;
                                        if (10 < *puVar15) {
                                          plVar13[0xe] = lVar11;
                                          lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                          if (lVar11 == 0) goto LAB_01a2b528;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            *(undefined4 *)(lVar11 + 0x20) = 0xc;
                                            lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                                (*plVar13 + 0x40));
                                            if (lVar14 == 0) goto LAB_01a2b51c;
                                            if (0xb < *puVar15) {
                                              plVar13[0xf] = lVar11;
                                              lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                              if (lVar11 == 0) goto LAB_01a2b528;
                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                                    (*plVar13 + 0x40
                                                                                    ));
                                                if (lVar14 == 0) goto LAB_01a2b51c;
                                                if (0xc < *puVar15) {
                                                  plVar13[0x10] = lVar11;
                                                  lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                  if (lVar11 == 0) goto LAB_01a2b528;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar11 + 0x20) = 0xe;
                                                    lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                         *)(*plVar13
                                                                                           + 0x40));
                                                    if (lVar14 == 0) goto LAB_01a2b51c;
                                                    if (0xd < *puVar15) {
                                                      plVar13[0x11] = lVar11;
                                                      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1)
                                                      ;
                                                      if (lVar11 == 0) goto LAB_01a2b528;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar11 + 0x20) = 0xf;
                                                        lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0xe < *puVar15) {
                                                    plVar13[0x12] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a2b51c;
                                                  if (0xf < *puVar15) {
                                                    plVar13[0x13] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x10 < *puVar15) {
                                                    plVar13[0x14] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x12;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x11 < *puVar15) {
                                                    plVar13[0x15] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x13;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x12 < *puVar15) {
                                                    plVar13[0x16] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x14;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x13 < *puVar15) {
                                                    plVar13[0x17] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a2b51c;
                                                  if (0x14 < *puVar15) {
                                                    plVar13[0x18] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x15 < *puVar15) {
                                                    plVar13[0x19] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x17;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x16 < *puVar15) {
                                                    plVar13[0x1a] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x18;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x17 < *puVar15) {
                                                    plVar13[0x1b] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a2b528;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x19;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a2b51c;
                                                  if (0x18 < *puVar15) {
                                                    plVar13[0x1c] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a2b51c;
                                                  if (0x19 < *puVar15) {
                                                    plVar13[0x1d] = lVar11;
                                                    puVar1 = 
                                                  Method_System_Reflection_Emit_DynamicMethod_Invoke__
                                                  ;
                                                  *(long **)(*(long *)(*(long *)puVar6 + 0xb8) +
                                                            0x18) = plVar13;
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  puVar2 = StringLiteral_10553;
                                                  puVar1 = FullSerializer_fsDataType_TypeInfo;
                                                  if (lVar11 != 0) {
                                                    FUN_01320e50(lVar11,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Threading_Tasks_Task_Run<WebResponse>__
                                                  );
                                                  FUN_00bfecf8(lVar11,6,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,7,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,8,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,9,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0xb,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0xc,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0xd,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0xe,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x10,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x11,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x12,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x13,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x15,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x16,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x17,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,0x18,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,2,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,3,*(undefined8 *)puVar1);
                                                  FUN_00bfecf8(lVar11,4,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20
                                                           ) = lVar11;
                                                  uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
                                                  FUN_016a34e8(uVar12,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar6 + 0xb8) + 0x28) =
                                                       uVar12;
                                                  return;
                                                  }
                                                  goto LAB_01a2b528;
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
      FUN_00da5194();
    }
  }
LAB_01a2b528:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


