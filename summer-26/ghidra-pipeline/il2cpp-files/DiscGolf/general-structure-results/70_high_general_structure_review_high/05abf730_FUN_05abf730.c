/*
FUNCTION_NAME: FUN_05abf730
ENTRY_POINT: 05abf730
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_12;frame_or_lifecycle_behavior
*/


void FUN_05abf730(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long lVar15;
  long unaff_x25;
  long *unaff_x26;
  undefined8 uVar16;
  long *unaff_x27;
  long lVar17;
  long *unaff_x29;
  
  do {
    uVar11 = FUN_05bfde00();
LAB_05abf758:
    do {
      iVar7 = (int)unaff_x26[0xc];
      if (iVar7 == 1) {
        if (*unaff_x27 != 0) {
LAB_05abf86c:
          if (unaff_x25 == 0) goto LAB_05abfd90;
LAB_05abf870:
          if (*(long *)(unaff_x25 + 0x48) == 0) {
            if ((unaff_x22 != 0) && (*(int *)(unaff_x22 + 0x10) != 0)) {
              lVar17 = FUN_05abe334();
              *unaff_x27 = lVar17;
              LeanTween__value(unaff_x27,lVar17);
            }
          }
          else {
            uVar12 = FUN_0536ba54(*unaff_x23,*(long *)(unaff_x25 + 0x48),0);
            if ((uVar12 & 1) != 0) {
              FUN_05bfdfc8();
            }
          }
          FUN_05abf26c();
        }
      }
      else if (iVar7 == 3) {
        if (unaff_x25 != 0) {
          FUN_05ac1770(uVar11,unaff_x26);
          goto LAB_05abf870;
        }
      }
      else {
        if (iVar7 != 2) goto LAB_05abf86c;
                    /* try { // try from 05abf77c to 05bbf787 has its CatchHandler @ 05abfa10 */
        bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo + 0x130);
        if ((*(byte *)(*unaff_x26 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo)) goto LAB_05abfd90;
        lVar17 = unaff_x26[0xd];
        uVar12 = thunk_FUN_0536b75c(lVar17,*unaff_x23,0);
        if ((uVar12 & 1) != 0) {
          FUN_05bfde88();
        }
        if (unaff_x25 == 0) {
          if (lVar17 != 0) {
            if (*(int *)(lVar17 + 0x10) == 0) {
              FUN_05bfde00();
            }
            else {
              FUN_05ac1ab0();
            }
          }
        }
        else {
          uVar12 = FUN_0536ba54(lVar17,*(undefined8 *)(unaff_x25 + 0x48),0);
          if ((uVar12 & 1) != 0) {
            FUN_05bfdfc8();
          }
          uVar11 = *(undefined8 *)(unaff_x20 + 0xa8);
          *(long *)(unaff_x20 + 0xa8) = unaff_x25;
          LeanTween__value(unaff_x20 + 0xa8,unaff_x25);
          FUN_05abf26c();
          *(undefined8 *)(unaff_x20 + 0xa8) = uVar11;
          LeanTween__value(unaff_x20 + 0xa8,uVar11);
        }
      }
      unaff_w24 = unaff_w24 + 1;
      if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05abfd90;
      iVar7 = FUN_05489ff8(*(long *)(unaff_x19 + 0x58),0);
      if (iVar7 <= unaff_w24) {
        *(long *)(unaff_x20 + 0x60) = unaff_x19;
        LeanTween__value();
        FUN_05ac189c();
        FUN_05ac1cb0();
        if (unaff_x22 == 0) {
          unaff_x22 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
        }
        *(long *)(unaff_x20 + 0x50) = unaff_x22;
        LeanTween__value((long *)(unaff_x20 + 0x50),unaff_x22);
        FUN_05ac1fb0();
        plVar10 = *(long **)(unaff_x20 + 0x90);
        if (plVar10 == (long *)0x0) goto LAB_05abfd90;
        (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetStateMachine__
        ;
        puVar4 = OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
        lVar17 = *(long *)(unaff_x19 + 0x58);
        if (lVar17 == 0) goto LAB_05abfd90;
        iVar7 = 0;
        goto LAB_05abf9e4;
      }
      plVar10 = *(long **)(unaff_x19 + 0x58);
      if ((plVar10 == (long *)0x0) ||
         (unaff_x26 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,unaff_w24,*(undefined8 *)(*plVar10 + 0x310)),
         unaff_x26 == (long *)0x0)) goto LAB_05abfd90;
      bVar1 = *(byte *)(*unaff_x29 + 0x130);
      if ((*(byte *)(*unaff_x26 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(unaff_x26);
      }
      unaff_x27 = unaff_x26 + 9;
      unaff_x25 = *unaff_x27;
      unaff_x26[5] = unaff_x19;
      LeanTween__value();
      uVar11 = FUN_05ac1c10();
      if (unaff_x26[7] != 0) {
        uVar11 = FUN_05ac1ab0();
        goto LAB_05abf758;
      }
      if ((int)unaff_x26[0xc] == 1) {
        if (unaff_x25 == 0) break;
        goto LAB_05abf758;
      }
    } while ((unaff_x25 != 0) || ((int)unaff_x26[0xc] != 3));
  } while( true );
LAB_05abf9e4:
  iVar8 = FUN_05489ff8(lVar17,0);
  if (iVar8 <= iVar7) {
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Create__
                               );
    FUN_0400f984(lVar17,*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                );
    plVar10 = *(long **)(unaff_x19 + 0x60);
    if (plVar10 != (long *)0x0) {
      iVar7 = FUN_05489ff8(plVar10,0);
      puVar6 = OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo;
      puVar5 = OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
      puVar3 = System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
      if (iVar7 < 1) goto LAB_05ac0428;
      iVar7 = 0;
      plVar13 = (long *)
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
      ;
      goto LAB_05abfdf8;
    }
    goto LAB_05abfd90;
  }
  plVar10 = *(long **)(unaff_x19 + 0x58);
  if ((plVar10 == (long *)0x0) ||
     (plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310)),
     plVar10 == (long *)0x0)) goto LAB_05abfd90;
  bVar1 = *(byte *)(*plVar10 + 0x130);
  bVar2 = *(byte *)(*unaff_x29 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar17 = *(long *)(*plVar10 + 200), *(long *)(lVar17 + (ulong)bVar2 * 8 + -8) != *unaff_x29))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(plVar10);
  }
  lVar15 = plVar10[9];
  iVar8 = (int)plVar10[0xc];
  if (lVar15 == 0) {
    if (iVar8 == 3) {
      lVar15 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar15 + 0x130);
      if ((bVar1 < bVar2) || (*(long *)(lVar17 + (ulong)bVar2 * 8 + -8) != lVar15))
      goto LAB_05abfd90;
      lVar17 = plVar10[8];
      if (*(int *)(*(long *)PTR_DAT_069ff488 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar12 = FUN_05c0cd54(lVar17,0,0);
      if ((uVar12 & 1) != 0) {
        lVar17 = plVar10[0xd];
        if (lVar17 == 0) goto LAB_05abfd90;
        iVar8 = 0;
        while (iVar9 = FUN_05489ff8(lVar17,0), iVar8 < iVar9) {
          plVar13 = (long *)plVar10[0xd];
          if (plVar13 == (long *)0x0) goto LAB_05abfd90;
          plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                      (plVar13,iVar8,*(undefined8 *)(*plVar13 + 0x310));
          if (plVar13 == (long *)0x0) {
LAB_05abfd5c:
            FUN_05bfde88();
            break;
          }
          lVar17 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar17 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar17))
          goto LAB_05abfd5c;
          lVar17 = plVar10[0xd];
          iVar8 = iVar8 + 1;
          if (lVar17 == 0) goto LAB_05abfd90;
        }
      }
    }
  }
  else {
    if (iVar8 == 3) {
      plVar13 = *(long **)(unaff_x20 + 0xb0);
      if (plVar13 == (long *)0x0) {
        uVar11 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a17648);
        Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(uVar11,0);
        *(undefined8 *)(unaff_x20 + 0xb0) = uVar11;
        LeanTween__value(unaff_x20 + 0xb0,uVar11);
        plVar13 = *(long **)(unaff_x20 + 0xb0);
      }
      uVar16 = *(undefined8 *)(unaff_x20 + 0xa8);
      uVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                 );
      lVar17 = *(long *)puVar3;
      bVar1 = *(byte *)(lVar17 + 0x130);
      if (*(byte *)(*plVar10 + 0x130) < bVar1) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = plVar10;
        if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != lVar17) {
          plVar14 = (long *)0x0;
        }
      }
      FUN_05abdcf0(uVar11,plVar14,uVar16);
      if (plVar13 == (long *)0x0) goto LAB_05abfd90;
      (**(code **)(*plVar13 + 0x308))(plVar13,uVar11,*(undefined8 *)(*plVar13 + 0x310));
      plVar13 = *(long **)(unaff_x20 + 0x90);
      if (plVar13 == (long *)0x0) goto LAB_05abfd90;
      lVar17 = (**(code **)(*plVar13 + 0x2f8))(plVar13,lVar15,*(undefined8 *)(*plVar13 + 0x300));
      unaff_x29 = (long *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo;
joined_r0x05abfd24:
      if (lVar17 == 0) {
        plVar13 = *(long **)(unaff_x20 + 0x90);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x298))(plVar13,lVar15,plVar10,*(undefined8 *)(*plVar13 + 0x2a0));
          FUN_05ac20bc();
          goto LAB_05abfd78;
        }
        goto LAB_05abfd90;
      }
      goto LAB_05abfd84;
    }
    if (iVar8 == 2) {
      if (lVar15 != *(long *)(unaff_x20 + 0x58)) {
        bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(lVar17 + (ulong)bVar2 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo)) goto LAB_05abfd90;
        lVar17 = plVar10[0xd];
        if (lVar17 == 0) {
          lVar17 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
        }
        if (unaff_x21 == (long *)0x0) goto LAB_05abfd90;
        uVar12 = (**(code **)(*unaff_x21 + 0x348))
                           (unaff_x21,lVar15,*(undefined8 *)(*unaff_x21 + 0x350));
        if ((uVar12 & 1) == 0) {
          (**(code **)(*unaff_x21 + 0x308))(unaff_x21,lVar15,*(undefined8 *)(*unaff_x21 + 0x310));
        }
        if ((*(long *)(unaff_x20 + 0x58) == 0) ||
           (plVar10 = (long *)FUN_05b09a88(*(long *)(unaff_x20 + 0x58),0), plVar10 == (long *)0x0))
        goto LAB_05abfd90;
        uVar12 = (**(code **)(*plVar10 + 0x348))(plVar10,lVar17,*(undefined8 *)(*plVar10 + 0x350));
        if ((uVar12 & 1) != 0) goto LAB_05abfd78;
        if ((*(long *)(unaff_x20 + 0x58) == 0) ||
           (plVar10 = (long *)FUN_05b09a88(*(long *)(unaff_x20 + 0x58),0), plVar10 == (long *)0x0))
        goto LAB_05abfd90;
        (**(code **)(*plVar10 + 0x308))(plVar10,lVar17,*(undefined8 *)(*plVar10 + 0x310));
      }
    }
    else if (iVar8 == 1) {
      plVar13 = *(long **)(unaff_x20 + 0x90);
      if (plVar13 != (long *)0x0) {
        lVar17 = (**(code **)(*plVar13 + 0x2f8))(plVar13,lVar15,*(undefined8 *)(*plVar13 + 0x300));
        goto joined_r0x05abfd24;
      }
      goto LAB_05abfd90;
    }
  }
