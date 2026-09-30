/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_first_index_get
ENTRY_POINT: 05fda9f8
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_first_index_get
               (undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  ulong unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  undefined4 *unaff_x23;
  undefined8 *puVar12;
  undefined8 *unaff_x25;
  ulong uVar13;
  uint *unaff_x26;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long unaff_x28;
  long lVar17;
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
  
code_r0x05fda9f8:
  FUN_05fde34c(param_1,3,param_3,0);
  uVar14 = 0;
  do {
    uVar8 = FUN_05fd80a8(*(undefined8 *)(unaff_x28 + 0x30),unaff_x26,&stack0x000000f0,uVar14);
    in_stack_000000e0 = FUN_05362cb4(*unaff_x25,uVar8,0);
    uVar6 = in_stack_000000f0;
    lVar17 = *(long *)(unaff_x22 + 0x20);
    in_stack_000000e8 = 0;
    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xc);
    if (lVar17 == 0) {
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04dec6b0(lVar17,uVar6,in_stack_000000e0,in_stack_000000e8,
                 *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
    do {
      unaff_x19 = unaff_x19 - 1;
      unaff_x23 = unaff_x23 + 3;
      if (unaff_x19 == 0) {
        do {
          while( true ) {
            if (-1 < (int)unaff_x26[8]) {
              lVar17 = *(long *)(in_stack_00000048 + 0x30);
              if (DAT_06dc4873 == '\0') {
                FUN_02d965b8(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                            );
                DAT_06dc4873 = '\x01';
              }
              if (lVar17 == 0) goto LAB_05fdad7c;
              uVar1 = unaff_x26[0xc];
              uVar3 = unaff_x26[0xd];
              lVar15 = *(long *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
              ;
              lVar10 = *(long *)(lVar15 + 0x38);
              if (lVar10 == 0) {
                FUN_02dcfd74(lVar15);
                lVar10 = *(long *)(lVar15 + 0x38);
              }
              lVar17 = FUN_036ee4ec(*(undefined8 *)(lVar17 + 0x38),*(undefined8 *)(lVar10 + 0x10));
              if ((int)uVar3 < 0) {
                FUN_05508bc8(0);
              }
              else if (uVar3 != 0) {
                uVar13 = 0;
                do {
                  if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                  puVar12 = (undefined8 *)(lVar17 + (long)(int)uVar1 * 0xc + uVar13 * 0xc);
                  in_stack_00000030 =
                       in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
                  lVar10 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                        in_stack_00000030,0);
                  if (*(uint *)(lVar10 + 8) != *unaff_x26) {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar10 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar10 == 0)
                       ) goto LAB_05fdad7c;
                    lVar10 = FUN_05fdfe80(lVar10,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                    iVar5 = *(int *)(lVar10 + 8);
                    if (0 < iVar5) {
                      iVar11 = 0;
                      do {
                        if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                           (lVar10 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10),
                           lVar10 == 0)) goto LAB_05fdad7c;
                        uVar14 = *puVar12;
                        if (DAT_06dc486d == '\0') {
                          FUN_02d965b8();
                          DAT_06dc486d = '\x01';
                        }
                        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                           (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10),
                           lVar15 == 0)) goto LAB_05fdad7c;
                        lVar15 = *(long *)(lVar15 + 0x20);
                        iVar2 = *(int *)(lVar10 + 0x28);
                        iVar4 = *(int *)(lVar10 + 0x2c);
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
                        if (lVar15 == 0) goto LAB_05fdad7c;
                        if (*(uint *)(lVar15 + 0x18) <= *(uint *)(puVar12 + 1)) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d96868();
                        }
                        piVar9 = (int *)FUN_042c8e28(lVar15 + (long)(int)*(uint *)(puVar12 + 1) * 8
                                                     + 0x20,iVar11 + ((int)((ulong)uVar14 >> 0x20) +
                                                                     iVar2 * ((uint)uVar14 & 0xffff)
                                                                     ) * iVar4,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                  );
                        lVar10 = *(long *)(in_stack_00000048 + 0x30);
                        if (lVar10 == 0) goto LAB_05fdad7c;
                        iVar2 = *piVar9;
                        plVar16 = *(long **)(lVar10 + 0x18);
                        if ((*(ushort *)
                              (*(long *)(*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                        + 0x20) + 0x135) & 1) == 0) {
                          FUN_02dcfd18(*(long *)(*(long *)
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                                + 0x20));
                          lVar10 = *(long *)(in_stack_00000048 + 0x30);
                        }
                        memcpy(&stack0x00000060,(void *)(*plVar16 + (long)iVar2 * 0x80),0x80);
                        uVar6 = in_stack_00000060;
                        uVar14 = FUN_05fdf5d4(lVar10,unaff_x26[8],in_stack_00000060,0);
                        uVar8 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),
                                             &stack0x00000060,unaff_x26,uVar14);
                        in_stack_000000e0 =
                             FUN_05362cb4(*(undefined8 *)
                                           Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                          ,uVar8,0);
                        lVar10 = *(long *)(unaff_x22 + 0x20);
                        in_stack_000000e8 = 0;
                        LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                        in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xc);
                        if (lVar10 == 0) goto LAB_05fdad7c;
                        FUN_04dec6b0(lVar10,uVar6,in_stack_000000e0,in_stack_000000e8,
                                     *(undefined8 *)
                                      Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__
                                    );
                        iVar11 = iVar11 + 1;
                      } while (iVar5 != iVar11);
                    }
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar3);
              }
            }
            do {
              in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              lVar17 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
                  & 1) == 0) {
                FUN_02dcfd18();
              }
              if (*(int *)(lVar17 + 8) <= in_stack_00000010._4_4_) {
                return;
              }
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              unaff_x26 = (uint *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,
                                               in_stack_00000010._4_4_,
                                               *(undefined8 *)
                                                Method_Mono_Security_ASN1Convert_ToDateTime__);
              if (((*in_stack_00000028 == 0) ||
                  (lVar17 = *(long *)(*in_stack_00000028 + 0x10), lVar17 == 0)) ||
                 (FUN_041c332c(&stack0x00000350,lVar17,*unaff_x26,
                               *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
                 in_stack_00000388 == 0)) goto LAB_05fdad7c;
              unaff_x22 = *(long *)(in_stack_00000388 + 0x10);
            } while (unaff_x22 == 0);
            lVar17 = *(long *)(in_stack_00000048 + 0x30);
            if (DAT_06dc4872 == '\0') {
              FUN_02d965b8(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                          );
              DAT_06dc4872 = '\x01';
            }
            unaff_x25 = (undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__
            ;
            if (lVar17 == 0) goto LAB_05fdad7c;
            uVar1 = unaff_x26[10];
            uVar3 = unaff_x26[0xb];
            unaff_x19 = (ulong)uVar3;
            lVar15 = *(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
            ;
            lVar10 = *(long *)(lVar15 + 0x38);
            if (lVar10 == 0) {
              FUN_02dcfd74(lVar15);
              lVar10 = *(long *)(lVar15 + 0x38);
            }
            lVar17 = FUN_036ee4d8(*(undefined8 *)(lVar17 + 0x30),*(undefined8 *)(lVar10 + 0x10));
            if (-1 < (int)uVar3) break;
            FUN_05508bc8(0);
          }
        } while (uVar3 == 0);
        unaff_x23 = (undefined4 *)(lVar17 + (long)(int)uVar1 * 0xc + 8);
      }
      if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
         (lVar17 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar17 == 0))
      goto LAB_05fdad7c;
      pcVar7 = (char *)FUN_05fdfe80(lVar17,*(undefined8 *)(unaff_x23 + -2),*unaff_x23,0);
    } while (*pcVar7 == '\0');
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
    iVar5 = *(int *)(pcVar7 + 4);
    plVar16 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18(*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20));
    }
    memcpy(&stack0x000000f0,(void *)(*plVar16 + (long)iVar5 * 0x80),0x80);
    unaff_x28 = in_stack_00000048;
    if (in_stack_00000110 < 0) break;
    uVar14 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,*unaff_x26,0);
  } while( true );
  param_3 = (ulong)*unaff_x26;
  param_1 = &stack0x00000350;
  goto code_r0x05fda9f8;
}


