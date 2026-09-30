/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown$$Setup
ENTRY_POINT: 0144e2f8
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

undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__Setup(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long lVar7;
  long *unaff_x24;
  undefined8 uVar8;
  undefined8 *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  
  do {
    if (param_1 <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_x24[unaff_x22 + 4] = unaff_x23;
    lVar7 = *(long *)(unaff_x20 + 0x40);
    if (lVar7 != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar5,unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = FUN_01600424(*(undefined8 *)
                            Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__,
                           *(undefined8 *)(in_stack_00000018 + 0x10),*unaff_x26,0);
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),uVar6,*(undefined8 *)(lVar7 + 0x28))
      ;
    }
    lVar7 = *(long *)(unaff_x20 + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar7 + 0x88) == 0) {
      lVar5 = *(long *)(unaff_x20 + 0x48);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar5 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(lVar7 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar8 = *(undefined8 *)(lVar5 + unaff_x22 * 8 + 0x20);
      FUN_0132138c(*(long *)(lVar7 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
      FUN_0143dae4(lVar7,uVar6,uVar8,in_stack_00000018,unaff_x22 & 0xffffffff,0);
      lVar7 = *(long *)(unaff_x20 + 0x30);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    if (*(long *)(lVar7 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = *(long *)(unaff_x20 + 0x38);
    FUN_0132138c(*(long *)(lVar7 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0143f660(lVar5,*(undefined8 *)(in_stack_00000018 + 0x10),0);
    unaff_x22 = unaff_x22 + 1;
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar3 = FUN_01459960(*(long *)(unaff_x20 + 0x30),0);
    if ((long)iVar3 <= (long)unaff_x22) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_02681b9c(in_stack_00000000,0,0);
      if ((uVar4 & 1) != 0) {
        FUN_0142deac(in_stack_00000000,0);
      }
      return 0;
    }
    lVar7 = *(long *)(unaff_x20 + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    cVar2 = *(char *)(lVar7 + 0x49);
    uVar6 = *(undefined8 *)(lVar7 + 0x80);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_01457470(unaff_x22 & 0xffffffff,cVar2 != '\0',uVar6,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(unaff_x20 + 0x28) < 4) {
        unaff_x23 = 0;
      }
      else {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar7,unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = FUN_01600424(*(undefined8 *)PTR_DAT_033ee3e8,
                             *(undefined8 *)(in_stack_00000018 + 0x10),
                             *(undefined8 *)StringLiteral_2907,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar6,0);
        unaff_x23 = 0;
      }
    }
    else {
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      lVar7 = *(long *)(unaff_x20 + 0x30);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar7 + 0x58),*(undefined8 *)(unaff_x20 + 0x38),
                 unaff_x22 & 0xffffffff,lVar7,0);
      lVar7 = *(long *)(unaff_x20 + 0x40);
      if (lVar7 != 0) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar5,unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = FUN_01600424(*(undefined8 *)StringLiteral_4464,
                             *(undefined8 *)(in_stack_00000018 + 0x10),*unaff_x26,0);
        (**(code **)(lVar7 + 0x18))
                  (*(undefined8 *)(lVar7 + 0x40),uVar6,*(undefined8 *)(lVar7 + 0x28));
      }
      if (3 < *(int *)(unaff_x20 + 0x28)) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar7,unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = *(undefined8 *)(in_stack_00000018 + 0x10);
        FUN_0132138c(lVar7,unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
        lVar7 = in_stack_00000018;
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_016f5f58(lVar7 + 0x18,0);
        uVar6 = FUN_0160073c(*(undefined8 *)StringLiteral_29,uVar6,
                             *(undefined8 *)Method_System_Double_System_IConvertible_ToDateTime__,
                             uVar8,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar6,0);
      }
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x28);
      *(undefined4 *)(unaff_x21 + 0x24) = uStack0000000000000014;
      *(undefined4 *)(unaff_x21 + 0x28) = uStack0000000000000010;
      lVar7 = *(long *)(unaff_x20 + 0x30);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined8 *)(unaff_x21 + 0x40) = unaff_x27;
      *(undefined4 *)(unaff_x21 + 0x2c) = uVar1;
      uVar6 = *(undefined8 *)(lVar7 + 0x58);
      *(int *)(unaff_x21 + 0x58) = (int)unaff_x22;
      *(undefined8 *)(unaff_x21 + 0x50) = uVar6;
      if (*(long *)(lVar7 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(lVar7 + 0x70),unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
      *(long *)(unaff_x21 + 0x60) = in_stack_00000018;
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar7,unaff_x22 & 0xffffffff,&stack0x00000018,*unaff_x19);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(unaff_x21 + 0x30) = *(undefined1 *)(in_stack_00000018 + 0x18);
      lVar7 = *(long *)(unaff_x20 + 0x30);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(unaff_x21 + 0x31) = *(undefined1 *)(lVar7 + 0x27);
      *(undefined1 *)(unaff_x21 + 0x32) = *(undefined1 *)(lVar7 + 0x49);
      *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(lVar7 + 0x50);
      unaff_x23 = FUN_013e6eec();
      if (3 < *(int *)(unaff_x20 + 0x28)) {
        lVar7 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar6 = FUN_01456474(Method_System_Text_Encoding_GetChars__);
        return uVar6;
      }
    }
    unaff_x24 = *(long **)(unaff_x20 + 0x48);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((unaff_x23 != 0) &&
       (lVar7 = thunk_FUN_00d6225c(unaff_x23,*(undefined8 *)(*unaff_x24 + 0x40)), lVar7 == 0)) {
      uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar6,0);
    }
    param_1 = (ulong)*(uint *)(unaff_x24 + 3);
  } while( true );
}


