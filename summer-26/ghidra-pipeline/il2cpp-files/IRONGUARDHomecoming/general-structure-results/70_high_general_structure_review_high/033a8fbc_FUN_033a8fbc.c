/*
FUNCTION_NAME: FUN_033a8fbc
ENTRY_POINT: 033a8fbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_17;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_033a8fbc(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 033a8fbc to 034a8fcb has its CatchHandler @ 033a920c */
  puVar1 = Method_System_Net_HttpWebRequest_EndGetRequestStream__;
                    /* try { // try from 033a8fe8 to 034a8ff7 has its CatchHandler @ 033a9210 */
  if ((DAT_04832343 & 1) == 0) {
                    /* try { // try from 033a8ff8 to 034a9033 has its CatchHandler @ 033a8ee8 */
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<ValueConnection_DebugData>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_CopyTo__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_GetObjectData__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_Insert__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_OnDeserialization__);
                    /* try { // try from 033a9034 to 034a90c3 has its CatchHandler @ 033a9218 */
    thunk_FUN_01efb3a4(Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Quaternion>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetIMECursorPositionCommand>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Hashtable_Remove__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_HttpWebRequest_EndGetRequestStream__);
    thunk_FUN_01efb3a4(Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<bool>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_AddProcessors__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ApplyUseStateFrom__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    DAT_04832343 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_03a08fb8(lVar8,0);
  if (param_1 != (long *)0x0) {
    lVar14 = *param_1;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)
             Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetIMECursorPositionCommand>__
           ) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_033a912c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_UnityEngine_InputSystem_InputDevice_ExecuteCommand<SetIMECursorPositionCommand>__
                          ,4);
LAB_033a912c:
    plVar10 = (long *)(*(code *)*puVar9)(param_1,puVar9[1]);
    puVar1 = Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__;
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__) {
            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_033a9194;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Jobs_IJobExtensions_Schedule<NativeReferenceDisposeJob>__
                            ,0);
LAB_033a9194:
      uVar11 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (lVar8 != 0) {
        FUN_03a0999c(lVar8,uVar11,0);
        lVar14 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_033a9204;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,1);
LAB_033a9204:
        uVar11 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        FUN_03a096ac(lVar8,uVar11,0);
        lVar14 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto System_Runtime_CompilerServices_AsyncMethodBuilderCore__TryGetContinuationTask;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,2);
System_Runtime_CompilerServices_AsyncMethodBuilderCore__TryGetContinuationTask:
        puVar2 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_AddProcessors__;
        uVar7 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        Unity_Collections_HeapString__TryResize(lVar8,uVar7,0);
        FUN_03a097a4(lVar8,param_2,0);
        lVar14 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
              goto LAB_033a92f4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,3);
LAB_033a92f4:
        uVar11 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        uVar11 = FUN_03405678(*(undefined8 *)puVar2,uVar11,0);
        FUN_03a098d8(lVar8,uVar11,0);
        if (param_3 != 0) {
          lVar14 = FUN_02b6b114(param_3,*(undefined8 *)Method_System_Collections_Hashtable_CopyTo__)
          ;
          puVar6 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__;
          puVar5 = Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ApplyUseStateFrom__;
          puVar4 = Method_System_Collections_Hashtable_Insert__;
          puVar3 = Method_System_Collections_Hashtable_GetObjectData__;
          puVar2 = 
          Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<ValueConnection_DebugData>__
          ;
          puVar1 = 
          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
          if (lVar14 == 0) goto LAB_033a9580;
          FUN_0300123c(&local_98,lVar14,*(undefined8 *)Method_System_Collections_Hashtable_Remove__)
          ;
          uStack_78 = uStack_90;
          local_80 = local_98;
          local_70 = local_88;
          while (uVar15 = FUN_02ce9cdc(&local_80,*(undefined8 *)puVar4), uVar11 = local_70,
                (uVar15 & 1) != 0) {
            lVar14 = FUN_01f08890(*(undefined8 *)puVar1,5);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar8 + 0x40);
            thunk_FUN_01f51358();
            if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)puVar6;
            thunk_FUN_01f51358();
            if (*(uint *)(lVar14 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar14 + 0x30) = uVar11;
            thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x30),uVar11);
            if (*(uint *)(lVar14 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar14 + 0x38) = *(undefined8 *)puVar5;
            thunk_FUN_01f51358();
            uVar11 = FUN_02b6b264(param_3,uVar11,*(undefined8 *)puVar2);
            if (*(uint *)(lVar14 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar14 + 0x40) = uVar11;
            thunk_FUN_01f51358();
            uVar11 = FUN_0340efe8(lVar14,0);
            FUN_03a098d8(lVar8,uVar11,0);
          }
          FUN_02ce9cd8(&local_80,*(undefined8 *)puVar3);
        }
        plVar10 = (long *)**(long **)(*(long *)
                                       Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<bool>__
                                     + 0xb8);
        if (plVar10 != (long *)0x0) {
          lVar14 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
          puVar1 = Method_UnityEngine_XR_InputDevice_CheckValidAndSetDefault<Quaternion>__;
          if (lVar14 == 0) goto LAB_033a9580;
          uVar13 = *(uint *)(lVar14 + 0x18);
          if (0 < (int)uVar13) {
            uVar18 = 0;
            do {
              if (uVar13 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar17 = *(long *)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
              if (lVar17 == 0) goto LAB_033a9580;
              uVar11 = *(undefined8 *)puVar1;
              lVar12 = thunk_FUN_01f116d0(lVar17,uVar11);
              if (lVar12 == 0) {
LAB_033a955c:
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(lVar17,uVar11);
              }
              uVar11 = *(undefined8 *)puVar1;
              lVar12 = thunk_FUN_01f116d0(lVar17,uVar11);
              if (lVar12 == 0) goto LAB_033a955c;
              lVar8 = (**(code **)(lVar12 + 0x18))
                                (*(undefined8 *)(lVar12 + 0x40),lVar8,*(undefined8 *)(lVar12 + 0x28)
                                );
              uVar13 = *(uint *)(lVar14 + 0x18);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)uVar13);
          }
        }
        if (lVar8 != 0) {
          FUN_03a09aec(lVar8,0);
          return;
        }
      }
    }
  }
LAB_033a9580:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


