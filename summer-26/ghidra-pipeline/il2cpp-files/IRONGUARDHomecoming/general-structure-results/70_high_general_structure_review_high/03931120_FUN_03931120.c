/*
FUNCTION_NAME: FUN_03931120
ENTRY_POINT: 03931120
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03931120(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined1 uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_38;
  
  puVar11 = &local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_048382cd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Numerics_BigNumber_FormatBigInteger__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3716);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IUnitDebugData>__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3652);
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_VerifyWritable__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Security_Cryptography_DSA_FromXmlString__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
                      );
    thunk_FUN_01efb3a4(StringLiteral_3689);
    thunk_FUN_01efb3a4(StringLiteral_3692);
    thunk_FUN_01efb3a4(StringLiteral_3694);
    thunk_FUN_01efb3a4(StringLiteral_3697);
    thunk_FUN_01efb3a4(StringLiteral_3698);
    thunk_FUN_01efb3a4(StringLiteral_3699);
    thunk_FUN_01efb3a4(StringLiteral_3700);
    thunk_FUN_01efb3a4(StringLiteral_3701);
    thunk_FUN_01efb3a4(StringLiteral_3702);
    thunk_FUN_01efb3a4(StringLiteral_3703);
    thunk_FUN_01efb3a4(StringLiteral_3705);
    thunk_FUN_01efb3a4(StringLiteral_3706);
    thunk_FUN_01efb3a4(StringLiteral_3708);
    thunk_FUN_01efb3a4(StringLiteral_3709);
    thunk_FUN_01efb3a4(StringLiteral_3710);
    thunk_FUN_01efb3a4(StringLiteral_3711);
    DAT_048382cd = 1;
  }
  local_58 = (long *)0x0;
  local_50 = 0;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_3719);
    FUN_034efd20(uVar8,uVar12,0);
    uVar12 = thunk_FUN_01efb3a4(StringLiteral_3718);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,uVar12);
  }
  if (((3 < *(int *)(param_1 + 0x10)) && (sVar5 = FUN_03409f80(param_1,0,0), sVar5 == 0x7b)) &&
     (sVar5 = FUN_03409f80(param_1,*(int *)(param_1 + 0x10) + -1,0), sVar5 == 0x7d)) {
    sVar5 = FUN_03409f80(param_1,1,0);
    if (sVar5 == 0x22) {
      sVar5 = FUN_03409f80(param_1,*(int *)(param_1 + 0x10) + -2,0);
      if (sVar5 == 0x22) {
        uVar8 = FUN_03410500(param_1,2,*(int *)(param_1 + 0x10) + -4,0);
        goto LAB_03931650;
      }
    }
    else {
      sVar5 = FUN_03409f80(param_1,1,0);
      if (sVar5 != 0x27) {
        uVar9 = FUN_0340e66c(param_1,*(undefined8 *)StringLiteral_3706,0);
        puVar2 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
        if ((uVar9 & 1) != 0) {
          lVar10 = *(long *)
                    Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar10 = *(long *)puVar2;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x38);
          if (lVar10 == 0) {
LAB_03931b4c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                            (lVar10,param_1,&local_50,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_GraphPointer_GetElementDebugData<IUnitDebugData>__
                            );
          uVar8 = local_50;
          if ((uVar9 & 1) != 0) goto LAB_03931650;
          uVar8 = thunk_FUN_01efb3a4(StringLiteral_3720);
          uVar12 = thunk_FUN_01efb3a4(StringLiteral_3721);
          uVar8 = FUN_0340ebc0(uVar8,param_1,uVar12,0);
          goto LAB_03931ac8;
        }
        uVar9 = FUN_0340e66c(param_1,*(undefined8 *)StringLiteral_3705,0);
        if ((uVar9 & 1) != 0) {
          iVar7 = FUN_03412f80(param_1,0x3a,4,0);
          puVar2 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
          if ((iVar7 != -1) && (iVar7 <= *(int *)(param_1 + 0x10) + -3)) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar8 = FUN_03410500(param_1,4,iVar7 + -4,0);
            uVar12 = FUN_03410500(param_1,iVar7 + 1,(*(int *)(param_1 + 0x10) - iVar7) + -2,0);
            lVar10 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
            if (lVar10 != 0) {
              uVar9 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                                (lVar10,uVar8,&local_58,*(undefined8 *)StringLiteral_3716);
              plVar3 = local_58;
              if ((uVar9 & 1) == 0) {
                uVar12 = thunk_FUN_01efb3a4(
                                           Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                           );
                uVar12 = FUN_01f08890(uVar12,5);
                FUN_01bc50c0();
                uVar13 = thunk_FUN_01efb3a4(StringLiteral_3722);
                FUN_01bc5408(uVar12,0,uVar13);
                FUN_01bc50c0(uVar12);
                FUN_01bc5408(uVar12,1,uVar8);
                FUN_01bc50c0(uVar12);
                uVar8 = thunk_FUN_01efb3a4(StringLiteral_3723);
                FUN_01bc5408(uVar12,2,uVar8);
                FUN_01bc50c0(uVar12);
                FUN_01bc5408(uVar12,3,param_1);
                FUN_01bc50c0(uVar12);
                uVar8 = thunk_FUN_01efb3a4(
                                          Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__
                                          );
                FUN_01bc5408(uVar12,4,uVar8);
                uVar8 = FUN_0340efe8(uVar12,0);
                goto LAB_03931ac8;
              }
              if (local_58 != (long *)0x0) {
                lVar10 = *local_58;
                uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar9 != 0) {
                  piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_3652) {
                      puVar11 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                      goto LAB_03931640;
                    }
                    uVar9 = uVar9 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar9 != 0);
                }
                puVar11 = (undefined8 *)FUN_01ecb238(local_58,*(long *)StringLiteral_3652,2);
LAB_03931640:
                uVar8 = (*(code *)*puVar11)(plVar3,uVar12,puVar11[1]);
                goto LAB_03931650;
              }
            }
            goto LAB_03931b4c;
          }
          goto LAB_03931ab0;
        }
        uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3698,0);
        if ((uVar9 & 1) == 0) {
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3711,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            uVar4 = FUN_0357c530(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)
                      Method_Oculus_Platform_Callback_SetNotificationCallback<GroupPresenceJoinIntent>__
            ;
            goto LAB_03931624;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3702,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            uVar6 = FUN_035866c4(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)Method_System_Security_Cryptography_DSA_FromXmlString__;
LAB_039313f4:
            uVar8 = *puVar11;
            local_48._0_2_ = uVar6;
            goto LAB_039313fc;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3710,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            uVar6 = FUN_03567784(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__;
            goto LAB_039313f4;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3689,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            local_48._0_4_ = FUN_035874d8(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__;
LAB_039317a0:
            uVar8 = *puVar11;
            goto LAB_039313fc;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3709,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            local_48._0_4_ = FUN_035687c0(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)
                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
            goto LAB_039317a0;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3694,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            uVar8 = FUN_03588314(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputControl>_GetEnumerator__
            ;
LAB_03931840:
            local_48._0_8_ = uVar8;
            uVar8 = *puVar11;
            goto LAB_039313fc;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3701,0);
          if ((uVar9 & 1) != 0) {
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            uVar8 = FUN_0356a188(uVar8,0x1ff,0);
            puVar11 = (undefined8 *)Method_System_Runtime_Remoting_Messaging_CADMethodRef_GetTypes__
            ;
            goto LAB_03931840;
          }
          uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3692,0);
          if ((uVar9 & 1) == 0) {
            uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3703,0);
            if ((uVar9 & 1) != 0) {
              uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
              local_48._0_8_ = FUN_03552fc0(uVar8,0x1ff,0);
              puVar11 = (undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__;
              goto System_Security_Cryptography_DerSequenceReader__CheckTag;
            }
            uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3699,0);
            if ((uVar9 & 1) == 0) {
              uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3700,0);
              if ((uVar9 & 1) == 0) {
                uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3697,0);
                if ((uVar9 & 1) != 0) {
                  uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
                  uVar8 = FUN_0356a188(uVar8,0x1ff,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                      );
                  }
                  uVar8 = FUN_0359ee10(param_2,uVar8,0);
                  goto LAB_03931650;
                }
                uVar9 = FUN_0340dc8c(param_1,*(undefined8 *)StringLiteral_3708,0);
                if ((uVar9 & 1) != 0) {
                  uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
                  uVar8 = FUN_03588314(uVar8,0x1ff,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                                      );
                  }
                  uVar8 = FUN_0359e488(param_2,uVar8,0);
                  goto LAB_03931650;
                }
                goto LAB_03931ab0;
              }
              uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
              local_48._0_8_ = 0;
              local_48._8_8_ = 0;
              FUN_03563658(local_48,uVar8,0);
              uStack_68 = local_48._8_8_;
              local_70 = local_48._0_8_;
              uVar8 = *(undefined8 *)
                       Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_UnregisterFrameAllocation__
              ;
              goto LAB_03931404;
            }
            uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
            puVar2 = Method_System_Numerics_BigNumber_FormatBigInteger__;
            if (*(int *)(*(long *)Method_System_Numerics_BigNumber_FormatBigInteger__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c(*(long *)Method_System_Numerics_BigNumber_FormatBigInteger__);
            }
            local_48 = FUN_035c6d0c(uVar8,0x1ff,0);
            uVar8 = *(undefined8 *)puVar2;
            goto LAB_039313fc;
          }
          uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
          local_48._0_4_ = FUN_0357d400(uVar8,0x1ff,0);
          puVar11 = (undefined8 *)
                    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
          ;
System_Security_Cryptography_DerSequenceReader__CheckTag:
          uVar8 = *puVar11;
          puVar11 = (undefined8 *)local_48;
        }
        else {
          uVar8 = FUN_03410500(param_1,1,*(int *)(param_1 + 0x10) + -4,0);
          uVar4 = FUN_034fb318(uVar8,0x1ff,0);
          puVar11 = (undefined8 *)Method_Utility_MonoBehaviourSingleton<PauseManager>_get_Instance__
          ;
LAB_03931624:
          uVar8 = *puVar11;
          local_48[0] = uVar4;
LAB_039313fc:
          puVar11 = (undefined8 *)local_48;
        }
LAB_03931404:
        uVar8 = thunk_FUN_01f113fc(uVar8,puVar11);
LAB_03931650:
        if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(uVar8);
        }
        return;
      }
      if ((*(int *)(param_1 + 0x10) == 5) && (sVar5 = FUN_03409f80(param_1,3,0), sVar5 == 0x27)) {
        uVar6 = FUN_03409f80(param_1,2,0);
        puVar11 = (undefined8 *)Method_System_IO_CStreamReader_Read__;
        goto LAB_039313f4;
      }
    }
  }
LAB_03931ab0:
  uVar8 = thunk_FUN_01efb3a4(StringLiteral_3717);
  uVar8 = FUN_03405678(uVar8,param_1,0);
LAB_03931ac8:
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar12 = thunk_FUN_01f117cc();
  FUN_034f6754(uVar12,uVar8,0);
  uVar8 = thunk_FUN_01efb3a4(StringLiteral_3718);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar12,uVar8);
}


