/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<int,-ValueTuple<object,-int>>>
ENTRY_POINT: 020d7eb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


uint System_Array__InternalArray__get_Item<KeyValuePair<int,_ValueTuple<object,_int>>>
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3)

{
  byte bVar1;
  double dVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  float fVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  
  thunk_FUN_01efb3a4(Method_System_Text_ASCIIEncoding_GetByteCount__);
  thunk_FUN_01efb3a4(Method_System_Text_ASCIIEncoding_GetByteCount__);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_PointerInteractor<GrabInteractor,_GrabInteractable>__ctor__
                    );
  *(undefined1 *)(unaff_x22 + 0xa1d) = 1;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = (long *)0x0;
  uStack0000000000000084 = 0;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000070 = 0;
  *unaff_x19 = 0;
  thunk_FUN_01f51358();
  *unaff_x20 = 0;
  thunk_FUN_01f51358();
  if ((*(long *)(unaff_x21 + 0xc0) == 0) ||
     (lVar10 = FUN_02b623c4(*(long *)(unaff_x21 + 0xc0),
                            *(undefined8 *)
                             Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_HasValue__
                           ), puVar7 = Method_System_Text_ASCIIEncoding_GetByteCount__,
     puVar16 = (undefined8 *)
               Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
     , puVar6 = 
       Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_IsEmpty__,
     puVar5 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__, lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03000018(&stack0x00000048,lVar10,
               *(undefined8 *)Method_System_Text_ASCIIEncoding_GetByteCount__);
  puVar4 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  fVar3 = DAT_00c926ac;
  dVar2 = DAT_00c8ec70;
  fVar14 = 3.4028235e+38;
  dVar25 = (double)(ulong)(uint)DAT_00c926ac;
  in_stack_00000098 = in_stack_00000050;
  in_stack_00000090 = in_stack_00000048;
  in_stack_000000a0 = in_stack_00000058;
LAB_020d7fac:
  do {
    do {
      uVar11 = FUN_02ce80b8(&stack0x00000090,*(undefined8 *)puVar7);
      if ((uVar11 & 1) == 0) {
        FUN_02ce80b4(&stack0x00000090,*puVar16);
        uVar22 = *unaff_x19;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                           (uVar22,0,0);
        if (((uVar11 & 1) == 0) || (*(char *)(unaff_x21 + 0xd4) == '\0')) {
          uVar22 = *unaff_x19;
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar9 = FUN_04073094(uVar22,0,0);
        }
        else {
          uVar9 = FUN_020d8fb8();
        }
        return uVar9 & 1;
      }
      if (in_stack_000000a0 == (long *)0x0) {
LAB_020d7fdc:
        plVar15 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if (*(byte *)(*in_stack_000000a0 + 0x130) < bVar1) goto LAB_020d7fdc;
        plVar15 = in_stack_000000a0;
        if (*(long *)(*(long *)(*in_stack_000000a0 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)puVar6) {
          plVar15 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_04073094(plVar15,0,0);
    } while ((uVar11 & 1) == 0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while (((char)plVar15[0xf] == '\0') ||
          ((uVar11 = FUN_037d862c(plVar15,0), (uVar11 & 1) != 0 && ((char)plVar15[4] == '\0'))));
  if (-1 < *(int *)(unaff_x21 + 0xe8)) {
    lVar10 = FUN_040703d4(plVar15,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar8 = FUN_04073294(lVar10,0);
    if (iVar8 != *(int *)(unaff_x21 + 0xe8)) goto LAB_020d7fac;
  }
  lVar10 = plVar15[6];
  if (lVar10 == 0) {
LAB_020d8458:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar17 = 0;
  while( true ) {
    fVar23 = SUB84(param_3,0);
    fVar30 = SUB84(dVar25,0);
    puVar16 = (undefined8 *)
              Method_Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_get_Value__
    ;
    if ((int)*(uint *)(lVar10 + 0x18) <= (int)(uint)lVar17) break;
    if (*(uint *)(lVar10 + 0x18) <= (uint)lVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(lVar10 + lVar17 * 8 + 0x20);
    FUN_0407d3c8(*(long *)(unaff_x21 + 0x30),0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar18 = (float)FUN_040c2024(lVar10,0);
    if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar28 = fVar30;
    fVar26 = fVar23;
    fVar19 = (float)FUN_0407d3c8(*(long *)(unaff_x21 + 0x30),0);
    fVar26 = fVar26 - fVar23;
    fVar23 = fVar26 * fVar26;
    dVar25 = (double)(ulong)(uint)fVar23;
    fVar30 = fVar23 + (fVar19 - fVar18) * (fVar19 - fVar18) + (fVar28 - fVar30) * (fVar28 - fVar30);
    param_3 = (double)(ulong)(uint)fVar26;
    if (fVar30 < fVar14) {
      if (*(char *)(unaff_x21 + 0xd5) != '\0') {
        lVar12 = FUN_04070398(plVar15,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar18 = (float)FUN_0407d3c8(lVar12,0);
        if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        fVar28 = fVar23;
        fVar19 = fVar26;
        fVar20 = (float)FUN_0407d3c8(*(long *)(unaff_x21 + 0x30),0);
        if (DAT_0482ee9b == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          DAT_0482ee9b = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar18 = fVar18 - fVar20;
        fVar23 = fVar23 - fVar28;
        dVar24 = (double)(ulong)(uint)fVar23;
        fVar26 = fVar26 - fVar19;
        dVar27 = (double)(ulong)(uint)fVar26;
        fVar28 = SQRT(fVar26 * fVar26 + fVar18 * fVar18 + fVar23 * fVar23);
        if (fVar28 <= fVar3) {
          if (DAT_0482ee12 == '\0') {
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
            DAT_0482ee12 = '\x01';
          }
          pfVar13 = *(float **)
                     (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ +
                     0xb8);
          fVar18 = *pfVar13;
          fVar23 = pfVar13[1];
          fVar26 = pfVar13[2];
        }
        else {
          fVar18 = fVar18 / fVar28;
          fVar23 = fVar23 / fVar28;
          fVar26 = fVar26 / fVar28;
        }
        if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar22 = FUN_0407d3c8(*(long *)(unaff_x21 + 0x30),0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        dVar25 = dVar24;
        param_3 = dVar27;
        FUN_0403e7e4(uVar22,dVar24,dVar27,fVar18,fVar23,fVar26,0);
        uVar29 = *(undefined4 *)(unaff_x21 + 0xe4);
        uVar9 = *(uint *)(unaff_x21 + 0xec);
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_PointerInteractor<GrabInteractor,_GrabInteractable>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uStack0000000000000030 = (undefined4)uVar22;
        uStack0000000000000034 = SUB84(dVar24,0);
        uStack0000000000000038 = SUB84(dVar27,0);
        fStack000000000000003c = fVar18;
        fStack0000000000000040 = fVar23;
        fStack0000000000000044 = fVar26;
        uVar11 = FUN_040bda10(uVar29,&stack0x00000030,&stack0x00000060,1 << (ulong)(uVar9 & 0x1f),1,
                              0);
        fVar18 = SUB84(param_3,0);
        fVar23 = SUB84(dVar25,0);
        if ((uVar11 & 1) != 0) {
          if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0407d3c8(*(long *)(unaff_x21 + 0x30),0);
          fVar28 = (float)FUN_040c2024(lVar10,0);
          if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar26 = fVar23;
          fVar19 = fVar18;
          fVar20 = (float)FUN_0407d3c8(*(long *)(unaff_x21 + 0x30),0);
          if (DAT_0482f03e == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0482f03e = '\x01';
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar21 = (float)FUN_040c0e80(&stack0x00000060,0);
          dVar25 = (double)SQRT((fVar18 - fVar19) * (fVar18 - fVar19) +
                                (fVar28 - fVar20) * (fVar28 - fVar20) +
                                (fVar23 - fVar26) * (fVar23 - fVar26));
          param_3 = dVar2;
          if ((double)fVar21 * dVar2 < dVar25) goto LAB_020d8390;
        }
      }
      *unaff_x19 = plVar15;
      thunk_FUN_01f51358();
      *unaff_x20 = lVar10;
      thunk_FUN_01f51358();
      fVar14 = fVar30;
    }
LAB_020d8390:
    lVar10 = plVar15[6];
    lVar17 = lVar17 + 1;
    if (lVar10 == 0) goto LAB_020d8458;
  }
  goto LAB_020d7fac;
}


