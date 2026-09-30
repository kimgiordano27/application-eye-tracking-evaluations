/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown$$set_Label
ENTRY_POINT: 0144dd38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0144e5b8) */

undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__set_Label(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x19;
  undefined8 *puVar10;
  long unaff_x20;
  long unaff_x21;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long unaff_x26;
  undefined8 *puVar14;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long *plVar15;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  
  uVar4 = DAT_0293f7f0;
  uVar3 = DAT_028aa028;
  plVar15 = *(long **)(unaff_x29 + 0x240);
  puVar10 = *(undefined8 **)(unaff_x19 + 0x898);
  puVar14 = *(undefined8 **)(unaff_x26 + 0x418);
  uVar11 = 0;
  do {
    iVar5 = FUN_01459960(param_1,0);
    if ((long)iVar5 <= (long)uVar11) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(in_stack_00000000,0,0);
      if ((uVar11 & 1) != 0) {
        FUN_0142deac(in_stack_00000000,0);
      }
      return 0;
    }
    lVar9 = *(long *)(unaff_x20 + 0x30);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    cVar2 = *(char *)(lVar9 + 0x49);
    uVar12 = *(undefined8 *)(lVar9 + 0x80);
    if (*(int *)(*plVar15 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01457470(uVar11 & 0xffffffff,cVar2 != '\0',uVar12,0);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(unaff_x20 + 0x28) < 4) {
        lVar9 = 0;
      }
      else {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar9,uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = FUN_01600424(*(undefined8 *)PTR_DAT_033ee3e8,
                              *(undefined8 *)(in_stack_00000018 + 0x10),
                              *(undefined8 *)StringLiteral_2907,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar12,0);
        lVar9 = 0;
      }
    }
    else {
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      lVar9 = *(long *)(unaff_x20 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(unaff_x20 + 0x38),uVar11 & 0xffffffff
                 ,lVar9,0);
      lVar9 = *(long *)(unaff_x20 + 0x40);
      if (lVar9 != 0) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar7,uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = FUN_01600424(*(undefined8 *)StringLiteral_4464,
                              *(undefined8 *)(in_stack_00000018 + 0x10),*puVar14,0);
        (**(code **)(lVar9 + 0x18))
                  (uVar3,*(undefined8 *)(lVar9 + 0x40),uVar12,*(undefined8 *)(lVar9 + 0x28));
      }
      if (3 < *(int *)(unaff_x20 + 0x28)) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar9,uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = *(undefined8 *)(in_stack_00000018 + 0x10);
        FUN_0132138c(lVar9,uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
        lVar9 = in_stack_00000018;
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016f5f58(lVar9 + 0x18,0);
        uVar12 = FUN_0160073c(*(undefined8 *)StringLiteral_29,uVar12,
                              *(undefined8 *)Method_System_Double_System_IConvertible_ToDateTime__,
                              uVar8,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar12,0);
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x28);
      *(undefined4 *)(unaff_x21 + 0x24) = uStack0000000000000014;
      *(undefined4 *)(unaff_x21 + 0x28) = uStack0000000000000010;
      lVar9 = *(long *)(unaff_x20 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(lVar9 + 0x18);
      *(undefined8 *)(unaff_x21 + 0x40) = unaff_x27;
      *(undefined4 *)(unaff_x21 + 0x2c) = uVar1;
      uVar12 = *(undefined8 *)(lVar9 + 0x58);
      *(int *)(unaff_x21 + 0x58) = (int)uVar11;
      *(undefined8 *)(unaff_x21 + 0x50) = uVar12;
      if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(lVar9 + 0x70),uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
      *(long *)(unaff_x21 + 0x60) = in_stack_00000018;
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar9,uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(unaff_x21 + 0x30) = *(undefined1 *)(in_stack_00000018 + 0x18);
      lVar9 = *(long *)(unaff_x20 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(unaff_x21 + 0x31) = *(undefined1 *)(lVar9 + 0x27);
      *(undefined1 *)(unaff_x21 + 0x32) = *(undefined1 *)(lVar9 + 0x49);
      *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(lVar9 + 0x50);
      lVar9 = FUN_013e6eec();
      if (3 < *(int *)(unaff_x20 + 0x28)) {
        lVar9 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar12 = FUN_01456474(Method_System_Text_Encoding_GetChars__);
        return uVar12;
      }
    }
    plVar13 = *(long **)(unaff_x20 + 0x48);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((lVar9 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0)) {
      uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar12,0);
    }
    if (*(uint *)(plVar13 + 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar13[uVar11 + 4] = lVar9;
    lVar9 = *(long *)(unaff_x20 + 0x40);
    if (lVar9 != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar7,uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = FUN_01600424(*(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                            ,*(undefined8 *)(in_stack_00000018 + 0x10),*puVar14,0);
      (**(code **)(lVar9 + 0x18))
                (uVar4,*(undefined8 *)(lVar9 + 0x40),uVar12,*(undefined8 *)(lVar9 + 0x28));
    }
    lVar9 = *(long *)(unaff_x20 + 0x30);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar9 + 0x88) == 0) {
      lVar7 = *(long *)(unaff_x20 + 0x48);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar8 = *(undefined8 *)(lVar7 + uVar11 * 8 + 0x20);
      FUN_0132138c(*(long *)(lVar9 + 0x70),uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
      FUN_0143dae4(lVar9,uVar12,uVar8,in_stack_00000018,uVar11 & 0xffffffff,0);
      lVar9 = *(long *)(unaff_x20 + 0x30);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = *(long *)(unaff_x20 + 0x38);
    FUN_0132138c(*(long *)(lVar9 + 0x70),uVar11 & 0xffffffff,&stack0x00000018,*puVar10);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0143f660(lVar7,*(undefined8 *)(in_stack_00000018 + 0x10),0);
    param_1 = *(long *)(unaff_x20 + 0x30);
    uVar11 = uVar11 + 1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


