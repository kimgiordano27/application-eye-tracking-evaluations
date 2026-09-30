/*
FUNCTION_NAME: FUN_051af35c
ENTRY_POINT: 051af35c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x051af718) */
/* WARNING: Removing unreachable block (ram,0x051af5ec) */
/* WARNING: Removing unreachable block (ram,0x051af7f8) */
/* WARNING: Removing unreachable block (ram,0x051af7d8) */
/* WARNING: Removing unreachable block (ram,0x051af634) */

void FUN_051af35c(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 *local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  
  bVar1 = param_2 & 1;
  if ((DAT_06a51e38 & 1) == 0) {
    FUN_02d4dc40(PlayFab_EventsModels_SetDataConnectionActiveResponse_var);
    FUN_02d4dc40(PlayFab_EventsModels_SetDataConnectionRequest_var);
    FUN_02d4dc40(PlayFab_EventsModels_SetDataConnectionResponse_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SerializationProtocol_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetDisplayNameRequest_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetDisplayNameResponse_var);
    FUN_02d4dc40(PTR_DAT_0664c118);
    FUN_02d4dc40(PTR_DAT_0664c120);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetEntityProfilePolicyRequest_var);
    DAT_06a51e38 = 1;
  }
  local_38 = *(undefined8 *)(param_1 + 0x40);
  local_40 = 0;
  local_50 = 0;
  local_80 = 0;
  local_78 = 0;
  lStack_58 = 0;
  local_60 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  thunk_FUN_02d5b8bc(local_38,0);
  local_a8 = &local_38;
  local_b0 = 0;
  if (*(byte *)(param_1 + 0x10) != bVar1) {
    if ((param_2 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      local_40 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x108);
      thunk_FUN_02d5b8bc(local_40,0);
      local_b8 = &local_40;
      local_c0 = 0;
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x108);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035abd4c(&local_e8,lVar4,*(undefined8 *)PlayFab_ProfilesModels_SetDisplayNameRequest_var);
      puVar2 = PlayFab_EventsModels_SetDataConnectionRequest_var;
      puStack_68 = puStack_e0;
      local_70 = local_e8;
      lStack_58 = lStack_d0;
      local_60 = local_d8;
      local_50 = local_c8;
      local_e8 = 0;
      puStack_e0 = &local_70;
      while (uVar5 = FUN_049c66dc(&local_70,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        plVar6 = *(long **)(param_1 + 0x30);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if ((plVar6[5] != 0) && (*(int *)(plVar6[5] + 0x1c) == 2)) {
          if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar4 = *(long *)(lStack_58 + 0x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          (**(code **)(*plVar6 + 600))
                    (plVar6,lVar4,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar6 + 0x260));
        }
      }
      FUN_049c687c(&local_70,*(undefined8 *)PlayFab_EventsModels_SetDataConnectionActiveResponse_var
                  );
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x108);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035aba30(lVar4,*(undefined8 *)ExitGames_Client_Photon_SerializationProtocol_var);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_b8,0);
      if (local_c0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0();
      }
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      local_78 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x100);
      thunk_FUN_02d5b8bc(local_78,0);
      local_b8 = &local_78;
      local_c0 = 0;
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x100);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035abd4c(&local_e8,lVar4,*(undefined8 *)PlayFab_ProfilesModels_SetDisplayNameRequest_var);
      puVar2 = PlayFab_EventsModels_SetDataConnectionRequest_var;
      puStack_98 = puStack_e0;
      local_a0 = local_e8;
      local_88 = lStack_d0;
      uStack_90 = local_d8;
      local_80 = local_c8;
      local_e8 = 0;
      puStack_e0 = &local_a0;
      while (uVar5 = FUN_049c66dc(&local_a0,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x28);
        if ((plVar6 != (long *)0x0) && (*(int *)((long)plVar6 + 0x1c) == 2)) {
          if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar4 = *(long *)(local_88 + 0x20);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          (**(code **)(*plVar6 + 0x198))
                    (plVar6,lVar4,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar6 + 0x1a0));
        }
      }
      FUN_049c687c(&local_a0,*(undefined8 *)PlayFab_EventsModels_SetDataConnectionActiveResponse_var
                  );
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x100);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_035aba30(lVar4,*(undefined8 *)ExitGames_Client_Photon_SerializationProtocol_var);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_b8,0);
      if (local_c0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee0();
      }
      *(byte *)(param_1 + 0x10) = bVar1;
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05069b90(*(long *)(param_1 + 0x40),0);
    }
    else {
      plVar6 = (long *)(param_1 + 0x38);
      *(byte *)(param_1 + 0x10) = bVar1;
      if (*plVar6 == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        uVar3 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664c118);
        FUN_050645dc(uVar3,uVar7,*(undefined8 *)PlayFab_ProfilesModels_SetDisplayNameResponse_var,0)
        ;
        lVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664c120);
        FUN_0506ee38(lVar4,uVar3,0);
        *plVar6 = lVar4;
        thunk_FUN_02dc1ef0(plVar6,lVar4);
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0506f658(*plVar6,1,0);
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0506f76c(*plVar6,*(undefined8 *)PlayFab_ProfilesModels_SetEntityProfilePolicyRequest_var
                     ,0);
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0506f0c0(*plVar6,0);
      }
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_05065df4(*(long *)(param_1 + 0x40),0);
    }
  }
  lVar4 = local_b0;
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_a8,0);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee0(lVar4);
}


