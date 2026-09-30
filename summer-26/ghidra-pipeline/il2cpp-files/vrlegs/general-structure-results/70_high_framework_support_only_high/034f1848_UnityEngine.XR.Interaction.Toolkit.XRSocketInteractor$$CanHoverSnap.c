/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRSocketInteractor$$CanHoverSnap
ENTRY_POINT: 034f1848
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x034f1a98) */
/* WARNING: Removing unreachable block (ram,0x034f1aa8) */

void UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__CanHoverSnap(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
code_r0x034f1848:
  do {
    uVar1 = (*(code *)*param_1)(unaff_x21,param_1[1]);
    lVar2 = *(long *)(*unaff_x29 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01a46ff8();
    }
    pcVar3 = (char *)thunk_FUN_01a59484(&stack0x00000050,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar2 + 0xc0) + 8) + 0x80));
    if (*pcVar3 == '\0') {
LAB_034f194c:
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      Animancer_FadeGroup__get_TargetWeight
                (*(long *)(unaff_x20 + 0x58),&stack0x00000008,
                 *(undefined8 *)UnityEngine_Display_DisplaysUpdatedDelegate_TypeInfo);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000040 = in_stack_00000018;
      while( true ) {
        uVar4 = FUN_021b51c8(&stack0x00000030,*unaff_x24);
        if ((uVar4 & 1) == 0) {
          FUN_021b51c4(&stack0x00000030,
                       *(undefined8 *)
                        Newtonsoft_Json_Converters_DiscriminatedUnionConverter_<>c__DisplayClass8_0_TypeInfo
                      );
          if (in_stack_00000060._4_1_ != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000000,0);
          }
          return;
        }
        FUN_01b7a454(&stack0x00000030,&stack0x00000008,*unaff_x25);
        if (in_stack_00000008 == 0) break;
        lVar2 = *(long *)(in_stack_00000008 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01ba9478(&stack0x00000050,&stack0x00000008,*unaff_x23);
    lVar2 = in_stack_00000008;
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_02748788(lVar2,uVar1,0);
    if ((uVar4 & 1) == 0) goto LAB_034f194c;
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02225f20(*(long *)(unaff_x20 + 0x48),&stack0x00000008,
                 *(undefined8 *)
                  System_Linq_Expressions_Interpreter_DivInstruction_DivDouble_TypeInfo);
    lVar2 = in_stack_00000008;
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(*(long *)(unaff_x20 + 0x58),in_stack_00000008,
                 *(undefined8 *)
                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_UnionCase_TypeInfo);
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02225b40(*(long *)(unaff_x20 + 0x48),lVar2,
                 *(undefined8 *)Animancer_DirectionalAnimationSet8_Direction_TypeInfo);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000008 = *(long *)(lVar2 + 0x20);
    FUN_0219eaf8(*(long *)(unaff_x20 + 0x50),&stack0x00000008,
                 *(undefined8 *)
                  UnityEngine_ResourceManagement_Diagnostics_DiagnosticEventCollectorSingleton_<>c_TypeInfo
                );
    lVar2 = *(long *)(unaff_x20 + 0x48);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar2 + 0x30) < 1) goto LAB_034f194c;
    FUN_02224f30(lVar2,&stack0x00000008,*unaff_x27);
    if (in_stack_00000008 == 0) {
      in_stack_00000020 = 0;
      in_stack_00000028 = 0;
    }
    else {
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000068 = *(undefined8 *)(in_stack_00000008 + 0x18);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_02241190(&stack0x00000008,&stack0x00000068,*(undefined8 *)PTR_DAT_03cfddf8);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
    }
    in_stack_00000058 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000020;
    unaff_x21 = *(long **)(unaff_x20 + 0x38);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          param_1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x034f1848;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    param_1 = (undefined8 *)FUN_01a472ec(unaff_x21,*unaff_x28,0);
  } while( true );
}


