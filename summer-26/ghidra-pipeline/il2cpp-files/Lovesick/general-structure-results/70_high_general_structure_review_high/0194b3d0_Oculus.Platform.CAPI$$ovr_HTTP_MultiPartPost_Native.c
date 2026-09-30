/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_HTTP_MultiPartPost_Native
ENTRY_POINT: 0194b3d0
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

void Oculus_Platform_CAPI__ovr_HTTP_MultiPartPost_Native
               (long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  int iVar6;
  float fVar7;
  float fVar8;
  float unaff_s9;
  float fVar9;
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
    FUN_013572a0(param_1,unaff_w23,param_3,param_4);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0135739c(unaff_x27,unaff_w23,in_stack_00000260,
                 *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileSimpleType__);
    if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0135739c(*(long *)(unaff_x22 + 0x90),unaff_w23,unaff_x26,
                 *(undefined8 *)Method_System_Xml_Schema_Compiler_CompileSimpleType__);
    do {
      if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 0194b420 to 01a4b4cf has its CatchHandler @ 0194b420
                       catch() { ... } // from try @ 0194b420 with catch @ 0194b420
                       catch() { ... } // from try @ 0194b6c4 with catch @ 0194b420
                       catch() { ... } // from try @ 0194b744 with catch @ 0194b420
                       catch() { ... } // from try @ 0194b78c with catch @ 0194b420
                       catch() { ... } // from try @ 0194b7f4 with catch @ 0194b420 */
      FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
      if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar4 = FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
      FUN_0194c488(uVar4,in_stack_00000260,in_stack_00000260,uStack0000000000000018);
      if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0194b5a0 to 01a4b5b7 has its CatchHandler @ 0194b5f0 */
        FUN_00da518c();
      }
      iVar2 = *(int *)(unaff_x22 + 0x84);
      FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
      if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(int *)(unaff_x22 + 0x84) = *(int *)(in_stack_00000260 + 0x18) + iVar2;
      if (*(long *)(unaff_x22 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar9 = *(float *)(unaff_x22 + 0x80);
      uVar4 = FUN_013572a0(*(long *)(unaff_x22 + 0x90),unaff_w23,&stack0x00000260,*unaff_x19);
      fVar7 = (float)FUN_0194b970(uVar4,in_stack_00000260);
      lVar5 = *(long *)(unaff_x22 + 0x88);
      unaff_w23 = unaff_w23 + 1;
      *(float *)(unaff_x22 + 0x80) = fVar9 + fVar7;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar5 + 0x18) <= unaff_w23) {
                    /* try { // try from 0194b4d0 to 01a4b4db has its CatchHandler @ 0194b62c */
        if (DAT_0377a0ef == '\0') {
                    /* try { // try from 0194b4e0 to 01a4b4e3 has its CatchHandler @ 0194b60c */
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                            );
          DAT_0377a0ef = '\x01';
        }
                    /* try { // try from 0194b4f0 to 01a4b4f3 has its CatchHandler @ 0194b608 */
                    /* try { // try from 0194b50c to 01a4b513 has its CatchHandler @ 0194b604 */
        uVar3 = FUN_017bc96c(in_stack_00000010,
                             **(undefined8 **)
                               (*(long *)
                                 Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                               + 0xb8),0);
        if ((uVar3 & 1) != 0) {
          FUN_0265dab4(in_stack_00000010,0);
        }
                    /* try { // try from 0194b52c to 01a4b52f has its CatchHandler @ 0194b5ec */
                    /* try { // try from 0194b530 to 01a4b54b has its CatchHandler @ 0194b600 */
        return;
      }
      FUN_013572a0(lVar5,unaff_w23,&stack0x00000260,*unaff_x19);
      if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar2 = *(int *)(in_stack_00000260 + 0x18);
      FUN_01942abc(&stack0x000003e0);
      FUN_01942abc(&stack0x00000390);
      FUN_01942abc(&stack0x00000340);
      if (*(long *)(unaff_x21 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(unaff_x21 + 0xa8),iStack000000000000001c,&stack0x00000260,*unaff_x20);
      if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0194bdb8();
      memcpy(&stack0x00000340,&stack0x00000390,0x44);
      lVar5 = *(long *)(unaff_x22 + 0x88);
      if (lVar5 == 0) {
LAB_0194b55c:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar2 = iVar2 + -1;
      iVar1 = iVar2 + iStack000000000000001c;
      iVar6 = 1;
      while( true ) {
        FUN_013572a0(lVar5,unaff_w23,&stack0x00000260,*unaff_x19);
        if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(in_stack_00000260 + 0x18) < iVar6) break;
        lVar5 = *(long *)(unaff_x21 + 0xa8);
        if (iVar6 < iVar2) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar5,iStack000000000000001c + iVar6,&stack0x00000260,*unaff_x20);
          if (in_stack_00000260 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
        else {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar5,iVar1 + -1,&stack0x00000260,*unaff_x20);
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
          fVar9 = (float)((ulong)in_stack_00000390 >> 0x20);
          fVar7 = ((float)in_stack_00000390 - (float)in_stack_00000340) +
                  ((float)in_stack_000003e0 - (float)in_stack_00000390);
          fVar9 = (fVar9 - (float)((ulong)in_stack_00000340 >> 0x20)) +
                  ((float)((ulong)in_stack_000003e0 >> 0x20) - fVar9);
          fVar8 = (in_stack_00000398 - in_stack_00000348) + (in_stack_000003e8 - in_stack_00000398);
          if ((SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9) <= unaff_s9) &&
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
        if (*(int *)(unaff_x21 + 0x58) < iStack000000000000001c + iVar6) {
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
        FUN_0135739c(in_stack_00000260,iVar6 + -1,&stack0x00000020,*unaff_x25);
        lVar5 = *(long *)(unaff_x22 + 0x88);
        iVar6 = iVar6 + 1;
        if (lVar5 == 0) goto LAB_0194b55c;
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
      iStack000000000000001c = iVar1;
    } while ((uVar3 & 1) == 0);
    if (*(long *)(unaff_x22 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_013572a0(*(long *)(unaff_x22 + 0x88),unaff_w23,&stack0x00000260,*unaff_x19);
    param_1 = *(long *)(unaff_x22 + 0x90);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_x27 = *(long *)(unaff_x22 + 0x88);
    param_4 = *unaff_x19;
    param_3 = &stack0x00000260;
    unaff_x26 = in_stack_00000260;
  } while( true );
}


