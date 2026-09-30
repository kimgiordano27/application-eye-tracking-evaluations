/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_MultiPartPost
ENTRY_POINT: 0194b27c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0194b5c8) */

void Oculus_Platform_CAPI__ovr_HTTP_MultiPartPost(undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined8 *unaff_x25;
  int unaff_w26;
  int unaff_w27;
  long unaff_x28;
  int unaff_w29;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s9;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  long in_stack_000001d0;
  long in_stack_00000260;
  undefined8 in_stack_00000340;
  float in_stack_00000348;
  undefined8 in_stack_00000390;
  float in_stack_00000398;
  undefined8 in_stack_000003e0;
  float in_stack_000003e8;
  
  do {
    FUN_01949f20(param_1,param_2,&stack0x000000f8);
    memcpy(&stack0x000000b0,&stack0x000001d0,0x44);
    memcpy(&stack0x000002f0,&stack0x000001d0,0x44);
    if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    memcpy(&stack0x00000068,&stack0x000000b0,0x44);
    FUN_0135739c(unaff_x28,0,&stack0x00000068,*unaff_x25);
    memcpy(&stack0x00000340,&stack0x000002f0,0x44);
    do {
      memcpy(&stack0x00000390,&stack0x000003e0,0x44);
      if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
      memcpy(&stack0x00000260,&stack0x00000340,0x44);
      if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      memcpy(&stack0x00000020,&stack0x00000260,0x44);
      FUN_0135739c(in_stack_00000260,unaff_w29 + -1,&stack0x00000020,*unaff_x25);
      lVar3 = *(long *)(unaff_x22 + 0x88);
      unaff_w29 = unaff_w29 + 1;
      iVar1 = iStack000000000000001c;
      if (lVar3 == 0) {
LAB_0194b55c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      while( true ) {
        iStack000000000000001c = iVar1;
        FUN_013572a0(lVar3,unaff_w23,&stack0x00000260,*unaff_x19);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (unaff_w29 <= *(int *)(in_stack_00000260 + 0x18)) break;
        if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
        if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
        uVar2 = FUN_0194c06c(*(undefined4 *)(unaff_x22 + 0x68));
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
          if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar3 = *(long *)(unaff_x22 + 0x88);
          FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0135739c(lVar3,unaff_w23,in_stack_00000260,
                       *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileSimpleType__);
          if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0135739c(*(long *)(unaff_x22 + 0x90),unaff_w23,in_stack_00000260,
                       *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileSimpleType__);
        }
        if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
        if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar4 = FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
        FUN_0194c488(uVar4,in_stack_00000260,in_stack_00000260,uStack0000000000000018);
        if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar1 = *(int *)(unaff_x22 + 0x84);
        FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(int *)(unaff_x22 + 0x84) = *(int *)(in_stack_00000260 + 0x18) + iVar1;
        if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar6 = *(float *)(unaff_x22 + 0x80);
        uVar4 = FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
        fVar5 = (float)FUN_0194b970(uVar4,in_stack_00000260);
        lVar3 = *(long *)(unaff_x22 + 0x88);
        unaff_w23 = unaff_w23 + 1;
        *(float *)(unaff_x22 + 0x80) = fVar6 + fVar5;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(lVar3 + 0x18) <= unaff_w23) {
          if (DAT_0377a0ef == '\0') {
            thunk_FUN_00d48444(
                              Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                              );
            DAT_0377a0ef = '\x01';
          }
          uVar2 = FUN_017bc96c(in_stack_00000010,
                               **(undefined8 **)
                                 (*(long *)
                                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                 + 0xb8),0);
          if ((uVar2 & 1) != 0) {
            FUN_0265dab4(in_stack_00000010,0);
          }
          return;
        }
        FUN_013572a0(lVar3,unaff_w23,&stack0x00000260,*unaff_x19);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar1 = *(int *)(in_stack_00000260 + 0x18);
        FUN_01942abc(&stack0x000003e0);
        FUN_01942abc(&stack0x00000390);
        FUN_01942abc(&stack0x00000340);
        if (*(long *)(unaff_x21 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(*(long *)(unaff_x21 + 0xa8),iStack000000000000001c,&stack0x00000260,*unaff_x20)
        ;
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0194bdb8();
        memcpy(&stack0x00000340,&stack0x00000390,0x44);
        lVar3 = *(long *)(unaff_x22 + 0x88);
        if (lVar3 == 0) goto LAB_0194b55c;
        unaff_w24 = iVar1 + -1;
        unaff_w27 = unaff_w24 + iStack000000000000001c + -1;
        unaff_w29 = 1;
        iVar1 = unaff_w24 + iStack000000000000001c;
        unaff_w26 = iStack000000000000001c;
      }
      lVar3 = *(long *)(unaff_x21 + 0xa8);
      if (unaff_w29 < unaff_w24) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar3,unaff_w26 + unaff_w29,&stack0x00000260,*unaff_x20);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      else {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar3,unaff_w27,&stack0x00000260,*unaff_x20);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      FUN_0194bdb8();
      uVar2 = FUN_018ee454();
      if ((uVar2 & 1) == 0) {
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar6 = (float)((ulong)in_stack_00000390 >> 0x20);
        fVar5 = ((float)in_stack_00000390 - (float)in_stack_00000340) +
                ((float)in_stack_000003e0 - (float)in_stack_00000390);
        fVar6 = (fVar6 - (float)((ulong)in_stack_00000340 >> 0x20)) +
                ((float)((ulong)in_stack_000003e0 >> 0x20) - fVar6);
        fVar7 = (in_stack_00000398 - in_stack_00000348) + (in_stack_000003e8 - in_stack_00000398);
        if ((SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6) <= unaff_s9) &&
           (DAT_03774d76 == '\0')) {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        memcpy(&stack0x000002a8,&stack0x00000390,0x44);
        FUN_0194a498(*(undefined4 *)(unaff_x22 + 0x70),&stack0x00000340,&stack0x000002a8);
      }
      else {
        memcpy(&stack0x00000340,&stack0x00000390,0x44);
      }
    } while (unaff_w26 + unaff_w29 <= *(int *)(unaff_x21 + 0x58));
    if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_013572a0(*(long *)(unaff_x22 + 0x88),0,&stack0x00000260,*unaff_x19);
    memcpy(&stack0x00000218,&stack0x00000340,0x44);
    FUN_01949fe8(&stack0x00000260,&stack0x00000218);
    if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_013572a0(*(long *)(unaff_x22 + 0x88),0,&stack0x000001d0,*unaff_x19);
    if (in_stack_000001d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_013572a0(in_stack_000001d0,0,&stack0x000001d0,*(undefined8 *)StringLiteral_7051);
    memcpy(&stack0x00000188,&stack0x000001d0,0x44);
    FUN_01949fe8(&stack0x000000f8,&stack0x00000188);
    memcpy(&stack0x00000140,&stack0x00000260,0x44);
    param_1 = &stack0x000001d0;
    param_2 = &stack0x00000140;
    unaff_x28 = in_stack_00000260;
  } while( true );
}


