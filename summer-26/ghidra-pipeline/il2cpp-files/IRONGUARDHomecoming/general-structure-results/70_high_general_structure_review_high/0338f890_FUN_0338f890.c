/*
FUNCTION_NAME: FUN_0338f890
ENTRY_POINT: 0338f890
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_15
*/


void FUN_0338f890(long param_1,long param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  long *plVar17;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0483221c & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_ResetAllBuffersToDelegate>__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Wit>__);
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_Redirect__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<ValueConnection_DebugData>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_CopyTo__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_GetObjectData__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_Insert__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_OnDeserialization__);
    thunk_FUN_01efb3a4(Method_Drawing_CommandBuilder_Reserve<CommandBuilder_SphereData>__);
    thunk_FUN_01efb3a4(
                      Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_AnyBuffersWrittenToDelegate>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_Remove__);
                    /* try { // try from 0338f94c to 0348f973 has its CatchHandler @ 0338fae4 */
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_SendRequest__);
    thunk_FUN_01efb3a4(
                      Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_set_ContentLength__);
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_set_Method__);
    thunk_FUN_01efb3a4(Method_UnityEngine_CubemapArray_ValidateIsNotCrunched__);
                    /* try { // try from 0338f98c to 0348f9eb has its CatchHandler @ 0338fae8 */
    thunk_FUN_01efb3a4(Method_UnityEngine_CubemapArray_Internal_Create__);
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_set_Timeout__);
    DAT_0483221c = 1;
  }
  puVar4 = 
  Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (param_2 != 0) {
    uVar9 = FUN_039fda98(param_2,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar4);
    }
    plVar10 = (long *)FUN_03a5d38c(uVar9,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    else {
      lVar14 = *(long *)Method_Drawing_CommandBuilder_Reserve<CommandBuilder_SphereData>__;
      bVar2 = *(byte *)(lVar14 + 0x130);
                    /* try { // try from 0338fa04 to 0348fa0f has its CatchHandler @ 0338fae0 */
      if (*(byte *)(*plVar10 + 0x130) < bVar2) {
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != lVar14) {
          plVar15 = (long *)0x0;
        }
      }
      *(long **)(param_1 + 0xb0) = plVar15;
      if (*(byte *)(*plVar10 + 0x130) < bVar2) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != lVar14) {
        plVar10 = (long *)0x0;
      }
    }
    plVar15 = (long *)(param_1 + 0xb0);
    thunk_FUN_01f51358(plVar15,plVar10);
    plVar10 = (long *)*plVar15;
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)(plVar10 + 0x13) = 0;
      plVar17 = (long *)(param_1 + 0x98);
      if (*plVar17 != 0) {
        (**(code **)(*plVar10 + 0x1c8))(plVar10,*plVar17,*(undefined8 *)(*plVar10 + 0x1d0));
      }
      puVar4 = Method_UnityEngine_CubemapArray_Internal_Create__;
      if (*(long *)(param_1 + 0x90) != 0) {
        if (*plVar17 == 0) {
          plVar10 = (long *)*plVar15;
          if (plVar10 == (long *)0x0) goto LAB_0338fe5c;
          (**(code **)(*plVar10 + 0x1c8))
                    (plVar10,*(undefined8 *)Method_UnityEngine_CubemapArray_Internal_Create__,
                     *(undefined8 *)(*plVar10 + 0x1d0));
        }
        plVar10 = (long *)*plVar15;
        if (plVar10 == (long *)0x0) goto LAB_0338fe5c;
        (**(code **)(*plVar10 + 0x238))
                  (plVar10,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(*plVar10 + 0x240));
        if ((*(long *)(param_1 + 0x88) == 0) ||
           (plVar10 = *(long **)(param_1 + 0xb0), plVar10 == (long *)0x0)) goto LAB_0338fe5c;
        (**(code **)(*plVar10 + 0x218))
                  (plVar10,(long)*(int *)(*(long *)(param_1 + 0x88) + 0x18),
                   *(undefined8 *)(*plVar10 + 0x220));
      }
      if (*(char *)(param_1 + 0x80) != '\0') {
        plVar10 = (long *)*plVar15;
        uVar11 = FUN_0340eec4(*plVar17,0);
        if (plVar10 == (long *)0x0) goto LAB_0338fe5c;
        plVar1 = (long *)puVar4;
        if ((uVar11 & 1) == 0) {
          plVar1 = plVar17;
        }
        (**(code **)(*plVar10 + 0x1c8))(plVar10,*plVar1,*(undefined8 *)(*plVar10 + 0x1d0));
        plVar10 = *(long **)(param_1 + 0x68);
        if (plVar10 == (long *)0x0) goto LAB_0338fe5c;
        plVar17 = *(long **)(param_1 + 0xb0);
        uVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        if (plVar17 == (long *)0x0) goto LAB_0338fe5c;
        (**(code **)(*plVar17 + 0x238))(plVar17,uVar9,*(undefined8 *)(*plVar17 + 0x240));
        if (*plVar15 == 0) goto LAB_0338fe5c;
        FUN_03a77f6c(*plVar15,1,0);
      }
      puVar3 = Method_System_Net_HttpWebRequest_set_Timeout__;
      puVar5 = 
      Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<ValueConnection_DebugData>__;
      if (param_3 != 0) {
        uVar11 = FUN_02b6b4d8(param_3,*(undefined8 *)Method_System_Net_HttpWebRequest_set_Timeout__,
                              *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<Wit>__);
        if ((uVar11 & 1) != 0) {
          lVar14 = *plVar15;
          uVar9 = FUN_02b6b264(param_3,*(undefined8 *)puVar3,*(undefined8 *)puVar5);
          if (lVar14 == 0) goto LAB_0338fe5c;
          FUN_03a781e8(lVar14,uVar9,0);
          FUN_02b6c7e0(param_3,*(undefined8 *)puVar3,
                       *(undefined8 *)Method_System_Net_HttpWebRequest_Redirect__);
        }
        lVar14 = FUN_02b6b114(param_3,*(undefined8 *)Method_System_Collections_Hashtable_CopyTo__);
        puVar8 = Method_System_Net_HttpWebRequest_set_Method__;
        puVar7 = Method_System_Collections_Hashtable_Insert__;
        puVar6 = Method_System_Collections_Hashtable_GetObjectData__;
        puVar3 = 
        Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_ResetAllBuffersToDelegate>__
        ;
        if (lVar14 != 0) {
          FUN_0300123c(&local_98,lVar14,*(undefined8 *)Method_System_Collections_Hashtable_Remove__)
          ;
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_70 = local_88;
          while (uVar11 = FUN_02ce9cdc(&local_80,*(undefined8 *)puVar7), uVar9 = local_70,
                (uVar11 & 1) != 0) {
            plVar10 = (long *)*plVar15;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            uVar12 = FUN_02b6b264(param_3,uVar9,*(undefined8 *)puVar5);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03aaee24(lVar14,uVar9,uVar12,0);
          }
          FUN_02ce9cd8(&local_80,*(undefined8 *)puVar6);
          plVar10 = *(long **)(param_1 + 0xb0);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x288))
                      (plVar10,*(undefined4 *)(param_1 + 0x60),*(undefined8 *)(*plVar10 + 0x290));
            FUN_0338fed4(param_1);
            plVar10 = *(long **)(param_1 + 0xb0);
            if (plVar10 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              uVar11 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar4,0);
              if ((uVar11 & 1) == 0) {
                plVar10 = (long *)*plVar15;
                if (plVar10 == (long *)0x0) goto LAB_0338fe5c;
                uVar9 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                uVar11 = thunk_FUN_0340e318(uVar9,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_CubemapArray_ValidateIsNotCrunched__
                                            ,0);
                if ((uVar11 & 1) == 0) {
                  FUN_0338ff78(param_1);
                  return;
                }
              }
              plVar10 = *(long **)(param_1 + 0xb0);
              uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
              FUN_034f833c(uVar9,param_1,*(undefined8 *)puVar8,0);
              if ((plVar10 != (long *)0x0) &&
                 (plVar10 = (long *)(**(code **)(*plVar10 + 0x2b8))
                                              (plVar10,uVar9,*plVar15,
                                               *(undefined8 *)(*plVar10 + 0x2c0)),
                 plVar10 != (long *)0x0)) {
                lVar14 = *plVar10;
                uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar11 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) ==
                        *(long *)
                         Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_AnyBuffersWrittenToDelegate>__
                       ) {
                      puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_0338fdd8;
                    }
                    uVar11 = uVar11 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar11 != 0);
                }
                puVar13 = (undefined8 *)
                          FUN_01ecb238(plVar10,*(long *)
                                                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<DrawingData_BuilderData_AnyBuffersWrittenToDelegate>__
                                       ,1);
LAB_0338fdd8:
                uVar9 = (*(code *)*puVar13)(plVar10,puVar13[1]);
                uVar12 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_System_Net_HttpWebRequest_SendRequest__);
                FUN_035d7260(uVar12,param_1,
                             *(undefined8 *)Method_System_Net_HttpWebRequest_set_ContentLength__,0);
                FUN_035d9c30(uVar9,uVar12,*(undefined8 *)(param_1 + 0xb0),
                             *(undefined4 *)(param_1 + 0x60),1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0338fe5c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