LAB_05abfd78:
  FUN_05ac1cb0();
LAB_05abfd84:
  lVar17 = *(long *)(unaff_x19 + 0x58);
  iVar7 = iVar7 + 1;
  if (lVar17 == 0) goto LAB_05abfd90;
  goto LAB_05abf9e4;
LAB_05abfdf8:
  do {
    lVar15 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
    if (lVar15 == 0) goto LAB_05abfd90;
    *(long *)(lVar15 + 0x28) = unaff_x19;
    LeanTween__value();
    plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
    if (plVar14 == (long *)0x0) {
System_Xml_XmlConvert__VerifyNCName:
      plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar14 != (long *)0x0) {
        lVar15 = *(long *)puVar5;
        bVar1 = *(byte *)(lVar15 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
        goto LAB_05abfeb4;
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          lVar15 = *(long *)puVar5;
          bVar1 = *(byte *)(lVar15 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
          goto LAB_05ac04ac;
        }
        FUN_05ac3368();
        FUN_05b0870c();
joined_r0x05ac02e4:
        if (plVar14 != (long *)0x0) goto LAB_05ac03a0;
        goto LAB_05abfd90;
      }
LAB_05abfeb4:
      plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                  (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
      if (plVar14 == (long *)0x0) {
LAB_05abfefc:
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*plVar13 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) == *plVar13)) {
            plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar14 != (long *)0x0) {
              bVar1 = *(byte *)(*plVar13 + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13))
              goto LAB_05ac04ac;
            }
            FUN_05ac3d24();
            goto LAB_05ac0234;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo +
                           0x130);
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo)) {
            plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar14 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo
                               + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo))
              goto LAB_05ac04ac;
            }
            FUN_05ac430c();
            FUN_05b087ec();
            goto joined_r0x05ac02e4;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
             )) {
            plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                        (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            if (plVar14 == (long *)0x0) {
              FUN_05ac4560();
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            bVar1 = *(byte *)(*(long *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                             + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
               )) {
LAB_05ac04ac:
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar14);
            }
            FUN_05ac4560();
            goto LAB_05ac03a0;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                           + 0x130);
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
             )) {
            uVar11 = (**(code **)(*plVar10 + 0x308))
                               (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            plVar14 = (long *)FUN_02979eb8(uVar11,*(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                                          );
            FUN_05ac4730();
            goto joined_r0x05ac02e4;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          lVar15 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar15 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) == lVar15)) {
            (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
            FUN_05ac4988();
            goto LAB_05ac03b0;
          }
        }
        (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        FUN_05bfde88();
        uVar11 = (**(code **)(*plVar10 + 0x308))(plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (lVar17 == 0) goto LAB_05abfd90;
        FUN_0297c25c(lVar17,uVar11,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                    );
      }
      else {
        lVar15 = *(long *)puVar3;
        bVar1 = *(byte *)(lVar15 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
        goto LAB_05abfefc;
        plVar14 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar7,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar14 != (long *)0x0) {
          lVar15 = *(long *)puVar3;
          bVar1 = *(byte *)(lVar15 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15))
          goto LAB_05ac04ac;
        }
        FUN_05ac346c();
LAB_05ac0234:
        FUN_05b0877c();
        if (plVar14 == (long *)0x0) goto LAB_05abfd90;
        FUN_05b19e58(plVar14,0);
        FUN_05bfd630();
        plVar13 = (long *)
                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
        ;
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto System_Xml_XmlConvert__VerifyNCName;
      FUN_05ac31f8();
      FUN_05b0869c();
LAB_05ac03a0:
      FUN_05bfd630();
    }
LAB_05ac03b0:
    iVar7 = iVar7 + 1;
    iVar8 = FUN_05489ff8(plVar10,0);
  } while (iVar7 < iVar8);
LAB_05ac0428:
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
  ;
  if (lVar17 != 0) {
    if (0 < *(int *)(lVar17 + 0x18)) {
      iVar7 = 0;
      do {
        lVar15 = *(long *)(unaff_x19 + 0x60);
        uVar11 = FUN_0400ff1c(lVar17,iVar7,*(undefined8 *)puVar4);
        if (lVar15 == 0) goto LAB_05abfd90;
        FUN_05b10478(lVar15,uVar11,0);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar17 + 0x18));
    }
    return;
  }
LAB_05abfd90:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


