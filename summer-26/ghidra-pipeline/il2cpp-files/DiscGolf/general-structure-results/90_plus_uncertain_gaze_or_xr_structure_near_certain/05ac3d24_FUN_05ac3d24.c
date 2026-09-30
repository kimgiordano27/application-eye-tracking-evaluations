/*
FUNCTION_NAME: FUN_05ac3d24
ENTRY_POINT: 05ac3d24
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


void FUN_05ac3d24(long param_1,long param_2,ulong param_3)

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
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  
  if ((DAT_06dc1e16 & 1) == 0) {
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
    DAT_06dc1e16 = 1;
  }
  if ((param_3 & 1) == 0) {
    if (param_2 == 0) goto LAB_05ac41a0;
    if (*(long *)(param_2 + 0x50) == 0) {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarRequestResultCode>_SetStateMachine__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
    else {
      FUN_05ac54d4(param_1,param_2);
      uVar13 = *(undefined8 *)(param_2 + 0x50);
      uVar15 = *(undefined8 *)(param_1 + 0x50);
      uVar7 = thunk_FUN_02dd3144(*(undefined8 *)System_Xml_Serialization_XmlArrayAttribute_TypeInfo)
      ;
      FUN_05bca5c4(uVar7,uVar13,uVar15,0);
      FUN_05b1b1a8(param_2,uVar7,0);
    }
    uVar10 = *(uint *)(param_2 + 0x58);
    if (uVar10 == 0x100) {
      uVar10 = *(uint *)(param_1 + 0x74);
      if (uVar10 != 0xff) goto LAB_05ac3f38;
    }
    else if (uVar10 != 0xff) {
      if ((uVar10 & 0xffffffe1) != 0) {
        FUN_05bfde88(param_1,*(undefined8 *)
                              Method_OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_GetResult__
                     ,param_2,0);
        uVar10 = *(uint *)(param_2 + 0x58);
      }
LAB_05ac3f38:
      uVar10 = uVar10 & 0x1e;
    }
    *(uint *)(param_2 + 0x70) = uVar10;
  }
  else {
    if (param_2 == 0) goto LAB_05ac41a0;
    if (*(long *)(param_2 + 0x50) != 0) {
      FUN_05bfde00(param_1,*(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                   ,*(undefined8 *)PTR_DAT_06a10fd8,param_2,0);
    }
  }
  plVar14 = *(long **)(param_2 + 0x98);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
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
        plVar14[5] = param_2;
        LeanTween__value(plVar14 + 5,param_2);
        lVar11 = plVar14[10];
        if (plVar14[0xb] == 0) {
          if (lVar11 == 0) goto LAB_05ac41a0;
          uVar16 = FUN_05bca8a4(lVar11,0);
          puVar9 = (undefined8 *)
                   Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_IsCompleted__
          ;
          puVar3 = (undefined8 *)
                   Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_get_IsCompleted__;
joined_r0x05ac4274:
          if ((uVar16 & 1) == 0) {
            FUN_05ac5b80(param_1,plVar14,*puVar3,plVar14[10]);
          }
          else {
            FUN_05bfde88(param_1,*puVar9,plVar14,0);
          }
        }
        else {
          if (lVar11 == 0) goto LAB_05ac41a0;
          uVar16 = FUN_05bca8a4(lVar11,0);
          if ((uVar16 & 1) == 0) {
            FUN_05bfde88(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_IsCompleted__
                         ,plVar14,0);
          }
          if (plVar14[0xb] == 0) goto LAB_05ac41a0;
          puVar9 = (undefined8 *)(plVar14[0xb] + 0x28);
          *puVar9 = plVar14;
          LeanTween__value(puVar9,plVar14);
LAB_05ac4238:
          FUN_05ac3d24(param_1,plVar14[0xb],1);
        }
LAB_05ac42c0:
        FUN_05ac1c10(param_1,plVar14);
        FUN_05ac1cb0(param_1,plVar14);
        goto LAB_05ac42d8;
      }
      bVar2 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)
           System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar14);
      }
      plVar14[5] = param_2;
      LeanTween__value(plVar14 + 5,param_2);
      if (plVar14[10] != 0) {
        iVar5 = FUN_05489ff8(plVar14[10],0);
        puVar4 = 
        Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_GetResult__
        ;
        lVar11 = plVar14[0xb];
        if (lVar11 != 0) {
          iVar6 = (int)*(ulong *)(lVar11 + 0x18);
          iVar5 = iVar5 + iVar6;
          if (0 < iVar6) {
            uVar16 = 0;
            uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar12 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05ac5b80(param_1,plVar14,*(undefined8 *)puVar4,
                           *(undefined8 *)(lVar11 + 0x20 + uVar16 * 8));
              uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar16 = uVar16 + 1;
            } while ((long)uVar16 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
        }
        if (iVar5 == 0) {
          FUN_05bfde88(param_1,*(undefined8 *)
                                Method_OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>_GetResult__
                       ,plVar14,0);
        }
        puVar4 = 
        System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
        ;
        lVar11 = plVar14[10];
        if (lVar11 != 0) {
          iVar5 = 0;
          do {
            iVar6 = FUN_05489ff8(lVar11,0);
            if (iVar6 <= iVar5) goto LAB_05ac42c0;
            plVar8 = (long *)plVar14[10];
            if ((plVar8 == (long *)0x0) ||
               (plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                           (plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x310)),
               plVar8 == (long *)0x0)) break;
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar8);
            }
            plVar8[5] = (long)plVar14;
            LeanTween__value(plVar8 + 5,plVar14);
            FUN_05ac3d24(param_1,plVar8,1);
            lVar11 = plVar14[10];
            iVar5 = iVar5 + 1;
          } while (lVar11 != 0);
        }
      }
    }
    else {
      plVar14[5] = param_2;
      LeanTween__value(plVar14 + 5,param_2);
      lVar11 = plVar14[0xc];
      if (lVar11 != 0) {
        iVar5 = 0;
        while (iVar6 = FUN_05489ff8(lVar11,0), iVar5 < iVar6) {
          plVar8 = (long *)plVar14[0xc];
          if ((plVar8 == (long *)0x0) ||
             (lVar11 = (**(code **)(*plVar8 + 0x308))(plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x310))
             , lVar11 == 0)) goto LAB_05ac41a0;
          *(undefined8 *)(lVar11 + 0x28) = plVar14;
          LeanTween__value((undefined8 *)(lVar11 + 0x28),plVar14);
          lVar11 = plVar14[0xc];
          iVar5 = iVar5 + 1;
          if (lVar11 == 0) goto LAB_05ac41a0;
        }
        lVar11 = plVar14[10];
        if (plVar14[0xb] == 0) {
          if (lVar11 != 0) {
            uVar16 = FUN_05bca8a4(lVar11,0);
            puVar9 = (undefined8 *)
                     Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_get_IsCompleted__
            ;
            puVar3 = (undefined8 *)PTR_DAT_06a16428;
            goto joined_r0x05ac4274;
          }
        }
        else if (lVar11 != 0) {
          uVar16 = FUN_05bca8a4(lVar11,0);
          if ((uVar16 & 1) == 0) {
            FUN_05bfde88(param_1,*(undefined8 *)
                                  Method_OVRTask_Awaiter<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_GetResult__
                         ,plVar14,0);
          }
          goto LAB_05ac4238;
        }
      }
    }
LAB_05ac41a0:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05bfde88(param_1,*(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__
               ,param_2,0);
LAB_05ac42d8:
  FUN_05ac1cb0(param_1,param_2);
  return;
}


