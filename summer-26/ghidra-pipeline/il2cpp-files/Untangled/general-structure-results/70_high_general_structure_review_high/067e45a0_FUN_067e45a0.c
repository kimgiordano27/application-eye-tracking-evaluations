/*
FUNCTION_NAME: FUN_067e45a0
ENTRY_POINT: 067e45a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_067e45a0(long param_1,long *param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_071d6600 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d36e78);
    FUN_02f07e70(System_Threading_CancellationTokenSource_Linked2CancellationTokenSource_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d3ab58);
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(Unity_VisualScripting_CloningContext_<>c_TypeInfo);
    FUN_02f07e70(System_Threading_CancellationToken_<>c_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass13_0_TypeInfo);
    FUN_02f07e70(UnityEngine_Canvas_WillRenderCanvases_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass14_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02378);
    FUN_02f07e70(Mono_Net_Security_ChainValidationHelper_<>c__DisplayClass11_0_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_CharacterInfo_<>c__DisplayClass20_0_TypeInfo);
    FUN_02f07e70(RootMotion_Demos_CharacterThirdPerson_<JumpSmooth>d__79_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass15_0_TypeInfo);
    FUN_02f07e70(System_Net_ChunkedInputStream_ReadBufferState_TypeInfo);
    FUN_02f07e70(System_IO_ChunkedMemoryStream_MemoryChunk_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass16_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(MagicaCloth2_ClothProcess_<>c_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02350);
    FUN_02f07e70(MagicaCloth2_ClothProcess_<>c__DisplayClass10_0_TypeInfo);
    FUN_02f07e70(Untangled_CameraFader_<FadeToAlpha>d__11_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothProcess_<>c__DisplayClass10_1_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothProcess_<>c__DisplayClass125_0_TypeInfo);
    FUN_02f07e70(UnityEngine_Rendering_Universal_ClearTargetsPass_<>c_TypeInfo);
    FUN_02f07e70(System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothProcess_<>c__DisplayClass126_0_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothProcess_ClothType_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02568);
    FUN_02f07e70(MagicaCloth2_ClothProcess_PaintMapData_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothProcess_RenderMeshInfo_TypeInfo);
    DAT_071d6600 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (param_2 == (long *)0x0) goto LAB_067e4f18;
  if ((char)param_2[0xd] != '\0') {
    return 0;
  }
  lStack_b8 = param_4[1];
  local_c0 = *param_4;
  lStack_a8 = param_4[3];
  local_b0 = param_4[2];
  if (*(int *)(*(long *)System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo + 0xe0)
      == 0) {
    thunk_FUN_02f12b58();
  }
  lStack_d8 = lStack_b8;
  local_e0 = local_c0;
  lStack_c8 = lStack_a8;
  lStack_d0 = local_b0;
  lVar6 = FUN_067e5034(param_2,&local_e0);
  if (lVar6 == 0) {
    return 0;
  }
  lVar11 = param_2[3];
  if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (param_4[1] == 0) goto LAB_067e4f18;
  if ((int)lVar11 == *(int *)(param_4[1] + 0x60)) {
    if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    puVar2 = Untangled_CameraFader_<FadeToAlpha>d__11_TypeInfo;
    plVar7 = (long *)*param_4;
    if (plVar7 != (long *)0x0) {
      lVar11 = *(long *)Untangled_CameraFader_<FadeToAlpha>d__11_TypeInfo;
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11)
         ) {
        if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d3ab58);
          plVar7 = (long *)*param_4;
          if (plVar7 == (long *)0x0) goto LAB_067e4f18;
          lVar11 = *(long *)puVar2;
        }
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440();
        }
        FUN_068e3f44(plVar7,lVar6,0);
        goto LAB_067e4890;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_06693dbc(*(undefined8 *)MagicaCloth2_ClothProcess_PaintMapData_TypeInfo,0);
  }
LAB_067e4890:
  if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if ((param_4[2] != 0) &&
     (uVar8 = FUN_067e560c(param_1,(int)param_2[3],&local_68), (uVar8 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (param_4[2] == 0) goto LAB_067e4f18;
    FUN_04c7462c(param_4[2],local_68,lVar6,
                 *(undefined8 *)Unity_VisualScripting_CloningContext_<>c_TypeInfo);
  }
  puVar2 = PTR_DAT_06d01e20;
  if ((int)param_2[7] != -1) {
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar8 = FUN_066ca6a0(uVar13,0,0);
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar11 = FUN_068e1074(*(long *)(param_1 + 0x28),0), lVar11 == 0)) goto LAB_067e4f18;
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_2 + 7)) goto LAB_067e4f4c;
      FUN_068cccd4(lVar6,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_2 + 7) * 8 + 0x20),0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06694324(*(undefined8 *)MagicaCloth2_ClothProcess_RenderMeshInfo_TypeInfo,0);
    }
    if ((int)param_2[7] != -1) {
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar8 = FUN_066ca6a0(uVar13,0,0);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar11 = FUN_068e1074(*(long *)(param_1 + 0x28),0), lVar11 == 0)) goto LAB_067e4f18;
        if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_2 + 7)) {
LAB_067e4f4c:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        FUN_068cccd4(lVar6,*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_2 + 7) * 8 + 0x20),0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        FUN_06694324(*(undefined8 *)MagicaCloth2_ClothProcess_RenderMeshInfo_TypeInfo,0);
      }
    }
  }
  bVar1 = *(byte *)(*(long *)MagicaCloth2_ClothProcess_<>c__DisplayClass10_0_TypeInfo + 0x130);
  if (*(byte *)(*param_2 + 0x130) < bVar1) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)MagicaCloth2_ClothProcess_<>c__DisplayClass10_0_TypeInfo) {
      plVar7 = (long *)0x0;
    }
  }
  if (param_3 != 0) {
    uVar8 = FUN_04bc2bc4(param_3,(int)param_2[3],&local_70,
                         *(undefined8 *)UnityEngine_Canvas_WillRenderCanvases_TypeInfo);
    lVar11 = local_70;
    if ((uVar8 & 1) != 0) {
      uVar13 = thunk_FUN_02ef1808(*(undefined8 *)
                                   System_Threading_CancellationTokenSource_Linked2CancellationTokenSource_TypeInfo
                                 );
      FUN_04a5da30(uVar13,0,*(undefined8 *)
                             UnityEngine_Rendering_Universal_ClearTargetsPass_<>c_TypeInfo,0);
      if ((lVar11 == 0) ||
         (FUN_03fd26c8(lVar11,uVar13,
                       *(undefined8 *)System_IO_ChunkedMemoryStream_MemoryChunk_TypeInfo),
         local_70 == 0)) goto LAB_067e4f18;
      FUN_03fd16fc(&local_c0,local_70,
                   *(undefined8 *)System_Net_ChunkedInputStream_ReadBufferState_TypeInfo);
      puVar3 = MagicaCloth2_ClothProcess_<>c__DisplayClass125_0_TypeInfo;
      puVar2 = PixelCrushers_DialogueSystem_CharacterInfo_<>c__DisplayClass20_0_TypeInfo;
      lStack_88 = lStack_b8;
      local_90 = local_c0;
      local_80 = local_b0;
LAB_067e4b2c:
      uVar8 = FUN_04df6d30(&local_90,*(undefined8 *)puVar2);
      if ((uVar8 & 1) != 0) {
        lVar11 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
        FUN_05645a04(lVar11,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        plVar12 = (long *)(lVar11 + 0x10);
        *plVar12 = local_80;
        thunk_FUN_02f411dc(plVar12);
        lStack_f8 = param_4[1];
        local_100 = *param_4;
        lStack_e8 = param_4[3];
        lStack_f0 = param_4[2];
        lVar9 = FUN_067e45a0(param_1,*plVar12,param_3,&local_100);
        if (lVar9 != 0) {
          if (plVar7 != (long *)0x0) {
            lVar14 = plVar7[0x10];
            if (lVar14 != 0) {
              uVar13 = thunk_FUN_02ef1808(*(undefined8 *)MagicaCloth2_ClothProcess_<>c_TypeInfo);
              FUN_0444e5e0(uVar13,lVar11,
                           *(undefined8 *)MagicaCloth2_ClothProcess_<>c__DisplayClass10_1_TypeInfo,0
                          );
              iVar4 = FUN_041870c4(lVar14,uVar13,
                                   *(undefined8 *)
                                    MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass15_0_TypeInfo
                                  );
              if (iVar4 != -1) {
                if (plVar7[0x10] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                lVar11 = FUN_041864a4(plVar7[0x10],iVar4,
                                      *(undefined8 *)
                                       MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass16_0_TypeInfo
                                     );
                uVar5 = FUN_05465718(lVar11,0);
                if (*(int *)(*(long *)PTR_DAT_06d36e78 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_066fc6a4(uVar5 & 1,
                             *(undefined8 *)
                              MagicaCloth2_ClothProcess_<>c__DisplayClass126_0_TypeInfo,0);
                if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                lVar14 = param_4[2];
                if (lVar14 != 0) {
                  if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
                    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d3ab58);
                    lVar14 = param_4[2];
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f080c0();
                    }
                  }
                  uVar8 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                                    (lVar14,lVar11,&local_98,
                                     *(undefined8 *)
                                      MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass13_0_TypeInfo
                                    );
                  if ((uVar8 & 1) != 0) {
                    if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f080c0();
                    }
                    FUN_068d0324(local_98,lVar9,0);
                    goto LAB_067e4b2c;
                  }
                }
                plVar12 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c0();
                }
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02ef170c(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar14 == 0)) {
                  uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                  FUN_02f07f94(uVar13,0);
                }
                if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c8();
                }
                plVar12[4] = lVar11;
                thunk_FUN_02f411dc(plVar12 + 4,lVar11);
                if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                lVar11 = param_4[2];
                uVar13 = *(undefined8 *)MagicaCloth2_ClothProcess_ClothType_TypeInfo;
                if (lVar11 == 0) {
                  lVar11 = **(long **)(*(long *)PTR_DAT_06d02350 + 0xb8);
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
                    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d3ab58);
                    lVar11 = param_4[2];
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f080c0();
                    }
                  }
                  uVar10 = FUN_04c7430c(lVar11,*(undefined8 *)
                                                MagicaCloth2_ClothInitSerializeData_<>c__DisplayClass14_0_TypeInfo
                                       );
                  uVar10 = FUN_03a2ed10(uVar10,*(undefined8 *)PTR_DAT_06d02378);
                  lVar11 = FUN_05465f68(*(undefined8 *)PTR_DAT_06d02568,uVar10,0);
                }
                if ((lVar11 != 0) &&
                   (lVar14 = thunk_FUN_02ef170c(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                   lVar14 == 0)) {
                  uVar13 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
                  FUN_02f07f94(uVar13,0);
                }
                if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f080c8();
                }
                plVar12[5] = lVar11;
                thunk_FUN_02f411dc(plVar12 + 5,lVar11);
                if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                FUN_06693fdc(uVar13,plVar12,0);
                FUN_068d0324(lVar6,lVar9,0);
                goto LAB_067e4b2c;
              }
            }
            FUN_068d0324(lVar6,lVar9,0);
            goto LAB_067e4b2c;
          }
          FUN_068d0324(lVar6,lVar9,0);
        }
        goto LAB_067e4b2c;
      }
      FUN_04df6d2c(&local_90,
                   *(undefined8 *)
                    Mono_Net_Security_ChainValidationHelper_<>c__DisplayClass11_0_TypeInfo);
    }
    if (plVar7 != (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      lVar11 = param_4[2];
      if (lVar11 != 0) {
        if (*(int *)(*(long *)PTR_DAT_06d3ab58 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)PTR_DAT_06d3ab58);
          lVar11 = param_4[2];
          if (lVar11 == 0) goto LAB_067e4f18;
        }
        System_Array_EmptyInternalEnumerator<KeyValuePair<int,_VertexAttribute>>___cctor
                  (lVar11,*(undefined8 *)System_Threading_CancellationToken_<>c_TypeInfo);
      }
    }
    return lVar6;
  }
LAB_067e4f18:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


