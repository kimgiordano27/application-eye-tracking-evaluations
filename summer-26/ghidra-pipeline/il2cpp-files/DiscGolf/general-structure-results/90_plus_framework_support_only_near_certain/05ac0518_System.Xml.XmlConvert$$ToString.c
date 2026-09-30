/*
FUNCTION_NAME: System.Xml.XmlConvert$$ToString
ENTRY_POINT: 05ac0518
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Xml_XmlConvert__ToString(void)

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
  long *plVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  long *plVar17;
  
  FUN_02d965b8();
                    /* try { // try from 05ac0520 to 05bc0523 has its CatchHandler @ 05ac0558 */
                    /* try { // try from 05ac0524 to 05bc055b has its CatchHandler @ 05ac02a0 */
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
                    /* catch() { ... } // from try @ 05ac0520 with catch @ 05ac0558 */
                    /* try { // try from 05ac055c to 05bc0563 has its CatchHandler @ 05ac056c */
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
              );
                    /* try { // try from 05ac0564 to 05bc056f has its CatchHandler @ 05ac02a0 */
                    /* catch() { ... } // from try @ 05ac055c with catch @ 05ac056c */
  FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
              );
  FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__);
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
              );
  FUN_02d965b8(Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__);
  FUN_02d965b8(Method_UnityEngine_AwaitableCompletionSource<Result<XRAnchor>>__ctor__);
  FUN_02d965b8(Method_OVRTask_Awaiter<List<bool>>_GetResult__);
  FUN_02d965b8(Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__);
  FUN_02d965b8(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
  FUN_02d965b8(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
  *(undefined1 *)(unaff_x20 + 0xe05) = 1;
  if ((unaff_x22 != 0) && (lVar13 = *(long *)(unaff_x22 + 0x10), lVar13 != 0)) {
    lVar14 = *(long *)(lVar13 + 0x48);
    uVar6 = FUN_05ac4a00(lVar13);
    *(undefined8 *)(unaff_x19 + 0x60) = uVar6;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x60),uVar6);
    FUN_05ac1fb0();
    puVar2 = PTR_DAT_06a17648;
    if (lVar14 != 0) {
      if (*(char *)(lVar14 + 0x7b) != '\0') {
        FUN_05bfe284();
        return;
      }
      lVar15 = *(long *)(unaff_x22 + 0x18);
      *(undefined1 *)(lVar14 + 0x7b) = 1;
      plVar7 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar2);
      Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(plVar7,0);
      FUN_05ac4a94();
      if (lVar15 != 0) {
        lVar16 = *(long *)(lVar15 + 0x48);
        if (lVar16 == 0) {
          lVar16 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
        }
        plVar17 = *(long **)(lVar13 + 0x68);
        if (plVar17 != (long *)0x0) {
          iVar4 = FUN_05489ff8(plVar17,0);
          puVar3 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
          ;
          puVar2 = OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
          if (0 < iVar4) {
            iVar4 = 0;
            plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
            do {
              lVar8 = (**(code **)(*plVar17 + 0x308))
                                (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
              if (lVar8 == 0) goto LAB_05ac1050;
              *(long *)(lVar8 + 0x28) = lVar13;
              LeanTween__value((long *)(lVar8 + 0x28),lVar13);
              plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                         (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
              if (plVar9 == (long *)0x0) {
LAB_05ac076c:
                plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                           (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
                if (plVar9 != (long *)0x0) {
                  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                  if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2
                     )) {
                    plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                               (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
                    if (plVar9 == (long *)0x0) {
                      FUN_05ac3368();
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)puVar2)) goto LAB_05ac1054;
                    FUN_05ac3368();
                    if (plVar9[0xd] == 0) goto LAB_05ac1050;
                    plVar10 = (long *)(plVar9[0xd] + 0x18);
                    *plVar10 = lVar16;
                    LeanTween__value(plVar10,lVar16);
                    if (*(long *)(lVar13 + 0x70) == 0) goto LAB_05ac1050;
                    lVar8 = FUN_05b110a0(*(long *)(lVar13 + 0x70),plVar9[0xd],0);
                    if (lVar8 != 0) goto LAB_05ac09d0;
                    FUN_05bfd630();
                    lVar8 = FUN_05b0870c(lVar15,0);
                    if (lVar8 != 0) {
                      plVar11 = (long *)FUN_05b110a0(lVar8,plVar9[0xd],0);
                      if (plVar11 == (long *)0x0) {
                        FUN_05ac4a00();
LAB_05ac0e94:
                        plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        plVar9 = (long *)plVar9[0xd];
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                          goto LAB_05ac0f54;
                        }
                        goto LAB_05ac1050;
                      }
                      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
                      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar2)) goto LAB_05ac105c;
                      lVar8 = FUN_05ac4a00(plVar11);
                      if (lVar8 != lVar14) {
                        if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                        uVar12 = (**(code **)(*plVar7 + 0x348))
                                           (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                        if ((uVar12 & 1) == 0) goto LAB_05ac0e94;
                      }
                      plVar9[0xe] = (long)plVar11;
                      LeanTween__value(plVar9 + 0xe,plVar11);
                      lVar8 = FUN_05b0870c(lVar15,0);
                      if (lVar8 != 0) {
                        FUN_05b10bcc(lVar8,plVar9[0xd],plVar9,0);
                        FUN_05ac4c60();
                        plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        goto LAB_05ac0f6c;
                      }
                    }
                    goto LAB_05ac1050;
                  }
                }
                plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                           (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
                if (plVar9 == (long *)0x0) {
LAB_05ac07fc:
                  plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                             (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
                  if (plVar9 != (long *)0x0) {
                    bVar1 = *(byte *)(*(long *)
                                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                                     + 0x130);
                    if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                        *(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                       )) {
                      plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                                 (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
                      if (plVar9 == (long *)0x0) {
                        FUN_05ac3d24();
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
                      FUN_05ac3d24();
                      lVar8 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      *(long *)(lVar8 + 0x18) = lVar16;
                      LeanTween__value((long *)(lVar8 + 0x18),lVar16);
                      lVar8 = *(long *)(lVar13 + 0x78);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      lVar8 = FUN_05b110a0(lVar8,uVar6,0);
                      if (lVar8 != 0) goto LAB_05ac0a90;
                      FUN_05b19e58(plVar9,0);
                      FUN_05bfd630();
                      lVar8 = FUN_05b0877c(lVar15,0);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      plVar11 = (long *)FUN_05b110a0(lVar8,uVar6,0);
                      if (plVar11 == (long *)0x0) {
                        FUN_05ac4a00();
LAB_05ac0f1c:
                        plVar9 = (long *)FUN_05b19e58(plVar9,0);
                        plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                          goto LAB_05ac0f54;
                        }
                        goto LAB_05ac1050;
                      }
                      bVar1 = *(byte *)(*(long *)
                                         OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo)) {
LAB_05ac105c:
                    /* WARNING: Subroutine does not return */
                        FUN_02d96be0(plVar11);
                      }
                      lVar8 = FUN_05ac4a00(plVar11);
                      if (lVar8 != lVar14) {
                        if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                        uVar12 = (**(code **)(*plVar7 + 0x348))
                                           (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                        if ((uVar12 & 1) == 0) goto LAB_05ac0f1c;
                      }
                      bVar1 = *(byte *)(*(long *)
                                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                         )) goto LAB_05ac0a90;
                      plVar9[0x11] = (long)plVar11;
                      LeanTween__value(plVar9 + 0x11,plVar11);
                      lVar8 = FUN_05b0877c(lVar15,0);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 == 0) goto LAB_05ac1050;
                      FUN_05b10bcc(lVar8,uVar6,plVar9,0);
                      FUN_05ac50d8();
                      plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                    }
                  }
                }
                else {
                  bVar1 = *(byte *)(*plVar11 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11))
                  goto LAB_05ac07fc;
                  plVar9 = (long *)(**(code **)(*plVar17 + 0x308))
                                             (plVar17,iVar4,*(undefined8 *)(*plVar17 + 0x310));
                  if (plVar9 == (long *)0x0) {
                    FUN_05ac346c();
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  bVar1 = *(byte *)(*plVar11 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11))
                  goto LAB_05ac1054;
                  FUN_05ac346c();
                  lVar8 = FUN_05b19e58(plVar9,0);
                  if (lVar8 == 0) goto LAB_05ac1050;
                  *(long *)(lVar8 + 0x18) = lVar16;
                  LeanTween__value((long *)(lVar8 + 0x18),lVar16);
                  lVar8 = *(long *)(lVar13 + 0x78);
                  uVar6 = FUN_05b19e58(plVar9,0);
                  if (lVar8 == 0) goto LAB_05ac1050;
                  lVar8 = FUN_05b110a0(lVar8,uVar6,0);
                  if (lVar8 == 0) {
                    FUN_05b19e58(plVar9,0);
                    FUN_05bfd630();
                    lVar8 = FUN_05b0877c(lVar15,0);
                    uVar6 = FUN_05b19e58(plVar9,0);
                    if (lVar8 == 0) goto LAB_05ac1050;
                    plVar11 = (long *)FUN_05b110a0(lVar8,uVar6,0);
                    if (plVar11 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)
                                         OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo
                                       + 0x130);
                      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)
                           OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo))
                      goto LAB_05ac105c;
                      lVar8 = FUN_05ac4a00(plVar11);
                      if (lVar8 != lVar14) {
                        if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                        uVar12 = (**(code **)(*plVar7 + 0x348))
                                           (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                        if ((uVar12 & 1) == 0) goto LAB_05ac0ecc;
                      }
                      bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo +
                                       0x130);
                      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo))
                      goto LAB_05ac0a90;
                      plVar9[0x11] = (long)plVar11;
                      LeanTween__value(plVar9 + 0x11,plVar11);
                      lVar8 = FUN_05b0877c(lVar15,0);
                      uVar6 = FUN_05b19e58(plVar9,0);
                      if (lVar8 != 0) {
                        FUN_05b10bcc(lVar8,uVar6,plVar9,0);
                        FUN_05ac4db8();
                        plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                        goto LAB_05ac0f6c;
                      }
                      goto LAB_05ac1050;
                    }
                    FUN_05ac4a00();
