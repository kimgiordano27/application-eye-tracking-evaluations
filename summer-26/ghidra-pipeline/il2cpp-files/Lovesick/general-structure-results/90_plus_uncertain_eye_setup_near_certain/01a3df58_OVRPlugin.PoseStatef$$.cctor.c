/*
FUNCTION_NAME: OVRPlugin.PoseStatef$$.cctor
ENTRY_POINT: 01a3df58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PoseStatef___cctor(void)

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
  
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<string,_STMGradientData>_get_Item__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_get_Capacity__
                    );
                    /* try { // try from 01a3df70 to 01b3df7b has its CatchHandler @ 01a3d014 */
  thunk_FUN_00d48444(Method_Obi_ObiResourceHandle<Mesh>_Dereference__);
                    /* try { // try from 01a3df7c to 01b3df83 has its CatchHandler @ 01a3df8c */
                    /* try { // try from 01a3df84 to 01b3e6cf has its CatchHandler @ 01a3d014 */
  thunk_FUN_00d48444(StringLiteral_9310);
                    /* catch() { ... } // from try @ 01a3df00 with catch @ 01a3df8c
                       catch() { ... } // from try @ 01a3df7c with catch @ 01a3df8c */
                    /* catch() { ... } // from try @ 01a3db18 with catch @ 01a3df90 */
  thunk_FUN_00d48444(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputControlExtensions_ReadValueIntoBuffer__);
  *(undefined1 *)(unaff_x19 + 0xc25) = 1;
  lVar11 = thunk_FUN_00d62348(*unaff_x20);
  puVar10 = StringLiteral_11389;
  puVar9 = StringLiteral_9310;
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_high_n_u16__;
  puVar7 = Method_Unity_Mathematics_math_select_shuffle_component__;
  puVar6 = Method_UnityEngine_Matrix4x4_GetColumn__;
  puVar5 = Method_UnityEngine_InputSystem_InputControlExtensions_ReadValueIntoBuffer__;
  puVar4 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_6__;
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<PointerModel>_get_Capacity__;
  puVar3 = Meta_WitAi_Utilities_ReflectionUtils_TypeInfo;
  puVar1 = System_Comparison<Camera>_TypeInfo;
  if (lVar11 != 0) {
    FUN_01320e50(lVar11,*(undefined8 *)PTR_DAT_033ebed0);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar9,0);
    FUN_00bff428(lVar11,uVar12,*(undefined8 *)puVar1);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar2,0);
    FUN_00bff428(lVar11,uVar12,*(undefined8 *)puVar1);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar10,0);
    FUN_00bff428(lVar11,uVar12,*(undefined8 *)puVar1);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar6,0);
    FUN_00bff428(lVar11,uVar12,*(undefined8 *)puVar1);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar8,0);
    FUN_00bff428(lVar11,uVar12,*(undefined8 *)puVar1);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar11;
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar7,0x18);
    FUN_016a34e8(uVar12,*(undefined8 *)puVar5,0);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar12;
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,0x18);
    FUN_016a34e8(uVar12,*(undefined8 *)Method_Obi_ObiResourceHandle<Mesh>_Dereference__,0);
    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar12;
    plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<string,_fsData>_TypeInfo,
                                   0x18);
    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,6);
    FUN_016a34e8(lVar11,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<string,_STMGradientData>_get_Item__
                 ,0);
    if (plVar13 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_01a3e984:
        uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar12,0);
      }
      puVar15 = (uint *)(plVar13 + 3);
      if (*puVar15 != 0) {
        plVar13[4] = lVar11;
        lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
        if ((lVar11 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_01a3e984;
        if (1 < *puVar15) {
          plVar13[5] = lVar11;
          lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
          if (lVar11 == 0) goto LAB_01a3e990;
          if (*(int *)(lVar11 + 0x18) != 0) {
            *(undefined4 *)(lVar11 + 0x20) = 3;
            lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar14 == 0) goto LAB_01a3e984;
            if (2 < *puVar15) {
              plVar13[6] = lVar11;
              lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
              if (lVar11 == 0) goto LAB_01a3e990;
              if (*(int *)(lVar11 + 0x18) != 0) {
                *(undefined4 *)(lVar11 + 0x20) = 4;
                lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar14 == 0) goto LAB_01a3e984;
                if (3 < *puVar15) {
                  plVar13[7] = lVar11;
                  lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                  if (lVar11 == 0) goto LAB_01a3e990;
                  if (*(int *)(lVar11 + 0x18) != 0) {
                    *(undefined4 *)(lVar11 + 0x20) = 5;
                    lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar14 == 0) goto LAB_01a3e984;
                    if (4 < *puVar15) {
                      plVar13[8] = lVar11;
                      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                      if (lVar11 == 0) goto LAB_01a3e990;
                      if (*(int *)(lVar11 + 0x18) != 0) {
                        *(undefined4 *)(lVar11 + 0x20) = 0x13;
                        lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                        if (lVar14 == 0) goto LAB_01a3e984;
                        if (5 < *puVar15) {
                          plVar13[9] = lVar11;
                          lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                          if (lVar11 == 0) goto LAB_01a3e990;
                          if (*(int *)(lVar11 + 0x18) != 0) {
                            *(undefined4 *)(lVar11 + 0x20) = 7;
                            lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                            if (lVar14 == 0) goto LAB_01a3e984;
                            if (6 < *puVar15) {
                              plVar13[10] = lVar11;
                              lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                              if (lVar11 == 0) goto LAB_01a3e990;
                              if (*(int *)(lVar11 + 0x18) != 0) {
                                *(undefined4 *)(lVar11 + 0x20) = 8;
                                lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40))
                                ;
                                if (lVar14 == 0) goto LAB_01a3e984;
                                if (7 < *puVar15) {
                                  plVar13[0xb] = lVar11;
                                  lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                  if (lVar11 == 0) goto LAB_01a3e990;
                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                    *(undefined4 *)(lVar11 + 0x20) = 0x14;
                                    lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                        (*plVar13 + 0x40));
                                    if (lVar14 == 0) goto LAB_01a3e984;
                                    if (8 < *puVar15) {
                                      plVar13[0xc] = lVar11;
                                      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                      if (lVar11 == 0) goto LAB_01a3e990;
                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                        *(undefined4 *)(lVar11 + 0x20) = 10;
                                        lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                            (*plVar13 + 0x40));
                                        if (lVar14 == 0) goto LAB_01a3e984;
                                        if (9 < *puVar15) {
                                          plVar13[0xd] = lVar11;
                                          lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                          if (lVar11 == 0) goto LAB_01a3e990;
                                          if (*(int *)(lVar11 + 0x18) != 0) {
                                            *(undefined4 *)(lVar11 + 0x20) = 0xb;
                                            lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                                (*plVar13 + 0x40));
                                            if (lVar14 == 0) goto LAB_01a3e984;
                                            if (10 < *puVar15) {
                                              plVar13[0xe] = lVar11;
                                              lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                              if (lVar11 == 0) goto LAB_01a3e990;
                                              if (*(int *)(lVar11 + 0x18) != 0) {
                                                *(undefined4 *)(lVar11 + 0x20) = 0x15;
                                                lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)
                                                                                    (*plVar13 + 0x40
                                                                                    ));
                                                if (lVar14 == 0) goto LAB_01a3e984;
                                                if (0xb < *puVar15) {
                                                  plVar13[0xf] = lVar11;
                                                  lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                  if (lVar11 == 0) goto LAB_01a3e990;
                                                  if (*(int *)(lVar11 + 0x18) != 0) {
                                                    *(undefined4 *)(lVar11 + 0x20) = 0xd;
                                                    lVar14 = thunk_FUN_00d6225c(lVar11,*(undefined8
                                                                                         *)(*plVar13
                                                                                           + 0x40));
                                                    if (lVar14 == 0) goto LAB_01a3e984;
                                                    if (0xc < *puVar15) {
                                                      plVar13[0x10] = lVar11;
                                                      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1)
                                                      ;
                                                      if (lVar11 == 0) goto LAB_01a3e990;
                                                      if (*(int *)(lVar11 + 0x18) != 0) {
                                                        *(undefined4 *)(lVar11 + 0x20) = 0xe;
                                                        lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a3e984;
                                                  if (0xd < *puVar15) {
                                                    plVar13[0x11] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x16;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a3e984;
                                                  if (0xe < *puVar15) {
                                                    plVar13[0x12] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x10;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a3e984;
                                                  if (0xf < *puVar15) {
                                                    plVar13[0x13] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x11;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a3e984;
                                                  if (0x10 < *puVar15) {
                                                    plVar13[0x14] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x12;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a3e984;
                                                  if (0x11 < *puVar15) {
                                                    plVar13[0x15] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,1);
                                                    if (lVar11 == 0) goto LAB_01a3e990;
                                                    if (*(int *)(lVar11 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar11 + 0x20) = 0x17;
                                                      lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40));
                                                  if (lVar14 == 0) goto LAB_01a3e984;
                                                  if (0x12 < *puVar15) {
                                                    plVar13[0x16] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x13 < *puVar15) {
                                                    plVar13[0x17] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x14 < *puVar15) {
                                                    plVar13[0x18] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x15 < *puVar15) {
                                                    plVar13[0x19] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x16 < *puVar15) {
                                                    plVar13[0x1a] = lVar11;
                                                    lVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,0);
                                                    if ((lVar11 != 0) &&
                                                       (lVar14 = thunk_FUN_00d6225c(lVar11,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
                                                  goto LAB_01a3e984;
                                                  if (0x17 < *puVar15) {
                                                    plVar13[0x1b] = lVar11;
                                                    puVar1 = 
                                                  System_Xml_XmlRawWriterBase64Encoder_TypeInfo;
                                                  *(long **)(*(long *)(*(long *)puVar4 + 0xb8) +
                                                            0x18) = plVar13;
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1)
                                                  ;
                                                  puVar2 = 
                                                  System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                                  ;
                                                  puVar1 = PTR_DAT_033f2c60;
                                                  if (lVar11 != 0) {
                                                    FUN_01320e50(lVar11,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_SetStateMachine__
                                                  );
                                                  FUN_00bff618(lVar11,6,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,7,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,8,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,9,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0xb,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0xc,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0xd,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0xe,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0xf,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0x10,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0x11,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,0x12,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,2,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,3,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,4,*(undefined8 *)puVar1);
                                                  FUN_00bff618(lVar11,5,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20
                                                           ) = lVar11;
                                                  uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,5);
                                                  FUN_016a34e8(uVar12,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar4 + 0xb8) + 0x28) =
                                                       uVar12;
                                                  return;
                                                  }
                                                  goto LAB_01a3e990;
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
LAB_01a3e990:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


