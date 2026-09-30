/*
FUNCTION_NAME: FUN_059235a8
ENTRY_POINT: 059235a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_16;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x059245b0) */
/* WARNING: Removing unreachable block (ram,0x059248e8) */
/* WARNING: Removing unreachable block (ram,0x05923f70) */
/* WARNING: Removing unreachable block (ram,0x059250ac) */
/* WARNING: Removing unreachable block (ram,0x059250a4) */
/* WARNING: Removing unreachable block (ram,0x05925064) */
/* WARNING: Removing unreachable block (ram,0x05925040) */
/* WARNING: Removing unreachable block (ram,0x05923ae0) */
/* WARNING: Removing unreachable block (ram,0x05924fa8) */
/* WARNING: Removing unreachable block (ram,0x05925028) */
/* WARNING: Removing unreachable block (ram,0x05924cc8) */
/* WARNING: Removing unreachable block (ram,0x05924798) */
/* WARNING: Removing unreachable block (ram,0x059242b4) */

void FUN_059235a8(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long *plVar28;
  long *plVar29;
  ulong *puVar30;
  undefined1 auVar31 [16];
  long local_98;
  long **local_90;
  long **local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar7 = PTR_DAT_06a17648;
  puVar4 = PTR_DAT_069fc740;
  if ((DAT_06dc1011 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a17648);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fc740);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069ff8a8);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo)
    ;
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__ClearSkyboxOverride_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroup_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a12a30);
    FUN_02d965b8(PTR_DAT_069fba08);
    FUN_02d965b8(System_Dynamic_BindingRestrictions_TestBuilder_TypeInfo);
    DAT_06dc1011 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_054948a0(uVar12,0);
  *(undefined8 *)(param_1 + 0x38) = uVar12;
  LeanTween__value((undefined8 *)(param_1 + 0x38),uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(uVar12,0);
  puVar13 = (undefined8 *)(param_1 + 0x40);
  *puVar13 = uVar12;
  LeanTween__value(puVar13,uVar12);
  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(lVar14,0);
  plVar28 = (long *)(param_1 + 0x30);
  *plVar28 = lVar14;
  LeanTween__value(plVar28,lVar14);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  Newtonsoft_Json_Utilities_EnumUtils__InternalFlagsFormat(uVar12,0);
  *(undefined8 *)(param_1 + 0x48) = uVar12;
  LeanTween__value((undefined8 *)(param_1 + 0x48),uVar12);
  if ((param_3 != 0) && (plVar15 = *(long **)(param_3 + 0x28), plVar15 != (long *)0x0)) {
    iVar10 = (**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
    if (param_2 == 0) {
      return;
    }
    *(long *)(param_1 + 0x10) = param_2;
    LeanTween__value((long *)(param_1 + 0x10),param_2);
    *(long *)(param_1 + 0x20) = param_3;
    LeanTween__value((long *)(param_1 + 0x20),param_3);
    *(undefined1 *)(param_3 + 0x6e) = 1;
    plVar15 = (long *)FUN_05b185f8(param_2,0);
    if (plVar15 != (long *)0x0) {
      lVar14 = *plVar15;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 != 0) {
        piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_069ff8a8) {
            puVar16 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
            goto System_Runtime_Serialization_GenericNameProvider__GetNamespaces;
          }
          uVar25 = uVar25 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar25 != 0);
      }
      puVar16 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)PTR_DAT_069ff8a8,0);
System_Runtime_Serialization_GenericNameProvider__GetNamespaces:
      puVar7 = PTR_DAT_069fbff8;
      plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
      local_90 = &local_68;
      local_98 = 0;
      local_88 = &local_70;
      local_68 = plVar15;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *plVar15;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 != 0) {
        piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
            puVar16 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_059238f0;
          }
          uVar25 = uVar25 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar25 != 0);
      }
      puVar16 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)puVar7,0);
LAB_059238f0:
      uVar25 = (*(code *)*puVar16)(plVar15,puVar16[1]);
      plVar15 = local_68;
      if ((uVar25 & 1) != 0) {
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar14 = *local_68;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
              puVar16 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto System_Runtime_Serialization_GenericNameProvider__GetGenericTypeName;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        puVar16 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,1);
