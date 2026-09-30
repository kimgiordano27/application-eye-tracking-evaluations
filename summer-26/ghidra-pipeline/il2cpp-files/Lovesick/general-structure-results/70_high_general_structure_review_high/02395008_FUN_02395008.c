/*
FUNCTION_NAME: FUN_02395008
ENTRY_POINT: 02395008
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_02395008(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  uint uVar9;
  uint unaff_w20;
  undefined4 *unaff_x21;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined4 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000030;
  undefined2 *in_stack_00000038;
  long *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined4 *in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000088;
  byte in_stack_00000090;
  int in_stack_00000098;
  undefined2 uStack00000000000000b0;
  undefined1 uStack00000000000000b2;
  undefined1 uStack00000000000000b3;
  undefined8 in_stack_000000b8;
  byte in_stack_000000c0;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000160;
  undefined4 uStack0000000000000168;
  undefined2 uStack000000000000016c;
  long in_stack_00000198;
  undefined4 uStack00000000000001a0;
  undefined2 uStack00000000000001a4;
  undefined2 uStack00000000000001a6;
  byte in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001e0;
  long in_stack_000001e8;
  
  FUN_01323390();
  *(undefined8 *)(unaff_x27 + 0x58) = *(undefined8 *)(unaff_x27 + 200);
  *(undefined8 *)(unaff_x27 + 0x50) = *(undefined8 *)(unaff_x27 + 0xc0);
  in_stack_00000140 = in_stack_000001b0;
  while (uVar6 = FUN_012b894c(&stack0x00000130,
                              *(undefined8 *)
                               Method_UnityEngine_ProBuilder_ProBuilderMesh_GetCoincidentVertices__)
        , (uVar6 & 1) != 0) {
    uVar3 = FUN_00ad838c(&stack0x00000130,
                         *(undefined8 *)Method_System_Data_SqlTypes_SqlBoolean_CompareTo__);
    if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(in_stack_00000198 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(lVar8,uVar3,&stack0x000001a0,*(undefined8 *)System_IO_FileStream_TypeInfo);
    in_stack_00000128._4_2_ = *(undefined2 *)unaff_x21;
    in_stack_00000128._6_1_ = *(undefined1 *)((long)unaff_x21 + 2);
    uVar7 = *unaff_x19;
    in_stack_00000120 = unaff_x19[2];
    *(undefined8 *)(unaff_x27 + 0x38) = unaff_x19[1];
    *(undefined8 *)(unaff_x27 + 0x30) = uVar7;
    if ((in_stack_000001a8 & 1) == 0) {
      if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar8 = *(long *)(in_stack_00000198 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      *(undefined8 *)(unaff_x27 + 200) = *(undefined8 *)(unaff_x27 + 0x38);
      *(undefined8 *)(unaff_x27 + 0xc0) = *(undefined8 *)(unaff_x27 + 0x30);
      uStack00000000000000b0 = in_stack_00000128._4_2_;
      uStack00000000000000b2 = in_stack_00000128._6_1_;
      in_stack_000001b0 = in_stack_00000120;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_000000c0 = in_stack_000001a8;
      uVar11 = *(undefined8 *)(unaff_x27 + 200);
      uVar10 = *(undefined8 *)(unaff_x27 + 0xc0);
      uVar7 = *(undefined8 *)PTR_DAT_033efe70;
      *in_stack_00000038 = in_stack_00000128._4_2_;
      *(undefined1 *)(in_stack_00000038 + 1) = in_stack_00000128._6_1_;
      in_stack_00000030[2] = in_stack_00000120;
      in_stack_00000030[1] = uVar11;
      *in_stack_00000030 = uVar10;
      in_stack_000000b8 =
           CONCAT26(uStack00000000000001a6,CONCAT24(uStack00000000000001a4,uStack00000000000001a0));
      FUN_0132149c(lVar8,uVar3,&stack0x000000b8,uVar7);
    }
  }
  FUN_012b8948(&stack0x00000130,*(undefined8 *)StringLiteral_2313);
  lVar8 = in_stack_00000040[2];
  if (lVar8 == 0) goto LAB_02395590;
  if (*(uint *)(lVar8 + 0x18) <= unaff_w20) goto LAB_023955d0;
  lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
  if (lVar8 == 0) goto LAB_02395590;
  FUN_01323390(lVar8,&stack0x000001a0,
               *(undefined8 *)System_Xml_Schema_AllElementsContentValidator_TypeInfo);
  *(undefined8 *)(unaff_x27 + 0x58) = *(undefined8 *)(unaff_x27 + 200);
  *(undefined8 *)(unaff_x27 + 0x50) = *(undefined8 *)(unaff_x27 + 0xc0);
  in_stack_00000140 = in_stack_000001b0;
  while (uVar6 = FUN_012b894c(&stack0x00000130,
                              *(undefined8 *)
                               Method_UnityEngine_ProBuilder_ProBuilderMesh_GetCoincidentVertices__)
        , (uVar6 & 1) != 0) {
    uVar3 = FUN_00ad838c(&stack0x00000130,
                         *(undefined8 *)Method_System_Data_SqlTypes_SqlBoolean_CompareTo__);
    if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *(long *)(in_stack_00000198 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(lVar8,uVar3,&stack0x000001a0,*(undefined8 *)System_IO_FileStream_TypeInfo);
    in_stack_00000108 = *unaff_x21;
    uVar10 = unaff_x29[1];
    uVar7 = *unaff_x29;
    in_stack_000001e0 = *(undefined4 *)(unaff_x29 + 2);
    *(undefined4 *)(unaff_x27 + 0x2b) = *(undefined4 *)((long)unaff_x21 + 3);
    *(undefined8 *)(unaff_x27 + 0xf8) = uVar10;
    *(undefined8 *)(unaff_x27 + 0xf0) = uVar7;
    if ((in_stack_000001a8 & 1) == 0) {
      if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar8 = *(long *)(in_stack_00000198 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      _uStack00000000000000b3 = *(undefined4 *)(unaff_x27 + 0x2b);
      lVar8 = *(long *)(lVar8 + unaff_x26 * 8 + 0x20);
      uStack00000000000000b0 = (undefined2)in_stack_00000108;
      uStack00000000000000b2 = (undefined1)((uint)in_stack_00000108 >> 0x10);
      *(undefined8 *)(unaff_x27 + 200) = *(undefined8 *)(unaff_x27 + 0xf8);
      *(undefined8 *)(unaff_x27 + 0xc0) = *(undefined8 *)(unaff_x27 + 0xf0);
      in_stack_000001b0 = CONCAT44(in_stack_000001b0._4_4_,in_stack_000001e0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000090 = in_stack_000001a8;
      uVar11 = *(undefined8 *)(unaff_x27 + 200);
      uVar10 = *(undefined8 *)(unaff_x27 + 0xc0);
      uVar7 = *(undefined8 *)PTR_DAT_033efe70;
      *(undefined4 *)((long)in_stack_00000050 + 3) = _uStack00000000000000b3;
      *in_stack_00000050 = CONCAT13(uStack00000000000000b3,(int3)in_stack_00000108);
      in_stack_00000098 = in_stack_00000058._4_4_;
      *(undefined4 *)(in_stack_00000048 + 2) = in_stack_000001e0;
      in_stack_00000048[1] = uVar11;
      *in_stack_00000048 = uVar10;
      in_stack_00000088 =
           CONCAT26(uStack00000000000001a6,CONCAT24(uStack00000000000001a4,uStack00000000000001a0));
      FUN_0132149c(lVar8,uVar3,&stack0x00000088,uVar7);
    }
  }
  FUN_012b8948(&stack0x00000130,*(undefined8 *)StringLiteral_2313);
  puVar1 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
  uVar9 = unaff_w20 + 1;
  if (uVar9 == 2) {
    if (in_stack_00000198 == 0) goto LAB_02395590;
    lVar8 = *(long *)(in_stack_00000198 + 0x10);
    uStack00000000000001a0 = uStack0000000000000168;
    uStack00000000000001a4 = uStack000000000000016c;
    if (lVar8 == 0) goto LAB_02395590;
    in_stack_00000068 = in_stack_00000020;
    uVar7 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsubl_s16__;
    *(undefined2 *)(in_stack_00000010 + 1) = uStack000000000000016c;
    *in_stack_00000010 = uStack0000000000000168;
    FUN_00caa0bc(lVar8,&stack0x00000068,uVar7);
    lVar8 = *(long *)(in_stack_00000018 + 0x80);
    if (lVar8 == 0) goto LAB_02395590;
    if (*(int *)(lVar8 + 0x18) <= in_stack_00000058._4_4_ + 1) {
      if (*(long *)(in_stack_00000008 + 0x28) == in_stack_000001e8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_stack_00000040 =
         (long *)FUN_012a8730(lVar8,in_stack_00000058._4_4_ + 1,*(undefined8 *)StringLiteral_1975);
    puVar2 = Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
    uStack0000000000000168 = 0;
    uStack000000000000016c = 0;
    if (*in_stack_00000040 == 0) goto LAB_02395590;
    unaff_x23 = (long *)FUN_00da4fb8(*(undefined8 *)
                                      Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__,2
                                    );
    in_stack_00000060 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,2);
    uVar9 = 0;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar8 == 0) ||
     (FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48), unaff_x23 == (long *)0x0))
  goto LAB_02395590;
  lVar4 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*unaff_x23 + 0x40));
  if (lVar4 == 0) {
LAB_023955d4:
    uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar7,0);
  }
  if (*(uint *)(unaff_x23 + 3) <= uVar9) goto LAB_023955d0;
  lVar4 = (long)(int)uVar9;
  unaff_x23[lVar4 + 4] = lVar8;
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                              UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
  if (lVar8 != 0) {
    FUN_01320e50(lVar8,*(undefined8 *)PTR_DAT_033f6e48);
    if (in_stack_00000060 != (long *)0x0) {
      lVar5 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*in_stack_00000060 + 0x40));
      if (lVar5 == 0) goto LAB_023955d4;
      if (*(uint *)(in_stack_00000060 + 3) <= uVar9) {
LAB_023955d0:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      in_stack_00000060[lVar4 + 4] = lVar8;
      if ((*in_stack_00000040 != 0) && (lVar8 = *(long *)(*in_stack_00000040 + 0x58), lVar8 != 0)) {
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_023955d0;
        lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
        if (lVar8 != 0) {
          FUN_01323390(lVar8,&stack0x000001a0,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_lane_f64__);
          *(undefined8 *)(unaff_x27 + 0x78) = *(undefined8 *)(unaff_x27 + 200);
          *(undefined8 *)(unaff_x27 + 0x70) = *(undefined8 *)(unaff_x27 + 0xc0);
          in_stack_00000160 = in_stack_000001b0;
          while (uVar6 = FUN_012b894c(&stack0x00000150,
                                      *(undefined8 *)
                                       UnityEngine_Rendering_HableCurve_Segment_TypeInfo),
                (uVar6 & 1) != 0) {
            uVar7 = FUN_00ca99bc(&stack0x00000150,*(undefined8 *)StringLiteral_6339);
            if (*(uint *)(unaff_x23 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar8 = unaff_x23[lVar4 + 4];
            if (*(int *)(*(long *)System_Xml_Schema_LocatedActiveAxis_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_0239b240(uVar7,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c(uVar6,uVar6 & 0xffffffff);
            }
            FUN_00ac20f0(lVar8,uVar6 & 0xffffffff,*(undefined8 *)StringLiteral_4747);
          }
          FUN_012b8948(&stack0x00000150,
                       *(undefined8 *)
                        Method_UnityEngine_Component_GetComponentInChildren<ObiRopeCursor>__);
          if ((*in_stack_00000040 != 0) &&
             (lVar8 = *(long *)(*in_stack_00000040 + 0x60), lVar8 != 0)) {
            if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_023955d0;
            lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
            if (lVar8 != 0) {
              FUN_01323390(lVar8,&stack0x000001a0,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_lane_f64__);
              *(undefined8 *)(unaff_x27 + 0x78) = *(undefined8 *)(unaff_x27 + 200);
              *(undefined8 *)(unaff_x27 + 0x70) = *(undefined8 *)(unaff_x27 + 0xc0);
              in_stack_00000160 = in_stack_000001b0;
              while (uVar6 = FUN_012b894c(&stack0x00000150,
                                          *(undefined8 *)
                                           UnityEngine_Rendering_HableCurve_Segment_TypeInfo),
                    (uVar6 & 1) != 0) {
                uVar7 = FUN_00ca99bc(&stack0x00000150,*(undefined8 *)StringLiteral_6339);
                if (*(uint *)(in_stack_00000060 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar8 = in_stack_00000060[lVar4 + 4];
                if (*(int *)(*(long *)System_Xml_Schema_LocatedActiveAxis_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_0239b240(uVar7,0);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c(uVar6,uVar6 & 0xffffffff);
                }
                FUN_00ac20f0(lVar8,uVar6 & 0xffffffff,*(undefined8 *)StringLiteral_4747);
              }
              FUN_012b8948(&stack0x00000150,
                           *(undefined8 *)
                            Method_UnityEngine_Component_GetComponentInChildren<ObiRopeCursor>__);
              lVar8 = in_stack_00000040[1];
              if (lVar8 != 0) {
                if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_023955d0;
                lVar8 = *(long *)(lVar8 + lVar4 * 8 + 0x20);
                if (lVar8 != 0) {
                  FUN_0239596c(System_Xml_Schema_AllElementsContentValidator_TypeInfo,lVar8,
                               &stack0x000001a0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02395590:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


