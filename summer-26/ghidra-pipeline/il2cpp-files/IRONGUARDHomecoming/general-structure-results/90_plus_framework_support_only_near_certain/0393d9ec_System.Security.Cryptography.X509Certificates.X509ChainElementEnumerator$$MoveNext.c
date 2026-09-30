/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator$$MoveNext
ENTRY_POINT: 0393d9ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0393e32c) */
/* WARNING: Removing unreachable block (ram,0x0393dee4) */
/* WARNING: Removing unreachable block (ram,0x0393e340) */
/* WARNING: Removing unreachable block (ram,0x0393e34c) */
/* WARNING: Removing unreachable block (ram,0x0393e108) */

void System_Security_Cryptography_X509Certificates_X509ChainElementEnumerator__MoveNext
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar10;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  undefined8 in_stack_00000098;
  
  lVar2 = FUN_0390b368(param_1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(lVar2,0);
  puVar1 = StringLiteral_3859;
  lVar3 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0391d880(lVar2,*(undefined4 *)(lVar3 + 0x28),0);
  lVar2 = FUN_0390b368();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(lVar2,0);
  lVar3 = FUN_02e9542c(*(undefined8 *)puVar1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0391d844(lVar2,*(undefined4 *)(lVar3 + 0x24),0);
  lVar2 = FUN_0390b368();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(lVar2,0);
  lVar3 = FUN_02e9542c(*(undefined8 *)puVar1);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = FUN_038d6930(lVar3,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar4,uVar4);
  }
  FUN_0391d75c(lVar2,uVar4,0);
  puVar1 = StringLiteral_3884;
  plVar5 = (long *)thunk_FUN_01f116d0();
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0393dcc8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_0393dcc8:
    lVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar2 != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = FUN_0390b368();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d334(lVar3,lVar2,0);
    }
  }
  if ((unaff_x24 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x21 + 8);
    if (*(int *)(*(long *)StringLiteral_3888 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_0394efcc(uVar4,0);
    puVar1 = StringLiteral_3886;
    if ((uVar8 & 1) == 0) {
      lVar2 = thunk_FUN_01f116d0(*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)StringLiteral_3886);
      if (lVar2 == 0) {
        if (*(long *)(unaff_x21 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = thunk_FUN_01ecaf38(*(long *)(unaff_x21 + 8),0);
        puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        uVar10 = *(undefined8 *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10,0);
        uVar8 = FUN_03583338(uVar4,uVar10,0);
        if ((uVar8 & 1) != 0) {
          lVar2 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar2 + 0x20) =
               *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<ValueOutput,_int>__;
          thunk_FUN_01f51358();
          if (*(long *)(unaff_x21 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = thunk_FUN_01ecaf38(*(long *)(unaff_x21 + 8),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_0392f420(uVar4);
          if (*(uint *)(lVar2 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar2 + 0x28) = uVar4;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar2 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)StringLiteral_3890;
          thunk_FUN_01f51358();
          uVar4 = *(undefined8 *)StringLiteral_3885;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03579868(uVar4,0);
          uVar4 = FUN_0392f420();
          if (*(uint *)(lVar2 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar2 + 0x38) = uVar4;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar2 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)StringLiteral_3889;
          thunk_FUN_01f51358();
          uVar4 = FUN_0340efe8(lVar2,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar4,0);
        }
      }
      else {
        lVar2 = *(long *)(unaff_x21 + 8);
        if (((lVar2 != unaff_x20) || (*(long *)(unaff_x21 + 0xc) == 0)) ||
           (*(int *)(*(long *)(unaff_x21 + 0xc) + 0x18) < 1)) {
          lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)puVar1);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar3 = *(long *)puVar1;
          plVar5 = (long *)thunk_FUN_01f116d0(lVar2,lVar3);
          lVar2 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar3) {
                puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0393e218;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar3,0);
LAB_0393e218:
          (*(code *)*puVar6)(&stack0x00000010,plVar5,puVar6[1]);
          in_stack_00000058 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000010;
          in_stack_00000068 = in_stack_00000028;
          in_stack_00000060 = in_stack_00000020;
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          if (((in_stack_00000018 == 0) || (in_stack_00000048 == 0)) || (in_stack_00000040 == 0)) {
            lVar2 = *unaff_x28;
LAB_0393e294:
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar2);
            }
            FUN_0393d6d0();
          }
          else {
            lVar2 = *unaff_x28;
            if (in_stack_00000020 == 0) goto LAB_0393e294;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar2);
            }
            FUN_0393d6d0();
          }
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0393e72c();
          goto LAB_0393e19c;
        }
      }
    }
    unaff_x25 = *(undefined8 *)(unaff_x21 + 4);
  }
  in_stack_00000098 = unaff_x25;
  if (*unaff_x21 == 2) {
    plVar5 = (long *)thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3887);
    FUN_038efcd0();
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03937bf8(plVar7[3],in_stack_00000098);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(unaff_x22 + 0x50) = plVar7[3];
    thunk_FUN_01f51358();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_038f05a8(plVar5,*(undefined8 *)(unaff_x21 + 0xe),0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e9c4();
    lVar2 = *plVar7;
    uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0393decc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393decc:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0393e0f0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393e0f0:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  else if ((*unaff_x23 == 0) || (*(long *)(*unaff_x23 + 0x18) == 0)) {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393f988();
  }
  else {
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393b0d8();
  }
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0393e72c();
LAB_0393e19c:
  if (unaff_x19 != 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    FUN_029da814();
  }
  return;
}