System_Runtime_Serialization_GenericNameProvider__GetGenericTypeName:
        plVar15 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroup_TypeInfo + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)System_Xml_Schema_XmlSchemaGroup_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar15);
        }
        plVar29 = (long *)(param_1 + 0x28);
        *plVar29 = plVar15[0xd];
        LeanTween__value(plVar29);
        lVar14 = *plVar29;
        if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) == 0)) {
          *plVar29 = *(long *)System_Dynamic_BindingRestrictions_TestBuilder_TypeInfo;
          LeanTween__value(plVar29);
          lVar14 = *plVar29;
        }
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = FUN_05bbed9c(lVar14,0);
        FUN_058d0d30(param_3,uVar12,0);
        plVar29 = (long *)(param_3 + 0x50);
        lVar14 = plVar15[9];
        if ((*plVar29 == 0) || (*(int *)(*plVar29 + 0x10) == 0)) {
          if (lVar14 == 0) {
            lVar14 = **(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          }
          *plVar29 = lVar14;
          LeanTween__value(plVar29);
        }
      }
      puVar5 = PTR_DAT_069fbff0;
      plVar15 = (long *)thunk_FUN_02dd3048(local_68,*(undefined8 *)PTR_DAT_069fbff0);
      local_70 = plVar15;
      if (plVar15 != (long *)0x0) {
        lVar14 = *plVar15;
        uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar25 != 0) {
          piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
              puVar16 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_05923ac8;
            }
            uVar25 = uVar25 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar25 != 0);
        }
        puVar16 = (undefined8 *)FUN_02dd004c(plVar15,*(long *)puVar5,0);
LAB_05923ac8:
        (*(code *)*puVar16)(plVar15,puVar16[1]);
      }
      puVar5 = OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo;
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                   OVR_OpenVR_IVRChaperoneSetup__GetWorkingCollisionBoundsInfo_TypeInfo
                                 );
      FUN_05b08194(lVar14,0);
      plVar15 = (long *)(param_1 + 0x50);
      *plVar15 = lVar14;
      LeanTween__value(plVar15,lVar14);
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_05b08194(lVar14,0);
      plVar17 = (long *)(param_1 + 0x58);
      *plVar17 = lVar14;
      LeanTween__value(plVar17,lVar14);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_054948a0(uVar12,0);
      *(undefined8 *)(param_1 + 0x68) = uVar12;
      LeanTween__value((undefined8 *)(param_1 + 0x68),uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_054948a0(uVar12,0);
      *(undefined8 *)(param_1 + 0x60) = uVar12;
      LeanTween__value((undefined8 *)(param_1 + 0x60),uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_054948a0(uVar12,0);
      *(undefined8 *)(param_1 + 0x70) = uVar12;
      LeanTween__value((undefined8 *)(param_1 + 0x70),uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_054948a0(uVar12,0);
      *(undefined8 *)(param_1 + 0x78) = uVar12;
      LeanTween__value((undefined8 *)(param_1 + 0x78),uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose_TypeInfo
                                 );
      FUN_04e92874(uVar12,*(undefined8 *)
                           OVR_OpenVR_IVRChaperoneSetup__SetWorkingPlayAreaSize_TypeInfo);
      *(undefined8 *)(param_1 + 0x88) = uVar12;
      LeanTween__value((undefined8 *)(param_1 + 0x88),uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_054948a0(uVar12,0);
      puVar16 = (undefined8 *)(param_1 + 0x98);
      *puVar16 = uVar12;
      LeanTween__value(puVar16,uVar12);
      plVar29 = *(long **)(param_3 + 0x28);
      if (plVar29 != (long *)0x0) {
        plVar29 = (long *)(**(code **)(*plVar29 + 0x1e8))(plVar29,*(undefined8 *)(*plVar29 + 0x1f0))
        ;
        puVar5 = 
        System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
        ;
        puVar4 = 
        System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
        ;
        local_90 = &local_68;
        local_88 = &local_70;
        local_98 = 0;
        plVar24 = (long *)PTR_DAT_069fbff0;
        do {
          PTR_DAT_069fbff0 = (undefined *)plVar24;
          local_68 = plVar29;
          if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar14 = *plVar29;
          uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                puVar18 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_05923cc4;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          puVar18 = (undefined8 *)FUN_02dd004c(plVar29,*(long *)puVar7,0);
LAB_05923cc4:
          uVar25 = (*(code *)*puVar18)(plVar29,puVar18[1]);
          plVar29 = local_68;
          if ((uVar25 & 1) == 0) {
            plVar29 = (long *)thunk_FUN_02dd3048(*local_90,*plVar24);
            *local_88 = plVar29;
            if (plVar29 == (long *)0x0) goto LAB_05924070;
            lVar14 = *plVar29;
            uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar25 == 0) goto LAB_05924048;
            piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_05924030;
          }
          if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar14 = *local_68;
          uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                puVar18 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_05923d2c;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          puVar18 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,1);
LAB_05923d2c:
          plVar29 = (long *)(*(code *)*puVar18)(plVar29,puVar18[1]);
          if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar29 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0();
          }
          plVar29 = (long *)plVar29[8];
          if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          plVar29 = (long *)(**(code **)(*plVar29 + 0x1e8))
                                      (plVar29,*(undefined8 *)(*plVar29 + 0x1f0));
joined_r0x05923d8c:
          local_78 = plVar29;
          if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar14 = *plVar29;
          uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar25 != 0) {
            piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                puVar18 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_05923ddc;
              }
              uVar25 = uVar25 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar25 != 0);
          }
          puVar18 = (undefined8 *)FUN_02dd004c(plVar29,*(long *)puVar7,0);
