/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_is_current_user_get
ENTRY_POINT: 05fda524
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_is_current_user_get
               (void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long *unaff_x19;
  long *unaff_x21;
  int iVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  long unaff_x28;
  long *plVar25;
  long *unaff_x29;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  plVar25 = *(long **)(unaff_x28 + 0x1c0);
  do {
    lVar8 = FUN_05fd233c(&stack0x000001b0);
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar9,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar21 = *(int *)(lVar8 + 0x298);
    if (iVar21 < *(int *)(lVar8 + 0x29c) + 1) {
      if (lVar9 == 0) goto LAB_05fdad7c;
      lVar16 = *unaff_x19;
      do {
        lVar18 = *(long *)(lVar9 + 0x10);
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar18 == 0) goto LAB_05fdad7c;
        uVar5 = *(uint *)(lVar9 + 0x18);
        if (uVar5 < *(uint *)(lVar18 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar5 + 1;
          *(int *)(lVar18 + (long)(int)uVar5 * 4 + 0x20) = iVar21;
        }
        else {
          FUN_03fb3e1c(lVar9,iVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          lVar16 = *unaff_x19;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)(lVar8 + 0x29c) + 1);
    }
    if (0 < *(int *)(lVar8 + 0x2a0)) {
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar16,0);
      uVar10 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar8);
      if (lVar16 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar16 + 0x10) = uVar10;
      LeanTween__value();
      lVar18 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar18,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar24 = (long *)(lVar16 + 0x18);
      *plVar24 = lVar18;
      LeanTween__value(plVar24,lVar18);
      iVar21 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar8 + 0x294);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar3 <= iVar21) break;
        lVar18 = *plVar24;
        uVar10 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar8,iVar21);
        if (lVar18 == 0) goto LAB_05fdad7c;
        lVar17 = *(long *)(lVar18 + 0x10);
        lVar19 = *plVar25;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar17 == 0) goto LAB_05fdad7c;
        uVar5 = *(uint *)(lVar18 + 0x18);
        if (uVar5 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar5 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar5 * 8 + 0x20) = uVar10;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar18,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
        iVar21 = iVar21 + 1;
      }
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar10,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar16 + 0x20) = uVar10;
      LeanTween__value((undefined8 *)(lVar16 + 0x20),uVar10);
      *(long *)(lVar16 + 0x28) = lVar9;
      LeanTween__value((long *)(lVar16 + 0x28),lVar9);
      puVar6 = Method_AssetInputExample_DoPressedThing__;
      if (lVar9 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar21 = 0;
        do {
          uVar7 = FUN_03fb3b24(lVar9,iVar21,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar8 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar8 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar8,uVar7,*(undefined8 *)puVar6),
             in_stack_00000170 = in_stack_00000350, in_stack_00000178 = in_stack_00000358,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar16;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar16);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          in_stack_00000358 = in_stack_00000178;
          in_stack_00000350 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar8 = *(long *)(*in_stack_00000028 + 0x10), lVar8 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar8,uVar7,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar21 = iVar21 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar21 < *(int *)(lVar9 + 0x18));
      }
    }
    uVar11 = FUN_05fd2394(&stack0x000001b0);
  } while ((uVar11 & 1) != 0);
  lVar8 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar8 != 0) {
    iVar21 = 0;
    do {
      lVar8 = *(long *)(lVar8 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar8 + 8) <= iVar21) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar12 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar21,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar8 = *(long *)(*in_stack_00000028 + 0x10), lVar8 == 0))
         || (FUN_041c332c(&stack0x00000350,lVar8,*piVar12,
                          *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
            in_stack_00000388 == 0)) break;
      lVar8 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar8 != 0) {
        lVar9 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar9 == 0) break;
        iVar3 = piVar12[10];
        uVar5 = piVar12[0xb];
        uVar11 = (ulong)uVar5;
        lVar18 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar16 = *(long *)(lVar18 + 0x38);
        if (lVar16 == 0) {
          FUN_02dcfd74(lVar18);
          lVar16 = *(long *)(lVar18 + 0x38);
        }
        lVar9 = FUN_036ee4d8(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar16 + 0x10));
        if ((int)uVar5 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar5 != 0) {
          puVar22 = (undefined4 *)(lVar9 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar9 == 0))
            goto LAB_05fdad7c;
            pcVar13 = (char *)FUN_05fdfe80(lVar9,*(undefined8 *)(puVar22 + -2),*puVar22,0);
            if (*pcVar13 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar3 = *(int *)(pcVar13 + 4);
              plVar25 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar25 + (long)iVar3 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar12,0);
                uVar10 = 0;
              }
              else {
                uVar10 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar12,0);
              }
              uVar14 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar12,
                                    &stack0x000000f0,uVar10);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar14,0);
              uVar7 = in_stack_000000f0;
              lVar9 = *(long *)(lVar8 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar10 == 0xc);
              if (lVar9 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar9,uVar7,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar11 = uVar11 - 1;
            puVar22 = puVar22 + 3;
          } while (uVar11 != 0);
        }
        if (-1 < piVar12[8]) {
          lVar9 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar9 == 0) break;
          iVar3 = piVar12[0xc];
          uVar5 = piVar12[0xd];
          lVar18 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar16 = *(long *)(lVar18 + 0x38);
          if (lVar16 == 0) {
            FUN_02dcfd74(lVar18);
            lVar16 = *(long *)(lVar18 + 0x38);
          }
          lVar9 = FUN_036ee4ec(*(undefined8 *)(lVar9 + 0x38),*(undefined8 *)(lVar16 + 0x10));
          if ((int)uVar5 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar5 != 0) {
            uVar11 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar23 = (undefined8 *)(lVar9 + (long)iVar3 * 0xc + uVar11 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar23 + 1);
              lVar16 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar23,in_stack_00000030,0
                                   );
              if (*(int *)(lVar16 + 8) != *piVar12) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar16 == 0))
                goto LAB_05fdad7c;
                lVar16 = FUN_05fdfe80(lVar16,*puVar23,*(undefined4 *)(puVar23 + 1),0);
                iVar4 = *(int *)(lVar16 + 8);
                if (0 < iVar4) {
                  iVar20 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar16 == 0)
                       ) goto LAB_05fdad7c;
                    uVar10 = *puVar23;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar18 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar18 == 0)
                       ) goto LAB_05fdad7c;
                    lVar18 = *(long *)(lVar18 + 0x20);
                    iVar1 = *(int *)(lVar16 + 0x28);
                    iVar2 = *(int *)(lVar16 + 0x2c);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (DAT_06dc4288 == '\0') {
                      FUN_02d965b8();
                      DAT_06dc4288 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (lVar18 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar18 + 0x18) <= *(uint *)(puVar23 + 1)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96868();
                    }
                    piVar15 = (int *)FUN_042c8e28(lVar18 + (long)(int)*(uint *)(puVar23 + 1) * 8 +
                                                  0x20,iVar20 + ((int)((ulong)uVar10 >> 0x20) +
                                                                iVar1 * ((uint)uVar10 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar16 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar16 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar15;
                    plVar25 = *(long **)(lVar16 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar16 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar25 + (long)iVar1 * 0x80),0x80);
                    uVar7 = in_stack_00000060;
                    uVar10 = FUN_05fdf5d4(lVar16,piVar12[8],in_stack_00000060,0);
                    uVar14 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar12,uVar10);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar14,0);
                    lVar16 = *(long *)(lVar8 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar10 == 0xc);
                    if (lVar16 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar16,uVar7,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar20 = iVar20 + 1;
                  } while (iVar4 != iVar20);
                }
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar5);
          }
        }
      }
      lVar8 = *(long *)(in_stack_00000048 + 0x30);
      iVar21 = iVar21 + 1;
    } while (lVar8 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


