/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_status_code_get
ENTRY_POINT: 05fda854
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_status_code_get
               (long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  undefined **in_x9;
  int iVar14;
  long lVar15;
  int unaff_w20;
  long lVar16;
  long *unaff_x21;
  undefined4 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long unaff_x28;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  long in_stack_00000388;
  
  do {
    lVar15 = *(long *)(param_1 + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)in_x9[0x2d] + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar15 + 8) <= unaff_w20) {
      return;
    }
    if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
    piVar8 = (int *)FUN_042c6444(*(long *)(unaff_x28 + 0x30) + 0x18,unaff_w20,
                                 *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    if (((*in_stack_00000028 == 0) || (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0))
       || (FUN_041c332c(&stack0x00000350,lVar15,*piVar8,
                        *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
          in_stack_00000388 == 0)) goto LAB_05fdad7c;
    lVar15 = *(long *)(in_stack_00000388 + 0x10);
    if (lVar15 != 0) {
      lVar16 = *(long *)(unaff_x28 + 0x30);
      if (DAT_06dc4872 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                    );
        DAT_06dc4872 = '\x01';
      }
      puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
      if (lVar16 == 0) {
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar1 = piVar8[10];
      uVar3 = piVar8[0xb];
      uVar20 = (ulong)uVar3;
      lVar21 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
      ;
      lVar13 = *(long *)(lVar21 + 0x38);
      if (lVar13 == 0) {
        FUN_02dcfd74(lVar21);
        lVar13 = *(long *)(lVar21 + 0x38);
      }
      lVar16 = FUN_036ee4d8(*(undefined8 *)(lVar16 + 0x30),*(undefined8 *)(lVar13 + 0x10));
      if ((int)uVar3 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar3 != 0) {
        puVar17 = (undefined4 *)(lVar16 + (long)iVar1 * 0xc + 8);
        do {
          if ((*(long *)(unaff_x28 + 0x30) == 0) ||
             (lVar16 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar16 == 0))
          goto LAB_05fdad7c;
          pcVar9 = (char *)FUN_05fdfe80(lVar16,*(undefined8 *)(puVar17 + -2),*puVar17,0);
          if (*pcVar9 != '\0') {
            if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
            iVar1 = *(int *)(pcVar9 + 4);
            plVar18 = *(long **)(*(long *)(unaff_x28 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18(*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar18 + (long)iVar1 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_05fde34c(&stack0x00000350,3,*piVar8,0);
              uVar10 = 0;
            }
            else {
              uVar10 = FUN_05fdf5d4(*(undefined8 *)(unaff_x28 + 0x30),in_stack_00000110,*piVar8,0);
            }
            uVar11 = FUN_05fd80a8(*(undefined8 *)(unaff_x28 + 0x30),piVar8,&stack0x000000f0,uVar10);
            in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar11,0);
            uVar7 = in_stack_000000f0;
            lVar16 = *(long *)(lVar15 + 0x20);
            in_stack_000000e8 = 0;
            LeanTween__value(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar10 == 0xc);
            if (lVar16 == 0) goto LAB_05fdad7c;
            FUN_04dec6b0(lVar16,uVar7,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            unaff_x28 = in_stack_00000048;
          }
          uVar20 = uVar20 - 1;
          puVar17 = puVar17 + 3;
        } while (uVar20 != 0);
      }
      if (-1 < piVar8[8]) {
        lVar16 = *(long *)(unaff_x28 + 0x30);
        if (DAT_06dc4873 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
          DAT_06dc4873 = '\x01';
        }
        if (lVar16 == 0) goto LAB_05fdad7c;
        iVar1 = piVar8[0xc];
        uVar3 = piVar8[0xd];
        lVar21 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
        ;
        lVar13 = *(long *)(lVar21 + 0x38);
        if (lVar13 == 0) {
          FUN_02dcfd74(lVar21);
          lVar13 = *(long *)(lVar21 + 0x38);
        }
        lVar16 = FUN_036ee4ec(*(undefined8 *)(lVar16 + 0x38),*(undefined8 *)(lVar13 + 0x10));
        if ((int)uVar3 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar3 != 0) {
          uVar20 = 0;
          do {
            if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
            puVar19 = (undefined8 *)(lVar16 + (long)iVar1 * 0xc + uVar20 * 0xc);
            in_stack_00000030 =
                 in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar19 + 1);
            lVar13 = FUN_05fdc35c(*(long *)(unaff_x28 + 0x30),*puVar19,in_stack_00000030,0);
            if (*(int *)(lVar13 + 8) != *piVar8) {
              if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                 (lVar13 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar13 == 0))
              goto LAB_05fdad7c;
              lVar13 = FUN_05fdfe80(lVar13,*puVar19,*(undefined4 *)(puVar19 + 1),0);
              iVar5 = *(int *)(lVar13 + 8);
              if (0 < iVar5) {
                iVar14 = 0;
                do {
                  if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                     (lVar13 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar13 == 0))
                  goto LAB_05fdad7c;
                  uVar10 = *puVar19;
                  if (DAT_06dc486d == '\0') {
                    FUN_02d965b8();
                    DAT_06dc486d = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                     (lVar21 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar21 == 0))
                  goto LAB_05fdad7c;
                  lVar21 = *(long *)(lVar21 + 0x20);
                  iVar2 = *(int *)(lVar13 + 0x28);
                  iVar4 = *(int *)(lVar13 + 0x2c);
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
                  if (lVar21 == 0) goto LAB_05fdad7c;
                  if (*(uint *)(lVar21 + 0x18) <= *(uint *)(puVar19 + 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  piVar12 = (int *)FUN_042c8e28(lVar21 + (long)(int)*(uint *)(puVar19 + 1) * 8 +
                                                0x20,iVar14 + ((int)((ulong)uVar10 >> 0x20) +
                                                              iVar2 * ((uint)uVar10 & 0xffff)) *
                                                              iVar4,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                               );
                  lVar13 = *(long *)(in_stack_00000048 + 0x30);
                  if (lVar13 == 0) goto LAB_05fdad7c;
                  iVar2 = *piVar12;
                  plVar18 = *(long **)(lVar13 + 0x18);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02dcfd18(*(long *)(*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                          + 0x20));
                    lVar13 = *(long *)(in_stack_00000048 + 0x30);
                  }
                  memcpy(&stack0x00000060,(void *)(*plVar18 + (long)iVar2 * 0x80),0x80);
                  uVar7 = in_stack_00000060;
                  uVar10 = FUN_05fdf5d4(lVar13,piVar8[8],in_stack_00000060,0);
                  uVar11 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                        piVar8,uVar10);
                  in_stack_000000e0 =
                       FUN_05362cb4(*(undefined8 *)
                                     Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                    ,uVar11,0);
                  lVar13 = *(long *)(lVar15 + 0x20);
                  in_stack_000000e8 = 0;
                  LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                  in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar10 == 0xc);
                  if (lVar13 == 0) goto LAB_05fdad7c;
                  FUN_04dec6b0(lVar13,uVar7,in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                  iVar14 = iVar14 + 1;
                  unaff_x28 = in_stack_00000048;
                } while (iVar5 != iVar14);
              }
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar3);
        }
      }
    }
    param_1 = *(long *)(unaff_x28 + 0x30);
    unaff_w20 = unaff_w20 + 1;
    if (param_1 == 0) goto LAB_05fdad7c;
    in_x9 = &
            Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TapGesture>__
    ;
  } while( true );
}