LAB_05923ddc:
          uVar25 = (*(code *)*puVar18)(plVar29,puVar18[1]);
          plVar29 = local_78;
          if ((uVar25 & 1) != 0) {
            if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar14 = *local_78;
            uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                  puVar18 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                  goto LAB_05923e44;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar18 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar7,1);
LAB_05923e44:
            plVar19 = (long *)(*(code *)*puVar18)(plVar29,puVar18[1]);
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar19);
            }
            plVar29 = local_78;
            if (((plVar19[0x1a] != 0) && (lVar14 = *(long *)(plVar19[0x1a] + 0x28), lVar14 != 0)) &&
               (*(int *)(lVar14 + 0x10) != 0)) {
              plVar29 = (long *)*puVar16;
              uVar12 = FUN_05918020();
              if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860(uVar12,uVar12);
              }
              (**(code **)(*plVar29 + 0x308))
                        (plVar29,uVar12,plVar19,*(undefined8 *)(*plVar29 + 0x310));
              plVar29 = local_78;
            }
            goto joined_r0x05923d8c;
          }
          plVar19 = (long *)thunk_FUN_02dd3048(local_78,*plVar24);
          plVar29 = local_68;
          plVar24 = (long *)PTR_DAT_069fbff0;
          local_70 = plVar19;
          if (plVar19 != (long *)0x0) {
            lVar14 = *plVar19;
            uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_069fbff0) {
                  puVar18 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_05923f50;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar18 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)PTR_DAT_069fbff0,0);
LAB_05923f50:
            (*(code *)*puVar18)(plVar19,puVar18[1]);
            plVar29 = local_68;
            plVar24 = (long *)PTR_DAT_069fbff0;
          }
        } while( true );
      }
    }
  }
  goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar27 = piVar27 + 4;
    if (uVar25 == 0) break;
LAB_05924030:
    if (*(long *)(piVar27 + -2) == *plVar24) {
      puVar16 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_05924064;
    }
  }
LAB_05924048:
  puVar16 = (undefined8 *)FUN_02dd004c(plVar29,*plVar24,0);
LAB_05924064:
  (*(code *)*puVar16)(plVar29,puVar16[1]);
LAB_05924070:
  if (local_98 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(local_98);
  }
  plVar29 = (long *)FUN_05b185f8(param_2,0);
  puVar4 = PTR_DAT_069fbff0;
  if (plVar29 != (long *)0x0) {
    lVar14 = *plVar29;
    uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar25 != 0) {
      piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar16 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_059240f4;
        }
        uVar25 = uVar25 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar25 != 0);
    }
    puVar16 = (undefined8 *)FUN_02dd004c(plVar29,*(long *)PTR_DAT_069ff8a8,0);
