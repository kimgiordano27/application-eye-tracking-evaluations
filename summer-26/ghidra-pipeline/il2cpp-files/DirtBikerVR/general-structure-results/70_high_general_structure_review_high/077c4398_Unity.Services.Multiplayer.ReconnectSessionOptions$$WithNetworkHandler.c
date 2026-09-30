/*
FUNCTION_NAME: Unity.Services.Multiplayer.ReconnectSessionOptions$$WithNetworkHandler
ENTRY_POINT: 077c4398
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Multiplayer_ReconnectSessionOptions__WithNetworkHandler(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  int *unaff_x19;
  long unaff_x20;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  int iVar17;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718();
  FUN_03a8a718(UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
  FUN_03a8a718(System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08491378);
  FUN_03a8a718(System_ArraySegment<float>_TypeInfo);
  FUN_03a8a718(System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo);
  FUN_03a8a718(
              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo
              );
  FUN_03a8a718(
              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo
              );
  FUN_03a8a718(
              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo
              );
  *(undefined1 *)(unaff_x20 + 0xc3) = 1;
  puVar7 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo;
  puVar6 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo;
  puVar5 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo;
  puVar4 = System_ArraySegment<float>_TypeInfo;
  puVar2 = System_Action<InputUser,_InputUserChange,_InputDevice>_TypeInfo;
  puVar1 = PTR_DAT_08491378;
  iVar17 = *unaff_x19;
  lVar14 = *(long *)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (iVar17 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xe);
    iVar17 = -1;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
    goto LAB_077c4550;
  }
  if (iVar17 == 1) goto LAB_077c446c;
  do {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_067b2f8c(unaff_x19 + 0xc,0);
    if ((uVar9 & 1) != 0) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar12 = *(long *)(lVar14 + 0xd8);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar16 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
      uVar11 = thunk_FUN_03af1434(
                                 UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                                 );
      uVar16 = FUN_03522c98(4,uVar16,lVar12,uVar11);
      FUN_077bbd60(lVar14,uVar16,1);
      uVar11 = thunk_FUN_03af1434(
                                 UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar16,uVar11);
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar15 = *(long **)(lVar14 + 0xc0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar12 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 4) * 0x10 + 0x138);
          goto LAB_077c4518;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03ac43c4(plVar15,*(long *)puVar2,4);
LAB_077c4518:
    iVar8 = (*(code *)*puVar10)(plVar15,puVar10[1]);
    lVar12 = FUN_077ba3c8((double)iVar8,lVar14);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 = FUN_067c4bec(lVar12,0);
    uVar9 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffd1f0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
LAB_077c4550:
    FUN_0666e9a8(&stack0x00000028,0);
    if (iVar17 == 1) {
LAB_077c446c:
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x10);
      iVar17 = -1;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar15 = *(long **)(lVar14 + 200);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar12 = *plVar15;
      uVar16 = *(undefined8 *)(unaff_x19 + 10);
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
            goto LAB_077c45c4;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03ac43c4(plVar15,*(long *)puVar4,0xd);
LAB_077c45c4:
      lVar12 = (*(code *)*puVar10)(plVar15,uVar16,puVar10[1]);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 = FUN_058b71ec(lVar12,*(undefined8 *)puVar7);
      uVar9 = FUN_0587c6c4(&stack0x00000020,*(undefined8 *)puVar6);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_03ae8be4();
        }
        FUN_03fd3640(unaff_x19 + 2,&stack0x00000020);
        return;
      }
    }
    lVar12 = FUN_0587c704(&stack0x00000020,*(undefined8 *)puVar5);
    puVar3 = System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar12 + 0x18) != 0) {
      *unaff_x19 = -2;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,lVar12,
                   *(undefined8 *)
                    UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
      return;
    }
  } while( true );
}


