/*
FUNCTION_NAME: FUN_033b68ac
ENTRY_POINT: 033b68ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_7;telemetry_or_network_hits_4
*/


void FUN_033b68ac(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
  if ((DAT_048323ce & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_InputArrayExtensions_IndexOfReference<InputActionState>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DaydreamHMD>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_EndGetRequestStream__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_AddDevice__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_AddDevice__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_FindControl__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_GetNameOfBaseLayout__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_IsFirstLayoutBasedOnSecond__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_ListEnabledActions__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputSystem_ListLayoutsBasedOn__);
    DAT_048323ce = 1;
  }
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_03416d98(plVar4,0);
  if (plVar4 == (long *)0x0) {
LAB_033b6c44:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03418c10(plVar4,param_2,0);
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_GetNameOfBaseLayout__;
  puVar1 = Method_UnityEngine_InputSystem_InputSystem_FindControl__;
  if (param_3 == 0) goto LAB_033b6c20;
  puVar8 = (undefined8 *)Method_UnityEngine_InputSystem_InputSystem_AddDevice__;
  if (*(long *)(param_3 + 0x28) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_3 + 0x28) + 0x10);
  }
  uVar5 = FUN_03405678(*(undefined8 *)Method_UnityEngine_InputSystem_InputSystem_AddDevice__,*puVar8
                       ,0);
  FUN_03418c10(plVar4,uVar5,0);
  uVar5 = FUN_03405678(*(undefined8 *)puVar2,*(undefined8 *)(param_3 + 0x10),0);
  FUN_03418c10(plVar4,uVar5,0);
  uVar5 = FUN_03405678(*(undefined8 *)puVar1,*(undefined8 *)(param_3 + 0x18),0);
  FUN_03418c10(plVar4,uVar5,0);
  lVar6 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if (lVar6 == 0) {
LAB_033b6ae0:
    local_34 = 0;
  }
  else {
    lVar6 = *(long *)(param_3 + 0x30);
    if (lVar6 == 0) {
      plVar7 = (long *)(**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      if (plVar7 == (long *)0x0) goto LAB_033b6c44;
      lVar6 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DaydreamHMD>__) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_033b6ac8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_UnityEngine_InputSystem_InputSystem_RegisterLayout<DaydreamHMD>__
                            ,2);
LAB_033b6ac8:
      lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar6 == 0) goto LAB_033b6ae0;
    }
    local_34 = *(undefined4 *)(lVar6 + 0x10);
  }
  puVar3 = Method_UnityEngine_InputSystem_InputSystem_ListLayoutsBasedOn__;
  puVar2 = Method_UnityEngine_InputSystem_InputSystem_ListEnabledActions__;
  puVar1 = Method_UnityEngine_InputSystem_InputControlExtensions_WriteValueIntoState__;
  uVar5 = thunk_FUN_01f113fc(*(undefined8 *)Method_System_Net_FtpWebRequest_EndGetRequestStream__,
                             &local_34);
  uVar5 = FUN_03406290(*(undefined8 *)puVar2,uVar5,0);
  FUN_03418c10(plVar4,uVar5,0);
  local_38 = *(undefined4 *)(param_3 + 0x20);
  uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
  uVar5 = FUN_03406290(*(undefined8 *)puVar3,uVar5,0);
  FUN_03418c10(plVar4,uVar5,0);
  plVar7 = *(long **)(param_3 + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar6 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_InputArrayExtensions_IndexOfReference<InputActionState>__
           ) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 6) * 0x10 + 0x138);
          goto LAB_033b6bd0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_InputArrayExtensions_IndexOfReference<InputActionState>__
                          ,6);
LAB_033b6bd0:
    local_3c = (*(code *)*puVar8)(plVar7,puVar8[1]);
    uVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                               ,&local_3c);
    uVar5 = FUN_03406290(*(undefined8 *)
                          Method_UnityEngine_InputSystem_InputSystem_IsFirstLayoutBasedOnSecond__,
                         uVar5,0);
    FUN_03418c10(plVar4,uVar5,0);
  }
LAB_033b6c20:
  (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  return;
}


