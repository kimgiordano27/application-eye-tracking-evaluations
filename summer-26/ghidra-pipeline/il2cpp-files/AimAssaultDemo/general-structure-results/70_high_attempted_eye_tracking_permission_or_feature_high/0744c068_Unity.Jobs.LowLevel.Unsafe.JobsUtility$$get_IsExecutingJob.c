/*
FUNCTION_NAME: Unity.Jobs.LowLevel.Unsafe.JobsUtility$$get_IsExecutingJob
ENTRY_POINT: 0744c068
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0744cda0) */
/* WARNING: Removing unreachable block (ram,0x0744cdb8) */
/* WARNING: Removing unreachable block (ram,0x0744cd3c) */
/* WARNING: Removing unreachable block (ram,0x0744c548) */
/* WARNING: Removing unreachable block (ram,0x0744cdb0) */
/* WARNING: Removing unreachable block (ram,0x0744c4e0) */
/* WARNING: Removing unreachable block (ram,0x0744c738) */
/* WARNING: Removing unreachable block (ram,0x0744cdd0) */
/* WARNING: Removing unreachable block (ram,0x0744cd90) */
/* WARNING: Removing unreachable block (ram,0x0744cddc) */
/* WARNING: Removing unreachable block (ram,0x0744caa0) */
/* WARNING: Removing unreachable block (ram,0x0744cd74) */
/* WARNING: Removing unreachable block (ram,0x0744ccc0) */

