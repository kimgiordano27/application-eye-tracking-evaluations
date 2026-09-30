/*
FUNCTION_NAME: FUN_0142ac64
ENTRY_POINT: 0142ac64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


void FUN_0142ac64(float param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if ((DAT_037769ae & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10550);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderGraphPass>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12558);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f17f8);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c__DisplayClass176_0_<UnusedElementGroup>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_037769ae = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  puVar6 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar13 = -0x80000000;
  if ((float)(int)(param_1 * 8192.0) != INFINITY) {
    iVar13 = (int)(param_1 * 8192.0);
  }
  if (iVar13 < 2) {
    iVar13 = 1;
  }
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + 0x18);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                              );
    puVar7 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
    puVar5 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    if (lVar8 != 0) {
      FUN_01320ebc(lVar8,uVar3,*(undefined8 *)StringLiteral_10550);
      lVar9 = FUN_00da4fb8(*(undefined8 *)puVar5,*(undefined4 *)(param_3 + 0x18));
      lVar10 = FUN_00da4fb8(*(undefined8 *)puVar7,*(undefined4 *)(param_3 + 0x18));
      puVar5 = PTR_DAT_033f17f8;
      if (*(int *)(param_3 + 0x18) < 1) {
        fVar24 = 0.0;
        if (lVar9 == 0) goto LAB_0142b484;
      }
      else {
        uVar16 = 0;
        fVar24 = 0.0;
        do {
          FUN_0132138c(param_3,uVar16 & 0xffffffff,&local_c0,*(undefined8 *)StringLiteral_12558);
          uVar27 = local_c0;
          uVar11 = FUN_0269f3a4(0);
          fVar25 = 1.0;
          if ((uVar11 & 1) == 0) {
            fVar18 = fVar25;
            if (uVar27 == 0) goto LAB_0142b484;
          }
          else {
            if (uVar27 == 0) goto LAB_0142b484;
            plVar12 = *(long **)(uVar27 + 200);
            fVar18 = 1.0;
            if (plVar12 != (long *)0x0) {
              bVar4 = *(byte *)(*(long *)puVar5 + 300);
              if (((bVar4 <= *(byte *)(*plVar12 + 300)) &&
                  (fVar18 = fVar25,
                  *(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) == *(long *)puVar5))
                 && (fVar18 = (float)FUN_013f4640(plVar12,0), fVar18 <= 0.0)) {
                fVar18 = fVar25;
              }
            }
          }
          if (DAT_03774e1b == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774e1b = '\x01';
          }
          fVar28 = *(float *)(uVar27 + 0x5c);
          fVar26 = *(float *)(uVar27 + 0x60);
          fVar25 = *(float *)(uVar27 + 100);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar9 == 0) goto LAB_0142b484;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_0142b488;
          fVar18 = fVar18 * SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar25 * fVar25);
          *(float *)(lVar9 + 0x20 + uVar16 * 4) = fVar18;
          uVar16 = uVar16 + 1;
          fVar24 = fVar24 + fVar18;
        } while ((long)uVar16 < (long)*(int *)(param_3 + 0x18));
      }
      puVar6 = 
      Method_UnityEngine_ProBuilder_ProBuilderMesh_<>c__DisplayClass176_0_<UnusedElementGroup>b__0__
      ;
      param_2 = param_2 + 0xa0;
      if (0 < *(int *)(lVar9 + 0x18)) {
        uVar16 = 0;
        do {
          FUN_0132138c(param_3,uVar16 & 0xffffffff,&local_c0,*(undefined8 *)StringLiteral_12558);
          uVar27 = local_c0;
          if (local_c0 == 0) goto LAB_0142b484;
          iVar1 = *(int *)(local_c0 + 0x30) + *(int *)(local_c0 + 0x28);
          DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                    (param_2,*(int *)(local_c0 + 0x28),&local_c0,*(undefined8 *)puVar6);
          fVar25 = (float)local_c0;
          uVar11 = local_c0 & 0xffffffff;
          DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                    (param_2,*(undefined4 *)(uVar27 + 0x28),&local_c0,*(undefined8 *)puVar6);
          iVar15 = *(int *)(uVar27 + 0x28);
          uVar27 = uVar11;
          fVar18 = local_c0._4_4_;
          fVar26 = local_c0._4_4_;
          if (iVar15 < iVar1) {
            do {
              DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                        (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
              if ((float)local_c0 < (float)uVar11) {
                DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                          (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
                uVar11 = local_c0 & 0xffffffff;
              }
              DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                        (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
              if ((float)uVar27 < (float)local_c0) {
                DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                          (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
                uVar27 = local_c0 & 0xffffffff;
              }
              fVar25 = (float)uVar27;
              DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                        (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
              if (local_c0._4_4_ < fVar26) {
                DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                          (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
                fVar26 = local_c0._4_4_;
              }
              DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                        (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
              if (fVar18 < local_c0._4_4_) {
                DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                          (param_2,iVar15,&local_c0,*(undefined8 *)puVar6);
                fVar18 = local_c0._4_4_;
              }
              iVar15 = iVar15 + 1;
            } while (iVar1 != iVar15);
          }
          local_c0 = 0;
          uStack_b8 = 0;
          FUN_0268834c(uVar11,fVar26,fVar25 - (float)uVar11,fVar18 - fVar26,&local_c0,0);
          if (lVar10 == 0) goto LAB_0142b484;
          if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0142b488;
          lVar2 = lVar10 + uVar16 * 0x10;
          *(undefined8 *)(lVar2 + 0x28) = uStack_b8;
          *(ulong *)(lVar2 + 0x20) = local_c0;
          if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_0142b488;
          pfVar17 = (float *)(lVar9 + uVar16 * 4 + 0x20);
          *pfVar17 = *pfVar17 / fVar24;
          fVar25 = (float)FUN_026884c4(lVar2 + 0x20,0);
          if ((*(uint *)(lVar10 + 0x18) <= uVar16) ||
             (fVar18 = (float)FUN_026884d4(lVar2 + 0x20,0), *(uint *)(lVar9 + 0x18) <= uVar16))
          goto LAB_0142b488;
          FUN_00bbed00(fVar25 * *pfVar17 * 8192.0,fVar18 * *pfVar17 * 8192.0,lVar8,
                       *(undefined8 *)
                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)*(int *)(lVar9 + 0x18));
      }
      plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                            System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo
                                          );
      if (plVar12 != (long *)0x0) {
        FUN_0143afc0(plVar12,0);
        *(undefined1 *)((long)plVar12 + 0x14) = 0;
        lVar8 = (**(code **)(*plVar12 + 0x178))
                          (plVar12,lVar8,0x2000,0x2000,iVar13,*(undefined8 *)(*plVar12 + 0x180));
        puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRPokeFilter_OnHoverExited__;
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0142b488:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (0 < *(int *)(param_3 + 0x18)) {
            lVar8 = *(long *)(lVar8 + 0x20);
            uVar16 = 0;
            do {
              FUN_0132138c(param_3,uVar16 & 0xffffffff,&local_c0,*(undefined8 *)StringLiteral_12558)
              ;
              uVar27 = local_c0;
              if ((local_c0 == 0) || (lVar10 == 0)) goto LAB_0142b484;
              if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0142b488;
              lVar9 = lVar10 + uVar16 * 0x10;
              iVar13 = *(int *)(local_c0 + 0x28);
              uStack_98 = *(undefined8 *)(lVar9 + 0x28);
              local_a0 = *(undefined8 *)(lVar9 + 0x20);
              iVar15 = *(int *)(local_c0 + 0x30);
              if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x20), lVar9 == 0)) goto LAB_0142b484;
              if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_0142b488;
              lVar9 = lVar9 + uVar16 * 0x10;
              uStack_a8 = *(undefined8 *)(lVar9 + 0x28);
              local_b0 = *(undefined8 *)(lVar9 + 0x20);
              iVar1 = iVar15 + iVar13;
              if (iVar13 < iVar1) {
                do {
                  DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                            (param_2,iVar13,&local_c0,*(undefined8 *)puVar6);
                  fVar24 = (float)local_c0;
                  fVar18 = (float)FUN_02688390(&local_a0,0);
                  fVar26 = (float)FUN_026884c4(&local_a0,0);
                  fVar28 = (float)FUN_026884c4(&local_b0,0);
                  fVar19 = (float)FUN_02688390(&local_b0,0);
                  DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                            (param_2,iVar13,&local_c0,*(undefined8 *)puVar6);
                  fVar25 = local_c0._4_4_;
                  fVar20 = (float)FUN_026883a0(&local_a0,0);
                  fVar21 = (float)FUN_026884d4(&local_a0,0);
                  fVar22 = (float)FUN_026884d4(&local_b0,0);
                  fVar23 = (float)FUN_026883a0(&local_b0,0);
                  local_c0 = CONCAT44(((fVar25 - fVar20) / fVar21) * fVar22 + fVar23,
                                      ((fVar24 - fVar18) / fVar26) * fVar28 + fVar19);
                  FUN_013444d4(param_2,iVar13,&local_c0,*(undefined8 *)puVar5);
                  iVar15 = iVar15 + -1;
                  iVar13 = iVar13 + 1;
                } while (iVar15 != 0);
              }
              iVar13 = *(int *)(lVar8 + 0x10);
              iVar15 = *(int *)(lVar8 + 0x14);
              if (iVar13 != iVar15) {
                if (iVar13 < iVar15) {
                  iVar14 = *(int *)(uVar27 + 0x28);
                  if (iVar14 < iVar1) {
                    do {
                      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                                (param_2,iVar14,&local_c0,*(undefined8 *)puVar6);
                      local_c0 = CONCAT44(local_c0._4_4_,
                                          ((float)iVar13 / (float)iVar15) * (float)local_c0);
                      FUN_013444d4(param_2,iVar14,&local_c0,*(undefined8 *)puVar5);
                      iVar14 = iVar14 + 1;
                    } while (iVar1 != iVar14);
                  }
                }
                else {
                  iVar14 = *(int *)(uVar27 + 0x28);
                  if (iVar14 < iVar1) {
                    do {
                      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                                (param_2,iVar14,&local_c0,*(undefined8 *)puVar6);
                      local_c0 = CONCAT44(((float)iVar15 / (float)iVar13) * local_c0._4_4_,
                                          (int)local_c0);
                      FUN_013444d4(param_2,iVar14,&local_c0,*(undefined8 *)puVar5);
                      iVar14 = iVar14 + 1;
                    } while (iVar1 != iVar14);
                  }
                }
              }
              uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)*(int *)(param_3 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_0142b484:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


