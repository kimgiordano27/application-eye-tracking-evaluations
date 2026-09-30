/*
FUNCTION_NAME: FUN_04231af0
ENTRY_POINT: 04231af0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void FUN_04231af0(long *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_40;
  int local_34;
  
  local_34 = param_2;
  if ((DAT_04841275 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Slider>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_04841275 = 1;
  }
  local_40 = 0;
  if (param_3 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = PTR_DAT_045913f0;
  }
  else {
    iVar1 = FUN_04231aa0(param_1);
    if (iVar1 < param_2) {
      uVar3 = FUN_035683d0(&local_34,0);
      uVar6 = thunk_FUN_01efb3a4(PTR_DAT_045913f8);
      uVar3 = FUN_03405678(uVar6,uVar3,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar6 = thunk_FUN_01f117cc();
      FUN_034f7db4(uVar6,uVar3,0);
      uVar3 = thunk_FUN_01efb3a4(PTR_DAT_04591400);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6,uVar3);
    }
    lVar7 = *param_1;
    if (param_3 != lVar7) {
      if (lVar7 == 0) {
LAB_04231cec:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(long *)(lVar7 + 0x3a0) == 0) || (*(char *)(*(long *)(lVar7 + 0x3a0) + 0x4c) == '\0')) {
        FUN_0422f8ec(param_3,0);
        puVar5 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
        if (*param_1 != 0) {
          lVar8 = *(long *)(*param_1 + 0x398);
          lVar7 = *(long *)
                   Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
          ;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar7 = *(long *)puVar5;
          }
          if (lVar8 == *(long *)(*(long *)(lVar7 + 0xb8) + 0x48)) {
            lVar7 = *param_1;
            if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Slider>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar3 = FUN_0414dc14(0,0);
            if (lVar7 == 0) goto LAB_04231cec;
            *(undefined8 *)(lVar7 + 0x398) = uVar3;
            thunk_FUN_01f51358(lVar7 + 0x398);
          }
          if ((*param_1 != 0) && (lVar7 = *(long *)(*param_1 + 0x2b8), lVar7 != 0)) {
            uVar4 = FUN_0411d0d0(lVar7,0);
            if ((uVar4 & 1) != 0) {
              if (*param_1 == 0) goto LAB_04231cec;
              FUN_0422b828(*param_1,0);
            }
            FUN_04231df0(param_1,param_3,param_2);
            iVar1 = *(int *)(param_3 + 0x328) + (uint)*(byte *)(param_3 + 0x10);
            if (0 < iVar1) {
              if (*param_1 == 0) goto LAB_04231cec;
              FUN_042282c4(*param_1,iVar1,0);
            }
            local_40 = *(undefined8 *)(param_3 + 0x378);
            FUN_04231f38(&local_40,*param_1);
            if (*param_1 != 0) {
              uVar2 = FUN_04224de4(*param_1,0);
              FUN_0422acb8(param_3,uVar2 & 1,0);
              if (*(int *)(param_3 + 0x330) == 0) {
                if (*param_1 == 0) goto LAB_04231cec;
                FUN_0422ad78(param_3,*(undefined4 *)(*param_1 + 0x334),0);
              }
              FUN_0422a54c(param_3,0,0);
              FUN_0421dd10(param_3,4,0);
              if (*param_1 != 0) {
                FUN_0421dd10(*param_1,4,0);
                return;
              }
            }
          }
        }
        goto LAB_04231cec;
      }
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04591410);
      FUN_0356adc8(uVar3,uVar6,0);
      goto LAB_04231dd8;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    puVar5 = PTR_DAT_04591408;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar5);
  FUN_034f6754(uVar3,uVar6,0);
LAB_04231dd8:
  uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04591400);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar6);
}


