/*
FUNCTION_NAME: FUN_05e385dc
ENTRY_POINT: 05e385dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_05e385dc(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auStack_210 [136];
  undefined8 local_188;
  undefined1 auStack_180 [136];
  int local_f8;
  undefined1 auStack_f4 [68];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_06dc3992 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__);
    FUN_02d965b8(PTR_DAT_06a0aa78);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRInputValueReader>_Add__);
    FUN_02d965b8(PTR_DAT_06a0dda8);
    FUN_02d965b8(Method_System_Collections_Generic_List<WeakReference<IPool>>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRPointCloudSubsystemDescriptor>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__);
    FUN_02d965b8(PTR_DAT_06a0d5f0);
    FUN_02d965b8(PTR_DAT_06a0a918);
    DAT_06dc3992 = 1;
  }
  local_188 = 0;
  memset(auStack_210,0,0x88);
  puVar5 = Method_System_Collections_Generic_List<WeakReference<IPool>>_Add__;
  puVar4 = PTR_DAT_069fb9c0;
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_1 == 0) {
LAB_05e38aec:
    if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar14) {
      uVar18 = 0;
      do {
        if (uVar14 <= uVar18) {
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          goto LAB_05e38b1c;
        }
        plVar15 = *(long **)(param_1 + (long)(int)uVar18 * 8 + 0x20);
        if (plVar15 == (long *)0x0) goto LAB_05e38aec;
        uVar9 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220));
        uVar17 = *(undefined8 *)puVar5;
        if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)(puVar4 + 0xe0));
        }
        uVar17 = FUN_054f73b4(uVar17,0);
        uVar10 = FUN_055006dc(uVar9,uVar17,0);
        if ((uVar10 & 1) == 0) {
          lVar11 = FUN_05d7fb20(plVar15,0);
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c(*(long *)(puVar4 + 0xe0));
          }
          uVar10 = FUN_05501380(lVar11,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar11 == 0) goto LAB_05e38aec;
            uVar10 = FUN_055025f4(lVar11,0);
            if ((uVar10 & 1) != 0) {
              uVar9 = *(undefined8 *)
                       Method_System_Collections_Generic_List<XRInputValueReader>_Add__;
              if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              plVar12 = (long *)FUN_054f73b4(uVar9,0);
              if (plVar12 == (long *)0x0) goto LAB_05e38aec;
              uVar10 = (**(code **)(*plVar12 + 0x328))
                                 (plVar12,lVar11,*(undefined8 *)(*plVar12 + 0x330));
              if ((uVar10 & 1) != 0) {
                if (param_2 == 0) goto LAB_05e38aec;
                iVar16 = *(int *)(param_2 + 0x18);
                if (*(int *)(*(long *)PTR_DAT_06a0dda8 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                FUN_05e375e0(lVar11,param_2,param_3);
                bVar2 = *(byte *)(*(long *)PTR_DAT_06a0aa78 + 0x130);
                if (*(byte *)(*plVar15 + 0x130) < bVar2) {
                  plVar12 = (long *)0x0;
                }
                else {
                  plVar12 = plVar15;
                  if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)PTR_DAT_06a0aa78) {
                    plVar12 = (long *)0x0;
                  }
                }
                uVar10 = FUN_0541de50(plVar12,0,0);
                if ((uVar10 & 1) != 0) {
                  uVar9 = (**(code **)(*plVar15 + 0x218))(plVar15,*(undefined8 *)(*plVar15 + 0x220))
                  ;
                  uVar17 = (**(code **)(*plVar15 + 0x208))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x210));
                  if (*(int *)(*(long *)PTR_DAT_06a0d5f0 + 0xe4) == 0) {
                    thunk_FUN_02df485c(*(long *)PTR_DAT_06a0d5f0);
                  }
                  local_188 = thunk_FUN_02da2bcc(uVar9,uVar17,0);
                  iVar8 = FUN_05533978(&local_188,0);
                  iVar1 = *(int *)(param_2 + 0x18);
                  if (iVar16 < iVar1) {
                    do {
                      puVar6 = 
                      Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__;
                      FUN_0410595c(auStack_180,param_2,iVar16,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__
                                  );
                      memcpy(auStack_210,auStack_180,0x88);
                      iVar7 = local_f8;
                      memcpy(&local_b0,auStack_f4,0x44);
                      FUN_0410595c(auStack_180,param_2,iVar16,*(undefined8 *)puVar6);
                      if (local_f8 != -1) {
                        memcpy(auStack_180,auStack_210,0x88);
                        memcpy(auStack_f4,&local_b0,0x44);
                        local_f8 = iVar7 + iVar8;
                        FUN_041059c0(param_2,iVar16,auStack_180,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__
                                    );
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar1 != iVar16);
                  }
                }
              }
            }
          }
          uVar9 = FUN_035c59ec(plVar15,0,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__
                              );
          lVar13 = FUN_0361471c(uVar9,*(undefined8 *)
                                       Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__
                               );
          if (lVar13 == 0) goto LAB_05e38aec;
          if (*(long *)(lVar13 + 0x18) == 0) {
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar10 = FUN_055006dc(lVar11,0,0);
            if ((uVar10 & 1) == 0) {
              uVar9 = *(undefined8 *)puVar5;
              if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              plVar12 = (long *)FUN_054f73b4(uVar9,0);
              if (plVar12 == (long *)0x0) goto LAB_05e38aec;
              uVar10 = (**(code **)(*plVar12 + 0x328))
                                 (plVar12,lVar11,*(undefined8 *)(*plVar12 + 0x330));
              if ((uVar10 & 1) != 0) {
                bVar2 = *(byte *)(*(long *)PTR_DAT_06a0a918 + 0x130);
                if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
                   (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
                    *(long *)PTR_DAT_06a0a918)) goto LAB_05e389e8;
              }
            }
          }
          else {
LAB_05e389e8:
            if (*(int *)(*(long *)PTR_DAT_06a0dda8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05e38b20(plVar15,lVar13,param_2);
          }
        }
        uVar14 = *(uint *)(param_1 + 0x18);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)uVar14);
    }
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
  }
LAB_05e38b1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