LAB_059240f4:
    local_68 = (long *)(*(code *)*puVar16)(plVar29,puVar16[1]);
    puVar5 = System_Xml_Schema_XmlSchemaGroup_TypeInfo;
    local_90 = &local_68;
    local_98 = 0;
    local_88 = &local_70;
    do {
      plVar29 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *local_68;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 != 0) {
        piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
            puVar16 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_05924170;
          }
          uVar25 = uVar25 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar25 != 0);
      }
      puVar16 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,0);
LAB_05924170:
      uVar25 = (*(code *)*puVar16)(plVar29,puVar16[1]);
      plVar29 = local_68;
      if ((uVar25 & 1) == 0) {
        plVar29 = (long *)thunk_FUN_02dd3048(local_68,*(undefined8 *)puVar4);
        local_70 = plVar29;
        if (plVar29 == (long *)0x0) goto LAB_059242a8;
        lVar22 = *plVar29;
        lVar14 = *(long *)puVar4;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 == 0) goto LAB_05924280;
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto System_Runtime_Serialization_DataContractSerializer__get_SerializeReadOnlyTypes;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar14 = *local_68;
      uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar25 != 0) {
        piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
            puVar16 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_059241d8;
          }
          uVar25 = uVar25 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar25 != 0);
      }
      puVar16 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,1);
LAB_059241d8:
      plVar29 = (long *)(*(code *)*puVar16)(plVar29,puVar16[1]);
      if (plVar29 != (long *)0x0) {
        lVar14 = *(long *)puVar5;
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(*plVar29 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar29);
        }
      }
      FUN_0591ff90(param_1,plVar29);
    } while( true );
  }
  goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar27 = piVar27 + 4;
    if (uVar25 == 0) break;
System_Runtime_Serialization_DataContractSerializer__get_SerializeReadOnlyTypes:
    if (*(long *)(piVar27 + -2) == lVar14) {
      puVar16 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_0592429c;
    }
  }
LAB_05924280:
  puVar16 = (undefined8 *)FUN_02dd004c(plVar29,lVar14,0);
LAB_0592429c:
  (*(code *)*puVar16)(plVar29,puVar16[1]);
