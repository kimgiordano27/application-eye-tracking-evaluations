/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_AssetFile_DownloadCancelByName_Native
ENTRY_POINT: 055b1bac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


undefined4
Oculus_Platform_CAPI__ovr_AssetFile_DownloadCancelByName_Native
          (long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *in_stack_00000070;
  undefined8 *in_stack_00000078;
  
  if ((DAT_06dbb638 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(
                System_Action<XRDeviceSimulator_SimulatedHandExpression,_InputAction_CallbackContext>_TypeInfo
                );
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(UnityEngine_Rendering_ProbeVolumeSystemParameters_var);
    FUN_02d965b8(System_Action<LightCompiler,_Expression>_TypeInfo);
    FUN_02d965b8(System_Action<ArSession,_ArConfig,_IntPtr>_TypeInfo);
    FUN_02d965b8(System_Action<float3>_TypeInfo);
    FUN_02d965b8(System_Action<LogData,_string>_TypeInfo);
    DAT_06dbb638 = 1;
  }
  *in_stack_00000078 = 0;
  LeanTween__value(in_stack_00000078,0);
  *in_stack_00000070 = 0;
  LeanTween__value(in_stack_00000070,0);
  if (param_2 == (long *)0x0) {
LAB_055b2098:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  if (iVar2 == 4) {
    plVar3 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    if ((plVar3 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)), lVar4 == 0)
       ) goto LAB_055b2098;
    if (0 < *(int *)(lVar4 + 0x10)) {
      sVar1 = FUN_053674f8(lVar4,0,0);
      puVar10 = System_Action<LogData,_string>_TypeInfo;
      if (sVar1 != 0x24) {
        return 0;
      }
      do {
        plVar3 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
        if (plVar3 == (long *)0x0) goto LAB_055b2098;
        uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        uVar6 = FUN_0536b7a8(uVar5,*(undefined8 *)puVar10,4,0);
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN_0536b7a8(uVar5,*(undefined8 *)
                                      UnityEngine_Rendering_ProbeVolumeSystemParameters_var,4,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN_0536b7a8(uVar5,*(undefined8 *)System_Action<float3>_TypeInfo,4,0);
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN_0536b7a8(uVar5,*(undefined8 *)
                                          System_Action<LightCompiler,_Expression>_TypeInfo,4,0);
              if ((uVar6 & 1) == 0) {
                return 0;
              }
              FUN_05574a40(param_2,0);
              lVar4 = FUN_055b067c(param_1,param_2,*param_3,*param_4,param_5,param_8,
                                   *in_stack_00000078);
              FUN_05574a40(param_2,0);
              *in_stack_00000070 = lVar4;
              LeanTween__value(in_stack_00000070,lVar4);
              return 1;
            }
            FUN_05574a40(param_2,0);
            plVar3 = (long *)(**(code **)(*param_2 + 0x198))
                                       (param_2,*(undefined8 *)(*param_2 + 0x1a0));
            if (plVar3 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            }
            *in_stack_00000078 = uVar5;
            LeanTween__value(in_stack_00000078);
          }
          else {
            FUN_05574a40(param_2,0);
            plVar3 = (long *)(**(code **)(*param_2 + 0x198))
                                       (param_2,*(undefined8 *)(*param_2 + 0x1a0));
            if (plVar3 == (long *)0x0) goto LAB_055b2098;
            uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
            FUN_055b3358(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar5);
          }
LAB_055b1e74:
          FUN_05574a40(param_2,0);
        }
        else {
          FUN_05574a40(param_2,0);
          iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          if ((iVar2 != 9) &&
             (iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400)),
             iVar2 != 0xb)) {
            thunk_FUN_02dfd288(PTR_DAT_069fc178);
            FUN_0297e1b4();
            uVar5 = FUN_0547e2f8(0);
            puVar10 = System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo;
LAB_055b20c0:
            uVar8 = thunk_FUN_02dfd288(puVar10);
            uVar9 = thunk_FUN_02dfd288(System_Action<LogData,_string>_TypeInfo);
            uVar5 = FUN_055873e0(uVar8,uVar5,uVar9,0);
            uVar5 = FUN_05574a94(param_2,uVar5,0);
            uVar8 = thunk_FUN_02dfd288(System_Action<PayloadData,_bool,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
            FUN_02d96724(uVar5,uVar8);
          }
          plVar3 = (long *)(**(code **)(*param_2 + 0x198))
                                     (param_2,*(undefined8 *)(*param_2 + 0x1a0));
          if (plVar3 == (long *)0x0) goto LAB_055b1e74;
          lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          FUN_05574a40(param_2,0);
          if (lVar4 != 0) {
            iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
            if (iVar2 == 4) {
              thunk_FUN_02dfd288(PTR_DAT_069fc178);
              FUN_0297e1b4();
              uVar5 = FUN_0547e2f8(0);
              puVar10 = System_Action<Column,_int,_int>_TypeInfo;
              goto LAB_055b20c0;
            }
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar7 = FUN_05577be0(*(long *)(param_1 + 0x20),0), lVar7 != 0)) {
              lVar7 = FUN_0297befc(0,*(undefined8 *)
                                      System_Action<XRDeviceSimulator_SimulatedHandExpression,_InputAction_CallbackContext>_TypeInfo
                                   ,lVar7,param_1,lVar4);
              *in_stack_00000070 = lVar7;
              LeanTween__value(in_stack_00000070,lVar7);
              puVar10 = System_Net_ServicePoint_var;
              if (*(long *)(param_1 + 0x28) == 0) {
                return 1;
              }
              iVar2 = FUN_0297bd6c(0,*(undefined8 *)System_Net_ServicePoint_var);
              if (iVar2 < 3) {
                return 1;
              }
              lVar7 = *(long *)(param_1 + 0x28);
              uVar5 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
              if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
                thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
              }
              uVar8 = FUN_0547e2f8(0);
              if (*in_stack_00000070 != 0) {
                uVar9 = thunk_FUN_02da6564(*in_stack_00000070,0);
                uVar8 = FUN_05588558(*(undefined8 *)
                                      System_Action<ArSession,_ArConfig,_IntPtr>_TypeInfo,uVar8,
                                     lVar4,uVar9,0);
                if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
                  thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
                }
                uVar9 = thunk_FUN_02dd3048(param_2,*(undefined8 *)
                                                    UnityEngine_UIElements_PanelRaycaster_var);
                uVar5 = FUN_05570ab4(uVar9,uVar5,uVar8,0);
                if (lVar7 != 0) {
                  FUN_02cfc328(1,*(undefined8 *)puVar10,lVar7,3,uVar5,0);
                  return 1;
                }
              }
            }
            goto LAB_055b2098;
          }
        }
        iVar2 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
      } while (iVar2 == 4);
    }
  }
  return 0;
}


