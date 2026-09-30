/*
FUNCTION_NAME: FUN_05adbcf0
ENTRY_POINT: 05adbcf0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 203
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05adc71c) */
/* WARNING: Removing unreachable block (ram,0x05adc948) */
/* WARNING: Removing unreachable block (ram,0x05adcc44) */
/* WARNING: Removing unreachable block (ram,0x05adcc4c) */

void FUN_05adbcf0(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  int iVar19;
  undefined8 uVar20;
  
  if ((DAT_06dc1e60 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc6f8);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TokenResponse>_Start<PayloadProxyClient_<GetPayloadProxyJwtAsync>d__2>__
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_02d965b8(Method_UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>__ctor__);
    FUN_02d965b8(Method_OVRTask_Awaiter<List<bool>>_GetResult__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__);
    FUN_02d965b8(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__);
    DAT_06dc1e60 = 1;
  }
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
  ;
  puVar7 = OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
  puVar6 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo;
  puVar3 = System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
  puVar5 = PTR_DAT_069fc6f8;
  puVar4 = PTR_DAT_069fbff8;
  if ((param_2 == 0) || (lVar10 = *(long *)(param_2 + 0x68), lVar10 == 0)) goto LAB_05adcb88;
  iVar19 = 0;
LAB_05adbe5c:
  iVar9 = FUN_05489ff8(lVar10,0);
  if (iVar9 <= iVar19) {
    if (*(long *)(param_2 + 0x80) != 0) {
      plVar11 = (long *)FUN_05b111f4(*(long *)(param_2 + 0x80),0);
      puVar7 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<TokenResponse>_Start<PayloadProxyClient_<GetPayloadProxyJwtAsync>d__2>__
      ;
      puVar6 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
      puVar3 = PTR_DAT_069fbff0;
      goto LAB_05adc524;
    }
    goto LAB_05adcb88;
  }
  plVar11 = *(long **)(param_2 + 0x68);
  if ((plVar11 == (long *)0x0) ||
     (lVar10 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310)),
     lVar10 == 0)) goto LAB_05adcb88;
  *(long *)(lVar10 + 0x28) = param_2;
  LeanTween__value((long *)(lVar10 + 0x28),param_2);
  plVar11 = *(long **)(param_2 + 0x68);
  if (plVar11 == (long *)0x0) goto LAB_05adcb88;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                              (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
  if (plVar11 != (long *)0x0) {
    lVar10 = *(long *)puVar8;
    bVar1 = *(byte *)(lVar10 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) goto LAB_05adbee8;
    FUN_05ade10c(param_1,plVar11);
    if (*(long *)(param_2 + 0x80) == 0) goto LAB_05adcb88;
    lVar10 = FUN_05b110a0(*(long *)(param_2 + 0x80),plVar11[0xd],0);
    puVar14 = (undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
    ;
    if (lVar10 != 0) goto LAB_05adc484;
    FUN_05bfd630(param_1,*(undefined8 *)(param_2 + 0x80),plVar11[0xd],plVar11,0);
    if ((*(long *)(param_2 + 0x48) == 0) ||
       (lVar10 = *(long *)(*(long *)(param_2 + 0x48) + 0xa0), lVar10 == 0)) goto LAB_05adcb88;
    plVar13 = (long *)FUN_05b110a0(lVar10,plVar11[0xd],0);
    if (plVar13 != (long *)0x0) {
      lVar10 = *(long *)puVar8;
      bVar1 = *(byte *)(lVar10 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar10))
      goto LAB_05adcc04;
    }
    plVar15 = plVar11 + 0xe;
    *plVar15 = (long)plVar13;
    LeanTween__value(plVar15,plVar13);
    puVar14 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__;
    if (*plVar15 == 0) goto LAB_05adc484;
    FUN_05ade584(param_1,plVar11);
    goto LAB_05adc498;
  }
LAB_05adbee8:
  plVar11 = *(long **)(param_2 + 0x68);
  if (plVar11 == (long *)0x0) goto LAB_05adcb88;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                              (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
  if (plVar11 == (long *)0x0) {
LAB_05adbf34:
    plVar11 = *(long **)(param_2 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_05adcb88;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
        plVar11 = *(long **)(param_2 + 0x68);
        if (plVar11 == (long *)0x0) goto LAB_05adcb88;
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 == (long *)0x0) {
          FUN_05add014(param_1,0,0);
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
        goto LAB_05adcbe4;
        FUN_05add014(param_1,plVar11,0);
        lVar10 = *(long *)(param_2 + 0x78);
        uVar12 = FUN_05b19e58(plVar11,0);
        if (lVar10 == 0) goto LAB_05adcb88;
        lVar10 = FUN_05b110a0(lVar10,uVar12,0);
        puVar14 = (undefined8 *)Method_OVRTask_Awaiter<List<bool>>_GetResult__;
        if (lVar10 == 0) {
          uVar20 = *(undefined8 *)(param_2 + 0x78);
          uVar12 = FUN_05b19e58(plVar11,0);
          FUN_05bfd630(param_1,uVar20,uVar12,plVar11,0);
          if (*(long *)(param_2 + 0x48) != 0) {
            lVar10 = FUN_05b0877c(*(long *)(param_2 + 0x48),0);
            uVar12 = FUN_05b19e58(plVar11,0);
            if (lVar10 != 0) {
              plVar13 = (long *)FUN_05b110a0(lVar10,uVar12,0);
              puVar14 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__;
              if (plVar13 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar13 + 0x130);
                bVar2 = *(byte *)(*(long *)
                                   OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo
                                 + 0x130);
                if ((bVar1 < bVar2) ||
                   (lVar10 = *(long *)(*plVar13 + 200),
                   *(long *)(lVar10 + (ulong)bVar2 * 8 + -8) !=
                   *(long *)OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo))
                goto LAB_05adcc04;
                bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                puVar14 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                ;
                if ((bVar2 <= bVar1) &&
                   (*(long *)(lVar10 + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
                  plVar11[0x11] = (long)plVar13;
                  LeanTween__value(plVar11 + 0x11,plVar13);
                  FUN_05ade784(param_1,plVar11);
                  goto LAB_05adc498;
                }
              }
              goto LAB_05adc484;
            }
          }
          goto LAB_05adcb88;
        }
        goto LAB_05adc484;
      }
    }
    plVar11 = *(long **)(param_2 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_05adcb88;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) goto LAB_05adc498;
    bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
    goto LAB_05adc498;
    plVar11 = *(long **)(param_2 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_05adcb88;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) {
      FUN_05add8c0(param_1,0,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
LAB_05adcbe4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar11);
    }
    FUN_05add8c0(param_1,plVar11,0);
    lVar10 = *(long *)(param_2 + 0x78);
    uVar12 = FUN_05b19e58(plVar11,0);
    if (lVar10 == 0) goto LAB_05adcb88;
    lVar10 = FUN_05b110a0(lVar10,uVar12,0);
    puVar14 = (undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__;
    if (lVar10 == 0) {
      uVar20 = *(undefined8 *)(param_2 + 0x78);
      uVar12 = FUN_05b19e58(plVar11,0);
      FUN_05bfd630(param_1,uVar20,uVar12,plVar11,0);
      if (*(long *)(param_2 + 0x48) != 0) {
        lVar10 = FUN_05b0877c(*(long *)(param_2 + 0x48),0);
        uVar12 = FUN_05b19e58(plVar11,0);
        if (lVar10 != 0) {
          plVar13 = (long *)FUN_05b110a0(lVar10,uVar12,0);
          puVar14 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<ulong>_get_visualInput__;
          if (plVar13 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar13 + 0x130);
            bVar2 = *(byte *)(*(long *)
                               OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo +
                             0x130);
            if ((bVar1 < bVar2) ||
               (lVar10 = *(long *)(*plVar13 + 200),
               *(long *)(lVar10 + (ulong)bVar2 * 8 + -8) !=
               *(long *)OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo)) {
LAB_05adcc04:
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar13);
            }
            bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
            puVar14 = (undefined8 *)
                      Method_UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>__ctor__;
            if ((bVar2 <= bVar1) && (*(long *)(lVar10 + (ulong)bVar2 * 8 + -8) == *(long *)puVar6))
            {
              plVar11[0x11] = (long)plVar13;
              LeanTween__value(plVar11 + 0x11,plVar13);
              FUN_05adeaa4(param_1,plVar11);
              goto LAB_05adc498;
            }
          }
          goto LAB_05adc484;
        }
      }
      goto LAB_05adcb88;
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7))
    goto LAB_05adbf34;
    plVar11 = *(long **)(param_2 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_05adcb88;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar19,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) {
      FUN_05adcf14(param_1,0);
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7))
    goto LAB_05adcbe4;
    FUN_05adcf14(param_1,plVar11);
    if (*(long *)(param_2 + 0x70) == 0) goto LAB_05adcb88;
    lVar10 = FUN_05b110a0(*(long *)(param_2 + 0x70),plVar11[0xd],0);
    puVar14 = (undefined8 *)Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
    if (lVar10 == 0) {
      FUN_05bfd630(param_1,*(undefined8 *)(param_2 + 0x70),plVar11[0xd],plVar11,0);
      if ((*(long *)(param_2 + 0x48) == 0) ||
         (lVar10 = FUN_05b0870c(*(long *)(param_2 + 0x48),0), lVar10 == 0)) goto LAB_05adcb88;
      plVar13 = (long *)FUN_05b110a0(lVar10,plVar11[0xd],0);
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7))
        goto LAB_05adcc04;
      }
      plVar15 = plVar11 + 0xe;
      *plVar15 = (long)plVar13;
      LeanTween__value(plVar15,plVar13);
      puVar14 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__;
      if (*plVar15 != 0) {
        FUN_05ade61c(param_1,plVar11);
        goto LAB_05adc498;
      }
    }
  }
