/*
FUNCTION_NAME: Photon.Voice.ImageBufferNativeAlloc$$Dispose
ENTRY_POINT: 05160864
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


long * Photon_Voice_ImageBufferNativeAlloc__Dispose(long *param_1)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar12;
  undefined8 *unaff_x24;
  long unaff_x25;
  
  uVar3 = (**(code **)(*param_1 + 0x298))();
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)0x0;
LAB_051609f0:
    puVar9 = PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
    uVar12 = *(undefined8 *)PlayFab_CloudScriptModels_ExecuteEntityCloudScriptRequest_var;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    plVar6 = (long *)FUN_050121a8(uVar12,0);
    if (plVar6 == (long *)0x0) goto LAB_05160e78;
    uVar3 = (**(code **)(*plVar6 + 0x298))();
    if ((uVar3 & 1) != 0) {
      uVar12 = *(undefined8 *)PTR_DAT_0665d8a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_050121a8(uVar12,0);
      uVar3 = FUN_0501bc88();
      if ((uVar3 & 1) != 0) {
        uVar12 = *(undefined8 *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_050121a8(uVar12,0);
        uVar3 = FUN_0501bc88();
        if ((uVar3 & 1) != 0) {
          uVar12 = *(undefined8 *)puVar9;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_050121a8(uVar12,0);
          uVar3 = FUN_0501bc88();
          puVar9 = PlayFab_EconomyModels_ExecuteInventoryOperationsRequest_var;
          if ((uVar3 & 1) != 0) goto LAB_05160e84;
        }
      }
      plVar6 = (long *)thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d8a8);
      FUN_05638ccc(plVar6,0);
      if (plVar6 == (long *)0x0) goto LAB_05160e78;
      (**(code **)(*plVar6 + 0x4d8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x4e0));
      plVar5 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                           PlayFab_ClientModels_ExecuteCloudScriptResult_var);
      Photon_Voice_AudioDesc__set_SamplingRate(plVar5,plVar6);
    }
    if (plVar5 != (long *)0x0) {
      uVar3 = FUN_050ec380(*(undefined8 *)(unaff_x21 + 0x10),0);
      if ((uVar3 & 1) == 0) {
        FUN_05160f14();
      }
      else {
        FUN_0509453c();
        FUN_0516125c();
      }
      uVar12 = *(undefined8 *)System_Reflection_ExceptionHandlingClause_var;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_050121a8(uVar12,0);
      uVar3 = FUN_0501afe8();
      if ((uVar3 & 1) == 0) {
        uVar12 = *(undefined8 *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_050121a8(uVar12,0);
        uVar8 = FUN_0501afe8();
        lVar4 = *plVar5;
        uVar2 = *(ushort *)(lVar4 + 0x12e);
        uVar3 = (ulong)uVar2;
        if ((uVar8 & 1) == 0) {
          if (uVar2 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PlayFab_EconomyModels_DeleteItemResponse_var)
              {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                goto LAB_05160e3c;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d87540(plVar5,*(long *)PlayFab_EconomyModels_DeleteItemResponse_var,9);
LAB_05160e3c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          uVar12 = puVar7[1];
        }
        else {
          if (uVar2 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)UnityEngine_EventSystems_EventSystem_var) {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
                goto LAB_05160dd0;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d87540(plVar5,*(long *)UnityEngine_EventSystems_EventSystem_var,0xc);
LAB_05160dd0:
          plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
          if (plVar5 == (long *)0x0) goto LAB_05160e78;
          lVar4 = *plVar5;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 != 0) {
            piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PlayFab_EconomyModels_DeleteItemResponse_var)
              {
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 9) * 0x10 + 0x138);
                goto LAB_05160e58;
              }
              uVar3 = uVar3 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar3 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02d87540(plVar5,*(long *)PlayFab_EconomyModels_DeleteItemResponse_var,9);
LAB_05160e58:
          UNRECOVERED_JUMPTABLE = (code *)*puVar7;
          uVar12 = puVar7[1];
        }
                    /* WARNING: Could not recover jumptable at 0x05160e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar5,uVar12);
        return plVar5;
      }
      lVar4 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)UnityEngine_EventSystems_EventSystem_var) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
            goto LAB_05160ce4;
          }
          uVar3 = uVar3 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02d87540(plVar5,*(long *)UnityEngine_EventSystems_EventSystem_var,0xc);
LAB_05160ce4:
      plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PlayFab_EconomyModels_DeleteItemResponse_var) {
              puVar7 = (undefined8 *)(lVar4 + (long)(*piVar11 + 9) * 0x10 + 0x138);
              goto LAB_05160d50;
            }
            uVar3 = uVar3 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar3 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02d87540(plVar5,*(long *)PlayFab_EconomyModels_DeleteItemResponse_var,9);
LAB_05160d50:
        plVar5 = (long *)(*(code *)*puVar7)(plVar5,puVar7[1]);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PlayFab_ProgressionModels_DeleteStatisticsRequest_var + 0x130);
          if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PlayFab_ProgressionModels_DeleteStatisticsRequest_var)) {
            FUN_0554b848(plVar5,0);
            return plVar5;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4e268(plVar5);
        }
      }
LAB_05160e78:
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar12 = thunk_FUN_02db45e8(PlayFab_CloudScriptModels_ExecuteFunctionResult_var);
    if (unaff_x19 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)(*unaff_x19 + 0x168))();
    }
    FUN_04e723e0(uVar12,uVar10,0);
  }
  else {
    uVar12 = *(undefined8 *)System_Exception_var;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
                    /* try { // try from 05160898 to 052608df has its CatchHandler @ 05160898
                       catch() { ... } // from try @ 05160898 with catch @ 05160898
                       catch() { ... } // from try @ 051608f0 with catch @ 05160898
                       catch() { ... } // from try @ 05160984 with catch @ 05160898
                       catch() { ... } // from try @ 05160a04 with catch @ 05160898 */
    FUN_050121a8(uVar12,0);
    uVar3 = FUN_0501bc88();
    if ((uVar3 & 1) == 0) {
LAB_051609a0:
      lVar4 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0665d8b8);
      FUN_055486a4(lVar4,0);
      plVar5 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                           PlayFab_AddonModels_DeleteToxModResponse_var);
      FUN_05044d4c(plVar5,0);
      plVar5[2] = lVar4;
      thunk_FUN_02dc1ef0(plVar5 + 2,lVar4);
      goto LAB_051609f0;
    }
    uVar12 = *(undefined8 *)PTR_DAT_0665d8b0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar12,0);
                    /* try { // try from 051608e0 to 052608e3 has its CatchHandler @ 05160950 */
                    /* try { // try from 051608e4 to 052608ef has its CatchHandler @ 05160954 */
    uVar3 = FUN_0501bc88();
                    /* try { // try from 051608f0 to 0526096b has its CatchHandler @ 05160898 */
    if ((uVar3 & 1) == 0) goto LAB_051609a0;
    uVar12 = *(undefined8 *)System_Reflection_ExceptionHandlingClause_var;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar12,0);
    uVar3 = FUN_0501bc88();
    if ((uVar3 & 1) == 0) goto LAB_051609a0;
    uVar12 = *(undefined8 *)UnityEngine_ExecuteAlways_var;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar12,0);
    uVar3 = FUN_0501bc88();
    if ((uVar3 & 1) == 0) goto LAB_051609a0;
    uVar12 = *unaff_x24;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_050121a8(uVar12,0);
    uVar3 = FUN_0501bc88();
    puVar9 = PlayFab_EconomyModels_ExecuteInventoryOperationsResponse_var;
    if ((uVar3 & 1) == 0) goto LAB_051609a0;
LAB_05160e84:
    thunk_FUN_02db45e8(puVar9);
  }
  uVar12 = FUN_0508d7b8();
  uVar10 = thunk_FUN_02db45e8(UnityEngine_ExecuteInEditMode_var);
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar12,uVar10);
}


