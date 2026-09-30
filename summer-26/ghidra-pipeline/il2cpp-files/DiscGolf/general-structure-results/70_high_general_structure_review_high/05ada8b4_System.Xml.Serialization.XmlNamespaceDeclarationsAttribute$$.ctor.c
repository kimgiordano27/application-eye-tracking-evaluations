/*
FUNCTION_NAME: System.Xml.Serialization.XmlNamespaceDeclarationsAttribute$$.ctor
ENTRY_POINT: 05ada8b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ada0d8) */
/* WARNING: Removing unreachable block (ram,0x05ada598) */
/* WARNING: Removing unreachable block (ram,0x05adaa88) */
/* WARNING: Removing unreachable block (ram,0x05adacd8) */
/* WARNING: Removing unreachable block (ram,0x05adb5dc) */
/* WARNING: Removing unreachable block (ram,0x05adb5ec) */
/* WARNING: Removing unreachable block (ram,0x05ada808) */
/* WARNING: Removing unreachable block (ram,0x05ada348) */

void System_Xml_Serialization_XmlNamespaceDeclarationsAttribute___ctor(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  int unaff_w21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long in_stack_00000000;
  long *in_stack_00000028;
  
code_r0x05ada8b4:
  uVar15 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x27) {
        puVar10 = (undefined8 *)(param_1 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05ada8fc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(unaff_x24,*unaff_x27,0);
LAB_05ada8fc:
  uVar15 = (*(code *)*puVar10)(unaff_x24,puVar10[1]);
  if ((uVar15 & 1) == 0) {
    plVar11 = (long *)thunk_FUN_02dd3048(in_stack_00000028,*(undefined8 *)PTR_DAT_069fbff0);
    if (plVar11 != (long *)0x0) {
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05adaa70;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_05adaa70:
      (*(code *)*puVar10)(plVar11,puVar10[1]);
    }
    if ((*(long *)(in_stack_00000000 + 0xa8) != 0) &&
       (plVar11 = (long *)FUN_05b11118(*(long *)(in_stack_00000000 + 0xa8),0),
       plVar11 != (long *)0x0)) {
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069ff8a8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05adaafc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff8a8,0);
LAB_05adaafc:
      plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05adab70;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,0);
LAB_05adab70:
        uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar15 & 1) == 0) goto LAB_05adac3c;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar14 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_05adabd8;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,1);
LAB_05adabd8:
        plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar2 = *(byte *)(*unaff_x26 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar12);
        }
        FUN_05bfd630();
      } while( true );
    }
    goto LAB_05adb574;
  }
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar14 = *in_stack_00000028;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x27) {
        puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
        goto LAB_05ada964;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(in_stack_00000028,*unaff_x27,1);
LAB_05ada964:
  plVar11 = (long *)(*(code *)*puVar10)(in_stack_00000028,puVar10[1]);
  if (plVar11 != (long *)0x0) {
    bVar2 = *(byte *)(*unaff_x23 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x23)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar11);
    }
  }
  FUN_05b0877c();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05b19e58(plVar11,0);
  FUN_05bfd630();
  if (in_stack_00000028 != (long *)0x0) goto LAB_05ada8b0;
  goto LAB_05ada9e4;
LAB_05adac3c:
  plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)PTR_DAT_069fbff0);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05adacc0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_05adacc0:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  do {
    FUN_05ad92a4();
    unaff_w21 = unaff_w21 + 1;
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_05adb574;
    iVar7 = FUN_05489ff8(*(long *)(unaff_x19 + 0x58),0);
    if (iVar7 <= unaff_w21) {
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Create__
                                 );
      FUN_0400f984(lVar14,*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                  );
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
      ;
      puVar4 = 
      System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
      ;
      puVar3 = System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
      lVar13 = *(long *)(unaff_x19 + 0x60);
      if (lVar13 == 0) goto LAB_05adb574;
      iVar7 = 0;
      goto LAB_05adaf6c;
    }
    plVar11 = *(long **)(unaff_x19 + 0x58);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,unaff_w21,*(undefined8 *)(*plVar11 + 0x310)),
       plVar11 == (long *)0x0)) goto LAB_05adb574;
    bVar2 = *(byte *)(*plVar11 + 0x130);
    bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo +
                     0x130);
    if ((bVar2 < bVar1) ||
       (lVar14 = *(long *)(*plVar11 + 200),
       *(long *)(lVar14 + (ulong)bVar1 * 8 + -8) !=
       *(long *)OVR_OpenVR_IVRApplications__IsQuitUserPromptRequested_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar11);
    }
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetStateMachine__
                     + 0x130);
    if ((bVar1 <= bVar2) &&
       (*(long *)(lVar14 + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetStateMachine__
       )) {
      if (plVar11[9] == 0) {
        lVar14 = plVar11[0xd];
        if (lVar14 == 0) goto LAB_05adb574;
        iVar7 = 0;
        while (iVar8 = FUN_05489ff8(lVar14,0), iVar7 < iVar8) {
          plVar12 = (long *)plVar11[0xd];
          if (plVar12 == (long *)0x0) goto LAB_05adb574;
          plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                      (plVar12,iVar7,*(undefined8 *)(*plVar12 + 0x310));
          if (plVar12 == (long *)0x0) {
LAB_05ad9e44:
            FUN_05bfde88();
            break;
          }
          bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo +
                           0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo))
          goto LAB_05ad9e44;
          lVar14 = plVar11[0xd];
          iVar7 = iVar7 + 1;
          if (lVar14 == 0) goto LAB_05adb574;
        }
      }
      else {
        FUN_05adbcf0();
      }
    }
    in_stack_00000000 = plVar11[9];
  } while (in_stack_00000000 == 0);
  lVar14 = FUN_05b087ec(in_stack_00000000,0);
  if ((lVar14 != 0) &&
     (plVar11 = (long *)FUN_05b11118(lVar14,0),
     puVar3 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo, plVar11 != (long *)0x0))
  {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ad9ee8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff8a8,0);
