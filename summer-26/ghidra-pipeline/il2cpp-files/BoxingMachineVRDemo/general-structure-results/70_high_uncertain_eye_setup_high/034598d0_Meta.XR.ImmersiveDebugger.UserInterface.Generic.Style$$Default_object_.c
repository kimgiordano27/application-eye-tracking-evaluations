/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style$$Default<object>
ENTRY_POINT: 034598d0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Style__Default<object>(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x25;
  undefined8 uVar10;
  int iVar11;
  ulong unaff_x27;
  long *unaff_x28;
  ulong unaff_x29;
  float unaff_s8;
  float unaff_s9;
  void *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  int iStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
code_r0x034598d0:
  uVar7 = FUN_05853b68(param_1,0);
  if ((uVar7 & 1) != 0) {
    if ((uStack0000000000000038 & 1) == 0) {
      uStack0000000000000038 = 0;
      goto LAB_034598f0;
    }
    uStack0000000000000038 = 0;
  }
LAB_03459910:
  FUN_037a8ee4(&stack0x000000a0,unaff_x25,*(undefined8 *)PTR_DAT_06768518);
  uVar7 = unaff_x29;
  while( true ) {
    while( true ) {
      unaff_x29 = uVar7 + 1;
      if (unaff_x29 == unaff_x27) {
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000070 = 0;
        in_stack_00000058 = 0;
        if ((uStack0000000000000030 & 1) == 0) {
          uVar2 = 2;
        }
        else {
          uVar2 = 0;
        }
        if ((uStack0000000000000034 & 1) == 0) {
          uVar2 = 1;
        }
        _uStack0000000000000050 = (ulong)uVar2;
        in_stack_00000080 = in_stack_000000a8;
        in_stack_00000078 = in_stack_000000a0;
        in_stack_00000090 = in_stack_000000b8;
        in_stack_00000088 = in_stack_000000b0;
        in_stack_00000098 = *(undefined8 *)(unaff_x20 + 0x10);
        thunk_FUN_02dd37b4(&stack0x00000098);
        _uStack0000000000000050 = CONCAT44(unaff_s8,uStack0000000000000050);
        memcpy(in_stack_00000008,&stack0x00000050,0x50);
        return;
      }
      lVar8 = *(long *)(unaff_x20 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar2 = FUN_05853b68(lVar8 + unaff_x29 * 0x10 + 0x20,0);
      lVar8 = *(long *)(unaff_x20 + 0x10);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(uint *)(lVar8 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      uVar3 = FUN_058539b4(lVar8 + unaff_x29 * 0x10 + 0x20,0);
      if ((uStack0000000000000038 & uVar2 & 1) == 0) break;
      FUN_037a8ee4(&stack0x000000a0,0,*(undefined8 *)PTR_DAT_06768518);
      uStack0000000000000038 = 1;
      uVar7 = unaff_x29;
    }
    lVar8 = *(long *)(unaff_x20 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar8 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar10 = *(undefined8 *)(lVar8 + unaff_x29 * 0x10 + 0x20);
    uVar5 = FUN_04e8cf70(uVar10,0);
    if ((uVar5 & 1) == 0) break;
    FUN_037a8ee4(&stack0x000000a0,0,*(undefined8 *)PTR_DAT_06768518);
    unaff_s8 = unaff_s8 + unaff_s9;
    uVar7 = unaff_x29;
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  iVar11 = 0;
  do {
    lVar8 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03459600;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_03459600:
    iVar4 = (*(code *)*puVar6)();
    if (iVar4 <= iVar11) {
      unaff_x25 = 0;
      goto LAB_03459800;
    }
    lVar8 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x19) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto 
          Newtonsoft_Json_Utilities_StringUtils__ForgivingCaseSensitiveFind<__Il2CppFullySharedGenericType>
          ;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
Newtonsoft_Json_Utilities_StringUtils__ForgivingCaseSensitiveFind<__Il2CppFullySharedGenericType>:
    lVar8 = (*(code *)*puVar6)();
    if (((unaff_x21 != 0) && (iVar11 != 0)) && (lVar8 == unaff_x21)) {
      lVar8 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x19) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_034596e0;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_034596e0:
      (*(code *)*puVar6)();
    }
    unaff_x25 = FUN_058530e4();
    if ((unaff_x25 != 0) &&
       (uVar5 = FUN_037a9838(&stack0x000000a0,unaff_x25,*(undefined8 *)PTR_DAT_06768520),
       (uVar5 & 1) == 0)) break;
    iVar11 = iVar11 + 1;
  } while( true );
  uVar10 = FUN_05860ad4(uVar10,0);
  FUN_0583c144(&stack0x00000040,uVar10,0);
  uVar5 = FUN_05844b10(&stack0x00000040,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(unaff_x25 + 0x78);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar10 = *(undefined8 *)(lVar8 + 0x58);
    uVar1 = *(undefined8 *)(lVar8 + 0x60);
    lVar8 = *(long *)PTR_DAT_06768498;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar8 = *(long *)PTR_DAT_06768498;
    }
    uVar5 = FUN_0590dfcc(*(long *)(lVar8 + 0xb8) + 0x10,in_stack_00000040,in_stack_00000048,uVar10,
                         uVar1,(long)&stack0x00000038 + 4,0);
    iVar11 = iStack000000000000003c;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      iVar4 = -iVar11;
      if (-1 < iVar11) {
        iVar4 = iVar11;
      }
      unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar4 + 1) + unaff_s9;
      goto LAB_03459800;
    }
  }
  unaff_s8 = unaff_s8 + unaff_s9;
LAB_03459800:
  uVar5 = uVar7 + 2;
  unaff_x27 = in_stack_00000028;
  if ((long)uVar5 < in_stack_00000020) {
    lVar8 = *(long *)(unaff_x20 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar5 = FUN_05853b68(lVar8 + uVar5 * 0x10 + 0x20,0);
    if ((uVar5 & 1) != 0) {
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(unaff_x25 == 0) & (uVar3 ^ 1);
      uStack0000000000000038 = uStack0000000000000038 | unaff_x25 != 0;
      goto LAB_03459910;
    }
  }
  if (unaff_x29 == in_stack_00000018 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
    if (unaff_x25 == 0) {
LAB_034598f0:
      uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
      uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
    }
    goto LAB_03459910;
  }
  uStack0000000000000030 = uStack0000000000000030 & (uVar3 ^ 1 | (uint)(unaff_x25 != 0));
  uStack0000000000000034 = uStack0000000000000034 & (uVar3 | unaff_x25 != 0);
  if (unaff_x29 == 0) goto LAB_03459910;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(uint *)(lVar8 + 0x18) <= (uint)uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
  param_1 = lVar8 + uVar7 * 0x10 + 0x20;
  goto code_r0x034598d0;
}


