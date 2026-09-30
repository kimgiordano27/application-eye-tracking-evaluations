/*
FUNCTION_NAME: FUN_05add8c0
ENTRY_POINT: 05add8c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_05add8c0(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  if ((DAT_06dc1e6e & 1) == 0) {
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt16_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt32_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                );
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
                );
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                );
    FUN_02d965b8(PTR_DAT_06a16428);
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                );
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__);
    FUN_02d965b8(
                Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
                );
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__);
    FUN_02d965b8(PTR_DAT_06a10fd8);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02d965b8(
                Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                );
    DAT_06dc1e6e = 1;
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) goto LAB_05addd54;
    if (*(long *)(param_2 + 0x50) == 0) {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
    else {
      FUN_05adee90(param_1,param_2);
      uVar12 = *(undefined8 *)(param_2 + 0x50);
      uVar14 = *(undefined8 *)(param_1 + 0x48);
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo)
      ;
      FUN_05bca5c4(uVar7,uVar12,uVar14,0);
      FUN_05b1b1a8(param_2,uVar7,0);
    }
    uVar10 = *(uint *)(param_2 + 0x58);
    if (uVar10 == 0x100) {
      uVar10 = *(uint *)(param_1 + 0x60);
      if (uVar10 != 0xff) goto LAB_05addad0;
    }
    else if (uVar10 != 0xff) {
      if ((uVar10 & 0xffffffe3) != 0) {
        FUN_05bfde88(param_1,*(undefined8 *)
                              Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                     ,param_2,0);
        uVar10 = *(uint *)(param_2 + 0x58);
      }
LAB_05addad0:
      uVar10 = uVar10 & 0x1c;
    }
    *(uint *)(param_2 + 0x70) = uVar10;
  }
  else {
    if (param_2 == 0) goto LAB_05addd54;
    if (*(long *)(param_2 + 0x50) != 0) {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
  }
  plVar13 = *(long **)(param_2 + 0x98);
  if (plVar13 != (long *)0x0) {
    lVar11 = *plVar13;
    bVar1 = *(byte *)(lVar11 + 0x130);
    bVar2 = *(byte *)(*(long *)
                       System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt32_TypeInfo
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt32_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt16_TypeInfo
                       + 0x130);
      if ((bVar2 <= bVar1) &&
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)
           System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt16_TypeInfo)) {
        plVar13[5] = param_2;
        LeanTween__value(plVar13 + 5,param_2);
        lVar11 = plVar13[10];
        if (plVar13[0xb] == 0) {
          if (lVar11 == 0) goto LAB_05addd54;
          uVar15 = FUN_05bca8a4(lVar11,0);
          puVar9 = (undefined8 *)
                   Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
          ;
          puVar3 = (undefined8 *)
                   Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__;
joined_r0x05adde28:
          if ((uVar15 & 1) == 0) {
            uVar7 = FUN_05adf548(param_1,plVar13,*puVar3,plVar13[10]);
          }
          else {
            uVar7 = FUN_05bfde88(param_1,*puVar9,plVar13,0);
          }
        }
        else {
          if (lVar11 == 0) goto LAB_05addd54;
          uVar15 = FUN_05bca8a4(lVar11,0);
          if ((uVar15 & 1) == 0) {
            FUN_05bfde88(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                         ,plVar13,0);
          }
          if (plVar13[0xb] == 0) goto LAB_05addd54;
          puVar9 = (undefined8 *)(plVar13[0xb] + 0x28);
          *puVar9 = plVar13;
          LeanTween__value(puVar9,plVar13);
LAB_05adddec:
          uVar7 = FUN_05add8c0(param_1,plVar13[0xb],1);
        }
LAB_05adde74:
        FUN_05adbc04(uVar7,plVar13);
        FUN_05ad92a4(param_1,plVar13);
        goto LAB_05adde88;
      }
      bVar2 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar13);
      }
      plVar13[5] = param_2;
      LeanTween__value(plVar13 + 5,param_2);
      if (plVar13[10] != 0) {
        iVar5 = FUN_05489ff8(plVar13[10],0);
        puVar4 = 
        Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
        ;
        lVar11 = plVar13[0xb];
        if (lVar11 == 0) {
LAB_05addbec:
          if (iVar5 == 0) {
            FUN_05bfde88(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__
                         ,plVar13,0);
          }
          puVar4 = 
          System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
          ;
          lVar11 = plVar13[10];
          if (lVar11 != 0) {
            iVar5 = 0;
            do {
              uVar7 = FUN_05489ff8(lVar11,0);
              if ((int)uVar7 <= iVar5) goto LAB_05adde74;
              plVar8 = (long *)plVar13[10];
              if ((plVar8 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar8 + 0x308))
                                     (plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x310)), lVar11 == 0))
              break;
              *(undefined8 *)(lVar11 + 0x28) = plVar13;
              LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar13);
              plVar8 = (long *)plVar13[10];
              if (plVar8 == (long *)0x0) break;
              plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                         (plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x310));
              if (plVar8 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
                {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(plVar8);
                }
              }
              FUN_05add8c0(param_1,plVar8,1);
              lVar11 = plVar13[10];
              iVar5 = iVar5 + 1;
            } while (lVar11 != 0);
          }
        }
        else {
          uVar15 = 0;
          iVar5 = iVar5 + *(int *)(lVar11 + 0x18);
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar15) goto LAB_05addbec;
            if (*(uint *)(lVar11 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_05adf548(param_1,plVar13,*(undefined8 *)puVar4,
                         *(undefined8 *)(lVar11 + uVar15 * 8 + 0x20));
            lVar11 = plVar13[0xb];
            uVar15 = uVar15 + 1;
          } while (lVar11 != 0);
        }
      }
    }
    else {
      plVar13[5] = param_2;
      LeanTween__value(plVar13 + 5,param_2);
      lVar11 = plVar13[0xc];
      if (lVar11 != 0) {
        iVar5 = 0;
        while (iVar6 = FUN_05489ff8(lVar11,0), iVar5 < iVar6) {
          plVar8 = (long *)plVar13[0xc];
          if ((plVar8 == (long *)0x0) ||
             (lVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x310))
             , lVar11 == 0)) goto LAB_05addd54;
          *(undefined8 *)(lVar11 + 0x28) = plVar13;
          LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar13);
          lVar11 = plVar13[0xc];
          iVar5 = iVar5 + 1;
          if (lVar11 == 0) goto LAB_05addd54;
        }
        lVar11 = plVar13[10];
        if (plVar13[0xb] == 0) {
          if (lVar11 != 0) {
            uVar15 = FUN_05bca8a4(lVar11,0);
            puVar9 = (undefined8 *)
                     Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
            ;
            puVar3 = (undefined8 *)PTR_DAT_06a16428;
            goto joined_r0x05adde28;
          }
        }
        else if (lVar11 != 0) {
          uVar15 = FUN_05bca8a4(lVar11,0);
          if ((uVar15 & 1) == 0) {
            FUN_05bfde88(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                         ,plVar13,0);
          }
          goto LAB_05adddec;
        }
      }
    }
LAB_05addd54:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05bfde88(param_1,*(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__
               ,param_2,0);
LAB_05adde88:
  FUN_05ad92a4(param_1,param_2);
  return;
}


