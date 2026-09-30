/*
FUNCTION_NAME: PlayFab.PlayFabEconomyAPI$$GetItemContainers
ENTRY_POINT: 051b5334
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x051b58e0) */
/* WARNING: Removing unreachable block (ram,0x051b58e4) */
/* WARNING: Removing unreachable block (ram,0x051b59ec) */

void PlayFab_PlayFabEconomyAPI__GetItemContainers(long param_1)

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
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  int iStack000000000000001c;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  int iStack0000000000000038;
  int in_stack_00000040;
  byte bStack0000000000000044;
  undefined2 in_stack_00000048;
  uint uStack000000000000004c;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x528));
  FUN_02d4dc40(UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var);
  FUN_02d4dc40(PlayFab_ExperimentationModels_StopExperimentRequest_var);
  *(undefined1 *)(unaff_x22 + 0xe17) = 1;
  uStack000000000000004c = 0;
  in_stack_00000048 = 0;
  bStack0000000000000044 = 0;
  in_stack_00000040 = 0;
  in_stack_00000030 = 0;
  _iStack0000000000000038 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar4 = FUN_057a5a2c(*(long *)(unaff_x19 + 0xc0),0);
  *(undefined4 *)(unaff_x19 + 0x88) = uVar4;
  puVar3 = ExitGames_Client_Photon_SocketUdp_var;
  if (*(char *)(unaff_x19 + 0x40) == '\0') {
    return;
  }
  uStack000000000000004c = 0;
  if (*(int *)(*(long *)ExitGames_Client_Photon_SocketUdp_var + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_051c3b44(&stack0x00000048);
  uVar13 = uStack000000000000004c + 1;
  if (unaff_x20 == 0) {
    uStack000000000000004c = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if (*(uint *)(unaff_x20 + 0x18) <= uStack000000000000004c) {
    uStack000000000000004c = uVar13;
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
  cVar1 = *(char *)(unaff_x20 + (int)uStack000000000000004c + 0x20);
  if (cVar1 == '\x01') {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
      uStack000000000000004c = uVar13;
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(long *)(*(long *)(unaff_x19 + 0x10) + 0x100) == 0) {
      return;
    }
    uStack000000000000004c = uVar13;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051c3ab0(&stack0x00000040);
    if (in_stack_00000040 != *(int *)(unaff_x19 + 0x174)) {
      *(int *)(unaff_x19 + 0x5c) = *(int *)(unaff_x19 + 0x5c) + 1;
      return;
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar11 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x100);
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
    lVar8 = (*(code *)*puVar6)(plVar11);
    if (*(char *)(unaff_x19 + 0x184) == '\0') {
      uVar12 = *(undefined8 *)(unaff_x19 + 0x158);
      thunk_FUN_02d5b8bc(uVar12,0);
      *(undefined4 *)(unaff_x19 + 0x198) = 0;
      *(undefined1 *)(unaff_x19 + 0x184) = 1;
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(uVar12,0);
    }
    uStack000000000000004c = 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    bStack0000000000000044 = *(byte *)(lVar8 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051c3ab0(unaff_x19 + 0x180,lVar8,&stack0x0000004c,0);
    lVar8 = *(long *)(unaff_x19 + 0x98) + (long)unaff_w21;
  }
  else {
    if (*(char *)(unaff_x19 + 0x184) != '\0') {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
        uStack000000000000004c = uVar13;
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      if (*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x40) < 2) {
        return;
      }
      uStack000000000000004c = uVar13;
      FUN_051afd44();
      return;
    }
    uStack000000000000004c = uStack000000000000004c + 2;
    if (*(uint *)(unaff_x20 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4def0();
    }
    bStack0000000000000044 = *(byte *)(unaff_x20 + (int)uVar13 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_051c3ab0(unaff_x19 + 0x180);
    FUN_051c3ab0(&stack0x00000040);
    if (in_stack_00000040 != *(int *)(unaff_x19 + 0x174)) {
      *(int *)(unaff_x19 + 0x5c) = *(int *)(unaff_x19 + 0x5c) + 1;
      if (*(char *)(unaff_x19 + 0x40) == '\0') {
        return;
      }
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        if (*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x40) < 5) {
          return;
        }
        uVar12 = FUN_05000654(&stack0x00000040,0);
        uVar7 = FUN_05000654(unaff_x19 + 0x174,0);
        FUN_04e80bdc(*(undefined8 *)UnityEngine_UIElements_UIR_State_var,uVar12,
                     *(undefined8 *)UnityEngine_InputSystem_Controls_StickControl_var,uVar7,0);
        FUN_051afd44();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if (cVar1 == -0x34) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_051c3ab0(&stack0x00000038);
      uStack000000000000004c = uStack000000000000004c + -4;
      *(long *)(unaff_x19 + 0x98) = *(long *)(unaff_x19 + 0x98) + 4;
      FUN_051c3804(0);
      if (*(int *)(*(long *)UnityEngine_SphereCollider_var + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      iVar5 = FUN_051ddd6c();
      if (iStack0000000000000038 != iVar5) {
        *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + 1;
        puVar3 = PTR_DAT_066462a0;
        if (*(char *)(unaff_x19 + 0x40) == '\0') {
          return;
        }
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          if (*(byte *)(*(long *)(unaff_x19 + 0x10) + 0x40) < 3) {
            return;
          }
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,iStack0000000000000038);
          uVar12 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x50),&stack0x00000008);
          iStack000000000000001c = iVar5;
          uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(puVar3 + 0x50),&stack0x0000001c);
          FUN_04e80fdc(*(undefined8 *)UnityEngine_InputSystem_Processors_StickDeadzoneProcessor_var,
                       uVar12,uVar7,0);
          FUN_051afd44();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
    lVar8 = *(long *)(unaff_x19 + 0x98) + 0xc;
  }
  *(long *)(unaff_x19 + 0x98) = lVar8;
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar9 = FUN_051bf608(*(long *)(unaff_x19 + 0x10),0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    *(ulong *)(lVar8 + 0x24) =
         CONCAT44((int)((ulong)*(undefined8 *)(lVar8 + 0x24) >> 0x20) + (uint)bStack0000000000000044
                  ,(int)*(undefined8 *)(lVar8 + 0x24) + 1);
  }
  if ((bStack0000000000000044 == 0) ||
     (*(int *)(unaff_x19 + 0x170) < (int)(uint)bStack0000000000000044)) {
    uVar12 = FUN_04f73bf4(&stack0x00000044,0);
    uVar7 = FUN_05000654(unaff_x19 + 0x170,0);
    FUN_04e80bdc(*(undefined8 *)PlayFab_ClientModels_StartPurchaseResult_var,uVar12,
                 *(undefined8 *)UnityEngine_InputSystem_StepCounter_var,uVar7,0);
    FUN_051afd44();
    if (bStack0000000000000044 == 0) {
      return;
    }
  }
  puVar3 = System_Xml_Linq_SaveOptions_var;
  bVar2 = false;
  uVar13 = 0;
  do {
    if (*(long *)(unaff_x19 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar8 = FUN_051b5c14();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    if ((*(char *)(lVar8 + 0x11) == '\x01') || (*(char *)(lVar8 + 0x11) == '\x10')) {
      FUN_051b0ae0();
      bVar2 = true;
    }
    else {
      in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x1a8);
      thunk_FUN_02d5b8bc(in_stack_00000030,0);
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000030;
      if (*(long *)(unaff_x19 + 0x1a8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_03a8badc(*(long *)(unaff_x19 + 0x1a8),lVar8,*(undefined8 *)puVar3);
      RootMotion_FinalIK_GrounderQuadruped_Foot___ctor(in_stack_00000030,0);
    }
    if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
      FUN_051b5078();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar9 = FUN_051bf608(*(long *)(unaff_x19 + 0x10),0);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (*(long *)(unaff_x19 + 0xc0) == 0) {
LAB_051b59e8:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa0);
        uVar4 = FUN_057a5a2c(*(long *)(unaff_x19 + 0xc0),0);
        if (lVar8 == 0) goto LAB_051b59e8;
        *(undefined4 *)(lVar8 + 0x40) = uVar4;
        if ((*(long *)(unaff_x19 + 0x10) == 0) ||
           (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xa8), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_051dee9c(lVar8,0x14,0);
      }
    }
    uVar13 = uVar13 + 1;
    if (bStack0000000000000044 <= uVar13) {
      if (bVar2) {
        thunk_FUN_02d86e14(unaff_x19 + 0x130,1,0,0);
      }
      return;
    }
  } while( true );
}