LAB_05adc484:
  FUN_05bfde88(param_1,*puVar14,plVar11,0);
LAB_05adc498:
  lVar10 = *(long *)(param_2 + 0x68);
  iVar19 = iVar19 + 1;
  if (lVar10 == 0) goto LAB_05adcb88;
  goto LAB_05adbe5c;
LAB_05adc524:
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
        puVar14 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_05adc578;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar4,0);
LAB_05adc578:
  uVar16 = (*(code *)*puVar14)(plVar11,puVar14[1]);
  if ((uVar16 & 1) == 0) {
    plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) goto LAB_05adc710;
    lVar10 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 == 0) goto LAB_05adc6e8;
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    goto LAB_05adc6d0;
  }
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
        puVar14 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
        goto LAB_05adc5e0;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar4,1);
LAB_05adc5e0:
  plVar13 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
  plVar13 = (long *)thunk_FUN_02dd328c();
  if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(*(long *)(param_2 + 0x48) + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar15 = (long *)*plVar13;
  plVar13 = (long *)plVar13[1];
  if (plVar15 != (long *)0x0) {
    lVar10 = *(long *)puVar6;
    if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10))
    goto LAB_05adcb90;
  }
  if (plVar13 != (long *)0x0) {
    lVar10 = *(long *)puVar7;
    plVar15 = plVar13;
    if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) != lVar10))
    {
LAB_05adcb90:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar15,lVar10);
    }
  }
  FUN_05b10bcc();
  goto LAB_05adc524;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_05adc6d0:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05adc704;
    }
  }
