/*
FUNCTION_NAME: OVRPlugin$$get_tiledMultiResLevel
ENTRY_POINT: 05672b4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05672f00) */

void OVRPlugin__get_tiledMultiResLevel(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  ulong local_f0;
  long **pplStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_c8;
  undefined8 *local_c0;
  long *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_06dbc67a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<LobbyPlayerJoined>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<LocalDataStore>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<LocalKeyword>_TypeInfo);
    DAT_06dbc67a = 1;
  }
  puVar1 = PTR_DAT_06a0f1a0;
  local_60 = 0;
  local_58 = 0;
  local_90 = 0;
  local_b8 = (long *)0x0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_1[0x33] != 0) {
    if (param_1[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(param_1[0x32] + 0x18) != 0) {
      if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_58 = FUN_0564de84(0xe,0);
      puVar3 = System_Collections_Generic_List<LocalKeyword>_TypeInfo;
      puVar2 = System_Collections_Generic_List<LocalDataStore>_TypeInfo;
      local_c0 = &local_58;
      local_c8 = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        lVar4 = param_1[0x32];
        if (lVar4 != 0) {
          iVar11 = 0;
          do {
            if (*(int *)(lVar4 + 0x18) <= iVar11) goto LAB_05672d54;
            FUN_04018b68(&local_f0,lVar4,iVar11,*(undefined8 *)puVar2);
            FUN_0569edf0(&local_f0,*(long *)(param_2 + 0x10) + (local_f0 >> 0x20) * 0x28,0);
            local_60 = CONCAT44(uStack_cc,local_d0);
            uStack_78 = pplStack_e8;
            local_80 = local_f0;
            uStack_68 = uStack_d8;
            uStack_70 = uStack_e0;
            uVar5 = FUN_056a0370(&local_80,0);
            if ((uVar5 & 1) != 0) {
              uVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
              FUN_05657bf4(&local_f0,uVar6,0);
              local_60 = CONCAT44(uStack_cc,local_d0);
              uStack_78 = pplStack_e8;
              local_80 = local_f0;
              uStack_68 = uStack_d8;
              uStack_70 = uStack_e0;
            }
            lVar4 = param_1[0x32];
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04018b68(&local_f0,lVar4,iVar11,*(undefined8 *)puVar2);
            local_100 = 0;
            local_90 = local_d0;
            uStack_a8 = pplStack_e8;
            local_b0 = local_f0;
            uStack_98 = uStack_d8;
            uStack_a0 = uStack_e0;
            uStack_118 = 0;
            local_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            FUN_0567cef8(&local_120,&local_b0,&local_80,0);
            local_d0 = local_100;
            pplStack_e8 = (long **)uStack_118;
            local_f0 = local_120;
            uStack_d8 = uStack_108;
            uStack_e0 = uStack_110;
            FUN_04018bd0(lVar4,iVar11,&local_f0,*(undefined8 *)puVar3);
            lVar4 = param_1[0x32];
            iVar11 = iVar11 + 1;
          } while (lVar4 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
LAB_05672d54:
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      local_b8 = (long *)FUN_0564de84(0xf,0);
      plVar10 = (long *)param_1[0x33];
      pplStack_e8 = &local_b8;
      local_f0 = 0;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *plVar10;
      lVar9 = param_1[0x32];
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05672ddc;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo,0)
      ;
LAB_05672ddc:
      (*(code *)*puVar7)(plVar10,lVar9,puVar7[1]);
      plVar10 = local_b8;
      if (local_b8 != (long *)0x0) {
        lVar4 = *local_b8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05672e50;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(local_b8,*(long *)PTR_DAT_069fbff0,0);
LAB_05672e50:
        (*(code *)*puVar7)(plVar10,puVar7[1]);
      }
      plVar10 = (long *)*local_c0;
      if (plVar10 != (long *)0x0) {
        lVar4 = *plVar10;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_05672ec0;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_05672ec0:
        (*(code *)*puVar7)(plVar10,puVar7[1]);
      }
      if (local_c8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96858();
      }
    }
  }
  return;
}