LAB_059242a8:
  uVar25 = FUN_05922fd8(param_1,*(undefined8 *)(param_1 + 0x58));
  puVar30 = (ulong *)(param_1 + 0x18);
  *puVar30 = uVar25;
  uVar12 = LeanTween__value(puVar30,uVar25);
  uVar25 = *puVar30;
  if (uVar25 == 0) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      *(undefined1 *)(param_3 + 0x6b) = 1;
    }
  }
  else {
    lVar14 = FUN_05925434(uVar12,uVar25,
                          *(undefined8 *)OVR_OpenVR_IVRCompositor__CompositorBringToFront_TypeInfo,
                          *(undefined8 *)PTR_DAT_069fba08);
    if (lVar14 != 0) {
      if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo + 0xe4
                  ) == 0) {
        thunk_FUN_02df485c();
      }
      uVar12 = FUN_05bbed9c(lVar14,0);
      *(undefined8 *)(param_3 + 0x70) = uVar12;
      LeanTween__value();
    }
  }
  lVar14 = thunk_FUN_02dd3144(*(undefined8 *)OVR_OpenVR_IVRCompositor__ClearSkyboxOverride_TypeInfo)
  ;
  FUN_0400f984(lVar14,*(undefined8 *)OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
  if (*(char *)(param_3 + 0x8c) != '\0') {
    iVar11 = FUN_05922c70(param_1,*(undefined8 *)(param_1 + 0x58));
    if (iVar11 == 0) {
      uVar12 = FUN_058d0630(0);
LAB_05925088:
      uVar21 = thunk_FUN_02dfd288(OVR_OpenVR_IVRCompositor__CompositorDumpImages_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,uVar21);
    }
    if (1 < iVar11) {
      uVar12 = FUN_058d0670(0);
      goto LAB_05925088;
    }
    plVar29 = (long *)FUN_059254b4(param_1,*(undefined8 *)(param_1 + 0x18));
    if (plVar29 == (long *)0x0)
    goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0x130);
    if ((*(byte *)(*plVar29 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0();
    }
    if ((plVar29[0x14] != 0) && (lVar22 = FUN_059227e4(), lVar22 != 0)) {
      local_80 = (long *)FUN_05b10330(lVar22,0);
      puVar9 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo;
      puVar8 = OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo;
      puVar4 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
      local_90 = &local_80;
      local_98 = 0;
      local_88 = &local_70;
joined_r0x05924408:
      do {
        do {
          do {
            if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar20 = FUN_05b10638(local_80,0);
            if ((uVar20 & 1) == 0) {
              plVar29 = (long *)thunk_FUN_02dd3048(local_80,*(undefined8 *)PTR_DAT_069fbff0);
              local_70 = plVar29;
              if (plVar29 == (long *)0x0) goto LAB_059245b4;
              lVar22 = *plVar29;
              uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
              if (uVar20 == 0) goto LAB_0592457c;
              piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              goto LAB_05924564;
            }
            if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            plVar29 = (long *)FUN_05b106d8(local_80,0);
          } while (plVar29 == (long *)0x0);
          bVar1 = *(byte *)(*plVar29 + 0x130);
          bVar2 = *(byte *)(*(long *)puVar8 + 0x130);
          if ((bVar1 < bVar2) ||
             (lVar22 = *(long *)(*plVar29 + 200),
             *(long *)(lVar22 + (ulong)bVar2 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0();
          }
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        } while ((bVar1 < bVar2) || (*(long *)(lVar22 + (ulong)bVar2 * 8 + -8) != *(long *)puVar4));
        if (plVar29[0x14] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar22 = *(long *)(plVar29[0x14] + 0x10);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      } while (*(int *)(lVar22 + 0x10) == 0);
      if (lVar14 != 0) {
        lVar23 = *(long *)(lVar14 + 0x10);
        lVar22 = plVar29[0x18];
        lVar26 = *(long *)puVar9;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar23 != 0) {
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar3 + 1;
            *(long *)(lVar23 + (long)(int)uVar3 * 8 + 0x20) = lVar22;
            LeanTween__value();
          }
          else {
            FUN_040101ec(lVar14,lVar22,
                         *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x05924408;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  goto LAB_059245b4;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar27 = piVar27 + 4;
    if (uVar20 == 0) break;
LAB_05924564:
    if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar16 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_05924598;
    }
  }
LAB_0592457c:
  puVar16 = (undefined8 *)FUN_02dd004c(plVar29,*(long *)PTR_DAT_069fbff0,0);
LAB_05924598:
  (*(code *)*puVar16)(plVar29,puVar16[1]);
LAB_059245b4:
  if (*plVar17 != 0) {
    local_80 = (long *)FUN_05b10330(*plVar17,0);
    puVar9 = OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo;
    puVar8 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
    puVar4 = PTR_DAT_06a12a30;
    local_90 = &local_80;
    local_98 = 0;
    local_88 = &local_70;
joined_r0x059246fc:
    do {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar20 = FUN_05b10638(local_80,0);
      puVar6 = PTR_DAT_069fbff0;
      if ((uVar20 & 1) == 0) {
        plVar29 = (long *)thunk_FUN_02dd3048(local_80,*(undefined8 *)PTR_DAT_069fbff0);
        local_70 = plVar29;
        if (plVar29 == (long *)0x0) goto LAB_0592478c;
        lVar14 = *plVar29;
        uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar20 == 0) goto LAB_05924764;
        piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_0592474c;
      }
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar29 = (long *)FUN_05b106d8(local_80,0);
      if (plVar29 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
        if ((*(byte *)(*plVar29 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar29);
        }
      }
      plVar24 = (long *)*puVar30;
    } while (plVar29 == plVar24);
    plVar19 = plVar29;
    if ((plVar24 != (long *)0x0) && (*(char *)(param_3 + 0x8c) != '\0')) {
      if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (plVar24[5] != plVar29[5]) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar19 = (long *)FUN_04010588(lVar14,plVar29[0x18],*(undefined8 *)puVar9);
        if (((ulong)plVar19 & 1) == 0) goto joined_r0x059246fc;
      }
    }
    uVar12 = FUN_05921708(plVar19,plVar29);
    if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (plVar29[0x18] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar24 = (long *)*puVar13;
    uVar12 = FUN_0536d554(*(undefined8 *)(plVar29[0x18] + 0x18),*(undefined8 *)puVar4,uVar12,0);
    if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar12,uVar12);
    }
    auVar31 = (**(code **)(*plVar24 + 0x348))(plVar24,uVar12,*(undefined8 *)(*plVar24 + 0x350));
    if ((auVar31._0_8_ & 1) == 0) {
      FUN_05925798(param_1,plVar29);
    }
    else {
      FUN_05921624(param_1,auVar31._8_8_,plVar29);
    }
    goto joined_r0x059246fc;
  }
  goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar27 = piVar27 + 4;
    if (uVar20 == 0) break;
LAB_0592474c:
    if (*(long *)(piVar27 + -2) == *(long *)puVar6) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_05924780;
    }
  }
LAB_05924764:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar29,*(long *)puVar6,0);
LAB_05924780:
  (*(code *)*puVar13)(plVar29,puVar13[1]);
LAB_0592478c:
  if (*puVar30 != 0) {
    FUN_05925910(param_1,*puVar30,iVar10 == 0);
  }
  if (*plVar15 != 0) {
    local_80 = (long *)FUN_05b10330(*plVar15,0);
    puVar8 = OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
    puVar4 = PTR_DAT_069fbff0;
    local_90 = &local_80;
    local_98 = 0;
    local_88 = &local_70;
    while( true ) {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar20 = FUN_05b10638(local_80,0);
      if ((uVar20 & 1) == 0) break;
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar15 = (long *)FUN_05b106d8(local_80,0);
      if (plVar15 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar15);
        }
      }
      FUN_05926a90(param_1,plVar15,0);
    }
    plVar15 = (long *)thunk_FUN_02dd3048(local_80,*(undefined8 *)puVar4);
    local_70 = plVar15;
    if (plVar15 != (long *)0x0) {
      lVar22 = *plVar15;
      lVar14 = *(long *)puVar4;
      uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar20 != 0) {
        piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar14) {
            puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_059248d0;
          }
          uVar20 = uVar20 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar20 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(plVar15,lVar14,0);
LAB_059248d0:
      (*(code *)*puVar13)(plVar15,puVar13[1]);
    }
    puVar8 = 
    System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
    ;
    puVar4 = PTR_DAT_069fb9c0;
    plVar15 = (long *)*plVar28;
    if (plVar15 != (long *)0x0) {
      iVar10 = 0;
      while (iVar11 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0)),
            iVar10 < iVar11) {
        plVar15 = (long *)*plVar28;
        if (plVar15 == (long *)0x0)
        goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
        plVar15 = (long *)(**(code **)(*plVar15 + 0x2e8))
                                    (plVar15,iVar10,*(undefined8 *)(*plVar15 + 0x2f0));
        if (plVar15 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar15);
          }
        }
        plVar29 = *(long **)(param_1 + 0x80);
        if ((plVar29 == (long *)0x0) ||
           (plVar29 = (long *)(**(code **)(*plVar29 + 0x2f8))
                                        (plVar29,plVar15,*(undefined8 *)(*plVar29 + 0x300)),
           plVar15 == (long *)0x0))
        goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
        if ((plVar29 != (long *)0x0) && (*plVar29 != *(long *)(puVar4 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar29);
        }
        FUN_058c48ac(plVar15,plVar29,0);
        plVar15 = (long *)*plVar28;
        iVar10 = iVar10 + 1;
        if (plVar15 == (long *)0x0)
        goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
      }
      plVar28 = *(long **)(param_3 + 0x28);
      if (plVar28 != (long *)0x0) {
        plVar28 = (long *)(**(code **)(*plVar28 + 0x1e8))(plVar28,*(undefined8 *)(*plVar28 + 0x1f0))
        ;
        puVar8 = 
        System_Collections_Generic_Dictionary<FixedString128Bytes,_EventMetricFactory_IEventMetricFactory>_TypeInfo
        ;
        puVar4 = PTR_DAT_069fbff0;
        local_90 = &local_68;
        local_98 = 0;
        local_88 = &local_70;
        goto joined_r0x059249fc;
      }
    }
  }
  goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