LAB_05ad9ee8:
    plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05ad9f5c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,0);
LAB_05ad9f5c:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) == 0) goto LAB_05ada03c;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_05ad9fc4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,1);
LAB_05ad9fc4:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar12);
        }
      }
      uVar9 = FUN_05b087ec();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar9,uVar9);
      }
      FUN_05bfd630();
    } while( true );
  }
  goto LAB_05adb574;
LAB_05adaf6c:
  iVar8 = FUN_05489ff8(lVar13,0);
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_Start<OvrAvatarManager_<SendHasAvatarChangedRequestAsync>d__154>__
  ;
  if (iVar8 <= iVar7) {
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x18) < 1) goto LAB_05adb5cc;
      iVar7 = 0;
      while( true ) {
        lVar13 = *(long *)(unaff_x19 + 0x60);
        uVar9 = FUN_0400ff1c(lVar14,iVar7,*(undefined8 *)puVar6);
        if (lVar13 == 0) break;
        FUN_05b10478(lVar13,uVar9,0);
        iVar7 = iVar7 + 1;
        if (*(int *)(lVar14 + 0x18) <= iVar7) {
LAB_05adb5cc:
          *(undefined1 *)(unaff_x19 + 0x30) = 0;
          return;
        }
      }
    }
LAB_05adb574:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar11 = *(long **)(unaff_x19 + 0x60);
  if ((plVar11 == (long *)0x0) ||
     (lVar13 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310)),
     lVar13 == 0)) goto LAB_05adb574;
  *(long *)(lVar13 + 0x28) = unaff_x19;
  LeanTween__value();
  plVar11 = *(long **)(unaff_x19 + 0x60);
  if (plVar11 == (long *)0x0) goto LAB_05adb574;
  plVar11 = (long *)(**(code **)(*plVar11 + 0x308))(plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310))
  ;
  if (plVar11 == (long *)0x0) {
LAB_05adb000:
    plVar11 = *(long **)(unaff_x19 + 0x60);
    if (plVar11 == (long *)0x0) goto LAB_05adb574;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo)) goto LAB_05adb054;
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
        if (plVar11 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo + 0x130
                           );
          if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo)) goto LAB_05adb5f4;
        }
        FUN_05adcf14();
        FUN_05b0870c();
joined_r0x05adb4a4:
        if (plVar11 != (long *)0x0) goto LAB_05adb558;
      }
      goto LAB_05adb574;
    }
LAB_05adb054:
    plVar11 = *(long **)(unaff_x19 + 0x60);
    if (plVar11 == (long *)0x0) goto LAB_05adb574;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) {
LAB_05adb0a0:
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar13 = *(long *)puVar4;
        bVar2 = *(byte *)(lVar13 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) == lVar13)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 != (long *)0x0) {
              lVar13 = *(long *)puVar4;
              bVar2 = *(byte *)(lVar13 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar13))
              goto LAB_05adb5f4;
            }
            FUN_05add8c0();
            goto LAB_05adb3f0;
          }
          goto LAB_05adb574;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo +
                         0x130);
        if ((bVar2 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 != (long *)0x0) {
              bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo
                               + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo))
              goto LAB_05adb5f4;
            }
            FUN_05addeb8();
            FUN_05b087ec();
            goto joined_r0x05adb4a4;
          }
          goto LAB_05adb574;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*unaff_x28 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x28)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                        (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
            if (plVar11 == (long *)0x0) {
              FUN_05ade10c();
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            bVar2 = *(byte *)(*unaff_x28 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
LAB_05adb5f4:
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar11);
            }
            FUN_05ade10c();
            goto LAB_05adb558;
          }
          goto LAB_05adb574;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*unaff_x26 + 0x130);
        if ((bVar2 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) == *unaff_x26)) {
          plVar11 = *(long **)(unaff_x19 + 0x60);
          if (plVar11 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310))
            ;
            plVar11 = (long *)FUN_02979eb8(uVar9,*unaff_x26);
            FUN_05ade2d8();
            goto joined_r0x05adb4a4;
          }
          goto LAB_05adb574;
        }
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo +
                         0x130);
        if ((bVar2 <= *(byte *)(*plVar11 + 0x130)) &&
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo))
        goto LAB_05adb568;
      }
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      (**(code **)(*plVar11 + 0x308))(plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      FUN_05bfde88();
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if ((plVar11 == (long *)0x0) ||
         (uVar9 = (**(code **)(*plVar11 + 0x308))(plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310)),
         lVar14 == 0)) goto LAB_05adb574;
      FUN_0297c25c(lVar14,uVar9,*(undefined8 *)puVar5);
    }
    else {
      lVar13 = *(long *)puVar3;
      bVar2 = *(byte *)(lVar13 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar13))
      goto LAB_05adb0a0;
      plVar11 = *(long **)(unaff_x19 + 0x60);
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                  (plVar11,iVar7,*(undefined8 *)(*plVar11 + 0x310));
      if (plVar11 != (long *)0x0) {
        lVar13 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != lVar13))
        goto LAB_05adb5f4;
      }
      FUN_05add014();
