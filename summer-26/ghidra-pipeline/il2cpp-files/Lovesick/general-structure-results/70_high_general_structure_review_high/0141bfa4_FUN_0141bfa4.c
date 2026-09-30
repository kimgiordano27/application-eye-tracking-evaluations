/*
FUNCTION_NAME: FUN_0141bfa4
ENTRY_POINT: 0141bfa4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void FUN_0141bfa4(float param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if ((DAT_0377697d & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_10550);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RenderGraphPass>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12558);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f17f8);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    DAT_0377697d = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  if (DAT_03775e60 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03775e60 = '\x01';
  }
  puVar6 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar2 = -0x80000000;
  if ((float)(int)(param_1 * 8192.0) != INFINITY) {
    iVar2 = (int)(param_1 * 8192.0);
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  if (param_3 != 0) {
    uVar4 = *(undefined4 *)(param_3 + 0x18);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_ContainsKey__
                               );
    puVar9 = StringLiteral_12558;
    puVar8 = Method_Obi_ObiNativeList<TriangleMeshHeader>__ctor__;
    puVar7 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
    if (lVar10 != 0) {
      FUN_01320ebc(lVar10,uVar4,*(undefined8 *)StringLiteral_10550);
      lVar11 = FUN_00da4fb8(*(undefined8 *)puVar7,*(undefined4 *)(param_3 + 0x18));
      lVar12 = FUN_00da4fb8(*(undefined8 *)puVar8,*(undefined4 *)(param_3 + 0x18));
      if (*(int *)(param_3 + 0x18) < 1) {
        fVar27 = 0.0;
        if (lVar11 == 0) goto LAB_0141c6e8;
      }
      else {
        uVar20 = 0;
        fVar27 = 0.0;
        do {
          FUN_0132138c(param_3,uVar20 & 0xffffffff,&local_d0,*(undefined8 *)puVar9);
          lVar16 = local_d0;
          uVar13 = FUN_0269f3a4(0);
          fVar28 = 1.0;
          if ((uVar13 & 1) == 0) {
            fVar21 = fVar28;
            if (lVar16 == 0) goto LAB_0141c6e8;
          }
          else {
            if (lVar16 == 0) goto LAB_0141c6e8;
            plVar14 = *(long **)(lVar16 + 200);
            fVar21 = 1.0;
            if (plVar14 != (long *)0x0) {
              bVar5 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
              if (((bVar5 <= *(byte *)(*plVar14 + 300)) &&
                  (fVar21 = fVar28,
                  *(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar5 * 8 + -8) ==
                  *(long *)PTR_DAT_033f17f8)) &&
                 (fVar21 = (float)FUN_013f4640(plVar14,0), fVar21 <= 0.0)) {
                fVar21 = fVar28;
              }
            }
          }
          if (DAT_03774e1b == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774e1b = '\x01';
          }
          fVar30 = *(float *)(lVar16 + 0x5c);
          fVar29 = *(float *)(lVar16 + 0x60);
          fVar28 = *(float *)(lVar16 + 100);
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar11 == 0) goto LAB_0141c6e8;
          if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_0141c6e4;
          fVar21 = fVar21 * SQRT(fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28);
          *(float *)(lVar11 + 0x20 + uVar20 * 4) = fVar21;
          uVar20 = uVar20 + 1;
          fVar27 = fVar27 + fVar21;
        } while ((long)uVar20 < (long)*(int *)(param_3 + 0x18));
      }
      puVar6 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      if (0 < *(int *)(lVar11 + 0x18)) {
        uVar20 = 0;
        do {
          FUN_0132138c(param_3,uVar20 & 0xffffffff,&local_d0,*(undefined8 *)puVar9);
          if ((local_d0 == 0) || (lVar16 = *(long *)(param_2 + 0x40), lVar16 == 0))
          goto LAB_0141c6e8;
          uVar19 = *(uint *)(local_d0 + 0x28);
          if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_0141c6e4;
          lVar17 = lVar16 + (long)(int)uVar19 * 8;
          fVar30 = *(float *)(lVar17 + 0x20);
          fVar21 = *(float *)(lVar17 + 0x24);
          iVar1 = *(int *)(local_d0 + 0x30) + uVar19;
          fVar28 = fVar21;
          fVar29 = fVar30;
          if ((int)uVar19 < iVar1) {
            pfVar18 = (float *)(lVar17 + 0x24);
            lVar17 = (long)iVar1 - (long)(int)uVar19;
            fVar22 = fVar21;
            do {
              if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_0141c6e4;
              fVar21 = pfVar18[-1];
              fVar25 = *pfVar18;
              pfVar18 = pfVar18 + 2;
              uVar19 = uVar19 + 1;
              fVar23 = fVar21;
              if (fVar29 <= fVar21) {
                fVar23 = fVar29;
              }
              fVar29 = fVar23;
              if (fVar21 <= fVar30) {
                fVar21 = fVar30;
              }
              fVar30 = fVar21;
              fVar21 = fVar25;
              if (fVar22 <= fVar25) {
                fVar21 = fVar22;
              }
              if (fVar25 <= fVar28) {
                fVar25 = fVar28;
              }
              fVar28 = fVar25;
              lVar17 = lVar17 + -1;
              fVar22 = fVar21;
            } while (lVar17 != 0);
          }
          local_d0 = 0;
          uStack_c8 = 0;
          FUN_0268834c(fVar29,fVar21,fVar30 - fVar29,fVar28 - fVar21,&local_d0,0);
          if (lVar12 == 0) goto LAB_0141c6e8;
          if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_0141c6e4;
          lVar16 = lVar12 + uVar20 * 0x10;
          *(undefined8 *)(lVar16 + 0x28) = uStack_c8;
          *(long *)(lVar16 + 0x20) = local_d0;
          if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_0141c6e4;
          pfVar18 = (float *)(lVar11 + uVar20 * 4 + 0x20);
          *pfVar18 = *pfVar18 / fVar27;
          fVar28 = (float)FUN_026884c4(lVar16 + 0x20,0);
          if ((*(uint *)(lVar12 + 0x18) <= uVar20) ||
             (fVar21 = (float)FUN_026884d4(lVar16 + 0x20,0), *(uint *)(lVar11 + 0x18) <= uVar20))
          goto LAB_0141c6e4;
          FUN_00bbed00(fVar28 * *pfVar18 * 8192.0,fVar21 * *pfVar18 * 8192.0,lVar10,
                       *(undefined8 *)puVar6);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)*(int *)(lVar11 + 0x18));
      }
      plVar14 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                            System_Collections_Generic_Dictionary<IXRInteractable,_float>_TypeInfo
                                          );
      if (plVar14 != (long *)0x0) {
        FUN_0143afc0(plVar14,0);
        *(undefined1 *)((long)plVar14 + 0x14) = 0;
        lVar10 = (**(code **)(*plVar14 + 0x178))
                           (plVar14,lVar10,0x2000,0x2000,iVar2,*(undefined8 *)(*plVar14 + 0x180));
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) {
LAB_0141c6e4:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (0 < *(int *)(param_3 + 0x18)) {
            lVar10 = *(long *)(lVar10 + 0x20);
            uVar20 = 0;
            do {
              FUN_0132138c(param_3,uVar20 & 0xffffffff,&local_d0,*(undefined8 *)puVar9);
              lVar11 = local_d0;
              if ((local_d0 == 0) || (lVar12 == 0)) goto LAB_0141c6e8;
              if (*(uint *)(lVar12 + 0x18) <= uVar20) goto LAB_0141c6e4;
              lVar16 = lVar12 + uVar20 * 0x10;
              uVar19 = *(uint *)(local_d0 + 0x28);
              uStack_a8 = *(undefined8 *)(lVar16 + 0x28);
              local_b0 = *(undefined8 *)(lVar16 + 0x20);
              if ((lVar10 == 0) || (lVar16 = *(long *)(lVar10 + 0x20), lVar16 == 0))
              goto LAB_0141c6e8;
              if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_0141c6e4;
              lVar16 = lVar16 + uVar20 * 0x10;
              uStack_b8 = *(undefined8 *)(lVar16 + 0x28);
              local_c0 = *(undefined8 *)(lVar16 + 0x20);
              iVar2 = *(int *)(local_d0 + 0x30) + uVar19;
              if ((int)uVar19 < iVar2) {
                lVar16 = (long)(int)uVar19 << 3;
                lVar17 = (long)iVar2 - (long)(int)uVar19;
                do {
                  lVar15 = *(long *)(param_2 + 0x40);
                  if (lVar15 == 0) goto LAB_0141c6e8;
                  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_0141c6e4;
                  fVar30 = *(float *)(lVar15 + lVar16 + 0x20);
                  fVar27 = (float)FUN_02688390(&local_b0,0);
                  fVar28 = (float)FUN_026884c4(&local_b0,0);
                  fVar21 = (float)FUN_026884c4(&local_c0,0);
                  fVar29 = (float)FUN_02688390(&local_c0,0);
                  lVar15 = *(long *)(param_2 + 0x40);
                  if (lVar15 == 0) goto LAB_0141c6e8;
                  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_0141c6e4;
                  fVar26 = *(float *)(lVar15 + lVar16 + 0x24);
                  fVar22 = (float)FUN_026883a0(&local_b0,0);
                  fVar25 = (float)FUN_026884d4(&local_b0,0);
                  fVar23 = (float)FUN_026884d4(&local_c0,0);
                  fVar24 = (float)FUN_026883a0(&local_c0,0);
                  lVar15 = *(long *)(param_2 + 0x40);
                  if (lVar15 == 0) goto LAB_0141c6e8;
                  if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_0141c6e4;
                  lVar15 = lVar15 + lVar16;
                  lVar16 = lVar16 + 8;
                  lVar17 = lVar17 + -1;
                  uVar19 = uVar19 + 1;
                  *(float *)(lVar15 + 0x20) = ((fVar30 - fVar27) / fVar28) * fVar21 + fVar29;
                  *(float *)(lVar15 + 0x24) = ((fVar26 - fVar22) / fVar25) * fVar23 + fVar24;
                } while (lVar17 != 0);
              }
              iVar1 = *(int *)(lVar10 + 0x10);
              iVar3 = *(int *)(lVar10 + 0x14);
              if (iVar1 != iVar3) {
                if (iVar1 < iVar3) {
                  uVar19 = *(uint *)(lVar11 + 0x28);
                  if ((int)uVar19 < iVar2) {
                    lVar11 = (long)(int)uVar19 * 8 + 0x20;
                    lVar16 = (long)iVar2 - (long)(int)uVar19;
                    do {
                      lVar17 = *(long *)(param_2 + 0x40);
                      if (lVar17 == 0) goto LAB_0141c6e8;
                      if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_0141c6e4;
                      lVar16 = lVar16 + -1;
                      uVar19 = uVar19 + 1;
                      *(float *)(lVar17 + lVar11) =
                           ((float)iVar1 / (float)iVar3) * *(float *)(lVar17 + lVar11);
                      lVar11 = lVar11 + 8;
                    } while (lVar16 != 0);
                  }
                }
                else {
                  uVar19 = *(uint *)(lVar11 + 0x28);
                  if ((int)uVar19 < iVar2) {
                    lVar11 = (long)(int)uVar19 * 8 + 0x24;
                    lVar16 = (long)iVar2 - (long)(int)uVar19;
                    do {
                      lVar17 = *(long *)(param_2 + 0x40);
                      if (lVar17 == 0) goto LAB_0141c6e8;
                      if (*(uint *)(lVar17 + 0x18) <= uVar19) goto LAB_0141c6e4;
                      lVar16 = lVar16 + -1;
                      uVar19 = uVar19 + 1;
                      *(float *)(lVar17 + lVar11) =
                           ((float)iVar3 / (float)iVar1) * *(float *)(lVar17 + lVar11);
                      lVar11 = lVar11 + 8;
                    } while (lVar16 != 0);
                  }
                }
              }
              uVar20 = uVar20 + 1;
            } while ((long)uVar20 < (long)*(int *)(param_3 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_0141c6e8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