joined_r0x059249fc:
  local_68 = plVar28;
  if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar14 = *plVar28;
  uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar20 != 0) {
    piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
        puVar13 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
        goto LAB_05924a58;
      }
      uVar20 = uVar20 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar20 != 0);
  }
  puVar13 = (undefined8 *)FUN_02dd004c(plVar28,*(long *)puVar7,0);
LAB_05924a58:
  uVar20 = (*(code *)*puVar13)(plVar28,puVar13[1]);
  plVar28 = local_68;
  if ((uVar20 & 1) == 0) {
    plVar28 = (long *)thunk_FUN_02dd3048(local_68,*(undefined8 *)puVar4);
    local_70 = plVar28;
    if (plVar28 == (long *)0x0) goto LAB_05924cbc;
    lVar22 = *plVar28;
    lVar14 = *(long *)puVar4;
    uVar20 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar20 == 0) goto LAB_05924c94;
    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    goto LAB_05924c7c;
  }
  if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar14 = *local_68;
  uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar20 != 0) {
    piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
        puVar13 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
        goto LAB_05924ac0;
      }
      uVar20 = uVar20 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar20 != 0);
  }
  puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,1);
LAB_05924ac0:
  plVar15 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  bVar1 = *(byte *)(*(long *)puVar8 + 0x130);
  if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96be0(plVar15);
  }
  if (plVar15[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar28 = local_68;
  if (*(long *)(plVar15[0x31] + 0x18) == 0) {
    uVar12 = FUN_058ae3f4(plVar15,0);
    uVar20 = thunk_FUN_0536b75c(uVar12,*(undefined8 *)(param_3 + 0x50),0);
    plVar28 = local_68;
    if ((uVar20 & 1) != 0) {
      plVar28 = (long *)FUN_058b40dc(plVar15,0);
      if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      for (iVar10 = 0;
          iVar11 = (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0)),
          iVar10 < iVar11; iVar10 = iVar10 + 1) {
        plVar29 = (long *)(**(code **)(*plVar28 + 0x208))
                                    (plVar28,iVar10,*(undefined8 *)(*plVar28 + 0x210));
        if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar20 = (**(code **)(*plVar29 + 0x1d8))(plVar29,*(undefined8 *)(*plVar29 + 0x1e0));
        if ((uVar20 & 1) != 0) {
          uVar12 = FUN_058ae3f4(plVar15,0);
          plVar29 = (long *)(**(code **)(*plVar28 + 0x208))
                                      (plVar28,iVar10,*(undefined8 *)(*plVar28 + 0x210));
          if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar14 = (**(code **)(*plVar29 + 0x188))(plVar29,*(undefined8 *)(*plVar29 + 400));
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar21 = FUN_058ae3f4(lVar14,0);
          uVar20 = thunk_FUN_0536b75c(uVar12,uVar21,0);
          if ((uVar20 & 1) != 0) {
            plVar29 = (long *)(**(code **)(*plVar28 + 0x208))
                                        (plVar28,iVar10,*(undefined8 *)(*plVar28 + 0x210));
            if (plVar29 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar14 = (**(code **)(*plVar29 + 0x188))(plVar29,*(undefined8 *)(*plVar29 + 400));
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(undefined8 *)(lVar14 + 0x98) = 0;
            LeanTween__value((undefined8 *)(lVar14 + 0x98),0);
          }
        }
      }
      plVar15[0x13] = 0;
      LeanTween__value(plVar15 + 0x13,0);
      plVar28 = local_68;
    }
  }
  goto joined_r0x059249fc;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar27 = piVar27 + 4;
    if (uVar20 == 0) break;
LAB_05924c7c:
    if (*(long *)(piVar27 + -2) == lVar14) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_05924cb0;
    }
  }
