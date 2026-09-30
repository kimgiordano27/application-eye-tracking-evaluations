/*
FUNCTION_NAME: FUN_05e39ac0
ENTRY_POINT: 05e39ac0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05e3ab9c) */
/* WARNING: Removing unreachable block (ram,0x05e3abb0) */
/* WARNING: Removing unreachable block (ram,0x05e3a85c) */

void FUN_05e39ac0(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_ed0 [208];
  undefined1 auStack_e00 [208];
  undefined1 auStack_d30 [208];
  undefined1 auStack_c60 [208];
  long local_b90;
  undefined1 *local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  uint local_ae8;
  undefined8 local_ae4;
  undefined8 uStack_adc;
  undefined8 local_ad4;
  undefined8 uStack_acc;
  undefined8 local_ac4;
  undefined8 uStack_abc;
  undefined4 local_ab4;
  undefined1 auStack_a90 [152];
  undefined1 auStack_9f8 [152];
  undefined1 auStack_960 [208];
  undefined1 auStack_890 [208];
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined1 auStack_7a0 [208];
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 auStack_5e8 [208];
  undefined1 auStack_518 [208];
  undefined1 auStack_448 [208];
  undefined1 auStack_378 [16];
  undefined8 local_368;
  undefined1 auStack_360 [220];
  ushort local_284 [2];
  undefined1 auStack_280 [208];
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar15 = tpidr_el0;
  local_68 = *(long *)(lVar15 + 0x28);
  if ((DAT_06dc3996 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>_get_Count__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>_get_Item__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRView>_set_Item__);
    FUN_02d965b8(PTR_DAT_069fda78);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlAttribute>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_02d965b8(PTR_DAT_069fda80);
    FUN_02d965b8(PTR_DAT_069fda88);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlNode>_ToArray__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__);
    FUN_02d965b8(PTR_DAT_06a0dda8);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlQualifiedName>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlQualifiedName>_Clear__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XmlQualifiedName>_Contains__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRLoader>_Add__);
    FUN_02d965b8(PTR_DAT_069fda90);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRInputValueReader>_GetEnumerator__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__);
    FUN_02d965b8(PTR_DAT_069fd220);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRPointCloudSubsystemDescriptor>__ctor__);
    FUN_02d965b8(PTR_DAT_069fda98);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__);
    FUN_02d965b8(PTR_DAT_069fdf78);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__);
    FUN_02d965b8(PTR_DAT_069fd228);
    FUN_02d965b8(PTR_DAT_06a0e698);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_AsyncResult<vx_resp_base_t>>_TypeInfo
                );
    DAT_06dc3996 = 1;
  }
  local_284[0] = 0;
  memset(auStack_378,0,0xf0);
  memset(auStack_448,0,0xd0);
  memset(auStack_518,0,0xd0);
  memset(auStack_5e8,0,0xd0);
  memset(&local_6b8,0,0xd0);
  uStack_6c8 = 0;
  local_6d0 = 0;
  memset(auStack_7a0,0,0xd0);
  uStack_7b8 = 0;
  local_7c0 = 0;
  local_7b0 = 0;
  memset(auStack_890,0,0xd0);
  memset(auStack_960,0,0xd0);
  memset(auStack_9f8,0,0x98);
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  memset(auStack_a90,0,0x98);
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar11 = thunk_FUN_02dd3144();
    uVar21 = thunk_FUN_02dfd288(PTR_DAT_06a0e1a8);
    FUN_0544bf54(uVar11,uVar21,0);
    if (*(long *)(lVar15 + 0x28) == local_68) {
      uVar21 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_List<XmlQualifiedName>_GetEnumerator__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar11,uVar21);
    }
    goto LAB_05e3ad70;
  }
  local_284[0] = *(ushort *)(param_1 + 0x40);
  puVar1 = (ushort *)(param_2 + 0x40);
  if ((*(ushort *)(param_1 + 0x40) & 0xff) != 0) {
    puVar1 = local_284;
  }
  *(ushort *)(param_1 + 0x40) = *puVar1;
  uVar9 = FUN_05d76688(param_1 + 0x28,0);
  if ((uVar9 & 1) != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    LeanTween__value(param_1 + 0x28,0);
  }
  plVar17 = (long *)(param_1 + 0x20);
  lVar19 = *plVar17;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_055006dc(lVar19,0,0);
  if ((uVar9 & 1) == 0) {
    plVar10 = (long *)*plVar17;
    if (plVar10 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar10 + 0x328))
                        (plVar10,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(*plVar10 + 0x330));
      if ((uVar9 & 1) != 0) goto LAB_05e39e18;
      goto LAB_05e39e28;
    }
    goto LAB_05e3abd0;
  }
