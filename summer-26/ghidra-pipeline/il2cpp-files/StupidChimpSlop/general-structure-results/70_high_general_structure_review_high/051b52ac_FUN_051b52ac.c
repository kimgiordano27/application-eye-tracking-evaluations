/*
FUNCTION_NAME: FUN_051b52ac
ENTRY_POINT: 051b52ac
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x051b58e0) */
/* WARNING: Removing unreachable block (ram,0x051b58e4) */
/* WARNING: Removing unreachable block (ram,0x051b59ec) */

void FUN_051b52ac(long param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 local_98;
  undefined8 *puStack_90;
  int local_84 [3];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  byte local_5c [4];
  undefined2 local_58 [2];
  uint local_54;
  
  if ((DAT_06a51e17 & 1) == 0) {
    FUN_02d4dc40(UnityEngine_SliderState_var);
    FUN_02d4dc40(ExitGames_Client_Photon_SocketUdp_var);
    FUN_02d4dc40(System_Xml_Linq_SaveOptions_var);
    FUN_02d4dc40(UnityEngine_SphereCollider_var);
    FUN_02d4dc40(PlayFab_ClientModels_StartPurchaseResult_var);
    FUN_02d4dc40(UnityEngine_UIElements_UIR_State_var);
    FUN_02d4dc40(UnityEngine_InputSystem_StepCounter_var);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_StickControl_var);
    FUN_02d4dc40(UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var);
    FUN_02d4dc40(PlayFab_ExperimentationModels_StopExperimentRequest_var);
    DAT_06a51e17 = 1;
  }
  local_54 = 0;
  local_58[0] = 0;
  local_5c[0] = 0;
  local_60 = 0;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar4 = FUN_057a5a2c(*(long *)(param_1 + 0xc0),0);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  puVar3 = ExitGames_Client_Photon_SocketUdp_var;
  if (*(char *)(param_1 + 0x40) == '\0') {
    return;
  }
  local_54 = 0;
  if (*(int *)(*(long *)ExitGames_Client_Photon_SocketUdp_var + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051c3b44(local_58,param_2,&local_54,0);
  uVar13 = local_54 + 1;
  if (param_2 == 0) {
    local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(param_2 + 0x18) <= local_54) {
    local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  cVar1 = *(char *)(param_2 + (int)local_54 + 0x20);
  if (cVar1 == '\x01') {
    if (*(long *)(param_1 + 0x10) == 0) {
      local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(long *)(*(long *)(param_1 + 0x10) + 0x100) == 0) {
      return;
    }
    local_54 = uVar13;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051c3ab0(&local_60,param_2,&local_54,0);
    uVar13 = local_54;
    if (local_60 != *(int *)(param_1 + 0x174)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      return;
    }
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x10) + 0x100);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)UnityEngine_SliderState_var) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_051b5668;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d87540(plVar11,*(long *)UnityEngine_SliderState_var,2);
LAB_051b5668:
    param_2 = (*(code *)*puVar6)(plVar11,param_2,uVar13,param_3 - uVar13,param_2,(long)&local_68 + 4
                                 ,puVar6[1]);
    if (*(char *)(param_1 + 0x184) == '\0') {
      uVar12 = *(undefined8 *)(param_1 + 0x158);
      thunk_FUN_02d5b8bc(uVar12,0);
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined1 *)(param_1 + 0x184) = 1;
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar12,0);
    }
    local_54 = 1;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(int *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    local_5c[0] = *(byte *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051c3ab0(param_1 + 0x180,param_2,&local_54,0);
    lVar8 = *(long *)(param_1 + 0x98) + (long)param_3;
  }
  else {
    if (*(char *)(param_1 + 0x184) != '\0') {
      if (*(long *)(param_1 + 0x10) == 0) {
        local_54 = uVar13;
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(byte *)(*(long *)(param_1 + 0x10) + 0x40) < 2) {
        return;
      }
      local_54 = uVar13;
      FUN_051afd44(param_1,2,*(undefined8 *)PlayFab_ExperimentationModels_StopExperimentRequest_var)
      ;
      return;
    }
    local_54 = local_54 + 2;
    if (*(uint *)(param_2 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    local_5c[0] = *(byte *)(param_2 + (int)uVar13 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051c3ab0(param_1 + 0x180,param_2,&local_54,0);
    FUN_051c3ab0(&local_60,param_2,&local_54,0);
    if (local_60 != *(int *)(param_1 + 0x174)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      if (*(char *)(param_1 + 0x40) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        if (*(byte *)(*(long *)(param_1 + 0x10) + 0x40) < 5) {
          return;
        }
        uVar12 = FUN_05000654(&local_60,0);
        uVar7 = FUN_05000654(param_1 + 0x174,0);
        uVar12 = FUN_04e80bdc(*(undefined8 *)UnityEngine_UIElements_UIR_State_var,uVar12,
                              *(undefined8 *)UnityEngine_InputSystem_Controls_StickControl_var,uVar7
                              ,0);
        FUN_051afd44(param_1,5,uVar12);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (cVar1 == -0x34) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051c3ab0(&local_68,param_2,&local_54,0);
      local_54 = local_54 - 4;
      *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 4;
      FUN_051c3804(0,param_2,&local_54,0);
      if (*(int *)(*(long *)UnityEngine_SphereCollider_var + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      iVar5 = FUN_051ddd6c(param_2,0,param_3,0);
      if ((int)local_68 != iVar5) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        puVar3 = PTR_DAT_066462a0;
        if (*(char *)(param_1 + 0x40) == '\0') {
          return;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          if (*(byte *)(*(long *)(param_1 + 0x10) + 0x40) < 3) {
            return;
          }
          local_98 = CONCAT44(local_98._4_4_,(int)local_68);
          uVar12 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),&local_98);
          local_84[0] = iVar5;
          uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x50),local_84);
          uVar12 = FUN_04e80fdc(*(undefined8 *)
                                 UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var,
                                uVar12,uVar7,0);
          FUN_051afd44(param_1,3,uVar12);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    lVar8 = *(long *)(param_1 + 0x98) + 0xc;
  }
  *(long *)(param_1 + 0x98) = lVar8;
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar9 = FUN_051bf608(*(long *)(param_1 + 0x10),0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(ulong *)(lVar8 + 0x24) =
         CONCAT44((int)((ulong)*(undefined8 *)(lVar8 + 0x24) >> 0x20) + (uint)local_5c[0],
                  (int)*(undefined8 *)(lVar8 + 0x24) + 1);
  }
  if ((local_5c[0] == 0) || (*(int *)(param_1 + 0x170) < (int)(uint)local_5c[0])) {
    uVar12 = FUN_04f73bf4(local_5c,0);
    uVar7 = FUN_05000654(param_1 + 0x170,0);
    uVar12 = FUN_04e80bdc(*(undefined8 *)PlayFab_ClientModels_StartPurchaseResult_var,uVar12,
                          *(undefined8 *)UnityEngine_InputSystem_StepCounter_var,uVar7,0);
    FUN_051afd44(param_1,1,uVar12);
    if (local_5c[0] == 0) {
      return;
    }
  }
  puVar3 = System_Xml_Linq_SaveOptions_var;
  bVar2 = false;
  uVar13 = 0;
  do {
    if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = FUN_051b5c14(*(long *)(param_1 + 0x120),param_1,param_2,&local_54);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if ((*(char *)(lVar8 + 0x11) == '\x01') || (*(char *)(lVar8 + 0x11) == '\x10')) {
      FUN_051b0ae0(param_1,lVar8);
      bVar2 = true;
    }
    else {
      local_70 = *(undefined8 *)(param_1 + 0x1a8);
      thunk_FUN_02d5b8bc(local_70,0);
      local_98 = 0;
      puStack_90 = &local_70;
      if (*(long *)(param_1 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_03a8badc(*(long *)(param_1 + 0x1a8),lVar8,*(undefined8 *)puVar3);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(local_70,0);
    }
    if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
      FUN_051b5078(param_1,lVar8,*(undefined4 *)(param_1 + 0x180));
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar9 = FUN_051bf608(*(long *)(param_1 + 0x10),0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(long *)(param_1 + 0xc0) == 0) {
LAB_051b59e8:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0);
        uVar4 = FUN_057a5a2c(*(long *)(param_1 + 0xc0),0);
        if (lVar8 == 0) goto LAB_051b59e8;
        *(undefined4 *)(lVar8 + 0x40) = uVar4;
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_051dee9c(lVar8,0x14,0);
      }
    }
    uVar13 = uVar13 + 1;
    if (local_5c[0] <= uVar13) {
      if (bVar2) {
        thunk_FUN_02d86e14(param_1 + 0x130,1,0,0);
      }
      return;
    }
  } while( true );
}


