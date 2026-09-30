/*
FUNCTION_NAME: FUN_05dda700
ENTRY_POINT: 05dda700
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_10;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05dda700(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 long param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte bVar18;
  long lVar19;
  int *piVar20;
  byte bVar21;
  undefined4 *puVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  void *__src;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_74 [4];
  undefined8 local_68;
  
  puVar6 = Method_System_Resources_ResourceSet_GetCaseInsensitiveObjectInternal__;
  local_68 = param_6;
  if ((DAT_06bc3c73 & 1) == 0) {
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleMeshDrawer_<Start>b__20_0__);
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PostFXSetupPassData>__
                );
    FUN_02f08768(PTR_DAT_067cc9f8);
    FUN_02f08768(PTR_DAT_067d1410);
    FUN_02f08768(System_Reflection_TypeFilter_TypeInfo);
    FUN_02f08768(PTR_DAT_067cca00);
    FUN_02f08768(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__);
    FUN_02f08768(Method_Oculus_Interaction_DistanceReticles_ReticleIconDrawer_<Start>b__24_0__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_System_Resources_ResourceSet_GetCaseInsensitiveObjectInternal__);
    FUN_02f08768(Method_System_MemoryExtensions_IndexOf<int>__);
    FUN_02f08768(PTR_DAT_067cb280);
    DAT_06bc3c73 = 1;
  }
  lVar12 = *(long *)puVar6;
  local_74[0] = 0;
  local_80 = 0;
  local_f8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar12 = *(long *)puVar6;
  }
  FUN_05c5cb44(local_74,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x20),0);
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar12 = FUN_05dea00c(param_4,*(undefined8 *)
                                 Method_Oculus_Interaction_DistanceReticles_ReticleMeshDrawer_<Start>b__20_0__
                       );
  lVar13 = FUN_05d4c208(param_4,*(undefined8 *)
                                 Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
  lVar14 = FUN_05d4c208(param_4,*(undefined8 *)
                                 Method_UnityEngine_NoAllocHelpers_SafeLength<Vector2>__);
  puVar6 = PTR_DAT_067cb280;
  lVar15 = *(long *)PTR_DAT_067cb280;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar15 = *(long *)puVar6;
  }
  lVar19 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x70);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x78);
  *(undefined4 *)(lVar19 + 0x18) = 0;
  *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined4 *)(lVar15 + 0x18) = 0;
  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  *(undefined4 *)(lVar12 + 0x40) = 0x10;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar27 = *(undefined4 *)(param_5 + 0xb8);
  *(undefined4 *)(lVar12 + 0x2c) = *(undefined4 *)(param_5 + 0xd4);
  *(undefined4 *)(lVar12 + 0x1c) = uVar27;
  uVar27 = FUN_05ddd61c(uVar27,param_5);
  *(undefined4 *)(lVar12 + 0x20) = uVar27;
  *(undefined4 *)(lVar12 + 0x24) = param_2;
  *(undefined4 *)(lVar12 + 0x28) = param_3;
  uVar27 = *(undefined4 *)(param_5 + 0x90);
  uVar29 = *(undefined4 *)(param_5 + 0xa0);
  *(undefined2 *)(lVar12 + 0x58) = 0;
  *(undefined4 *)(lVar12 + 0xac) = 0;
  *(undefined4 *)(lVar12 + 0x14) = uVar27;
  *(undefined4 *)(lVar12 + 0x18) = uVar27;
  *(undefined4 *)(lVar12 + 0x34) = uVar29;
  *(undefined4 *)(lVar12 + 0x38) = uVar29;
  *(undefined8 *)(lVar12 + 0xa4) = 0;
  *(undefined8 *)(lVar12 + 0x9c) = 0;
  *(undefined8 *)(lVar12 + 0x94) = 0;
  *(undefined8 *)(lVar12 + 0x8c) = 0;
  *(undefined8 *)(lVar12 + 0x84) = 0;
  *(undefined8 *)(lVar12 + 0x7c) = 0;
  *(undefined8 *)(lVar12 + 0x74) = 0;
  *(undefined8 *)(lVar12 + 0x6c) = 0;
  *(undefined8 *)(lVar12 + 100) = 0;
  *(undefined8 *)(lVar12 + 0x5c) = 0;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  bVar8 = false;
  if (*(char *)(param_5 + 0x8c) != '\0') {
    bVar8 = *(int *)(param_5 + 0x88) == 1;
  }
  lVar15 = *(long *)(lVar14 + 0x20);
  uVar28 = *(undefined8 *)(lVar14 + 0x28);
  iVar4 = *(int *)(lVar14 + 0x10);
  fVar32 = *(float *)(lVar13 + 0x1a8);
  *(bool *)(lVar12 + 0x11) = bVar8;
  uVar16 = FUN_060fb290(0);
  if ((uVar16 & 1) == 0) {
    bVar18 = 0;
  }
  else {
    bVar18 = *(byte *)(lVar12 + 0x11);
  }
  bVar8 = 0.0 < fVar32;
  *(byte *)(lVar12 + 0x10) = bVar18 & bVar8;
  if ((char)local_68 == '\0') {
    bVar9 = false;
  }
  else {
    iVar10 = FUN_03e1bd38(&local_68,
                          *(undefined8 *)
                           Method_Oculus_Interaction_DistanceReticles_ReticleIconDrawer_<Start>b__24_0__
                         );
    bVar9 = iVar10 == 2;
  }
  if (*(char *)(param_5 + 0x9c) == '\0') {
    bVar9 = false;
  }
  else if (*(int *)(param_5 + 0x94) == 1) {
    bVar9 = true;
  }
  *(bool *)(lVar12 + 0x31) = bVar9;
  uVar16 = FUN_060fb290(0);
  if ((uVar16 & 1) == 0) {
    bVar18 = 0;
  }
  else {
    bVar18 = 0;
    if (*(char *)(lVar12 + 0x31) != '\0') {
      bVar18 = *(byte *)(lVar14 + 0x30) ^ 1;
    }
  }
  cVar3 = *(char *)(lVar12 + 0x10);
  bVar18 = bVar18 & bVar8;
  *(byte *)(lVar12 + 0x30) = bVar18;
  if ((cVar3 == '\0') && (bVar18 == 0)) goto LAB_05ddb2f4;
  if (iVar4 == -1) {
LAB_05ddaaa8:
    bVar8 = false;
  }
  else {
    __src = (void *)(lVar15 + (long)iVar4 * 0x74);
    memmove(&local_f0,__src,0x74);
    uVar17 = FUN_0612c1d0(&local_f0,0);
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar16 = FUN_060f078c(uVar17,0,0);
    if ((uVar16 & 1) == 0) goto LAB_05ddaaa8;
    memmove(&local_f0,__src,0x74);
    lVar13 = FUN_0612c1d0(&local_f0,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    iVar10 = FUN_060c34ec(lVar13,0);
    bVar8 = iVar10 != 0;
  }
  bVar18 = false;
  if (cVar3 != '\0') {
    bVar18 = bVar8;
  }
  *(byte *)(lVar12 + 0x10) = bVar18;
  puVar7 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__;
  puVar5 = PTR_DAT_067c8f20;
  iVar10 = (int)uVar28;
  bVar8 = (bool)bVar18;
  if (*(char *)(lVar12 + 0x30) == '\0') {
joined_r0x05ddab84:
    if (bVar8 == false) goto LAB_05ddb2f4;
  }
  else {
    if (iVar10 < 1) {
      bVar8 = false;
    }
    else {
      iVar26 = 0;
      do {
        if (iVar4 != iVar26) {
          uVar17 = FUN_0347acb8(lVar15,uVar28,iVar26,*(undefined8 *)puVar7);
          iVar11 = FUN_0612c25c(uVar17,0);
          if ((iVar11 == 0) || (iVar11 = FUN_0612c25c(uVar17,0), iVar11 == 2)) {
            lVar13 = FUN_0612c1d0(uVar17,0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            uVar16 = FUN_060f245c(lVar13,0,0);
            if ((uVar16 & 1) == 0) {
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              iVar11 = FUN_060c34ec(lVar13,0);
              if (iVar11 != 0) {
                bVar21 = 1;
                goto LAB_05ddab74;
              }
            }
          }
        }
        iVar26 = iVar26 + 1;
      } while (iVar10 != iVar26);
      bVar21 = 0;
LAB_05ddab74:
      bVar18 = *(byte *)(lVar12 + 0x10);
      bVar8 = (bool)(*(byte *)(lVar12 + 0x30) & bVar21);
    }
    *(bool *)(lVar12 + 0x30) = bVar8;
    if (bVar18 == 0) goto joined_r0x05ddab84;
  }
  puVar5 = PTR_DAT_067c9860;
  if (0 < iVar10) {
    iVar26 = 0;
    do {
      if ((*(char *)(lVar12 + 0x10) == '\0') && (iVar4 == iVar26)) {
        lVar13 = *(long *)puVar6;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar13 = *(long *)puVar6;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x70);
        if (DAT_06bbab90 == '\0') {
          FUN_02f08768(puVar5);
          DAT_06bbab90 = '\x01';
        }
        puVar7 = PTR_DAT_067d1410;
        if (lVar13 == 0) {
UnityEngine_XR_ARSubsystems_XRResultStatus___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        puVar22 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
        lVar14 = *(long *)(lVar13 + 0x10);
        uVar27 = *puVar22;
        uVar29 = puVar22[1];
        uVar30 = puVar22[2];
        uVar31 = puVar22[3];
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto UnityEngine_XR_ARSubsystems_XRResultStatus___ctor;
        uVar25 = *(uint *)(lVar13 + 0x18);
        if (uVar25 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar25 * 0x10;
          *(uint *)(lVar13 + 0x18) = uVar25 + 1;
          *(undefined4 *)(lVar14 + 0x20) = uVar27;
          *(undefined4 *)(lVar14 + 0x24) = uVar29;
          *(undefined4 *)(lVar14 + 0x28) = uVar30;
          *(undefined4 *)(lVar14 + 0x2c) = uVar31;
        }
        else {
          FUN_03b660f0(lVar13,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x78);
        if (lVar14 == 0) {
LAB_05ddb334:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar13 = *(long *)(lVar14 + 0x10);
        lVar19 = *(long *)PTR_DAT_067cc9f8;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05ddb334;
        puVar24 = (uint *)(lVar14 + 0x18);
        uVar25 = *puVar24;
        if (*(uint *)(lVar13 + 0x18) <= uVar25) {
          FUN_03a6c18c(lVar14,0,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          goto LAB_05ddb278;
        }
LAB_05ddaee8:
        uVar27 = 0;
LAB_05ddaeec:
        *puVar24 = uVar25 + 1;
        *(undefined4 *)(lVar13 + (long)(int)uVar25 * 4 + 0x20) = uVar27;
      }
      else if ((*(char *)(lVar12 + 0x30) == '\0') && (iVar4 != iVar26)) {
        lVar13 = *(long *)puVar6;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar13 = *(long *)puVar6;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x70);
        if (DAT_06bbab90 == '\0') {
          FUN_02f08768(puVar5);
          DAT_06bbab90 = '\x01';
        }
        puVar7 = PTR_DAT_067d1410;
        if (lVar13 == 0) {
LAB_05ddb33c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        puVar22 = *(undefined4 **)(*(long *)puVar5 + 0xb8);
        lVar14 = *(long *)(lVar13 + 0x10);
        uVar27 = *puVar22;
        uVar29 = puVar22[1];
        uVar30 = puVar22[2];
        uVar31 = puVar22[3];
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_05ddb33c;
        uVar25 = *(uint *)(lVar13 + 0x18);
        if (uVar25 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + (long)(int)uVar25 * 0x10;
          *(uint *)(lVar13 + 0x18) = uVar25 + 1;
          *(undefined4 *)(lVar14 + 0x20) = uVar27;
          *(undefined4 *)(lVar14 + 0x24) = uVar29;
          *(undefined4 *)(lVar14 + 0x28) = uVar30;
          *(undefined4 *)(lVar14 + 0x2c) = uVar31;
        }
        else {
          FUN_03b660f0(lVar13,*(undefined8 *)
                               (*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x78);
        if (lVar14 == 0) {
LAB_05ddb338:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar13 = *(long *)(lVar14 + 0x10);
        lVar19 = *(long *)PTR_DAT_067cc9f8;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05ddb338;
        puVar24 = (uint *)(lVar14 + 0x18);
        uVar25 = *puVar24;
        if (uVar25 < *(uint *)(lVar13 + 0x18)) goto LAB_05ddaee8;
        FUN_03a6c18c(lVar14,0,*(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      else {
        uVar17 = FUN_0347acb8(lVar15,uVar28,iVar26,
                              *(undefined8 *)
                               Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__
                             );
        lVar13 = FUN_0612c1d0(uVar17,0);
        local_f8 = 0;
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar16 = FUN_060f078c(lVar13,0,0);
        if ((uVar16 & 1) != 0) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar14 = FUN_060ed87c(lVar13,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          FUN_033da294(lVar14,&local_f8,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_PostFXSetupPassData>__
                      );
        }
        lVar14 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar16 = FUN_060f60a4(lVar14,0);
        if ((uVar16 & 1) == 0) {
LAB_05ddadb0:
          lVar14 = *(long *)puVar6;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar14 = *(long *)puVar6;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
          if (lVar14 == 0) {
LAB_05ddb340:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar19 = *(long *)(lVar14 + 0x10);
          uVar27 = *(undefined4 *)(param_5 + 0xd8);
          uVar29 = *(undefined4 *)(param_5 + 0xdc);
          lVar23 = *(long *)PTR_DAT_067d1410;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05ddb340;
          uVar25 = *(uint *)(lVar14 + 0x18);
          if (uVar25 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar25 + 1;
            puVar22 = (undefined4 *)(lVar19 + (long)(int)uVar25 * 0x10 + 0x20);
            *puVar22 = uVar27;
UnityEngine_XR_ARSubsystems_TrackableId___ctor:
            puVar22[1] = uVar29;
            *(undefined8 *)(puVar22 + 2) = 0;
          }
          else {
            FUN_03b660f0(uVar27,uVar29,0,0,lVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          if (*(char *)(local_f8 + 0x20) != '\0') goto LAB_05ddadb0;
          lVar14 = *(long *)puVar6;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar14 = *(long *)puVar6;
          }
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x70);
          uVar27 = FUN_060c2fbc(lVar13,0);
          uVar29 = FUN_060c3070(lVar13,0);
          if (lVar14 == 0) {
LAB_05ddb384:
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar19 = *(long *)(lVar14 + 0x10);
          lVar23 = *(long *)PTR_DAT_067d1410;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05ddb384;
          uVar25 = *(uint *)(lVar14 + 0x18);
          if (uVar25 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar25 + 1;
            puVar22 = (undefined4 *)(lVar19 + (long)(int)uVar25 * 0x10 + 0x20);
            *puVar22 = uVar27;
            goto UnityEngine_XR_ARSubsystems_TrackableId___ctor;
          }
          FUN_03b660f0(uVar27,uVar29,0,0,lVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar16 = FUN_060f60a4(lVar14,0);
        if ((uVar16 & 1) != 0) {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar11 = *(int *)(local_f8 + 0x30);
          lVar14 = *(long *)Method_System_MemoryExtensions_IndexOf<int>__;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar14 = *(long *)Method_System_MemoryExtensions_IndexOf<int>__;
          }
          if (iVar11 == **(int **)(lVar14 + 0xb8)) {
            lVar14 = *(long *)puVar6;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar14 = *(long *)puVar6;
            }
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x78);
            uVar27 = FUN_060c3654(lVar13,0);
            if (lVar14 == 0) {
LAB_05ddb368:
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar13 = *(long *)(lVar14 + 0x10);
            lVar19 = *(long *)PTR_DAT_067cc9f8;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_05ddb368;
            puVar24 = (uint *)(lVar14 + 0x18);
            uVar25 = *puVar24;
            if (uVar25 < *(uint *)(lVar13 + 0x18)) goto LAB_05ddaeec;
            FUN_03a6c18c(lVar14,uVar27,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            goto LAB_05ddb278;
          }
        }
        lVar13 = local_f8;
        if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar16 = FUN_060f60a4(lVar13,0);
        if ((uVar16 & 1) != 0) {
          if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar11 = *(int *)(local_f8 + 0x30);
          lVar13 = *(long *)Method_System_MemoryExtensions_IndexOf<int>__;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar13 = *(long *)Method_System_MemoryExtensions_IndexOf<int>__;
          }
          piVar20 = *(int **)(lVar13 + 0xb8);
          if (iVar11 != *piVar20) {
            if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            iVar11 = *(int *)(local_f8 + 0x30);
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              piVar20 = *(int **)(*(long *)Method_System_MemoryExtensions_IndexOf<int>__ + 0xb8);
            }
            lVar13 = *(long *)puVar6;
            iVar1 = iVar11;
            if (piVar20[3] <= iVar11) {
              iVar1 = piVar20[3];
            }
            iVar2 = piVar20[1];
            if (piVar20[1] <= iVar11) {
              iVar2 = iVar1;
            }
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
              lVar13 = *(long *)puVar6;
            }
            lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x78);
            uVar27 = FUN_05d36f04(param_5,iVar2,0);
            if (lVar14 == 0) {
LAB_05ddb37c:
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar13 = *(long *)(lVar14 + 0x10);
            lVar19 = *(long *)PTR_DAT_067cc9f8;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_05ddb37c;
            puVar24 = (uint *)(lVar14 + 0x18);
            uVar25 = *puVar24;
            if (uVar25 < *(uint *)(lVar13 + 0x18)) goto LAB_05ddaeec;
            FUN_03a6c18c(lVar14,uVar27,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            goto LAB_05ddb278;
          }
        }
        lVar13 = *(long *)puVar6;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar13 = *(long *)puVar6;
        }
        lVar14 = *(long *)Method_System_MemoryExtensions_IndexOf<int>__;
        lVar19 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x78);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar14);
          lVar14 = *(long *)Method_System_MemoryExtensions_IndexOf<int>__;
        }
        uVar27 = FUN_05d36f04(param_5,*(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x10),0);
        if (lVar19 == 0) {
UnityEngine_XR_ARSubsystems_XRResultStatus__IsUnqualifiedSuccess:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar13 = *(long *)(lVar19 + 0x10);
        lVar14 = *(long *)PTR_DAT_067cc9f8;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar13 == 0) goto UnityEngine_XR_ARSubsystems_XRResultStatus__IsUnqualifiedSuccess;
        puVar24 = (uint *)(lVar19 + 0x18);
        uVar25 = *puVar24;
        if (uVar25 < *(uint *)(lVar13 + 0x18)) goto LAB_05ddaeec;
        FUN_03a6c18c(lVar19,uVar27,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
LAB_05ddb278:
      iVar26 = iVar26 + 1;
    } while (iVar10 != iVar26);
  }
  lVar13 = *(long *)puVar6;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar13 = *(long *)puVar6;
  }
  uVar28 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x70);
  cVar3 = *(char *)(param_5 + 0xe0);
  *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x78);
  *(undefined8 *)(lVar12 + 0x48) = uVar28;
  bVar8 = false;
  if (cVar3 != '\0') {
    if (*(char *)(lVar12 + 0x10) == '\0') {
      bVar8 = *(char *)(lVar12 + 0x30) != '\0';
    }
    else {
      bVar8 = true;
    }
  }
  *(bool *)(lVar12 + 0x3c) = bVar8;
LAB_05ddb2f4:
  FUN_05c5cb50(local_74,0);
  return lVar12;
}