LAB_05e39e18:
  *plVar17 = *(long *)(param_2 + 0x20);
  LeanTween__value(plVar17);
LAB_05e39e28:
  puVar5 = Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<XRView>__ctor__;
  uVar8 = FUN_05d76688(param_1 + 0x28,0);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  }
  puVar18 = (undefined8 *)(param_1 + 0x88);
  uVar11 = FUN_035329d8(*(undefined8 *)(param_2 + 0x88),*puVar18,*(undefined8 *)puVar4);
  *puVar18 = uVar11;
  LeanTween__value(puVar18,uVar11);
  uStack_b78 = *(undefined8 *)(param_2 + 0x70);
  local_b80 = *(undefined8 *)(param_2 + 0x68);
  uStack_b68 = *(undefined8 *)(param_2 + 0x80);
  local_b70 = *(undefined8 *)(param_2 + 0x78);
  FUN_03ca7d50(param_1 + 0x68,&local_b80,*(undefined8 *)puVar5);
  puVar18 = (undefined8 *)(param_1 + 0x98);
  uVar9 = FUN_0536c9cc(*puVar18,0);
  if ((uVar9 & 1) != 0) {
    *puVar18 = *(undefined8 *)(param_2 + 0x98);
    LeanTween__value(puVar18);
  }
  lVar19 = *(long *)(param_2 + 0x90);
  plVar17 = (long *)(param_1 + 0x90);
  if (*plVar17 == 0) {
LAB_05e3aacc:
    *plVar17 = lVar19;
    LeanTween__value(plVar17,lVar19);
  }
  else if (lVar19 != 0) {
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__
                               );
    FUN_041053c4(lVar12,*(undefined8 *)
                         Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__);
    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fd228);
    FUN_0400f984(lVar13,*(undefined8 *)PTR_DAT_069fd220);
    if (*(int *)(*(long *)PTR_DAT_06a0dda8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar19 = FUN_05e3ad78(lVar19,lVar13);
    lVar14 = FUN_05e3ad78(*plVar17,0);
    if (lVar14 == 0) {
      lVar15 = *(long *)(lVar15 + 0x28);
LAB_05e3ac50:
      if (lVar15 == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_05e3ad70;
    }
    FUN_04ef7bc4(&local_b80,lVar14,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_Add__);
    memcpy(auStack_378,&local_b80,0xf0);
    puVar6 = Method_System_Collections_Generic_List<XRView>_get_Count__;
    puVar5 = System_Collections_Generic_Dictionary<string,_AsyncResult<vx_resp_base_t>>_TypeInfo;
    puVar4 = PTR_DAT_069fda80;
    local_b90 = 0;
    local_b88 = auStack_378;
LAB_05e39fa8:
    uVar9 = FUN_0523b504(auStack_378,
                         *(undefined8 *)Method_System_Collections_Generic_List<XmlNode>__ctor__);
    uVar11 = local_368;
    lVar14 = local_b90;
    if ((uVar9 & 1) != 0) {
      memcpy(auStack_448,auStack_360,0xd0);
      if (lVar19 == 0) {
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05e3ad70;
      }
      uVar9 = FUN_04ef93a8(lVar19,uVar11,auStack_518,*(undefined8 *)puVar6);
      memcpy(&local_6b8,auStack_448,0xd0);
      if ((uVar9 & 1) != 0) {
        memcpy(auStack_c60,auStack_518,0xd0);
        FUN_05e3b17c(&local_b80,&local_6b8,auStack_c60);
        memcpy(auStack_5e8,&local_b80,0xd0);
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)Method_System_Collections_Generic_List<XRLoader>_Add__;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_5e8,0xd0);
              LeanTween__value(lVar14 + 0x20,0);
            }
            else {
              uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_5e8,0xd0);
              FUN_04105cec(lVar12,&local_1b0,uVar21);
            }
            FUN_04ef8d2c(lVar19,uVar11,
                         *(undefined8 *)Method_System_Collections_Generic_List<XRView>_Clear__);
            goto LAB_05e39fa8;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05e3ad70;
      }
      uStack_6c8 = uStack_690;
      local_6d0 = local_698;
      uVar9 = FUN_05d76688(&local_6d0,0);
      if ((uVar9 & 1) != 0) {
LAB_05e3a14c:
        if ((uVar8 & 1) == 0) {
          if (lVar13 == 0) {
            if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            goto LAB_05e3ad70;
          }
          if (0 < *(int *)(lVar13 + 0x18)) {
            iVar20 = 0;
            bVar3 = false;
            do {
              uVar22 = *(undefined8 *)(param_1 + 0x30);
              uVar21 = FUN_0400ff1c(lVar13,iVar20,*(undefined8 *)PTR_DAT_069fdf78);
              if (*(int *)(*(long *)PTR_DAT_06a0dda8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar9 = FUN_05e3b50c(uVar22,uVar21);
              if ((uVar9 & 1) != 0) {
                uVar21 = FUN_0400ff1c(lVar13,iVar20,*(undefined8 *)PTR_DAT_069fdf78);
                uVar21 = FUN_0536d554(uVar11,*(undefined8 *)puVar5,uVar21,0);
                uVar9 = FUN_04ef93a8(lVar19,uVar21,auStack_518,*(undefined8 *)puVar6);
                if ((uVar9 & 1) != 0) {
                  memcpy(&local_6b8,auStack_448,0xd0);
                  memcpy(auStack_d30,auStack_518,0xd0);
                  FUN_05e3b17c(&local_b80,&local_6b8,auStack_d30);
                  memcpy(auStack_7a0,&local_b80,0xd0);
                  if (lVar12 != 0) {
                    lVar14 = *(long *)(lVar12 + 0x10);
                    lVar16 = *(long *)Method_System_Collections_Generic_List<XRLoader>_Add__;
                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                    if (lVar14 != 0) {
                      uVar2 = *(uint *)(lVar12 + 0x18);
                      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
                        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                        memcpy((void *)(lVar14 + 0x20),auStack_7a0,0xd0);
                        LeanTween__value(lVar14 + 0x20,0);
                      }
                      else {
                        uVar22 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                        memcpy(&local_1b0,auStack_7a0,0xd0);
                        FUN_04105cec(lVar12,&local_1b0,uVar22);
                      }
                      FUN_04ef8d2c(lVar19,uVar21,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<XRView>_Clear__);
                      bVar3 = true;
                      goto LAB_05e3a4a4;
                    }
                  }
                  if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  goto LAB_05e3ad70;
                }
              }
LAB_05e3a4a4:
              iVar20 = iVar20 + 1;
            } while (iVar20 < *(int *)(lVar13 + 0x18));
            if (bVar3) goto LAB_05e39fa8;
          }
        }
        else {
          if (lVar13 == 0) {
            if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            goto LAB_05e3ad70;
          }
          FUN_04010c90(&local_b80,lVar13,*(undefined8 *)PTR_DAT_069fda90);
          bVar3 = false;
          local_1b0 = 0;
          local_7b0 = local_b70;
          local_1a8 = &local_7c0;
          uStack_7b8 = uStack_b78;
          local_7c0 = local_b80;
          while (uVar9 = FUN_05156804(&local_7c0,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
            uVar21 = FUN_0536d554(uVar11,*(undefined8 *)puVar5,local_7b0,0);
            uVar9 = FUN_04ef93a8(lVar19,uVar21,auStack_518,*(undefined8 *)puVar6);
            if ((uVar9 & 1) != 0) {
              memcpy(&local_6b8,auStack_448,0xd0);
              memcpy(auStack_e00,auStack_518,0xd0);
              FUN_05e3b17c(&local_b80,&local_6b8,auStack_e00);
              memcpy(auStack_890,&local_b80,0xd0);
              if (lVar12 == 0) {
                if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                goto LAB_05e3ad70;
              }
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar16 = *(long *)Method_System_Collections_Generic_List<XRLoader>_Add__;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) {
                if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                goto LAB_05e3ad70;
              }
              uVar2 = *(uint *)(lVar12 + 0x18);
              if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
                *(uint *)(lVar12 + 0x18) = uVar2 + 1;
                memcpy((void *)(lVar14 + 0x20),auStack_890,0xd0);
                LeanTween__value(lVar14 + 0x20,0);
              }
              else {
                uVar22 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
                memcpy(auStack_280,auStack_890,0xd0);
                FUN_04105cec(lVar12,auStack_280,uVar22);
              }
              bVar3 = true;
              FUN_04ef8d2c(lVar19,uVar21,
                           *(undefined8 *)Method_System_Collections_Generic_List<XRView>_Clear__);
            }
          }
          FUN_05156800(&local_7c0,*(undefined8 *)PTR_DAT_069fda78);
          if (bVar3) goto LAB_05e39fa8;
        }
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)Method_System_Collections_Generic_List<XRLoader>_Add__;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_448,0xd0);
              LeanTween__value(lVar14 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_448,0xd0);
              FUN_04105cec(lVar12,&local_1b0,uVar11);
            }
            goto LAB_05e39fa8;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05e3ad70;
      }
      memcpy(&local_6b8,auStack_448,0xd0);
      uVar22 = uStack_690;
      uVar21 = local_698;
      if (*(int *)(*(long *)PTR_DAT_06a0dda8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc39f4 == '\0') {
        FUN_02d965b8(PTR_DAT_06a0dda8);
        DAT_06dc39f4 = '\x01';
      }
      lVar14 = *(long *)PTR_DAT_06a0dda8;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar14 = *(long *)PTR_DAT_06a0dda8;
      }
      uVar9 = FUN_05d6d440(uVar21,uVar22,**(undefined8 **)(lVar14 + 0xb8),
                           (*(undefined8 **)(lVar14 + 0xb8))[1],0);
      if ((uVar9 & 1) != 0) goto LAB_05e3a14c;
      memcpy(&local_6b8,auStack_448,0xd0);
      local_6d0 = local_6b8;
      uStack_6c8 = local_6b0;
      uVar9 = FUN_04ef93a8(lVar19,local_6b0,auStack_518,*(undefined8 *)puVar6);
      if ((uVar9 & 1) != 0) {
        memcpy(&local_6b8,auStack_448,0xd0);
        memcpy(auStack_ed0,auStack_518,0xd0);
        FUN_05e3b17c(&local_b80,&local_6b8,auStack_ed0);
        memcpy(auStack_960,&local_b80,0xd0);
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)Method_System_Collections_Generic_List<XRLoader>_Add__;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_960,0xd0);
              LeanTween__value(lVar14 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_960,0xd0);
              FUN_04105cec(lVar12,&local_1b0,uVar11);
            }
            memcpy(&local_6b8,auStack_448,0xd0);
            local_6d0 = local_6b8;
            uStack_6c8 = local_6b0;
            FUN_04ef8d2c(lVar19,local_6b0,
                         *(undefined8 *)Method_System_Collections_Generic_List<XRView>_Clear__);
            goto LAB_05e39fa8;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05e3ad70;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x28);
      uVar21 = *(undefined8 *)(param_1 + 0x30);
      memcpy(&local_6b8,auStack_448,0xd0);
      uVar7 = uStack_690;
      uVar22 = local_698;
      if (*(int *)(*(long *)PTR_DAT_06a0dda8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_05e3b638(uVar11,uVar21,uVar22,uVar7);
      if ((uVar9 & 1) != 0) {
        if (lVar12 != 0) {
          lVar14 = *(long *)(lVar12 + 0x10);
          lVar16 = *(long *)Method_System_Collections_Generic_List<XRLoader>_Add__;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              lVar14 = lVar14 + (long)(int)uVar2 * 0xd0;
              *(uint *)(lVar12 + 0x18) = uVar2 + 1;
              memcpy((void *)(lVar14 + 0x20),auStack_448,0xd0);
              LeanTween__value(lVar14 + 0x20,0);
            }
            else {
              uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
              memcpy(&local_1b0,auStack_448,0xd0);
              FUN_04105cec(lVar12,&local_1b0,uVar11);
            }
            goto LAB_05e39fa8;
          }
        }
        if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05e3ad70;
      }
      goto LAB_05e39fa8;
    }
    FUN_0523b674(local_b88,
                 *(undefined8 *)Method_System_Collections_Generic_List<XmlAttribute>__ctor__);
    if (lVar14 != 0) {
      if (*(long *)(lVar15 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(lVar14);
      }
      goto LAB_05e3ad70;
    }
    if ((uVar8 & 1) == 0) {
      if ((lVar12 == 0) || (lVar19 == 0)) goto LAB_05e3abd0;
      iVar20 = *(int *)(lVar12 + 0x18);
      uVar11 = FUN_04ef73d8(lVar19,*(undefined8 *)
                                    Method_System_Collections_Generic_List<XRView>_get_Item__);
      uVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Collections_Generic_List<XmlNode>_ToArray__);
      FUN_03b7c508(uVar21,param_1,
                   *(undefined8 *)Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__,0
                  );
      uVar11 = FUN_036179e0(uVar11,uVar21,
                            *(undefined8 *)Method_System_Collections_Generic_List<XRView>_set_Item__
                           );
      FUN_04105f54(lVar12,uVar11,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XmlQualifiedName>_Contains__);
      puVar5 = Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__;
      puVar4 = Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__;
      if (iVar20 < *(int *)(lVar12 + 0x18)) {
        do {
          FUN_0410595c(&local_b80,lVar12,iVar20,*(undefined8 *)puVar4);
          memcpy(auStack_a90,&local_b80,0x98);
          uStack_d8 = uStack_adc;
          local_e0 = local_ae4;
          uStack_c8 = uStack_acc;
          local_d0 = local_ad4;
          uVar8 = local_ae8 & 0xfffffff7;
          uStack_b8 = uStack_abc;
          local_c0 = local_ac4;
          local_b0 = local_ab4;
          memcpy(&local_b80,auStack_a90,0x98);
          uStack_adc = uStack_d8;
          local_ae4 = local_e0;
          uStack_acc = uStack_c8;
          local_ad4 = local_d0;
          uStack_abc = uStack_b8;
          local_ac4 = local_c0;
          local_ab4 = local_b0;
          local_ae8 = uVar8;
          FUN_041059c0(lVar12,iVar20,&local_b80,*(undefined8 *)puVar5);
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(lVar12 + 0x18));
      }
    }
    else {
      if ((lVar12 == 0) || (lVar19 == 0)) {
LAB_05e3abd0:
        lVar15 = *(long *)(lVar15 + 0x28);
        goto LAB_05e3ac50;
      }
      iVar20 = *(int *)(lVar12 + 0x18);
      uVar11 = FUN_04ef73d8(lVar19,*(undefined8 *)
                                    Method_System_Collections_Generic_List<XRView>_get_Item__);
      FUN_04105f54(lVar12,uVar11,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<XmlQualifiedName>_Contains__);
      puVar5 = Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__;
      puVar4 = Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__;
      if (iVar20 < *(int *)(lVar12 + 0x18)) {
        do {
          FUN_0410595c(&local_b80,lVar12,iVar20,*(undefined8 *)puVar4);
          memcpy(auStack_9f8,&local_b80,0x98);
          uStack_98 = uStack_adc;
          local_a0 = local_ae4;
          uStack_88 = uStack_acc;
          local_90 = local_ad4;
          uVar8 = local_ae8 & 0xfffffff7;
          uStack_78 = uStack_abc;
          local_80 = local_ac4;
          local_70 = local_ab4;
          memcpy(&local_b80,auStack_9f8,0x98);
          uStack_adc = uStack_98;
          local_ae4 = local_a0;
          uStack_acc = uStack_88;
          local_ad4 = local_90;
          uStack_abc = uStack_78;
          local_ac4 = local_80;
          local_ab4 = local_70;
          local_ae8 = uVar8;
          FUN_041059c0(lVar12,iVar20,&local_b80,*(undefined8 *)puVar5);
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(lVar12 + 0x18));
      }
    }
    lVar19 = FUN_04107b5c(lVar12,*(undefined8 *)
                                  Method_System_Collections_Generic_List<XRInputValueReader>_GetEnumerator__
                         );
    goto LAB_05e3aacc;
  }
  if (*(long *)(lVar15 + 0x28) == local_68) {
    return;
  }
LAB_05e3ad70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


