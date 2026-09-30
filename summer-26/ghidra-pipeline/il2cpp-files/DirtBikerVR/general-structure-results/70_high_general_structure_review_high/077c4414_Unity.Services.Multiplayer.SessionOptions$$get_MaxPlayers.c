/*
FUNCTION_NAME: Unity.Services.Multiplayer.SessionOptions$$get_MaxPlayers
ENTRY_POINT: 077c4414
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


void Unity_Services_Multiplayer_SessionOptions__get_MaxPlayers(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int *unaff_x19;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  int iVar13;
  long unaff_x24;
  long *plVar14;
  long unaff_x25;
  long *plVar15;
  long unaff_x26;
  undefined8 *puVar16;
  long unaff_x27;
  long *plVar17;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  puVar3 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<JoinCodeResponseBody>>_TypeInfo;
  puVar2 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<AllocateResponseBody>>_TypeInfo;
  plVar14 = *(long **)(unaff_x24 + 0x378);
  plVar15 = *(long **)(unaff_x25 + 0xd8);
  puVar16 = *(undefined8 **)(unaff_x26 + 0x3c0);
  plVar17 = *(long **)(unaff_x27 + 0x1b8);
  iVar13 = *unaff_x19;
  lVar10 = *(long *)(unaff_x19 + 8);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000018 = 0;
  if (iVar13 == 0) {
    uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0xe);
    iVar13 = -1;
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
    goto LAB_077c4550;
  }
  if (iVar13 == 1) goto LAB_077c446c;
  do {
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_067b2f8c(unaff_x19 + 0xc,0);
    if ((uVar5 & 1) != 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = *(long *)(lVar10 + 0xd8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar12 = thunk_FUN_03af1434(System_Action<object,_string>_TypeInfo);
      uVar7 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                                );
      uVar12 = FUN_03522c98(4,uVar12,lVar8,uVar7);
      FUN_077bbd60(lVar10,uVar12,1);
      uVar7 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar12,uVar7);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(lVar10 + 0xc0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar15) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_077c4518;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar11,*plVar15,4);
LAB_077c4518:
    iVar4 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    lVar8 = FUN_077ba3c8((double)iVar4,lVar10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000028 = FUN_067c4bec(lVar8,0);
    uVar5 = FUN_0666e8e0(&stack0x00000028,0);
    if ((uVar5 & 1) == 0) {
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
    if (iVar13 == 1) {
LAB_077c446c:
      uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0x10);
      iVar13 = -1;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar11 = *(long **)(lVar10 + 200);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = *plVar11;
      uVar12 = *(undefined8 *)(unaff_x19 + 10);
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *plVar17) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xd) * 0x10 + 0x138);
            goto LAB_077c45c4;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar11,*plVar17,0xd);
LAB_077c45c4:
      lVar8 = (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uStack0000000000000020 = FUN_058b71ec(lVar8,*(undefined8 *)puVar3);
      uVar5 = FUN_0587c6c4(&stack0x00000020,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
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
    lVar8 = FUN_0587c704(&stack0x00000020,*puVar16);
    puVar1 = System_Action<VFXEventAttribute,_int,_Vector3>_TypeInfo;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar8 + 0x18) != 0) {
      *unaff_x19 = -2;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,lVar8,
                   *(undefined8 *)
                    UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
      return;
    }
  } while( true );
}