LAB_05924c94:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar28,lVar14,0);
LAB_05924cb0:
  (*(code *)*puVar13)(plVar28,puVar13[1]);
LAB_05924cbc:
  if (*(long *)(param_3 + 0x28) != 0) {
    lVar14 = FUN_058ee590(*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x40),
                          *(undefined8 *)(param_3 + 0x50),0);
    if (lVar14 != 0) {
      *(undefined1 *)(lVar14 + 0xb0) = 1;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') {
      plVar28 = *(long **)(param_3 + 0x28);
      if (plVar28 == (long *)0x0)
      goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
      iVar10 = (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
      if ((iVar10 == 0) &&
         (uVar20 = FUN_0536b7a8(*(undefined8 *)(param_3 + 0x40),
                                *(undefined8 *)
                                 System_Dynamic_BindingRestrictions_TestBuilder_TypeInfo,4,0),
         (uVar20 & 1) != 0)) {
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0)
        goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
        uVar12 = (**(code **)(*plVar17 + 0x308))(plVar17,0,*(undefined8 *)(*plVar17 + 0x310));
        puVar4 = OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
        lVar14 = FUN_02979eb8(uVar12,*(undefined8 *)
                                      OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
        if (lVar14 == 0) goto System_Runtime_Serialization_DataContractSerializer__WriteEndObject;
        lVar14 = FUN_02979eb8(uVar12,*(undefined8 *)puVar4);
        uVar12 = *(undefined8 *)(lVar14 + 0x98);
        if (*(int *)(*(long *)System_Collections_Generic_Dictionary<OVRGrabbable,_int>_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = FUN_05bbed9c(uVar12,0);
        FUN_058d0d30(param_3,uVar12,0);
      }
    }
    *(undefined1 *)(param_3 + 0x6e) = 0;
    if (uVar25 != 0) {
      return;
    }
    plVar28 = *(long **)(param_3 + 0x28);
    if (plVar28 != (long *)0x0) {
      iVar10 = (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
      if (iVar10 < 1) {
        lVar14 = FUN_05b185f8(param_2,0);
        if (lVar14 != 0) {
          local_68 = (long *)FUN_0297bd6c(0,*(undefined8 *)PTR_DAT_069ff8a8,lVar14);
          local_90 = &local_68;
          local_98 = 0;
          local_88 = &local_70;
          do {
            plVar28 = local_68;
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar14 = *local_68;
            uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar27 * 0x10 + 0x138);
                  goto LAB_05924ecc;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,0);
LAB_05924ecc:
            uVar25 = (*(code *)*puVar13)(plVar28,puVar13[1]);
            plVar28 = local_68;
            if ((uVar25 & 1) == 0) {
              FUN_02978ec0(&local_98);
              return;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar14 = *local_68;
            uVar25 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar25 != 0) {
              piVar27 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar27 + -2) == *(long *)puVar7) {
                  puVar13 = (undefined8 *)(lVar14 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                  goto LAB_05924f34;
                }
                uVar25 = uVar25 - 1;
                piVar27 = piVar27 + 4;
              } while (uVar25 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar7,1);
LAB_05924f34:
            plVar28 = (long *)(*(code *)*puVar13)(plVar28,puVar13[1]);
            if (plVar28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar14 = *(long *)puVar5;
            bVar1 = *(byte *)(lVar14 + 0x130);
            if ((*(byte *)(*plVar28 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0();
            }
            FUN_058d4e14(param_3,plVar28[9],0);
          } while( true );
        }
      }
      else if ((*(long *)(param_3 + 0x28) != 0) &&
              (lVar14 = System_Xml_XmlConverter__ToString(*(long *)(param_3 + 0x28),0,0),
              lVar14 != 0)) {
        uVar12 = FUN_058ae3f4(lVar14,0);
        FUN_058d4e14(param_3,uVar12,0);
        if ((*(long *)(param_3 + 0x28) != 0) &&
           (lVar14 = System_Xml_XmlConverter__ToString(*(long *)(param_3 + 0x28),0,0), lVar14 != 0))
        {
          FUN_058d52b4(param_3,*(undefined8 *)(lVar14 + 0xa0),0);
          return;
        }
      }
    }
  }
System_Runtime_Serialization_DataContractSerializer__WriteEndObject:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


