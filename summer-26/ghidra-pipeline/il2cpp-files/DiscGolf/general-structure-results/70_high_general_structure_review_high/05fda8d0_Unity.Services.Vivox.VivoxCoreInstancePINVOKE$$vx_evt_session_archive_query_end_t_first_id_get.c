/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_first_id_get
ENTRY_POINT: 05fda8d0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_first_id_get
               (undefined1 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *unaff_x21;
  long lVar15;
  undefined4 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint *unaff_x26;
  long lVar20;
  long unaff_x28;
  undefined8 in_stack_00000010;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  long in_stack_00000388;
  
  while (FUN_041c332c(param_1,param_2,param_3,param_4), in_stack_00000388 != 0) {
    lVar15 = *(long *)(in_stack_00000388 + 0x10);
    if (lVar15 != 0) {
      lVar14 = *(long *)(unaff_x28 + 0x30);
      if (DAT_06dc4872 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                    );
        DAT_06dc4872 = '\x01';
      }
      puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
      if (lVar14 == 0) break;
      uVar1 = unaff_x26[10];
      uVar3 = unaff_x26[0xb];
      uVar19 = (ulong)uVar3;
      lVar20 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
      ;
      lVar12 = *(long *)(lVar20 + 0x38);
      if (lVar12 == 0) {
        FUN_02dcfd74(lVar20);
        lVar12 = *(long *)(lVar20 + 0x38);
      }
      lVar14 = FUN_036ee4d8(*(undefined8 *)(lVar14 + 0x30),*(undefined8 *)(lVar12 + 0x10));
      if ((int)uVar3 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar3 != 0) {
        puVar16 = (undefined4 *)(lVar14 + (long)(int)uVar1 * 0xc + 8);
        do {
          if ((*(long *)(unaff_x28 + 0x30) == 0) ||
             (lVar14 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar14 == 0))
          goto LAB_05fdad7c;
          pcVar8 = (char *)FUN_05fdfe80(lVar14,*(undefined8 *)(puVar16 + -2),*puVar16,0);
          if (*pcVar8 != '\0') {
            if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
            iVar5 = *(int *)(pcVar8 + 4);
            plVar17 = *(long **)(*(long *)(unaff_x28 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18(*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar17 + (long)iVar5 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_05fde34c(&stack0x00000350,3,*unaff_x26,0);
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_05fdf5d4(*(undefined8 *)(unaff_x28 + 0x30),in_stack_00000110,*unaff_x26,0)
              ;
            }
            uVar10 = FUN_05fd80a8(*(undefined8 *)(unaff_x28 + 0x30),unaff_x26,&stack0x000000f0,uVar9
                                 );
            in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar10,0);
            uVar7 = in_stack_000000f0;
            lVar14 = *(long *)(lVar15 + 0x20);
            in_stack_000000e8 = 0;
            LeanTween__value(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar9 == 0xc);
            if (lVar14 == 0) goto LAB_05fdad7c;
            FUN_04dec6b0(lVar14,uVar7,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            unaff_x28 = in_stack_00000048;
          }
          uVar19 = uVar19 - 1;
          puVar16 = puVar16 + 3;
        } while (uVar19 != 0);
      }
      if (-1 < (int)unaff_x26[8]) {
        lVar14 = *(long *)(unaff_x28 + 0x30);
        if (DAT_06dc4873 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                      );
          DAT_06dc4873 = '\x01';
        }
        if (lVar14 == 0) break;
        uVar1 = unaff_x26[0xc];
        uVar3 = unaff_x26[0xd];
        lVar20 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
        ;
        lVar12 = *(long *)(lVar20 + 0x38);
        if (lVar12 == 0) {
          FUN_02dcfd74(lVar20);
          lVar12 = *(long *)(lVar20 + 0x38);
        }
        lVar14 = FUN_036ee4ec(*(undefined8 *)(lVar14 + 0x38),*(undefined8 *)(lVar12 + 0x10));
        if ((int)uVar3 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar3 != 0) {
          uVar19 = 0;
          do {
            if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
            puVar18 = (undefined8 *)(lVar14 + (long)(int)uVar1 * 0xc + uVar19 * 0xc);
            in_stack_00000030 =
                 in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar18 + 1);
            lVar12 = FUN_05fdc35c(*(long *)(unaff_x28 + 0x30),*puVar18,in_stack_00000030,0);
            if (*(uint *)(lVar12 + 8) != *unaff_x26) {
              if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                 (lVar12 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar12 == 0))
              goto LAB_05fdad7c;
              lVar12 = FUN_05fdfe80(lVar12,*puVar18,*(undefined4 *)(puVar18 + 1),0);
              iVar5 = *(int *)(lVar12 + 8);
              if (0 < iVar5) {
                iVar13 = 0;
                do {
                  if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                     (lVar12 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar12 == 0))
                  goto LAB_05fdad7c;
                  uVar9 = *puVar18;
                  if (DAT_06dc486d == '\0') {
                    FUN_02d965b8();
                    DAT_06dc486d = '\x01';
                  }
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                     (lVar20 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar20 == 0))
                  goto LAB_05fdad7c;
                  lVar20 = *(long *)(lVar20 + 0x20);
                  iVar2 = *(int *)(lVar12 + 0x28);
                  iVar4 = *(int *)(lVar12 + 0x2c);
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
                  if (lVar20 == 0) goto LAB_05fdad7c;
                  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(puVar18 + 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  piVar11 = (int *)FUN_042c8e28(lVar20 + (long)(int)*(uint *)(puVar18 + 1) * 8 +
                                                0x20,iVar13 + ((int)((ulong)uVar9 >> 0x20) +
                                                              iVar2 * ((uint)uVar9 & 0xffff)) *
                                                              iVar4,
                                                *(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                               );
                  lVar12 = *(long *)(in_stack_00000048 + 0x30);
                  if (lVar12 == 0) goto LAB_05fdad7c;
                  iVar2 = *piVar11;
                  plVar17 = *(long **)(lVar12 + 0x18);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02dcfd18(*(long *)(*(long *)
                                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                          + 0x20));
                    lVar12 = *(long *)(in_stack_00000048 + 0x30);
                  }
                  memcpy(&stack0x00000060,(void *)(*plVar17 + (long)iVar2 * 0x80),0x80);
                  uVar7 = in_stack_00000060;
                  uVar9 = FUN_05fdf5d4(lVar12,unaff_x26[8],in_stack_00000060,0);
                  uVar10 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                        unaff_x26,uVar9);
                  in_stack_000000e0 =
                       FUN_05362cb4(*(undefined8 *)
                                     Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                    ,uVar10,0);
                  lVar12 = *(long *)(lVar15 + 0x20);
                  in_stack_000000e8 = 0;
                  LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                  in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar9 == 0xc);
                  if (lVar12 == 0) goto LAB_05fdad7c;
                  FUN_04dec6b0(lVar12,uVar7,in_stack_000000e0,in_stack_000000e8,
                               *(undefined8 *)
                                Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                  iVar13 = iVar13 + 1;
                  unaff_x28 = in_stack_00000048;
                } while (iVar5 != iVar13);
              }
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar3);
        }
      }
    }
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
    if (*(long *)(unaff_x28 + 0x30) == 0) break;
    lVar15 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar15 + 8) <= in_stack_00000010._4_4_) {
      return;
    }
    if (*(long *)(unaff_x28 + 0x30) == 0) break;
    unaff_x26 = (uint *)FUN_042c6444(*(long *)(unaff_x28 + 0x30) + 0x18,in_stack_00000010._4_4_,
                                     *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    if ((*in_stack_00000028 == 0) || (param_2 = *(long *)(*in_stack_00000028 + 0x10), param_2 == 0))
    break;
    param_3 = (ulong)*unaff_x26;
    param_4 = *(undefined8 *)Method_AssetInputExample_DoPressedThing__;
    param_1 = &stack0x00000350;
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


