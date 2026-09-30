/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoTypesRegistry$$IsValidDataTypeForGizmoType
ENTRY_POINT: 01457c3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry__IsValidDataTypeForGizmoType
               (undefined **param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5,long param_6)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x22;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long unaff_x28;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float unaff_s12;
  float unaff_s13;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  int iStack0000000000000014;
  int iStack0000000000000020;
  byte bStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
code_r0x01457c3c:
  lVar9 = *(long *)(unaff_x20 + 0x50);
  uVar2 = FUN_0132138c(param_6,0,&stack0x00000028,*(undefined8 *)param_1[0x5b]);
  if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) != 0) &&
     (lVar7 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x18), lVar7 != 0)
     ) {
    lVar7 = *(long *)(lVar7 + 0x10);
    uVar2 = 0;
    if (lVar7 != 0) {
      uVar2 = FUN_0132138c(lVar7,0,&stack0x00000028,*unaff_x19);
      if (CONCAT44(uStack000000000000002c,uStack0000000000000028) != 0) {
        uVar2 = 0;
        if (*(long *)(unaff_x20 + 0x70) != 0) {
          uVar10 = *(undefined8 *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
          uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000028,
                               *unaff_x21);
          if (lVar9 != 0) {
            fVar15 = (float)FUN_0144a380(lVar9,uVar10,
                                         CONCAT44(uStack000000000000002c,uStack0000000000000028),0);
            fVar20 = param_3;
            fVar18 = param_4;
            fVar19 = param_5;
            do {
              lVar9 = *(long *)(unaff_x20 + 0x58);
              uVar2 = 0;
              if (lVar9 == 0) break;
              iStack0000000000000020 = 0;
              iVar11 = 0;
              iStack0000000000000014 = 0;
              iVar8 = 0;
              uVar14 = 1;
              while (iVar12 = *(int *)(lVar9 + 0x18), iVar8 < iVar12) {
                uVar2 = FUN_0132138c(lVar9,iVar8,&stack0x00000028,*(undefined8 *)PTR_DAT_033ee2d8);
                lVar9 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
                if ((lVar9 == 0) || (lVar7 = *(long *)(lVar9 + 0x10), lVar7 == 0))
                goto LAB_0145804c;
                if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_0145807c;
                lVar7 = *(long *)(lVar7 + unaff_x22 * 8 + 0x20);
                uVar2 = 0;
                if (lVar7 == 0) goto LAB_0145804c;
                uVar3 = FUN_014440c0(lVar7,0);
                lVar7 = *(long *)(lVar9 + 0x10);
                uVar2 = uVar3;
                if (lVar7 == 0) goto LAB_0145804c;
                if (*(uint *)(lVar7 + 0x18) <= unaff_x22) goto LAB_0145807c;
                if (unaff_x28 == 0) goto LAB_0145804c;
                uVar4 = FUN_014442d4(unaff_x28,*(undefined8 *)(lVar7 + unaff_x22 * 8 + 0x20),0);
                if (*(char *)(unaff_x20 + 0x49) != '\0') {
                  uVar2 = uVar4;
                  if (*(long *)(lVar9 + 0x18) == 0) goto LAB_0145804c;
                  lVar7 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10);
                  uVar2 = 0;
                  if (lVar7 == 0) goto LAB_0145804c;
                  lVar13 = *(long *)(unaff_x20 + 0x50);
                  uVar2 = FUN_0132138c(lVar7,0,&stack0x00000028,*unaff_x19);
                  if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0)
                  goto LAB_0145804c;
                  uVar2 = 0;
                  if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
                  uVar10 = *(undefined8 *)
                            (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
                  uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,
                                       &stack0x00000028,*unaff_x21);
                  if (lVar13 == 0) goto LAB_0145804c;
                  fVar16 = (float)FUN_0144a380(lVar13,uVar10,
                                               CONCAT44(uStack000000000000002c,
                                                        uStack0000000000000028),0);
                  fVar17 = param_3 - fVar20;
                  param_5 = param_5 - fVar19;
                  param_4 = (param_4 - fVar18) * (param_4 - fVar18);
                  param_3 = param_5 * param_5;
                  if (param_3 + param_4 + (fVar16 - fVar15) * (fVar16 - fVar15) + fVar17 * fVar17 <
                      unaff_s12) {
                    iStack0000000000000014 = iStack0000000000000014 + 1;
                  }
                  uVar4 = uVar4 & 0xffffffff;
                }
                lVar7 = *(long *)(lVar9 + 0x18);
                uVar2 = uVar4;
                if (lVar7 == 0) goto LAB_0145804c;
                iStack0000000000000020 = iStack0000000000000020 + (~(uint)uVar3 & 1);
                iVar12 = 0;
                iVar11 = iVar11 + ((uint)uVar4 & 1);
                while( true ) {
                  lVar7 = *(long *)(lVar7 + 0x10);
                  uVar2 = 0;
                  if (lVar7 == 0) goto LAB_0145804c;
                  if (*(int *)(lVar7 + 0x18) <= iVar12) break;
                  uVar2 = FUN_0132138c(lVar7,iVar12,&stack0x00000028,*unaff_x19);
                  if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0)
                  goto LAB_0145804c;
                  uVar2 = 0;
                  if (*(long *)(unaff_x20 + 0x70) == 0) goto LAB_0145804c;
                  lVar7 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
                  uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,
                                       &stack0x00000028,*unaff_x21);
                  if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) || (lVar7 == 0)
                     ) goto LAB_0145804c;
                  uVar2 = FUN_0267e21c(lVar7,*(undefined8 *)
                                              (CONCAT44(uStack000000000000002c,
                                                        uStack0000000000000028) + 0x10),0);
                  lVar7 = *(long *)(lVar9 + 0x18);
                  uVar14 = (uint)uVar2 ^ 1;
                  iVar12 = iVar12 + 1;
                  if (lVar7 == 0) goto LAB_0145804c;
                }
                lVar9 = *(long *)(unaff_x20 + 0x58);
                iVar8 = iVar8 + 1;
                if (lVar9 == 0) {
                  uVar2 = 0;
                  goto LAB_0145804c;
                }
              }
              uVar2 = in_stack_00000008;
              if (in_stack_00000008 == 0) break;
              if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) {
LAB_0145807c:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar9 = in_stack_00000008 + unaff_x22 * 4;
              *(bool *)(lVar9 + 0x20) = iStack0000000000000020 == 0;
              *(bool *)(lVar9 + 0x21) = iVar11 == iVar12;
              *(bool *)(lVar9 + 0x22) = iStack0000000000000014 == iVar12;
              *(byte *)(lVar9 + 0x23) = *(byte *)(lVar9 + 0x23) | (byte)uVar14 & 1;
              if (4 < in_stack_00000000._4_4_) {
                uVar2 = 0;
                if (*(long *)(unaff_x20 + 0x70) == 0) break;
                uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x70),unaff_x22 & 0xffffffff,
                                     &stack0x00000028,*unaff_x21);
                if (CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) break;
                uVar10 = *(undefined8 *)
                          (CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10);
                cVar1 = *(char *)(unaff_x20 + 0x49);
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                    == 0) {
                  thunk_FUN_00d32864();
                }
                bStack0000000000000024 =
                     FUN_01457470(unaff_x22 & 0xffffffff,cVar1 != '\0',in_stack_00000008);
                bStack0000000000000024 = bStack0000000000000024 & 1;
                uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,
                                           (long)&stack0x00000020 + 4);
                if (*(uint *)(in_stack_00000008 + 0x18) <= unaff_x22) goto LAB_0145807c;
                uStack0000000000000028 = *(undefined4 *)(lVar9 + 0x20);
                uVar6 = thunk_FUN_00d61fa0(*(undefined8 *)PTR_DAT_033eb5f8,&stack0x00000028);
                uVar10 = FUN_01600ba0(*(undefined8 *)
                                       System_Security_Cryptography_RSACryptoServiceProvider_TypeInfo
                                      ,uVar10,uVar5,uVar6,0);
                if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)StringLiteral_302);
                }
                FUN_02660dac(uVar10,0);
              }
              unaff_x22 = unaff_x22 + 1;
              uVar2 = in_stack_00000008;
              if (*(long *)(unaff_x20 + 0x70) == 0) break;
              if ((long)*(int *)(*(long *)(unaff_x20 + 0x70) + 0x18) <= (long)unaff_x22) {
                return;
              }
              uVar2 = 0;
              if (*(long *)(unaff_x20 + 0x58) == 0) break;
              uVar2 = FUN_0132138c(*(long *)(unaff_x20 + 0x58),0,&stack0x00000028,
                                   *(undefined8 *)PTR_DAT_033ee2d8);
              if ((CONCAT44(uStack000000000000002c,uStack0000000000000028) == 0) ||
                 (lVar9 = *(long *)(CONCAT44(uStack000000000000002c,uStack0000000000000028) + 0x10),
                 lVar9 == 0)) break;
              if (*(uint *)(lVar9 + 0x18) <= unaff_x22) goto LAB_0145807c;
              unaff_x28 = *(long *)(lVar9 + unaff_x22 * 8 + 0x20);
              if (*(char *)(unaff_x20 + 0x49) != '\0') goto code_r0x01457c30;
              fVar18 = 0.0;
              fVar20 = 0.0;
              fVar15 = 0.0;
              fVar19 = unaff_s13;
            } while( true );
          }
        }
      }
    }
  }
LAB_0145804c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c(uVar2);
code_r0x01457c30:
  param_6 = *(long *)(unaff_x20 + 0x58);
  uVar2 = 0;
  if (param_6 == 0) goto LAB_0145804c;
  param_1 = &PTR_DAT_033ee000;
  goto code_r0x01457c3c;
}


