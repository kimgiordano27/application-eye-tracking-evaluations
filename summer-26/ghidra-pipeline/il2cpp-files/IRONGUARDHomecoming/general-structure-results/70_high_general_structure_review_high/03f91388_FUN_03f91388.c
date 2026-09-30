/*
FUNCTION_NAME: FUN_03f91388
ENTRY_POINT: 03f91388
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2
*/


undefined1  [16] FUN_03f91388(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  ulong local_68 [2];
  undefined4 local_58;
  undefined8 *puVar9;
  
  puVar2 = Method_System_DBNull_System_IConvertible_ToDecimal__;
  if ((DAT_0483b6e5 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEraNames__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__);
    thunk_FUN_01efb3a4(PTR_DAT_04581d38);
    thunk_FUN_01efb3a4(PTR_DAT_04581b40);
    thunk_FUN_01efb3a4(PTR_DAT_04581d40);
    thunk_FUN_01efb3a4(PTR_DAT_04581b50);
    thunk_FUN_01efb3a4(Method_System_DBNull_System_IConvertible_ToDecimal__);
    DAT_0483b6e5 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
  uVar6 = FUN_03f90d68(param_4);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_03f91100(param_4);
    if (((uVar6 & 1) != 0) || (uVar6 = FUN_03f90e6c(param_4), (uVar6 & 1) != 0)) {
      if (param_2 == (long *)0x0) goto UnityEngine_Rendering_RenderQueueRange__GetHashCode;
      if ((DAT_0483b73b & 1) == 0) {
        thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
        DAT_0483b73b = 1;
      }
      puVar1 = Method_System_Globalization_Calendar_TimeToTicks__;
      plVar10 = (long *)param_2[2];
      if ((plVar10 == (long *)0x0) ||
         (*plVar10 != *(long *)Method_System_Globalization_Calendar_TimeToTicks__)) {
        if ((DAT_0483b73c & 1) == 0) {
          thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
          DAT_0483b73c = 1;
          plVar10 = (long *)param_2[2];
        }
        puVar1 = Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__;
        if ((plVar10 == (long *)0x0) ||
           (*plVar10 != *(long *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__))
        {
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x60), lVar5 == 0))
          goto UnityEngine_Rendering_RenderQueueRange__GetHashCode;
          if (*(char *)(lVar5 + 0x40) != '\0') {
            if ((DAT_0483b73e & 1) == 0) {
              thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)
              ;
              DAT_0483b73e = 1;
              plVar10 = (long *)param_2[2];
            }
            puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
            if ((plVar10 != (long *)0x0) &&
               (*plVar10 ==
                *(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__)) {
              uVar8 = *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__;
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar8 = FUN_03579868(uVar8,0);
              uVar6 = FUN_03582560(param_4,uVar8,0);
              if ((uVar6 & 1) == 0) {
                uVar8 = *(undefined8 *)Method_UnityEngine_Rendering_CommandBuffer_SetRenderTarget__;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar8 = FUN_03579868(uVar8,0);
                uVar6 = FUN_03582560(param_4,uVar8,0);
                if ((uVar6 & 1) == 0) goto LAB_03f91628;
              }
              uVar8 = FUN_03f8b518(param_2);
              goto LAB_03f9189c;
            }
          }
LAB_03f91628:
          lVar5 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          plVar10 = (long *)thunk_FUN_01ecaf38(param_1,0);
          if ((plVar10 == (long *)0x0) ||
             (uVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0)),
             lVar5 == 0)) {
UnityEngine_Rendering_RenderQueueRange__GetHashCode:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar5 + 0x18) != 0) {
            *(undefined8 *)(lVar5 + 0x20) = uVar8;
            thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20),uVar8);
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04581d40;
              thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
              local_58 = FUN_03f8b264(param_2);
              local_68[0] = *(ulong *)PTR_DAT_04581b50;
              local_68[1] = 0xffffffffffffffff;
              uVar8 = FUN_0359ff90(local_68,0);
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x30) = uVar8;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30),uVar8);
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_04581b40;
                  thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38));
                  uVar8 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170))
                  ;
                  if (4 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x40) = uVar8;
                    thunk_FUN_01f51358();
                    uVar8 = FUN_0340efe8(lVar5,0);
