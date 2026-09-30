/*
FUNCTION_NAME: FUN_02a55c10
ENTRY_POINT: 02a55c10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_02a55c10(long param_1,int param_2,int param_3,byte param_4,long param_5,long param_6)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar9;
  ulong uVar10;
  undefined *puVar8;
  
  if ((DAT_04830f1f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__);
    DAT_04830f1f = 1;
  }
  FUN_035ac8e8(param_1,0);
  if (param_2 < 1) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<InternedString,_string>__);
    puVar8 = Method_System_Linq_Enumerable_Select<InvalidConnection,_IUnitInputPort>__;
  }
  else {
    if (-1 < param_3) {
      iVar1 = param_2;
      if (param_2 <= param_3) {
        iVar1 = param_3;
      }
      plVar2 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,param_2);
      puVar8 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<byte,_short>__;
      if (plVar2 != (long *)0x0) {
        if (0 < (int)plVar2[3]) {
          uVar10 = 0;
          plVar9 = plVar2 + 4;
          do {
            lVar3 = thunk_FUN_01f117cc(*(undefined8 *)puVar8);
            FUN_035ac8e8(lVar3,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
              uVar5 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar5,0);
            }
            if (*(uint *)(plVar2 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *plVar9 = lVar3;
            thunk_FUN_01f51358(plVar9,lVar3);
            uVar10 = uVar10 + 1;
            plVar9 = plVar9 + 1;
          } while ((long)uVar10 < (long)(int)plVar2[3]);
        }
        uVar5 = FUN_01f08890(*(undefined8 *)
                              Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__);
        lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xb8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar3 = FUN_01f08890(lVar3,iVar1);
        lVar4 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xa8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        uVar6 = thunk_FUN_01f117cc(lVar4);
        FUN_02774828(uVar6,lVar3,plVar2,uVar5,
                     *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0xc0));
        thunk_FUN_01f3e6f0();
        *(undefined8 *)(param_1 + 0x10) = uVar6;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x10),uVar6);
        if (param_5 == 0) {
          param_5 = FUN_02249368(*(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 200))
          ;
        }
        *(long *)(param_1 + 0x18) = param_5;
        thunk_FUN_01f51358((long *)(param_1 + 0x18),param_5);
        *(byte *)(param_1 + 0x20) = param_4 & 1;
        if (lVar3 != 0) {
          iVar1 = 0;
          if ((int)plVar2[3] != 0) {
            iVar1 = *(int *)(lVar3 + 0x18) / (int)plVar2[3];
          }
          *(int *)(param_1 + 0x24) = iVar1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_13__
                              );
    puVar8 = Method_System_Linq_Enumerable_Select<InvalidConnection,_IUnitOutputPort>__;
  }
  uVar7 = thunk_FUN_01efb3a4(puVar8);
  FUN_034f3578(uVar5,uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,param_6);
}


