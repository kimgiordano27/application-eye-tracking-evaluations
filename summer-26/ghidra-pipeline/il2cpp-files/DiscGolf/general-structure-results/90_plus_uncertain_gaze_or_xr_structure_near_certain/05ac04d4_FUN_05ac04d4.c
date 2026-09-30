/*
FUNCTION_NAME: FUN_05ac04d4
ENTRY_POINT: 05ac04d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 139
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05ac04d4(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  
                    /* catch() { ... } // from try @ 05ac0398 with catch @ 05ac04d4
                       try { // try from 05ac04d4 to 05bc051f has its CatchHandler @ 05ac02a0 */
                    /* catch() { ... } // from try @ 05ac0370 with catch @ 05ac04d8 */
                    /* catch() { ... } // from try @ 05ac04d0 with catch @ 05ac04dc */
                    /* catch() { ... } // from try @ 05ac04cc with catch @ 05ac04e0 */
                    /* catch() { ... } // from try @ 05ac04a4 with catch @ 05ac04e4 */
                    /* catch() { ... } // from try @ 05ac0470 with catch @ 05ac04e8 */
                    /* catch() { ... } // from try @ 05ac0440 with catch @ 05ac04ec */
                    /* catch() { ... } // from try @ 05ac0450 with catch @ 05ac04f0 */
                    /* catch() { ... } // from try @ 05ac04c8 with catch @ 05ac04f4 */
                    /* catch() { ... } // from try @ 05ac04c4 with catch @ 05ac04f8 */
                    /* catch() { ... } // from try @ 05ac04c0 with catch @ 05ac04fc */
                    /* catch() { ... } // from try @ 05ac03e4 with catch @ 05ac0500 */
  if ((DAT_06dc1e05 & 1) == 0) {
                    /* catch() { ... } // from try @ 05ac040c with catch @ 05ac0504 */
    FUN_02d965b8(PTR_DAT_06a17648);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                );
    FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__)
    ;
    FUN_02d965b8(Method_UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>__ctor__);
    FUN_02d965b8(Method_OVRTask_Awaiter<List<bool>>_GetResult__);
    FUN_02d965b8(Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__);
    FUN_02d965b8(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_02d965b8(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    DAT_06dc1e05 = 1;
  }
  if ((param_2 != 0) && (lVar13 = *(long *)(param_2 + 0x10), lVar13 != 0)) {
    lVar14 = *(long *)(lVar13 + 0x48);
    uVar6 = FUN_05ac4a00(lVar13);
    puVar16 = (undefined8 *)(param_1 + 0x60);
    *puVar16 = uVar6;
    LeanTween__value(puVar16,uVar6);
    FUN_05ac1fb0(param_1,*puVar16);
    puVar2 = PTR_DAT_06a17648;
    if (lVar14 != 0) {
      if (*(char *)(lVar14 + 0x7b) != '\0') {
        FUN_05bfe284(param_1,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                     ,lVar13,1,0);
        return;
      }
      lVar15 = *(long *)(param_2 + 0x18);
      *(undefined1 *)(lVar14 + 0x7b) = 1;
      plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar2);
      Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(plVar7,0);
      FUN_05ac4a94(param_1,lVar14,plVar7);
      if (lVar15 != 0) {
        lVar17 = *(long *)(lVar15 + 0x48);
        if (lVar17 == 0) {
          lVar17 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
        }
        plVar18 = *(long **)(lVar13 + 0x68);
        if (plVar18 != (long *)0x0) {
          iVar4 = FUN_05489ff8(plVar18,0);
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
          ;
          puVar2 = OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
          if (0 < iVar4) {
            iVar4 = 0;
            plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
            do {
              lVar8 = (**(code **)(*plVar18 + 0x308))
                                (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
              if (lVar8 == 0) goto LAB_05ac1050;
              *(long *)(lVar8 + 0x28) = lVar13;
              LeanTween__value((long *)(lVar8 + 0x28),lVar13);
              plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                         (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
              if (plVar9 == (long *)0x0) {
LAB_05ac076c:
                plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                           (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
                if (plVar9 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                  if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2
                     )) {
                    plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                               (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
                    if (plVar9 == (long *)0x0) {
                      FUN_05ac3368(param_1,0);
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)puVar2)) goto LAB_05ac1054;
                    FUN_05ac3368(param_1,plVar9);
                    if (plVar9[0xd] == 0) goto LAB_05ac1050;
                    plVar12 = (long *)(plVar9[0xd] + 0x18);
                    *plVar12 = lVar17;
                    LeanTween__value(plVar12,lVar17);
                    if (*(long *)(lVar13 + 0x70) == 0) goto LAB_05ac1050;
                    lVar8 = FUN_05b110a0(*(long *)(lVar13 + 0x70),plVar9[0xd],0);
                    puVar16 = (undefined8 *)
                              Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
                    if (lVar8 != 0) goto LAB_05ac09d0;
                    FUN_05bfd630(param_1,*(undefined8 *)(lVar13 + 0x70),plVar9[0xd],plVar9,0);
                    lVar8 = FUN_05b0870c(lVar15,0);
                    if (lVar8 != 0) {
                      plVar10 = (long *)FUN_05b110a0(lVar8,plVar9[0xd],0);
                      if (plVar10 == (long *)0x0) {
                        FUN_05ac4a00();
LAB_05ac0e94:
                        plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        plVar12 = (long *)plVar9[0xd];
                        if (plVar12 != (long *)0x0) {
                          uVar6 = (**(code **)(*plVar12 + 0x168))
                                            (plVar12,*(undefined8 *)(*plVar12 + 0x170));
                          uVar19 = *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                          ;
                          puVar16 = (undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                          ;
                          goto LAB_05ac0f54;
                        }
                        goto LAB_05ac1050;
                      }
                      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar2)) goto LAB_05ac105c;
                      lVar8 = FUN_05ac4a00(plVar10);
                      if (lVar8 != lVar14) {
                        if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                        uVar11 = (**(code **)(*plVar7 + 0x348))
                                           (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                        if ((uVar11 & 1) == 0) goto LAB_05ac0e94;
                      }
                      plVar9[0xe] = (long)plVar10;
                      LeanTween__value(plVar9 + 0xe,plVar10);
                      lVar8 = FUN_05b0870c(lVar15,0);
                      if (lVar8 != 0) {
                        FUN_05b10bcc(lVar8,plVar9[0xd],plVar9,0);
                        FUN_05ac4c60(param_1,plVar9);
                        plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        goto LAB_05ac0f6c;
                      }
                    }
                    goto LAB_05ac1050;
                  }
                }
                plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                           (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
                if (plVar9 == (long *)0x0) {
LAB_05ac07fc:
                  plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                             (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
                  if (plVar9 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)
                                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                                     + 0x130);
                    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                        *(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                       )) {
                      plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                                 (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
                      if (plVar9 == (long *)0x0) {
                        FUN_05ac3d24(param_1,0,0);
                    /* WARNING: Subroutine does not return */
                        FUN_02d96860();
                      }
                      bVar1 = *(byte *)(*(long *)
                                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                         )) {
LAB_05ac1054:
                    /* WARNING: Subroutine does not return */
                        FUN_02d96be0(plVar9);
                      }
                      FUN_05ac3d24(param_1,plVar9,0);
                      lVar8 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      *(long *)(lVar8 + 0x18) = lVar17;
                      LeanTween__value((long *)(lVar8 + 0x18),lVar17);
                      lVar8 = *(long *)(lVar13 + 0x78);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      lVar8 = FUN_05b110a0(lVar8,uVar6,0);
                      puVar16 = (undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                      ;
                      if (lVar8 != 0) goto LAB_05ac0a90;
                      uVar19 = *(undefined8 *)(lVar13 + 0x78);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      FUN_05bfd630(param_1,uVar19,uVar6,plVar9,0);
                      lVar8 = FUN_05b0877c(lVar15,0);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      plVar10 = (long *)FUN_05b110a0(lVar8,uVar6,0);
                      if (plVar10 == (long *)0x0) {
                        FUN_05ac4a00();
LAB_05ac0f1c:
                        plVar12 = (long *)FUN_05b19e58(plVar9,0);
                        plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        if (plVar12 != (long *)0x0) {
                          uVar6 = (**(code **)(*plVar12 + 0x168))
                                            (plVar12,*(undefined8 *)(*plVar12 + 0x170));
                          uVar19 = *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                          ;
                          puVar16 = (undefined8 *)
                                    Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
                          goto LAB_05ac0f54;
                        }
                        goto LAB_05ac1050;
                      }
                      bVar1 = *(byte *)(*(long *)
                                         OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo)) {
LAB_05ac105c:
                    /* WARNING: Subroutine does not return */
                        FUN_02d96be0(plVar10);
                      }
                      lVar8 = FUN_05ac4a00(plVar10);
                      if (lVar8 != lVar14) {
                        if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                        uVar11 = (**(code **)(*plVar7 + 0x348))
                                           (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                        if ((uVar11 & 1) == 0) goto LAB_05ac0f1c;
                      }
                      bVar1 = *(byte *)(*(long *)
                                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                                       + 0x130);
                      puVar16 = (undefined8 *)
                                Method_UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>__ctor__
                      ;
                      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                         )) goto LAB_05ac0a90;
                      plVar9[0x11] = (long)plVar10;
                      LeanTween__value(plVar9 + 0x11,plVar10);
                      lVar8 = FUN_05b0877c(lVar15,0);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      FUN_05b10bcc(lVar8,uVar6,plVar9,0);
                      FUN_05ac50d8(param_1,plVar9);
                      plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                    }
                  }
                }
                else {
                  bVar1 = *(byte *)(*plVar10 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
                  goto LAB_05ac07fc;
                  plVar9 = (long *)(**(code **)(*plVar18 + 0x308))
                                             (plVar18,iVar4,*(undefined8 *)(*plVar18 + 0x310));
                  if (plVar9 == (long *)0x0) {
                    FUN_05ac346c(param_1,0,0);
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  bVar1 = *(byte *)(*plVar10 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10))
                  goto LAB_05ac1054;
                  FUN_05ac346c(param_1,plVar9,0);
                  lVar8 = FUN_05b19e58(plVar9,0);
                  if (lVar8 == 0) goto LAB_05ac1050;
                  *(long *)(lVar8 + 0x18) = lVar17;
                  LeanTween__value((long *)(lVar8 + 0x18),lVar17);
                  lVar8 = *(long *)(lVar13 + 0x78);
                  uVar6 = FUN_05b19e58(plVar9,0);
                  if (lVar8 == 0) goto LAB_05ac1050;
                  lVar8 = FUN_05b110a0(lVar8,uVar6,0);
                  puVar16 = (undefined8 *)Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                  if (lVar8 == 0) {
                    uVar19 = *(undefined8 *)(lVar13 + 0x78);
                    uVar6 = FUN_05b19e58(plVar9,0);
                    FUN_05bfd630(param_1,uVar19,uVar6,plVar9,0);
                    lVar8 = FUN_05b0877c(lVar15,0);
                    uVar6 = FUN_05b19e58(plVar9,0);
                    if (lVar8 == 0) goto LAB_05ac1050;
                    plVar10 = (long *)FUN_05b110a0(lVar8,uVar6,0);
                    if (plVar10 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)
                                         OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo))
                      goto LAB_05ac105c;
                      lVar8 = FUN_05ac4a00(plVar10);
                      if (lVar8 != lVar14) {
                        if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                        uVar11 = (**(code **)(*plVar7 + 0x348))
                                           (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                        if ((uVar11 & 1) == 0) goto LAB_05ac0ecc;
                      }
                      bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo +
                                       0x130);
                      puVar16 = (undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                      ;
                      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo))
                      goto LAB_05ac0a90;
                      plVar9[0x11] = (long)plVar10;
                      LeanTween__value(plVar9 + 0x11,plVar10);
                      lVar8 = FUN_05b0877c(lVar15,0);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 != 0) {
                        FUN_05b10bcc(lVar8,uVar6,plVar9,0);
                        FUN_05ac4db8(param_1,plVar9);
                        plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        goto LAB_05ac0f6c;
                      }
                      goto LAB_05ac1050;
                    }
                    FUN_05ac4a00();
LAB_05ac0ecc:
                    plVar10 = (long *)FUN_05b19e58(plVar9,0);
                    if (plVar10 == (long *)0x0) goto LAB_05ac1050;
                    uVar6 = (**(code **)(*plVar10 + 0x168))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x170));
                    FUN_05bfdfc8(param_1,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                                 ,*(undefined8 *)
                                   Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__,uVar6,
                                 plVar9,0);
                    plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                  }
                  else {
LAB_05ac0a90:
                    FUN_05bfde88(param_1,*puVar16,plVar9,0);
                    plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                  }
                }
              }
              else {
                lVar8 = *(long *)puVar3;
                bVar1 = *(byte *)(lVar8 + 0x130);
                if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar8))
                goto LAB_05ac076c;
                FUN_05ac4560(param_1,plVar9);
                if (plVar9[0xd] == 0) goto LAB_05ac1050;
                plVar12 = (long *)(plVar9[0xd] + 0x18);
                *plVar12 = lVar17;
                LeanTween__value(plVar12,lVar17);
                if (*(long *)(lVar13 + 0x80) == 0) goto LAB_05ac1050;
                lVar8 = FUN_05b110a0(*(long *)(lVar13 + 0x80),plVar9[0xd],0);
                puVar16 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                ;
                if (lVar8 != 0) {
LAB_05ac09d0:
                  FUN_05bfde88(param_1,*puVar16,plVar9,0);
                  goto LAB_05ac0f6c;
                }
                FUN_05bfd630(param_1,*(undefined8 *)(lVar13 + 0x80),plVar9[0xd],plVar9,0);
                if (*(long *)(lVar15 + 0xa0) == 0) goto LAB_05ac1050;
                plVar10 = (long *)FUN_05b110a0(*(long *)(lVar15 + 0xa0),plVar9[0xd],0);
                if (plVar10 != (long *)0x0) {
                  lVar8 = *(long *)puVar3;
                  bVar1 = *(byte *)(lVar8 + 0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar8))
                  goto LAB_05ac105c;
                  lVar8 = FUN_05ac4a00(plVar10);
                  if (lVar8 != lVar14) {
                    if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                    uVar11 = (**(code **)(*plVar7 + 0x348))
                                       (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                    if ((uVar11 & 1) == 0) goto LAB_05ac0e5c;
                  }
                  plVar9[0xe] = (long)plVar10;
                  LeanTween__value(plVar9 + 0xe,plVar10);
                  if (*(long *)(lVar15 + 0xa0) != 0) {
                    FUN_05b10bcc(*(long *)(lVar15 + 0xa0),plVar9[0xd],plVar9,0);
                    FUN_05ac4bc0(param_1,plVar9);
                    plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                    goto LAB_05ac0f6c;
                  }
                  goto LAB_05ac1050;
                }
                FUN_05ac4a00();
LAB_05ac0e5c:
                plVar10 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                plVar12 = (long *)plVar9[0xd];
                if (plVar12 == (long *)0x0) goto LAB_05ac1050;
                uVar6 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                uVar19 = *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                ;
                puVar16 = (undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                ;
LAB_05ac0f54:
                FUN_05bfdfc8(param_1,uVar19,*puVar16,uVar6,plVar9,0);
              }
LAB_05ac0f6c:
              iVar4 = iVar4 + 1;
              iVar5 = FUN_05489ff8(plVar18,0);
            } while (iVar4 < iVar5);
          }
          return;
        }
      }
    }
  }
LAB_05ac1050:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


