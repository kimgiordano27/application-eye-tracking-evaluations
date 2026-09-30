/*
FUNCTION_NAME: FUN_06835b04
ENTRY_POINT: 06835b04
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_5;telemetry_or_network_hits_3
*/


void FUN_06835b04(long param_1,long param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_07558bf3 & 1) == 0) {
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint_00000CC9_PostfixBurstDelegate_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine_00000CCA_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000CC7_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(
                UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo
                );
    FUN_03188a78(PTR_DAT_070f1fd0);
    DAT_07558bf3 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(int *)(param_1 + 0x1d8) == 1) {
    if (param_2 == 0) {
LAB_06835f18:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    plVar7 = (long *)(param_2 + 0x30);
    uVar6 = 3;
  }
  else {
    if (param_2 == 0) goto LAB_06835f18;
    plVar7 = (long *)(param_2 + 0x68);
    uVar6 = 0xc;
  }
  param_3 = uVar6 & param_3;
  puVar9 = (undefined8 *)*plVar7;
  cVar1 = *(char *)(param_1 + 0x1dc);
  if ((param_3 == uVar6) || (cVar1 != '\0')) {
    if ((param_3 == uVar6) || (cVar1 == '\0')) {
      if ((param_3 == uVar6) && (cVar1 == '\0')) {
        uVar8 = *(undefined8 *)(param_1 + 400);
        if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_03af32d4(0xbff0000000000000,uVar8,1,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint_00000CC9_PostfixBurstDelegate_TypeInfo
                    );
        FUN_03af4718(0xbff0000000000000,*(undefined8 *)(param_1 + 0x188),3,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine_00000CCA_BurstDirectCall_TypeInfo
                    );
        *(undefined1 *)(param_1 + 0x1dc) = 1;
      }
      uStack_108 = puVar9[1];
      local_110 = *puVar9;
      uStack_f8 = puVar9[3];
      uStack_100 = puVar9[2];
      uStack_e8 = puVar9[5];
      local_f0 = puVar9[4];
      uStack_d8 = puVar9[7];
      uStack_e0 = puVar9[6];
      uVar5 = FUN_06835f1c(&local_110,&local_70);
      uVar4 = local_68;
      uVar2 = local_70;
      if ((uVar5 & 1) != 0) {
        uVar3 = local_70._4_4_;
        uVar8 = *(undefined8 *)(param_1 + 0x198);
        if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_03af4c28(uVar2 & 0xffffffff,uVar3,uVar4 & 0xffffffff,0xbff0000000000000,uVar8,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo
                    );
        FUN_03af3cf4(local_68._4_4_,local_60 & 0xffffffff,local_60._4_4_,local_58,0xbff0000000000000
                     ,*(undefined8 *)(param_1 + 0x1a0),
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000CC7_BurstDirectCall_TypeInfo
                    );
      }
      uStack_108 = puVar9[9];
      local_110 = puVar9[8];
      uStack_f8 = puVar9[0xb];
      uStack_100 = puVar9[10];
      uStack_e8 = puVar9[0xd];
      local_f0 = puVar9[0xc];
      uStack_d8 = puVar9[0xf];
      uStack_e0 = puVar9[0xe];
      uVar5 = FUN_06835f1c(&local_110,&local_90);
      uVar4 = local_88;
      uVar2 = local_90;
      if ((uVar5 & 1) != 0) {
        uVar3 = local_90._4_4_;
        uVar8 = *(undefined8 *)(param_1 + 0x1a8);
        if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_03af4c28(uVar2 & 0xffffffff,uVar3,uVar4 & 0xffffffff,0xbff0000000000000,uVar8,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo
                    );
        FUN_03af3cf4(local_88._4_4_,local_80 & 0xffffffff,local_80._4_4_,local_78,0xbff0000000000000
                     ,*(undefined8 *)(param_1 + 0x1b0),
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000CC7_BurstDirectCall_TypeInfo
                    );
      }
      uStack_108 = puVar9[0x51];
      local_110 = puVar9[0x50];
      uStack_f8 = puVar9[0x53];
      uStack_100 = puVar9[0x52];
      uStack_e8 = puVar9[0x55];
      local_f0 = puVar9[0x54];
      uStack_d8 = puVar9[0x57];
      uStack_e0 = puVar9[0x56];
      uVar5 = FUN_06835f1c(&local_110,&local_b0);
      uVar4 = local_a8;
      uVar2 = local_b0;
      if ((uVar5 & 1) != 0) {
        uVar3 = local_b0._4_4_;
        uVar8 = *(undefined8 *)(param_1 + 0x1b8);
        if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_03af4c28(uVar2 & 0xffffffff,uVar3,uVar4 & 0xffffffff,0xbff0000000000000,uVar8,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo
                    );
        FUN_03af3cf4(local_a8._4_4_,local_a0 & 0xffffffff,local_a0._4_4_,local_98,0xbff0000000000000
                     ,*(undefined8 *)(param_1 + 0x1c0),
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000CC7_BurstDirectCall_TypeInfo
                    );
      }
      uStack_108 = puVar9[0x29];
      local_110 = puVar9[0x28];
      uStack_f8 = puVar9[0x2b];
      uStack_100 = puVar9[0x2a];
      uStack_e8 = puVar9[0x2d];
      local_f0 = puVar9[0x2c];
      uStack_d8 = puVar9[0x2f];
      uStack_e0 = puVar9[0x2e];
      uVar5 = FUN_06835f1c(&local_110,&local_d0);
      uVar4 = local_c8;
      uVar2 = local_d0;
      if ((uVar5 & 1) != 0) {
        uVar3 = local_d0._4_4_;
        uVar8 = *(undefined8 *)(param_1 + 0x1c8);
        if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_03af4c28(uVar2 & 0xffffffff,uVar3,uVar4 & 0xffffffff,0xbff0000000000000,uVar8,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000CC8_BurstDirectCall_TypeInfo
                    );
        FUN_03af3cf4(local_c8._4_4_,local_c0 & 0xffffffff,local_c0._4_4_,local_b8,0xbff0000000000000
                     ,*(undefined8 *)(param_1 + 0x1d0),
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000CC7_BurstDirectCall_TypeInfo
                    );
        return;
      }
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 400);
      if (*(int *)(*(long *)PTR_DAT_070f1fd0 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_03af32d4(0xbff0000000000000,uVar8,0,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint_00000CC9_PostfixBurstDelegate_TypeInfo
                  );
      FUN_03af4718(0xbff0000000000000,*(undefined8 *)(param_1 + 0x188),0,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine_00000CCA_BurstDirectCall_TypeInfo
                  );
      *(undefined1 *)(param_1 + 0x1dc) = 0;
    }
  }
  return;
}