LAB_05ac0ecc:
                    plVar11 = (long *)FUN_05b19e58(plVar9,0);
                    if (plVar11 == (long *)0x0) goto LAB_05ac1050;
                    (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    FUN_05bfdfc8();
                    plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                  }
                  else {
LAB_05ac0a90:
                    FUN_05bfde88();
                    plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                  }
                }
              }
              else {
                lVar8 = *(long *)puVar3;
                bVar1 = *(byte *)(lVar8 + 0x130);
                if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar8))
                goto LAB_05ac076c;
                FUN_05ac4560();
                if (plVar9[0xd] == 0) goto LAB_05ac1050;
                plVar10 = (long *)(plVar9[0xd] + 0x18);
                *plVar10 = lVar16;
                LeanTween__value(plVar10,lVar16);
                if (*(long *)(lVar13 + 0x80) == 0) goto LAB_05ac1050;
                lVar8 = FUN_05b110a0(*(long *)(lVar13 + 0x80),plVar9[0xd],0);
                if (lVar8 != 0) {
LAB_05ac09d0:
                  FUN_05bfde88();
                  goto LAB_05ac0f6c;
                }
                FUN_05bfd630();
                if (*(long *)(lVar15 + 0xa0) == 0) goto LAB_05ac1050;
                plVar11 = (long *)FUN_05b110a0(*(long *)(lVar15 + 0xa0),plVar9[0xd],0);
                if (plVar11 != (long *)0x0) {
                  lVar8 = *(long *)puVar3;
                  bVar1 = *(byte *)(lVar8 + 0x130);
                  if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar8))
                  goto LAB_05ac105c;
                  lVar8 = FUN_05ac4a00(plVar11);
                  if (lVar8 != lVar14) {
                    if (plVar7 == (long *)0x0) goto LAB_05ac1050;
                    uVar12 = (**(code **)(*plVar7 + 0x348))
                                       (plVar7,lVar8,*(undefined8 *)(*plVar7 + 0x350));
                    if ((uVar12 & 1) == 0) goto LAB_05ac0e5c;
                  }
                  plVar9[0xe] = (long)plVar11;
                  LeanTween__value(plVar9 + 0xe,plVar11);
                  if (*(long *)(lVar15 + 0xa0) != 0) {
                    FUN_05b10bcc(*(long *)(lVar15 + 0xa0),plVar9[0xd],plVar9,0);
                    FUN_05ac4bc0();
                    plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                    goto LAB_05ac0f6c;
                  }
                  goto LAB_05ac1050;
                }
                FUN_05ac4a00();
LAB_05ac0e5c:
                plVar11 = (long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
                plVar9 = (long *)plVar9[0xd];
                if (plVar9 == (long *)0x0) goto LAB_05ac1050;
                (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
LAB_05ac0f54:
                FUN_05bfdfc8();
              }
LAB_05ac0f6c:
              iVar4 = iVar4 + 1;
              iVar5 = FUN_05489ff8(plVar17,0);
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


