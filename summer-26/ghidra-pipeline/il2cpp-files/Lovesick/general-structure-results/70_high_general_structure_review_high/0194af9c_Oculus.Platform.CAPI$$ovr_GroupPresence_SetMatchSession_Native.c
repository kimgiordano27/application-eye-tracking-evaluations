/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_GroupPresence_SetMatchSession_Native
ENTRY_POINT: 0194af9c
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

void Oculus_Platform_CAPI__ovr_GroupPresence_SetMatchSession_Native(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  undefined8 *unaff_x25;
  int unaff_w26;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  long in_stack_000001d0;
  long in_stack_00000260;
  undefined8 in_stack_00000340;
  float in_stack_00000348;
  undefined8 in_stack_00000390;
  float in_stack_00000398;
  undefined8 in_stack_000003e0;
  float in_stack_000003e8;
  
  while( true ) {
    FUN_01942abc(&stack0x00000390);
    FUN_01942abc(&stack0x00000340);
    if (*(long *)(unaff_x21 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0132138c(*(long *)(unaff_x21 + 0xa8),unaff_w26,&stack0x00000260,*unaff_x20);
    if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0194bdb8();
    memcpy(&stack0x00000340,&stack0x00000390,0x44);
    lVar2 = *(long *)(unaff_x22 + 0x88);
    if (lVar2 == 0) break;
    iVar1 = unaff_w24 + -1 + unaff_w26;
    iVar5 = 1;
    while( true ) {
      FUN_013572a0(lVar2,unaff_w23,&stack0x00000260,*unaff_x19);
      if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(in_stack_00000260 + 0x18) < iVar5) break;
      lVar2 = *(long *)(unaff_x21 + 0xa8);
      if (iVar5 < unaff_w24 + -1) {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar2,unaff_w26 + iVar5,&stack0x00000260,*unaff_x20);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      else {
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar2,iVar1 + -1,&stack0x00000260,*unaff_x20);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      FUN_0194bdb8();
      uVar3 = FUN_018ee454();
      if ((uVar3 & 1) == 0) {
        if (DAT_0377518c == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_0377518c = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fVar7 = (float)((ulong)in_stack_00000390 >> 0x20);
        fVar6 = ((float)in_stack_00000390 - (float)in_stack_00000340) +
                ((float)in_stack_000003e0 - (float)in_stack_00000390);
        fVar7 = (fVar7 - (float)((ulong)in_stack_00000340 >> 0x20)) +
                ((float)((ulong)in_stack_000003e0 >> 0x20) - fVar7);
        fVar8 = (in_stack_00000398 - in_stack_00000348) + (in_stack_000003e8 - in_stack_00000398);
        if ((SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) <= unaff_s9) &&
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
      if (*(int *)(unaff_x21 + 0x58) < unaff_w26 + iVar5) {
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
        FUN_01949f20(&stack0x000001d0,&stack0x00000140,&stack0x000000f8);
        memcpy(&stack0x000000b0,&stack0x000001d0,0x44);
        memcpy(&stack0x000002f0,&stack0x000001d0,0x44);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        memcpy(&stack0x00000068,&stack0x000000b0,0x44);
        FUN_0135739c(in_stack_00000260,0,&stack0x00000068,*unaff_x25);
        memcpy(&stack0x00000340,&stack0x000002f0,0x44);
      }
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
      FUN_0135739c(in_stack_00000260,iVar5 + -1,&stack0x00000020,*unaff_x25);
      lVar2 = *(long *)(unaff_x22 + 0x88);
      iVar5 = iVar5 + 1;
      if (lVar2 == 0) goto LAB_0194b55c;
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
    FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
    uVar3 = FUN_0194c06c(*(undefined4 *)(unaff_x22 + 0x68));
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
      if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar2 = *(long *)(unaff_x22 + 0x88);
      FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0135739c(lVar2,unaff_w23,in_stack_00000260,
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
    FUN_0194c488(uVar4,in_stack_00000260,in_stack_00000260,in_stack_00000018);
    if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar5 = *(int *)(unaff_x22 + 0x84);
    FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
    if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(int *)(unaff_x22 + 0x84) = *(int *)(in_stack_00000260 + 0x18) + iVar5;
    if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    fVar7 = *(float *)(unaff_x22 + 0x80);
    uVar4 = FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
    fVar6 = (float)FUN_0194b970(uVar4,in_stack_00000260);
    lVar2 = *(long *)(unaff_x22 + 0x88);
    unaff_w23 = unaff_w23 + 1;
    *(float *)(unaff_x22 + 0x80) = fVar7 + fVar6;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar2 + 0x18) <= unaff_w23) {
      if (DAT_0377a0ef == '\0') {
        thunk_FUN_00d48444(
                          Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                          );
        DAT_0377a0ef = '\x01';
      }
      uVar3 = FUN_017bc96c(in_stack_00000010,
                           **(undefined8 **)
                             (*(long *)
                               Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                             + 0xb8),0);
      if ((uVar3 & 1) != 0) {
        FUN_0265dab4(in_stack_00000010,0);
      }
      return;
    }
    FUN_013572a0(lVar2,unaff_w23,&stack0x00000260,*unaff_x19);
    if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_w24 = *(int *)(in_stack_00000260 + 0x18);
    FUN_01942abc(&stack0x000003e0);
    unaff_w26 = iVar1;
  }
LAB_0194b55c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


