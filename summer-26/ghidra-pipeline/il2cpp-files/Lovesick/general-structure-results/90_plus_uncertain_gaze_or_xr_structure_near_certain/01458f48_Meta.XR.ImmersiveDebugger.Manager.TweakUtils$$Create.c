/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakUtils$$Create
ENTRY_POINT: 01458f48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_possible_biometrics_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakUtils__Create(void)

{
  char cVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int in_w8;
  uint uVar14;
  undefined8 *puVar15;
  long unaff_x19;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  if (in_w8 < 1) {
LAB_01458fd8:
    puVar7 = StringLiteral_13560;
    puVar6 = StringLiteral_3287;
    puVar5 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
    puVar4 = Method_Obi_ObiNativeList<Aabb>_Dispose__;
    fVar2 = DAT_028aa020;
    lVar8 = *(long *)(unaff_x19 + 0x58);
    if (lVar8 != 0) {
      iVar16 = 0;
      plVar22 = (long *)StringLiteral_13336;
      plVar13 = (long *)PTR_DAT_033ead30;
      while( true ) {
        if (*(int *)(lVar8 + 0x18) <= iVar16) {
          return;
        }
        FUN_0132138c(lVar8,iVar16,&stack0x00000048,*(undefined8 *)PTR_DAT_033ee2d8);
        lVar8 = in_stack_00000048;
        FUN_0160c8e8();
        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
        if (plVar9 == (long *)0x0) break;
        if ((*plVar22 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(*plVar22,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_01459954:
          uVar21 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar21,0);
        }
        if ((int)plVar9[3] == 0) goto LAB_01459950;
        plVar9[4] = *plVar22;
        if (lVar8 == 0) break;
        lVar10 = FUN_0176eb1c(lVar8 + 0x38,0);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_01459954;
        uVar17 = *(uint *)(plVar9 + 3);
        if (uVar17 < 2) {
LAB_01459950:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[5] = lVar10;
        if (*(long *)
             Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__ != 0)
        {
          lVar10 = thunk_FUN_00d6225c(*(long *)
                                       Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                      ,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_01459954;
          uVar17 = *(uint *)(plVar9 + 3);
        }
        if (uVar17 < 3) goto LAB_01459950;
        plVar9[6] = *(long *)
                     Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
        ;
        lVar10 = FUN_0176eb1c(lVar8 + 0x3c,0);
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
        goto LAB_01459954;
        uVar17 = *(uint *)(plVar9 + 3);
        if (uVar17 < 4) goto LAB_01459950;
        plVar9[7] = lVar10;
        if (*plVar13 != 0) {
          lVar10 = thunk_FUN_00d6225c(*plVar13,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar10 == 0) goto LAB_01459954;
          uVar17 = *(uint *)(plVar9 + 3);
        }
        if (uVar17 < 5) goto LAB_01459950;
        plVar9[8] = *plVar13;
        FUN_01600844(plVar9,0);
        FUN_0160c430();
        lVar10 = *(long *)(lVar8 + 0x10);
        if (lVar10 == 0) break;
        lVar11 = 4;
        while( true ) {
          uVar19 = lVar11 - 4;
          uVar17 = (uint)uVar19;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar17) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
          lVar10 = *(long *)(lVar10 + lVar11 * 8);
          if (lVar10 == 0) goto LAB_01459920;
          uVar12 = FUN_014440c0(lVar10,0);
          if ((uVar12 & 1) == 0) {
            plVar13 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,9);
            if (plVar13 == (long *)0x0) goto LAB_01459920;
            if ((*(long *)puVar4 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(*(long *)puVar4,*(undefined8 *)(*plVar13 + 0x40)),
               lVar10 == 0)) goto LAB_01459954;
            if ((int)plVar13[3] == 0) goto LAB_01459950;
            plVar13[4] = *(long *)puVar4;
            if ((*(long *)(unaff_x19 + 0x70) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar19 & 0xffffffff,&stack0x00000048,
                             *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
            goto LAB_01459920;
            lVar10 = *(long *)(in_stack_00000048 + 0x10);
            if ((lVar10 != 0) &&
               (lVar20 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar20 == 0))
            goto LAB_01459954;
            uVar14 = *(uint *)(plVar13 + 3);
            if (uVar14 < 2) goto LAB_01459950;
            plVar13[5] = lVar10;
            if (*(long *)puVar6 != 0) {
              lVar10 = thunk_FUN_00d6225c(*(long *)puVar6,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar10 == 0) goto LAB_01459954;
              uVar14 = *(uint *)(plVar13 + 3);
            }
            if (uVar14 < 3) goto LAB_01459950;
            plVar13[6] = *(long *)puVar6;
            lVar10 = *(long *)(lVar8 + 0x10);
            if (lVar10 == 0) goto LAB_01459920;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
            lVar10 = *(long *)(lVar10 + lVar11 * 8);
            if (lVar10 == 0) goto LAB_01459920;
            lVar10 = FUN_01444238(lVar10,0);
            if ((lVar10 != 0) &&
               (lVar20 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar20 == 0))
            goto LAB_01459954;
            uVar14 = *(uint *)(plVar13 + 3);
            if (uVar14 < 4) goto LAB_01459950;
            plVar13[7] = lVar10;
            if (*(long *)puVar6 != 0) {
              lVar10 = thunk_FUN_00d6225c(*(long *)puVar6,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar10 == 0) goto LAB_01459954;
              uVar14 = *(uint *)(plVar13 + 3);
            }
            if (uVar14 < 5) goto LAB_01459950;
            plVar13[8] = *(long *)puVar6;
            lVar10 = *(long *)(lVar8 + 0x10);
            if (lVar10 == 0) goto LAB_01459920;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
            lVar10 = *(long *)(lVar10 + lVar11 * 8);
            if (lVar10 == 0) goto LAB_01459920;
            in_stack_00000038._4_4_ = FUN_01444120(lVar10,0);
            lVar10 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
            if ((lVar10 != 0) &&
               (lVar20 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar20 == 0))
            goto LAB_01459954;
            uVar14 = *(uint *)(plVar13 + 3);
            if (uVar14 < 6) goto LAB_01459950;
            plVar13[9] = lVar10;
            if (*(long *)
                 Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                != 0) {
              lVar10 = thunk_FUN_00d6225c(*(long *)
                                           Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
                                          ,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar10 == 0) goto LAB_01459954;
              uVar14 = *(uint *)(plVar13 + 3);
            }
            if (uVar14 < 7) goto LAB_01459950;
            plVar13[10] = *(long *)
                           Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__
            ;
            lVar10 = *(long *)(lVar8 + 0x10);
            if (lVar10 == 0) goto LAB_01459920;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
            lVar10 = *(long *)(lVar10 + lVar11 * 8);
            if (lVar10 == 0) goto LAB_01459920;
            in_stack_00000038._4_4_ = FUN_014441ac(lVar10,0);
            lVar10 = FUN_0176eb1c((long)&stack0x00000038 + 4,0);
            if ((lVar10 != 0) &&
               (lVar20 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar20 == 0))
            goto LAB_01459954;
            uVar14 = *(uint *)(plVar13 + 3);
            if (uVar14 < 8) goto LAB_01459950;
            plVar13[0xb] = lVar10;
            if (*(long *)System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo != 0)
            {
              lVar10 = thunk_FUN_00d6225c(*(long *)
                                           System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                                          ,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar10 == 0) goto LAB_01459954;
              uVar14 = *(uint *)(plVar13 + 3);
            }
            if (uVar14 < 9) goto LAB_01459950;
            plVar13[0xc] = *(long *)
                            System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
            FUN_01600844(plVar13,0);
            FUN_0160c430();
            lVar10 = *(long *)(lVar8 + 0x10);
            if (lVar10 == 0) goto LAB_01459920;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
            lVar10 = *(long *)(lVar10 + lVar11 * 8);
            if (lVar10 == 0) goto LAB_01459920;
            in_stack_00000018 = *(undefined8 *)(lVar10 + 0x48);
            uVar21 = *(undefined8 *)(lVar10 + 0x40);
            in_stack_00000028 = *(undefined8 *)(lVar10 + 0x58);
            in_stack_00000020 = *(undefined8 *)(lVar10 + 0x50);
            in_stack_00000010 = uVar21;
            fVar23 = (float)FUN_01431624(&stack0x00000010,0);
            if (DAT_03774e1e == '\0') {
              thunk_FUN_00d48444(puVar5);
              DAT_03774e1e = '\x01';
            }
            fVar23 = fVar23 - *(float *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
            fVar25 = (float)uVar21 - *(float *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc);
            if (fVar2 <= fVar23 * fVar23 + fVar25 * fVar25) {
LAB_01459668:
              lVar10 = *(long *)(lVar8 + 0x10);
              if (lVar10 == 0) goto LAB_01459920;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
              lVar10 = *(long *)(lVar10 + lVar11 * 8);
              if (lVar10 == 0) goto LAB_01459920;
              in_stack_00000018 = *(undefined8 *)(lVar10 + 0x48);
              uVar21 = *(undefined8 *)(lVar10 + 0x40);
              in_stack_00000028 = *(undefined8 *)(lVar10 + 0x58);
              in_stack_00000020 = *(undefined8 *)(lVar10 + 0x50);
              in_stack_00000010 = uVar21;
              uVar24 = FUN_01431624(&stack0x00000010,0);
              in_stack_00000008 = CONCAT44((int)uVar21,uVar24);
              FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
              lVar10 = *(long *)(lVar8 + 0x10);
              if (lVar10 == 0) goto LAB_01459920;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
              lVar10 = *(long *)(lVar10 + lVar11 * 8);
              if (lVar10 == 0) goto LAB_01459920;
              in_stack_00000018 = *(undefined8 *)(lVar10 + 0x48);
              uVar21 = *(undefined8 *)(lVar10 + 0x40);
              in_stack_00000028 = *(undefined8 *)(lVar10 + 0x58);
              in_stack_00000020 = *(undefined8 *)(lVar10 + 0x50);
              in_stack_00000010 = uVar21;
              uVar24 = FUN_01431600(&stack0x00000010,0);
              in_stack_00000008 = CONCAT44((int)uVar21,uVar24);
              FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
              FUN_0160dca4();
            }
            else {
              lVar10 = *(long *)(lVar8 + 0x10);
              if (lVar10 == 0) goto LAB_01459920;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_01459950;
              lVar10 = *(long *)(lVar10 + lVar11 * 8);
              if (lVar10 == 0) goto LAB_01459920;
              in_stack_00000018 = *(undefined8 *)(lVar10 + 0x48);
              uVar21 = *(undefined8 *)(lVar10 + 0x40);
              in_stack_00000028 = *(undefined8 *)(lVar10 + 0x58);
              in_stack_00000020 = *(undefined8 *)(lVar10 + 0x50);
              in_stack_00000010 = uVar21;
              fVar23 = (float)FUN_01431600(&stack0x00000010,0);
              if (DAT_03774d77 == '\0') {
                thunk_FUN_00d48444(puVar5);
                DAT_03774d77 = '\x01';
              }
              fVar23 = fVar23 - **(float **)(*(long *)puVar5 + 0xb8);
              fVar25 = (float)uVar21 - (*(float **)(*(long *)puVar5 + 0xb8))[1];
              if (fVar2 <= fVar23 * fVar23 + fVar25 * fVar25) goto LAB_01459668;
            }
            uVar21 = *(undefined8 *)(lVar8 + 0x30);
            if (DAT_03774e1e == '\0') {
              thunk_FUN_00d48444(puVar5);
              DAT_03774e1e = '\x01';
            }
            puVar15 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
            fVar23 = (float)uVar21 - (float)puVar15[1];
            fVar25 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)puVar15[1] >> 0x20);
            if (fVar2 <= fVar23 * fVar23 + fVar25 * fVar25) {
LAB_0145979c:
              in_stack_00000008 = *(undefined8 *)(lVar8 + 0x30);
              FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
              in_stack_00000008 = *(undefined8 *)(lVar8 + 0x28);
              FUN_02691230(&stack0x00000008,*(undefined8 *)puVar7,0);
              FUN_0160dca4();
            }
            else {
              uVar21 = *(undefined8 *)(lVar8 + 0x28);
              if (DAT_03774d77 == '\0') {
                thunk_FUN_00d48444(puVar5);
                DAT_03774d77 = '\x01';
                puVar15 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
              }
              fVar23 = (float)uVar21 - (float)*puVar15;
              fVar25 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)*puVar15 >> 0x20);
              if (fVar2 <= fVar23 * fVar23 + fVar25 * fVar25) goto LAB_0145979c;
            }
            FUN_0160c8e8();
          }
          else {
            if ((*(long *)(unaff_x19 + 0x70) == 0) ||
               (FUN_0132138c(*(long *)(unaff_x19 + 0x70),uVar19 & 0xffffffff,&stack0x00000048,
                             *(undefined8 *)StringLiteral_11624), in_stack_00000048 == 0))
            goto LAB_01459920;
            FUN_01600424(*(undefined8 *)puVar4,*(undefined8 *)(in_stack_00000048 + 0x10),
                         *(undefined8 *)
                          Method_System_Dynamic_Utils_ExpressionUtils_ValidateOneArgument__,0);
            FUN_0160c430();
            cVar1 = *(char *)(unaff_x19 + 0x49);
            uVar21 = *(undefined8 *)(unaff_x19 + 0x80);
            if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_01457470(uVar19 & 0xffffffff,cVar1 != '\0',uVar21);
            if ((uVar19 & 1) == 0) {
              FUN_0160c430();
            }
            else {
              lVar20 = *(long *)Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
              lVar10 = *(long *)(lVar20 + 0x38);
              if (lVar10 == 0) {
                FUN_00d59478(lVar20);
                lVar10 = *(long *)(lVar20 + 0x38);
              }
              lVar10 = *(long *)(lVar10 + 0x10);
              if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                lVar10 = FUN_00d5941c();
              }
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if ((*(byte *)(*(long *)(*(long *)(lVar20 + 0x38) + 0x10) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              FUN_0160dd60();
            }
          }
          lVar10 = *(long *)(lVar8 + 0x10);
          lVar11 = lVar11 + 1;
          if (lVar10 == 0) goto LAB_01459920;
        }
        FUN_0160c8e8();
        FUN_0160c430();
        plVar22 = (long *)StringLiteral_13336;
        puVar3 = PTR_DAT_033f38b8;
        plVar13 = (long *)PTR_DAT_033ead30;
        lVar10 = *(long *)(lVar8 + 0x18);
        if (lVar10 == 0) break;
        iVar18 = 0;
        while( true ) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) goto LAB_01459920;
          if (*(int *)(lVar10 + 0x18) <= iVar18) break;
          FUN_0132138c(lVar10,iVar18,&stack0x00000048,
                       *(undefined8 *)
                        Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
                      );
          if ((in_stack_00000048 == 0) || (*(long *)(in_stack_00000048 + 0x10) == 0))
          goto LAB_01459920;
          uVar21 = FUN_0268b6ac(*(long *)(in_stack_00000048 + 0x10),0);
          FUN_015f5b28(uVar21,*(undefined8 *)puVar3,0);
          FUN_0160c430();
          lVar10 = *(long *)(lVar8 + 0x18);
          iVar18 = iVar18 + 1;
          if (lVar10 == 0) goto LAB_01459920;
        }
        FUN_0160c8e8();
        lVar8 = *(long *)(unaff_x19 + 0x58);
        iVar16 = iVar16 + 1;
        if (lVar8 == 0) break;
      }
    }
  }
  else {
    FUN_0160c430();
    puVar4 = Mono_Net_Security_MonoSslClientAuthenticationOptions_TypeInfo;
    lVar8 = *(long *)(unaff_x19 + 0x78);
    if (lVar8 != 0) {
      iVar16 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar16) {
          FUN_0160c8c8();
          goto LAB_01458fd8;
        }
        FUN_0132138c(lVar8,iVar16,&stack0x00000048,*(undefined8 *)puVar4);
        FUN_0160c430();
        FUN_0160c430();
        lVar8 = *(long *)(unaff_x19 + 0x78);
        iVar16 = iVar16 + 1;
      } while (lVar8 != 0);
    }
  }
LAB_01459920:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


