/*
FUNCTION_NAME: FUN_0549c1f8
ENTRY_POINT: 0549c1f8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0549c810) */
/* WARNING: Removing unreachable block (ram,0x0549c868) */

long FUN_0549c1f8(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  int local_44;
  
  puVar4 = UnityEngine_InputSystem_Controls_DpadControl_var;
  lVar8 = param_1;
  if ((DAT_06a53a6c & 1) == 0) {
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(UnityEngine_Rendering_RenderStateBlock_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RenderTargetBlendState_TypeInfo);
    FUN_02d4dc40(System_Security_SecurityDocument_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(System_Security_SecurityException_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulatorSettings_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d4dc40(System_Net_WebException_TypeInfo);
    FUN_02d4dc40(System_Security_Principal_WindowsImpersonationContext_TypeInfo);
    lVar8 = FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TypeInfo);
    DAT_06a53a6c = 1;
  }
  local_44 = 0;
  uVar9 = FUN_05491cb4(lVar8,param_2);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar4);
  }
  uVar9 = FUN_0565ac08(uVar9,0);
  if ((((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0)) ||
     (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar8 == 0)) goto LAB_0549c57c;
  uVar18 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar8 = FUN_05462a3c(lVar8,uVar9,uVar18,0);
  if ((*(char *)(param_1 + 0xa0) == '\0') && (lVar8 != 0)) {
    uVar9 = FUN_0543bf4c(uVar9,0);
    uVar18 = thunk_FUN_02db45e8(UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController_TypeInfo)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar9,uVar18);
  }
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    FUN_054173e4(lVar8,uVar9,0);
    if (lVar8 == 0) goto LAB_0549c57c;
    uVar10 = FUN_0541b444(lVar8,uVar18,0);
    uVar10 = FUN_054959e4(uVar10,param_2,*(undefined8 *)System_Net_WebException_TypeInfo,uVar18);
    FUN_0541b444(lVar8,uVar10,0);
    if (*(char *)(param_1 + 0xa0) == '\0') {
      uVar10 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(lVar8 + 0x110) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(lVar8 + 0x108) = uVar10;
      uVar10 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(lVar8 + 0x120) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(lVar8 + 0x118) = uVar10;
    }
    else {
      lVar11 = FUN_0549c8d0(param_1,uVar18);
      if (lVar11 != 0) {
        FUN_0542250c(lVar8,lVar11,0);
      }
    }
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)System_Security_SecurityDocument_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05490ed0(lVar8,uVar10);
    FUN_054913f8(lVar8,*(undefined8 *)(param_2 + 0x48));
  }
  plVar15 = *(long **)(param_2 + 0xb8);
  if (plVar15 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)System_Security_SecurityException_TypeInfo + 0x130);
    if (*(byte *)(*plVar15 + 0x130) < bVar1) {
      plVar15 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)System_Security_SecurityException_TypeInfo) {
      plVar15 = (long *)0x0;
    }
  }
  if (*(long *)(param_2 + 200) == 0) goto LAB_0549c57c;
  if (*(long *)(*(long *)(param_2 + 200) + 0x60) == 0) {
    bVar6 = false;
    if (plVar15 != (long *)0x0) {
      if ((long *)plVar15[0x13] != (long *)0x0) {
        lVar11 = *(long *)plVar15[0x13];
        bVar1 = *(byte *)(*(long *)
                           UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                         + 0x130);
        if (bVar1 <= *(byte *)(lVar11 + 0x130)) {
          bVar6 = *(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo;
          goto LAB_0549c4cc;
        }
      }
      bVar6 = false;
    }
LAB_0549c4cc:
    if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_0549c4f0;
    if (bVar6) goto LAB_0549c4d8;
LAB_0549c5f4:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_0549c57c;
    lVar11 = FUN_05462a3c(lVar11,uVar9,uVar18,0);
    if (lVar11 == 0) goto LAB_0549c618;
  }
  else {
    if (*(char *)(param_1 + 0xa0) == '\0') {
LAB_0549c4f0:
      FUN_05497c24(param_1,param_2,lVar8,0);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        uVar10 = FUN_04e723e0(uVar9,*(undefined8 *)
                                     UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputModalityManager_TypeInfo
                              ,0);
        lVar11 = *(long *)(lVar8 + 0x40);
        if (lVar11 != 0) {
          iVar7 = 0;
          do {
            lVar11 = FUN_05452204(lVar11,uVar10,0);
            if (lVar11 == 0) goto LAB_0549c59c;
            local_44 = iVar7;
            uVar12 = FUN_05000654(&local_44,0);
            uVar10 = FUN_04e723e0(uVar10,uVar12,0);
            lVar11 = *(long *)(lVar8 + 0x40);
            iVar7 = iVar7 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_0549c57c;
      }
      uVar10 = FUN_04e723e0(uVar9,*(undefined8 *)
                                   System_Security_Principal_WindowsImpersonationContext_TypeInfo,0)
      ;
LAB_0549c59c:
      if ((*(long *)(lVar8 + 0x40) == 0) ||
         (lVar11 = FUN_05453a84(*(long *)(lVar8 + 0x40),0,0), lVar11 == 0)) goto LAB_0549c57c;
      FUN_05431e78(lVar11,uVar10,0);
      if ((*(long *)(lVar8 + 0x40) == 0) ||
         (plVar15 = (long *)FUN_05453a84(*(long *)(lVar8 + 0x40),0,0), plVar15 == (long *)0x0))
      goto LAB_0549c57c;
      (**(code **)(*plVar15 + 0x248))(plVar15,3,*(undefined8 *)(*plVar15 + 0x250));
    }
    else {
LAB_0549c4d8:
      plVar15 = *(long **)(lVar8 + 0x40);
      if (plVar15 == (long *)0x0) goto LAB_0549c57c;
      iVar7 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
      if (iVar7 == 0) goto LAB_0549c4f0;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_0549c5f4;
LAB_0549c618:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_0549c57c;
    FUN_05462c90(lVar11,lVar8,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x88);
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)
                                  UnityEngine_Rendering_RenderTargetBlendState_TypeInfo);
      FUN_036a55a0(uVar9,*(undefined8 *)UnityEngine_Rendering_RenderStateBlock_TypeInfo);
      if (lVar11 == 0) goto LAB_0549c57c;
      FUN_0483c224(lVar11,lVar8,uVar9,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo);
    }
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar11 = FUN_055be2e8(*(long *)(param_1 + 0x18),0), lVar11 == 0)) {
LAB_0549c814:
    *(undefined1 *)(lVar8 + 0xb0) = 0;
    return lVar8;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar11 = FUN_055be2e8(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
    lVar11 = FUN_055bfb80(lVar11,0);
    puVar5 = UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo
    ;
    puVar4 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulatorSettings_TypeInfo
    ;
joined_r0x0549c6c8:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    uVar13 = FUN_055bfe88(lVar11,0);
    puVar3 = PTR_DAT_066479a8;
    if ((uVar13 & 1) != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar15 = (long *)FUN_055bff28(lVar11,0);
      if (plVar15 != (long *)0x0) goto code_r0x0549c700;
      goto LAB_0549c74c;
    }
    plVar15 = (long *)thunk_FUN_02d8a53c(lVar11,*(undefined8 *)PTR_DAT_066479a8);
    if (plVar15 == (long *)0x0) goto LAB_0549c814;
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 == 0) goto LAB_0549c7dc;
    piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    goto LAB_0549c7c4;
  }
LAB_0549c57c:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar17 = piVar17 + 4;
    if (uVar13 == 0) break;
LAB_0549c7c4:
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0549c7f8;
    }
  }
LAB_0549c7dc:
  puVar14 = (undefined8 *)FUN_02d87540(plVar15,*(long *)puVar3,0);
LAB_0549c7f8:
  (*(code *)*puVar14)(plVar15,puVar14[1]);
  goto LAB_0549c814;
code_r0x0549c700:
  bVar1 = *(byte *)(*plVar15 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar16 = *(long *)(*plVar15 + 200),
     *(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4e268(plVar15);
  }
  bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar16 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
LAB_0549c74c:
    uVar9 = FUN_0549bca8(plVar15,plVar15);
    uVar13 = thunk_FUN_04e7e884(uVar9,*(undefined8 *)(lVar8 + 0x90),0);
    if ((uVar13 & 1) != 0) {
      FUN_0549bdc0(param_1,plVar15);
    }
  }
  goto joined_r0x0549c6c8;
}


