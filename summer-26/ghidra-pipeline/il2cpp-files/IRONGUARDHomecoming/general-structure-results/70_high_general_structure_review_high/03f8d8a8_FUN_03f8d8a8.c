/*
FUNCTION_NAME: FUN_03f8d8a8
ENTRY_POINT: 03f8d8a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_9;frame_or_lifecycle_behavior
*/


undefined8 FUN_03f8d8a8(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong local_70;
  long *local_68;
  
  if ((DAT_0483b6c9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(PTR_DAT_04581c50);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04581c58);
    thunk_FUN_01efb3a4(PTR_DAT_04581c60);
    thunk_FUN_01efb3a4(PTR_DAT_04581c68);
    thunk_FUN_01efb3a4(PTR_DAT_04581c70);
    thunk_FUN_01efb3a4(PTR_DAT_04581c78);
    thunk_FUN_01efb3a4(PTR_DAT_04581c80);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04581c88);
    thunk_FUN_01efb3a4(PTR_DAT_04581c90);
    thunk_FUN_01efb3a4(PTR_DAT_04581c98);
    thunk_FUN_01efb3a4(PTR_DAT_04581ca0);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04581ca8);
    thunk_FUN_01efb3a4(PTR_DAT_04581cb0);
    thunk_FUN_01efb3a4(PTR_DAT_04581cb8);
    thunk_FUN_01efb3a4(PTR_DAT_04581b50);
    thunk_FUN_01efb3a4(PTR_DAT_04581cc0);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6c9 = 1;
  }
  local_68 = (long *)0x0;
  if (param_2 != 0) {
    if ((DAT_0483b73e & 1) == 0) {
      thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
      DAT_0483b73e = 1;
    }
    puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
    plVar12 = *(long **)(param_2 + 0x10);
    if ((plVar12 == (long *)0x0) ||
       (*plVar12 != *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
      if ((DAT_0483b73c & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
        DAT_0483b73c = 1;
        plVar12 = *(long **)(param_2 + 0x10);
      }
      puVar2 = PTR_DAT_04581cb8;
      puVar4 = PTR_DAT_04581b50;
      if ((plVar12 == (long *)0x0) ||
         (*plVar12 != *(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__)) {
        uVar5 = FUN_03f8b264(param_2);
        local_70 = CONCAT44(local_70._4_4_,uVar5);
        uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,&local_70);
        uVar6 = FUN_0340f2f0(*(undefined8 *)puVar2,param_4,uVar6,0);
        lVar13 = *(long *)puVar1;
LAB_03f8daf4:
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar13);
        }
        uVar6 = FUN_03f8b40c(uVar6);
        return uVar6;
      }
      uVar5 = FUN_03f8e274(param_2);
      local_70 = CONCAT44(local_70._4_4_,uVar5);
      uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_70);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                          );
      }
      uVar6 = FUN_0359df7c(param_4,uVar6,0);
      *param_3 = uVar6;
      thunk_FUN_01f51358(param_3,uVar6);
      lVar13 = *(long *)puVar1;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar13 = *(long *)puVar1;
      }
