/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$.ctor
ENTRY_POINT: 0144f56c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex___ctor
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 uVar11;
  long lVar12;
  undefined8 unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  
  do {
    FUN_0132138c(param_1,unaff_x23 & 0xffffffff,&stack0x00000058,param_4);
    if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar11 = *(undefined8 *)(CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10);
    FUN_0132138c(lVar5,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
    lVar5 = CONCAT44(uStack000000000000005c,fStack0000000000000058);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_016f5f58(lVar5 + 0x18,0);
    uVar11 = FUN_0160073c(*(undefined8 *)StringLiteral_29,uVar11,
                          *(undefined8 *)Method_System_Double_System_IConvertible_ToDateTime__,uVar6
                          ,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(uVar11,0);
    do {
      lVar5 = *unaff_x20;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
      if ((uVar7 & 1) == 0) {
        *(undefined4 *)(unaff_x22 + 0x18) = 0;
      }
      else {
        iVar4 = *(int *)(unaff_x22 + 0x18);
        *(undefined4 *)(unaff_x22 + 0x18) = 0;
        if (0 < iVar4) {
          FUN_0179519c(*(undefined8 *)(unaff_x22 + 0x10),0,iVar4,0);
        }
      }
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *(long *)(unaff_x19 + 0x20);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar5 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(lVar5 + 0x58);
      uVar1 = *(undefined4 *)(lVar12 + 0x10);
      uVar2 = *(undefined4 *)(lVar12 + 0x14);
      uVar6 = *(undefined8 *)(in_stack_00000050 + 0x10);
      FUN_0132138c(*(long *)(lVar5 + 0x70),unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
      FUN_014502c0(lVar12,uVar11,unaff_x23 & 0xffffffff,uVar1,uVar2,uVar6);
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_00000050 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_010e58e8(*(long *)(in_stack_00000050 + 0x18),&stack0x00000058,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02666150(CONCAT44(uStack000000000000005c,fStack0000000000000058),
                   *(undefined8 *)(in_stack_00000050 + 0x10),0);
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(in_stack_00000050 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_010e58e8(*(long *)(in_stack_00000050 + 0x18),&stack0x00000058,
                   *(undefined8 *)Method_TuneTargetBasic_<Complete>b__23_0__);
      lVar5 = CONCAT44(uStack000000000000005c,fStack0000000000000058);
      uVar11 = FUN_01325140();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c(uVar11,uVar11);
      }
      FUN_02666084(lVar5,uVar11,0);
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar12 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar11 = *(undefined8 *)(in_stack_00000050 + 0x20);
      uVar1 = *(undefined4 *)(lVar5 + 0x10);
      uVar2 = *(undefined4 *)(lVar5 + 0x14);
      FUN_0132138c(lVar12,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
      if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      cVar3 = *(char *)(CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x18);
      FUN_0132138c(lVar5,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
      plVar8 = (long *)FUN_01450e84(unaff_x28,uVar11,uVar1,uVar2,cVar3 != '\0',
                                    CONCAT44(uStack000000000000005c,fStack0000000000000058));
      unaff_x20 = (long *)StringLiteral_240;
      if (0 < *(int *)(unaff_x22 + 0x18)) {
        iVar4 = 0;
        do {
          FUN_0132138c();
          FUN_0142deac(CONCAT44(uStack000000000000005c,fStack0000000000000058),0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(unaff_x22 + 0x18));
      }
      lVar5 = *unaff_x20;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      uVar7 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 200));
      if ((uVar7 & 1) == 0) {
        *(undefined4 *)(unaff_x22 + 0x18) = 0;
      }
      else {
        iVar4 = *(int *)(unaff_x22 + 0x18);
        *(undefined4 *)(unaff_x22 + 0x18) = 0;
        if (0 < iVar4) {
          FUN_0179519c(*(undefined8 *)(unaff_x22 + 0x10),0,iVar4,0);
        }
      }
      if (3 < *(int *)(unaff_x19 + 0x28)) {
        plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((*(long *)Method_System_Text_Encoding_GetChars__ != 0) &&
           (lVar5 = thunk_FUN_00d6225c(*(long *)Method_System_Text_Encoding_GetChars__,
                                       *(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[4] = *(long *)Method_System_Text_Encoding_GetChars__;
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar5,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
        if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)(CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10);
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        uVar10 = *(uint *)(plVar9 + 3);
        if (uVar10 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[5] = lVar5;
        if (*(long *)PTR_DAT_033f5960 != 0) {
          lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f5960,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar5 == 0) {
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          uVar10 = *(uint *)(plVar9 + 3);
        }
        if (uVar10 < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[6] = *(long *)PTR_DAT_033f5960;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000040._4_4_ =
             (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        lVar5 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        uVar10 = *(uint *)(plVar9 + 3);
        if (uVar10 < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[7] = lVar5;
        if (*(long *)Method_MedleyBossPushPhase_StartPhase__ != 0) {
          lVar5 = thunk_FUN_00d6225c(*(long *)Method_MedleyBossPushPhase_StartPhase__,
                                     *(undefined8 *)(*plVar9 + 0x40));
          if (lVar5 == 0) {
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          uVar10 = *(uint *)(plVar9 + 3);
        }
        if (uVar10 < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[8] = *(long *)Method_MedleyBossPushPhase_StartPhase__;
        in_stack_00000040._4_4_ =
             (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        lVar5 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        uVar10 = *(uint *)(plVar9 + 3);
        if (uVar10 < 6) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[9] = lVar5;
        if (*(long *)PTR_DAT_033f6c08 != 0) {
          lVar5 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6c08,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar5 == 0) {
            uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar11,0);
          }
          uVar10 = *(uint *)(plVar9 + 3);
        }
        if (uVar10 < 7) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[10] = *(long *)PTR_DAT_033f6c08;
        in_stack_00000040._4_4_ = FUN_02681c0c(plVar8,0);
        lVar5 = FUN_0176eb1c((long)&stack0x00000040 + 4,0);
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        if (*(uint *)(plVar9 + 3) < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[0xb] = lVar5;
        uVar11 = FUN_01600844(plVar9,0);
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar11,0);
      }
      while( true ) {
        plVar9 = *(long **)(unaff_x19 + 0x58);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if ((plVar8 != (long *)0x0) &&
           (lVar5 = thunk_FUN_00d6225c(plVar8,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        if (*(uint *)(plVar9 + 3) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar9[unaff_x23 + 4] = (long)plVar8;
        lVar5 = *(long *)(unaff_x19 + 0x40);
        if (lVar5 != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar12,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
          if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = FUN_01600424(*(undefined8 *)
                                 Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                                ,*(undefined8 *)
                                  (CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10),
                                *(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                                ,0);
          (**(code **)(lVar5 + 0x18))
                    (*(undefined8 *)(lVar5 + 0x40),uVar11,*(undefined8 *)(lVar5 + 0x28));
        }
        lVar5 = *(long *)(unaff_x19 + 0x30);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar5 + 0x88) == 0) {
          lVar12 = *(long *)(unaff_x19 + 0x58);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(lVar5 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
          uVar6 = *(undefined8 *)(lVar12 + unaff_x23 * 8 + 0x20);
          FUN_0132138c(*(long *)(lVar5 + 0x70),unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
          FUN_0143dae4(lVar5,uVar11,uVar6,CONCAT44(uStack000000000000005c,fStack0000000000000058),
                       unaff_x23 & 0xffffffff,0);
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        if (*(long *)(lVar5 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *(long *)(unaff_x19 + 0x48);
        FUN_0132138c(*(long *)(lVar5 + 0x70),unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
        if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0143f660(lVar12,*(undefined8 *)
                             (CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10),0);
        unaff_x23 = unaff_x23 + 1;
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar4 = FUN_01459960(*(long *)(unaff_x19 + 0x30),0);
        if ((long)iVar4 <= (long)unaff_x23) {
          if (3 < *(int *)(unaff_x19 + 0x28)) {
            plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
            lVar5 = FUN_020407b0(in_stack_00000028,0);
            fStack0000000000000058 = (float)lVar5 * DAT_028aa290;
            lVar5 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        System_Runtime_InteropServices_InAttribute_TypeInfo,
                                       &stack0x00000058);
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            if ((lVar5 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
              uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar11,0);
            }
            if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            plVar8[4] = lVar5;
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_02660fcc(*(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<IInteractor>_Dispose__,
                         plVar8,0);
          }
          FUN_00bc0824(&stack0x00000030);
          return 0;
        }
        lVar5 = *(long *)(unaff_x19 + 0x30);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        cVar3 = *(char *)(lVar5 + 0x49);
        uVar11 = *(undefined8 *)(lVar5 + 0x80);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01457470(unaff_x23 & 0xffffffff,cVar3 != '\0',uVar11,0);
        if ((uVar7 & 1) != 0) break;
        if (*(int *)(unaff_x19 + 0x28) < 4) {
          plVar8 = (long *)0x0;
        }
        else {
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar5 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar5,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
          if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar11 = FUN_01600424(*(undefined8 *)PTR_DAT_033ee3e8,
                                *(undefined8 *)
                                 (CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10),
                                *(undefined8 *)StringLiteral_2907,0);
          if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(uVar11,0);
          plVar8 = (long *)0x0;
        }
      }
      lVar5 = *(long *)(unaff_x19 + 0x40);
      if (lVar5 != 0) {
        if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar12,unaff_x23 & 0xffffffff,&stack0x00000058,*unaff_x21);
        if (CONCAT44(uStack000000000000005c,fStack0000000000000058) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar11 = FUN_01600424(*(undefined8 *)StringLiteral_4464,
                              *(undefined8 *)
                               (CONCAT44(uStack000000000000005c,fStack0000000000000058) + 0x10),
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__
                              ,0);
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar11,*(undefined8 *)(lVar5 + 0x28));
      }
    } while (*(int *)(unaff_x19 + 0x28) < 4);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x70);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    param_4 = *unaff_x21;
  } while( true );
}


