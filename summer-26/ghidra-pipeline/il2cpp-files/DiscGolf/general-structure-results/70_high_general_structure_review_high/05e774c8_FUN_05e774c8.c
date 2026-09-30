/*
FUNCTION_NAME: FUN_05e774c8
ENTRY_POINT: 05e774c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_05e774c8(ushort *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 local_160;
  long **pplStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [136];
  undefined4 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  int local_6c;
  long local_68;
  long local_58;
  
  local_58 = param_2;
  if ((DAT_06dc3bcf & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0da60);
    FUN_02d965b8(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_AddRange__);
    FUN_02d965b8(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_Sort__);
    FUN_02d965b8(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_ToArray__);
    FUN_02d965b8(Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_get_Count__);
    FUN_02d965b8(PTR_DAT_06a0d5b0);
    FUN_02d965b8(Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__);
    FUN_02d965b8(PTR_DAT_06a0e4b8);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__);
    FUN_02d965b8(Method_Oculus_Platform_Message<LaunchBlockFlowResult>__ctor__);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>__ctor__
                );
    FUN_02d965b8(Method_Oculus_Platform_Message<LaunchBlockFlowResult>_get_Data__);
    FUN_02d965b8(UnityEngine_PlayerLoop_Update_var);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_System_Collections_Generic_LowLevelList<object>_set_Item__);
    FUN_02d965b8(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    DAT_06dc3bcf = 1;
  }
  puVar3 = PTR_DAT_069fb990;
  local_68 = 0;
  local_6c = 0;
  local_80 = 0;
  local_a8 = (long *)0x0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_b0 = 0;
  if ((param_3 != 0) && (lVar17 = *(long *)(param_3 + 0xd0), lVar17 != 0)) {
    memcpy(auStack_138,param_1,0x80);
    lVar17 = FUN_05ecc520(lVar17,auStack_138,0);
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar12);
    }
    uVar9 = FUN_06350670(lVar17,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(param_3 + 0x9c) < 2) {
        local_160 = CONCAT44(local_160._4_4_,*(undefined4 *)(param_1 + 2));
        uVar10 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x50),&local_160);
        FUN_0536e0dc(*(undefined8 *)
                      Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__,
                     *(undefined8 *)
                      Method_System_Collections_Generic_LowLevelList<object>_set_Item__,uVar10,0);
        FUN_05e6f7ec();
      }
      if (*(long *)(*(long *)PTR_DAT_06a0d5b0 + 0x38) == 0) {
        FUN_02dcfd74();
      }
      FUN_02f3a238(&local_58,&local_6c,4,0,0);
      iVar7 = local_6c;
      if (local_58 != 0) {
        iVar1 = *(int *)(local_58 + 8);
        if (DAT_06db599d == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db599d = '\x01';
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        lVar17 = local_58;
        uVar8 = *(undefined4 *)(local_58 + 0xc);
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar8 = FUN_054e9258(uVar8,iVar7 + iVar1,0);
        *(undefined4 *)(lVar17 + 8) = uVar8;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (lVar17 != 0) {
      *(undefined8 *)(lVar17 + 0x88) = *(undefined8 *)(param_1 + 8);
      FUN_05e75ce0(lVar17);
      local_68 = param_2;
      uVar10 = FUN_05e5e724(param_3,0);
      FUN_03723850(lVar17,&local_68,uVar10,
                   *(undefined8 *)Method_Oculus_Platform_Message<LaunchBlockFlowResult>_get_Data__);
      if (((*param_1 & 6) == 4) && (pcVar13 = (char *)(lVar17 + 0xf8), *pcVar13 != '\0')) {
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        pcVar13[2] = '\0';
        pcVar13[3] = '\0';
        pcVar13[4] = '\0';
        pcVar13[5] = '\0';
        pcVar13[6] = '\0';
        pcVar13[7] = '\0';
        *(undefined8 *)(lVar17 + 0x100) = 0;
      }
      if (*(long *)(param_3 + 0xd0) != 0) {
        FUN_05ecdaec(*(long *)(param_3 + 0xd0),lVar17,param_1,*param_1 >> 6 & 1,0);
        puVar4 = Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__;
        if ((*param_1 >> 9 & 1) != 0) {
          lVar12 = *(long *)(param_1 + 0x10);
          if (lVar12 == 0) goto LAB_05e77bd8;
          if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
            uVar9 = 0;
            uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
            do {
              if (uVar14 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              if (*(long *)(lVar17 + 0xd0) == 0) goto LAB_05e77bd8;
              FUN_03c5f798(*(long *)(lVar17 + 0xd0),*(undefined8 *)(lVar12 + 0x20 + uVar9 * 8),
                           *(undefined8 *)puVar4);
              uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((long)uVar9 < (long)(int)*(uint *)(lVar12 + 0x18));
          }
        }
        if (*(char *)(param_3 + 0x30) != '\0') {
          uVar2 = *param_1 >> 10 & 1;
          *(char *)(lVar17 + 0xb0) = (char)uVar2;
          if (((param_4 & 1) == 0) || (*(char *)(lVar17 + 0x99) != '\0')) {
            if (uVar2 == 0) {
              lVar12 = *(long *)(lVar17 + 0xd0);
              uVar10 = FUN_05e5e724(param_3,0);
              if (lVar12 == 0) goto LAB_05e77bd8;
              uVar9 = FUN_03c5ecb0(lVar12,uVar10,*(undefined8 *)PTR_DAT_06a0e4b8);
              if ((uVar9 & 1) == 0) {
                return lVar17;
              }
            }
            lVar12 = FUN_05e5e6f4(param_3,0);
            if (lVar12 != 0) {
              lVar12 = FUN_05e5e6f4(param_3,0);
              if (lVar12 != 0) {
                lVar15 = *(long *)puVar3;
                uVar10 = *(undefined8 *)(lVar12 + 0x28);
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02df485c(lVar15);
                }
                uVar9 = FUN_0634eb94(uVar10,0,0);
                if ((uVar9 & 1) == 0) {
                  return lVar17;
                }
                lVar12 = FUN_05e5e6f4(param_3,0);
                if (lVar12 != 0) {
                  lVar12 = *(long *)(lVar12 + 0x28);
                  if (*(char *)(lVar17 + 0x99) == '\0') {
                    if (lVar12 == 0) goto LAB_05e77bd8;
                  }
                  else {
                    if ((lVar12 == 0) || (*(long *)(lVar12 + 0xd0) == 0)) goto LAB_05e77bd8;
                    FUN_03c5f798(*(long *)(lVar12 + 0xd0),*(undefined8 *)(lVar17 + 0x88),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__
                                );
                  }
                  puVar3 = 
                  Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__;
                  if (*(long *)(lVar17 + 0xd0) != 0) {
                    FUN_03c5f798(*(long *)(lVar17 + 0xd0),*(undefined8 *)(lVar12 + 0x88),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_List<TextureRegistry_TextureInfo>__ctor__
                                );
                    if (*(char *)(lVar17 + 0x99) != '\0') {
                      if ((*(long *)(param_3 + 0xd0) == 0) ||
                         (lVar12 = *(long *)(*(long *)(param_3 + 0xd0) + 0x20), lVar12 == 0))
                      goto LAB_05e77bd8;
                      FUN_04ff1ec4(&local_160,lVar12,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_AddRange__
                                  );
                      puVar4 = 
                      Method_System_Collections_Generic_List<TimeZoneInfo_AdjustmentRule>_ToArray__;
                      puStack_98 = pplStack_158;
                      local_a0 = local_160;
                      local_88 = lStack_148;
                      uStack_90 = uStack_150;
                      local_80 = local_140;
                      local_160 = 0;
                      pplStack_158 = (long **)&local_a0;
                      while (uVar9 = FUN_0525c4dc(&local_a0,*(undefined8 *)puVar4), (uVar9 & 1) != 0
                            ) {
                        if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        if (*(char *)(local_88 + 0xb0) != '\0') {
                          if (*(long *)(local_88 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02d96860();
                          }
                          FUN_03c5f798(*(long *)(local_88 + 0xd0),*(undefined8 *)(lVar17 + 0x88),
                                       *(undefined8 *)puVar3);
                        }
                      }
                      FUN_02d4a250(&local_160);
                    }
                    if (*(char *)(lVar17 + 0xb0) == '\0') {
                      return lVar17;
                    }
                    if ((*(long *)(param_3 + 0xd0) != 0) &&
                       (*(long *)(*(long *)(param_3 + 0xd0) + 0x40) != 0)) {
                      local_a8 = (long *)FUN_0297bd6c(0,*(undefined8 *)
                                                                                                                  
                                                  Method_Oculus_Platform_Message<InvitePanelResultInfo>_get_Data__
                                                  );
                      puVar5 = Method_Oculus_Platform_Message<LaunchBlockFlowResult>__ctor__;
                      puVar4 = PTR_DAT_069fbff8;
                      pplStack_158 = &local_a8;
                      local_160 = 0;
                      do {
                        plVar6 = local_a8;
                        if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        lVar12 = *local_a8;
                        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar9 != 0) {
                          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                              puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                              goto LAB_05e77b48;
                            }
                            uVar9 = uVar9 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar9 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_02dd004c(local_a8,*(long *)puVar4,0);
LAB_05e77b48:
                        uVar9 = (*(code *)*puVar11)(plVar6,puVar11[1]);
                        plVar6 = local_a8;
                        if ((uVar9 & 1) == 0) {
                          FUN_029794b4(&local_160);
                          return lVar17;
                        }
                        if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        lVar12 = *local_a8;
                        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                        if (uVar9 != 0) {
                          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                              puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                              goto LAB_05e77bac;
                            }
                            uVar9 = uVar9 - 1;
                            piVar16 = piVar16 + 4;
                          } while (uVar9 != 0);
                        }
                        puVar11 = (undefined8 *)FUN_02dd004c(local_a8,*(long *)puVar5,0);
LAB_05e77bac:
                        lVar12 = (*(code *)*puVar11)(plVar6,puVar11[1]);
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        if (*(long *)(lVar17 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96860();
                        }
                        FUN_03c5f798(*(long *)(lVar17 + 0xd0),*(undefined8 *)(lVar12 + 0x88),
                                     *(undefined8 *)puVar3);
                      } while( true );
                    }
                  }
                }
              }
              goto LAB_05e77bd8;
            }
          }
        }
        return lVar17;
      }
    }
  }
LAB_05e77bd8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


