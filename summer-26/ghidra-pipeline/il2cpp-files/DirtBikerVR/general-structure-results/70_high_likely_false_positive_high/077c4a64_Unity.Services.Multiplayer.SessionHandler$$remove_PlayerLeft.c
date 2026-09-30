/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler$$remove_PlayerLeft
ENTRY_POINT: 077c4a64
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_SessionHandler__remove_PlayerLeft(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((DAT_089870c5 & 1) == 0) {
    FUN_03a8a718(UnityEngine_UIElements_BaseField<bool>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_BaseField<Bounds>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(System_Action<RealtimeRefData,_StreamContext>_TypeInfo);
    FUN_03a8a718(System_ArraySegment<float>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_BaseField<BoundsInt>_TypeInfo);
    FUN_03a8a718(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                );
    FUN_03a8a718(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
                );
    FUN_03a8a718(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_BaseField<Enum>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_BaseField<int>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_BaseField<string>_TypeInfo);
    DAT_089870c5 = 1;
  }
  uVar1 = *param_1;
  lVar9 = *(long *)(param_1 + 8);
  lVar10 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (2 < uVar1) {
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UIElements_BaseField<int>_TypeInfo);
    FUN_0679343c(uVar3,0);
    *(undefined8 *)(param_1 + 0xe) = uVar3;
    thunk_FUN_03afed3c(param_1 + 0xe,uVar3);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if ((*(long *)(lVar9 + 0x18) == 0) || (*(long *)(lVar9 + 0x10) == 0)) {
      lVar10 = *(long *)(lVar9 + 0xd8);
      if (lVar10 != 0) {
        uVar3 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
        uVar11 = thunk_FUN_03af1434(
                                   UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_TypeInfo
                                   );
        uVar3 = FUN_03522c98(4,uVar3,lVar10,uVar11);
        uVar11 = thunk_FUN_03af1434(UnityEngine_UIElements_BaseField<Vector2>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar3,uVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UIElements_BaseField<BoundsInt>_TypeInfo)
    ;
    FUN_0679343c(lVar10,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    thunk_FUN_03afed3c();
  }
  puVar2 = PTR_DAT_08488b88;
  if (uVar1 == 0) {
    in_stack_00000028 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = 0xffffffff;
LAB_077c4cb4:
    uVar3 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10) = uVar3;
    thunk_FUN_03afed3c();
LAB_077c4cdc:
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar9 + 0x10) = 0;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x10),0);
    *(undefined8 *)(lVar9 + 0x18) = 0;
    thunk_FUN_03afed3c((undefined8 *)(lVar9 + 0x18),0);
    uVar11 = *(undefined8 *)(param_1 + 0xe);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<RealtimeRefData,_StreamContext>_TypeInfo
                              );
    FUN_04957830(uVar3,uVar11,*(undefined8 *)UnityEngine_UIElements_BaseField<Enum>_TypeInfo,0);
    lVar10 = FUN_077bbdac(lVar9,uVar3,1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000020 = FUN_067c4bec(lVar10,0);
    uVar4 = FUN_0666e8e0(&stack0x00000020,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x12) = in_stack_00000020;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4994(param_1 + 2,&stack0x00000020,param_1,
                   *(undefined8 *)UnityEngine_UIElements_BaseField<Bounds>_TypeInfo);
      return;
    }
  }
  else {
    if (uVar1 == 1) {
      in_stack_00000028 = *(undefined8 *)(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = 0xffffffff;
LAB_077c4bfc:
      uVar3 = FUN_0587c704(&stack0x00000028,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                          );
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(*(long *)(param_1 + 0xe) + 0x10) = uVar3;
      thunk_FUN_03afed3c();
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0xe) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(lVar10 + 0x18) == 0) {
        FUN_077c5244(*(undefined8 *)UnityEngine_UIElements_BaseField<string>_TypeInfo);
        goto LAB_077c4d6c;
      }
      goto LAB_077c4cdc;
    }
    if (uVar1 != 2) {
      if ((char)param_1[10] != '\0') {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = FUN_077ba28c(lVar9,lVar10,*(undefined8 *)(param_1 + 0xc));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        in_stack_00000028 =
             FUN_058b71ec(lVar10,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
        uVar4 = FUN_0587c6c4(&stack0x00000028,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
                            );
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x10) = in_stack_00000028;
          thunk_FUN_03afed3c(param_1 + 0x10,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e1ef4(param_1 + 2,&stack0x00000028,param_1,
                       *(undefined8 *)UnityEngine_UIElements_BaseField<bool>_TypeInfo);
          return;
        }
        goto LAB_077c4cb4;
      }
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar12 = *(long **)(lVar9 + 200);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)System_ArraySegment<float>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_077c4ea0;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)System_ArraySegment<float>_TypeInfo,0xd);
LAB_077c4ea0:
      lVar10 = (*(code *)*puVar5)(plVar12,lVar10,puVar5[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000028 =
           FUN_058b71ec(lVar10,*(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                       );
      uVar4 = FUN_0587c6c4(&stack0x00000028,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
                          );
      if ((uVar4 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x10) = in_stack_00000028;
        thunk_FUN_03afed3c(param_1 + 0x10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e1ef4(param_1 + 2,&stack0x00000028,param_1,
                     *(undefined8 *)UnityEngine_UIElements_BaseField<bool>_TypeInfo);
        return;
      }
      goto LAB_077c4bfc;
    }
    in_stack_00000020 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = 0xffffffff;
  }
  FUN_0666e9a8(&stack0x00000020,0);
LAB_077c4d6c:
  puVar8 = param_1 + 0xe;
  puVar8[0] = 0;
  puVar8[1] = 0;
  *param_1 = 0xfffffffe;
  thunk_FUN_03afed3c(puVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


