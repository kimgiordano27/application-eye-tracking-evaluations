/*
FUNCTION_NAME: FUN_064051ec
ENTRY_POINT: 064051ec
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_064051ec(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = param_1;
  if ((bRam0000000006e9c191 & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_InputSystem_InputBinding_<>c_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a36900);
    FUN_02e3ca1c(UnityEngine_Rendering_DebugUpdater_<DoAfterInputModuleUpdated>d__9_TypeInfo);
    FUN_02e3ca1c(UnityEngine_InputSystem_InputBindingComposite_<GetPartNames>d__12_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a36908);
    FUN_02e3ca1c(UnityEngine_Rendering_DebugUpdater_<RefreshRuntimeUINextFrame>d__15_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_LightLambda_<>c__DisplayClass74_0_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_Interpreter_LightLambda_DebugViewPrinter_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Experimental_GlobalIllumination_Lightmapping_<>c_TypeInfo);
    FUN_02e3ca1c(
                UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo
                );
    FUN_02e3ca1c(UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_TypeInfo)
    ;
    FUN_02e3ca1c(PTR_DAT_06a36918);
    FUN_02e3ca1c(UnityEngine_Rendering_Universal_DecalEntityIndexer_DecalEntityItem_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06a70278);
    FUN_02e3ca1c(Modules_Core_Audio_AudioClient_<>c__DisplayClass16_0_TypeInfo);
    FUN_02e3ca1c(UnityEngine_AudioClip_PCMReaderCallback_TypeInfo);
    bRam0000000006e9c191 = 1;
  }
  puVar12 = UnityEngine_Experimental_GlobalIllumination_Lightmapping_RequestLightsDelegate_TypeInfo;
  puVar11 = System_Linq_Expressions_Interpreter_LightLambda_DebugViewPrinter_TypeInfo;
  puVar10 = UnityEngine_InputSystem_InputBinding_<>c_TypeInfo;
  puVar9 = UnityEngine_Rendering_Universal_DecalEntityIndexer_DecalEntityItem_TypeInfo;
  puVar8 = UnityEngine_Rendering_DebugUpdater_<DoAfterInputModuleUpdated>d__9_TypeInfo;
  puVar7 = Modules_Core_Audio_AudioClient_<>c__DisplayClass16_0_TypeInfo;
  puVar6 = PTR_DAT_06a70278;
  puVar5 = PTR_DAT_06a36918;
  puVar4 = PTR_DAT_06a36900;
  puVar3 = PTR_DAT_06a2ed80;
  iVar1 = *(int *)(param_1 + 0x10);
  plStack_70 = &lStack_68;
  lStack_78 = 0;
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffb;
    goto LAB_064057a8;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    goto LAB_06405504;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar13 = thunk_FUN_02e78ab8(*(undefined8 *)puVar12);
    FUN_052e82a0(uVar13,*(undefined8 *)
                         UnityEngine_Experimental_GlobalIllumination_Lightmapping_<>c_TypeInfo);
    *(undefined8 *)(lStack_68 + 0x30) = uVar13;
    thunk_FUN_02ee2be8((undefined8 *)(lStack_68 + 0x30),uVar13);
    if (*(long *)(lStack_68 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar14 = *(long *)(*(long *)(lStack_68 + 0x28) + 0x30);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    FUN_03f2c008(&uStack_a8,lVar14,
                 *(undefined8 *)
                  UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43_TypeInfo
                );
    uStack_88 = uStack_a0;
    uStack_90 = uStack_a8;
    uStack_80 = uStack_98;
    *(undefined8 *)(lStack_68 + 0x40) = uStack_a0;
    *(undefined8 *)(lStack_68 + 0x38) = uStack_a8;
    *(undefined8 *)(lStack_68 + 0x48) = uStack_98;
    thunk_FUN_02ee2be8(lStack_68 + 0x38,0);
    *(undefined4 *)(lStack_68 + 0x10) = 0xfffffffd;
    while (uVar16 = FUN_04fc1198(lStack_68 + 0x38,*(undefined8 *)puVar10), (uVar16 & 1) != 0) {
      *(undefined8 *)(lStack_68 + 0x50) = *(undefined8 *)(lStack_68 + 0x48);
      thunk_FUN_02ee2be8();
      if (*(long *)(lStack_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar16 = FUN_063fe960(*(long *)(lStack_68 + 0x50),0);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(lStack_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar14 = FUN_063fe8dc(*(long *)(lStack_68 + 0x50),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_03f2c008(&uStack_a8,lVar14,*(undefined8 *)puVar9);
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        uStack_80 = uStack_98;
        *(undefined8 *)(lStack_68 + 0x60) = uStack_a0;
        *(undefined8 *)(lStack_68 + 0x58) = uStack_a8;
        *(undefined8 *)(lStack_68 + 0x68) = uStack_98;
        thunk_FUN_02ee2be8(lStack_68 + 0x58,0);
        *(undefined4 *)(lStack_68 + 0x10) = 0xfffffffc;
        while (uVar16 = FUN_04fc1198(lStack_68 + 0x58,*(undefined8 *)puVar8), (uVar16 & 1) != 0) {
          *(undefined8 *)(lStack_68 + 0x70) = *(undefined8 *)(lStack_68 + 0x68);
          thunk_FUN_02ee2be8();
          if (*(long *)(lStack_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar16 = FUN_052e89a4(*(long *)(lStack_68 + 0x30),*(undefined8 *)(lStack_68 + 0x70),
                                *(undefined8 *)puVar11);
          param_1 = lStack_68;
          if ((uVar16 & 1) == 0) {
            if (*(long *)(lStack_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            FUN_052e9494(*(long *)(lStack_68 + 0x30),*(undefined8 *)(lStack_68 + 0x70),
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_LightLambda_<>c__DisplayClass74_0_TypeInfo
                        );
            *(undefined8 *)(lStack_68 + 0x18) = *(undefined8 *)(lStack_68 + 0x70);
            thunk_FUN_02ee2be8();
            uVar13 = 1;
            *(undefined4 *)(lStack_68 + 0x10) = 1;
            goto LAB_06405830;
          }
LAB_06405504:
          *(undefined8 *)(param_1 + 0x70) = 0;
          thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x70),0);
        }
        FUN_064058e8();
        *(undefined8 *)(lStack_68 + 0x60) = 0;
        *(undefined8 *)(lStack_68 + 0x68) = 0;
        *(undefined8 *)(lStack_68 + 0x58) = 0;
      }
      if (*(long *)(lStack_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar16 = FUN_063fe8cc(*(long *)(lStack_68 + 0x50),0);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(lStack_68 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar14 = FUN_063fe848(*(long *)(lStack_68 + 0x50),0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        FUN_03f2c008(&uStack_a8,lVar14,*(undefined8 *)puVar5);
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        uStack_80 = uStack_98;
        *(undefined8 *)(lStack_68 + 0x80) = uStack_a0;
        *(undefined8 *)(lStack_68 + 0x78) = uStack_a8;
        *(undefined8 *)(lStack_68 + 0x88) = uStack_98;
        thunk_FUN_02ee2be8(lStack_68 + 0x78,0);
        *(undefined4 *)(lStack_68 + 0x10) = 0xfffffffb;
        while (uVar16 = FUN_04fc1198(lStack_68 + 0x78,*(undefined8 *)puVar4), (uVar16 & 1) != 0) {
          *(undefined8 *)(lStack_68 + 0x90) = *(undefined8 *)(lStack_68 + 0x88);
          thunk_FUN_02ee2be8();
          uVar18 = *(undefined8 *)puVar7;
          uVar13 = *(undefined8 *)(lStack_68 + 0x90);
          if (*(int *)(*(long *)(PTR_DAT_06a2f000 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar18 = FUN_05614e08(uVar18,0);
          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          plVar15 = (long *)FUN_064f5318(0x3f800000,uVar13,uVar18,0);
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)0x0;
            *(undefined8 *)(lStack_68 + 0x98) = 0;
          }
          else {
            lVar14 = *(long *)UnityEngine_AudioClip_PCMReaderCallback_TypeInfo;
            bVar2 = *(byte *)(lVar14 + 0x130);
            plVar17 = (long *)0x0;
            if ((bVar2 <= *(byte *)(*plVar15 + 0x130)) &&
               (plVar17 = plVar15,
               *(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != lVar14)) {
              plVar17 = (long *)0x0;
            }
            *(long **)(lStack_68 + 0x98) = plVar17;
            if (*(byte *)(*plVar15 + 0x130) < bVar2) {
              plVar15 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != lVar14) {
              plVar15 = (long *)0x0;
            }
          }
          thunk_FUN_02ee2be8(lStack_68 + 0x98,plVar15);
          uVar13 = *(undefined8 *)(lStack_68 + 0x98);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar16 = FUN_06267b6c(uVar13,0,0);
          param_1 = lStack_68;
          if ((uVar16 & 1) != 0) {
            if (*(long *)(lStack_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar16 = FUN_052e89a4(*(long *)(lStack_68 + 0x30),*(undefined8 *)(lStack_68 + 0x98),
                                  *(undefined8 *)puVar11);
            param_1 = lStack_68;
            if ((uVar16 & 1) == 0) {
              if (*(long *)(lStack_68 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              FUN_052e9494(*(long *)(lStack_68 + 0x30),*(undefined8 *)(lStack_68 + 0x98),
                           *(undefined8 *)
                            System_Linq_Expressions_Interpreter_LightLambda_<>c__DisplayClass74_0_TypeInfo
                          );
              *(undefined8 *)(lStack_68 + 0x18) = *(undefined8 *)(lStack_68 + 0x98);
              thunk_FUN_02ee2be8();
              uVar13 = 1;
              *(undefined4 *)(lStack_68 + 0x10) = 2;
              goto LAB_06405830;
            }
          }
LAB_064057a8:
          *(undefined8 *)(param_1 + 0x98) = 0;
          thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x98),0);
          *(undefined8 *)(lStack_68 + 0x90) = 0;
          thunk_FUN_02ee2be8((undefined8 *)(lStack_68 + 0x90),0);
        }
        FUN_06405938();
        *(undefined8 *)(lStack_68 + 0x80) = 0;
        *(undefined8 *)(lStack_68 + 0x88) = 0;
        *(undefined8 *)(lStack_68 + 0x78) = 0;
      }
      *(undefined8 *)(lStack_68 + 0x50) = 0;
      thunk_FUN_02ee2be8((undefined8 *)(lStack_68 + 0x50),0);
    }
    FUN_06405988();
    uVar13 = 0;
    *(undefined8 *)(lStack_68 + 0x40) = 0;
    *(undefined8 *)(lStack_68 + 0x48) = 0;
    *(undefined8 *)(lStack_68 + 0x38) = 0;
  }
  else {
    uVar13 = 0;
  }
LAB_06405830:
  lVar14 = lStack_78;
  if (lStack_78 != 0) {
    FUN_02e26cb0(&plStack_70);
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccbc(lVar14);
  }
  return uVar13;
}


