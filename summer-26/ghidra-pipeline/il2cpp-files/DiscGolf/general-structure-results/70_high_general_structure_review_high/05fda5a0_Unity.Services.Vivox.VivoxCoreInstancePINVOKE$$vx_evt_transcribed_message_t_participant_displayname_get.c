/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_transcribed_message_t_participant_displayname_get
ENTRY_POINT: 05fda5a0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_transcribed_message_t_participant_displayname_get
               (long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  undefined8 uVar14;
  int *piVar15;
  long lVar16;
  long in_x9;
  long lVar17;
  long in_x10;
  int iVar18;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined4 *puVar19;
  long unaff_x24;
  undefined8 *puVar20;
  long *plVar21;
  int iVar22;
  long *unaff_x28;
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
  
  do {
    *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
    *(int *)(in_x9 + 0x20) = unaff_w23;
    while( true ) {
      unaff_w23 = unaff_w23 + 1;
      if (*(int *)(unaff_x24 + 0x29c) + 1 <= unaff_w23) {
        do {
          if (0 < *(int *)(unaff_x24 + 0x2a0)) {
            lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                      );
            FUN_0552aca4(lVar8,0);
            uVar9 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),unaff_x24);
            if (lVar8 == 0) goto LAB_05fdad7c;
            *(undefined8 *)(lVar8 + 0x10) = uVar9;
            LeanTween__value();
            lVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                         Method_System_Xml_Schema_Asttree_CompileXPath__);
            FUN_0400f984(lVar10,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
            plVar21 = (long *)(lVar8 + 0x18);
            *plVar21 = lVar10;
            LeanTween__value(plVar21,lVar10);
            iVar22 = 0;
            while( true ) {
              iVar3 = *(int *)(unaff_x24 + 0x294);
              if (*(int *)(*unaff_x29 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (iVar3 <= iVar22) break;
              lVar10 = *plVar21;
              uVar9 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),unaff_x24,iVar22);
              if (lVar10 == 0) goto LAB_05fdad7c;
              lVar16 = *(long *)(lVar10 + 0x10);
              lVar17 = *unaff_x28;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar16 == 0) goto LAB_05fdad7c;
              uVar5 = *(uint *)(lVar10 + 0x18);
              if (uVar5 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar5 + 1;
                *(undefined8 *)(lVar16 + (long)(int)uVar5 * 8 + 0x20) = uVar9;
                LeanTween__value();
              }
              else {
                FUN_040101ec(lVar10,uVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              iVar22 = iVar22 + 1;
            }
            uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                      );
            FUN_04de9e6c(uVar9,*(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
            *(undefined8 *)(lVar8 + 0x20) = uVar9;
            LeanTween__value((undefined8 *)(lVar8 + 0x20),uVar9);
            *(long *)(lVar8 + 0x28) = unaff_x22;
            LeanTween__value((long *)(lVar8 + 0x28),unaff_x22);
            puVar6 = Method_AssetInputExample_DoPressedThing__;
            if (unaff_x22 == 0) goto LAB_05fdad7c;
            if (0 < *(int *)(unaff_x22 + 0x18)) {
              iVar22 = 0;
              do {
                uVar7 = FUN_03fb3b24(unaff_x22,iVar22,*(undefined8 *)PTR_DAT_069fe588);
                if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
                lVar10 = *(long *)(*in_stack_00000028 + 0x10);
                if ((lVar10 == 0) ||
                   (FUN_041c332c(&stack0x00000350,lVar10,uVar7,*(undefined8 *)puVar6),
                   in_stack_00000170 = in_stack_00000350, in_stack_00000178 = in_stack_00000358,
                   in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
                   in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
                   in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
                goto LAB_05fdad7c;
                *(long *)(in_stack_00000388 + 0x10) = lVar8;
                LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar8);
                in_stack_00000380 = in_stack_000001a0;
                in_stack_00000378 = in_stack_00000198;
                in_stack_00000370 = in_stack_00000190;
                in_stack_00000368 = in_stack_00000188;
                in_stack_00000360 = in_stack_00000180;
                in_stack_00000358 = in_stack_00000178;
                in_stack_00000350 = in_stack_00000170;
                if ((*in_stack_00000028 == 0) ||
                   (lVar10 = *(long *)(*in_stack_00000028 + 0x10), lVar10 == 0)) goto LAB_05fdad7c;
                FUN_041c3390(lVar10,uVar7,&stack0x00000350,
                             *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
                iVar22 = iVar22 + 1;
                in_stack_00000030 = in_stack_00000388;
              } while (iVar22 < *(int *)(unaff_x22 + 0x18));
            }
          }
          uVar11 = FUN_05fd2394(&stack0x000001b0);
          if ((uVar11 & 1) == 0) {
            lVar8 = *(long *)(in_stack_00000048 + 0x30);
            if (lVar8 == 0) goto LAB_05fdad7c;
            iVar22 = 0;
            goto LAB_05fda850;
          }
          unaff_x24 = FUN_05fd233c(&stack0x000001b0);
          unaff_x22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
          FUN_03fb358c(unaff_x22,*(undefined8 *)PTR_DAT_069fc3f0);
          unaff_w23 = *(int *)(unaff_x24 + 0x298);
        } while (*(int *)(unaff_x24 + 0x29c) + 1 <= unaff_w23);
        if (unaff_x22 == 0) goto LAB_05fdad7c;
        param_1 = *unaff_x19;
      }
      lVar8 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05fdad7c;
      in_x10 = (long)(int)*(uint *)(unaff_x22 + 0x18);
      if (*(uint *)(unaff_x22 + 0x18) < *(uint *)(lVar8 + 0x18)) break;
      FUN_03fb3e1c(unaff_x22,unaff_w23,
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x70));
      param_1 = *unaff_x19;
    }
    in_x9 = lVar8 + in_x10 * 4;
  } while( true );
  while( true ) {
    lVar8 = *(long *)(in_stack_00000048 + 0x30);
    iVar22 = iVar22 + 1;
    if (lVar8 == 0) break;
LAB_05fda850:
    lVar8 = *(long *)(lVar8 + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar8 + 8) <= iVar22) {
      return;
    }
    if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
    piVar12 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar22,
                                  *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    if (((*in_stack_00000028 == 0) || (lVar8 = *(long *)(*in_stack_00000028 + 0x10), lVar8 == 0)) ||
       (FUN_041c332c(&stack0x00000350,lVar8,*piVar12,
                     *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
       in_stack_00000388 == 0)) break;
    lVar8 = *(long *)(in_stack_00000388 + 0x10);
    if (lVar8 != 0) {
      lVar10 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc4872 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                    );
        DAT_06dc4872 = '\x01';
      }
      puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
      if (lVar10 == 0) break;
      iVar3 = piVar12[10];
      uVar5 = piVar12[0xb];
      uVar11 = (ulong)uVar5;
      lVar17 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
      ;
      lVar16 = *(long *)(lVar17 + 0x38);
      if (lVar16 == 0) {
        FUN_02dcfd74(lVar17);
        lVar16 = *(long *)(lVar17 + 0x38);
      }
      lVar10 = FUN_036ee4d8(*(undefined8 *)(lVar10 + 0x30),*(undefined8 *)(lVar16 + 0x10));
      if ((int)uVar5 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar5 != 0) {
        puVar19 = (undefined4 *)(lVar10 + (long)iVar3 * 0xc + 8);
        do {
          if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
             (lVar10 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar10 == 0))
          goto LAB_05fdad7c;
          pcVar13 = (char *)FUN_05fdfe80(lVar10,*(undefined8 *)(puVar19 + -2),*puVar19,0);
          if (*pcVar13 != '\0') {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
            iVar3 = *(int *)(pcVar13 + 4);
            plVar21 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18(*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar21 + (long)iVar3 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_05fde34c(&stack0x00000350,3,*piVar12,0);
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                   *piVar12,0);
            }
            uVar14 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar12,&stack0x000000f0
                                  ,uVar9);
            in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar14,0);
            uVar7 = in_stack_000000f0;
            lVar10 = *(long *)(lVar8 + 0x20);
            in_stack_000000e8 = 0;
            LeanTween__value(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar9 == 0xc);
            if (lVar10 == 0) goto LAB_05fdad7c;
            FUN_04dec6b0(lVar10,uVar7,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
          }
          uVar11 = uVar11 - 1;
          puVar19 = puVar19 + 3;
        } while (uVar11 != 0);
      }
      if (-1 < piVar12[8]) {
        lVar10 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4873 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
          DAT_06dc4873 = '\x01';
        }
        if (lVar10 == 0) break;
        iVar3 = piVar12[0xc];
        uVar5 = piVar12[0xd];
        lVar17 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
        ;
        lVar16 = *(long *)(lVar17 + 0x38);
        if (lVar16 == 0) {
          FUN_02dcfd74(lVar17);
          lVar16 = *(long *)(lVar17 + 0x38);
        }
        lVar10 = FUN_036ee4ec(*(undefined8 *)(lVar10 + 0x38),*(undefined8 *)(lVar16 + 0x10));
        if ((int)uVar5 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar5 != 0) {
          uVar11 = 0;
          do {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
            puVar20 = (undefined8 *)(lVar10 + (long)iVar3 * 0xc + uVar11 * 0xc);
            in_stack_00000030 =
                 in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar20 + 1);
            lVar16 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar20,in_stack_00000030,0);
            if (*(int *)(lVar16 + 8) != *piVar12) {
              if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                 (lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar16 == 0))
              goto LAB_05fdad7c;
              lVar16 = FUN_05fdfe80(lVar16,*puVar20,*(undefined4 *)(puVar20 + 1),0);
              iVar4 = *(int *)(lVar16 + 8);
              if (0 < iVar4) {
                iVar18 = 0;
                do {
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar16 == 0))
                  goto LAB_05fdad7c;
                  uVar9 = *puVar20;
                  if (DAT_06dc486d == '\0') {
                    FUN_02d965b8();
                    DAT_06dc486d = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar17 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar17 == 0))
                  goto LAB_05fdad7c;
                  lVar17 = *(long *)(lVar17 + 0x20);
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
                  if (lVar17 == 0) goto LAB_05fdad7c;
                  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(puVar20 + 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  piVar15 = (int *)FUN_042c8e28(lVar17 + (long)(int)*(uint *)(puVar20 + 1) * 8 +
                                                0x20,iVar18 + ((int)((ulong)uVar9 >> 0x20) +
                                                              iVar1 * ((uint)uVar9 & 0xffff)) *
                                                              iVar2,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                               );
                  lVar16 = *(long *)(in_stack_00000048 + 0x30);
                  if (lVar16 == 0) goto LAB_05fdad7c;
                  iVar1 = *piVar15;
                  plVar21 = *(long **)(lVar16 + 0x18);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02dcfd18(*(long *)(*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                          + 0x20));
                    lVar16 = *(long *)(in_stack_00000048 + 0x30);
                  }
                  memcpy(&stack0x00000060,(void *)(*plVar21 + (long)iVar1 * 0x80),0x80);
                  uVar7 = in_stack_00000060;
                  uVar9 = FUN_05fdf5d4(lVar16,piVar12[8],in_stack_00000060,0);
                  uVar14 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                        piVar12,uVar9);
                  in_stack_000000e0 =
                       FUN_05362cb4(*(undefined8 *)
                                     Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                    ,uVar14,0);
                  lVar16 = *(long *)(lVar8 + 0x20);
                  in_stack_000000e8 = 0;
                  LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                  in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar9 == 0xc);
                  if (lVar16 == 0) goto LAB_05fdad7c;
                  FUN_04dec6b0(lVar16,uVar7,in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                  iVar18 = iVar18 + 1;
                } while (iVar4 != iVar18);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar5);
        }
      }
    }
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


