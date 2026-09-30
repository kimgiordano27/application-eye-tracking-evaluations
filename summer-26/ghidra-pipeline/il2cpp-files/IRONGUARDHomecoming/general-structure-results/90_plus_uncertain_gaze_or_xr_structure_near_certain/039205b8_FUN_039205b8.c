/*
FUNCTION_NAME: FUN_039205b8
ENTRY_POINT: 039205b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03920810) */
/* WARNING: Removing unreachable block (ram,0x0392081c) */

undefined8 FUN_039205b8(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *local_38;
  
  if ((DAT_04838284 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04838284 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  local_38 = (long *)0x0;
  plVar3 = (long *)FUN_0391ef4c(&local_38,param_2,param_1,param_3);
  puVar2 = Method_System_Configuration_ConfigurationElement_IsModified__;
  if (param_3 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                 );
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_029dad5c(plVar5,*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_0392070c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                          ,9);
LAB_0392070c:
    (*(code *)*puVar6)(plVar3,uVar4,puVar6[1]);
    uVar4 = System_Text_RegularExpressions_RegexInterpreter__FindFirstChar(plVar3);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0392077c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar7,0);
LAB_0392077c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  else {
    uVar4 = System_Text_RegularExpressions_RegexInterpreter__FindFirstChar(plVar3);
  }
  plVar3 = local_38;
  if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *local_38;
  lVar7 = *(long *)puVar1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_039207e4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(local_38,lVar7,0);
LAB_039207e4:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  return uVar4;
}