LAB_03f8e1b8:
      return *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8);
    }
    lVar13 = FUN_03f8b518(param_2);
    lVar7 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_Rendering_VolumeParameter<TonemappingMode>__ctor__,1);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_03f8e208:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined2 *)(lVar7 + 0x20) = 0x2c;
      if ((lVar13 != 0) &&
         (lVar13 = FUN_034111c4(lVar13,lVar7,1,0), puVar1 = PTR_DAT_04581ca0, lVar13 != 0)) {
        if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
          lVar22 = 0;
          uVar23 = 0;
          uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
          lVar7 = lVar13 + 0x20;
          puVar16 = (undefined8 *)PTR_DAT_04581cc0;
          plVar12 = (long *)
                    Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
          ;
          do {
            if (uVar14 <= uVar23) goto LAB_03f8e208;
            uVar6 = *(undefined8 *)(lVar7 + uVar23 * 8);
            if (*(int *)(*plVar12 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_0359e780(param_4,0);
            uVar14 = FUN_02464078(uVar8,uVar6,*puVar16);
            if ((uVar14 & 1) == 0) {
              if (*(int *)(*plVar12 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar8 = FUN_0359e654(param_4,0);
              uVar8 = FUN_022e50c4(uVar8,*(undefined8 *)PTR_DAT_04581c58);
              lVar15 = *(long *)puVar1;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar15);
                lVar15 = *(long *)puVar1;
              }
              lVar18 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
              if (lVar18 == 0) {
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar15);
                  lVar15 = *(long *)puVar1;
                }
                uVar19 = **(undefined8 **)(lVar15 + 0xb8);
                lVar18 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581c80);
                FUN_02e6c748(lVar18,uVar19,*(undefined8 *)PTR_DAT_04581c88,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                *plVar9 = lVar18;
                thunk_FUN_01f51358(plVar9,lVar18);
              }
              uVar8 = FUN_02303a64(uVar8,lVar18,*(undefined8 *)PTR_DAT_04581c60);
              lVar15 = *(long *)puVar1;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar15);
                lVar15 = *(long *)puVar1;
              }
              lVar18 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x10);
              if (lVar18 == 0) {
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar15);
                  lVar15 = *(long *)puVar1;
                }
                uVar19 = **(undefined8 **)(lVar15 + 0xb8);
                lVar18 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581c70);
                System_Array_InternalEnumerator<KeyValuePair<object,_DrawingData_Range>>__get_Current
                          (lVar18,uVar19,*(undefined8 *)PTR_DAT_04581c90,0);
                plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                *plVar9 = lVar18;
                thunk_FUN_01f51358(plVar9,lVar18);
                lVar15 = *(long *)puVar1;
              }
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c(lVar15);
                lVar15 = *(long *)puVar1;
              }
              lVar20 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x18);
              if (lVar20 == 0) {
                if (*(int *)(lVar15 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c(lVar15);
                  lVar15 = *(long *)puVar1;
                }
                uVar19 = **(undefined8 **)(lVar15 + 0xb8);
                lVar20 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581c78);
                System_Array_InternalEnumerator<KeyValuePair<object,_DrawingData_Range>>__get_Current
                          (lVar20,uVar19,*(undefined8 *)PTR_DAT_04581c98,0);
                plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                *plVar12 = lVar20;
                thunk_FUN_01f51358(plVar12,lVar20);
                plVar12 = (long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                ;
              }
              lVar15 = FUN_02308e38(uVar8,lVar18,lVar20,*(undefined8 *)PTR_DAT_04581c68);
              if (lVar15 == 0) goto LAB_03f8e20c;
              uVar14 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                                 (lVar15,uVar6,&local_68,*(undefined8 *)PTR_DAT_04581c50);
              puVar16 = (undefined8 *)PTR_DAT_04581cc0;
              if ((uVar14 & 1) == 0) {
                uVar8 = *(undefined8 *)PTR_DAT_04581cb0;
                uVar19 = *(undefined8 *)PTR_DAT_04581ca8;
                if (param_4 == (long *)0x0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = (**(code **)(*param_4 + 0x168))
                                     (param_4,*(undefined8 *)(*param_4 + 0x170));
                }
                puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
                uVar6 = FUN_0340eee0(uVar19,uVar6,uVar8,uVar11,0);
                lVar13 = *(long *)puVar1;
                goto LAB_03f8daf4;
              }
              if (local_68 == (long *)0x0) goto LAB_03f8e20c;
              uVar6 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
              if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_03f8e208;
              *(undefined8 *)(lVar7 + uVar23 * 8) = uVar6;
              thunk_FUN_01f51358(lVar7 + lVar22,uVar6);
            }
            uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
            uVar23 = uVar23 + 1;
            lVar22 = lVar22 + 8;
          } while ((long)uVar23 < (long)(int)*(uint *)(lVar13 + 0x18));
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_0359deb8(param_4,0);
        puVar4 = Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
        puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        uVar8 = *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar8 = FUN_03579868(uVar8,0);
        uVar23 = FUN_03582560(uVar6,uVar8,0);
        puVar3 = Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
        puVar2 = 
        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__;
        uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        iVar17 = (int)*(ulong *)(lVar13 + 0x18);
        if ((uVar23 & 1) == 0) {
          if (0 < iVar17) {
            uVar6 = FUN_042af9ec();
            return uVar6;
          }
          local_70 = 0;
          puVar16 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
        }
        else if (iVar17 < 1) {
          puVar16 = (undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
          ;
          local_70 = 0;
        }
        else {
          uVar23 = 0;
          uVar21 = 0;
          do {
            if (uVar14 <= uVar23) goto LAB_03f8e208;
            uVar6 = *(undefined8 *)(lVar13 + 0x20 + uVar23 * 8);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar6 = FUN_0359d458(param_4,uVar6,0);
            uVar8 = *(undefined8 *)puVar4;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar1);
            }
            uVar8 = FUN_03579868(uVar8,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar3);
            }
            plVar12 = (long *)FUN_034fefcc(uVar6,uVar8,0);
            if (plVar12 == (long *)0x0) goto LAB_03f8e20c;
            if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            puVar10 = (ulong *)thunk_FUN_01f11920();
            uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
            uVar23 = uVar23 + 1;
            uVar21 = *puVar10 | uVar21;
            puVar16 = (undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
            ;
            local_70 = uVar21;
          } while ((long)uVar23 < (long)(int)*(uint *)(lVar13 + 0x18));
        }
        uVar6 = thunk_FUN_01f113fc(*puVar16,&local_70);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)
                              Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                            );
        }
        uVar6 = FUN_0359df7c(param_4,uVar6,0);
        *param_3 = uVar6;
        thunk_FUN_01f51358();
        puVar1 = Method_System_DBNull_System_IConvertible_ToDecimal__;
        lVar13 = *(long *)Method_System_DBNull_System_IConvertible_ToDecimal__;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar13 = *(long *)puVar1;
        }
        goto LAB_03f8e1b8;
      }
    }
  }
LAB_03f8e20c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


