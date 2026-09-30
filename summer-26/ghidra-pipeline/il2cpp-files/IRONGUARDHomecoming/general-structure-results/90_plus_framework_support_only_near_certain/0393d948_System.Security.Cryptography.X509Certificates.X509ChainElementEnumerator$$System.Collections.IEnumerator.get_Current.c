/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0393d948
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0393e32c) */
/* WARNING: Removing unreachable block (ram,0x0393dee4) */
/* WARNING: Removing unreachable block (ram,0x0393e340) */
/* WARNING: Removing unreachable block (ram,0x0393e34c) */
/* WARNING: Removing unreachable block (ram,0x0393e108) */

void System_Security_Cryptography_X509Certificates_X509ChainElementEnumerator__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 uVar9;
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
  
  puVar1 = StringLiteral_3884;
  plVar2 = (long *)thunk_FUN_01f116d0();
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0393dcc8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_0393dcc8:
    lVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if (lVar6 != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = FUN_0390b368();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d334(lVar4,lVar6,0);
    }
  }
  if ((unaff_x24 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x21 + 8);
    if (*(int *)(*(long *)StringLiteral_3888 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_0394efcc(uVar9,0);
    puVar1 = StringLiteral_3886;
    if ((uVar7 & 1) == 0) {
      lVar6 = thunk_FUN_01f116d0(*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)StringLiteral_3886);
      if (lVar6 == 0) {
        if (*(long *)(unaff_x21 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = thunk_FUN_01ecaf38(*(long *)(unaff_x21 + 8),0);
        puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        uVar10 = *(undefined8 *)
                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseUpEvent>__
        ;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03579868(uVar10,0);
        uVar7 = FUN_03583338(uVar9,uVar10,0);
        if ((uVar7 & 1) != 0) {
          lVar6 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar6 + 0x20) =
               *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<ValueOutput,_int>__;
          thunk_FUN_01f51358();
          if (*(long *)(unaff_x21 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = thunk_FUN_01ecaf38(*(long *)(unaff_x21 + 8),0);
          if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_0392f420(uVar9);
          if (*(uint *)(lVar6 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar6 + 0x28) = uVar9;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar6 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)StringLiteral_3890;
          thunk_FUN_01f51358();
          uVar9 = *(undefined8 *)StringLiteral_3885;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03579868(uVar9,0);
          uVar9 = FUN_0392f420();
          if (*(uint *)(lVar6 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar6 + 0x38) = uVar9;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar6 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)StringLiteral_3889;
          thunk_FUN_01f51358();
          uVar9 = FUN_0340efe8(lVar6,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar9,0);
        }
      }
      else {
        lVar6 = *(long *)(unaff_x21 + 8);
        if (((lVar6 != unaff_x20) || (*(long *)(unaff_x21 + 0xc) == 0)) ||
           (*(int *)(*(long *)(unaff_x21 + 0xc) + 0x18) < 1)) {
          lVar4 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)puVar1);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar4 = *(long *)puVar1;
          plVar2 = (long *)thunk_FUN_01f116d0(lVar6,lVar4);
          lVar6 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0393e218;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar4,0);
LAB_0393e218:
          (*(code *)*puVar3)(&stack0x00000010,plVar2,puVar3[1]);
          in_stack_00000058 = in_stack_00000018;
          in_stack_00000050 = in_stack_00000010;
          in_stack_00000068 = in_stack_00000028;
          in_stack_00000060 = in_stack_00000020;
          in_stack_00000078 = in_stack_00000038;
          in_stack_00000070 = in_stack_00000030;
          in_stack_00000088 = in_stack_00000048;
          in_stack_00000080 = in_stack_00000040;
          if (((in_stack_00000018 == 0) || (in_stack_00000048 == 0)) || (in_stack_00000040 == 0)) {
            lVar6 = *unaff_x28;
LAB_0393e294:
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar6);
            }
            FUN_0393d6d0();
          }
          else {
            lVar6 = *unaff_x28;
            if (in_stack_00000020 == 0) goto LAB_0393e294;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(lVar6);
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
    plVar2 = (long *)thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3887);
    FUN_038efcd0();
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03937bf8(plVar5[3],in_stack_00000098);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(unaff_x22 + 0x50) = plVar5[3];
    thunk_FUN_01f51358();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_038f05a8(plVar2,*(undefined8 *)(unaff_x21 + 0xe),0);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0393e9c4();
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0393decc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393decc:
    (*(code *)*puVar3)(plVar5,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0393e0f0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393e0f0:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
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


