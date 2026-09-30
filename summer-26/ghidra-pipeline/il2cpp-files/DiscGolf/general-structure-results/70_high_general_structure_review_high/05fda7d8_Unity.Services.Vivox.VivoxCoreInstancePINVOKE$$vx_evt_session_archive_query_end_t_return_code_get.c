/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_return_code_get
ENTRY_POINT: 05fda7d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_return_code_get
               (void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  int iVar22;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar23;
  long *unaff_x21;
  long unaff_x22;
  int iVar24;
  long unaff_x23;
  undefined4 *puVar25;
  int unaff_w24;
  long *plVar26;
  undefined8 *puVar27;
  undefined4 unaff_w25;
  undefined1 *unaff_x26;
  long lVar28;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
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
  long in_stack_00000388;
  
  while ((uVar12 = in_stack_000001a0, uVar11 = in_stack_00000198, uVar10 = in_stack_00000190,
         uVar9 = in_stack_00000188, uVar8 = in_stack_00000180, uVar18 = in_stack_00000178,
         uVar17 = in_stack_00000170, in_stack_00000170 = uVar17, in_stack_00000178 = uVar18,
         in_stack_00000180 = uVar8, in_stack_00000188 = uVar9, in_stack_00000190 = uVar10,
         in_stack_00000198 = uVar11, in_stack_000001a0 = uVar12, *in_stack_00000028 != 0 &&
         (lVar13 = *(long *)(*in_stack_00000028 + 0x10), lVar13 != 0))) {
    uVar20 = *(undefined8 *)Method_AssetInputExample_DoReleasedThing__;
    *(undefined8 *)(unaff_x26 + 0x40) = in_stack_00000038;
    *(ulong *)(unaff_x26 + 0x38) = in_stack_00000030;
    FUN_041c3390(lVar13,unaff_w25,&stack0x00000350,uVar20);
    unaff_w24 = unaff_w24 + 1;
    if (*(int *)(unaff_x22 + 0x18) <= unaff_w24) {
      do {
        do {
          uVar14 = FUN_05fd2394(&stack0x000001b0);
          if ((uVar14 & 1) == 0) {
            lVar13 = *(long *)(in_stack_00000048 + 0x30);
            if (lVar13 == 0) goto LAB_05fdad7c;
            iVar24 = 0;
            goto LAB_05fda850;
          }
          lVar13 = FUN_05fd233c(&stack0x000001b0);
          unaff_x22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
          FUN_03fb358c(unaff_x22,*(undefined8 *)PTR_DAT_069fc3f0);
          iVar24 = *(int *)(lVar13 + 0x298);
          if (iVar24 < *(int *)(lVar13 + 0x29c) + 1) {
            if (unaff_x22 == 0) goto LAB_05fdad7c;
            lVar23 = *unaff_x19;
            do {
              lVar21 = *(long *)(unaff_x22 + 0x10);
              *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
              if (lVar21 == 0) goto LAB_05fdad7c;
              uVar3 = *(uint *)(unaff_x22 + 0x18);
              if (uVar3 < *(uint *)(lVar21 + 0x18)) {
                *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
                *(int *)(lVar21 + (long)(int)uVar3 * 4 + 0x20) = iVar24;
              }
              else {
                FUN_03fb3e1c(unaff_x22,iVar24,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
                lVar23 = *unaff_x19;
              }
              iVar24 = iVar24 + 1;
            } while (iVar24 < *(int *)(lVar13 + 0x29c) + 1);
          }
        } while (*(int *)(lVar13 + 0x2a0) < 1);
        unaff_x23 = thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                      );
        FUN_0552aca4(unaff_x23,0);
        uVar20 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar13);
        if (unaff_x23 == 0) goto LAB_05fdad7c;
        *(undefined8 *)(unaff_x23 + 0x10) = uVar20;
        LeanTween__value();
        lVar23 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
        FUN_0400f984(lVar23,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
        plVar26 = (long *)(unaff_x23 + 0x18);
        *plVar26 = lVar23;
        LeanTween__value(plVar26,lVar23);
        iVar24 = 0;
        while( true ) {
          iVar1 = *(int *)(lVar13 + 0x294);
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (iVar1 <= iVar24) break;
          lVar23 = *plVar26;
          uVar20 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar13,iVar24);
          if (lVar23 == 0) goto LAB_05fdad7c;
          lVar21 = *(long *)(lVar23 + 0x10);
          lVar28 = *unaff_x28;
          *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
          if (lVar21 == 0) goto LAB_05fdad7c;
          uVar3 = *(uint *)(lVar23 + 0x18);
          if (uVar3 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar23 + 0x18) = uVar3 + 1;
            *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar20;
            LeanTween__value();
          }
          else {
            FUN_040101ec(lVar23,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
          }
          iVar24 = iVar24 + 1;
        }
        uVar20 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                   );
        FUN_04de9e6c(uVar20,*(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
        *(undefined8 *)(unaff_x23 + 0x20) = uVar20;
        LeanTween__value((undefined8 *)(unaff_x23 + 0x20),uVar20);
        *(long *)(unaff_x23 + 0x28) = unaff_x22;
        LeanTween__value((long *)(unaff_x23 + 0x28),unaff_x22);
        if (unaff_x22 == 0) goto LAB_05fdad7c;
        unaff_x26 = &stack0x00000350;
      } while (*(int *)(unaff_x22 + 0x18) < 1);
      unaff_w24 = 0;
      unaff_x20 = (undefined8 *)Method_AssetInputExample_DoPressedThing__;
    }
    unaff_w25 = FUN_03fb3b24(unaff_x22,unaff_w24,*(undefined8 *)PTR_DAT_069fe588);
    if (*in_stack_00000028 == 0) break;
    lVar13 = *(long *)(*in_stack_00000028 + 0x10);
    if (lVar13 == 0) break;
    FUN_041c332c(&stack0x00000350,lVar13,unaff_w25,*unaff_x20);
    in_stack_00000038 = *(undefined8 *)(unaff_x26 + 0x40);
    in_stack_00000030 = *(ulong *)(unaff_x26 + 0x38);
    in_stack_00000170 = uVar17;
    in_stack_00000178 = uVar18;
    in_stack_00000180 = uVar8;
    in_stack_00000188 = uVar9;
    in_stack_00000190 = uVar10;
    in_stack_00000198 = uVar11;
    in_stack_000001a0 = uVar12;
    if (in_stack_00000030 == 0) break;
    *(long *)(in_stack_00000030 + 0x10) = unaff_x23;
    LeanTween__value((long *)(in_stack_00000030 + 0x10),unaff_x23);
  }
  goto LAB_05fdad7c;
  while( true ) {
    lVar13 = *(long *)(in_stack_00000048 + 0x30);
    iVar24 = iVar24 + 1;
    if (lVar13 == 0) break;
LAB_05fda850:
    lVar13 = *(long *)(lVar13 + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar13 + 8) <= iVar24) {
      return;
    }
    if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
    piVar15 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar24,
                                  *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    if (((*in_stack_00000028 == 0) || (lVar13 = *(long *)(*in_stack_00000028 + 0x10), lVar13 == 0))
       || (FUN_041c332c(&stack0x00000350,lVar13,*piVar15,
                        *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
          in_stack_00000388 == 0)) break;
    lVar13 = *(long *)(in_stack_00000388 + 0x10);
    if (lVar13 != 0) {
      lVar23 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc4872 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                    );
        DAT_06dc4872 = '\x01';
      }
      puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
      if (lVar23 == 0) break;
      iVar1 = piVar15[10];
      uVar3 = piVar15[0xb];
      uVar14 = (ulong)uVar3;
      lVar28 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
      ;
      lVar21 = *(long *)(lVar28 + 0x38);
      if (lVar21 == 0) {
        FUN_02dcfd74(lVar28);
        lVar21 = *(long *)(lVar28 + 0x38);
      }
      lVar23 = FUN_036ee4d8(*(undefined8 *)(lVar23 + 0x30),*(undefined8 *)(lVar21 + 0x10));
      if ((int)uVar3 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar3 != 0) {
        puVar25 = (undefined4 *)(lVar23 + (long)iVar1 * 0xc + 8);
        do {
          if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
             (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
          goto LAB_05fdad7c;
          pcVar16 = (char *)FUN_05fdfe80(lVar23,*(undefined8 *)(puVar25 + -2),*puVar25,0);
          if (*pcVar16 != '\0') {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
            iVar1 = *(int *)(pcVar16 + 4);
            plVar26 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18(*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar26 + (long)iVar1 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_05fde34c(&stack0x00000350,3,*piVar15,0);
              uVar17 = 0;
            }
            else {
              uVar17 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                    *piVar15,0);
            }
            uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar15,&stack0x000000f0
                                  ,uVar17);
            in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar18,0);
            uVar7 = in_stack_000000f0;
            lVar23 = *(long *)(lVar13 + 0x20);
            in_stack_000000e8 = 0;
            LeanTween__value(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar17 == 0xc);
            if (lVar23 == 0) goto LAB_05fdad7c;
            FUN_04dec6b0(lVar23,uVar7,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
          }
          uVar14 = uVar14 - 1;
          puVar25 = puVar25 + 3;
        } while (uVar14 != 0);
      }
      if (-1 < piVar15[8]) {
        lVar23 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4873 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
          DAT_06dc4873 = '\x01';
        }
        if (lVar23 == 0) break;
        iVar1 = piVar15[0xc];
        uVar3 = piVar15[0xd];
        lVar28 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
        ;
        lVar21 = *(long *)(lVar28 + 0x38);
        if (lVar21 == 0) {
          FUN_02dcfd74(lVar28);
          lVar21 = *(long *)(lVar28 + 0x38);
        }
        lVar23 = FUN_036ee4ec(*(undefined8 *)(lVar23 + 0x38),*(undefined8 *)(lVar21 + 0x10));
        if ((int)uVar3 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar3 != 0) {
          uVar14 = 0;
          do {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
            puVar27 = (undefined8 *)(lVar23 + (long)iVar1 * 0xc + uVar14 * 0xc);
            in_stack_00000030 =
                 in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar27 + 1);
            lVar21 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar27,in_stack_00000030,0);
            if (*(int *)(lVar21 + 8) != *piVar15) {
              if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                 (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0))
              goto LAB_05fdad7c;
              lVar21 = FUN_05fdfe80(lVar21,*puVar27,*(undefined4 *)(puVar27 + 1),0);
              iVar5 = *(int *)(lVar21 + 8);
              if (0 < iVar5) {
                iVar22 = 0;
                do {
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0))
                  goto LAB_05fdad7c;
                  uVar17 = *puVar27;
                  if (DAT_06dc486d == '\0') {
                    FUN_02d965b8();
                    DAT_06dc486d = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar28 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar28 == 0))
                  goto LAB_05fdad7c;
                  lVar28 = *(long *)(lVar28 + 0x20);
                  iVar2 = *(int *)(lVar21 + 0x28);
                  iVar4 = *(int *)(lVar21 + 0x2c);
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
                  if (lVar28 == 0) goto LAB_05fdad7c;
                  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(puVar27 + 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  piVar19 = (int *)FUN_042c8e28(lVar28 + (long)(int)*(uint *)(puVar27 + 1) * 8 +
                                                0x20,iVar22 + ((int)((ulong)uVar17 >> 0x20) +
                                                              iVar2 * ((uint)uVar17 & 0xffff)) *
                                                              iVar4,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                               );
                  lVar21 = *(long *)(in_stack_00000048 + 0x30);
                  if (lVar21 == 0) goto LAB_05fdad7c;
                  iVar2 = *piVar19;
                  plVar26 = *(long **)(lVar21 + 0x18);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02dcfd18(*(long *)(*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                          + 0x20));
                    lVar21 = *(long *)(in_stack_00000048 + 0x30);
                  }
                  memcpy(&stack0x00000060,(void *)(*plVar26 + (long)iVar2 * 0x80),0x80);
                  uVar7 = in_stack_00000060;
                  uVar17 = FUN_05fdf5d4(lVar21,piVar15[8],in_stack_00000060,0);
                  uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                        piVar15,uVar17);
                  in_stack_000000e0 =
                       FUN_05362cb4(*(undefined8 *)
                                     Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                    ,uVar18,0);
                  lVar21 = *(long *)(lVar13 + 0x20);
                  in_stack_000000e8 = 0;
                  LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                  in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar17 == 0xc);
                  if (lVar21 == 0) goto LAB_05fdad7c;
                  FUN_04dec6b0(lVar21,uVar7,in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                  iVar22 = iVar22 + 1;
                } while (iVar5 != iVar22);
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar3);
        }
      }
    }
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


