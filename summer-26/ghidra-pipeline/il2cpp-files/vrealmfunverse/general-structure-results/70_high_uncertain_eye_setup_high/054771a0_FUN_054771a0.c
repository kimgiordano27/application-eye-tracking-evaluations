/*
FUNCTION_NAME: FUN_054771a0
ENTRY_POINT: 054771a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * FUN_054771a0(undefined8 param_1,uint param_2,long *param_3,long param_4,uint *param_5,
                   undefined8 param_6,long param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  uint uVar23;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar20 = tpidr_el0;
  local_68 = *(long *)(lVar20 + 0x28);
  local_80 = param_7;
  if ((DAT_066d0fb6 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631c498);
    FUN_02b3c81c(OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo);
    FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_Internal_FinalBlitPass_PassData_TypeInfo);
    FUN_02b3c81c(System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo);
    FUN_02b3c81c(OVRInput_OVRControllerBase_VirtualNearTouchMap_TypeInfo);
    FUN_02b3c81c(System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06321df8);
    DAT_066d0fb6 = 1;
  }
  puVar19 = PTR_DAT_06321df8;
  if (param_3 == (long *)0x0) goto LAB_05477dfc;
  uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
  uVar11 = thunk_FUN_04c08854(uVar10,*(undefined8 *)puVar19,0);
  if ((uVar11 & 1) != 0) {
    thunk_FUN_02ba3594(
                      UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_TypeInfo
                      );
    uVar10 = thunk_FUN_02b79644();
    puVar19 = UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_<>c_TypeInfo;
LAB_05478158:
    uVar21 = thunk_FUN_02ba3594(puVar19);
    FUN_05471c00(uVar10,uVar21,0,0);
    lVar20 = *(long *)(lVar20 + 0x28);
LAB_05478174:
    if (lVar20 == local_68) {
      uVar21 = thunk_FUN_02ba3594(OVRPlugin_Media_InputVideoBufferType_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar10,uVar21);
    }
    goto LAB_054781e0;
  }
  uVar3 = *param_5;
  plVar12 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                        UnityEngine_Rendering_Universal_Internal_FinalBlitPass_PassData_TypeInfo
                                      );
  FUN_054c828c(plVar12,0);
  puVar19 = OVRInput_OVRControllerBase_VirtualNearTouchMap_TypeInfo;
  if ((param_4 == 0) || (*(long *)(param_4 + 0xa0) == 0)) goto LAB_05477dfc;
  uVar10 = thunk_FUN_02b4c898(*(long *)(param_4 + 0xa0),0);
  puVar6 = PTR_DAT_06312310;
  uVar21 = *(undefined8 *)puVar19;
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar21 = FUN_04d8a7b0(uVar21,0);
  uVar11 = FUN_04d938a0(uVar10,uVar21,0);
  if ((uVar11 & 1) == 0) {
    thunk_FUN_02ba3594(
                      UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_TypeInfo
                      );
    uVar10 = thunk_FUN_02b79644();
    puVar19 = OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo;
    goto LAB_05478158;
  }
  lVar13 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
  if (lVar13 == 0) goto LAB_05477dfc;
  plVar22 = *(long **)(param_4 + 0xa0);
  lVar1 = 0;
  if (*(int *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13;
  }
  if (plVar22 == (long *)0x0) goto LAB_05477dfc;
  lVar13 = *plVar22;
  bVar4 = *(byte *)(*(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo +
                   0x130);
  if ((*(byte *)(lVar13 + 0x130) < bVar4) ||
     (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
      *(long *)System_Runtime_Serialization_XmlFormatClassWriterDelegate_TypeInfo)) {
LAB_05478198:
    if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar22);
    }
    goto LAB_054781e0;
  }
  lVar13 = (**(code **)(lVar13 + 0x238))(plVar22,*(undefined8 *)(lVar13 + 0x240));
  if (lVar13 == 0) goto LAB_05477dfc;
  iVar8 = FUN_04d238d0(lVar13,0);
  if ((iVar8 < 1) && ((param_2 & 1) == 0)) {
    *param_5 = 0;
    uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
    uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
    uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    plVar16 = (long *)FUN_05471c34(param_1,uVar10,uVar21,uVar14,param_7,uVar15,0xffffffff);
    lVar13 = *(long *)PTR_DAT_0631c498;
    plVar12 = (long *)PTR_DAT_0631c498;
    if (*(int *)(lVar13 + 0xe4) == 0) {
LAB_05477434:
      plVar12 = (long *)PTR_DAT_0631c498;
      thunk_FUN_02b9ad44(lVar13);
    }
LAB_05477438:
    if (plVar16 != (long *)0x0) {
      FUN_054d2298(plVar16,**(undefined8 **)(*plVar12 + 0xb8),(*(undefined8 **)(*plVar12 + 0xb8))[1]
                   ,0);
      goto LAB_05477454;
    }
    goto LAB_05477dfc;
  }
  plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
  if ((plVar16 == (long *)0x0) ||
     (lVar13 = (**(code **)(*plVar16 + 0x308))(plVar16,0,*(undefined8 *)(*plVar16 + 0x310)),
     lVar13 == 0)) goto LAB_05477dfc;
  uVar10 = thunk_FUN_02b4c898(lVar13,0);
  uVar21 = *(undefined8 *)OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo;
  if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(puVar6 + 0xe0));
  }
  uVar21 = FUN_04d8a7b0(uVar21,0);
  uVar11 = FUN_04d938a0(uVar10,uVar21,0);
  if ((uVar11 & 1) != 0) {
    plVar12 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if ((plVar12 != (long *)0x0) &&
       (plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                    (plVar12,0,*(undefined8 *)(*plVar12 + 0x310)),
       plVar22 != (long *)0x0)) {
      bVar4 = *(byte *)(*(long *)
                         System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo))
      goto LAB_05478198;
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      puVar19 = UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
      if (lVar13 != 0) {
        iVar8 = 0;
        do {
          iVar9 = FUN_04d238d0(lVar13,0);
          if (iVar9 <= iVar8) {
            uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
            uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
            if (*(long *)(lVar20 + 0x28) == local_68) {
              plVar12 = (long *)FUN_05471c34(param_1,uVar10,uVar21,uVar14,param_7,uVar15,0xffffffff)
              ;
              return plVar12;
            }
            goto LAB_054781e0;
          }
          plVar12 = (long *)(**(code **)(*plVar22 + 0x238))
                                      (plVar22,*(undefined8 *)(*plVar22 + 0x240));
          if (plVar12 == (long *)0x0) break;
          plVar17 = (long *)(**(code **)(*plVar12 + 0x308))
                                      (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
          if (plVar17 == (long *)0x0) {
LAB_0547813c:
            thunk_FUN_02ba3594(
                              UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_TypeInfo
                              );
            uVar10 = thunk_FUN_02b79644();
            puVar19 = OVRInput_OVRControllerBase_VirtualTouchMap_TypeInfo;
            goto LAB_05478158;
          }
          bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
          if ((*(byte *)(*plVar17 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19))
          goto LAB_0547813c;
          lVar13 = plVar17[0x13];
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar11 = thunk_FUN_04c08854(lVar13,uVar10,0);
          if ((uVar11 & 1) != 0) {
            if (param_7 == 0) break;
            uVar11 = thunk_FUN_04c08854(*(undefined8 *)(param_7 + 0x48),lVar1,0);
            if ((uVar11 & 1) != 0) {
              FUN_05472240(param_1,plVar17,0,param_7);
              plVar16 = plVar17;
              goto LAB_05477f34;
            }
          }
          if (plVar17[0x14] == 0) break;
          uVar21 = *(undefined8 *)(plVar17[0x14] + 0x10);
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar11 = thunk_FUN_04c08854(uVar21,uVar10,0);
          if ((uVar11 & 1) != 0) {
            if (plVar17[0x14] == 0) break;
            uVar21 = *(undefined8 *)(plVar17[0x14] + 0x18);
            uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            uVar11 = thunk_FUN_04c08854(uVar21,uVar10,0);
            if ((uVar11 & 1) != 0) {
              uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              plVar16 = (long *)FUN_05475fe0(param_1,lVar1,uVar10,&local_80);
              FUN_05472240(param_1,plVar16,0,local_80);
              goto LAB_05478048;
            }
          }
          iVar8 = iVar8 + 1;
          lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
        } while (lVar13 != 0);
      }
    }
    goto LAB_05477dfc;
  }
  uVar23 = *param_5;
  plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
  if (plVar16 == (long *)0x0) goto LAB_05477ad4;
  uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
  plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                              (plVar16,uVar23,*(undefined8 *)(*plVar16 + 0x310));
  puVar6 = System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo;
  puVar19 = UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo;
  if (plVar16 == (long *)0x0) {
LAB_054780fc:
    thunk_FUN_02ba3594(
                      UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_TypeInfo
                      );
    uVar10 = thunk_FUN_02b79644();
    uVar21 = thunk_FUN_02ba3594(OVRInput_OVRControllerBase_VirtualTouchMap_TypeInfo);
    FUN_05471c00(uVar10,uVar21,0,0);
    lVar20 = *(long *)(lVar20 + 0x28);
    goto LAB_05478174;
  }
  bVar4 = *(byte *)(*plVar16 + 0x130);
  bVar5 = *(byte *)(*(long *)
                     System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo
                   + 0x130);
  if ((bVar4 < bVar5) ||
     (lVar13 = *(long *)(*plVar16 + 200),
     *(long *)(lVar13 + (ulong)bVar5 * 8 + -8) !=
     *(long *)System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass5_0_TypeInfo))
  goto LAB_054780fc;
  bVar5 = *(byte *)(*(long *)UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo + 0x130);
  if ((bVar4 < bVar5) ||
     (*(long *)(lVar13 + (ulong)bVar5 * 8 + -8) !=
      *(long *)UnityEngine_UIElements_ExecuteCommandEvent_<>c_TypeInfo)) goto LAB_054780fc;
  lVar13 = plVar16[0x13];
  uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  uVar11 = thunk_FUN_04c08854(lVar13,uVar10,0);
  if ((uVar11 & 1) != 0) {
    if (param_7 == 0) goto LAB_05477ad4;
    uVar11 = thunk_FUN_04c08854(*(undefined8 *)(param_7 + 0x48),lVar1,0);
    if ((uVar11 & 1) == 0) goto LAB_05477800;
    if (uVar3 != 0xffffffff) {
      local_78 = 0;
      uStack_70 = 0;
      FUN_04dd6958(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
      FUN_054d23d0(plVar16,local_78,uStack_70,0);
      param_7 = local_80;
    }
    *param_5 = uVar23;
    plVar12 = plVar16;
LAB_054778dc:
    FUN_05472240(param_1,plVar12,0,param_7);
    System_Xml_DtdParser__ScanNameExpected(param_1,plVar16,0);
    goto LAB_05477454;
  }
LAB_05477800:
  if (plVar16[0x14] != 0) {
    uVar21 = *(undefined8 *)(plVar16[0x14] + 0x10);
    uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    uVar11 = thunk_FUN_04c08854(uVar21,uVar10,0);
    if ((uVar11 & 1) != 0) {
      if (plVar16[0x14] == 0) goto LAB_05477ad4;
      uVar21 = *(undefined8 *)(plVar16[0x14] + 0x18);
      uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      uVar11 = thunk_FUN_04c08854(uVar21,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (uVar3 != 0xffffffff) {
          local_78 = 0;
          uStack_70 = 0;
          FUN_04dd6958(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
          FUN_054d23d0(plVar16,local_78,uStack_70,0);
        }
        *param_5 = uVar23;
        uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
        plVar12 = (long *)FUN_05475fe0(param_1,lVar1,uVar10,&local_80);
        param_7 = local_80;
        goto LAB_054778dc;
      }
    }
    puVar7 = PTR_DAT_0631c498;
    if (uVar3 == 0xffffffff) {
      lVar13 = plVar16[10];
      lVar2 = plVar16[0xb];
      lVar18 = *(long *)PTR_DAT_0631c498;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar18 = *(long *)puVar7;
      }
      uVar11 = FUN_04ddab0c(lVar13,lVar2,**(undefined8 **)(lVar18 + 0xb8),
                            (*(undefined8 **)(lVar18 + 0xb8))[1],0);
      if ((uVar11 & 1) != 0) {
        if (plVar12 == (long *)0x0) goto LAB_05477ad4;
        FUN_054c9a24(plVar12,plVar16,0);
      }
    }
    lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    while (lVar13 != 0) {
      uVar23 = uVar23 + 1;
      iVar8 = FUN_04d238d0(lVar13,0);
      if (iVar8 <= (int)uVar23) {
        if (param_7 != 0) {
          uVar11 = thunk_FUN_04c08854(*(undefined8 *)(param_7 + 0x48),lVar1,0);
          uVar10 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
          uVar21 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          if ((uVar11 & 1) == 0) {
            uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
            plVar16 = (long *)FUN_0547851c(uVar14,uVar10,uVar21,uVar14);
            if (plVar16 != (long *)0x0) {
              uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              plVar12 = (long *)FUN_05475fe0(param_1,lVar1,uVar10,&local_80);
              goto LAB_05477c9c;
            }
          }
          else {
            plVar16 = (long *)FUN_054783ec(uVar21,uVar10,uVar21);
            plVar12 = plVar16;
            if (plVar16 != (long *)0x0) {
LAB_05477c9c:
              plVar17 = (long *)thunk_FUN_02b79644(*(undefined8 *)
                                                                                                        
                                                  System_IO_Enumeration_FileSystemEnumerableFactory_<>c__DisplayClass4_0_TypeInfo
                                                  );
              FUN_054cb584(plVar17,0);
              local_78 = 0;
              uStack_70 = 0;
              FUN_04dd6958(&local_78,0xffffffff,0xffffffff,0xffffffff,0,0,0);
              if (plVar17 == (long *)0x0) goto LAB_05477dfc;
              FUN_054d23d0(plVar17,local_78,uStack_70,0);
              System_Xml_DtdParser__ScanNameExpected(param_1,plVar16,param_8 & 1);
              FUN_05472240(param_1,plVar12,0,local_80);
              lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
              if (lVar13 == 0) goto LAB_05477dfc;
              iVar8 = 0;
              goto LAB_05477d38;
            }
          }
          uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
          uVar21 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
          uVar14 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
          uVar15 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
          *param_5 = *param_5 + 1;
          plVar16 = (long *)FUN_05471c34(param_1,uVar10,uVar21,uVar14,param_7,uVar15);
          if ((param_2 & 1) != 0) goto LAB_05477454;
          lVar13 = *(long *)PTR_DAT_0631c498;
          plVar12 = (long *)PTR_DAT_0631c498;
          if (*(int *)(lVar13 + 0xe4) != 0) goto LAB_05477438;
          goto LAB_05477434;
        }
        break;
      }
      plVar16 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      if (plVar16 == (long *)0x0) break;
      plVar17 = (long *)(**(code **)(*plVar16 + 0x308))
                                  (plVar16,uVar23,*(undefined8 *)(*plVar16 + 0x310));
      if (plVar17 == (long *)0x0) goto LAB_054780fc;
      bVar4 = *(byte *)(*plVar17 + 0x130);
      bVar5 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((bVar4 < bVar5) ||
         (lVar13 = *(long *)(*plVar17 + 200),
         *(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)puVar6)) goto LAB_054780fc;
      bVar5 = *(byte *)(*(long *)puVar19 + 0x130);
      if ((bVar4 < bVar5) || (*(long *)(lVar13 + (ulong)bVar5 * 8 + -8) != *(long *)puVar19))
      goto LAB_054780fc;
      lVar13 = plVar17[0x13];
      uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar11 = thunk_FUN_04c08854(lVar13,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (param_7 == 0) break;
        uVar11 = thunk_FUN_04c08854(*(undefined8 *)(param_7 + 0x48),lVar1,0);
        if ((uVar11 & 1) != 0) {
          *param_5 = uVar23;
          if (plVar12 != (long *)0x0) {
            iVar8 = FUN_04d238d0(plVar12,0);
            puVar6 = PTR_DAT_0631c498;
            if (iVar8 < 1) goto LAB_05477f14;
            iVar8 = 0;
            goto LAB_05477e84;
          }
          break;
        }
      }
      if (plVar17[0x14] == 0) break;
      uVar21 = *(undefined8 *)(plVar17[0x14] + 0x10);
      uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      uVar11 = thunk_FUN_04c08854(uVar21,uVar10,0);
      if ((uVar11 & 1) != 0) {
        if (plVar17[0x14] == 0) break;
        uVar21 = *(undefined8 *)(plVar17[0x14] + 0x18);
        uVar10 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
        uVar11 = thunk_FUN_04c08854(uVar21,uVar10,0);
        if ((uVar11 & 1) != 0) {
          *param_5 = uVar23;
          if (plVar12 != (long *)0x0) {
            iVar8 = FUN_04d238d0(plVar12,0);
            puVar6 = PTR_DAT_0631c498;
            if (iVar8 < 1) goto LAB_05478000;
            iVar8 = 0;
            goto LAB_05477f70;
          }
          break;
        }
      }
      if (plVar12 == (long *)0x0) break;
      FUN_054c9a24(plVar12,plVar17,0);
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    }
  }
LAB_05477ad4:
  lVar20 = *(long *)(lVar20 + 0x28);
  goto LAB_05477e00;
  while( true ) {
    FUN_054d2298(plVar22,**(undefined8 **)(lVar13 + 0xb8),(*(undefined8 **)(lVar13 + 0xb8))[1],0);
    iVar8 = iVar8 + 1;
    iVar9 = FUN_04d238d0(plVar12,0);
    if (iVar9 <= iVar8) break;
LAB_05477e84:
    plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    lVar13 = *(long *)puVar6;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar13);
      lVar13 = *(long *)puVar6;
    }
    if (plVar22 == (long *)0x0) goto LAB_05477dfc;
    bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19)) {
      if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar22);
      }
      goto LAB_054781e0;
    }
  }
LAB_05477f14:
  FUN_05472240(param_1,plVar17,0,param_7);
  plVar16 = plVar17;
LAB_05477f34:
  System_Xml_DtdParser__ScanNameExpected(param_1,plVar16,param_8 & 1);
  goto LAB_05477454;
  while( true ) {
    bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
    if ((*(byte *)(*plVar22 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19))
    goto LAB_05478198;
    FUN_054d2298(plVar22,**(undefined8 **)(lVar13 + 0xb8),(*(undefined8 **)(lVar13 + 0xb8))[1],0);
    iVar8 = iVar8 + 1;
    iVar9 = FUN_04d238d0(plVar12,0);
    if (iVar9 <= iVar8) break;
LAB_05477f70:
    plVar22 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    lVar13 = *(long *)puVar6;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar13);
      lVar13 = *(long *)puVar6;
    }
    if (plVar22 == (long *)0x0) goto LAB_05477dfc;
  }
LAB_05478000:
  uVar10 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
  plVar16 = (long *)FUN_05475fe0(param_1,lVar1,uVar10,&local_80);
  FUN_05472240(param_1,plVar16,0,local_80);
LAB_05478048:
  System_Xml_DtdParser__ScanNameExpected(param_1,plVar17,param_8 & 1);
LAB_05477454:
  if (*(long *)(lVar20 + 0x28) == local_68) {
    return plVar16;
  }
  goto LAB_054781e0;
  while( true ) {
    lVar13 = (**(code **)(*plVar17 + 0x238))(plVar17,*(undefined8 *)(*plVar17 + 0x240));
    plVar12 = (long *)(**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if (plVar12 == (long *)0x0) break;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                (plVar12,iVar8,*(undefined8 *)(*plVar12 + 0x310));
    if (plVar12 != (long *)0x0) {
      bVar4 = *(byte *)(*(long *)puVar19 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)puVar19)) {
        if (*(long *)(lVar20 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar12);
        }
        goto LAB_054781e0;
      }
    }
    uVar10 = FUN_0547867c(param_1,plVar12);
    if (lVar13 == 0) break;
    FUN_054c9a24(lVar13,uVar10,0);
    iVar8 = iVar8 + 1;
    lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
    if (lVar13 == 0) break;
LAB_05477d38:
    iVar9 = FUN_04d238d0(lVar13,0);
    if (iVar9 <= iVar8) {
      lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
      if (lVar13 != 0) {
        Newtonsoft_Json_Utilities_EnumUtils__InitializeValuesAndNames(lVar13,0);
        lVar13 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
        if (lVar13 != 0) {
          FUN_054c9a24(lVar13,plVar17,0);
          goto LAB_05477454;
        }
      }
      break;
    }
  }
LAB_05477dfc:
  lVar20 = *(long *)(lVar20 + 0x28);
LAB_05477e00:
  if (lVar20 == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_054781e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


