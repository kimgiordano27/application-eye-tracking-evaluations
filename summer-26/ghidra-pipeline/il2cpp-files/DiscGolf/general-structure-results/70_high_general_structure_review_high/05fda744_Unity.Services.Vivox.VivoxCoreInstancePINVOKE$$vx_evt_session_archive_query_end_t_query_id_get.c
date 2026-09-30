/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_query_id_get
ENTRY_POINT: 05fda744
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_query_id_get
               (void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  int iVar16;
  long *unaff_x19;
  long lVar17;
  long *unaff_x21;
  long unaff_x22;
  int iVar18;
  long unaff_x23;
  undefined4 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  long lVar22;
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
  
  while (puVar6 = Method_AssetInputExample_DoPressedThing__, unaff_x22 != 0) {
    if (0 < *(int *)(unaff_x22 + 0x18)) {
      iVar18 = 0;
      do {
        uVar7 = FUN_03fb3b24(unaff_x22,iVar18,*(undefined8 *)PTR_DAT_069fe588);
        if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
        lVar8 = *(long *)(*in_stack_00000028 + 0x10);
        if ((lVar8 == 0) ||
           (FUN_041c332c(&stack0x00000350,lVar8,uVar7,*(undefined8 *)puVar6),
           in_stack_00000170 = in_stack_00000350, in_stack_00000178 = in_stack_00000358,
           in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
           in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
           in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
        *(long *)(in_stack_00000388 + 0x10) = unaff_x23;
        LeanTween__value((long *)(in_stack_00000388 + 0x10),unaff_x23);
        in_stack_00000380 = in_stack_000001a0;
        in_stack_00000378 = in_stack_00000198;
        in_stack_00000370 = in_stack_00000190;
        in_stack_00000368 = in_stack_00000188;
        in_stack_00000360 = in_stack_00000180;
        in_stack_00000358 = in_stack_00000178;
        in_stack_00000350 = in_stack_00000170;
        if ((*in_stack_00000028 == 0) || (lVar8 = *(long *)(*in_stack_00000028 + 0x10), lVar8 == 0))
        goto LAB_05fdad7c;
        FUN_041c3390(lVar8,uVar7,&stack0x00000350,
                     *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
        iVar18 = iVar18 + 1;
        in_stack_00000030 = in_stack_00000388;
      } while (iVar18 < *(int *)(unaff_x22 + 0x18));
    }
    do {
      uVar9 = FUN_05fd2394(&stack0x000001b0);
      if ((uVar9 & 1) == 0) {
        lVar8 = *(long *)(in_stack_00000048 + 0x30);
        if (lVar8 == 0) goto LAB_05fdad7c;
        iVar18 = 0;
        goto LAB_05fda850;
      }
      lVar8 = FUN_05fd233c(&stack0x000001b0);
      unaff_x22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(unaff_x22,*(undefined8 *)PTR_DAT_069fc3f0);
      iVar18 = *(int *)(lVar8 + 0x298);
      if (iVar18 < *(int *)(lVar8 + 0x29c) + 1) {
        if (unaff_x22 == 0) goto LAB_05fdad7c;
        lVar17 = *unaff_x19;
        do {
          lVar15 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_05fdad7c;
          uVar3 = *(uint *)(unaff_x22 + 0x18);
          if (uVar3 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(unaff_x22 + 0x18) = uVar3 + 1;
            *(int *)(lVar15 + (long)(int)uVar3 * 4 + 0x20) = iVar18;
          }
          else {
            FUN_03fb3e1c(unaff_x22,iVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            lVar17 = *unaff_x19;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < *(int *)(lVar8 + 0x29c) + 1);
      }
    } while (*(int *)(lVar8 + 0x2a0) < 1);
    unaff_x23 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                  );
    FUN_0552aca4(unaff_x23,0);
    uVar12 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar8);
    if (unaff_x23 == 0) break;
    *(undefined8 *)(unaff_x23 + 0x10) = uVar12;
    LeanTween__value();
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
    FUN_0400f984(lVar17,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
    plVar20 = (long *)(unaff_x23 + 0x18);
    *plVar20 = lVar17;
    LeanTween__value(plVar20,lVar17);
    iVar18 = 0;
    while( true ) {
      iVar1 = *(int *)(lVar8 + 0x294);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (iVar1 <= iVar18) break;
      lVar17 = *plVar20;
      uVar12 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar8,iVar18);
      if (lVar17 == 0) goto LAB_05fdad7c;
      lVar15 = *(long *)(lVar17 + 0x10);
      lVar22 = *unaff_x28;
      *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05fdad7c;
      uVar3 = *(uint *)(lVar17 + 0x18);
      if (uVar3 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar17 + 0x18) = uVar3 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
        LeanTween__value();
      }
      else {
        FUN_040101ec(lVar17,uVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
      }
      iVar18 = iVar18 + 1;
    }
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                               );
    FUN_04de9e6c(uVar12,*(undefined8 *)
                         Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
    *(undefined8 *)(unaff_x23 + 0x20) = uVar12;
    LeanTween__value((undefined8 *)(unaff_x23 + 0x20),uVar12);
    *(long *)(unaff_x23 + 0x28) = unaff_x22;
    LeanTween__value((long *)(unaff_x23 + 0x28),unaff_x22);
  }
  goto LAB_05fdad7c;
  while( true ) {
    lVar8 = *(long *)(in_stack_00000048 + 0x30);
    iVar18 = iVar18 + 1;
    if (lVar8 == 0) break;
LAB_05fda850:
    lVar8 = *(long *)(lVar8 + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar8 + 8) <= iVar18) {
      return;
    }
    if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
    piVar10 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar18,
                                  *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    if (((*in_stack_00000028 == 0) || (lVar8 = *(long *)(*in_stack_00000028 + 0x10), lVar8 == 0)) ||
       (FUN_041c332c(&stack0x00000350,lVar8,*piVar10,
                     *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
       in_stack_00000388 == 0)) break;
    lVar8 = *(long *)(in_stack_00000388 + 0x10);
    if (lVar8 != 0) {
      lVar17 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc4872 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                    );
        DAT_06dc4872 = '\x01';
      }
      puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
      if (lVar17 == 0) break;
      iVar1 = piVar10[10];
      uVar3 = piVar10[0xb];
      uVar9 = (ulong)uVar3;
      lVar22 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
      ;
      lVar15 = *(long *)(lVar22 + 0x38);
      if (lVar15 == 0) {
        FUN_02dcfd74(lVar22);
        lVar15 = *(long *)(lVar22 + 0x38);
      }
      lVar17 = FUN_036ee4d8(*(undefined8 *)(lVar17 + 0x30),*(undefined8 *)(lVar15 + 0x10));
      if ((int)uVar3 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar3 != 0) {
        puVar19 = (undefined4 *)(lVar17 + (long)iVar1 * 0xc + 8);
        do {
          if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
             (lVar17 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar17 == 0))
          goto LAB_05fdad7c;
          pcVar11 = (char *)FUN_05fdfe80(lVar17,*(undefined8 *)(puVar19 + -2),*puVar19,0);
          if (*pcVar11 != '\0') {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
            iVar1 = *(int *)(pcVar11 + 4);
            plVar20 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18(*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar20 + (long)iVar1 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_05fde34c(&stack0x00000350,3,*piVar10,0);
              uVar12 = 0;
            }
            else {
              uVar12 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                    *piVar10,0);
            }
            uVar13 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar10,&stack0x000000f0
                                  ,uVar12);
            in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar13,0);
            uVar7 = in_stack_000000f0;
            lVar17 = *(long *)(lVar8 + 0x20);
            in_stack_000000e8 = 0;
            LeanTween__value(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xc);
            if (lVar17 == 0) goto LAB_05fdad7c;
            FUN_04dec6b0(lVar17,uVar7,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
          }
          uVar9 = uVar9 - 1;
          puVar19 = puVar19 + 3;
        } while (uVar9 != 0);
      }
      if (-1 < piVar10[8]) {
        lVar17 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4873 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
          DAT_06dc4873 = '\x01';
        }
        if (lVar17 == 0) break;
        iVar1 = piVar10[0xc];
        uVar3 = piVar10[0xd];
        lVar22 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
        ;
        lVar15 = *(long *)(lVar22 + 0x38);
        if (lVar15 == 0) {
          FUN_02dcfd74(lVar22);
          lVar15 = *(long *)(lVar22 + 0x38);
        }
        lVar17 = FUN_036ee4ec(*(undefined8 *)(lVar17 + 0x38),*(undefined8 *)(lVar15 + 0x10));
        if ((int)uVar3 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar3 != 0) {
          uVar9 = 0;
          do {
            if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
            puVar21 = (undefined8 *)(lVar17 + (long)iVar1 * 0xc + uVar9 * 0xc);
            in_stack_00000030 =
                 in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar21 + 1);
            lVar15 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar21,in_stack_00000030,0);
            if (*(int *)(lVar15 + 8) != *piVar10) {
              if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                 (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar15 == 0))
              goto LAB_05fdad7c;
              lVar15 = FUN_05fdfe80(lVar15,*puVar21,*(undefined4 *)(puVar21 + 1),0);
              iVar5 = *(int *)(lVar15 + 8);
              if (0 < iVar5) {
                iVar16 = 0;
                do {
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar15 == 0))
                  goto LAB_05fdad7c;
                  uVar12 = *puVar21;
                  if (DAT_06dc486d == '\0') {
                    FUN_02d965b8();
                    DAT_06dc486d = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
                  goto LAB_05fdad7c;
                  lVar22 = *(long *)(lVar22 + 0x20);
                  iVar2 = *(int *)(lVar15 + 0x28);
                  iVar4 = *(int *)(lVar15 + 0x2c);
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
                  if (lVar22 == 0) goto LAB_05fdad7c;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(puVar21 + 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  piVar14 = (int *)FUN_042c8e28(lVar22 + (long)(int)*(uint *)(puVar21 + 1) * 8 +
                                                0x20,iVar16 + ((int)((ulong)uVar12 >> 0x20) +
                                                              iVar2 * ((uint)uVar12 & 0xffff)) *
                                                              iVar4,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                               );
                  lVar15 = *(long *)(in_stack_00000048 + 0x30);
                  if (lVar15 == 0) goto LAB_05fdad7c;
                  iVar2 = *piVar14;
                  plVar20 = *(long **)(lVar15 + 0x18);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02dcfd18(*(long *)(*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                          + 0x20));
                    lVar15 = *(long *)(in_stack_00000048 + 0x30);
                  }
                  memcpy(&stack0x00000060,(void *)(*plVar20 + (long)iVar2 * 0x80),0x80);
                  uVar7 = in_stack_00000060;
                  uVar12 = FUN_05fdf5d4(lVar15,piVar10[8],in_stack_00000060,0);
                  uVar13 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                        piVar10,uVar12);
                  in_stack_000000e0 =
                       FUN_05362cb4(*(undefined8 *)
                                     Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                    ,uVar13,0);
                  lVar15 = *(long *)(lVar8 + 0x20);
                  in_stack_000000e8 = 0;
                  LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                  in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xc);
                  if (lVar15 == 0) goto LAB_05fdad7c;
                  FUN_04dec6b0(lVar15,uVar7,in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                  iVar16 = iVar16 + 1;
                } while (iVar5 != iVar16);
              }
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar3);
        }
      }
    }
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


