/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.GridSliceResizer$$OnDestroy
ENTRY_POINT: 01475b54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 99
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_GridSliceResizer__OnDestroy(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint uVar14;
  long lVar15;
  long *unaff_x27;
  undefined8 *unaff_x28;
  float fVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if ((param_1 != 0) &&
     (lVar8 = thunk_FUN_00d6225c(param_1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar8 == 0)) {
LAB_01476224:
    uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,0);
  }
  uVar14 = *(uint *)(unaff_x22 + 3);
  if (9 < uVar14) {
    unaff_x22[0xd] = param_1;
    puVar3 = Method_System_Collections_Generic_List<byte[]>_get_Count__;
    if (*(long *)Method_System_Collections_Generic_List<byte[]>_get_Count__ != 0) {
      lVar8 = thunk_FUN_00d6225c(*(long *)Method_System_Collections_Generic_List<byte[]>_get_Count__
                                 ,*(undefined8 *)(*unaff_x22 + 0x40));
      if (lVar8 == 0) goto LAB_01476224;
      uVar14 = *(uint *)(unaff_x22 + 3);
    }
    if (10 < uVar14) {
      unaff_x22[0xe] = *(long *)puVar3;
      uVar9 = FUN_01600844();
      FUN_02660dac(uVar9,0);
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_0267017c(*(long *)(unaff_x19 + 0x48),0,0);
        uVar9 = FUN_0267c994(*(undefined8 *)(unaff_x19 + 0x28),0);
        lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
        if (lVar8 != 0) {
          FUN_0267d648(lVar8,uVar9,0);
          *(long *)(unaff_x19 + 0x40) = lVar8;
          FUN_0267dd48(lVar8,*(undefined8 *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x48),0);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_0267da4c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(long *)(unaff_x19 + 0x40),
                         *(undefined8 *)(unaff_x19 + 0x18),0);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                      );
            if (lVar8 != 0) {
              FUN_0160ac8c(lVar8,*(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,0);
              if (0 < *(int *)(unaff_x20 + 0x18)) {
                lVar15 = 0;
                do {
                  plVar10 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
                  if (plVar10 == (long *)0x0) goto LAB_01476220;
                  if ((*(long *)StringLiteral_1291 != 0) &&
                     (lVar11 = thunk_FUN_00d6225c(*(long *)StringLiteral_1291,
                                                  *(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
                  goto LAB_01476224;
                  if ((int)plVar10[3] == 0) goto LAB_0147621c;
                  plVar10[4] = *(long *)StringLiteral_1291;
                  lVar11 = *(long *)(unaff_x19 + 0x30);
                  if (lVar11 == 0) goto LAB_01476220;
                  if (*(uint *)(lVar11 + 0x18) <= (uint)lVar15) goto LAB_0147621c;
                  lVar11 = *(long *)(lVar11 + lVar15 * 8 + 0x20);
                  if (lVar11 == 0) goto LAB_01476220;
                  lVar11 = FUN_0268b6ac(lVar11,0);
                  if ((lVar11 != 0) &&
                     (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar12 == 0)) goto LAB_01476224;
                  uVar14 = *(uint *)(plVar10 + 3);
                  if (uVar14 < 2) goto LAB_0147621c;
                  plVar10[5] = lVar11;
                  if (*unaff_x27 != 0) {
                    lVar11 = thunk_FUN_00d6225c(*unaff_x27,*(undefined8 *)(*plVar10 + 0x40));
                    if (lVar11 == 0) goto LAB_01476224;
                    uVar14 = *(uint *)(plVar10 + 3);
                  }
                  if (uVar14 < 3) goto LAB_0147621c;
                  plVar10[6] = *unaff_x27;
                  if (unaff_x21 == 0) goto LAB_01476220;
                  if (*(uint *)(unaff_x21 + 0x18) <= (uint)lVar15) goto LAB_0147621c;
                  puVar1 = (undefined8 *)(unaff_x21 + 0x20 + lVar15 * 0x10);
                  in_stack_00000078 = puVar1[1];
                  in_stack_00000070 = *puVar1;
                  lVar11 = FUN_02688894(&stack0x00000070,0);
                  if ((lVar11 != 0) &&
                     (lVar12 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar10 + 0x40)),
                     lVar12 == 0)) goto LAB_01476224;
                  uVar14 = *(uint *)(plVar10 + 3);
                  if (uVar14 < 4) goto LAB_0147621c;
                  plVar10[7] = lVar11;
                  if (*(long *)PTR_DAT_033ead30 != 0) {
                    lVar11 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ead30,
                                                *(undefined8 *)(*plVar10 + 0x40));
                    if (lVar11 == 0) goto LAB_01476224;
                    uVar14 = *(uint *)(plVar10 + 3);
                  }
                  if (uVar14 < 5) goto LAB_0147621c;
                  plVar10[8] = *(long *)PTR_DAT_033ead30;
                  uVar9 = FUN_01600844(plVar10,0);
                  FUN_0160c430(lVar8,uVar9,0);
                  lVar15 = lVar15 + 1;
                } while ((int)lVar15 < *(int *)(unaff_x20 + 0x18));
              }
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02660dac(lVar8,0);
              FUN_02660dac(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vext_s32__,0);
              lVar8 = FUN_0113ab94(*(undefined8 *)PTR_DAT_033ec408);
              *(long *)(unaff_x19 + 0x38) = lVar8;
              if (lVar8 != 0) {
                *(undefined4 *)(lVar8 + 0x1c) = 0;
                uVar9 = FUN_00da4fb8(*(undefined8 *)StringLiteral_6979,
                                     *(undefined4 *)(unaff_x20 + 0x18));
                *(undefined8 *)(lVar8 + 0x20) = uVar9;
                plVar10 = *(long **)(unaff_x19 + 0x48);
                if (plVar10 != (long *)0x0) {
                  iVar6 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
                  plVar10 = *(long **)(unaff_x19 + 0x48);
                  if (plVar10 != (long *)0x0) {
                    iVar7 = (**(code **)(*plVar10 + 0x1a8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                    if (0 < *(int *)(unaff_x20 + 0x18)) {
                      if (unaff_x21 == 0) goto LAB_01476220;
                      fVar19 = 2.0 / (float)iVar6;
                      fVar20 = 2.0 / (float)iVar7;
                      lVar8 = 0;
                      do {
                        uVar14 = (uint)lVar8;
                        if (*(uint *)(unaff_x21 + 0x18) <= uVar14) goto LAB_0147621c;
                        puVar2 = (ulong *)(unaff_x21 + 0x20 + lVar8 * 0x10);
                        in_stack_00000068 = puVar2[1];
                        in_stack_00000060 = *puVar2;
                        fVar16 = (float)FUN_02688390(&stack0x00000060,0);
                        FUN_02688398(fVar19 + fVar16,&stack0x00000060,0);
                        fVar16 = (float)FUN_026883a0(&stack0x00000060,0);
                        FUN_026883a8(fVar20 + fVar16,&stack0x00000060,0);
                        fVar16 = (float)FUN_026884c4(&stack0x00000060,0);
                        FUN_026884cc(fVar16 - (fVar19 + fVar19),&stack0x00000060,0);
                        fVar16 = (float)FUN_026884d4(&stack0x00000060,0);
                        FUN_026884dc(fVar16 - (fVar20 + fVar20),&stack0x00000060,0);
                        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                           (lVar15 = *(long *)(unaff_x19 + 0x30), lVar15 == 0)) goto LAB_01476220;
                        if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0147621c;
                        plVar10 = *(long **)(*(long *)(unaff_x19 + 0x38) + 0x20);
                        uVar17 = in_stack_00000060 & 0xffffffff;
                        uVar4 = in_stack_00000060._4_4_;
                        uVar9 = *(undefined8 *)(lVar15 + lVar8 * 8 + 0x20);
                        uVar18 = in_stack_00000068 & 0xffffffff;
                        uVar5 = in_stack_00000068._4_4_;
                        _uStack0000000000000050 = 0;
                        _uStack0000000000000058 = 0;
                        FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000050,0);
                        uStack0000000000000040 = 0;
                        uStack0000000000000044 = 0;
                        uStack0000000000000048 = 0;
                        uStack000000000000004c = 0;
                        FUN_0268834c(0,0,0x3f800000,0x3f800000,&stack0x00000040,0);
                        uStack0000000000000030 = 0;
                        uStack0000000000000034 = 0;
                        uStack0000000000000038 = 0;
                        uStack000000000000003c = 0;
                        FUN_0268834c(0,0,0,0,&stack0x00000030,0);
                        lVar15 = *(long *)(unaff_x19 + 0x30);
                        if (lVar15 == 0) goto LAB_01476220;
                        if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0147621c;
                        lVar15 = *(long *)(lVar15 + lVar8 * 8 + 0x20);
                        if (lVar15 == 0) goto LAB_01476220;
                        uVar13 = FUN_0268b6ac(lVar15,0);
                        lVar15 = thunk_FUN_00d62348(*unaff_x28);
                        if (lVar15 == 0) goto LAB_01476220;
                        FUN_013e7d0c(uVar17,uVar4,uVar18,uVar5,uStack0000000000000050,
                                     uStack0000000000000054,uStack0000000000000058,
                                     uStack000000000000005c,lVar15,uVar9,1,0,uVar13,0);
                        if (plVar10 == (long *)0x0) goto LAB_01476220;
                        lVar11 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar10 + 0x40));
                        if (lVar11 == 0) goto LAB_01476224;
                        if (*(uint *)(plVar10 + 3) <= uVar14) goto LAB_0147621c;
                        plVar10[lVar8 + 4] = lVar15;
                        lVar8 = lVar8 + 1;
                      } while ((int)lVar8 < *(int *)(unaff_x20 + 0x18));
                    }
                    lVar8 = *(long *)(unaff_x19 + 0x38);
                    uVar9 = FUN_00da4fb8(*(undefined8 *)
                                          Method_System_Xml_Schema_Compiler_CompileAttribute__,1);
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x28) = uVar9;
                      if (*(long *)(unaff_x19 + 0x38) != 0) {
                        plVar10 = *(long **)(*(long *)(unaff_x19 + 0x38) + 0x28);
                        lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5607);
                        if ((lVar8 != 0) && (FUN_013e7004(lVar8,0), plVar10 != (long *)0x0)) {
                          lVar15 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar10 + 0x40));
                          if (lVar15 == 0) goto LAB_01476224;
                          if ((int)plVar10[3] == 0) goto LAB_0147621c;
                          plVar10[4] = lVar8;
                          if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                             (lVar8 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28), lVar8 != 0)) {
                            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0147621c;
                            if (*(long *)(lVar8 + 0x20) != 0) {
                              *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x10) =
                                   *(undefined8 *)(unaff_x19 + 0x40);
                              if (*(long *)(lVar8 + 0x20) != 0) {
                                *(undefined1 *)(*(long *)(lVar8 + 0x20) + 0x18) = 0;
                                lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventCallbackListPool_TypeInfo
                                                  );
                                if (lVar8 != 0) {
                                  FUN_01320e50(lVar8,*(undefined8 *)
                                                                                                            
                                                  Method_System_Xml_Schema_XsdBuilder_BuildElement_MinOccurs__
                                              );
                                  FUN_01322050(lVar8,*(undefined8 *)(unaff_x19 + 0x30),
                                               *(undefined8 *)StringLiteral_4785);
                                  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
                                     (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28),
                                     lVar15 != 0)) {
                                    if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0147621c;
                                    if (*(long *)(lVar15 + 0x20) != 0) {
                                      *(long *)(*(long *)(lVar15 + 0x20) + 0x20) = lVar8;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_01476220:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_0147621c:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


