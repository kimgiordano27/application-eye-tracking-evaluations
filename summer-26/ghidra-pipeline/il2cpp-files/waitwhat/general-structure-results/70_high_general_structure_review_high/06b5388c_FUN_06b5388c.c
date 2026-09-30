/*
FUNCTION_NAME: FUN_06b5388c
ENTRY_POINT: 06b5388c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x06b54214) */

void FUN_06b5388c(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,long param_5
                 ,long *param_6,long *param_7,long *param_8,long *param_9)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  uint uVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_bc [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  
  puVar10 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
  ;
  local_68 = param_4;
  if ((DAT_0755fef5 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_0711dd28);
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<TunnelingVignetteController_ProviderRecord>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                );
    DAT_0755fef5 = 1;
  }
  lVar13 = *(long *)puVar10;
  local_b8 = 0;
  local_bc[0] = '\0';
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar13 = *(long *)puVar10;
  }
  local_a8 = local_bc;
  local_bc[0] = '\0';
  local_b0 = 0;
  local_b8 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x28);
  local_a0 = &local_b8;
  FUN_05991f08(local_b8,local_bc,0);
  lVar13 = *(long *)puVar10;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar13 = *(long *)puVar10;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x28);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = FUN_03a438b4(lVar13,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_Dispose__
                       );
  *param_6 = lVar13;
  lVar13 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x38);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = FUN_03a438b4(lVar13,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_MoveNext__
                       );
  *param_7 = lVar13;
  lVar13 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x40);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = FUN_03a438b4(lVar13,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_Dispose__
                       );
  *param_8 = lVar13;
  lVar13 = *(long *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x30);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar13 = FUN_03a438b4(lVar13,*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<Collider,_IXRInteractable>_get_Current__
                       );
  *param_9 = lVar13;
  if (local_bc[0] != '\0') {
    thunk_FUN_03194b00(*local_a0,0);
  }
  if (param_5 != 0) {
    fVar27 = (float)FUN_06b1f8a4(param_5,0);
    fVar28 = (float)FUN_06b1e984(param_5,0);
    if (*(long *)(param_5 + 0x4b8) != 0) {
      lVar13 = FUN_06abe9f8(*(long *)(param_5 + 0x4b8),0);
      if (lVar13 != 0) {
        bVar7 = *(byte *)(lVar13 + 0x68);
        *(uint *)(param_5 + 0xb8) = *(uint *)(param_5 + 0xb8) & 0xfffffffb | (uint)bVar7 << 2;
        puVar10 = 
        Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_Dispose__
        ;
        if (param_3 != 0) {
          if (0 < (int)*(ulong *)(param_3 + 0x18)) {
            uVar21 = 0;
            uVar17 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
            fVar28 = 1.0 / fVar28;
            plVar23 = (long *)PTR_DAT_070c2418;
            do {
              if (uVar17 <= uVar21) {
LAB_06b5420c:
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              lVar18 = param_3 + uVar21 * 0x28;
              lVar13 = *(long *)(lVar18 + 0x28);
              uVar5 = *(undefined8 *)(lVar18 + 0x30);
              uVar24 = *(uint *)(lVar18 + 0x20);
              bVar8 = *(byte *)(lVar18 + 0x3c);
              iVar6 = *(int *)(lVar18 + 0x40);
              if (*(int *)(*plVar23 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_0698f888((uVar24 & 3) == 0,0);
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_get_Current__
                          + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar11 = FUN_06b9ad4c(0);
              if (0 < (int)uVar24) {
                lVar18 = lVar13 + 0x20;
                iVar2 = 0;
                do {
                  lVar14 = *param_6;
                  uVar4 = uVar24;
                  if ((int)(uVar11 & 0xfffffffc) <= (int)uVar24) {
                    uVar4 = uVar11 & 0xfffffffc;
                  }
                  if (lVar14 == 0) goto LAB_06b54210;
                  lVar19 = *(long *)(lVar14 + 0x10);
                  lVar22 = *(long *)PTR_DAT_0711dd28;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_06b54210;
                  uVar12 = *(uint *)(lVar14 + 0x18);
                  if (uVar12 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar12 + 1;
                    *(undefined8 *)(lVar19 + (long)(int)uVar12 * 8 + 0x20) = uVar5;
                  }
                  else {
                    FUN_042e4a64(lVar14,uVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar14 = *param_9;
                  if (lVar14 == 0) goto LAB_06b54210;
                  lVar19 = *(long *)(lVar14 + 0x10);
                  lVar22 = *(long *)
                            Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToFree>_Dispose__
                  ;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_06b54210;
                  uVar12 = *(uint *)(lVar14 + 0x18);
                  if (uVar12 < *(uint *)(lVar19 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar12 + 1;
                    *(int *)(lVar19 + (long)(int)uVar12 * 4 + 0x20) = iVar6;
                  }
                  else {
                    FUN_04284aa0(lVar14,iVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((bVar8 & 1) == 0 || bVar7 != 0) {
                    uVar12 = 0;
                  }
                  else {
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_MoveNext__
                                + 0xe4) == 0) {
                      thunk_FUN_031e5338();
                    }
                    uVar17 = FUN_06b97dac(param_5,0);
                    if ((uVar17 & 1) == 0) {
                      uVar12 = 0;
                      if ((iVar6 != 0x1015) && (iVar6 != 0x11014)) {
                        if (*(int *)(*(long *)
                                      Method_System_Collections_Generic_List_Enumerator<UITKTextJobSystem_ManagedJobData>_MoveNext__
                                    + 0xe4) == 0) {
                          thunk_FUN_031e5338();
                        }
                        uVar12 = FUN_06b99a2c(param_5,0);
                      }
                    }
                    else {
                      uVar12 = 1;
                    }
                  }
                  FUN_06c7addc(&local_68,uVar4,((int)uVar4 >> 2) * 6,&local_d0,&local_e0,0);
                  if (0 < (int)uVar4) {
                    uVar15 = 0x2000000;
                    if ((uVar12 & 1) == 0) {
                      uVar15 = 0;
                    }
                    if (lVar13 == 0) goto LAB_06b54210;
                    iVar26 = 0;
                    iVar1 = 0;
                    do {
                      iVar16 = iVar1;
                      if (*(int *)(*(long *)
                                    Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                  + 0xe4) == 0) {
                        thunk_FUN_031e5338();
                      }
                      uVar12 = iVar2 + iVar16;
                      if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_06b5420c;
                      puVar3 = (undefined8 *)(lVar18 + (long)(int)uVar12 * 0x20);
                      local_a0._4_4_ = *(undefined4 *)((long)puVar3 + 0x14);
                      fVar25 = 255.0;
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      fVar20 = fVar25;
                      if (0.0 <= *(float *)((long)puVar3 + 0x1c)) {
                        fVar20 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar3 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20);
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar3 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar3 * fVar28);
                      local_74 = 0;
                      local_90 = uVar15 | (int)fVar20 << 8;
                      FUN_04625fc8(&local_d0,iVar16,&local_b0,*(undefined8 *)puVar10);
                      if (*(uint *)(lVar13 + 0x18) <= uVar12 + 1) goto LAB_06b5420c;
                      puVar3 = (undefined8 *)(lVar18 + (long)(iVar2 + iVar16 + 1) * 0x20);
                      local_a0._4_4_ = *(undefined4 *)((long)puVar3 + 0x14);
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      if (0.0 <= *(float *)((long)puVar3 + 0x1c)) {
                        fVar25 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar3 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar3 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar3 * fVar28);
                      local_90 = uVar15 | (int)fVar25 << 8;
                      FUN_04625fc8(&local_d0,iVar16 + 1,&local_b0,*(undefined8 *)puVar10);
                      if (*(uint *)(lVar13 + 0x18) <= uVar12 + 2) goto LAB_06b5420c;
                      iVar1 = iVar16 + 2;
                      puVar3 = (undefined8 *)(lVar18 + (long)(iVar2 + iVar16 + 2) * 0x20);
                      local_a0._4_4_ = *(undefined4 *)((long)puVar3 + 0x14);
                      fVar20 = 255.0;
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      if (0.0 <= *(float *)((long)puVar3 + 0x1c)) {
                        fVar20 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar3 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar3 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar3 * fVar28);
                      local_90 = uVar15 | (int)fVar20 << 8;
                      FUN_04625fc8(&local_d0,iVar1,&local_b0,*(undefined8 *)puVar10);
                      if (*(uint *)(lVar13 + 0x18) <= uVar12 + 3) goto LAB_06b5420c;
                      puVar3 = (undefined8 *)(lVar18 + (long)(iVar2 + iVar16 + 3) * 0x20);
                      fVar20 = 255.0;
                      local_a0._4_4_ = *(undefined4 *)((long)puVar3 + 0x14);
                      local_a8._0_4_ = 0;
                      local_98 = 0;
                      if (0.0 <= *(float *)((long)puVar3 + 0x1c)) {
                        fVar20 = 0.0;
                      }
                      local_8c = 0;
                      local_7c = 0;
                      local_84 = 0;
                      local_a8._4_4_ = (undefined4)*(undefined8 *)((long)puVar3 + 0xc);
                      local_a0._0_4_ =
                           (undefined4)((ulong)*(undefined8 *)((long)puVar3 + 0xc) >> 0x20);
                      local_74 = 0;
                      local_b0 = CONCAT44(param_2 + (float)((ulong)*puVar3 >> 0x20) * fVar28,
                                          fVar27 + (float)*puVar3 * fVar28);
                      local_90 = uVar15 | (int)fVar20 << 8;
                      FUN_04625fc8(&local_d0,iVar16 + 3,&local_b0,*(undefined8 *)puVar10);
                      puVar9 = 
                      Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                      ;
                      FUN_04625a30(&local_e0,iVar26,iVar16,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_get_Current__
                                  );
                      FUN_04625a30(&local_e0,iVar26 + 1,iVar16 + 1,*(undefined8 *)puVar9);
                      FUN_04625a30(&local_e0,iVar26 + 2,iVar1,*(undefined8 *)puVar9);
                      FUN_04625a30(&local_e0,iVar26 + 3,iVar1,*(undefined8 *)puVar9);
                      FUN_04625a30(&local_e0,iVar26 + 4,iVar16 + 3,*(undefined8 *)puVar9);
                      FUN_04625a30(&local_e0,iVar26 + 5,iVar16,*(undefined8 *)puVar9);
                      iVar26 = iVar26 + 6;
                      iVar1 = iVar16 + 4;
                    } while (iVar16 + 4 < (int)uVar4);
                    iVar2 = iVar2 + iVar16 + 4;
                  }
                  lVar14 = *param_7;
                  if (lVar14 == 0) goto LAB_06b54210;
                  lVar19 = *(long *)(lVar14 + 0x10);
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_06b54210;
                  uVar12 = *(uint *)(lVar14 + 0x18);
                  if (uVar12 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)uVar12 * 0x10;
                    *(uint *)(lVar14 + 0x18) = uVar12 + 1;
                    *(undefined8 *)(lVar19 + 0x20) = local_d0;
                    *(undefined8 *)(lVar19 + 0x28) = uStack_c8;
                  }
                  else {
                    FUN_0418b49c();
                  }
                  lVar14 = *param_8;
                  if (lVar14 == 0) goto LAB_06b54210;
                  lVar19 = *(long *)(lVar14 + 0x10);
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar19 == 0) goto LAB_06b54210;
                  uVar12 = *(uint *)(lVar14 + 0x18);
                  if (uVar12 < *(uint *)(lVar19 + 0x18)) {
                    lVar19 = lVar19 + (long)(int)uVar12 * 0x10;
                    *(uint *)(lVar14 + 0x18) = uVar12 + 1;
                    *(undefined8 *)(lVar19 + 0x20) = local_e0;
                    *(undefined8 *)(lVar19 + 0x28) = uStack_d8;
                  }
                  else {
                    FUN_04188c18();
                  }
                  uVar24 = uVar24 - uVar4;
                } while (0 < (int)uVar24);
              }
              plVar23 = (long *)PTR_DAT_070c2418;
              if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_0698f888(uVar24 == 0,0);
              uVar17 = (ulong)*(uint *)(param_3 + 0x18);
              uVar21 = uVar21 + 1;
            } while ((long)uVar21 < (long)(int)*(uint *)(param_3 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_06b54210:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


