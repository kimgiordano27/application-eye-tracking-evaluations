/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_session_archive_query_end_t
ENTRY_POINT: 05fdaaf0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_session_archive_query_end_t
               (long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  int unaff_w19;
  int iVar13;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 *puVar14;
  ulong unaff_x23;
  undefined8 *puVar15;
  ulong uVar16;
  int *unaff_x26;
  undefined8 uVar17;
  long *plVar18;
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
  
  while( true ) {
    lVar8 = FUN_036ee4ec(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(param_1 + 0x10));
    if ((int)unaff_x23 < 0) {
      FUN_05508bc8(0);
    }
    else if ((int)unaff_x23 != 0) {
      uVar16 = 0;
      do {
        if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
        puVar15 = (undefined8 *)(lVar8 + (long)unaff_w19 * 0xc + uVar16 * 0xc);
        in_stack_00000030 = in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar15 + 1);
        lVar9 = FUN_05fdc35c(*(long *)(unaff_x28 + 0x30),*puVar15,in_stack_00000030,0);
        if (*(int *)(lVar9 + 8) != *unaff_x26) {
          if ((*(long *)(unaff_x28 + 0x30) == 0) ||
             (lVar9 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar9 == 0)) goto LAB_05fdad7c;
          lVar9 = FUN_05fdfe80(lVar9,*puVar15,*(undefined4 *)(puVar15 + 1),0);
          iVar4 = *(int *)(lVar9 + 8);
          if (0 < iVar4) {
            iVar13 = 0;
            do {
              if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                 (lVar9 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar9 == 0))
              goto LAB_05fdad7c;
              uVar17 = *puVar15;
              if (DAT_06dc486d == '\0') {
                FUN_02d965b8();
                DAT_06dc486d = '\x01';
              }
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if ((*(long *)(unaff_x28 + 0x30) == 0) ||
                 (lVar12 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar12 == 0))
              goto LAB_05fdad7c;
              lVar12 = *(long *)(lVar12 + 0x20);
              iVar1 = *(int *)(lVar9 + 0x28);
              iVar3 = *(int *)(lVar9 + 0x2c);
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
              if (lVar12 == 0) goto LAB_05fdad7c;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(puVar15 + 1)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              piVar10 = (int *)FUN_042c8e28(lVar12 + (long)(int)*(uint *)(puVar15 + 1) * 8 + 0x20,
                                            iVar13 + ((int)((ulong)uVar17 >> 0x20) +
                                                     iVar1 * ((uint)uVar17 & 0xffff)) * iVar3,
                                            *(undefined8 *)
                                             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                           );
              lVar9 = *(long *)(in_stack_00000048 + 0x30);
              if (lVar9 == 0) goto LAB_05fdad7c;
              iVar1 = *piVar10;
              plVar18 = *(long **)(lVar9 + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
                lVar9 = *(long *)(in_stack_00000048 + 0x30);
              }
              memcpy(&stack0x00000060,(void *)(*plVar18 + (long)iVar1 * 0x80),0x80);
              uVar6 = in_stack_00000060;
              uVar17 = FUN_05fdf5d4(lVar9,unaff_x26[8],in_stack_00000060,0);
              uVar11 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060,
                                    unaff_x26,uVar17);
              in_stack_000000e0 =
                   FUN_05362cb4(*(undefined8 *)
                                 Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                ,uVar11,0);
              lVar9 = *(long *)(unaff_x22 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar17 == 0xc);
              if (lVar9 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar9,uVar6,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
              iVar13 = iVar13 + 1;
              unaff_x28 = in_stack_00000048;
            } while (iVar4 != iVar13);
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != unaff_x23);
    }
    do {
      do {
        in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
        if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
        lVar8 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x18);
        if ((*(ushort *)
              (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1)
            == 0) {
          FUN_02dcfd18();
        }
        if (*(int *)(lVar8 + 8) <= in_stack_00000010._4_4_) {
          return;
        }
        if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
        unaff_x26 = (int *)FUN_042c6444(*(long *)(unaff_x28 + 0x30) + 0x18,in_stack_00000010._4_4_,
                                        *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__
                                       );
        if (((*in_stack_00000028 == 0) || (lVar8 = *(long *)(*in_stack_00000028 + 0x10), lVar8 == 0)
            ) || (FUN_041c332c(&stack0x00000350,lVar8,*unaff_x26,
                               *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
                 in_stack_00000388 == 0)) goto LAB_05fdad7c;
        unaff_x22 = *(long *)(in_stack_00000388 + 0x10);
      } while (unaff_x22 == 0);
      lVar8 = *(long *)(unaff_x28 + 0x30);
      if (DAT_06dc4872 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                    );
        DAT_06dc4872 = '\x01';
      }
      puVar5 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
      if (lVar8 == 0) goto LAB_05fdad7c;
      iVar4 = unaff_x26[10];
      uVar2 = unaff_x26[0xb];
      uVar16 = (ulong)uVar2;
      lVar12 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
      ;
      lVar9 = *(long *)(lVar12 + 0x38);
      if (lVar9 == 0) {
        FUN_02dcfd74(lVar12);
        lVar9 = *(long *)(lVar12 + 0x38);
      }
      lVar8 = FUN_036ee4d8(*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar9 + 0x10));
      if ((int)uVar2 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar2 != 0) {
        puVar14 = (undefined4 *)(lVar8 + (long)iVar4 * 0xc + 8);
        do {
          if ((*(long *)(unaff_x28 + 0x30) == 0) ||
             (lVar8 = *(long *)(*(long *)(unaff_x28 + 0x30) + 0x10), lVar8 == 0)) goto LAB_05fdad7c;
          pcVar7 = (char *)FUN_05fdfe80(lVar8,*(undefined8 *)(puVar14 + -2),*puVar14,0);
          if (*pcVar7 != '\0') {
            if (*(long *)(unaff_x28 + 0x30) == 0) goto LAB_05fdad7c;
            iVar4 = *(int *)(pcVar7 + 4);
            plVar18 = *(long **)(*(long *)(unaff_x28 + 0x30) + 0x18);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18(*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20));
            }
            memcpy(&stack0x000000f0,(void *)(*plVar18 + (long)iVar4 * 0x80),0x80);
            if (in_stack_00000110 < 0) {
              FUN_05fde34c(&stack0x00000350,3,*unaff_x26,0);
              uVar17 = 0;
            }
            else {
              uVar17 = FUN_05fdf5d4(*(undefined8 *)(unaff_x28 + 0x30),in_stack_00000110,*unaff_x26,0
                                   );
            }
            uVar11 = FUN_05fd80a8(*(undefined8 *)(unaff_x28 + 0x30),unaff_x26,&stack0x000000f0,
                                  uVar17);
            in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar5,uVar11,0);
            uVar6 = in_stack_000000f0;
            lVar8 = *(long *)(unaff_x22 + 0x20);
            in_stack_000000e8 = 0;
            LeanTween__value(&stack0x000000e0,in_stack_000000e0);
            in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar17 == 0xc);
            if (lVar8 == 0) goto LAB_05fdad7c;
            FUN_04dec6b0(lVar8,uVar6,in_stack_000000e0,in_stack_000000e8,
                         *(undefined8 *)
                          Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            unaff_x28 = in_stack_00000048;
          }
          uVar16 = uVar16 - 1;
          puVar14 = puVar14 + 3;
        } while (uVar16 != 0);
      }
    } while (unaff_x26[8] < 0);
    unaff_x20 = *(long *)(unaff_x28 + 0x30);
    if (DAT_06dc4873 == '\0') {
      FUN_02d965b8(
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                  );
      DAT_06dc4873 = '\x01';
    }
    if (unaff_x20 == 0) break;
    unaff_w19 = unaff_x26[0xc];
    unaff_x23 = (ulong)(uint)unaff_x26[0xd];
    lVar8 = *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
    ;
    param_1 = *(long *)(lVar8 + 0x38);
    if (param_1 == 0) {
      FUN_02dcfd74(lVar8);
      param_1 = *(long *)(lVar8 + 0x38);
    }
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


