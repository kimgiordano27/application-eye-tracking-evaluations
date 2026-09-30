/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$ToString
ENTRY_POINT: 05690e64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 181
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_TextureRectMatrixf__ToString(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  ulong local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  long *local_78;
  undefined8 local_70;
  
  if ((DAT_06dbc7b8 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d080);
    FUN_02d965b8(System_Nullable<Guid>_TypeInfo);
    FUN_02d965b8(System_Nullable<short>_TypeInfo);
    FUN_02d965b8(System_Nullable<int>_TypeInfo);
    FUN_02d965b8(System_Nullable<long>_TypeInfo);
    FUN_02d965b8(System_Nullable<sbyte>_TypeInfo);
    FUN_02d965b8(System_Nullable<float>_TypeInfo);
    FUN_02d965b8(System_Nullable<TimeSpan>_TypeInfo);
    FUN_02d965b8(System_Nullable<ushort>_TypeInfo);
    FUN_02d965b8(System_Nullable<uint>_TypeInfo);
    FUN_02d965b8(System_Nullable<ulong>_TypeInfo);
    FUN_02d965b8(System_Nullable<UcgQosServer>_TypeInfo);
    FUN_02d965b8(System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fff18);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(PTR_DAT_069fb928);
    FUN_02d965b8(Unity_Netcode_NetworkVariable<Vector3>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0b588);
    FUN_02d965b8(PTR_DAT_06a0d180);
    DAT_06dbc7b8 = 1;
  }
  puVar2 = PTR_DAT_069fb990;
  local_70 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = (long *)0x0;
  local_80 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  if ((param_2 != 0) && (lVar15 = *(long *)(param_2 + 0x28), lVar15 != 0)) {
    thunk_FUN_0631c714(lVar15,*(undefined8 *)(param_1 + 0x20),0);
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar10 = FUN_0634eb94(uVar16,0,0);
    if ((uVar10 & 1) != 0) {
      FUN_05691518(param_2,*(undefined8 *)(param_1 + 0x28));
    }
    puVar8 = System_Nullable<float>_TypeInfo;
    puVar7 = System_Nullable<sbyte>_TypeInfo;
    puVar6 = System_Nullable<long>_TypeInfo;
    puVar3 = System_Nullable<Guid>_TypeInfo;
    puVar5 = PTR_DAT_06a0d180;
    puVar4 = PTR_DAT_06a0d080;
    puVar2 = PTR_DAT_069fff18;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_04e6547c(&local_f0,*(long *)(param_1 + 0x18),
                   *(undefined8 *)System_Nullable<short>_TypeInfo);
      local_70 = local_d0;
      puStack_88 = puStack_e8;
      local_90 = local_f0;
      local_78 = plStack_d8;
      local_80 = uStack_e0;
      local_f0 = 0;
      puStack_e8 = &local_90;
      while (uVar10 = FUN_0522a924(&local_90,*(undefined8 *)puVar7), (uVar10 & 1) != 0) {
        FUN_0569154c(param_2,local_80,((ulong)local_78 & 0xff) != 0);
      }
                    /* try { // try from 05691084 to 0579108b has its CatchHandler @ 056911b0 */
      FUN_0522aa4c(&local_90,*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_04d69e08(&local_f0,*(long *)(param_1 + 0x10),*(undefined8 *)puVar3);
        puVar3 = PTR_DAT_069fb9c0;
        puStack_b8 = puStack_e8;
        local_c0 = local_f0;
        plStack_a8 = plStack_d8;
        local_b0 = uStack_e0;
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        local_f0 = 0;
        puStack_e8 = &local_c0;
        while( true ) {
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  uVar11 = FUN_05207524(&local_c0,*(undefined8 *)puVar8);
                  plVar9 = plStack_a8;
                  uVar10 = local_b0;
                  if ((uVar11 & 1) == 0) {
                    FUN_05207660(&local_c0,*(undefined8 *)System_Nullable<int>_TypeInfo);
                    thunk_FUN_0631c648(lVar15,*(undefined8 *)(param_1 + 0x20),0);
                    return;
                  }
                  if ((int)local_a0 < 5) break;
                  if ((int)local_a0 < 7) {
                    if ((int)local_a0 == 5) {
                      lVar17 = *(long *)(param_1 + 0x20);
                      if ((lVar17 == 0) || (plStack_a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if (*(long *)(*plStack_a8 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96be0(plStack_a8);
                      }
                      puVar14 = (undefined8 *)thunk_FUN_02dd328c(plStack_a8);
                      uStack_108 = puVar14[5];
                      local_110 = puVar14[4];
                      uStack_f8 = puVar14[7];
                      uStack_100 = puVar14[6];
                      uStack_128 = puVar14[1];
                      local_130 = *puVar14;
                      uStack_118 = puVar14[3];
                      uStack_120 = puVar14[2];
                      FUN_0631aa78(lVar17,uVar10 & 0xffffffff,&local_130,0);
                    }
                    else if ((int)local_a0 == 6) {
                      lVar17 = *(long *)(param_1 + 0x20);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      if (plStack_a8 == (long *)0x0) {
                        lVar13 = 0;
                      }
                      else {
                        uVar16 = *(undefined8 *)PTR_DAT_069fb928;
                        lVar13 = thunk_FUN_02dd3048(plStack_a8,uVar16);
                        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96be0(plVar9,uVar16);
                        }
                      }
                      FUN_0631ab5c(lVar17,uVar10 & 0xffffffff,lVar13,0);
                    }
                  }
                  else if ((int)local_a0 == 7) {
                    lVar17 = *(long *)(param_1 + 0x20);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    if (plStack_a8 == (long *)0x0) {
                      lVar13 = 0;
                    }
                    else {
                      uVar16 = *(undefined8 *)PTR_DAT_06a0b588;
                      lVar13 = thunk_FUN_02dd3048(plStack_a8,uVar16);
                      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96be0(plVar9,uVar16);
                      }
                    }
                    FUN_0631abb0(lVar17,uVar10 & 0xffffffff,lVar13,0);
                  }
                  else if ((int)local_a0 == 8) {
                    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    if (plStack_a8 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)Unity_Netcode_NetworkVariable<Vector3>_TypeInfo +
                                       0x130);
                      if ((*(byte *)(*plStack_a8 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plStack_a8 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)Unity_Netcode_NetworkVariable<Vector3>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d96be0(plStack_a8);
                      }
                    }
                    thunk_FUN_06319ec0(*(long *)(param_1 + 0x20),local_b0 & 0xffffffff,plStack_a8,0)
                    ;
                  }
                }
                if ((int)local_a0 < 3) break;
                if ((int)local_a0 == 3) {
                  lVar17 = *(long *)(param_1 + 0x20);
                  if ((lVar17 == 0) || (plStack_a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(long *)(*plStack_a8 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96be0(plStack_a8);
                  }
                  puVar12 = (undefined4 *)thunk_FUN_02dd328c(plStack_a8);
                  thunk_FUN_06319d40(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar17,
                                     uVar10 & 0xffffffff,0);
                }
                else if ((int)local_a0 == 4) {
                  lVar17 = *(long *)(param_1 + 0x20);
                  if ((lVar17 == 0) || (plStack_a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(long *)(*plStack_a8 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96be0(plStack_a8);
                  }
                  puVar12 = (undefined4 *)thunk_FUN_02dd328c(plStack_a8);
                  thunk_FUN_06319c7c(*puVar12,puVar12[1],puVar12[2],puVar12[3],lVar17,
                                     uVar10 & 0xffffffff,0);
                }
              }
              if ((int)local_a0 != 1) break;
              lVar17 = *(long *)(param_1 + 0x20);
              if ((lVar17 == 0) || (plStack_a8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(long *)(*plStack_a8 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plStack_a8);
              }
              puVar12 = (undefined4 *)thunk_FUN_02dd328c(plStack_a8);
              FUN_0631a9d8(lVar17,uVar10 & 0xffffffff,*puVar12,0);
            }
          } while ((int)local_a0 != 2);
          lVar17 = *(long *)(param_1 + 0x20);
          if ((lVar17 == 0) || (plStack_a8 == (long *)0x0)) break;
          if (*(long *)(*plStack_a8 + 0x40) != *(long *)(*(long *)(puVar3 + 0x78) + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plStack_a8);
          }
          puVar12 = (undefined4 *)thunk_FUN_02dd328c(plStack_a8);
          thunk_FUN_06319bc0(*puVar12,lVar17,uVar10 & 0xffffffff,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