LAB_05adb3f0:
      FUN_05b0877c();
      if (plVar11 == (long *)0x0) goto LAB_05adb574;
      FUN_05b19e58(plVar11,0);
      FUN_05bfd630();
    }
  }
  else {
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo)) goto LAB_05adb000;
    FUN_05adcda4();
    FUN_05b0869c();
LAB_05adb558:
    FUN_05bfd630();
  }
LAB_05adb568:
  lVar13 = *(long *)(unaff_x19 + 0x60);
  iVar7 = iVar7 + 1;
  if (lVar13 == 0) goto LAB_05adb574;
  goto LAB_05adaf6c;
LAB_05ada03c:
  plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)PTR_DAT_069fbff0);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ada0c0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_05ada0c0:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  lVar14 = FUN_05b0869c(in_stack_00000000,0);
  if ((lVar14 != 0) &&
     (plVar11 = (long *)FUN_05b11118(lVar14,0),
     puVar3 = OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo, plVar11 != (long *)0x0)) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ada158;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff8a8,0);
LAB_05ada158:
    plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05ada1cc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,0);
LAB_05ada1cc:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) == 0) goto LAB_05ada2ac;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_05ada234;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,1);
LAB_05ada234:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar12);
        }
      }
      uVar9 = FUN_05b0869c();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar9,uVar9);
      }
      FUN_05bfd630();
    } while( true );
  }
  goto LAB_05adb574;
LAB_05ada2ac:
  plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)PTR_DAT_069fbff0);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ada330;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_05ada330:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  if ((*(long *)(in_stack_00000000 + 0xa0) != 0) &&
     (plVar11 = (long *)FUN_05b11118(*(long *)(in_stack_00000000 + 0xa0),0), plVar11 != (long *)0x0)
     ) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ada3bc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff8a8,0);
LAB_05ada3bc:
    plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05ada430;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,0);
LAB_05ada430:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) == 0) goto LAB_05ada4fc;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_05ada498;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,1);
LAB_05ada498:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      bVar2 = *(byte *)(*unaff_x28 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x28)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar12);
      }
      FUN_05bfd630();
    } while( true );
  }
  goto LAB_05adb574;
LAB_05ada4fc:
  plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)PTR_DAT_069fbff0);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ada580;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
LAB_05ada580:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  lVar14 = FUN_05b0870c(in_stack_00000000,0);
  if ((lVar14 != 0) &&
     (plVar11 = (long *)FUN_05b11118(lVar14,0),
     puVar3 = OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo, plVar11 != (long *)0x0)) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05ada618;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff8a8,0);
LAB_05ada618:
    plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05ada68c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,0);
LAB_05ada68c:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) == 0) goto System_Xml_Serialization_XmlEnumAttribute__AddKeyHash;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_05ada6f4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*unaff_x27,1);
LAB_05ada6f4:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar12 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar12);
        }
      }
      uVar9 = FUN_05b0870c();
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar9,uVar9);
      }
      FUN_05bfd630();
    } while( true );
  }
  goto LAB_05adb574;
System_Xml_Serialization_XmlEnumAttribute__AddKeyHash:
  plVar11 = (long *)thunk_FUN_02dd3048(plVar11,*(undefined8 *)PTR_DAT_069fbff0);
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto System_Xml_Serialization_XmlIncludeAttribute__get_Type;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069fbff0,0);
System_Xml_Serialization_XmlIncludeAttribute__get_Type:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  lVar14 = FUN_05b0877c(in_stack_00000000,0);
  if ((lVar14 == 0) ||
     (plVar11 = (long *)FUN_05b11118(lVar14,0),
     unaff_x23 = (long *)OVR_OpenVR_IVRApplications__LaunchApplicationFromMimeType_TypeInfo,
     plVar11 == (long *)0x0)) goto LAB_05adb574;
  lVar14 = *plVar11;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_069ff8a8) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_05ada888;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)PTR_DAT_069ff8a8,0);
LAB_05ada888:
  in_stack_00000028 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
  if (in_stack_00000028 == (long *)0x0) {
LAB_05ada9e4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05ada8b0:
  param_1 = *in_stack_00000028;
  unaff_x24 = in_stack_00000028;
  goto code_r0x05ada8b4;
}


