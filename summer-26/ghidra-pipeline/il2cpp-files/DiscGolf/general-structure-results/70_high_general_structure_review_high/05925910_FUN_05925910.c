/*
FUNCTION_NAME: FUN_05925910
ENTRY_POINT: 05925910
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x059264a0) */
/* WARNING: Removing unreachable block (ram,0x059264a4) */
/* WARNING: Removing unreachable block (ram,0x05926908) */
/* WARNING: Removing unreachable block (ram,0x059267b8) */
/* WARNING: Removing unreachable block (ram,0x05926928) */
/* WARNING: Removing unreachable block (ram,0x0592692c) */
/* WARNING: Removing unreachable block (ram,0x0592662c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05925910(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long local_68;
  
  if ((DAT_06dc102d & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(PTR_DAT_069ff840);
    FUN_02d965b8(System_Xml_XmlAttribute_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlAttributeAttribute_TypeInfo);
    FUN_02d965b8(System_Xml_XmlAttributeCollection_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRLoadAnchorResult_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlAttributeOverrides_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CompositorGoToBack_TypeInfo);
    FUN_02d965b8(Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo);
    FUN_02d965b8(System_BitConverter_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo);
    DAT_06dc102d = 1;
  }
  puVar4 = OVR_OpenVR_IVRApplications__PerformApplicationPrelaunchCheck_TypeInfo;
  puVar7 = System_Xml_Schema_XmlSchemaFractionDigitsFacet_TypeInfo;
  puVar6 = UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo;
  puVar5 = Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  if ((((param_2 == 0) || (*(long *)(param_2 + 0xc0) == 0)) || (*(long *)(param_1 + 0x20) == 0)) ||
     (plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x28), plVar10 == (long *)0x0))
  goto LAB_059268d4;
  lVar19 = *(long *)(*(long *)(param_2 + 0xc0) + 0x18);
  lVar20 = *(long *)(param_2 + 0x98);
  (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_0400f984(lVar11,*(undefined8 *)puVar5);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar5 = PTR_DAT_069fc178;
  lVar12 = FUN_05917d18(param_2,*(undefined8 *)puVar4);
  if (lVar12 == 0) {
    uVar14 = FUN_05922e80(0,param_2,
                          *(undefined8 *)
                           OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo,0);
    lVar12 = *(long *)(param_1 + 0x20);
    if ((uVar14 & 1) == 0) {
      uVar13 = thunk_FUN_02dd3144();
      FUN_0547ed98(uVar13,0x409,0);
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar13 = FUN_0547e358(0);
    }
    if (lVar12 == 0) goto LAB_059268d4;
    FUN_058d5564(lVar12,uVar13,0,0);
  }
  else {
    lVar21 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar12 + 0x10) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar13 = FUN_0547e2f8(0);
    }
    else {
      uVar13 = thunk_FUN_02dd3144();
      FUN_0547ed8c(uVar13,lVar12,0);
    }
    if (lVar21 == 0) goto LAB_059268d4;
    FUN_058d53e4(lVar21,uVar13,0);
  }
  puVar5 = System_BitConverter_<>c_TypeInfo;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar12 = FUN_05917d18(param_2,*(undefined8 *)puVar5);
  puVar5 = OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
    lVar20 = lVar12;
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar12 = FUN_05917d18(param_2,*(undefined8 *)puVar5);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x10) != 0)) {
    lVar19 = lVar12;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  uVar23 = *(undefined8 *)(param_2 + 0x48);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05920924(uVar13,uVar23);
  System_Runtime_Serialization_EnumDataContract___ctor
            (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x48));
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0x10) != 0)) {
    lVar12 = *(long *)(param_1 + 0x20);
    if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo + 0xe4)
        == 0) {
      thunk_FUN_02df485c();
    }
    uVar13 = FUN_05bbed9c(lVar20,0);
    if (lVar12 == 0) goto LAB_059268d4;
    FUN_058d0d30(lVar12,uVar13,0);
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_059268d4;
  FUN_058d4e14(*(long *)(param_1 + 0x20),lVar19,0);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    lVar19 = *(long *)(param_1 + 0x20);
    if (lVar19 == 0) goto LAB_059268d4;
    uVar13 = FUN_0592c2ec(param_1,*(undefined8 *)(lVar19 + 0x50));
    FUN_058d52b4(lVar19,uVar13,0);
  }
  plVar10 = (long *)FUN_059254b4(param_1,param_2);
  if (plVar10 == (long *)0x0) goto LAB_059268d4;
  bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0x130);
  if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0();
  }
  if (plVar10[0x14] != 0) {
    lVar19 = FUN_059227e4();
    if (lVar19 == 0) {
      return;
    }
    local_68 = FUN_05b10330(lVar19,0);
    puVar4 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo;
    puVar7 = OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo;
    puVar6 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
    puVar5 = PTR_DAT_069ff840;
joined_r0x05925d80:
    while( true ) {
      do {
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar14 = FUN_05b10638(local_68,0);
        puVar3 = PTR_DAT_069fbff0;
        if ((uVar14 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_02dd3048(local_68,*(undefined8 *)PTR_DAT_069fbff0);
          local_78 = plVar10;
          if (plVar10 == (long *)0x0) goto LAB_05926630;
          lVar19 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar14 == 0) goto LAB_059265f4;
          piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_059265dc;
        }
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar10 = (long *)FUN_05b106d8(local_68,0);
      } while (plVar10 == (long *)0x0);
      lVar19 = *(long *)puVar7;
      lVar20 = *plVar10;
      bVar2 = *(byte *)(lVar20 + 0x130);
      bVar1 = *(byte *)(lVar19 + 0x130);
      if ((bVar2 < bVar1) ||
         (lVar12 = *(long *)(lVar20 + 200), *(long *)(lVar12 + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar10);
      }
      lVar19 = *(long *)puVar6;
      uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
      if ((*(byte *)(lVar19 + 0x130) <= bVar2) && (*(long *)(lVar12 + uVar14 * 8 + -8) == lVar19))
      break;
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if (((bVar1 <= bVar2) && (*(long *)(lVar12 + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) &&
         (lVar19 = (**(code **)(lVar20 + 0x238))(plVar10,*(undefined8 *)(lVar20 + 0x240)),
         lVar19 != 0)) {
        local_70 = FUN_05b10330(lVar19,0);
joined_r0x05925f40:
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar14 = FUN_05b10638(local_70,0);
        if ((uVar14 & 1) != 0) {
          if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar15 = (long *)FUN_05b106d8(local_70,0);
          if (plVar15 != (long *)0x0) {
            lVar19 = *(long *)puVar7;
            bVar1 = *(byte *)(*plVar15 + 0x130);
            bVar2 = *(byte *)(lVar19 + 0x130);
            if ((bVar1 < bVar2) ||
               (lVar20 = *(long *)(*plVar15 + 200),
               *(long *)(lVar20 + (ulong)bVar2 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar15);
            }
            bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((bVar2 <= bVar1) && (*(long *)(lVar20 + (ulong)bVar2 * 8 + -8) == *(long *)puVar6))
            {
              bVar1 = *(byte *)(*(long *)
                                 OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo
                               + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar10);
              }
              lVar12 = *(long *)puVar5;
              lVar19 = plVar10[0xc];
              lVar20 = plVar10[0xd];
              if (*(int *)(lVar12 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar12 = *(long *)puVar5;
              }
              uVar14 = FUN_05547e88(lVar19,lVar20,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                                    *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
              lVar19 = *(long *)puVar6;
              lVar20 = *plVar15;
              if ((uVar14 & 1) != 0) {
                if ((*(byte *)(lVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                   (*(long *)(*(long *)(lVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8)
                    != lVar19)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(plVar15);
                }
                if ((long *)plVar15[0x17] != (long *)0x0) {
                  lVar12 = *(long *)plVar15[0x17];
                  bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0x130);
                  if ((bVar1 <= *(byte *)(lVar12 + 0x130)) &&
                     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo)) {
                    bVar1 = *(byte *)(*(long *)
                                       OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo
                                     + 0x130);
                    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)
                         OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d96be0(plVar10);
                    }
                    FUN_05b122d8(plVar15,plVar10[0xc],plVar10[0xd],0);
                    lVar19 = *(long *)puVar6;
                    lVar20 = *plVar15;
                  }
                }
              }
              uVar8 = (uint)*(byte *)(lVar20 + 0x130);
              uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
              if ((*(byte *)(lVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                 (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar15);
              }
              if (plVar15[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar12 = *(long *)(plVar15[0x14] + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if ((*(int *)(lVar12 + 0x10) != 0) && (*(char *)(param_1 + 0xa0) == '\0')) {
                lVar12 = *(long *)puVar5;
                lVar19 = plVar15[0xc];
                lVar20 = plVar15[0xd];
                if (*(int *)(lVar12 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar12 = *(long *)puVar5;
                }
                uVar16 = FUN_05547cdc(lVar19,lVar20,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10)
                                      ,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
                lVar19 = *(long *)puVar6;
                lVar20 = *plVar15;
                uVar8 = (uint)*(byte *)(lVar20 + 0x130);
                uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
                if ((uVar16 & 1) != 0) {
                  if ((*(byte *)(lVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                     (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96be0(plVar15);
                  }
                  if ((long *)plVar15[0x17] == (long *)0x0) goto joined_r0x05925f40;
                  lVar12 = *(long *)plVar15[0x17];
                  bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0x130);
                  if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo))
                  goto joined_r0x05925f40;
                }
              }
              if ((uVar8 < (uint)uVar14) ||
                 (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar15);
              }
              lVar19 = FUN_05925798(param_1,plVar15);
              if (*(char *)(param_1 + 0xa0) != '\0') {
                if (lVar11 == 0) {
LAB_059264e0:
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                lVar20 = *(long *)(lVar11 + 0x10);
                lVar12 = *(long *)UnityEngine_XR_ARSubsystems_XRLoadAnchorResult_TypeInfo;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar20 == 0) goto LAB_059264e0;
                uVar8 = *(uint *)(lVar11 + 0x18);
                if (uVar8 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar8 + 1;
                  plVar15 = (long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20);
                  *plVar15 = lVar19;
                  LeanTween__value(plVar15,lVar19);
                }
                else {
                  FUN_040101ec(lVar11,lVar19,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
              }
              if (lVar19 != 0) {
                *(undefined1 *)(lVar19 + 0xb0) = 1;
              }
            }
          }
          goto joined_r0x05925f40;
        }
        plVar10 = (long *)thunk_FUN_02dd3048(local_70,*(undefined8 *)PTR_DAT_069fbff0);
        local_78 = plVar10;
        if (plVar10 != (long *)0x0) {
          lVar19 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar14 != 0) {
            piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff0) {
                puVar17 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_05926488;
              }
              uVar14 = uVar14 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar14 != 0);
          }
          puVar17 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_05926488:
          (*(code *)*puVar17)(plVar10,puVar17[1]);
        }
      }
    }
    if (plVar10[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar12 = *(long *)(plVar10[0x14] + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(lVar12 + 0x10) != 0) {
      if (*(char *)(param_1 + 0xa0) == '\0') goto joined_r0x05925d80;
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar19 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      uVar13 = FUN_05921708(plVar10,plVar10);
      if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo + 0xe4
                  ) == 0) {
        thunk_FUN_02df485c();
      }
      uVar13 = FUN_05bbed9c(uVar13,0);
      if (*(long *)(param_2 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar13,uVar13);
      }
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar13,uVar13);
      }
      lVar19 = FUN_058f6144(lVar19,uVar13,*(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x18),0);
      if (lVar19 != 0) {
        if (lVar11 == 0) {
LAB_05926910:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)UnityEngine_XR_ARSubsystems_XRLoadAnchorResult_TypeInfo;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 == 0) goto LAB_05926910;
        uVar8 = *(uint *)(lVar11 + 0x18);
        if (uVar8 < *(uint *)(lVar20 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar8 + 1;
          *(long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = lVar19;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar11,lVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar19 = *(long *)puVar6;
      lVar20 = *plVar10;
      bVar1 = *(byte *)(lVar19 + 0x130);
      if (*(long *)(param_2 + 200) == 0) {
        if ((*(byte *)(lVar20 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar10);
        }
        if ((long *)plVar10[0x17] == (long *)0x0) goto LAB_05926310;
        lVar12 = *(long *)plVar10[0x17];
        bVar2 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0x130);
        if ((*(byte *)(lVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo)) goto LAB_05926310;
        bVar22 = false;
      }
      else {
LAB_05926310:
        bVar22 = true;
      }
      if ((*(byte *)(lVar20 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar20 + 200) + (ulong)bVar1 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar10);
      }
      lVar12 = *(long *)puVar5;
      lVar19 = plVar10[0xc];
      lVar20 = plVar10[0xd];
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar12 = *(long *)puVar5;
      }
      uVar8 = FUN_05547cdc(lVar19,lVar20,*(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18),0);
      if (!bVar22 && ((uVar8 ^ 0xffffffff) & 1) == 0) goto joined_r0x05925d80;
      lVar19 = *(long *)puVar6;
      lVar20 = *plVar10;
      bVar2 = *(byte *)(lVar20 + 0x130);
      uVar14 = (ulong)*(byte *)(lVar19 + 0x130);
    }
    if (((uint)bVar2 < (uint)uVar14) ||
       (*(long *)(*(long *)(lVar20 + 200) + uVar14 * 8 + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar10);
    }
    lVar19 = FUN_05925798(param_1,plVar10);
    if (lVar19 != 0) {
      *(undefined1 *)(lVar19 + 0xb0) = 1;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (lVar11 != 0) {
        lVar20 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)UnityEngine_XR_ARSubsystems_XRLoadAnchorResult_TypeInfo;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar20 != 0) {
          uVar8 = *(uint *)(lVar11 + 0x18);
          if (uVar8 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar8 + 1;
            *(long *)(lVar20 + (long)(int)uVar8 * 8 + 0x20) = lVar19;
            LeanTween__value();
          }
          else {
            FUN_040101ec(lVar11,lVar19,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x05925d80;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    goto joined_r0x05925d80;
  }
  goto LAB_05926630;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar18 = piVar18 + 4;
    if (uVar14 == 0) break;
LAB_059265dc:
    if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
      puVar17 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05926610;
    }
  }
LAB_059265f4:
  puVar17 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar3,0);
LAB_05926610:
  (*(code *)*puVar17)(plVar10,puVar17[1]);
LAB_05926630:
  lVar19 = FUN_05b0ea98(param_2,0);
  if (lVar19 != 0) {
    lVar19 = FUN_05b0ea98(param_2,0);
    if (lVar19 == 0) goto LAB_059268d4;
    local_68 = FUN_05b10330(lVar19,0);
    puVar7 = OVR_OpenVR_IVRCompositor__FadeToColor_TypeInfo;
    puVar6 = OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo;
    puVar5 = OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo;
    while( true ) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar14 = FUN_05b10638(local_68,0);
      puVar4 = PTR_DAT_069fbff0;
      if ((uVar14 & 1) == 0) break;
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar10 = (long *)FUN_05b106d8(local_68,0);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*plVar10 + 0x130);
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((bVar1 < bVar2) ||
           (lVar19 = *(long *)(*plVar10 + 200),
           *(long *)(lVar19 + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar10);
        }
        bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
        if (((bVar2 <= bVar1) && (*(long *)(lVar19 + (ulong)bVar2 * 8 + -8) == *(long *)puVar6)) &&
           (uVar14 = FUN_05922e80(plVar10,plVar10,*(undefined8 *)puVar7,0), (uVar14 & 1) == 0)) {
          FUN_0592af58(param_1,plVar10);
        }
      }
    }
    plVar10 = (long *)thunk_FUN_02dd3048(local_68,*(undefined8 *)PTR_DAT_069fbff0);
    local_78 = plVar10;
    if (plVar10 != (long *)0x0) {
      lVar19 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar14 != 0) {
        piVar18 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
            puVar17 = (undefined8 *)(lVar19 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_059267a0;
          }
          uVar14 = uVar14 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar14 != 0);
      }
      puVar17 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar4,0);
LAB_059267a0:
      (*(code *)*puVar17)(plVar10,puVar17[1]);
    }
  }
  if ((*(char *)(param_1 + 0xa0) == '\0') || ((param_3 & 1) == 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (plVar10 = *(long **)(*(long *)(param_1 + 0x20) + 0x28), plVar10 != (long *)0x0)) {
    uVar9 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                                 UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_0400f9fc(uVar13,uVar9,*(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorGoToBack_TypeInfo);
    if (lVar11 != 0) {
      FUN_04010c90(&local_90,lVar11,
                   *(undefined8 *)System_Xml_Serialization_XmlAttributeOverrides_TypeInfo);
      puVar5 = System_Xml_Serialization_XmlAttributeAttribute_TypeInfo;
      while (uVar14 = FUN_05156804(&local_90,*(undefined8 *)puVar5), (uVar14 & 1) != 0) {
        FUN_0592dfb4(param_1,uVar13,local_80);
      }
      FUN_05156800(&local_90,*(undefined8 *)System_Xml_XmlAttribute_TypeInfo);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar19 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar19 != 0)) {
        FUN_058f7a38(lVar19,uVar13,0);
        return;
      }
    }
  }
LAB_059268d4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


