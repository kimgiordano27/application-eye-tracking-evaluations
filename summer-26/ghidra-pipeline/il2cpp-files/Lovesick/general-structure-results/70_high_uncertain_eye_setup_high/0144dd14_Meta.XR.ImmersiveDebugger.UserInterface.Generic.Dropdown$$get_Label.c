/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown$$get_Label
ENTRY_POINT: 0144dd14
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

undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown__get_Label(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  long unaff_x21;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  
  FUN_026610e4(**(undefined8 **)(param_1 + 0xaf0),0);
  puVar7 = StringLiteral_11624;
  puVar6 = Method_System_Collections_Generic_List<Material>_Add__;
  puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
  uVar4 = DAT_0293f7f0;
  uVar3 = DAT_028aa028;
  lVar12 = *(long *)(unaff_x20 + 0x30);
  if (lVar12 != 0) {
    uVar13 = 0;
    do {
      iVar8 = FUN_01459960(lVar12,0);
      if ((long)iVar8 <= (long)uVar13) {
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_02681b9c(in_stack_00000000,0,0);
        if ((uVar13 & 1) != 0) {
          FUN_0142deac(in_stack_00000000,0);
        }
        return 0;
      }
      lVar12 = *(long *)(unaff_x20 + 0x30);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      cVar2 = *(char *)(lVar12 + 0x49);
      uVar14 = *(undefined8 *)(lVar12 + 0x80);
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01457470(uVar13 & 0xffffffff,cVar2 != '\0',uVar14,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(unaff_x20 + 0x28) < 4) {
          lVar12 = 0;
        }
        else {
          if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar12,uVar13 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar14 = FUN_01600424(*(undefined8 *)PTR_DAT_033ee3e8,
                                *(undefined8 *)(in_stack_00000018 + 0x10),
                                *(undefined8 *)StringLiteral_2907,0);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(uVar14,0);
          lVar12 = 0;
        }
      }
      else {
        if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017aa9b4(0);
        lVar12 = *(long *)(unaff_x20 + 0x30);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                  (*(undefined8 *)(lVar12 + 0x58),*(undefined8 *)(unaff_x20 + 0x38),
                   uVar13 & 0xffffffff,lVar12,0);
        lVar12 = *(long *)(unaff_x20 + 0x40);
        if (lVar12 != 0) {
          if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar10,uVar13 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar14 = FUN_01600424(*(undefined8 *)StringLiteral_4464,
                                *(undefined8 *)(in_stack_00000018 + 0x10),*(undefined8 *)puVar5,0);
          (**(code **)(lVar12 + 0x18))
                    (uVar3,*(undefined8 *)(lVar12 + 0x40),uVar14,*(undefined8 *)(lVar12 + 0x28));
        }
        if (3 < *(int *)(unaff_x20 + 0x28)) {
          if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0132138c(lVar12,uVar13 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar12 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar14 = *(undefined8 *)(in_stack_00000018 + 0x10);
          FUN_0132138c(lVar12,uVar13 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
          lVar12 = in_stack_00000018;
          if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f5f58(lVar12 + 0x18,0);
          uVar14 = FUN_0160073c(*(undefined8 *)StringLiteral_29,uVar14,
                                *(undefined8 *)Method_System_Double_System_IConvertible_ToDateTime__
                                ,uVar11,0);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(uVar14,0);
        }
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined4 *)(unaff_x21 + 0x68) = *(undefined4 *)(unaff_x20 + 0x28);
        *(undefined4 *)(unaff_x21 + 0x24) = uStack0000000000000014;
        *(undefined4 *)(unaff_x21 + 0x28) = uStack0000000000000010;
        lVar12 = *(long *)(unaff_x20 + 0x30);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = *(undefined4 *)(lVar12 + 0x18);
        *(undefined8 *)(unaff_x21 + 0x40) = unaff_x27;
        *(undefined4 *)(unaff_x21 + 0x2c) = uVar1;
        uVar14 = *(undefined8 *)(lVar12 + 0x58);
        *(int *)(unaff_x21 + 0x58) = (int)uVar13;
        *(undefined8 *)(unaff_x21 + 0x50) = uVar14;
        if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(*(long *)(lVar12 + 0x70),uVar13 & 0xffffffff,&stack0x00000018,
                     *(undefined8 *)puVar7);
        *(long *)(unaff_x21 + 0x60) = in_stack_00000018;
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar12 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar12,uVar13 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined1 *)(unaff_x21 + 0x30) = *(undefined1 *)(in_stack_00000018 + 0x18);
        lVar12 = *(long *)(unaff_x20 + 0x30);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        *(undefined1 *)(unaff_x21 + 0x31) = *(undefined1 *)(lVar12 + 0x27);
        *(undefined1 *)(unaff_x21 + 0x32) = *(undefined1 *)(lVar12 + 0x49);
        *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(lVar12 + 0x50);
        lVar12 = FUN_013e6eec();
        if (3 < *(int *)(unaff_x20 + 0x28)) {
          lVar12 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar14 = FUN_01456474(Method_System_Text_Encoding_GetChars__);
          return uVar14;
        }
      }
      plVar15 = *(long **)(unaff_x20 + 0x48);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar10 == 0)) {
        uVar14 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,0);
      }
      if (*(uint *)(plVar15 + 3) <= uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar15[uVar13 + 4] = lVar12;
      lVar12 = *(long *)(unaff_x20 + 0x40);
      if (lVar12 != 0) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar10,uVar13 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar14 = FUN_01600424(*(undefined8 *)
                               Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                              ,*(undefined8 *)(in_stack_00000018 + 0x10),*(undefined8 *)puVar5,0);
        (**(code **)(lVar12 + 0x18))
                  (uVar4,*(undefined8 *)(lVar12 + 0x40),uVar14,*(undefined8 *)(lVar12 + 0x28));
      }
      lVar12 = *(long *)(unaff_x20 + 0x30);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar12 + 0x88) == 0) {
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar14 = *(undefined8 *)(unaff_x20 + 0x50);
        uVar11 = *(undefined8 *)(lVar10 + uVar13 * 8 + 0x20);
        FUN_0132138c(*(long *)(lVar12 + 0x70),uVar13 & 0xffffffff,&stack0x00000018,
                     *(undefined8 *)puVar7);
        FUN_0143dae4(lVar12,uVar14,uVar11,in_stack_00000018,uVar13 & 0xffffffff,0);
        lVar12 = *(long *)(unaff_x20 + 0x30);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
      }
      if (*(long *)(lVar12 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = *(long *)(unaff_x20 + 0x38);
      FUN_0132138c(*(long *)(lVar12 + 0x70),uVar13 & 0xffffffff,&stack0x00000018,
                   *(undefined8 *)puVar7);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0143f660(lVar10,*(undefined8 *)(in_stack_00000018 + 0x10),0);
      lVar12 = *(long *)(unaff_x20 + 0x30);
      uVar13 = uVar13 + 1;
    } while (lVar12 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


