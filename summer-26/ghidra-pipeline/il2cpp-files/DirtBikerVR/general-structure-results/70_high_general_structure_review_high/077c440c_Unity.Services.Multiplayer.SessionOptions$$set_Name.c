/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionOptions$$set_Name
ENTRY_POINT: 077c440c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Multiplayer_SessionOptions__set_Name(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int *unaff_x19;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  int iVar15;
  long unaff_x24;
  long *plVar16;
  long unaff_x25;
  long *plVar17;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  puVar5 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo;
  puVar4 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo;
  puVar3 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QosServersResponseBody>>_TypeInfo;
  puVar2 = System_ArraySegment<float>_TypeInfo;
  plVar16 = *(long **)(unaff_x24 + 0x378);
  plVar17 = *(long **)(unaff_x25 + 0xd8);
  iVar15 = *unaff_x19;
  lVar12 = *(long *)(unaff_x19 + 8);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000018 = 0;
  if (iVar15 == 0) {
    uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0xe);
    iVar15 = -1;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
    goto LAB_077c4550;
  }
  if (iVar15 == 1) goto LAB_077c446c;
  do {
    if (*(int *)(*plVar16 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar7 = FUN_067b2f8c(unaff_x19 + 0xc,0);
    if ((uVar7 & 1) != 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *(long *)(lVar12 + 0xd8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar14 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
      uVar9 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                                );
      uVar14 = FUN_03522c98(4,uVar14,lVar10,uVar9);
      FUN_077bbd60(lVar12,uVar14,1);
      uVar9 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar14,uVar9);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = *(long **)(lVar12 + 0xc0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar13;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar17) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_077c4518;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*plVar17,4);
LAB_077c4518:
    iVar6 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    lVar10 = FUN_077ba3c8((double)iVar6,lVar12);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000028 = FUN_067c4bec(lVar10,0);
    uVar7 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = uStack0000000000000028;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffd1f0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
LAB_077c4550:
    FUN_0666e9a8(&stack0x00000028,0);
    if (iVar15 == 1) {
LAB_077c446c:
      uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x10);
      iVar15 = -1;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar13 = *(long **)(lVar12 + 200);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *plVar13;
      uVar14 = *(undefined8 *)(unaff_x19 + 10);
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
            goto LAB_077c45c4;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar2,0xd);
LAB_077c45c4:
      lVar10 = (*(code *)*puVar8)(plVar13,uVar14,puVar8[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uStack0000000000000020 = FUN_058b71ec(lVar10,*(undefined8 *)puVar5);
      uVar7 = FUN_0587c6c4(&stack0x00000020,*(undefined8 *)puVar4);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_03ae8be4();
        }
        FUN_03fd3640(unaff_x19 + 2,&stack0x00000020);
        return;
      }
    }
    lVar10 = FUN_0587c704(&stack0x00000020,*(undefined8 *)puVar3);
    puVar1 = System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
      *unaff_x19 = -2;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,lVar10,
                   *(undefined8 *)
                    UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
      return;
    }
  } while( true );
}