LAB_05adc6e8:
  puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_05adc704:
  (*(code *)*puVar14)(plVar11,puVar14[1]);
LAB_05adc710:
  if (*(long *)(param_2 + 0x70) != 0) {
    plVar11 = (long *)FUN_05b111f4(*(long *)(param_2 + 0x70),0);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_05adc798;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar4,0);
LAB_05adc798:
      uVar16 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar16 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) goto LAB_05adc93c;
        lVar10 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 == 0) goto LAB_05adc914;
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_05adc8fc;
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_05adc800;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar4,1);
LAB_05adc800:
      plVar13 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0();
      }
      plVar13 = (long *)thunk_FUN_02dd328c();
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar15 = (long *)*plVar13;
      plVar13 = (long *)plVar13[1];
      lVar10 = FUN_05b0870c(*(long *)(param_2 + 0x48),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        plVar18 = plVar15;
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
        goto LAB_05adcbb8;
      }
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        plVar18 = plVar13;
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
LAB_05adcbb8:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar18);
        }
      }
      FUN_05b10bcc(lVar10,plVar15,plVar13,0);
    } while( true );
  }
  goto LAB_05adcb88;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_05adcb24:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05adcb58;
    }
  }
LAB_05adcb3c:
  puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_05adcb58:
  (*(code *)*puVar14)(plVar11,puVar14[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_05adc8fc:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05adc930;
    }
  }
LAB_05adc914:
  puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_05adc930:
  (*(code *)*puVar14)(plVar11,puVar14[1]);
LAB_05adc93c:
  if (*(long *)(param_2 + 0x78) != 0) {
    plVar11 = (long *)FUN_05b111f4(*(long *)(param_2 + 0x78),0);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_05adc9c4;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar4,0);
LAB_05adc9c4:
      uVar16 = (*(code *)*puVar14)(plVar11,puVar14[1]);
      if ((uVar16 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)puVar3);
        if (plVar11 == (long *)0x0) {
          return;
        }
        lVar10 = *plVar11;
        uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar16 == 0) goto LAB_05adcb3c;
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_05adcb24;
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *plVar11;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
            puVar14 = (undefined8 *)(lVar10 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_05adca2c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar14 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar4,1);
LAB_05adca2c:
      plVar13 = (long *)(*(code *)*puVar14)(plVar11,puVar14[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0();
      }
      plVar13 = (long *)thunk_FUN_02dd328c();
      if (*(long *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar15 = (long *)*plVar13;
      plVar13 = (long *)plVar13[1];
      lVar10 = FUN_05b0877c(*(long *)(param_2 + 0x48),0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        plVar18 = plVar15;
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
        goto LAB_05adcbdc;
      }
      if (plVar13 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        plVar18 = plVar13;
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
LAB_05adcbdc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar18);
        }
      }
      FUN_05b10bcc(lVar10,plVar15,plVar13,0);
    } while( true );
  }
LAB_05adcb88:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