LAB_03f919e4:
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)puVar2);
                    }
                    auVar12 = FUN_03f8b40c(uVar8);
                    return auVar12;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        local_68[0] = FUN_03f8e274(param_2);
        uVar8 = *(undefined8 *)puVar1;
      }
      else {
        local_68[0] = FUN_03f91b08(param_2);
        uVar8 = *(undefined8 *)puVar1;
      }
      uVar8 = thunk_FUN_01f113fc(uVar8,local_68);
LAB_03f9189c:
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
      }
      lVar5 = FUN_034fefcc(uVar8,param_4,0);
      *param_3 = lVar5;
      thunk_FUN_01f51358(param_3,lVar5);
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar2;
      }
      return *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 8);
    }
    uVar6 = FUN_03f912a4(param_4);
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)thunk_FUN_01ecaf38(param_1,0);
      if (plVar10 == (long *)0x0) goto UnityEngine_Rendering_RenderQueueRange__GetHashCode;
      uVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
      uVar11 = *(undefined8 *)PTR_DAT_04581d38;
      if (param_2 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      }
      uVar8 = FUN_0340ebc0(uVar8,uVar11,uVar7,0);
      goto LAB_03f919e4;
    }
    auVar12 = FUN_03f8a4a0(param_1,param_2,5);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar12 = FUN_03f8a724(uVar8,uVar11,auVar12._0_8_,auVar12._8_8_);
    if ((auVar12._0_8_ & 0xff) == 0) {
      return auVar12;
    }
    if (param_2 == (long *)0x0) goto UnityEngine_Rendering_RenderQueueRange__GetHashCode;
    lVar5 = FUN_03f8b518(param_2);
    puVar1 = Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
    puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    uVar8 = *(undefined8 *)
             Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    }
    uVar8 = FUN_03579868(uVar8,0);
    uVar6 = FUN_03582560(param_4,uVar8,0);
    if ((uVar6 & 1) == 0) {
      *param_3 = lVar5;
      goto LAB_03f9152c;
    }
    uVar8 = *(undefined8 *)puVar1;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03579868(uVar8,0);
    uVar6 = FUN_03582560(param_4,uVar8,0);
    if ((uVar6 & 1) == 0) {
      return auVar12;
    }
    if (lVar5 == 0) goto UnityEngine_Rendering_RenderQueueRange__GetHashCode;
    if (*(int *)(lVar5 + 0x10) == 1) {
      uVar4 = FUN_03409f80(lVar5,0,0);
      local_68[0] = CONCAT62(local_68[0]._2_6_,uVar4);
      puVar9 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
      goto LAB_03f91510;
    }
    local_68[0] = local_68[0] & 0xffffffffffff0000;
    uVar8 = *(undefined8 *)Method_System_IO_CStreamReader_Read__;
  }
  else {
    auVar12 = FUN_03f8a4a0(param_1,param_2,4);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar12 = FUN_03f8a724(uVar8,uVar11,auVar12._0_8_,auVar12._8_8_);
    if ((auVar12._0_8_ & 0xff) == 0) {
      return auVar12;
    }
    if (param_2 == (long *)0x0) goto UnityEngine_Rendering_RenderQueueRange__GetHashCode;
    uVar3 = FUN_03f91a60(param_2);
    local_68[0] = CONCAT71(local_68[0]._1_7_,uVar3) & 0xffffffffffffff01;
    puVar9 = (undefined8 *)
             Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
LAB_03f91510:
    uVar8 = *puVar9;
  }
  lVar5 = thunk_FUN_01f113fc(uVar8,local_68);
  *param_3 = lVar5;
LAB_03f9152c:
  thunk_FUN_01f51358(param_3,lVar5);
  return auVar12;
}


