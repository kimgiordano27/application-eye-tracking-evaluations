/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.GridSliceResizer$$OnDrawGizmos
ENTRY_POINT: 01475bd8
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


void Meta_XR_MRUtilityKit_GridSliceResizer__OnDrawGizmos(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar13;
  long lVar14;
  long *unaff_x27;
  undefined8 *unaff_x28;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
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
  
  FUN_0267017c();
  uVar7 = FUN_0267c994(*(undefined8 *)(unaff_x19 + 0x28),0);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
  if (lVar8 != 0) {
    FUN_0267d648(lVar8,uVar7,0);
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
          lVar14 = 0;
          do {
            plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
            if (plVar9 == (long *)0x0) goto LAB_01476220;
            if ((*(long *)StringLiteral_1291 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(*(long *)StringLiteral_1291,
                                            *(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_01476224;
            if ((int)plVar9[3] == 0) goto LAB_0147621c;
            plVar9[4] = *(long *)StringLiteral_1291;
            lVar10 = *(long *)(unaff_x19 + 0x30);
            if (lVar10 == 0) goto LAB_01476220;
            if (*(uint *)(lVar10 + 0x18) <= (uint)lVar14) goto LAB_0147621c;
            lVar10 = *(long *)(lVar10 + lVar14 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_01476220;
            lVar10 = FUN_0268b6ac(lVar10,0);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
            goto LAB_01476224;
            uVar13 = *(uint *)(plVar9 + 3);
            if (uVar13 < 2) goto LAB_0147621c;
            plVar9[5] = lVar10;
            if (*unaff_x27 != 0) {
              lVar10 = thunk_FUN_00d6225c(*unaff_x27,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar10 == 0) goto LAB_01476224;
              uVar13 = *(uint *)(plVar9 + 3);
            }
            if (uVar13 < 3) goto LAB_0147621c;
            plVar9[6] = *unaff_x27;
            if (unaff_x21 == 0) goto LAB_01476220;
            if (*(uint *)(unaff_x21 + 0x18) <= (uint)lVar14) goto LAB_0147621c;
            puVar1 = (undefined8 *)(unaff_x21 + 0x20 + lVar14 * 0x10);
            in_stack_00000078 = puVar1[1];
            in_stack_00000070 = *puVar1;
            lVar10 = FUN_02688894(&stack0x00000070,0);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
            goto LAB_01476224;
            uVar13 = *(uint *)(plVar9 + 3);
            if (uVar13 < 4) goto LAB_0147621c;
            plVar9[7] = lVar10;
            if (*(long *)PTR_DAT_033ead30 != 0) {
              lVar10 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033ead30,*(undefined8 *)(*plVar9 + 0x40))
              ;
              if (lVar10 == 0) goto LAB_01476224;
              uVar13 = *(uint *)(plVar9 + 3);
            }
            if (uVar13 < 5) goto LAB_0147621c;
            plVar9[8] = *(long *)PTR_DAT_033ead30;
            uVar7 = FUN_01600844(plVar9,0);
            FUN_0160c430(lVar8,uVar7,0);
            lVar14 = lVar14 + 1;
          } while ((int)lVar14 < *(int *)(unaff_x20 + 0x18));
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
          uVar7 = FUN_00da4fb8(*(undefined8 *)StringLiteral_6979,*(undefined4 *)(unaff_x20 + 0x18));
          *(undefined8 *)(lVar8 + 0x20) = uVar7;
          plVar9 = *(long **)(unaff_x19 + 0x48);
          if (plVar9 != (long *)0x0) {
            iVar5 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
            plVar9 = *(long **)(unaff_x19 + 0x48);
            if (plVar9 != (long *)0x0) {
              iVar6 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
              if (0 < *(int *)(unaff_x20 + 0x18)) {
                if (unaff_x21 == 0) goto LAB_01476220;
                fVar18 = 2.0 / (float)iVar5;
                fVar19 = 2.0 / (float)iVar6;
                lVar8 = 0;
                do {
                  uVar13 = (uint)lVar8;
                  if (*(uint *)(unaff_x21 + 0x18) <= uVar13) goto LAB_0147621c;
                  puVar2 = (ulong *)(unaff_x21 + 0x20 + lVar8 * 0x10);
                  in_stack_00000068 = puVar2[1];
                  in_stack_00000060 = *puVar2;
                  fVar15 = (float)FUN_02688390(&stack0x00000060,0);
                  FUN_02688398(fVar18 + fVar15,&stack0x00000060,0);
                  fVar15 = (float)FUN_026883a0(&stack0x00000060,0);
                  FUN_026883a8(fVar19 + fVar15,&stack0x00000060,0);
                  fVar15 = (float)FUN_026884c4(&stack0x00000060,0);
                  FUN_026884cc(fVar15 - (fVar18 + fVar18),&stack0x00000060,0);
                  fVar15 = (float)FUN_026884d4(&stack0x00000060,0);
                  FUN_026884dc(fVar15 - (fVar19 + fVar19),&stack0x00000060,0);
                  if ((*(long *)(unaff_x19 + 0x38) == 0) ||
                     (lVar14 = *(long *)(unaff_x19 + 0x30), lVar14 == 0)) goto LAB_01476220;
                  if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_0147621c;
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x38) + 0x20);
                  uVar16 = in_stack_00000060 & 0xffffffff;
                  uVar3 = in_stack_00000060._4_4_;
                  uVar7 = *(undefined8 *)(lVar14 + lVar8 * 8 + 0x20);
                  uVar17 = in_stack_00000068 & 0xffffffff;
                  uVar4 = in_stack_00000068._4_4_;
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
                  lVar14 = *(long *)(unaff_x19 + 0x30);
                  if (lVar14 == 0) goto LAB_01476220;
                  if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_0147621c;
                  lVar14 = *(long *)(lVar14 + lVar8 * 8 + 0x20);
                  if (lVar14 == 0) goto LAB_01476220;
                  uVar12 = FUN_0268b6ac(lVar14,0);
                  lVar14 = thunk_FUN_00d62348(*unaff_x28);
                  if (lVar14 == 0) goto LAB_01476220;
                  FUN_013e7d0c(uVar16,uVar3,uVar17,uVar4,uStack0000000000000050,
                               uStack0000000000000054,uStack0000000000000058,uStack000000000000005c,
                               lVar14,uVar7,1,0,uVar12,0);
                  if (plVar9 == (long *)0x0) goto LAB_01476220;
                  lVar10 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar9 + 0x40));
                  if (lVar10 == 0) goto LAB_01476224;
                  if (*(uint *)(plVar9 + 3) <= uVar13) goto LAB_0147621c;
                  plVar9[lVar8 + 4] = lVar14;
                  lVar8 = lVar8 + 1;
                } while ((int)lVar8 < *(int *)(unaff_x20 + 0x18));
              }
              lVar8 = *(long *)(unaff_x19 + 0x38);
              uVar7 = FUN_00da4fb8(*(undefined8 *)
                                    Method_System_Xml_Schema_Compiler_CompileAttribute__,1);
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x28) = uVar7;
                if (*(long *)(unaff_x19 + 0x38) != 0) {
                  plVar9 = *(long **)(*(long *)(unaff_x19 + 0x38) + 0x28);
                  lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_5607);
                  if ((lVar8 != 0) && (FUN_013e7004(lVar8,0), plVar9 != (long *)0x0)) {
                    lVar14 = thunk_FUN_00d6225c(lVar8,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar14 == 0) {
LAB_01476224:
                      uVar7 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar7,0);
                    }
                    if ((int)plVar9[3] == 0) {
LAB_0147621c:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    plVar9[4] = lVar8;
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
                               (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x28), lVar14 != 0)
                               ) {
                              if (*(int *)(lVar14 + 0x18) == 0) goto LAB_0147621c;
                              if (*(long *)(lVar14 + 0x20) != 0) {
                                *(long *)(*(long *)(lVar14 + 0x20) + 0x20) = lVar8;
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
LAB_01476220:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


