/*
FUNCTION_NAME: PlayFab.PlayFabExperimentationInstanceAPI$$StopExperiment
ENTRY_POINT: 051c1d80
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


uint PlayFab_PlayFabExperimentationInstanceAPI__StopExperiment(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar9;
  undefined4 unaff_w22;
  long unaff_x23;
  ulong unaff_x24;
  
  FUN_02d4dc40();
  FUN_02d4dc40(PlayFab_MultiplayerModels_UpdateBuildRegionRequest_var);
  FUN_02d4dc40(PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_var);
  FUN_02d4dc40(PlayFab_EconomyModels_UpdateCatalogConfigRequest_var);
  FUN_02d4dc40(PlayFab_EconomyModels_UpdateCatalogConfigResponse_var);
  *(undefined1 *)(unaff_x23 + 0xe7f) = 1;
  lVar5 = *(long *)(unaff_x19 + 200);
  if ((unaff_x24 & 1) == 0) {
    if (lVar5 == 0) goto LAB_051c21a4;
  }
  else {
    if (lVar5 == 0) goto LAB_051c21a4;
    if ((*(char *)(lVar5 + 0xdd) == '\0') && (*(char *)(lVar5 + 0x20) != '\x05')) {
      thunk_FUN_02db45e8(PTR_DAT_06649f68);
      uVar2 = thunk_FUN_02d8a638();
      uVar3 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateCharacterDataRequest_var);
      FUN_04f6ede4(uVar2,uVar3,0);
      uVar3 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateCharacterStatisticsRequest_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar2,uVar3);
    }
  }
  if (*(char *)(lVar5 + 0x40) == '\x03') {
    if (((uint)((ulong)unaff_x20 >> 0x28) & 0xff) < (uint)*(byte *)(unaff_x19 + 0x6a)) {
      uVar2 = *(undefined8 *)(unaff_x19 + 0xe0);
      thunk_FUN_02d5b8bc(uVar2,0);
      if (*(long *)(unaff_x19 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar3 = FUN_051bbef0(*(long *)(unaff_x19 + 200),unaff_w22);
      if (*(long **)(unaff_x19 + 200) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8(0,uVar3);
      }
      uVar1 = (**(code **)(**(long **)(unaff_x19 + 200) + 0x228))();
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar2,0);
      goto LAB_051c2188;
    }
    if (*(char *)(unaff_x19 + 0x40) != '\0') {
      plVar9 = *(long **)(unaff_x19 + 0x48);
      lVar5 = FUN_02d4dd2c(*(undefined8 *)PTR_DAT_06646310,5);
      if (lVar5 == 0) goto LAB_051c21a4;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_051c21a8:
                    /* WARNING: Subroutine does not return */
        FUN_02d4def0();
      }
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_var;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x20));
      uVar2 = FUN_04f73bf4((ulong)&stack0x00000028 | 5,0);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_051c21a8;
      *(undefined8 *)(lVar5 + 0x28) = uVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x28),uVar2);
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_051c21a8;
      *(undefined8 *)(lVar5 + 0x30) =
           *(undefined8 *)PlayFab_EconomyModels_UpdateCatalogConfigRequest_var;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x30));
      uVar2 = FUN_04f73bf4((byte *)(unaff_x19 + 0x6a),0);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) goto LAB_051c21a8;
      *(undefined8 *)(lVar5 + 0x38) = uVar2;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar5 + 0x38),uVar2);
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_051c21a8;
      *(undefined8 *)(lVar5 + 0x40) =
           *(undefined8 *)PlayFab_MultiplayerModels_UpdateBuildNameRequest_var;
      thunk_FUN_02dc1ef0();
      uVar2 = FUN_04e80ce4(lVar5,0);
      if (plVar9 == (long *)0x0) goto LAB_051c21a4;
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051c2100;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02d87540(plVar9,*(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var,0);
LAB_051c2100:
      (*(code *)*puVar4)(plVar9,1,uVar2,puVar4[1]);
    }
    plVar9 = *(long **)(unaff_x19 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_051c21a4;
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_051c2164;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (*(char *)(unaff_x19 + 0x40) != '\0') {
      plVar9 = *(long **)(unaff_x19 + 0x48);
      uVar2 = FUN_04f73bf4(&stack0x00000024,0);
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_051c21a4;
      uVar3 = FUN_05038b8c();
      uVar2 = FUN_04e80bdc(*(undefined8 *)PlayFab_EconomyModels_UpdateCatalogConfigResponse_var,
                           uVar2,*(undefined8 *)
                                  PlayFab_MultiplayerModels_UpdateBuildRegionRequest_var,uVar3,0);
      if (plVar9 == (long *)0x0) goto LAB_051c21a4;
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_051c209c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02d87540(plVar9,*(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var,0);
LAB_051c209c:
      (*(code *)*puVar4)(plVar9,1,uVar2,puVar4[1]);
    }
    plVar9 = *(long **)(unaff_x19 + 0x48);
    if (plVar9 == (long *)0x0) {
LAB_051c21a4:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    lVar5 = *(long *)PlayFab_ProfilesModels_SetGlobalPolicyResponse_var;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_051c2164;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_02d87540(plVar9,lVar5,2);
  goto LAB_051c2174;
LAB_051c2164:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
LAB_051c2174:
  (*(code *)*puVar4)(plVar9,0x406,puVar4[1]);
  uVar1 = 0;
LAB_051c2188:
  return uVar1 & 1;
}


