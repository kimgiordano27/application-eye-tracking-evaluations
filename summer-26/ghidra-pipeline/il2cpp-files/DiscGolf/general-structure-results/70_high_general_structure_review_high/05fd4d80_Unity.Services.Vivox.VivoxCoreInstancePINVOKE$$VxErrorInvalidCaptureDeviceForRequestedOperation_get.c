/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorInvalidCaptureDeviceForRequestedOperation_get
ENTRY_POINT: 05fd4d80
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorInvalidCaptureDeviceForRequestedOperation_get
               (void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long lVar16;
  long lVar17;
  long lVar18;
  short *psVar19;
  ulong uVar20;
  ulong uVar21;
  ulong unaff_x26;
  ulong uVar22;
  uint *puVar23;
  undefined1 auVar24 [16];
  ulong uStack0000000000000018;
  ulong in_stack_00000040;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined1 uStack000000000000007c;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  
  FUN_02d965b8(
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseSliceWithCapacity<InputDevice>__
              );
  FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfValue<InternedString>__)
  ;
  FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputBinding>__);
  FUN_02d965b8(PTR_DAT_06a0f5d8);
  *(undefined1 *)(unaff_x21 + 0x84c) = 1;
  uStack000000000000007c = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uVar7 = FUN_037b6164(6,*unaff_x20);
  FUN_05f4a1a8(&stack0x0000007c,uVar7,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_stack_00000088 = 0;
  in_stack_00000080 = *(long *)(unaff_x19 + 0x30);
  LeanTween__value(&stack0x00000080);
  puVar6 = PTR_DAT_06a0f5d8;
  in_stack_00000088 = CONCAT44(in_stack_00000088._4_4_,0xffffffff);
  in_stack_00000068 = in_stack_00000088;
  in_stack_00000060 = in_stack_00000080;
  do {
    do {
      uVar8 = FUN_05fd2394(&stack0x00000060);
      if ((uVar8 & 1) == 0) {
        FUN_05f4a1b4(&stack0x0000007c,0);
        return;
      }
      lVar9 = FUN_05fd233c(&stack0x00000060);
      auVar24 = FUN_05fdcc04(lVar9,*(undefined8 *)(unaff_x19 + 0x30),0);
    } while (auVar24._8_4_ < 1);
    uVar8 = auVar24._8_8_ & 0xffffffff;
    uStack0000000000000018 = 0;
    do {
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (DAT_06dc4878 == '\0') {
        FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputControl>__)
        ;
        DAT_06dc4878 = '\x01';
      }
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputControl>__;
      puVar1 = (undefined4 *)(auVar24._0_8_ + uStack0000000000000018 * 0x80);
      lVar14 = *(long *)(lVar16 + 0x38);
      iVar2 = puVar1[0x14];
      uVar4 = puVar1[0x15];
      if (lVar14 == 0) {
        FUN_02dcfd74(lVar16);
        lVar14 = *(long *)(lVar16 + 0x38);
      }
      lVar18 = FUN_036ee514(*(undefined8 *)(lVar18 + 0x48),*(undefined8 *)(lVar14 + 0x10));
      if ((int)uVar4 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar4 != 0) {
        uVar20 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          psVar19 = (short *)(lVar18 + (long)iVar2 * 0xc + uVar20 * 0xc);
          unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)*(uint *)(psVar19 + 4);
          pcVar10 = (char *)FUN_05fdc35c(*(long *)(unaff_x19 + 0x30),*(undefined8 *)psVar19,
                                         unaff_x26,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if ((*(int *)(psVar19 + 4) == 0) && (*pcVar10 == '\0')) {
            if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar7 = FUN_0400ff1c(*(long *)(unaff_x19 + 0x18),*puVar1,
                                 *(undefined8 *)
                                  Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
            uVar11 = FUN_05fd5890(uVar7,*(undefined8 *)psVar19);
            uVar22 = 0;
            do {
              lVar14 = *(long *)(unaff_x19 + 0x30);
              if (DAT_06dc4879 == '\0') {
                FUN_02d965b8(
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputControl>__
                            );
                DAT_06dc4879 = '\x01';
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar17 = *(long *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<InputControl>__
              ;
              lVar16 = auVar24._0_8_ + uVar22 * 0x80;
              lVar15 = *(long *)(lVar17 + 0x38);
              iVar3 = *(int *)(lVar16 + 0x58);
              uVar5 = *(uint *)(lVar16 + 0x5c);
              uVar21 = (ulong)uVar5;
              if (lVar15 == 0) {
                FUN_02dcfd74(lVar17);
                lVar15 = *(long *)(lVar17 + 0x38);
              }
              lVar14 = FUN_036ee514(*(undefined8 *)(lVar14 + 0x50),*(undefined8 *)(lVar15 + 0x10));
              if ((int)uVar5 < 0) {
                FUN_05508bc8(0);
              }
              else if (uVar5 != 0) {
                puVar23 = (uint *)(lVar14 + (long)iVar3 * 0xc + 8);
                do {
                  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*puVar23;
                  pcVar12 = (char *)FUN_05fdc35c(*(long *)(unaff_x19 + 0x30),
                                                 *(undefined8 *)(puVar23 + -2),unaff_x21,0);
                  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if ((*puVar23 == 0) && (*pcVar12 == '\0')) {
                    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((short)puVar23[-2] == *psVar19 && (uVar11 & 1) == 0) {
                      if (*(int *)(lVar9 + 0x2a8) < 2) {
                        in_stack_00000040 =
                             in_stack_00000040 & 0xffffffff00000000 | (ulong)*(uint *)(psVar19 + 4);
                        uVar13 = FUN_05fdcdd8(lVar16,*(undefined8 *)psVar19,in_stack_00000040,
                                              *(undefined8 *)(unaff_x19 + 0x30),0);
                        if ((uVar13 & 1) == 0) goto LAB_05fd509c;
                      }
                      pcVar10[0x14] = '\x01';
                      pcVar12[0x14] = '\x01';
                    }
                  }
LAB_05fd509c:
                  uVar21 = uVar21 - 1;
                  puVar23 = puVar23 + 3;
                } while (uVar21 != 0);
              }
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar8);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar4);
      }
      uStack0000000000000018 = uStack0000000000000018 + 1;
    } while (uStack0000000000000018 != uVar8);
  } while( true );
}


