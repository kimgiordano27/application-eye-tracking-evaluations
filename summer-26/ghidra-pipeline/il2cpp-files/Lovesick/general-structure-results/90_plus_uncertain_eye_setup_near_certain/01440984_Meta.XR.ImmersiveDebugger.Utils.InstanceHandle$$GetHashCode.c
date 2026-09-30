/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceHandle$$GetHashCode
ENTRY_POINT: 01440984
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_InstanceHandle__GetHashCode
               (undefined **param_1,undefined1 param_2 [16],undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s12;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  
  do {
    FUN_01311764(param_4,&stack0x00000038,*(undefined8 *)param_1[0x106]);
    in_stack_00000058 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
    in_stack_00000050 = CONCAT44(fStack000000000000003c,fStack0000000000000038);
    in_stack_00000060 = in_stack_00000048;
    while (uVar5 = FUN_012c2b80(&stack0x00000050,*(undefined8 *)PTR_DAT_033f0fc8), (uVar5 & 1) != 0)
    {
      lVar6 = FUN_00bc02a8(&stack0x00000050,
                           *(undefined8 *)
                            Method_Newtonsoft_Json_JsonTextReader_<ReadFinishedAsync>d__36_MoveNext__
                          );
      if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *(long *)(unaff_x26 + 0x70);
      if (lVar12 == 0) {
LAB_01440df0:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar4 = 0;
      while (iVar4 < *(int *)(lVar12 + 0x18)) {
        FUN_0132138c(lVar12,iVar4,&stack0x000000b0,*unaff_x21);
        if (in_stack_000000b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar5 = FUN_0267e21c(lVar6,*(undefined8 *)(in_stack_000000b0 + 0x10),0);
        uVar13 = param_3;
        if ((uVar5 & 1) != 0) {
          if (*(long *)(unaff_x26 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(*(long *)(unaff_x26 + 0x70),iVar4,&stack0x000000b8,*unaff_x21);
          if (in_stack_000000b8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar13 = *(undefined8 *)(in_stack_000000b8 + 0x10);
          if (*(int *)(*unaff_x20 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar12 = FUN_014578b8(unaff_x25,lVar6,uVar13,0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_02681b9c(lVar12,0,0);
          uVar13 = param_3;
          if ((uVar5 & 1) != 0) {
            if (*(long *)(unaff_x26 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0132138c(*(long *)(unaff_x26 + 0x70),iVar4,&stack0x000000c0,*unaff_x21);
            if (in_stack_000000c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar14 = (float)FUN_0267de74(lVar6,*(undefined8 *)(in_stack_000000c0 + 0x10),0);
            if (*(long *)(unaff_x26 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar13 = param_3;
            FUN_0132138c(*(long *)(unaff_x26 + 0x70),iVar4,&stack0x000000c8,*unaff_x21);
            if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar15 = (float)FUN_0267e074(lVar6,*(undefined8 *)(in_stack_000000c8 + 0x10),0);
            fVar17 = (float)uVar13;
            fVar16 = (float)param_3;
            if ((((fVar14 < 0.0) || (unaff_s12 < fVar16 + fVar17)) || (fVar16 < 0.0)) ||
               (unaff_s12 < fVar14 + fVar15)) {
              plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,5);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar8 = thunk_FUN_00d6225c(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar8 == 0) {
                uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar7[4] = lVar6;
              uVar9 = FUN_01299bc0();
              lVar8 = FUN_014410c4(uVar9,CONCAT44(fStack00000000000000dc,fStack00000000000000d8));
              if ((lVar8 != 0) &&
                 (lVar10 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
              {
                uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,0);
              }
              uVar11 = *(uint *)(plVar7 + 3);
              if (uVar11 < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar7[5] = lVar8;
              if (lVar12 != 0) {
                lVar8 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar7 + 0x40));
                if (lVar8 == 0) {
                  uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                  FUN_00da5038(uVar13,0);
                }
                uVar11 = *(uint *)(plVar7 + 3);
              }
              if (uVar11 < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar7[6] = lVar12;
              uStack0000000000000040 = 0;
              fStack0000000000000038 = fVar15;
              fStack000000000000003c = fVar17;
              lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                          ,&stack0x00000038);
              if ((lVar12 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
                uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar7[7] = lVar12;
              fStack00000000000000d8 = fVar14;
              fStack00000000000000dc = fVar16;
              lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)
                                           Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                          ,&stack0x000000d8);
              if ((lVar12 != 0) &&
                 (lVar8 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
                uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                FUN_00da5038(uVar13,0);
              }
              if (*(uint *)(plVar7 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              plVar7[8] = lVar12;
              FUN_0160dd60();
              lVar8 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
              lVar12 = *(long *)(lVar8 + 0x38);
              if (lVar12 == 0) {
                FUN_00d59478(lVar8);
                lVar12 = *(long *)(lVar8 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              FUN_0160dd60();
              lVar8 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
              lVar12 = *(long *)(lVar8 + 0x38);
              if (lVar12 == 0) {
                FUN_00d59478(lVar8);
                lVar12 = *(long *)(lVar8 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              FUN_0160dd60();
              lVar8 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
              lVar12 = *(long *)(lVar8 + 0x38);
              if (lVar12 == 0) {
                FUN_00d59478(lVar8);
                lVar12 = *(long *)(lVar8 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
                lVar12 = FUN_00d5941c();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              FUN_0160dd60();
            }
          }
        }
        lVar12 = *(long *)(unaff_x26 + 0x70);
        iVar4 = iVar4 + 1;
        param_3 = uVar13;
        if (lVar12 == 0) goto LAB_01440df0;
      }
    }
    FUN_012c2b7c(&stack0x00000050,*(undefined8 *)StringLiteral_5735);
    puVar3 = StringLiteral_302;
    in_stack_00000028 = in_stack_00000028 + 1;
    if ((long)(int)*(uint *)(in_stack_00000020 + 0x18) <= (long)in_stack_00000028) {
      iVar4 = FUN_0160b5d0();
      puVar2 = Method_DisableCanvasOnStartMenuOpen_OnMenuOpened__;
      if (iVar4 == 0) {
        uVar13 = *(undefined8 *)PTR_DAT_033f44a8;
      }
      else {
        uVar13 = (**(code **)(*unaff_x23 + 0x168))();
        uVar13 = FUN_015f5b28(*(undefined8 *)puVar2,uVar13,0);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(uVar13,0);
      return;
    }
    if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_00000028) {
LAB_01441078:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar7 = (long *)(in_stack_00000020 + in_stack_00000028 * 8 + 0x20);
    lVar6 = *plVar7;
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_02681b9c(lVar6,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_00000028) goto LAB_01441078;
      if ((*plVar7 == 0) || (lVar6 = FUN_02666a34(*plVar7,0), lVar6 == 0)) {
LAB_0144107c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      unaff_x25 = FUN_0268b6ac(lVar6,0);
    }
    else {
      unaff_x25 = *(undefined8 *)
                   Method_System_Collections_Generic_Dictionary<ulong,_OVRSpatialAnchor_MultiAnchorDelegatePair>_Remove__
      ;
    }
    if (*(uint *)(in_stack_00000020 + 0x18) <= in_stack_00000028) goto LAB_01441078;
    lVar12 = *plVar7;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)Method_System_MemoryExtensions_AsSpan<byte>__);
    if (lVar6 == 0) goto LAB_0144107c;
    FUN_01320e50(lVar6,*(undefined8 *)Method_System_Collections_Generic_List<SignalAsset>_get_Item__
                );
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_UIElements_EventCallbackListPool_TypeInfo)
    ;
    if (lVar8 == 0) goto LAB_0144107c;
    FUN_01320e50(lVar8,*(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__);
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteSender>__
                               );
    if (lVar10 == 0) goto LAB_0144107c;
    FUN_01320e50(lVar10,*(undefined8 *)Method_TMPro_TMP_TextProcessingStack<float>_Push__);
    unaff_x26 = FUN_0143ec40(in_stack_00000018,lVar12,lVar6,in_stack_00000030,lVar8,
                             in_stack_00000010,lVar10);
    uVar1 = *(undefined4 *)(in_stack_00000018 + 0x10);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x20);
    }
    FUN_014574f0(unaff_x26,uVar1,0);
    param_4 = FUN_012998a8();
    if (param_4 == 0) goto LAB_0144107c;
    param_1 = &Method_Sirenix_Serialization_Serializer<short>__ctor__;
  } while( true );
}


