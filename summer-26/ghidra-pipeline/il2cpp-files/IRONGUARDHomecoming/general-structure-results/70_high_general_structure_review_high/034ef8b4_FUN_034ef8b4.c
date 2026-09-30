/*
FUNCTION_NAME: FUN_034ef8b4
ENTRY_POINT: 034ef8b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 FUN_034ef8b4(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined *puVar11;
  
  local_68 = param_1;
  if ((DAT_04832e37 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    DAT_04832e37 = 1;
  }
  puVar11 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  local_70 = 0;
  local_74[0] = 0;
  local_80 = 0;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar14 = thunk_FUN_01f117cc();
    puVar11 = Method_System_ComponentModel_Win32Exception_GetObjectData__;
  }
  else {
    if (param_3 != 0) {
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar2 = FUN_034ef580(param_5,param_2);
      if ((param_4 >> 1 & 1) != 0) {
LAB_034ef990:
        puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
        ;
        lVar6 = FUN_034f1ae4(param_2,local_68,0,&local_70);
        lVar13 = *(long *)(param_2 + 0x30);
        if (lVar6 == 0) goto LAB_034efb1c;
        uVar14 = *(undefined8 *)(lVar6 + 0x58);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar13 = FUN_0358203c(lVar13,uVar14,0);
        uVar7 = FUN_034efde4(lVar6);
        if ((uVar7 & 1) == 0) goto LAB_034efb1c;
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0354e970(&local_68,0);
        FUN_034eff4c(&local_c0,param_2,uVar4,lVar6,local_70);
        uVar14 = local_68;
        uStack_98 = uStack_b8;
        local_a0 = local_c0;
        local_90 = local_b0;
        if ((param_4 >> 1 & 1) == 0) {
          if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          uStack_d8 = uStack_b8;
          local_e0 = local_c0;
          local_d0 = local_b0;
          uVar7 = FUN_034f0088(uVar14,lVar6,&local_e0);
          if ((uVar7 & 1) != 0) {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar14 = thunk_FUN_01f117cc();
            uVar9 = thunk_FUN_01efb3a4(Method_Oculus_Platform_WindowsPlatform_Initialize__);
            puVar11 = Method_Meta_WitAi_WitRequest_<HandleResponse>b__95_0__;
            goto LAB_034efd08;
          }
        }
        uVar14 = local_68;
        uStack_b8 = uStack_98;
        local_c0 = local_a0;
        local_b0 = local_90;
        if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) == 0)
        {
          thunk_FUN_01ee6d7c();
        }
        uStack_f8 = uStack_b8;
        local_100 = local_c0;
        local_f0 = local_b0;
        uVar7 = FUN_034f0454(uVar14,lVar6,&local_100);
        if ((uVar7 & 1) == 0) {
          lVar8 = *(long *)puVar1;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar8 = *(long *)puVar1;
          }
          puVar12 = *(undefined8 **)(lVar8 + 0xb8);
        }
        else {
          lVar8 = *(long *)puVar1;
          puVar12 = (undefined8 *)(lVar6 + 0x20);
        }
        uVar14 = *puVar12;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar13 = FUN_0358203c(lVar13,uVar14,0);
LAB_034efb1c:
        iVar3 = FUN_034ef580(param_5,param_3);
        if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar11);
        }
        iVar5 = FUN_0354dfec(&local_68,0);
        if (((iVar2 == iVar3) && (iVar2 != 0)) && (iVar5 != 0)) {
          local_58 = local_68;
        }
        else {
          if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar6 = FUN_0354e060(&local_68,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar1);
          }
          if (*(int *)(*(long *)Method_System_Net_WebConnectionStream_set_WriteTimeout__ + 0xe0) ==
              0) {
            thunk_FUN_01ee6d7c();
          }
          local_80 = FUN_034f0834(lVar6 - lVar13,param_3,local_74);
          if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar11);
          }
          uVar14 = FUN_0354e060(&local_80,0);
          if (iVar3 == 2) {
            local_58 = 0;
            FUN_0354c1a4(&local_58,uVar14,2,local_74[0],0);
          }
          else {
            local_58 = 0;
            FUN_0354c0c4(&local_58,uVar14,iVar3,0);
          }
        }
        return local_58;
      }
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar3 = FUN_0354dfec(&local_68,0);
      if (iVar3 == 0) goto LAB_034ef990;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      iVar3 = FUN_0354dfec(&local_68,0);
      if (iVar3 == iVar2) goto LAB_034ef990;
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar14 = thunk_FUN_01f117cc();
      uVar9 = thunk_FUN_01efb3a4(Method_Oculus_Platform_WindowsPlatform_AsyncInitialize__);
      puVar11 = Method_System_ComponentModel_Win32Exception_GetObjectData__;
LAB_034efd08:
      uVar10 = thunk_FUN_01efb3a4(puVar11);
      FUN_034efd98(uVar14,uVar9,uVar10);
      goto LAB_034efc90;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar14 = thunk_FUN_01f117cc();
    puVar11 = Method_OculusSampleFramework_WindmillController_StartStopStateChanged__;
  }
  uVar9 = thunk_FUN_01efb3a4(puVar11);
  FUN_034efd20(uVar14,uVar9);
LAB_034efc90:
  uVar9 = thunk_FUN_01efb3a4(Method_System_WindowsConsoleDriver_ReadKey__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar14,uVar9);
}


