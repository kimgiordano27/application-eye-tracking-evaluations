/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$RoundToNearest
ENTRY_POINT: 01459818
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__RoundToNearest(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x26;
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
  
code_r0x01459818:
  FUN_0160c430();
  do {
    while( true ) {
      lVar9 = *(long *)(unaff_x28 + 0x10);
      unaff_x26 = unaff_x26 + 1;
      if (lVar9 == 0) goto LAB_01459920;
      while( true ) {
        uVar12 = unaff_x26 - 4;
        uVar10 = (uint)uVar12;
        if ((int)uVar10 < (int)*(uint *)(lVar9 + 0x18)) break;
        FUN_0160c8e8();
        FUN_0160c430();
        puVar4 = StringLiteral_13336;
        puVar3 = PTR_DAT_033f38b8;
        puVar2 = PTR_DAT_033ead30;
        lVar9 = *(long *)(unaff_x28 + 0x18);
        if (lVar9 == 0) goto LAB_01459920;
        iVar11 = 0;
        while( true ) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) goto LAB_01459920;
          if (*(int *)(lVar9 + 0x18) <= iVar11) break;
          FUN_0132138c(lVar9,iVar11,&stack0x00000048,
                       *(undefined8 *)
                        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                      );
          if ((in_stack_00000048 == 0) || (*(long *)(in_stack_00000048 + 0x10) == 0))
          goto LAB_01459920;
          uVar14 = FUN_0268b6ac(*(long *)(in_stack_00000048 + 0x10),0);
          FUN_015f5b28(uVar14,*(undefined8 *)puVar3,0);
          FUN_0160c430();
          lVar9 = *(long *)(unaff_x28 + 0x18);
          iVar11 = iVar11 + 1;
          if (lVar9 == 0) goto LAB_01459920;
        }
        FUN_0160c8e8();
        lVar9 = *(long *)(unaff_x19 + 0x58);
        in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
        if (lVar9 == 0) goto LAB_01459920;
        if (*(int *)(lVar9 + 0x18) <= in_stack_00000000._4_4_) {
          return;
        }
        FUN_0132138c(lVar9,in_stack_00000000._4_4_,&stack0x00000048,*(undefined8 *)PTR_DAT_033ee2d8)
        ;
        unaff_x28 = in_stack_00000048;
        FUN_0160c8e8();
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
        if (plVar6 == (long *)0x0) goto LAB_01459920;
        lVar9 = *(long *)puVar4;
        if ((lVar9 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
        goto LAB_01459954;
        if ((int)plVar6[3] == 0) goto LAB_01459950;
        plVar6[4] = *(long *)puVar4;
        if (unaff_x28 == 0) goto LAB_01459920;
        lVar9 = FUN_0176eb1c(unaff_x28 + 0x38,0);
        if ((lVar9 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
        goto LAB_01459954;
        uVar10 = *(uint *)(plVar6 + 3);
        if (uVar10 < 2) goto LAB_01459950;
        plVar6[5] = lVar9;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar9 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                     ,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar9 == 0) goto LAB_01459954;
          uVar10 = *(uint *)(plVar6 + 3);
        }
        if (uVar10 < 3) goto LAB_01459950;
        plVar6[6] = *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        lVar9 = FUN_0176eb1c(unaff_x28 + 0x3c,0);
        if ((lVar9 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
        goto LAB_01459954;
        uVar10 = *(uint *)(plVar6 + 3);
        if (uVar10 < 4) goto LAB_01459950;
        plVar6[7] = lVar9;
        lVar9 = *(long *)puVar2;
        if (lVar9 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar9 == 0) goto LAB_01459954;
          uVar10 = *(uint *)(plVar6 + 3);
        }
        if (uVar10 < 5) goto LAB_01459950;
        plVar6[8] = *(long *)puVar2;
        FUN_01600844(plVar6,0);
        FUN_0160c430();
        lVar9 = *(long *)(unaff_x28 + 0x10);
        if (lVar9 == 0) goto LAB_01459920;
        unaff_x26 = 4;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
      lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
      if (lVar9 == 0) goto LAB_01459920;
      uVar5 = FUN_014440c0(lVar9,0);
      if ((uVar5 & 1) != 0) break;
      plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
      if (plVar6 == (long *)0x0) goto LAB_01459920;
      if ((*unaff_x21 != 0) &&
         (lVar9 = thunk_FUN_00d6225c(*unaff_x21,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_01459954:
        uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,0);
      }
      if ((int)plVar6[3] == 0) goto LAB_01459950;
      plVar6[4] = *unaff_x21;
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar12 & 0xffffffff,&stack0x00000048,
                       *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
      goto LAB_01459920;
      lVar9 = *(long *)(in_stack_00000048 + 0x10);
      if ((lVar9 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
      goto LAB_01459954;
      uVar7 = *(uint *)(plVar6 + 3);
      if (uVar7 < 2) goto LAB_01459950;
      plVar6[5] = lVar9;
      if (*unaff_x29 != 0) {
        lVar9 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar9 == 0) goto LAB_01459954;
        uVar7 = *(uint *)(plVar6 + 3);
      }
      if (uVar7 < 3) goto LAB_01459950;
      plVar6[6] = *unaff_x29;
      lVar9 = *(long *)(unaff_x28 + 0x10);
      if (lVar9 == 0) goto LAB_01459920;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
      lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
      if (lVar9 == 0) goto LAB_01459920;
      lVar9 = FUN_01444238(lVar9,0);
      if ((lVar9 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
      goto LAB_01459954;
      uVar7 = *(uint *)(plVar6 + 3);
      if (uVar7 < 4) goto LAB_01459950;
      plVar6[7] = lVar9;
      if (*unaff_x29 != 0) {
        lVar9 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar9 == 0) goto LAB_01459954;
        uVar7 = *(uint *)(plVar6 + 3);
      }
      if (uVar7 < 5) goto LAB_01459950;
      plVar6[8] = *unaff_x29;
      lVar9 = *(long *)(unaff_x28 + 0x10);
      if (lVar9 == 0) goto LAB_01459920;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
      lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
      if (lVar9 == 0) goto LAB_01459920;
      in_stack_00000038._4_4_ = FUN_01444120(lVar9,0);
      lVar9 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
      if ((lVar9 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
      goto LAB_01459954;
      uVar7 = *(uint *)(plVar6 + 3);
      if (uVar7 < 6) goto LAB_01459950;
      plVar6[9] = lVar9;
      if (*(long *)Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
          != 0) {
        lVar9 = thunk_FUN_00d6225c(*(long *)
                                    Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                   ,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar9 == 0) goto LAB_01459954;
        uVar7 = *(uint *)(plVar6 + 3);
      }
      if (uVar7 < 7) goto LAB_01459950;
      plVar6[10] = *(long *)
                    Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
      ;
      lVar9 = *(long *)(unaff_x28 + 0x10);
      if (lVar9 == 0) goto LAB_01459920;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
      lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
      if (lVar9 == 0) goto LAB_01459920;
      in_stack_00000038._4_4_ = FUN_014441ac(lVar9,0);
      lVar9 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
      if ((lVar9 != 0) &&
         (lVar13 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0))
      goto LAB_01459954;
      uVar7 = *(uint *)(plVar6 + 3);
      if (uVar7 < 8) goto LAB_01459950;
      plVar6[0xb] = lVar9;
      if (*(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo != 0) {
        lVar9 = thunk_FUN_00d6225c(*(long *)
                                    System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                                   ,*(undefined8 *)(*plVar6 + 0x40));
        if (lVar9 == 0) goto LAB_01459954;
        uVar7 = *(uint *)(plVar6 + 3);
      }
      if (uVar7 < 9) goto LAB_01459950;
      plVar6[0xc] = *(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
      FUN_01600844(plVar6,0);
      FUN_0160c430();
      lVar9 = *(long *)(unaff_x28 + 0x10);
      if (lVar9 == 0) goto LAB_01459920;
      if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
      lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
      if (lVar9 == 0) goto LAB_01459920;
      in_stack_00000018 = *(undefined8 *)(lVar9 + 0x48);
      uVar14 = *(undefined8 *)(lVar9 + 0x40);
      in_stack_00000028 = *(undefined8 *)(lVar9 + 0x58);
      in_stack_00000020 = *(undefined8 *)(lVar9 + 0x50);
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
        lVar9 = *(long *)(unaff_x28 + 0x10);
        if (lVar9 == 0) goto LAB_01459920;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_01459950:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
        if (lVar9 == 0) {
LAB_01459920:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000018 = *(undefined8 *)(lVar9 + 0x48);
        uVar14 = *(undefined8 *)(lVar9 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar9 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar9 + 0x50);
        in_stack_00000010 = uVar14;
        uVar16 = FUN_01431624(&stack0x00000010,0);
        in_stack_00000008 = CONCAT44((int)uVar14,uVar16);
        FUN_02691230(&stack0x00000008,*unaff_x27,0);
        lVar9 = *(long *)(unaff_x28 + 0x10);
        if (lVar9 == 0) goto LAB_01459920;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
        lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
        if (lVar9 == 0) goto LAB_01459920;
        in_stack_00000018 = *(undefined8 *)(lVar9 + 0x48);
        uVar14 = *(undefined8 *)(lVar9 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar9 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar9 + 0x50);
        in_stack_00000010 = uVar14;
        uVar16 = FUN_01431600(&stack0x00000010,0);
        in_stack_00000008 = CONCAT44((int)uVar14,uVar16);
        FUN_02691230(&stack0x00000008,*unaff_x27,0);
        FUN_0160dca4();
      }
      else {
        lVar9 = *(long *)(unaff_x28 + 0x10);
        if (lVar9 == 0) goto LAB_01459920;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_01459950;
        lVar9 = *(long *)(lVar9 + unaff_x26 * 8);
        if (lVar9 == 0) goto LAB_01459920;
        in_stack_00000018 = *(undefined8 *)(lVar9 + 0x48);
        uVar14 = *(undefined8 *)(lVar9 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar9 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar9 + 0x50);
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
      puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
      fVar15 = (float)uVar14 - (float)puVar8[1];
      fVar17 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)puVar8[1] >> 0x20);
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
          puVar8 = *(undefined8 **)(*unaff_x22 + 0xb8);
        }
        fVar15 = (float)uVar14 - (float)*puVar8;
        fVar17 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)*puVar8 >> 0x20);
        if (unaff_s10 <= fVar15 * fVar15 + fVar17 * fVar17) goto LAB_0145979c;
      }
      FUN_0160c8e8();
    }
    if ((*(long *)(unaff_x19 + 0x70) == 0) ||
       (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar12 & 0xffffffff,&stack0x00000048,
                     *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
    goto LAB_01459920;
    FUN_01600424(*unaff_x21,*(undefined8 *)(in_stack_00000048 + 0x10),
                 *(undefined8 *)Method_System_Dynamic_Utils_ExpressionUtils_ValidateOneArgument__,0)
    ;
    FUN_0160c430();
    cVar1 = *(char *)(unaff_x19 + 0x49);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x80);
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_01457470(uVar12 & 0xffffffff,cVar1 != '\0',uVar14);
    if ((uVar12 & 1) == 0) goto code_r0x01459818;
    lVar13 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
    lVar9 = *(long *)(lVar13 + 0x38);
    if (lVar9 == 0) {
      FUN_00d59478(lVar13);
      lVar9 = *(long *)(lVar13 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      lVar9 = FUN_00d5941c();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar13 + 0x38) + 0x10) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    FUN_0160dd60();
  } while( true );
}


