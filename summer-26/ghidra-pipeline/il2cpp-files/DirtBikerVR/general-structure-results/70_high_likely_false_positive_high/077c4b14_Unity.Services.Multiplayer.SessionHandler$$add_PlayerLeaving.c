/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionHandler$$add_PlayerLeaving
ENTRY_POINT: 077c4b14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_SessionHandler__add_PlayerLeaving(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 in_w8;
  long lVar6;
  int *piVar7;
  uint *unaff_x19;
  uint *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  *(undefined1 *)(unaff_x20 + 0xc5) = in_w8;
  uVar1 = *unaff_x19;
  lVar9 = *(long *)(unaff_x19 + 8);
  lVar10 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000018 = 0;
  if (2 < uVar1) {
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_UIElements_BaseField<int>_TypeInfo);
    FUN_0679343c(uVar3,0);
    *(undefined8 *)(unaff_x19 + 0xe) = uVar3;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,uVar3);
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
    uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = 0xffffffff;
LAB_077c4cb4:
    uVar3 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)
                          System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                        );
    if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(*(long *)(unaff_x19 + 0xe) + 0x10) = uVar3;
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
    uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<RealtimeRefData,_StreamContext>_TypeInfo
                              );
    FUN_04957830(uVar3,uVar11,*(undefined8 *)UnityEngine_UIElements_BaseField<Enum>_TypeInfo,0);
    lVar10 = FUN_077bbdac(lVar9,uVar3,1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000020 = FUN_067c4bec(lVar10,0);
    uVar4 = FUN_0666e8e0(&stack0x00000020,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x12) = uStack0000000000000020;
      thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e4994(unaff_x19 + 2,&stack0x00000020);
      return;
    }
  }
  else {
    if (uVar1 == 1) {
      uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0x10);
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = 0xffffffff;
LAB_077c4bfc:
      uVar3 = FUN_0587c704(&stack0x00000028,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
                          );
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(*(long *)(unaff_x19 + 0xe) + 0x10) = uVar3;
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0xe) + 0x10);
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
      if ((char)unaff_x19[10] != '\0') {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar10 = FUN_077ba28c(lVar9,lVar10,*(undefined8 *)(unaff_x19 + 0xc));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uStack0000000000000028 =
             FUN_058b71ec(lVar10,*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                         );
        uVar4 = FUN_0587c6c4(&stack0x00000028,
                             *(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
                            );
        if ((uVar4 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000028;
          thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e1ef4(unaff_x19 + 2,&stack0x00000028);
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
      uStack0000000000000028 =
           FUN_058b71ec(lVar10,*(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
                       );
      uVar4 = FUN_0587c6c4(&stack0x00000028,
                           *(undefined8 *)
                            System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
                          );
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000028;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e1ef4(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      goto LAB_077c4bfc;
    }
    uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = 0xffffffff;
  }
  FUN_0666e9a8(&stack0x00000020,0);
LAB_077c4d6c:
  puVar8 = unaff_x19 + 0xe;
  puVar8[0] = 0;
  puVar8[1] = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_03afed3c(puVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


