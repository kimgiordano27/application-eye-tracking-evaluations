/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$IsMemberTypeValidForTweak
ENTRY_POINT: 01459358
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__IsMemberTypeValidForTweak(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar11;
  int iVar12;
  ulong unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  float unaff_s10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  while (param_1 != 0) {
    do {
      uVar11 = *(uint *)(unaff_x24 + 3);
      if (uVar11 < 2) goto LAB_01459950;
      unaff_x24[5] = unaff_x25;
      if (*unaff_x29 != 0) {
        lVar7 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*unaff_x24 + 0x40));
        if (lVar7 == 0) goto LAB_01459954;
        uVar11 = *(uint *)(unaff_x24 + 3);
      }
      if (uVar11 < 3) goto LAB_01459950;
      unaff_x24[6] = *unaff_x29;
      lVar7 = *(long *)(unaff_x28 + 0x10);
      if (lVar7 == 0) goto LAB_01459920;
      uVar11 = (uint)unaff_x23;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
      lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
      if (lVar7 == 0) goto LAB_01459920;
      lVar7 = FUN_01444238(lVar7,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x24 + 0x40)), lVar8 == 0))
      goto LAB_01459954;
      uVar9 = *(uint *)(unaff_x24 + 3);
      if (uVar9 < 4) goto LAB_01459950;
      unaff_x24[7] = lVar7;
      if (*unaff_x29 != 0) {
        lVar7 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*unaff_x24 + 0x40));
        if (lVar7 == 0) goto LAB_01459954;
        uVar9 = *(uint *)(unaff_x24 + 3);
      }
      if (uVar9 < 5) goto LAB_01459950;
      unaff_x24[8] = *unaff_x29;
      lVar7 = *(long *)(unaff_x28 + 0x10);
      if (lVar7 == 0) goto LAB_01459920;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
      lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
      if (lVar7 == 0) goto LAB_01459920;
      in_stack_00000038._4_4_ = FUN_01444120(lVar7,0);
      lVar7 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x24 + 0x40)), lVar8 == 0))
      goto LAB_01459954;
      uVar9 = *(uint *)(unaff_x24 + 3);
      if (uVar9 < 6) goto LAB_01459950;
      unaff_x24[9] = lVar7;
      if (*(long *)Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
          != 0) {
        lVar7 = thunk_FUN_00d6225c(*(long *)
                                    Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                   ,*(undefined8 *)(*unaff_x24 + 0x40));
        if (lVar7 == 0) goto LAB_01459954;
        uVar9 = *(uint *)(unaff_x24 + 3);
      }
      if (uVar9 < 7) goto LAB_01459950;
      unaff_x24[10] =
           *(long *)
            Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
      lVar7 = *(long *)(unaff_x28 + 0x10);
      if (lVar7 == 0) goto LAB_01459920;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
      lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
      if (lVar7 == 0) goto LAB_01459920;
      in_stack_00000038._4_4_ = FUN_014441ac(lVar7,0);
      lVar7 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*unaff_x24 + 0x40)), lVar8 == 0))
      goto LAB_01459954;
      uVar9 = *(uint *)(unaff_x24 + 3);
      if (uVar9 < 8) goto LAB_01459950;
      unaff_x24[0xb] = lVar7;
      if (*(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo != 0) {
        lVar7 = thunk_FUN_00d6225c(*(long *)
                                    System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                                   ,*(undefined8 *)(*unaff_x24 + 0x40));
        if (lVar7 == 0) goto LAB_01459954;
        uVar9 = *(uint *)(unaff_x24 + 3);
      }
      if (uVar9 < 9) goto LAB_01459950;
      unaff_x24[0xc] =
           *(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
      FUN_01600844(unaff_x24,0);
      FUN_0160c430();
      lVar7 = *(long *)(unaff_x28 + 0x10);
      if (lVar7 == 0) goto LAB_01459920;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
      lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
      if (lVar7 == 0) goto LAB_01459920;
      in_stack_00000018 = *(undefined8 *)(lVar7 + 0x48);
      uVar16 = *(undefined8 *)(lVar7 + 0x40);
      in_stack_00000028 = *(undefined8 *)(lVar7 + 0x58);
      in_stack_00000020 = *(undefined8 *)(lVar7 + 0x50);
      in_stack_00000010 = uVar16;
      fVar13 = (float)FUN_01431624(&stack0x00000010,0);
      if (DAT_03774e1e == '\0') {
        thunk_FUN_00d48444();
        DAT_03774e1e = '\x01';
      }
      fVar13 = fVar13 - *(float *)(*(long *)(*unaff_x22 + 0xb8) + 8);
      fVar15 = (float)uVar16 - *(float *)(*(long *)(*unaff_x22 + 0xb8) + 0xc);
      if (unaff_s10 <= fVar13 * fVar13 + fVar15 * fVar15) {
LAB_01459668:
        lVar7 = *(long *)(unaff_x28 + 0x10);
        if (lVar7 == 0) goto LAB_01459920;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
        lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
        if (lVar7 == 0) goto LAB_01459920;
        in_stack_00000018 = *(undefined8 *)(lVar7 + 0x48);
        uVar16 = *(undefined8 *)(lVar7 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar7 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar7 + 0x50);
        in_stack_00000010 = uVar16;
        uVar14 = FUN_01431624(&stack0x00000010,0);
        in_stack_00000008 = CONCAT44((int)uVar16,uVar14);
        FUN_02691230(&stack0x00000008,*unaff_x27,0);
        lVar7 = *(long *)(unaff_x28 + 0x10);
        if (lVar7 == 0) goto LAB_01459920;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
        lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
        if (lVar7 == 0) goto LAB_01459920;
        in_stack_00000018 = *(undefined8 *)(lVar7 + 0x48);
        uVar16 = *(undefined8 *)(lVar7 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar7 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar7 + 0x50);
        in_stack_00000010 = uVar16;
        uVar14 = FUN_01431600(&stack0x00000010,0);
        in_stack_00000008 = CONCAT44((int)uVar16,uVar14);
        FUN_02691230(&stack0x00000008,*unaff_x27,0);
        FUN_0160dca4();
      }
      else {
        lVar7 = *(long *)(unaff_x28 + 0x10);
        if (lVar7 == 0) goto LAB_01459920;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_01459950;
        lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
        if (lVar7 == 0) goto LAB_01459920;
        in_stack_00000018 = *(undefined8 *)(lVar7 + 0x48);
        uVar16 = *(undefined8 *)(lVar7 + 0x40);
        in_stack_00000028 = *(undefined8 *)(lVar7 + 0x58);
        in_stack_00000020 = *(undefined8 *)(lVar7 + 0x50);
        in_stack_00000010 = uVar16;
        fVar13 = (float)FUN_01431600(&stack0x00000010,0);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444();
          DAT_03774d77 = '\x01';
        }
        fVar13 = fVar13 - **(float **)(*unaff_x22 + 0xb8);
        fVar15 = (float)uVar16 - (*(float **)(*unaff_x22 + 0xb8))[1];
        if (unaff_s10 <= fVar13 * fVar13 + fVar15 * fVar15) goto LAB_01459668;
      }
      uVar16 = *(undefined8 *)(unaff_x28 + 0x30);
      if (DAT_03774e1e == '\0') {
        thunk_FUN_00d48444();
        DAT_03774e1e = '\x01';
      }
      puVar10 = *(undefined8 **)(*unaff_x22 + 0xb8);
      fVar13 = (float)uVar16 - (float)puVar10[1];
      fVar15 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)puVar10[1] >> 0x20);
      if (unaff_s10 <= fVar13 * fVar13 + fVar15 * fVar15) {
LAB_0145979c:
        in_stack_00000008 = *(undefined8 *)(unaff_x28 + 0x30);
        FUN_02691230(&stack0x00000008,*unaff_x27,0);
        in_stack_00000008 = *(undefined8 *)(unaff_x28 + 0x28);
        FUN_02691230(&stack0x00000008,*unaff_x27,0);
        FUN_0160dca4();
      }
      else {
        uVar16 = *(undefined8 *)(unaff_x28 + 0x28);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444();
          DAT_03774d77 = '\x01';
          puVar10 = *(undefined8 **)(*unaff_x22 + 0xb8);
        }
        fVar13 = (float)uVar16 - (float)*puVar10;
        fVar15 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)*puVar10 >> 0x20);
        if (unaff_s10 <= fVar13 * fVar13 + fVar15 * fVar15) goto LAB_0145979c;
      }
      FUN_0160c8e8();
      while( true ) {
        lVar7 = *(long *)(unaff_x28 + 0x10);
        unaff_x26 = unaff_x26 + 1;
        if (lVar7 == 0) goto LAB_01459920;
        while( true ) {
          unaff_x23 = unaff_x26 - 4;
          if ((int)(uint)unaff_x23 < (int)*(uint *)(lVar7 + 0x18)) break;
          FUN_0160c8e8();
          FUN_0160c430();
          puVar4 = StringLiteral_13336;
          puVar3 = PTR_DAT_033f38b8;
          puVar2 = PTR_DAT_033ead30;
          lVar7 = *(long *)(unaff_x28 + 0x18);
          if (lVar7 == 0) goto LAB_01459920;
          iVar12 = 0;
          while( true ) {
            lVar7 = *(long *)(lVar7 + 0x10);
            if (lVar7 == 0) goto LAB_01459920;
            if (*(int *)(lVar7 + 0x18) <= iVar12) break;
            FUN_0132138c(lVar7,iVar12,&stack0x00000048,
                         *(undefined8 *)
                          Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                        );
            if ((in_stack_00000048 == 0) || (*(long *)(in_stack_00000048 + 0x10) == 0))
            goto LAB_01459920;
            uVar16 = FUN_0268b6ac(*(long *)(in_stack_00000048 + 0x10),0);
            FUN_015f5b28(uVar16,*(undefined8 *)puVar3,0);
            FUN_0160c430();
            lVar7 = *(long *)(unaff_x28 + 0x18);
            iVar12 = iVar12 + 1;
            if (lVar7 == 0) goto LAB_01459920;
          }
          FUN_0160c8e8();
          lVar7 = *(long *)(unaff_x19 + 0x58);
          in_stack_00000000._4_4_ = in_stack_00000000._4_4_ + 1;
          if (lVar7 == 0) goto LAB_01459920;
          if (*(int *)(lVar7 + 0x18) <= in_stack_00000000._4_4_) {
            return;
          }
          FUN_0132138c(lVar7,in_stack_00000000._4_4_,&stack0x00000048,
                       *(undefined8 *)PTR_DAT_033ee2d8);
          unaff_x28 = in_stack_00000048;
          FUN_0160c8e8();
          plVar5 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
          if (plVar5 == (long *)0x0) goto LAB_01459920;
          lVar7 = *(long *)puVar4;
          if ((lVar7 != 0) &&
             (lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
          goto LAB_01459954;
          if ((int)plVar5[3] == 0) goto LAB_01459950;
          plVar5[4] = *(long *)puVar4;
          if (unaff_x28 == 0) goto LAB_01459920;
          lVar7 = FUN_0176eb1c(unaff_x28 + 0x38,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_01459954;
          uVar11 = *(uint *)(plVar5 + 3);
          if (uVar11 < 2) goto LAB_01459950;
          plVar5[5] = lVar7;
          if (*(long *)
               Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ !=
              0) {
            lVar7 = thunk_FUN_00d6225c(*(long *)
                                        Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                       ,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar7 == 0) goto LAB_01459954;
            uVar11 = *(uint *)(plVar5 + 3);
          }
          if (uVar11 < 3) goto LAB_01459950;
          plVar5[6] = *(long *)
                       Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
          ;
          lVar7 = FUN_0176eb1c(unaff_x28 + 0x3c,0);
          if ((lVar7 != 0) &&
             (lVar8 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_01459954;
          uVar11 = *(uint *)(plVar5 + 3);
          if (uVar11 < 4) goto LAB_01459950;
          plVar5[7] = lVar7;
          lVar7 = *(long *)puVar2;
          if (lVar7 != 0) {
            lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar5 + 0x40));
            if (lVar7 == 0) goto LAB_01459954;
            uVar11 = *(uint *)(plVar5 + 3);
          }
          if (uVar11 < 5) goto LAB_01459950;
          plVar5[8] = *(long *)puVar2;
          FUN_01600844(plVar5,0);
          FUN_0160c430();
          lVar7 = *(long *)(unaff_x28 + 0x10);
          if (lVar7 == 0) goto LAB_01459920;
          unaff_x26 = 4;
        }
        if (*(uint *)(lVar7 + 0x18) <= (uint)unaff_x23) goto LAB_01459950;
        lVar7 = *(long *)(lVar7 + unaff_x26 * 8);
        if (lVar7 == 0) goto LAB_01459920;
        uVar6 = FUN_014440c0(lVar7,0);
        if ((uVar6 & 1) == 0) break;
        if ((*(long *)(unaff_x19 + 0x70) == 0) ||
           (FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_x23 & 0xffffffff,&stack0x00000048,
                         *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
        goto LAB_01459920;
        FUN_01600424(*unaff_x21,*(undefined8 *)(in_stack_00000048 + 0x10),
                     *(undefined8 *)
                      Method_System_Dynamic_Utils_ExpressionUtils_ValidateOneArgument__,0);
        FUN_0160c430();
        cVar1 = *(char *)(unaff_x19 + 0x49);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x80);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_01457470(unaff_x23 & 0xffffffff,cVar1 != '\0',uVar16);
        if ((uVar6 & 1) == 0) {
          FUN_0160c430();
        }
        else {
          lVar8 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
          lVar7 = *(long *)(lVar8 + 0x38);
          if (lVar7 == 0) {
            FUN_00d59478(lVar8);
            lVar7 = *(long *)(lVar8 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
            lVar7 = FUN_00d5941c();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x38) + 0x10) + 0x132) & 1) == 0) {
            FUN_00d5941c();
          }
          FUN_0160dd60();
        }
      }
      unaff_x24 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
      if (unaff_x24 == (long *)0x0) {
LAB_01459920:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*unaff_x21 != 0) &&
         (lVar7 = thunk_FUN_00d6225c(*unaff_x21,*(undefined8 *)(*unaff_x24 + 0x40)), lVar7 == 0))
      goto LAB_01459954;
      if ((int)unaff_x24[3] == 0) {
LAB_01459950:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_x24[4] = *unaff_x21;
      if ((*(long *)(unaff_x19 + 0x70) == 0) ||
         (FUN_0132138c(*(long *)(unaff_x19 + 0x70),unaff_x23 & 0xffffffff,&stack0x00000048,
                       *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
      goto LAB_01459920;
      unaff_x25 = *(long *)(in_stack_00000048 + 0x10);
    } while (unaff_x25 == 0);
    param_1 = thunk_FUN_00d6225c(unaff_x25,*(undefined8 *)(*unaff_x24 + 0x40));
  }
LAB_01459954:
  uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar16,0);
}


