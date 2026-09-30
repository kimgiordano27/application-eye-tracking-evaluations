/*
FUNCTION_NAME: FUN_051c0f90
ENTRY_POINT: 051c0f90
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


undefined8
FUN_051c0f90(long param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined4 local_5c;
  char local_58 [4];
  char local_54 [4];
  
  local_58[0] = param_5;
  local_54[0] = param_4;
  if ((DAT_06a51e7d & 1) == 0) {
    FUN_02d4dc40(System_Runtime_InteropServices_UnmanagedType_var);
    FUN_02d4dc40(UnityEngine_SliderState_var);
    FUN_02d4dc40(PlayFab_ProfilesModels_SetGlobalPolicyResponse_var);
    FUN_02d4dc40(PlayFab_CloudScriptModels_UnregisterFunctionRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UnsubscribeFromLobbyResourceRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UnsubscribeFromMatchResourceRequest_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UnsubscribeFromMatchResourceResult_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_UntagContainerImageRequest_var);
    DAT_06a51e7d = 1;
  }
  puVar3 = UnityEngine_SliderState_var;
  puVar2 = PlayFab_ProfilesModels_SetGlobalPolicyResponse_var;
  local_5c = 0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    lVar7 = FUN_0502d598(*(long *)(param_1 + 0xf8),0);
    if (lVar7 == 0) {
      lVar8 = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    else {
      uVar16 = *(undefined8 *)puVar3;
      lVar8 = thunk_FUN_02d8a53c(lVar7,uVar16);
      if (lVar8 == 0) {
LAB_051c13c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d4e268(lVar7,uVar16);
      }
      uVar16 = *(undefined8 *)puVar3;
      *(long *)(param_1 + 0x100) = lVar8;
      lVar8 = thunk_FUN_02d8a53c(lVar7,uVar16);
                    /* try { // try from 051c1088 to 052c10af has its CatchHandler @ 051c1b94 */
      if (lVar8 == 0) goto LAB_051c13c4;
    }
    thunk_FUN_02dc1ef0((long *)(param_1 + 0x100),lVar8);
    if (*(long *)(param_1 + 0x100) == 0) {
      plVar14 = *(long **)(param_1 + 0x48);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar7 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar16 = *(undefined8 *)PlayFab_MultiplayerModels_UnsubscribeFromMatchResourceRequest_var;
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto FUN_051c1110;
          }
          uVar12 = uVar12 - 1;
                    /* try { // try from 051c10ec to 052c1117 has its CatchHandler @ 051c1b90 */
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar14,*(long *)puVar2,0);
FUN_051c1110:
      (*(code *)*puVar9)(plVar14,2,uVar16,puVar9[1]);
    }
  }
  lVar7 = *(long *)(param_1 + 0x100);
  if (lVar7 == 0) {
    uVar16 = thunk_FUN_02d8a638(*(undefined8 *)System_Runtime_InteropServices_UnmanagedType_var);
    FUN_051e77d4(uVar16,0);
    *(undefined8 *)(param_1 + 0x100) = uVar16;
    thunk_FUN_02dc1ef0(param_1 + 0x100,uVar16);
    lVar7 = *(long *)(param_1 + 0x100);
    if (lVar7 == 0) {
      thunk_FUN_02db45e8(PTR_DAT_0664e7a0);
      uVar16 = thunk_FUN_02d8a638();
      uVar10 = thunk_FUN_02db45e8(UnityEngine_PlayerLoop_Update_var);
      FUN_0500568c(uVar16,uVar10,0);
      uVar10 = thunk_FUN_02db45e8(PlayFab_ClientModels_UpdateAvatarUrlRequest_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar16,uVar10);
    }
  }
  puVar5 = PlayFab_MultiplayerModels_UnsubscribeFromMatchResourceResult_var;
  puVar4 = PlayFab_CloudScriptModels_UnregisterFunctionRequest_var;
  plVar15 = *(long **)(param_1 + 0x48);
  plVar14 = (long *)thunk_FUN_02d5dae8(lVar7,0);
  uVar16 = *(undefined8 *)puVar5;
  if (plVar14 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
  }
  local_5c = 2;
  uVar11 = FUN_05000654(&local_5c,0);
  uVar16 = FUN_04e80bdc(uVar16,uVar10,*(undefined8 *)puVar4,uVar11,0);
  if (plVar15 != (long *)0x0) {
    lVar7 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_051c121c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02d87540(plVar15,*(long *)puVar2,0);
LAB_051c121c:
    puVar5 = PlayFab_MultiplayerModels_UntagContainerImageRequest_var;
    puVar4 = PlayFab_MultiplayerModels_UnsubscribeFromLobbyResourceRequest_var;
    (*(code *)*puVar9)(plVar15,3,uVar16,puVar9[1]);
    plVar14 = *(long **)(param_1 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar16 = FUN_04f71bb0(local_58,0);
    uVar10 = FUN_04f71bb0(local_54,0);
    uVar16 = FUN_04e80bdc(*(undefined8 *)puVar4,uVar16,*(undefined8 *)puVar5,uVar10,0);
    if (plVar14 != (long *)0x0) {
      lVar7 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_051c12e8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d87540(plVar14,*(long *)puVar2,0);
LAB_051c12e8:
      (*(code *)*puVar9)(plVar14,3,uVar16,puVar9[1]);
      cVar6 = local_58[0];
      plVar14 = *(long **)(param_1 + 0x100);
      if (plVar14 != (long *)0x0) {
        lVar7 = *plVar14;
        uVar1 = *(undefined4 *)(param_1 + 0x88);
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_051c1358;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d87540(plVar14,*(long *)puVar3,0);
LAB_051c1358:
        (*(code *)*puVar9)(plVar14,param_2,param_3,0,cVar6 != '\0',uVar1,puVar9[1]);
        if (local_54[0] != '\0') {
          *(undefined8 *)(param_1 + 0x90) = param_2;
          thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x90),param_2);
          *(undefined1 *)(param_1 + 0x8d) = 1;
          *(char *)(param_1 + 0x98) = local_58[0];
        }
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


