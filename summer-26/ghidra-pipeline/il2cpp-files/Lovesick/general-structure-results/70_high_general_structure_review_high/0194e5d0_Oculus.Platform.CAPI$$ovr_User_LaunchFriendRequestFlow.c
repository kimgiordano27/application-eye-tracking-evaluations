/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_LaunchFriendRequestFlow
ENTRY_POINT: 0194e5d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0194ea70) */

void Oculus_Platform_CAPI__ovr_User_LaunchFriendRequestFlow(undefined **param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  int unaff_w21;
  int iVar5;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  int iVar6;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar15;
  float unaff_s15;
  float fVar16;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  float fStack000000000000000c;
  int in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  float in_stack_00000030;
  long in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  do {
    thunk_FUN_00d48444(param_1[0x77]);
    DAT_03774e1a = '\x01';
    iVar5 = unaff_w24;
    do {
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar7 = fStack000000000000000c;
      if (*(char *)(in_stack_00000040 + 100) != '\0') {
        if (*(long *)(in_stack_00000040 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        fVar7 = *(float *)(*(long *)(in_stack_00000040 + 0x48) + 0x80);
      }
      lVar3 = *(long *)(unaff_x29 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      unaff_s8 = unaff_s8 +
                 in_stack_00000030 *
                 (SQRT((unaff_s13 - unaff_s15) * (unaff_s13 - unaff_s15) +
                       (unaff_s11 - unaff_s10) * (unaff_s11 - unaff_s10) +
                       (unaff_s14 - unaff_s9) * (unaff_s14 - unaff_s9)) / fVar7);
      if (-1 < unaff_w21) {
        iVar6 = 0;
        fVar7 = *(float *)(lVar3 + unaff_x22 * unaff_x25 + 0x60) *
                *(float *)(in_stack_00000040 + 0x70);
        do {
          if (*(long *)(in_stack_00000040 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar3 = *(long *)(*(long *)(in_stack_00000040 + 0x68) + 0x18);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar3,iVar6,&stack0x00000048,*unaff_x26);
          lVar3 = *(long *)(unaff_x29 + 0x10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(in_stack_00000040 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar4 = lVar3 + unaff_x22 * unaff_x25;
          lVar3 = lVar3 + unaff_x22 * unaff_x25;
          uVar9 = *(undefined8 *)(lVar3 + 0x20);
          fVar15 = *(float *)(in_stack_00000040 + 0x5c);
          fVar14 = *(float *)(lVar4 + 0x30);
          fVar12 = *(float *)(lVar4 + 0x34);
          fVar16 = *(float *)(lVar4 + 0x2c);
          fVar10 = fVar7 * ((float)*(undefined8 *)(lVar4 + 0x38) * fStack0000000000000048 +
                           (float)*(undefined8 *)(lVar4 + 0x44) * fStack000000000000004c);
          fVar11 = fVar7 * ((float)((ulong)*(undefined8 *)(lVar4 + 0x38) >> 0x20) *
                            fStack0000000000000048 +
                           (float)((ulong)*(undefined8 *)(lVar4 + 0x44) >> 0x20) *
                           fStack000000000000004c);
          fVar13 = fVar7 * (fStack0000000000000048 * *(float *)(lVar4 + 0x40) +
                           fStack000000000000004c * *(float *)(lVar4 + 0x4c));
          fVar8 = fVar11 + (float)((ulong)uVar9 >> 0x20);
          FUN_00ac4f98(CONCAT44(fVar8,fVar10 + (float)uVar9),fVar8,fVar13 + *(float *)(lVar3 + 0x28)
                       ,*(long *)(in_stack_00000040 + 0x18),*unaff_x19);
          if (*(long *)(in_stack_00000040 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac4f98(CONCAT44(fVar11,fVar10),fVar11,fVar13,*(long *)(in_stack_00000040 + 0x20),
                       *unaff_x19);
          if (*(long *)(in_stack_00000040 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00bcd1a4(fVar12 * fVar11 - fVar14 * fVar13,fVar13 * fVar16 - fVar12 * fVar10,
                       fVar14 * fVar10 - fVar16 * fVar11,0xbf800000,
                       *(long *)(in_stack_00000040 + 0x28),*unaff_x23);
          lVar3 = *(long *)(unaff_x29 + 0x10);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(long *)(in_stack_00000040 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar3 = lVar3 + unaff_x22 * unaff_x25;
          FUN_00ad3d7c(*(undefined4 *)(lVar3 + 0x50),*(undefined4 *)(lVar3 + 0x54),
                       *(undefined4 *)(lVar3 + 0x58),*(undefined4 *)(lVar3 + 0x5c),
                       *(long *)(in_stack_00000040 + 0x38),*unaff_x28);
          if (*(long *)(in_stack_00000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00bbed00(((float)iVar6 / unaff_s12) * fVar15,unaff_s8,
                       *(long *)(in_stack_00000040 + 0x30),*unaff_x27);
          if ((iVar6 < unaff_w21) && ((long)unaff_x22 < (long)(*(int *)(unaff_x29 + 0x18) + -1))) {
            if (*(long *)(in_stack_00000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ac20f0(*(long *)(in_stack_00000040 + 0x40),iStack000000000000001c + iVar6,
                         *(undefined8 *)StringLiteral_4747);
            if (*(long *)(in_stack_00000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ac20f0(*(long *)(in_stack_00000040 + 0x40),iStack0000000000000018 + iVar6,
                         *(undefined8 *)StringLiteral_4747);
            if (*(long *)(in_stack_00000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            iVar1 = iStack000000000000001c + iVar6 + 1;
            FUN_00ac20f0(*(long *)(in_stack_00000040 + 0x40),iVar1,*(undefined8 *)StringLiteral_4747
                        );
            if (*(long *)(in_stack_00000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ac20f0(*(long *)(in_stack_00000040 + 0x40),iVar1,*(undefined8 *)StringLiteral_4747
                        );
            if (*(long *)(in_stack_00000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ac20f0(*(long *)(in_stack_00000040 + 0x40),iStack0000000000000018 + iVar6,
                         *(undefined8 *)StringLiteral_4747);
            if (*(long *)(in_stack_00000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_00ac20f0(*(long *)(in_stack_00000040 + 0x40),iStack0000000000000018 + iVar6 + 1,
                         *(undefined8 *)StringLiteral_4747);
            unaff_x25 = 0x44;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= unaff_w21);
      }
      unaff_x22 = unaff_x22 + 1;
      unaff_w24 = iVar5 + 1;
      iStack0000000000000018 = iStack0000000000000018 + in_stack_00000010;
      iStack000000000000001c = iStack000000000000001c + in_stack_00000010;
      if ((long)*(int *)(unaff_x29 + 0x18) <= (long)unaff_x22) {
        do {
          iStack0000000000000008 = iStack0000000000000008 + 1;
          if (*(long *)(in_stack_00000040 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar3 = *(long *)(*(long *)(in_stack_00000040 + 0x48) + 0x90);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(lVar3 + 0x18) <= iStack0000000000000008) {
            FUN_0194ee80(in_stack_00000040);
            if (DAT_0377a0ef == '\0') {
              thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                );
              DAT_0377a0ef = '\x01';
            }
            uVar2 = FUN_017bc96c(in_stack_00000000,
                                 **(undefined8 **)
                                   (*(long *)
                                     Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                   + 0xb8),0);
            if ((uVar2 & 1) != 0) {
              FUN_0265dab4(in_stack_00000000,0);
            }
            return;
          }
          FUN_013572a0(lVar3,iStack0000000000000008,&stack0x00000048,
                       *(undefined8 *)Method_System_Collections_Generic_Stack<JSONNode>_Peek__);
          unaff_x29 = CONCAT44(fStack000000000000004c,fStack0000000000000048);
          if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        } while (*(int *)(unaff_x29 + 0x18) < 1);
        unaff_x22 = 0;
        iStack0000000000000018 = in_stack_00000010 * (iVar5 + 2);
        iStack000000000000001c = in_stack_00000010 * unaff_w24;
      }
      lVar3 = *(long *)(unaff_x29 + 0x10);
      iVar5 = (int)unaff_x22;
      if (unaff_x22 < 2) {
        iVar5 = 1;
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(uint *)(lVar3 + 0x18) <= iVar5 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      in_stack_00000030 = *(float *)(in_stack_00000040 + 0x60);
      lVar4 = lVar3 + unaff_x22 * unaff_x25;
      lVar3 = lVar3 + (ulong)(iVar5 - 1U) * (unaff_x25 & 0xffffffff);
      unaff_s11 = *(float *)(lVar4 + 0x20);
      unaff_s14 = *(float *)(lVar4 + 0x24);
      unaff_s13 = *(float *)(lVar4 + 0x28);
      unaff_s10 = *(float *)(lVar3 + 0x20);
      unaff_s9 = *(float *)(lVar3 + 0x24);
      unaff_s15 = *(float *)(lVar3 + 0x28);
      iVar5 = unaff_w24;
    } while (DAT_03774e1a != '\0');
    param_1 = &RCG_Lovesick_Props_SunGlassesPlacementPoint_<DestroyGlassesCoroutine>d__15_TypeInfo;
  } while( true );
}