void Unity_Jobs_LowLevel_Unsafe_JobsUtility__get_IsExecutingJob(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  undefined4 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long *in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  long in_stack_000000f8;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0xb38));
  FUN_0373b518(OVREyeGaze_TypeInfo);
  FUN_0373b518(UnityEngine_Rendering_Universal_ShaderPathID_TypeInfo);
                    /* try { // try from 0744c08c to 0754c097 has its CatchHandler @ 0744d534 */
  *(undefined1 *)(unaff_x24 + 0xb75) = 1;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  in_stack_000000a0 = (long *)0x0;
  *(undefined1 *)(unaff_x19 + 0x234) = 1;
  lVar9 = *unaff_x20;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar9 = *unaff_x20;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    FUN_0754d370(lVar9,0);
  }
  uVar10 = FUN_07435e74();
  if (*(long *)(unaff_x19 + 0x210) == 0) {
    in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar16 = *(long *)(*(long *)(unaff_x19 + 0x210) + 0x10);
  if (lVar16 == 0) {
    in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(long *)(unaff_x19 + 0x218) == 0) {
    in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar15 = *(long *)(*(long *)(unaff_x19 + 0x218) + 0x10);
  if (lVar15 == 0) {
    in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  iVar2 = *(int *)(lVar16 + 0x18);
  iVar3 = *(int *)(lVar15 + 0x18);
  if (*(char *)(unaff_x19 + 0x228) == '\0') {
    lVar16 = *(long *)(unaff_x19 + 0x220);
    if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x18))) {
      if ((uVar10 & 1) != 0) {
        in_stack_000000f8 = lVar9;
        FUN_049cf910(&stack0x000000d0,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo
                    );
        puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
        puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
        in_stack_00000098 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_000000a0 = (long *)CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        in_stack_00000090 = in_stack_000000d0;
        while (uVar11 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar6),
              plVar8 = in_stack_000000a0, (uVar11 & 1) != 0) {
          uVar18 = *(undefined8 *)((long)unaff_x22 + 0x14);
          uVar19 = *unaff_x22;
          uStack00000000000000c0 =
               (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
          uVar26 = uStack00000000000000c0;
          uStack00000000000000b8 = (undefined4)unaff_x22[1];
          uVar20 = uStack00000000000000b8;
          uStack00000000000000bc = (undefined4)((ulong)unaff_x22[1] >> 0x20);
          uVar23 = uStack00000000000000bc;
          in_stack_000000b0 = uVar19;
          uStack00000000000000c4 = uVar18;
          if (in_stack_000000a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar24 = unaff_x21[1];
          uVar21 = unaff_x21[2];
          uVar22 = *unaff_x21;
          lVar9 = *in_stack_000000a0;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                puVar13 = (undefined8 *)(lVar9 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                goto LAB_0744c320;
              }
              uVar11 = uVar11 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_0377596c(in_stack_000000a0,*(long *)puVar5,3);
LAB_0744c320:
          uStack00000000000000d8 = uVar20;
          uStack00000000000000e4 = (undefined4)uVar18;
          in_stack_000000e8 = (undefined4)((ulong)uVar18 >> 0x20);
          uStack00000000000000dc = uVar23;
          uStack00000000000000e0 = uVar26;
          in_stack_000000d0 = uVar19;
          (*(code *)*puVar13)(uVar22,uVar24,uVar21,plVar8);
        }
        FUN_05d64e94(&stack0x00000090,
                     *(undefined8 *)
                      UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
        lVar9 = in_stack_000000f8;
      }
      lVar16 = *(long *)(unaff_x19 + 0x220);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar1 = *(int *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_062658d0(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
      }
    }
  }
  else {
    if ((uVar10 & 1) != 0) {
      in_stack_000000f8 = lVar9;
      if (0 < iVar2) {
        FUN_049cf910(&stack0x000000d0,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo
                    );
        puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
        puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
        in_stack_00000098 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_000000a0 = (long *)CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        in_stack_00000090 = in_stack_000000d0;
        while (uVar11 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar6),
              plVar8 = in_stack_000000a0, (uVar11 & 1) != 0) {
          plVar12 = *(long **)(unaff_x19 + 0x210);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))
                             (plVar12,in_stack_000000a0,*(undefined8 *)(*plVar12 + 400));
          if ((uVar11 & 1) != 0) {
            uVar18 = *(undefined8 *)((long)unaff_x22 + 0x14);
            in_stack_000000d0 = *unaff_x22;
            uStack00000000000000e4 = (undefined4)uVar18;
            in_stack_000000e8 = (undefined4)((ulong)uVar18 >> 0x20);
            uStack00000000000000e0 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
            uStack00000000000000d8 = (undefined4)unaff_x22[1];
            uStack00000000000000dc = (undefined4)((ulong)unaff_x22[1] >> 0x20);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar23 = unaff_x21[1];
            uVar20 = unaff_x21[2];
            uVar26 = *unaff_x21;
            uStack000000000000007c = uStack00000000000000dc;
            uStack0000000000000080 = uStack00000000000000e0;
            lVar9 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            in_stack_00000070 = in_stack_000000d0;
            uStack0000000000000078 = uStack00000000000000d8;
            uStack0000000000000084 = uVar18;
            if (uVar11 != 0) {
              piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar9 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_0744c204;
                }
                uVar11 = uVar11 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar5,3);
LAB_0744c204:
            uStack00000000000000b8 = uStack0000000000000078;
            in_stack_000000b0 = in_stack_00000070;
            uStack00000000000000c4 = uStack0000000000000084;
            uStack00000000000000bc = uStack000000000000007c;
            uStack00000000000000c0 = uStack0000000000000080;
            (*(code *)*puVar13)(uVar26,uVar23,uVar20,plVar8);
          }
        }
        FUN_05d64e94(&stack0x00000090,
                     *(undefined8 *)
                      UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
      }
      lVar9 = in_stack_000000f8;
      if (0 < iVar3) {
        if (*(long *)(unaff_x19 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar9 = *(long *)(*(long *)(unaff_x19 + 0x218) + 0x10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        FUN_049cf910(&stack0x000000d0,lVar9,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo)
        ;
        puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
        puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
        in_stack_00000098 = CONCAT44(uStack00000000000000dc,uStack00000000000000d8);
        in_stack_000000a0 = (long *)CONCAT44(uStack00000000000000e4,uStack00000000000000e0);
        in_stack_00000090 = in_stack_000000d0;
        while (uVar11 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar6),
              plVar8 = in_stack_000000a0, (uVar11 & 1) != 0) {
          plVar12 = *(long **)(unaff_x19 + 0x218);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar11 = (**(code **)(*plVar12 + 0x188))
                             (plVar12,in_stack_000000a0,*(undefined8 *)(*plVar12 + 400));
          if ((uVar11 & 1) != 0) {
            uVar18 = *unaff_x22;
            uStack0000000000000064 = (undefined4)*(undefined8 *)((long)unaff_x22 + 0x14);
            uVar21 = uStack0000000000000064;
            in_stack_00000068 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0x14) >> 0x20)
            ;
            uVar24 = in_stack_00000068;
            uStack0000000000000060 =
                 (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
            uVar26 = uStack0000000000000060;
            uStack0000000000000058 = (undefined4)unaff_x22[1];
            uVar20 = uStack0000000000000058;
            uStack000000000000005c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
            uVar23 = uStack000000000000005c;
            in_stack_00000050 = uVar18;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar25 = unaff_x21[1];
            uVar22 = unaff_x21[2];
            uVar27 = *unaff_x21;
            lVar9 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar9 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                  goto LAB_0744c478;
                }
                uVar11 = uVar11 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar8,*(long *)puVar5,3);
LAB_0744c478:
            uStack00000000000000d8 = uVar20;
            uStack00000000000000dc = uVar23;
            uStack00000000000000e0 = uVar26;
            in_stack_000000d0 = uVar18;
            uStack00000000000000e4 = uVar21;
            in_stack_000000e8 = uVar24;
            (*(code *)*puVar13)(uVar27,uVar25,uVar22,plVar8);
          }
        }
        FUN_05d64e94(&stack0x00000090,
                     *(undefined8 *)
                      UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
        lVar9 = in_stack_000000f8;
      }
    }
    lVar16 = *(long *)(unaff_x19 + 0x220);
    *(undefined1 *)(unaff_x19 + 0x228) = 0;
    if (lVar16 != 0) {
      iVar1 = *(int *)(lVar16 + 0x18);
      *(undefined4 *)(lVar16 + 0x18) = 0;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_062658d0(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
      }
    }
  }
  if ((uVar10 & 1) == 0) {
    if (0 < iVar3) {
      if (*(long *)(unaff_x19 + 0x218) == 0) {
        in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar16 = *(long *)(*(long *)(unaff_x19 + 0x218) + 0x10);
      if (lVar16 == 0) {
        in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&stack0x00000050,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
      puVar7 = Oculus_Platform_Models_TrialOffer_TypeInfo;
      puVar6 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
      puVar5 = UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo;
      in_stack_00000098 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      in_stack_000000a0 = (long *)CONCAT44(uStack0000000000000064,uStack0000000000000060);
      in_stack_00000090 = in_stack_00000050;
      while (uVar10 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar7),
            plVar8 = in_stack_000000a0, (uVar10 & 1) != 0) {
        plVar12 = (long *)thunk_FUN_037787d0(in_stack_000000a0,*(undefined8 *)puVar5);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(unaff_x19 + 0x218);
          if (plVar14 == (long *)0x0) {
            in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar8,*(undefined8 *)(*plVar14 + 400));
          if ((uVar10 & 1) != 0) {
            lVar15 = *plVar12;
            lVar16 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar16) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0744c998;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar12,lVar16,0);
LAB_0744c998:
            uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar10 & 1) != 0) {
              if (plVar8 == (long *)0x0) {
                in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar15 = *plVar8;
              lVar16 = *(long *)puVar6;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0744c9f8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744c9f8:
              uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
              if ((uVar10 & 1) != 0) {
                lVar15 = *plVar8;
                lVar16 = *(long *)puVar6;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar16) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_0744ca58;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744ca58:
                (*(code *)*puVar13)(plVar8);
              }
            }
          }
        }
      }
      FUN_05d64e94(&stack0x00000090,
                   *(undefined8 *)
                    UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    }
    if (0 < iVar2) {
      if (*(long *)(unaff_x19 + 0x210) == 0) {
        in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar16 = *(long *)(*(long *)(unaff_x19 + 0x210) + 0x10);
      if (lVar16 == 0) {
        in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&stack0x00000050,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
      puVar7 = Oculus_Platform_Models_TrialOffer_TypeInfo;
      puVar6 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
      puVar5 = UnityEngine_Rendering_Universal_TransparentSettingsPass_TypeInfo;
      in_stack_00000098 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
      in_stack_000000a0 = (long *)CONCAT44(uStack0000000000000064,uStack0000000000000060);
      in_stack_00000090 = in_stack_00000050;
      while (uVar10 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar7),
            plVar8 = in_stack_000000a0, (uVar10 & 1) != 0) {
        plVar12 = (long *)thunk_FUN_037787d0(in_stack_000000a0,*(undefined8 *)puVar5);
        if (plVar12 != (long *)0x0) {
          plVar14 = *(long **)(unaff_x19 + 0x210);
          if (plVar14 == (long *)0x0) {
            in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,plVar8,*(undefined8 *)(*plVar14 + 400));
          if ((uVar10 & 1) != 0) {
            lVar15 = *plVar12;
            lVar16 = *(long *)puVar5;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar16) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_0744cb88;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_0377596c(plVar12,lVar16,0);
LAB_0744cb88:
            uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar10 & 1) != 0) {
              if (plVar8 == (long *)0x0) {
                in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar15 = *plVar8;
              lVar16 = *(long *)puVar6;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar16) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0744cbe8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744cbe8:
              uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
              if ((uVar10 & 1) != 0) {
                lVar15 = *plVar8;
                lVar16 = *(long *)puVar6;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar16) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                      goto LAB_0744cc48;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744cc48:
                (*(code *)*puVar13)(plVar8);
              }
            }
          }
        }
      }
      FUN_05d64e94(&stack0x00000090,
                   *(undefined8 *)
                    UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
    }
    goto joined_r0x0744cc98;
  }
  if (iVar3 < 1) {
LAB_0744c5a8:
    bVar4 = false;
  }
  else {
    lVar16 = FUN_07445304();
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((*(int *)(lVar16 + 0x18) < 2) && (uVar10 = FUN_0744d1e4(), (uVar10 & 1) != 0))
    goto LAB_0744c5a8;
    if (*(long *)(unaff_x19 + 0x218) == 0) {
      in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar16 = *(long *)(*(long *)(unaff_x19 + 0x218) + 0x10);
    if (lVar16 == 0) {
      in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_stack_000000f8 = lVar9;
    FUN_049cf910(&stack0x00000050,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
    puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
    puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
    in_stack_00000098 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_000000a0 = (long *)CONCAT44(uStack0000000000000064,uStack0000000000000060);
    in_stack_00000090 = in_stack_00000050;
    bVar4 = false;
    while (uVar10 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar6), lVar9 = in_stack_000000f8,
          plVar8 = in_stack_000000a0, (uVar10 & 1) != 0) {
      plVar12 = *(long **)(unaff_x19 + 0x218);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = (**(code **)(*plVar12 + 0x188))
                         (plVar12,in_stack_000000a0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar10 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar16 = *plVar8;
        lVar9 = *(long *)puVar5;
        uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0744c688;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar9,0);
LAB_0744c688:
        uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
        if ((uVar10 & 1) != 0) {
          lVar16 = *plVar8;
          lVar9 = *(long *)puVar5;
          uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar9) {
                puVar13 = (undefined8 *)(lVar16 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_0744c6e8;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar9,4);
LAB_0744c6e8:
          bVar4 = true;
          (*(code *)*puVar13)(plVar8);
        }
      }
    }
    FUN_05d64e94(&stack0x00000090,
                 *(undefined8 *)
                  UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
  }
  if ((0 < iVar2) && (!bVar4)) {
    if (*(long *)(unaff_x19 + 0x210) == 0) {
      in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar16 = *(long *)(*(long *)(unaff_x19 + 0x210) + 0x10);
    if (lVar16 == 0) {
      in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&stack0x00000050,lVar16,*(undefined8 *)UnityEngine_ProBuilder_Triangle_TypeInfo);
    puVar6 = Oculus_Platform_Models_TrialOffer_TypeInfo;
    puVar5 = Unity_VisualScripting_Antlr3_Runtime_Tree_Tree_TypeInfo;
    in_stack_00000098 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    in_stack_000000a0 = (long *)CONCAT44(uStack0000000000000064,uStack0000000000000060);
    in_stack_00000090 = in_stack_00000050;
    while (uVar10 = FUN_05d64e98(&stack0x00000090,*(undefined8 *)puVar6), plVar8 = in_stack_000000a0
          , (uVar10 & 1) != 0) {
      plVar12 = *(long **)(unaff_x19 + 0x210);
      if (plVar12 == (long *)0x0) {
        in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = (**(code **)(*plVar12 + 0x188))
                         (plVar12,in_stack_000000a0,*(undefined8 *)(*plVar12 + 400));
      if ((uVar10 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
          in_stack_000000f8 = lVar9;
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar15 = *plVar8;
        lVar16 = *(long *)puVar5;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar16) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0744c80c;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,0);
LAB_0744c80c:
        uVar10 = (*(code *)*puVar13)(plVar8,puVar13[1]);
        if ((uVar10 & 1) != 0) {
          lVar15 = *plVar8;
          lVar16 = *(long *)puVar5;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar16) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 4) * 0x10 + 0x138);
                goto LAB_0744c86c;
              }
              uVar10 = uVar10 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar10 != 0);
          }
          puVar13 = (undefined8 *)FUN_0377596c(plVar8,lVar16,4);
LAB_0744c86c:
          (*(code *)*puVar13)(plVar8);
        }
      }
    }
    FUN_05d64e94(&stack0x00000090,
                 *(undefined8 *)
                  UnityEngine_UIElements_TreeViewReorderableDragAndDropController_TypeInfo);
  }
joined_r0x0744cc98:
  if (lVar9 != 0) {
    FUN_0754d3f8(lVar9,0);
  }
  *(undefined1 *)(unaff_x19 + 0x234) = 0;
  return;
}


