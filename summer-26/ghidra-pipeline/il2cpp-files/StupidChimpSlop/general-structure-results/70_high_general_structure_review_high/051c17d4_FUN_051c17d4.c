/*
FUNCTION_NAME: FUN_051c17d4
ENTRY_POINT: 051c17d4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


uint FUN_051c17d4(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_4c [4];
  ulong local_48;
  
  uVar1 = (uint)(param_4 >> 0x20);
  local_4c[0] = (undefined1)param_2;
  local_48 = param_4;
  if ((DAT_06a51e7e & 1) == 0) {
    FUN_02d4dc40(PlayFab_EconomyModels_SetItemModerationStateRequest_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetGlobalPolicyResponse_var);
    FUN_02d4dc40(PTR_DAT_06646310);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UpdateBuildNameRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UpdateBuildRegionRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_var);
                    /* try { // try from 051c1860 to 052c1887 has its CatchHandler @ 051c1c94 */
    FUN_02d4dc40(PlayFab_EconomyModels_UpdateCatalogConfigRequest_var);
    FUN_02d4dc40(PlayFab_EconomyModels_UpdateCatalogConfigResponse_var);
    DAT_06a51e7e = 1;
  }
  lVar6 = *(long *)(param_1 + 200);
  local_58 = 0;
  if ((param_4 >> 0x20 & 1) == 0) {
    if (lVar6 == 0) goto LAB_051c1c60;
  }
  else {
    if (lVar6 == 0) goto LAB_051c1c60;
    if ((*(char *)(lVar6 + 0xdd) == '\0') && (*(char *)(lVar6 + 0x20) != '\x05')) {
                    /* try { // try from 051c1c74 to 052c1c77 has its CatchHandler @ 051c1c84 */
      thunk_FUN_02db45e8(PTR_DAT_06649f68);
      uVar2 = thunk_FUN_02d8a638();
                    /* catch() { ... } // from try @ 051c1c74 with catch @ 051c1c84 */
                    /* try { // try from 051c1c88 to 052c1c8f has its CatchHandler @ 051c1cd4 */
      uVar4 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateCharacterDataRequest_var);
                    /* try { // try from 051c1c90 to 052c1caf has its CatchHandler @ 051c06b4 */
                    /* catch() { ... } // from try @ 051c1860 with catch @ 051c1c94 */
      FUN_04f6ede4(uVar2,uVar4,0);
      uVar4 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateCharacterDataResult_var);
                    /* try { // try from 051c1cb0 to 052c1cb3 has its CatchHandler @ 051c1cc0 */
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar2,uVar4);
    }
  }
  if (*(char *)(lVar6 + 0x40) == '\x03') {
    if ((uVar1 >> 8 & 0xff) < (uint)*(byte *)(param_1 + 0x6a)) {
                    /* try { // try from 051c18c4 to 052c18ef has its CatchHandler @ 051c1c54 */
      local_58 = *(undefined8 *)(param_1 + 0xe0);
      thunk_FUN_02d5b8bc(local_58,0);
      puStack_68 = &local_58;
      local_70 = 0;
      if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar2 = FUN_051bbc44(*(long *)(param_1 + 200),param_2,param_3,2,uVar1 & 1,0);
      plVar3 = *(long **)(param_1 + 200);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8(0,uVar2);
      }
      uVar1 = (**(code **)(*plVar3 + 0x228))(plVar3,uVar2,param_4,*(undefined8 *)(*plVar3 + 0x230));
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(local_58,0);
      goto LAB_051c1c44;
    }
    if (*(char *)(param_1 + 0x40) != '\0') {
      plVar3 = *(long **)(param_1 + 0x48);
      lVar6 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
      if (lVar6 == 0) goto LAB_051c1c60;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_051c1c64:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      *(undefined8 *)(lVar6 + 0x20) =
           *(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_var;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20));
      uVar2 = FUN_04f73bf4((ulong)&local_48 | 5,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_051c1c64;
      *(undefined8 *)(lVar6 + 0x28) = uVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x28),uVar2);
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_051c1c64;
      *(undefined8 *)(lVar6 + 0x30) =
           *(undefined8 *)PlayFab_EconomyModels_UpdateCatalogConfigRequest_var;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x30));
      uVar2 = FUN_04f73bf4((byte *)(param_1 + 0x6a),0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_051c1c64;
      *(undefined8 *)(lVar6 + 0x38) = uVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x38),uVar2);
      if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_051c1c64;
      *(undefined8 *)(lVar6 + 0x40) =
           *(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildNameRequest_var;
      thunk_FUN_02dc1ef0();
      uVar2 = FUN_04e80ce4(lVar6,0);
      if (plVar3 == (long *)0x0) goto LAB_051c1c60;
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var)
          {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051c1bbc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02d87540(plVar3,*(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var,0);
LAB_051c1bbc:
      (*(code *)*puVar5)(plVar3,1,uVar2,puVar5[1]);
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) goto LAB_051c1c60;
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) goto LAB_051c1c20;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') {
      plVar3 = *(long **)(param_1 + 0x48);
      uVar2 = FUN_04f73bf4(local_4c,0);
      if (*(long *)(param_1 + 200) == 0) goto LAB_051c1c60;
      local_60 = *(undefined1 *)(*(long *)(param_1 + 200) + 0x40);
      local_70 = *(undefined8 *)PlayFab_EconomyModels_SetItemModerationStateRequest_var;
      puStack_68 = (undefined8 *)0xffffffffffffffff;
      uVar4 = FUN_05038b8c(&local_70,0);
      uVar2 = FUN_04e80bdc(*(undefined8 *)PlayFab_EconomyModels_UpdateCatalogConfigResponse_var,
                           uVar2,*(undefined8 *)
                                  PlayFab_MultiplayerModels_UpdateBuildRegionRequest_var,uVar4,0);
      if (plVar3 == (long *)0x0) goto LAB_051c1c60;
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var)
          {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_051c1b58;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_02d87540(plVar3,*(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var,0);
LAB_051c1b58:
      (*(code *)*puVar5)(plVar3,1,uVar2,puVar5[1]);
    }
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) {
LAB_051c1c60:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    lVar6 = *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) goto LAB_051c1c20;
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
  }
  puVar5 = (undefined8 *)FUN_02d87540(plVar3,lVar6,2);
LAB_051c1c30:
  (*(code *)*puVar5)(plVar3,0x406,puVar5[1]);
  uVar1 = 0;
LAB_051c1c44:
  return uVar1 & 1;
LAB_051c1c20:
  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
  goto LAB_051c1c30;
}


