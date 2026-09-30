/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 0144dbac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0144e5b8) */

undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xaf0));
  thunk_FUN_00d48444(StringLiteral_29);
  thunk_FUN_00d48444(StringLiteral_2907);
  *(undefined1 *)(unaff_x19 + 0xa6c) = 1;
  _uStack0000000000000010 = 0;
  uStack000000000000000c = 0;
  if (*(int *)(unaff_x20 + 0x10) != 0) {
    return 0;
  }
  lVar15 = *(long *)(unaff_x20 + 0x20);
  *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
  puVar8 = StringLiteral_302;
  puVar7 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
  puVar6 = Method_System_Collections_Generic_List_Enumerator<Merge>_Dispose__;
  puVar5 = PTR_DAT_033f3868;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar19 = *(undefined8 *)(lVar15 + 0x20);
  _uStack0000000000000010 = CONCAT44(*(undefined4 *)(lVar15 + 0x10),*(undefined4 *)(lVar15 + 0x14));
  if (3 < *(int *)(unaff_x20 + 0x28)) {
    uVar10 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
    uVar11 = FUN_0176eb1c(&stack0x00000010,0);
    uVar10 = FUN_0160073c(*(undefined8 *)puVar6,uVar10,*(undefined8 *)puVar7,uVar11,0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar8);
    }
    FUN_02660dac(uVar10,0);
  }
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0268afbc(lVar15,*(undefined8 *)
                       Method_UnityEngine_XR_ARFoundation_ARFace_GetUndisposable<int>__,0);
  lVar12 = FUN_010e5800(lVar15,*(undefined8 *)Method_System_IO_FileStream_set_Position__);
  FUN_010e5800(lVar15,*(undefined8 *)
                       Method_System_Collections_Generic_Dictionary<string,_LocalDataStoreSlot>_Add__
              );
  lVar16 = *(long *)(unaff_x20 + 0x30);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(char *)(lVar16 + 0x49) != '\0') && (1 < *(int *)(unaff_x20 + 0x28))) {
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(*(undefined8 *)VolumetricAudio_VA_Triangle_TypeInfo,0);
    lVar16 = *(long *)(unaff_x20 + 0x30);
    if (lVar16 == 0) goto LAB_0144e41c;
  }
  puVar7 = StringLiteral_11624;
  puVar6 = Method_System_Collections_Generic_List<Material>_Add__;
  puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_AR_GestureRecognizer<DragGesture>__ctor__;
  uVar4 = DAT_0293f7f0;
  uVar3 = DAT_028aa028;
  uVar17 = 0;
  do {
    iVar9 = FUN_01459960(lVar16,0);
    if ((long)iVar9 <= (long)uVar17) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_02681b9c(lVar15,0,0);
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      FUN_0142deac(lVar15,0);
      return 0;
    }
    lVar16 = *(long *)(unaff_x20 + 0x30);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    cVar2 = *(char *)(lVar16 + 0x49);
    uVar10 = *(undefined8 *)(lVar16 + 0x80);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_01457470(uVar17 & 0xffffffff,cVar2 != '\0',uVar10,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)(unaff_x20 + 0x28) < 4) {
        lVar16 = 0;
      }
      else {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar16 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar16,uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_01600424(*(undefined8 *)PTR_DAT_033ee3e8,
                              *(undefined8 *)(in_stack_00000018 + 0x10),
                              *(undefined8 *)StringLiteral_2907,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar10,0);
        lVar16 = 0;
      }
    }
    else {
      if (*(int *)(*(long *)GoogleSheetsToUnity_GSTU_Cell_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_017aa9b4(0);
      lVar16 = *(long *)(unaff_x20 + 0x30);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
                (*(undefined8 *)(lVar16 + 0x58),*(undefined8 *)(unaff_x20 + 0x38),
                 uVar17 & 0xffffffff,lVar16,0);
      lVar16 = *(long *)(unaff_x20 + 0x40);
      if (lVar16 != 0) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar14 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar14,uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = FUN_01600424(*(undefined8 *)StringLiteral_4464,
                              *(undefined8 *)(in_stack_00000018 + 0x10),*(undefined8 *)puVar5,0);
        (**(code **)(lVar16 + 0x18))
                  (uVar3,*(undefined8 *)(lVar16 + 0x40),uVar10,*(undefined8 *)(lVar16 + 0x28));
      }
      if (3 < *(int *)(unaff_x20 + 0x28)) {
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar16 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0132138c(lVar16,uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar16 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = *(undefined8 *)(in_stack_00000018 + 0x10);
        FUN_0132138c(lVar16,uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
        lVar16 = in_stack_00000018;
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f5f58(lVar16 + 0x18,0);
        uVar10 = FUN_0160073c(*(undefined8 *)StringLiteral_29,uVar10,
                              *(undefined8 *)Method_System_Double_System_IConvertible_ToDateTime__,
                              uVar11,0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(uVar10,0);
      }
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined4 *)(lVar12 + 0x68) = *(undefined4 *)(unaff_x20 + 0x28);
      *(undefined4 *)(lVar12 + 0x24) = uStack0000000000000014;
      *(undefined4 *)(lVar12 + 0x28) = uStack0000000000000010;
      lVar16 = *(long *)(unaff_x20 + 0x30);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = *(undefined4 *)(lVar16 + 0x18);
      *(undefined8 *)(lVar12 + 0x40) = uVar19;
      *(undefined4 *)(lVar12 + 0x2c) = uVar1;
      uVar10 = *(undefined8 *)(lVar16 + 0x58);
      *(int *)(lVar12 + 0x58) = (int)uVar17;
      *(undefined8 *)(lVar12 + 0x50) = uVar10;
      if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(*(long *)(lVar16 + 0x70),uVar17 & 0xffffffff,&stack0x00000018,
                   *(undefined8 *)puVar7);
      *(long *)(lVar12 + 0x60) = in_stack_00000018;
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar16 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar16,uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(lVar12 + 0x30) = *(undefined1 *)(in_stack_00000018 + 0x18);
      lVar16 = *(long *)(unaff_x20 + 0x30);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined1 *)(lVar12 + 0x31) = *(undefined1 *)(lVar16 + 0x27);
      *(undefined1 *)(lVar12 + 0x32) = *(undefined1 *)(lVar16 + 0x49);
      *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(lVar16 + 0x50);
      lVar16 = FUN_013e6eec(lVar12,*(undefined8 *)(unaff_x20 + 0x38),0);
      if (3 < *(int *)(unaff_x20 + 0x28)) {
        lVar15 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar19 = FUN_01456474(Method_System_Text_Encoding_GetChars__);
        return uVar19;
      }
    }
    plVar18 = *(long **)(unaff_x20 + 0x48);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if ((lVar16 != 0) &&
       (lVar14 = thunk_FUN_00d6225c(lVar16,*(undefined8 *)(*plVar18 + 0x40)), lVar14 == 0)) {
      uVar19 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar19,0);
    }
    if (*(uint *)(plVar18 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar18[uVar17 + 4] = lVar16;
    lVar16 = *(long *)(unaff_x20 + 0x40);
    if (lVar16 != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x70);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0132138c(lVar14,uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7);
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = FUN_01600424(*(undefined8 *)
                             Method_UnityEngine_Rendering_VolumeParameter<MotionBlurQuality>__ctor__
                            ,*(undefined8 *)(in_stack_00000018 + 0x10),*(undefined8 *)puVar5,0);
      (**(code **)(lVar16 + 0x18))
                (uVar4,*(undefined8 *)(lVar16 + 0x40),uVar10,*(undefined8 *)(lVar16 + 0x28));
    }
    lVar16 = *(long *)(unaff_x20 + 0x30);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(int *)(lVar16 + 0x88) == 0) {
      lVar14 = *(long *)(unaff_x20 + 0x48);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar11 = *(undefined8 *)(lVar14 + uVar17 * 8 + 0x20);
      FUN_0132138c(*(long *)(lVar16 + 0x70),uVar17 & 0xffffffff,&stack0x00000018,
                   *(undefined8 *)puVar7);
      FUN_0143dae4(lVar16,uVar10,uVar11,in_stack_00000018,uVar17 & 0xffffffff,0);
      lVar16 = *(long *)(unaff_x20 + 0x30);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
    }
    if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar14 = *(long *)(unaff_x20 + 0x38);
    FUN_0132138c(*(long *)(lVar16 + 0x70),uVar17 & 0xffffffff,&stack0x00000018,*(undefined8 *)puVar7
                );
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0143f660(lVar14,*(undefined8 *)(in_stack_00000018 + 0x10),0);
    lVar16 = *(long *)(unaff_x20 + 0x30);
    uVar17 = uVar17 + 1;
  } while (lVar16 != 0);
LAB_0144e41c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


