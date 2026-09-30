/*
FUNCTION_NAME: FUN_051c043c
ENTRY_POINT: 051c043c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


uint FUN_051c043c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  long local_98;
  undefined8 *local_90;
  long local_88;
  undefined8 *local_80;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_06a51e7a & 1) == 0) {
    FUN_02d4dc40(TMPro_TMP_CharacterInfo_var);
    FUN_02d4dc40(PlayFab_ClientModels_UnlinkTwitchAccountResult_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetGlobalPolicyResponse_var);
    FUN_02d4dc40(PlayFab_EconomyModels_SubtractInventoryItemsResponse_var);
    FUN_02d4dc40(PTR_DAT_066463a0);
    FUN_02d4dc40(UnityEngine_SphereCollider_var);
    FUN_02d4dc40(PTR_DAT_066476d8);
    FUN_02d4dc40(PlayFab_ClientModels_UnlinkXboxAccountRequest_var);
    FUN_02d4dc40(PlayFab_ClientModels_UnlinkXboxAccountResult_var);
    DAT_06a51e7a = 1;
  }
  local_58 = *(undefined8 *)(param_1 + 0xd8);
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  thunk_FUN_02d5b8bc(local_58,0);
  local_60 = *(undefined8 *)(param_1 + 0xd0);
  local_80 = &local_58;
  local_88 = 0;
  thunk_FUN_02d5b8bc(local_60,0);
  local_90 = &local_60;
  local_98 = 0;
  if ((*(long *)(param_1 + 200) == 0) || (*(char *)(*(long *)(param_1 + 200) + 0x40) == '\0')) {
    if (param_5 == 0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      thunk_FUN_02dc1ef0(param_1 + 0x100,0);
      *(undefined8 *)(param_1 + 0x90) = 0;
      thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x90),0);
      *(undefined1 *)(param_1 + 0x8d) = 0;
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    FUN_051c028c(param_1);
    plVar8 = *(long **)(param_1 + 200);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    *(undefined1 *)(param_1 + 0x7c) = 0;
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0x30);
    *puVar3 = param_2;
    thunk_FUN_02dc1ef0(puVar3,param_2);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0x38);
    *puVar3 = param_3;
    thunk_FUN_02dc1ef0(puVar3,param_3);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0xb0);
    *puVar3 = param_4;
    thunk_FUN_02dc1ef0(puVar3,param_4);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar8 = (long *)(*(long *)(param_1 + 200) + 0xa0);
    *plVar8 = param_5;
    thunk_FUN_02dc1ef0(plVar8,param_5);
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + 0xa8);
    *puVar3 = param_6;
    thunk_FUN_02dc1ef0(puVar3,param_6);
    local_68 = 0;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar6 = FUN_047a2e0c(*(long *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x84),&local_68,
                         *(undefined8 *)PlayFab_ClientModels_UnlinkTwitchAccountResult_var);
    if ((uVar6 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x38) = local_68;
      thunk_FUN_02dc1ef0();
      lVar5 = *(long *)(param_1 + 200);
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      plVar8 = (long *)FUN_02d4dd2c(*(undefined8 *)PTR_DAT_066463a0,1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar11 = *(long *)(param_1 + 200);
      if ((lVar11 != 0) &&
         (lVar4 = thunk_FUN_02d8a53c(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
        uVar10 = thunk_FUN_02d980e0();
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar10,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      plVar8[4] = lVar11;
      thunk_FUN_02dc1ef0(plVar8 + 4,lVar11);
      plVar8 = (long *)FUN_0502d568(uVar10,plVar8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (plVar8 == (long *)0x0) {
        *(undefined8 *)(lVar5 + 0x28) = 0;
      }
      else {
        lVar11 = *(long *)PlayFab_EconomyModels_SubtractInventoryItemsResponse_var;
        bVar1 = *(byte *)(lVar11 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
LAB_051c074c:
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar8);
        }
        *(long **)(lVar5 + 0x28) = plVar8;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11))
        goto LAB_051c074c;
      }
      thunk_FUN_02dc1ef0(lVar5 + 0x28,plVar8);
      plVar8 = *(long **)(param_1 + 200);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar2 = (**(code **)(*plVar8 + 0x1c8))
                        (plVar8,param_2,param_3,param_4,param_5,*(undefined8 *)(*plVar8 + 0x1d0));
      goto LAB_051c0854;
    }
    local_a0 = *(undefined1 *)(param_1 + 0x84);
    lVar5 = *(long *)(param_1 + 200);
    local_b0 = *(undefined8 *)TMPro_TMP_CharacterInfo_var;
    uStack_a8 = 0xffffffffffffffff;
    uVar10 = FUN_05038b8c(&local_b0,0);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(*(long *)UnityEngine_SphereCollider_var + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar9 = FUN_051dc450(uVar9,0,0);
    uVar10 = FUN_04e80bdc(*(undefined8 *)PlayFab_ClientModels_UnlinkXboxAccountResult_var,uVar10,
                          *(undefined8 *)PTR_DAT_066476d8,uVar9,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    FUN_051afd44(lVar5,1,uVar10,0);
  }
  else {
    plVar8 = *(long **)(param_1 + 0x48);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    uVar10 = *(undefined8 *)PlayFab_ClientModels_UnlinkXboxAccountRequest_var;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051c0800;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02d87540(plVar8,*(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var,0);
LAB_051c0800:
    (*(code *)*puVar3)(plVar8,2,uVar10,puVar3[1]);
  }
  uVar2 = 0;
LAB_051c0854:
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_90,0);
  lVar5 = local_88;
  if (local_98 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee0();
  }
  RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(*local_80,0);
  if (lVar5 == 0) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee0(lVar5);
}


