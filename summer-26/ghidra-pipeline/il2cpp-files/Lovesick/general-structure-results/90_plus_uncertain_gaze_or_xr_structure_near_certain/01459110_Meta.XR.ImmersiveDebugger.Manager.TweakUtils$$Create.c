/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Create
ENTRY_POINT: 01459110
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Create(undefined **param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar10;
  int iVar11;
  long *unaff_x23;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float unaff_s10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  while( true ) {
    unaff_x23[6] = *(long *)param_1[0x131];
    lVar4 = FUN_0176eb1c(unaff_x28 + 0x3c,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
    goto LAB_01459954;
    uVar10 = *(uint *)(unaff_x23 + 3);
    if (uVar10 < 4) break;
    unaff_x23[7] = lVar4;
    if (*unaff_x26 != 0) {
      lVar4 = thunk_FUN_00d6225c(*unaff_x26,*(undefined8 *)(*unaff_x23 + 0x40));
      if (lVar4 == 0) goto LAB_01459954;
      uVar10 = *(uint *)(unaff_x23 + 3);
    }
    if (uVar10 < 5) break;
    unaff_x23[8] = *unaff_x26;
    FUN_01600844(unaff_x23,0);
    FUN_0160c430();
    lVar4 = *(long *)(unaff_x28 + 0x10);
    if (lVar4 == 0) {
LAB_01459920:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = 4;
    while( true ) {
      uVar12 = lVar5 - 4;
      uVar10 = (uint)uVar12;
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar10) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
      lVar4 = *(long *)(lVar4 + lVar5 * 8);
      if (lVar4 == 0) goto LAB_01459920;
      uVar6 = FUN_014440c0(lVar4,0);
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
        if (plVar7 == (long *)0x0) goto LAB_01459920;
        if ((*unaff_x21 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(*unaff_x21,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0))
        goto LAB_01459954;
        if ((int)plVar7[3] == 0) goto LAB_01459950;
        plVar7[4] = *unaff_x21;
        if ((*(long *)(unaff_x19 + 0x70) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar12 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
        goto LAB_01459920;
        lVar4 = *(long *)(in_stack_00000048 + 0x10);
        if ((lVar4 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
        goto LAB_01459954;
        uVar8 = *(uint *)(plVar7 + 3);
        if (uVar8 < 2) goto LAB_01459950;
        plVar7[5] = lVar4;
        if (*unaff_x29 != 0) {
          lVar4 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar4 == 0) goto LAB_01459954;
          uVar8 = *(uint *)(plVar7 + 3);
        }
        if (uVar8 < 3) goto LAB_01459950;
        plVar7[6] = *unaff_x29;
        lVar4 = *(long *)(unaff_x28 + 0x10);
        if (lVar4 == 0) goto LAB_01459920;
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
        lVar4 = *(long *)(lVar4 + lVar5 * 8);
        if (lVar4 == 0) goto LAB_01459920;
        lVar4 = FUN_01444238(lVar4,0);
        if ((lVar4 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
        goto LAB_01459954;
        uVar8 = *(uint *)(plVar7 + 3);
        if (uVar8 < 4) goto LAB_01459950;
        plVar7[7] = lVar4;
        if (*unaff_x29 != 0) {
          lVar4 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar4 == 0) goto LAB_01459954;
          uVar8 = *(uint *)(plVar7 + 3);
        }
        if (uVar8 < 5) goto LAB_01459950;
        plVar7[8] = *unaff_x29;
        lVar4 = *(long *)(unaff_x28 + 0x10);
        if (lVar4 == 0) goto LAB_01459920;
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
        lVar4 = *(long *)(lVar4 + lVar5 * 8);
        if (lVar4 == 0) goto LAB_01459920;
        in_stack_00000038._4_4_ = FUN_01444120(lVar4,0);
        lVar4 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
        if ((lVar4 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
        goto LAB_01459954;
        uVar8 = *(uint *)(plVar7 + 3);
        if (uVar8 < 6) goto LAB_01459950;
        plVar7[9] = lVar4;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar4 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                     ,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar4 == 0) goto LAB_01459954;
          uVar8 = *(uint *)(plVar7 + 3);
        }
        if (uVar8 < 7) goto LAB_01459950;
        plVar7[10] = *(long *)
                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        lVar4 = *(long *)(unaff_x28 + 0x10);
        if (lVar4 == 0) goto LAB_01459920;
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
        lVar4 = *(long *)(lVar4 + lVar5 * 8);
        if (lVar4 == 0) goto LAB_01459920;
        in_stack_00000038._4_4_ = FUN_014441ac(lVar4,0);
        lVar4 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
        if ((lVar4 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
        goto LAB_01459954;
        uVar8 = *(uint *)(plVar7 + 3);
        if (uVar8 < 8) goto LAB_01459950;
        plVar7[0xb] = lVar4;
        if (*(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo != 0) {
          lVar4 = thunk_FUN_00d6225c(*(long *)
                                      System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                                     ,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar4 == 0) goto LAB_01459954;
          uVar8 = *(uint *)(plVar7 + 3);
        }
        if (uVar8 < 9) goto LAB_01459950;
        plVar7[0xc] = *(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
        ;
        FUN_01600844(plVar7,0);
        FUN_0160c430();
        lVar4 = *(long *)(unaff_x28 + 0x10);
        if (lVar4 == 0) goto LAB_01459920;
        if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
        lVar4 = *(long *)(lVar4 + lVar5 * 8);
        if (lVar4 == 0) goto LAB_01459920;
        in_stack_00000018 = *(undefined8 *)(lVar4 + 0x48);
        uVar14 = *(undefined8 *)(lVar4 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar4 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar4 + 0x50);
        in_stack_00000010 = uVar14;
        fVar15 = (float)FUN_01431624(&stack0x00000010,0);
        if (DAT_03774e1e == '\0') {
          thunk_FUN_00d48444();
          DAT_03774e1e = '\x01';
        }
        fVar15 = fVar15 - *(float *)(*(long *)(*unaff_x22 + 0xb8) + 8);
        fVar17 = (float)uVar14 - *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0xc);
        if (unaff_s10 <= fVar15 * fVar15 + fVar17 * fVar17) {
LAB_01459668:
          lVar4 = *(long *)(unaff_x28 + 0x10);
          if (lVar4 == 0) goto LAB_01459920;
          if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
          lVar4 = *(long *)(lVar4 + lVar5 * 8);
          if (lVar4 == 0) goto LAB_01459920;
          in_stack_00000018 = *(undefined8 *)(lVar4 + 0x48);
          uVar14 = *(undefined8 *)(lVar4 + 0x40);
          in_stack_00000028 = *(undefined8 *)(lVar4 + 0x58);
          in_stack_00000020 = *(undefined8 *)(lVar4 + 0x50);
          in_stack_00000010 = uVar14;
          uVar16 = FUN_01431624(&stack0x00000010,0);
          in_stack_00000008 = CONCAT44((int)uVar14,uVar16);
          FUN_02691230(&stack0x00000008,*unaff_x27,0);
          lVar4 = *(long *)(unaff_x28 + 0x10);
          if (lVar4 == 0) goto LAB_01459920;
          if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
          lVar4 = *(long *)(lVar4 + lVar5 * 8);
          if (lVar4 == 0) goto LAB_01459920;
          in_stack_00000018 = *(undefined8 *)(lVar4 + 0x48);
          uVar14 = *(undefined8 *)(lVar4 + 0x40);
          in_stack_00000028 = *(undefined8 *)(lVar4 + 0x58);
          in_stack_00000020 = *(undefined8 *)(lVar4 + 0x50);
          in_stack_00000010 = uVar14;
          uVar16 = FUN_01431600(&stack0x00000010,0);
          in_stack_00000008 = CONCAT44((int)uVar14,uVar16);
          FUN_02691230(&stack0x00000008,*unaff_x27,0);
          FUN_0160dca4();
        }
        else {
          lVar4 = *(long *)(unaff_x28 + 0x10);
          if (lVar4 == 0) goto LAB_01459920;
          if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01459950;
          lVar4 = *(long *)(lVar4 + lVar5 * 8);
          if (lVar4 == 0) goto LAB_01459920;
          in_stack_00000018 = *(undefined8 *)(lVar4 + 0x48);
          uVar14 = *(undefined8 *)(lVar4 + 0x40);
          in_stack_00000028 = *(undefined8 *)(lVar4 + 0x58);
          in_stack_00000020 = *(undefined8 *)(lVar4 + 0x50);
          in_stack_00000010 = uVar14;
          fVar15 = (float)FUN_01431600(&stack0x00000010,0);
          if (DAT_03774d77 == '\0') {
            thunk_FUN_00d48444();
            DAT_03774d77 = '\x01';
          }
          fVar15 = fVar15 - **(float **)(*unaff_x22 + 0xb8);
          fVar17 = (float)uVar14 - (*(float **)(*unaff_x22 + 0xb8))[1];
          if (unaff_s10 <= fVar15 * fVar15 + fVar17 * fVar17) goto LAB_01459668;
        }
        uVar14 = *(undefined8 *)(unaff_x28 + 0x30);
        if (DAT_03774e1e == '\0') {
          thunk_FUN_00d48444();
          DAT_03774e1e = '\x01';
        }
        puVar9 = *(undefined8 **)(*unaff_x22 + 0xb8);
        fVar15 = (float)uVar14 - (float)puVar9[1];
        fVar17 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)puVar9[1] >> 0x20);
        if (unaff_s10 <= fVar15 * fVar15 + fVar17 * fVar17) {
LAB_0145979c:
          in_stack_00000008 = *(undefined8 *)(unaff_x28 + 0x30);
          FUN_02691230(&stack0x00000008,*unaff_x27,0);
          in_stack_00000008 = *(undefined8 *)(unaff_x28 + 0x28);
          FUN_02691230(&stack0x00000008,*unaff_x27,0);
          FUN_0160dca4();
        }
        else {
          uVar14 = *(undefined8 *)(unaff_x28 + 0x28);
          if (DAT_03774d77 == '\0') {
            thunk_FUN_00d48444();
            DAT_03774d77 = '\x01';
            puVar9 = *(undefined8 **)(*unaff_x22 + 0xb8);
          }
          fVar15 = (float)uVar14 - (float)*puVar9;
          fVar17 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)*puVar9 >> 0x20);
          if (unaff_s10 <= fVar15 * fVar15 + fVar17 * fVar17) goto LAB_0145979c;
        }
        FUN_0160c8e8();
      }
      else {
        if ((*(long *)(unaff_x19 + 0x70) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar12 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
        goto LAB_01459920;
        FUN_01600424(*unaff_x21,*(undefined8 *)(in_stack_00000048 + 0x10),
                     *(undefined8 *)
                      Method_System_Dynamic_Utils_ExpressionUtils_ValidateOneArgument__,0);
        FUN_0160c430();
        cVar1 = *(char *)(unaff_x19 + 0x49);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01457470(uVar12 & 0xffffffff,cVar1 != '\0',uVar14);
        if ((uVar12 & 1) == 0) {
          FUN_0160c430();
        }
        else {
          lVar13 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
          lVar4 = *(long *)(lVar13 + 0x38);
          if (lVar4 == 0) {
            FUN_00d59478(lVar13);
            lVar4 = *(long *)(lVar13 + 0x38);
          }
          lVar4 = *(long *)(lVar4 + 0x10);
          if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
            lVar4 = FUN_00d5941c();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 0x10) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          FUN_0160dd60();
        }
      }
      lVar4 = *(long *)(unaff_x28 + 0x10);
      lVar5 = lVar5 + 1;
      if (lVar4 == 0) goto LAB_01459920;
    }
    FUN_0160c8e8();
    FUN_0160c430();
    puVar3 = StringLiteral_13336;
    puVar2 = PTR_DAT_033f38b8;
    unaff_x26 = (long *)PTR_DAT_033ead30;
    lVar4 = *(long *)(unaff_x28 + 0x18);
    if (lVar4 == 0) goto LAB_01459920;
    iVar11 = 0;
    while( true ) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 == 0) goto LAB_01459920;
      if (*(int *)(lVar4 + 0x18) <= iVar11) break;
      FUN_0132138c(lVar4,iVar11,&stack0x00000048,
                   *(undefined8 *)
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                  );
      if ((in_stack_00000048 == 0) || (*(long *)(in_stack_00000048 + 0x10) == 0)) goto LAB_01459920;
      uVar14 = FUN_0268b6ac(*(long *)(in_stack_00000048 + 0x10),0);
      FUN_015f5b28(uVar14,*(undefined8 *)puVar2,0);
      FUN_0160c430();
      lVar4 = *(long *)(unaff_x28 + 0x18);
      iVar11 = iVar11 + 1;
      if (lVar4 == 0) goto LAB_01459920;
    }
    FUN_0160c8e8();
    lVar4 = *(long *)(unaff_x19 + 0x58);
    in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
    if (lVar4 == 0) goto LAB_01459920;
    if (*(int *)(lVar4 + 0x18) <= in_stack_00000000._4_4_) {
      return;
    }
    FUN_0132138c(lVar4,in_stack_00000000._4_4_,&stack0x00000048,*(undefined8 *)PTR_DAT_033ee2d8);
    unaff_x28 = in_stack_00000048;
    FUN_0160c8e8();
    unaff_x23 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
    if (unaff_x23 == (long *)0x0) goto LAB_01459920;
    lVar4 = *(long *)puVar3;
    if ((lVar4 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x23 + 0x40)), lVar4 == 0)) {
LAB_01459954:
      uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar14,0);
    }
    if ((int)unaff_x23[3] == 0) break;
    unaff_x23[4] = *(long *)puVar3;
    if (unaff_x28 == 0) goto LAB_01459920;
    lVar4 = FUN_0176eb1c(unaff_x28 + 0x38,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0))
    goto LAB_01459954;
    uVar10 = *(uint *)(unaff_x23 + 3);
    if (uVar10 < 2) break;
    unaff_x23[5] = lVar4;
    if (*(long *)Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        != 0) {
      lVar4 = thunk_FUN_00d6225c(*(long *)
                                  Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                 ,*(undefined8 *)(*unaff_x23 + 0x40));
      if (lVar4 == 0) goto LAB_01459954;
      uVar10 = *(uint *)(unaff_x23 + 3);
    }
    if (uVar10 < 3) break;
    param_1 = &
              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<<HandleSend>b__91_0>d>__
    ;
  }
LAB_01459950:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


