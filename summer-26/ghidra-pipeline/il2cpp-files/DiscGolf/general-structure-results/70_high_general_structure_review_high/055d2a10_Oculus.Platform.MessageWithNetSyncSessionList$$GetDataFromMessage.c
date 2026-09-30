/*
FUNCTION_NAME: Oculus.Platform.MessageWithNetSyncSessionList$$GetDataFromMessage
ENTRY_POINT: 055d2a10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


long Oculus_Platform_MessageWithNetSyncSessionList__GetDataFromMessage(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_06a0a588;
  if ((*(byte *)(unaff_x21 + 0x749) & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(PTR_DAT_06a0e060);
    FUN_02d965b8(PTR_DAT_06a0a588);
    *(undefined1 *)(unaff_x21 + 0x749) = 1;
  }
  FUN_055848a4(param_1,*(undefined8 *)puVar1,0);
  if (param_1 == (long *)0x0) goto LAB_055d2b60;
  iVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (iVar2 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_055d2b94;
    uVar6 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
    if ((uVar6 & 1) != 0) goto LAB_055d2ac4;
LAB_055d2ba4:
    uVar7 = thunk_FUN_02dfd288(System_Runtime_Serialization_DataNode<char>_TypeInfo);
    goto LAB_055d2bb0;
  }
  iVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (((param_2 != 0) && (iVar2 == 5)) && (*(int *)(param_2 + 0x10) == 0)) {
LAB_055d2b94:
    uVar6 = FUN_05574dec(param_1,0);
    if ((uVar6 & 1) == 0) goto LAB_055d2ba4;
  }
LAB_055d2ac4:
  uVar7 = thunk_FUN_02dd3048(param_1,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (3 < (int)uVar3) {
    if (uVar3 < 0x12) {
      if ((1 << (ulong)(uVar3 & 0x1f) & 0x30780U) == 0) {
        if (uVar3 == 0xb) {
          lVar5 = FUN_055c4fe0();
        }
        else {
          if (uVar3 != 0xc) goto LAB_055d2c28;
          lVar5 = Oculus_Platform_CAPI__ovr_TrialOffer_GetMaxTermCount();
        }
      }
      else {
        uVar8 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
        lVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0e060);
        uVar4 = FUN_055d5980(0,uVar8);
        FUN_055cb928(lVar5,uVar8,uVar4);
      }
    }
    else {
LAB_055d2c28:
      if (uVar3 == 4) {
        lVar5 = FUN_055caa68(param_1,param_2);
        return lVar5;
      }
      if (uVar3 != 5) goto LAB_055d2cac;
      plVar9 = (long *)(**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      if (plVar9 == (long *)0x0) goto LAB_055d2b60;
      (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      lVar5 = FUN_055c7238();
    }
    if (lVar5 != 0) {
      Oculus_Platform_CAPI__ovr_NetSyncConnection_GetConnectionId(lVar5,uVar7,param_2);
      return lVar5;
    }
LAB_055d2b60:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (uVar3 == 1) {
    lVar5 = FUN_055c8640(param_1,param_2);
    return lVar5;
  }
  if (uVar3 == 2) {
    lVar5 = FUN_055c3804(param_1,param_2);
    return lVar5;
  }
  if (uVar3 == 3) {
    lVar5 = FUN_055c42cc(param_1,param_2);
    return lVar5;
  }
LAB_055d2cac:
  thunk_FUN_02dfd288(PTR_DAT_069fc178);
  FUN_0297e1b4();
  uVar7 = FUN_0547e2f8(0);
  FUN_02979e58(param_1);
  in_stack_00000008._4_4_ = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400))
  ;
  uVar8 = thunk_FUN_02dfd288(System_Drawing_Point_var);
  uVar8 = thunk_FUN_02dd2d7c(uVar8,(long)&stack0x00000008 + 4);
  uVar10 = thunk_FUN_02dfd288(System_Runtime_Serialization_DataNode<Decimal>_TypeInfo);
  uVar7 = FUN_055873e0(uVar10,uVar7,uVar8,0);
LAB_055d2bb0:
  uVar7 = Oculus_Avatar2_OvrAvatarEntity__get_BehaviorSystemEnabled(param_1,uVar7,0);
  uVar8 = thunk_FUN_02dfd288(System_Runtime_Serialization_DataNode<DateTime>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar7,uVar8);
}


