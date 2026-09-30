/*
FUNCTION_NAME: FUN_0592c6d0
ENTRY_POINT: 0592c6d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0592d514) */
/* WARNING: Removing unreachable block (ram,0x0592d22c) */
/* WARNING: Removing unreachable block (ram,0x0592ce88) */
/* WARNING: Removing unreachable block (ram,0x0592d820) */
/* WARNING: Removing unreachable block (ram,0x0592d858) */
/* WARNING: Removing unreachable block (ram,0x0592d848) */
/* WARNING: Removing unreachable block (ram,0x0592da90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0592c6d0(long param_1,long param_2,undefined8 param_3,ulong param_4)

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
  
  puVar4 = PTR_DAT_06a17648;
  lVar11 = param_1;
  if ((DAT_06dc1023 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a17648);
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                );
    FUN_02d965b8(System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__IsFullscreen_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperone__GetBoundsColor_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRLoadAnchorResult_TypeInfo);
    FUN_02d965b8(Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fba48);
    FUN_02d965b8(PTR_DAT_069ff7c8);
    FUN_02d965b8(PTR_DAT_06a12a30);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff7d0);
    FUN_02d965b8(PTR_DAT_069fba08);
    FUN_02d965b8(PTR_DAT_06a144d0);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo);
    lVar11 = FUN_02d965b8(PTR_DAT_069fca08);
    DAT_06dc1023 = 1;
  }
  uVar12 = FUN_05921708(lVar11,param_2);
  plVar13 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(plVar13,0);
  puVar4 = System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo;
  if (((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0))
  goto LAB_0592cc84;
  uVar24 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo + 0xe4) ==
      0) {
    thunk_FUN_02df485c();
  }
  uVar14 = FUN_05bbed9c(uVar12,0);
  puVar6 = System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo;
  if (lVar11 == 0) goto LAB_0592cc84;
  plVar15 = (long *)FUN_058f6144(lVar11,uVar14,uVar24,0);
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (plVar15 != (long *)0x0) {
      if ((param_4 & 1) != 0) {
        return plVar15;
      }
      uVar12 = FUN_058d0834(uVar12,0);
      uVar24 = thunk_FUN_02dfd288(OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar24);
    }
LAB_0592c938:
    if ((param_4 & 1) != 0) {
      plVar15 = *(long **)(param_1 + 0x40);
      uVar14 = FUN_0536d554(uVar24,*(undefined8 *)PTR_DAT_06a12a30,uVar12,0);
      if (plVar15 == (long *)0x0) goto LAB_0592cc84;
      (**(code **)(*plVar15 + 0x308))(plVar15,uVar14,*(undefined8 *)(*plVar15 + 0x310));
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar12 = FUN_05bbed9c(uVar12,0);
    plVar15 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
                                        );
    FUN_058ac8e8(plVar15,uVar12,0);
    if (plVar15 == (long *)0x0) goto LAB_0592cc84;
    plVar15[0x26] = *(long *)(param_2 + 0xb0);
    LeanTween__value(plVar15 + 0x26);
    uVar12 = FUN_058b0940(plVar15,uVar24,0);
    uVar12 = FUN_05925434(uVar12,param_2,
                          *(undefined8 *)
                           System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_TypeInfo
                          ,uVar24);
    uVar12 = FUN_058b0940(plVar15,uVar12,0);
    puVar7 = OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo;
    puVar4 = PTR_DAT_069fba08;
    lVar11 = FUN_05925434(uVar12,param_3,
                          *(undefined8 *)OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo,
                          *(undefined8 *)PTR_DAT_069fba08);
    if (lVar11 == 0) goto LAB_0592cc84;
    iVar10 = *(int *)(lVar11 + 0x10);
    if (iVar10 == 0) {
      lVar11 = FUN_05925434(lVar11,param_2,*(undefined8 *)puVar7,*(undefined8 *)puVar4);
      if (lVar11 == 0) goto LAB_0592cc84;
      iVar10 = *(int *)(lVar11 + 0x10);
    }
    if (0 < iVar10) {
      uVar16 = thunk_FUN_0536b75c(lVar11,*(undefined8 *)PTR_DAT_069ff7d0,0);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = thunk_FUN_0536b75c(lVar11,*(undefined8 *)PTR_DAT_069fca08,0), (uVar16 & 1) != 0))
      {
        FUN_058b3670(plVar15,1,0);
      }
      uVar16 = thunk_FUN_0536b75c(lVar11,*(undefined8 *)PTR_DAT_069ff7c8,0);
      if (((uVar16 & 1) != 0) ||
         (uVar16 = thunk_FUN_0536b75c(lVar11,*(undefined8 *)PTR_DAT_06a144d0,0), (uVar16 & 1) != 0))
      {
        FUN_058b3670(plVar15,0,0);
      }
    }
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar11 = FUN_05917d18(param_2,*(undefined8 *)
                                   OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo
                         );
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x10) < 1) {
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = FUN_0547e2f8(0);
      }
      else {
        uVar12 = thunk_FUN_02dd3144();
        FUN_0547ed8c(uVar12,lVar11,0);
      }
      System_Net_Http_Headers_HttpHeaders__GetKnownHeaderKind(plVar15,uVar12,0);
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
      lVar11 = FUN_0592c2ec(param_1,uVar24);
      if (lVar11 != 0) {
        FUN_058b738c(plVar15,lVar11,0);
      }
    }
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar11 == 0)) goto LAB_0592cc84;
    FUN_058f6398(lVar11,plVar15,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      lVar11 = *(long *)(param_1 + 0x88);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
      FUN_0400f984(uVar12,*(undefined8 *)Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
      if (lVar11 == 0) goto LAB_0592cc84;
      FUN_04e935f0(lVar11,plVar15,uVar12,
                   *(undefined8 *)OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo);
    }
  }
  else if (plVar15 == (long *)0x0) goto LAB_0592c938;
  FUN_059292bc(param_1,param_3,plVar15,plVar13,*(undefined1 *)(param_2 + 0x76));
  plVar17 = (long *)plVar15[8];
  if (plVar17 != (long *)0x0) {
    iVar10 = 0;
    while (iVar9 = (**(code **)(*plVar17 + 0x1c8))(plVar17,*(undefined8 *)(*plVar17 + 0x1d0)),
          iVar10 < iVar9) {
      if ((plVar15[8] == 0) || (lVar11 = FUN_058e7424(plVar15[8],iVar10,0), lVar11 == 0))
      goto LAB_0592cc84;
      FUN_058c8c14(lVar11,iVar10,0);
      plVar17 = (long *)plVar15[8];
      iVar10 = iVar10 + 1;
      if (plVar17 == (long *)0x0) goto LAB_0592cc84;
    }
    uVar12 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05920924(plVar15,uVar12);
    System_Runtime_Serialization_EnumDataContract___ctor(plVar15,*(undefined8 *)(param_2 + 0x48));
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar11 = FUN_05b0ea98(*(long *)(param_1 + 0x18),0), lVar11 == 0)) goto LAB_0592ce8c;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar11 = FUN_05b0ea98(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
      lVar11 = FUN_05b10330(lVar11,0);
      puVar6 = OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo;
      puVar4 = OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo;
      goto joined_r0x0592ccf8;
    }
  }
LAB_0592cc84:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
joined_r0x0592ccf8:
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar16 = FUN_05b10638(lVar11,0);
  if ((uVar16 & 1) != 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar17 = (long *)FUN_05b106d8(lVar11,0);
    if (plVar17 != (long *)0x0) goto code_r0x0592cd30;
    goto LAB_0592cd7c;
  }
  plVar17 = (long *)thunk_FUN_02dd3048(lVar11,*(undefined8 *)PTR_DAT_069fbff0);
  if (plVar17 == (long *)0x0) goto LAB_0592ce8c;
  lVar11 = *plVar17;
  uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar16 == 0) goto LAB_0592ce54;
  piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
  goto LAB_0592ce3c;
code_r0x0592cd30:
  bVar1 = *(byte *)(*plVar17 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar1 < bVar2) ||
     (lVar21 = *(long *)(*plVar17 + 200),
     *(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(plVar17);
  }
  bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
  if ((bVar1 < bVar2) || (*(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
LAB_0592cd7c:
    uVar12 = FUN_0592b6d0(plVar17,plVar17);
    uVar16 = thunk_FUN_0536b75c(uVar12,plVar15[0x12],0);
    if ((uVar16 & 1) != 0) {
      uVar12 = FUN_0592daac(param_1,plVar17);
      uVar24 = FUN_058ae3f4(plVar15,0);
      uVar16 = thunk_FUN_0536b75c(uVar12,uVar24,0);
      if (((uVar16 & 1) != 0) || (lVar21 = FUN_0592daac(param_1,plVar17), lVar21 == 0)) {
        FUN_0592b7e8(param_1,plVar17);
      }
    }
  }
  goto joined_r0x0592ccf8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar23 = piVar23 + 4;
    if (uVar16 == 0) break;
LAB_0592ce3c:
    if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0592ce70;
    }
  }
LAB_0592ce54:
  puVar18 = (undefined8 *)FUN_02dd004c(plVar17,*(long *)PTR_DAT_069fbff0,0);
LAB_0592ce70:
  (*(code *)*puVar18)(plVar17,puVar18[1]);
LAB_0592ce8c:
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar8 = OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo;
    puVar7 = OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo;
    puVar6 = OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo;
    puVar4 = PTR_DAT_069fbff8;
joined_r0x0592ceb8:
    do {
      do {
        do {
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar11 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                goto LAB_0592cf2c;
              }
              uVar16 = uVar16 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar16 != 0);
          }
          puVar18 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar4,0);
LAB_0592cf2c:
          uVar16 = (*(code *)*puVar18)(plVar13,puVar18[1]);
          puVar5 = PTR_DAT_069fbff0;
          if ((uVar16 & 1) == 0) {
            plVar13 = (long *)thunk_FUN_02dd3048(plVar13,*(undefined8 *)PTR_DAT_069fbff0);
            if (plVar13 == (long *)0x0) {
              return plVar15;
            }
            lVar11 = *plVar13;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 == 0) goto LAB_0592da3c;
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_0592da24;
          }
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar11 = *plVar13;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                puVar18 = (undefined8 *)(lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                goto LAB_0592cf94;
              }
              uVar16 = uVar16 - 1;
              piVar23 = piVar23 + 4;
            } while (uVar16 != 0);
          }
          puVar18 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar4,1);
LAB_0592cf94:
          plVar17 = (long *)(*(code *)*puVar18)(plVar13,puVar18[1]);
          if (plVar17 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)
                 System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
               )) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar17);
            }
          }
          if (plVar17 != plVar15) {
            uVar12 = FUN_058ae3f4(plVar15,0);
            if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar24 = FUN_058ae3f4(plVar17,0);
            uVar16 = thunk_FUN_0536b75c(uVar12,uVar24,0);
            if ((uVar16 & 1) != 0) {
              plVar17[0x13] = 0;
              LeanTween__value(plVar17 + 0x13,0);
            }
          }
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar11 = FUN_05b0ea98(*(long *)(param_1 + 0x18),0), lVar11 != 0)) {
            if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = FUN_05b0ea98(*(long *)(param_1 + 0x18),0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = FUN_05b10330(lVar11,0);
            while( true ) {
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar16 = FUN_05b10638(lVar11,0);
              if ((uVar16 & 1) == 0) break;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              plVar19 = (long *)FUN_05b106d8(lVar11,0);
              if (plVar19 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar19 + 0x130);
                bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
                if ((bVar1 < bVar2) ||
                   (lVar21 = *(long *)(*plVar19 + 200),
                   *(long *)(lVar21 + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(plVar19);
                }
                bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
                if (((bVar2 <= bVar1) &&
                    (*(long *)(lVar21 + (ulong)bVar2 * 8 + -8) == *(long *)puVar7)) &&
                   (uVar16 = FUN_05922e80(plVar19,plVar19,*(undefined8 *)puVar8,0),
                   (uVar16 & 1) != 0)) {
                  uVar12 = FUN_0592b6d0(uVar16,plVar19);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  uVar16 = thunk_FUN_0536b75c(uVar12,plVar17[0x12],0);
                  if ((uVar16 & 1) != 0) {
                    if (plVar17[4] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    lVar21 = *(long *)(plVar17[4] + 0x28);
                    if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96860();
                    }
                    iVar10 = FUN_058f5df0(lVar21,plVar17[0x12],0);
                    if (iVar10 < -1) {
                      uVar12 = FUN_0592daac(param_1,plVar19);
                      uVar24 = FUN_058ae3f4(plVar17,0);
                      uVar16 = thunk_FUN_0536b75c(uVar12,uVar24,0);
                      if ((uVar16 & 1) != 0) {
                        FUN_0592af58(param_1,plVar19);
                      }
                    }
                    else {
                      FUN_0592af58(param_1,plVar19);
                    }
                  }
                }
              }
            }
            plVar19 = (long *)thunk_FUN_02dd3048(lVar11,*(undefined8 *)PTR_DAT_069fbff0);
            if (plVar19 != (long *)0x0) {
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_069fbff0) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0592d214;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)PTR_DAT_069fbff0,0);
LAB_0592d214:
              (*(code *)*puVar18)(plVar19,puVar18[1]);
            }
          }
          plVar19 = (long *)FUN_058b40dc(plVar15,0);
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar11 = 0;
          for (iVar10 = 0;
              iVar9 = (**(code **)(*plVar19 + 0x1c8))(plVar19,*(undefined8 *)(*plVar19 + 0x1d0)),
              iVar10 < iVar9; iVar10 = iVar10 + 1) {
            plVar20 = (long *)(**(code **)(*plVar19 + 0x208))
                                        (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar16 = (**(code **)(*plVar20 + 0x1d8))(plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
            if ((uVar16 & 1) != 0) {
              plVar20 = (long *)(**(code **)(*plVar19 + 0x208))
                                          (plVar19,iVar10,*(undefined8 *)(*plVar19 + 0x210));
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
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
          uVar12 = FUN_058be91c(plVar15,0);
        }
        else {
          iVar10 = (int)plVar15[0x43];
          if (iVar10 == -1) {
            plVar19 = (long *)plVar15[8];
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            plVar19 = (long *)(**(code **)(*plVar19 + 0x1e8))
                                        (plVar19,*(undefined8 *)(*plVar19 + 0x1f0));
            puVar5 = PTR_DAT_069fbff0;
            do {
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0592d38c;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)puVar4,0);
LAB_0592d38c:
              uVar16 = (*(code *)*puVar18)(plVar19,puVar18[1]);
              if ((uVar16 & 1) == 0) {
                iVar10 = -1;
                goto LAB_0592d484;
              }
              if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)puVar4) {
                    puVar18 = (undefined8 *)(lVar11 + (long)(*piVar23 + 1) * 0x10 + 0x138);
                    goto LAB_0592d3f4;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)puVar4,1);
LAB_0592d3f4:
              plVar20 = (long *)(*(code *)*puVar18)(plVar19,puVar18[1]);
              if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *plVar20;
              bVar1 = *(byte *)(*(long *)
                                 System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                               + 0x130);
              if ((*(byte *)(lVar11 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)
                   System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                 )) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar20);
              }
              iVar10 = (**(code **)(lVar11 + 0x1d8))(plVar20,*(undefined8 *)(lVar11 + 0x1e0));
            } while (iVar10 != 2);
            iVar10 = *(int *)((long)plVar20 + 100);
LAB_0592d484:
            plVar19 = (long *)thunk_FUN_02dd3048(plVar19,*(undefined8 *)puVar5);
            if (plVar19 != (long *)0x0) {
              lVar11 = *plVar19;
              uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar16 != 0) {
                piVar23 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar23 + -2) == *(long *)PTR_DAT_069fbff0) {
                    puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
                    goto LAB_0592d4fc;
                  }
                  uVar16 = uVar16 - 1;
                  piVar23 = piVar23 + 4;
                } while (uVar16 != 0);
              }
              puVar18 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)PTR_DAT_069fbff0,0);
LAB_0592d4fc:
              (*(code *)*puVar18)(plVar19,puVar18[1]);
            }
          }
          uVar12 = FUN_058be6a8(plVar15,iVar10,0);
        }
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = FUN_058be924(plVar17,uVar12,0);
        if (*(char *)(param_1 + 0xa0) != '\0') {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_058c6eb8(lVar11,plVar17[0x14],0);
        }
        uVar24 = FUN_0536d554(plVar15[0x12],*(undefined8 *)PTR_DAT_069fba48,plVar17[0x12],0);
        plVar19 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                              System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo
                                            );
        FUN_058eb160(plVar19,uVar24,uVar12,lVar11,1,0);
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*plVar19 + 0x1e8))(plVar19,1,*(undefined8 *)(*plVar19 + 0x1f0));
        if (plVar17[4] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = *(long *)(plVar17[4] + 0x30);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_058ee938(lVar11,plVar19,0);
      } while ((*(char *)(param_1 + 0xa0) == '\0') ||
              (uVar16 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
              (uVar16 & 1) == 0));
      lVar11 = *(long *)(param_1 + 0x88);
      uVar12 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar12,uVar12);
      }
      uVar16 = FUN_04e937e4(lVar11,uVar12,
                            *(undefined8 *)OVR_OpenVR_IVRCompositor__IsFullscreen_TypeInfo);
    } while ((uVar16 & 1) == 0);
    lVar11 = *(long *)(param_1 + 0x88);
    uVar12 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar12,uVar12);
    }
    lVar11 = FUN_04e93570(lVar11,uVar12,
                          *(undefined8 *)OVR_OpenVR_IVRChaperone__GetBoundsColor_TypeInfo);
    uVar12 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
    if (lVar11 != 0) {
      lVar21 = *(long *)(lVar11 + 0x10);
      lVar22 = *(long *)UnityEngine_XR_ARSubsystems_XRLoadAnchorResult_TypeInfo;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar21 != 0) {
        uVar3 = *(uint *)(lVar11 + 0x18);
        if (uVar3 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20) = uVar12;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar11,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
        }
        goto joined_r0x0592ceb8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_0592cc84;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar23 = piVar23 + 4;
    if (uVar16 == 0) break;
LAB_0592da24:
    if (*(long *)(piVar23 + -2) == *(long *)puVar5) {
      puVar18 = (undefined8 *)(lVar11 + (long)*piVar23 * 0x10 + 0x138);
      goto LAB_0592da58;
    }
  }
LAB_0592da3c:
  puVar18 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar5,0);
LAB_0592da58:
  (*(code *)*puVar18)(plVar13,puVar18[1]);
  return plVar15;
}


