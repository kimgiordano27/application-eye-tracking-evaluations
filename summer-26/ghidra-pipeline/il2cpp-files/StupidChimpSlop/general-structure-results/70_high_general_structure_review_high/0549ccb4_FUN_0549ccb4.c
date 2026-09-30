/*
FUNCTION_NAME: FUN_0549ccb4
ENTRY_POINT: 0549ccb4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0549dafc) */
/* WARNING: Removing unreachable block (ram,0x0549d810) */
/* WARNING: Removing unreachable block (ram,0x0549d46c) */
/* WARNING: Removing unreachable block (ram,0x0549de08) */
/* WARNING: Removing unreachable block (ram,0x0549de40) */
/* WARNING: Removing unreachable block (ram,0x0549de30) */
/* WARNING: Removing unreachable block (ram,0x0549e078) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0549ccb4(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  undefined8 uVar24;
  
  puVar4 = PTR_DAT_0664eda8;
  lVar11 = param_1;
  if ((DAT_06a53a6e & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_0664eda8);
    FUN_02d4dc40(PTR_DAT_06649f98);
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var);
    FUN_02d4dc40(PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_TypeInfo);
    FUN_02d4dc40(PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
    FUN_02d4dc40(System_Xml_Linq_XName_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(PTR_DAT_066479b0);
    FUN_02d4dc40(UnityEngine_Rendering_RenderQueueRange_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RenderStateBlock_TypeInfo);
    FUN_02d4dc40(UnityEngine_Rendering_RenderTargetBlendState_TypeInfo);
    FUN_02d4dc40(System_Security_SecurityDocument_TypeInfo);
    FUN_02d4dc40(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulatorSettings_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo
                );
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                );
    FUN_02d4dc40(System_Net_WebException_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0664ec58);
    FUN_02d4dc40(PTR_DAT_0665d8c0);
    FUN_02d4dc40(PTR_DAT_06649350);
    FUN_02d4dc40(UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647d30);
    FUN_02d4dc40(PTR_DAT_06646708);
    FUN_02d4dc40(PTR_DAT_066569a0);
    FUN_02d4dc40(System_Xml_Linq_XDocumentType_TypeInfo);
    lVar11 = FUN_02d4dc40(PTR_DAT_06647dc8);
    DAT_06a53a6e = 1;
  }
  uVar12 = FUN_05491cb4(lVar11,param_2);
  plVar13 = (long *)thunk_FUN_02d8a638(*(undefined8 *)puVar4);
  FUN_04faff88(plVar13,0);
  puVar4 = UnityEngine_InputSystem_Controls_DpadControl_var;
  if (((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0))
  goto LAB_0549d268;
  uVar24 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  if (*(int *)(*(long *)UnityEngine_InputSystem_Controls_DpadControl_var + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar14 = FUN_0565ac08(uVar12,0);
  puVar6 = System_Security_SecurityDocument_TypeInfo;
  if (lVar11 == 0) goto LAB_0549d268;
  plVar15 = (long *)FUN_05462a3c(lVar11,uVar14,uVar24,0);
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (plVar15 != (long *)0x0) {
      if ((param_4 & 1) != 0) {
        return plVar15;
      }
      uVar12 = FUN_0543bf4c(uVar12,0);
      uVar24 = thunk_FUN_02db45e8(
                                 UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedHMD_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d4ddac(uVar12,uVar24);
    }
LAB_0549cf1c:
    if ((param_4 & 1) != 0) {
      plVar15 = *(long **)(param_1 + 0x40);
      uVar14 = FUN_04e80678(uVar24,*(undefined8 *)PTR_DAT_06649350,uVar12,0);
      if (plVar15 == (long *)0x0) goto LAB_0549d268;
      (**(code **)(*plVar15 + 0x308))(plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x310));
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar12 = FUN_0565ac08(uVar12,0);
    plVar15 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                          PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var);
    FUN_054173e4(plVar15,uVar12,0);
    if (plVar15 == (long *)0x0) goto LAB_0549d268;
    plVar15[0x26] = *(long *)(param_2 + 0xb0);
    thunk_FUN_02dc1ef0(plVar15 + 0x26);
    uVar12 = FUN_0541b444(plVar15,uVar24,0);
    uVar12 = FUN_054959e4(uVar12,param_2,*(undefined8 *)System_Net_WebException_TypeInfo,uVar24);
    uVar12 = FUN_0541b444(plVar15,uVar12,0);
    puVar7 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo;
    puVar4 = PTR_DAT_06646708;
    lVar11 = FUN_054959e4(uVar12,param_3,
                          *(undefined8 *)
                           UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRSimulatedController_TypeInfo
                          ,*(undefined8 *)PTR_DAT_06646708);
    if (lVar11 == 0) goto LAB_0549d268;
    iVar10 = *(int *)(lVar11 + 0x10);
    if (iVar10 == 0) {
      lVar11 = FUN_054959e4(lVar11,param_2,*(undefined8 *)puVar7,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_0549d268;
      iVar10 = *(int *)(lVar11 + 0x10);
    }
    if (0 < iVar10) {
      uVar16 = thunk_FUN_04e7e884(lVar11,*(undefined8 *)PTR_DAT_06647d30,0);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = thunk_FUN_04e7e884(lVar11,*(undefined8 *)PTR_DAT_06647dc8,0), (uVar16 & 1) != 0))
      {
        FUN_0541e174(plVar15,1,0);
      }
      uVar16 = thunk_FUN_04e7e884(lVar11,*(undefined8 *)PTR_DAT_0665d8c0,0);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = thunk_FUN_04e7e884(lVar11,*(undefined8 *)PTR_DAT_066569a0,0), (uVar16 & 1) != 0))
      {
        FUN_0541e174(plVar15,0,0);
      }
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar11 = FUN_05490d38(param_2,*(undefined8 *)System_Xml_Linq_XDocumentType_TypeInfo);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x10) < 1) {
        if (*(int *)(*(long *)PTR_DAT_06649f98 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar12 = FUN_04f9d780(0);
      }
      else {
        uVar12 = thunk_FUN_02d8a638();
        FUN_04f9e214(uVar12,lVar11,0);
      }
      FUN_0541f55c(plVar15,uVar12,0);
    }
    if (*(char *)(param_1 + 0xa0) == '\0') {
      lVar11 = *(long *)(param_2 + 0x50);
      plVar15[0x22] = *(long *)(param_2 + 0x58);
      plVar15[0x21] = lVar11;
      lVar11 = *(long *)(param_2 + 0x60);
      plVar15[0x24] = *(long *)(param_2 + 0x68);
      plVar15[0x23] = lVar11;
    }
    else {
      lVar11 = FUN_0549c8d0(param_1,uVar24);
      if (lVar11 != 0) {
        FUN_0542250c(plVar15,lVar11,0);
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_0549d268;
    FUN_05462c90(lVar11,plVar15,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x88);
      uVar12 = thunk_FUN_02d8a638(*(undefined8 *)
                                   UnityEngine_Rendering_RenderTargetBlendState_TypeInfo);
      FUN_036a55a0(uVar12,*(undefined8 *)UnityEngine_Rendering_RenderStateBlock_TypeInfo);
      if (lVar11 == 0) goto LAB_0549d268;
      FUN_0483c224(lVar11,plVar15,uVar12,
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRRayInteractor_TypeInfo);
    }
  }
  else if (plVar15 == (long *)0x0) goto LAB_0549cf1c;
  FUN_05499890(param_1,param_3,plVar15,plVar13,*(undefined1 *)(param_2 + 0x76));
  plVar17 = (long *)plVar15[8];
  if (plVar17 != (long *)0x0) {
    iVar10 = 0;
    while (iVar9 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0)),
          iVar10 < iVar9) {
      if ((plVar15[8] == 0) || (lVar11 = FUN_05453a84(plVar15[8],iVar10,0), lVar11 == 0))
      goto LAB_0549d268;
      FUN_054340ac(lVar11,iVar10,0);
      plVar17 = (long *)plVar15[8];
      iVar10 = iVar10 + 1;
      if (plVar17 == (long *)0x0) goto LAB_0549d268;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05490ed0(plVar15,uVar12);
    FUN_054913f8(plVar15,*(undefined8 *)(param_2 + 0x48));
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar11 = FUN_055be2e8(*(long *)(param_1 + 0x18),0), lVar11 == 0)) goto LAB_0549d470;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar11 = FUN_055be2e8(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
      lVar11 = FUN_055bfb80(lVar11,0);
      puVar6 = 
      UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo;
      puVar4 = 
      UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulatorSettings_TypeInfo;
      goto joined_r0x0549d2dc;
    }
  }
LAB_0549d268:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
joined_r0x0549d2dc:
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar16 = FUN_055bfe88(lVar11,0);
  if ((uVar16 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    plVar17 = (long *)FUN_055bff28(lVar11,0);
    if (plVar17 != (long *)0x0) goto code_r0x0549d314;
    goto LAB_0549d360;
  }
  plVar17 = (long *)thunk_FUN_02d8a53c(lVar11,*(undefined8 *)PTR_DAT_066479a8);
  if (plVar17 == (long *)0x0) goto LAB_0549d470;
  lVar11 = *plVar17;
  uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar16 == 0) goto LAB_0549d438;
  piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
  goto LAB_0549d420;
code_r0x0549d314:
  bVar1 = *(byte *)(*plVar17 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar21 = *(long *)(*plVar17 + 200),
     *(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4e268(plVar17);
  }
  bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
LAB_0549d360:
    uVar12 = FUN_0549bca8(plVar17,plVar17);
    uVar16 = thunk_FUN_04e7e884(uVar12,plVar15[0x12],0);
    if ((uVar16 & 1) != 0) {
      uVar12 = FUN_0549e094(param_1,plVar17);
      uVar24 = FUN_05418ef4(plVar15,0);
      uVar16 = thunk_FUN_04e7e884(uVar12,uVar24,0);
      if (((uVar16 & 1) != 0) || (lVar21 = FUN_0549e094(param_1,plVar17), lVar21 == 0)) {
        FUN_0549bdc0(param_1,plVar17);
      }
    }
  }
  goto joined_r0x0549d2dc;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar23 = piVar23 + 4;
    if (uVar16 == 0) break;
LAB_0549d420:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_066479a8) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0549d454;
    }
  }
LAB_0549d438:
  puVar18 = (undefined8 *)FUN_02d87540(plVar17,*(long *)PTR_DAT_066479a8,0);
LAB_0549d454:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_0549d470:
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar8 = UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_TypeInfo;
    puVar7 = UnityEngine_XR_Interaction_Toolkit_Samples_DeviceSimulator_XRDeviceSimulatorUI_TypeInfo
    ;
    puVar6 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulatorSettings_TypeInfo
    ;
    puVar4 = PTR_DAT_066479b0;
joined_r0x0549d49c:
    do {
      do {
        do {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar11 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_0549d510;
              }
              uVar16 = uVar16 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar16 != 0);
          }
          puVar18 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar4,0);
LAB_0549d510:
          uVar16 = (*(code *)*puVar18)(plVar13,puVar18[1]);
          puVar5 = PTR_DAT_066479a8;
          if ((uVar16 & 1) == 0) {
            plVar13 = (long *)thunk_FUN_02d8a53c(plVar13,*(undefined8 *)PTR_DAT_066479a8);
            if (plVar13 == (long *)0x0) {
              return plVar15;
            }
            lVar11 = *plVar13;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 == 0) goto LAB_0549e024;
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_0549e00c;
          }
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar11 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar18 = (undefined8 *)(lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0549d578;
              }
              uVar16 = uVar16 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar16 != 0);
          }
          puVar18 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar4,1);
LAB_0549d578:
          plVar17 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
          if (plVar17 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var +
                             0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PlayFab_AddonModels_CreateOrUpdateKongregateRequest_var)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4e268(plVar17);
            }
          }
          if (plVar17 != plVar15) {
            uVar12 = FUN_05418ef4(plVar15,0);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar24 = FUN_05418ef4(plVar17,0);
            uVar16 = thunk_FUN_04e7e884(uVar12,uVar24,0);
            if ((uVar16 & 1) != 0) {
              plVar17[0x13] = 0;
              thunk_FUN_02dc1ef0(plVar17 + 0x13,0);
            }
          }
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_055be2e8(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar11 = FUN_055be2e8(*(long *)(param_1 + 0x18),0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            lVar11 = FUN_055bfb80(lVar11,0);
            while( true ) {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar16 = FUN_055bfe88(lVar11,0);
              if ((uVar16 & 1) == 0) break;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              plVar19 = (long *)FUN_055bff28(lVar11,0);
              if (plVar19 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar19 + 0x130);
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if ((bVar1 < bVar2) ||
                   (lVar21 = *(long *)(*plVar19 + 200),
                   *(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d4e268(plVar19);
                }
                bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                if (((bVar2 <= bVar1) &&
                    (*(long *)(lVar21 + (ulong)bVar2 * 8 + -8) == *(long *)puVar7)) &&
                   (uVar16 = FUN_0549342c(plVar19,plVar19,*(undefined8 *)puVar8,0),
                   (uVar16 & 1) != 0)) {
                  uVar12 = FUN_0549bca8(uVar16,plVar19);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d4dee8();
                  }
                  uVar16 = thunk_FUN_04e7e884(uVar12,plVar17[0x12],0);
                  if ((uVar16 & 1) != 0) {
                    if (plVar17[4] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    lVar21 = *(long *)(plVar17[4] + 0x28);
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    iVar10 = FUN_054626e8(lVar21,plVar17[0x12],0);
                    if (iVar10 < -1) {
                      uVar12 = FUN_0549e094(param_1,plVar19);
                      uVar24 = FUN_05418ef4(plVar17,0);
                      uVar16 = thunk_FUN_04e7e884(uVar12,uVar24,0);
                      if ((uVar16 & 1) != 0) {
                        FUN_0549b540(param_1,plVar19);
                      }
                    }
                    else {
                      FUN_0549b540(param_1,plVar19);
                    }
                  }
                }
              }
            }
            plVar19 = (long *)thunk_FUN_02d8a53c(lVar11,*(undefined8 *)PTR_DAT_066479a8);
            if (plVar19 != (long *)0x0) {
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_066479a8) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0549d7f8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02d87540(plVar19,*(long *)PTR_DAT_066479a8,0);
LAB_0549d7f8:
              (*(code *)*puVar18)(plVar19,puVar18[1]);
            }
          }
          plVar19 = (long *)FUN_0541ebf0(plVar15,0);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar11 = 0;
          for (iVar10 = 0;
              iVar9 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0)),
              iVar10 < iVar9; iVar10 = iVar10 + 1) {
            plVar20 = (long *)(**(code **)(*plVar19 + 0x208))
                                        (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar16 = (**(code **)(*plVar20 + 0x1d8))(plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
            if ((uVar16 & 1) != 0) {
              plVar20 = (long *)(**(code **)(*plVar19 + 0x208))
                                          (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              plVar20 = (long *)(**(code **)(*plVar20 + 0x188))
                                          (plVar20,*(undefined8 *)(*plVar20 + 400));
              if (plVar17 == plVar20) {
                lVar11 = (**(code **)(*plVar19 + 0x208))
                                   (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
              }
            }
          }
        } while (lVar11 != 0);
        if (*(char *)(param_1 + 0xa0) == '\0') {
          uVar12 = FUN_05429d8c(plVar15,0);
        }
        else {
          iVar10 = (int)plVar15[0x44];
          if (iVar10 == -1) {
            plVar19 = (long *)plVar15[8];
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                        (plVar19,*(undefined8 *)(*plVar19 + 0x1f0));
            puVar5 = PTR_DAT_066479a8;
            do {
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0549d970;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02d87540(plVar19,*(long *)puVar4,0);
LAB_0549d970:
              uVar16 = (*(code *)*puVar18)(plVar19,puVar18[1]);
              if ((uVar16 & 1) == 0) {
                iVar10 = -1;
                goto LAB_0549da6c;
              }
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                    goto LAB_0549d9d8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02d87540(plVar19,*(long *)puVar4,1);
LAB_0549d9d8:
              plVar20 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              lVar11 = *plVar20;
              bVar1 = *(byte *)(*(long *)PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var +
                               0x130);
              if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PlayFab_AddonModels_CreateOrUpdateNintendoResponse_var)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4e268(plVar20);
              }
              iVar10 = (**(code **)(lVar11 + 0x238))(plVar20,*(undefined8 *)(lVar11 + 0x240));
            } while (iVar10 != 2);
            iVar10 = *(int *)((long)plVar20 + 100);
LAB_0549da6c:
            plVar19 = (long *)thunk_FUN_02d8a53c(plVar19,*(undefined8 *)puVar5);
            if (plVar19 != (long *)0x0) {
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_066479a8) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0549dae4;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02d87540(plVar19,*(long *)PTR_DAT_066479a8,0);
LAB_0549dae4:
              (*(code *)*puVar18)(plVar19,puVar18[1]);
            }
          }
          uVar12 = FUN_05429b18(plVar15,iVar10,0);
        }
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar11 = FUN_05429d94(plVar17,uVar12,0);
        if (*(char *)(param_1 + 0xa0) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_0543232c(lVar11,plVar17[0x14],0);
        }
        uVar24 = FUN_04e80678(plVar15[0x12],*(undefined8 *)PTR_DAT_0664ec58,plVar17[0x12],0);
        plVar19 = (long *)thunk_FUN_02d8a638(*(undefined8 *)
                                              PlayFab_MultiplayerModels_RolloverContainerRegistryCredentialsResponse_TypeInfo
                                            );
        FUN_054577ac(plVar19,uVar24,uVar12,lVar11,1,0);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        (**(code **)(*plVar19 + 0x1e8))(plVar19,1,*(undefined8 *)(*plVar19 + 0x1f0));
        if (plVar17[4] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar11 = *(long *)(plVar17[4] + 0x30);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_0545ae84(lVar11,plVar19,0);
      } while ((*(char *)(param_1 + 0xa0) == '\0') ||
              (uVar16 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
              (uVar16 & 1) == 0));
      lVar11 = *(long *)(param_1 + 0x88);
      uVar12 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8(uVar12,uVar12);
      }
      uVar16 = FUN_0483c418(lVar11,uVar12,*(undefined8 *)Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo)
      ;
    } while ((uVar16 & 1) == 0);
    lVar11 = *(long *)(param_1 + 0x88);
    uVar12 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8(uVar12,uVar12);
    }
    lVar11 = FUN_0483c1a4(lVar11,uVar12,*(undefined8 *)System_Xml_Linq_XName_TypeInfo);
    uVar12 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
    if (lVar11 != 0) {
      lVar21 = *(long *)(lVar11 + 0x10);
      lVar22 = *(long *)UnityEngine_Rendering_RenderQueueRange_TypeInfo;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar21 != 0) {
        uVar3 = *(uint *)(lVar11 + 0x18);
        if (uVar3 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
          thunk_FUN_02dc1ef0();
        }
        else {
          FUN_036a5e08(lVar11,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x0549d49c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  goto LAB_0549d268;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar23 = piVar23 + 4;
    if (uVar16 == 0) break;
LAB_0549e00c:
    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0549e040;
    }
  }
LAB_0549e024:
  puVar18 = (undefined8 *)FUN_02d87540(plVar13,*(long *)puVar5,0);
LAB_0549e040:
  (*(code *)*puVar18)(plVar13,puVar18[1]);
  return plVar15;
}


