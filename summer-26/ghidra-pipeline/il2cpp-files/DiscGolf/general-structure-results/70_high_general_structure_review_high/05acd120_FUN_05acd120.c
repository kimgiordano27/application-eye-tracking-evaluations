/*
FUNCTION_NAME: FUN_05acd120
ENTRY_POINT: 05acd120
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x05acdccc) */
/* WARNING: Removing unreachable block (ram,0x05acd87c) */
/* WARNING: Removing unreachable block (ram,0x05acdcc8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05acd120(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  undefined8 uVar22;
  
  if ((DAT_06dc1e34 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<bool>_set_value__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069ff8a8);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<JoinLobby>d__10>__
                );
    FUN_02d965b8(System_Xml_Serialization_XmlArrayAttribute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__);
    DAT_06dc1e34 = 1;
  }
  if (param_2 == 0) goto LAB_05acdcb0;
  lVar13 = FUN_05b1b1f4(param_2,0);
  if (lVar13 != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x30) != '\0') {
    FUN_05bfde88(param_1,*(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__,param_2
                 ,0);
    return;
  }
  plVar21 = *(long **)(param_2 + 0x98);
  *(undefined1 *)(param_2 + 0x30) = 1;
  puVar5 = System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
  if (plVar21 == (long *)0x0) {
    if (*(int *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc1dca == '\0') {
      FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
      DAT_06dc1dca = '\x01';
    }
    lVar13 = *(long *)puVar5;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar13 = *(long *)puVar5;
    }
    *(undefined8 *)(param_2 + 0x60) = **(undefined8 **)(lVar13 + 0xb8);
    LeanTween__value();
    if (DAT_06dc1dca == '\0') {
      FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
      DAT_06dc1dca = '\x01';
    }
    lVar13 = *(long *)puVar5;
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar13 = *(long *)puVar5;
    }
    uVar22 = **(undefined8 **)(lVar13 + 0xb8);
    uVar16 = FUN_05b0cb78(param_2,0);
    FUN_05ad22d0(param_1,uVar22,param_2,uVar16,*(undefined8 *)(param_2 + 0xb0),4);
    *(undefined4 *)(param_2 + 0x5c) = 4;
    uVar16 = FUN_05ad36b8(param_1,*(undefined8 *)(param_2 + 0xa0),1);
    puVar15 = (undefined8 *)(param_2 + 0xb8);
    *puVar15 = uVar16;
    uVar16 = LeanTween__value(puVar15,uVar16);
    uVar11 = FUN_05ad3820(uVar16,param_2,0,*puVar15);
    *(undefined4 *)(param_2 + 0x90) = uVar11;
  }
  else {
    lVar13 = *plVar21;
    bVar10 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo + 0x130);
    if ((*(byte *)(lVar13 + 0x130) < bVar10) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar10 * 8 + -8) !=
        *(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo)) {
      bVar10 = *(byte *)(*(long *)
                          OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo +
                        0x130);
      if ((*(byte *)(lVar13 + 0x130) < bVar10) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar10 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar21);
      }
      plVar14 = (long *)(**(code **)(lVar13 + 0x218))(plVar21,*(undefined8 *)(lVar13 + 0x220));
      puVar5 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo;
      if (plVar14 != (long *)0x0) {
        bVar10 = *(byte *)(*(long *)
                            OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo +
                          0x130);
        if ((bVar10 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) ==
            *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo)) {
          plVar14 = (long *)(**(code **)(*plVar21 + 0x218))
                                      (plVar21,*(undefined8 *)(*plVar21 + 0x220));
          if (plVar14 != (long *)0x0) {
            bVar10 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar10) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)puVar5))
            goto LAB_05acdcd4;
          }
          FUN_05ad1bc8(param_1,param_2,plVar21);
          goto LAB_05acd5dc;
        }
      }
      plVar14 = (long *)(**(code **)(*plVar21 + 0x218))(plVar21,*(undefined8 *)(*plVar21 + 0x220));
      if (plVar14 != (long *)0x0) {
        bVar10 = *(byte *)(*(long *)
                            OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo
                          + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar10) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo)) {
LAB_05acdcd4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar14);
        }
      }
      FUN_05ad1fd0(param_1,param_2,plVar21);
    }
    else {
      *(undefined4 *)(param_2 + 0x90) = 0;
      plVar14 = (long *)(**(code **)(*plVar21 + 0x218))(plVar21,*(undefined8 *)(*plVar21 + 0x220));
      puVar5 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
      if (plVar14 != (long *)0x0) {
        bVar10 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo
                          + 0x130);
        if ((bVar10 <= *(byte *)(*plVar14 + 0x130)) &&
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) ==
            *(long *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo)) {
          plVar21 = (long *)(**(code **)(*plVar21 + 0x218))
                                      (plVar21,*(undefined8 *)(*plVar21 + 0x220));
          if (plVar21 != (long *)0x0) {
            bVar10 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar21 + 0x130) < bVar10) ||
               (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)puVar5))
            goto LAB_05acdcdc;
          }
          FUN_05ad154c(param_1,param_2);
          goto LAB_05acd5dc;
        }
      }
      plVar21 = (long *)(**(code **)(*plVar21 + 0x218))(plVar21,*(undefined8 *)(*plVar21 + 0x220));
      if (plVar21 != (long *)0x0) {
        bVar10 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo + 0x130);
        if ((*(byte *)(*plVar21 + 0x130) < bVar10) ||
           (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar10 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo)) {
LAB_05acdcdc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar21);
        }
      }
      FUN_05ad17c0(param_1,param_2);
    }
  }
LAB_05acd5dc:
  lVar13 = FUN_05b0cc10(param_2,0);
  if ((lVar13 != 0) &&
     (plVar21 = (long *)FUN_05b11118(lVar13,0), puVar5 = PTR_DAT_069ff8a8, plVar21 != (long *)0x0))
  {
    lVar13 = *plVar21;
    uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_05acd650;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar15 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)PTR_DAT_069ff8a8,0);
LAB_05acd650:
    plVar21 = (long *)(*(code *)*puVar15)(plVar21,puVar15[1]);
    puVar7 = Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__;
    puVar6 = OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo;
    puVar4 = PTR_DAT_069fbff8;
    if (plVar21 != (long *)0x0) {
      bVar10 = 0;
LAB_05acd694:
      do {
        lVar17 = *plVar21;
        lVar13 = *(long *)puVar4;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar13) {
              puVar15 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_05acd6e0;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(plVar21,lVar13,0);
LAB_05acd6e0:
        uVar19 = (*(code *)*puVar15)(plVar21,puVar15[1]);
        puVar2 = PTR_DAT_069fbff0;
        if ((uVar19 & 1) == 0) {
          plVar21 = (long *)thunk_FUN_02dd3048(plVar21,*(undefined8 *)PTR_DAT_069fbff0);
          if (plVar21 == (long *)0x0) goto LAB_05acd86c;
          lVar13 = *plVar21;
          uVar19 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar19 == 0) goto LAB_05acd844;
          piVar20 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_05acd82c;
        }
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar17 = *plVar21;
        lVar13 = *(long *)puVar4;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar13) {
              puVar15 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_05acd748;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(plVar21,lVar13,1);
LAB_05acd748:
        plVar14 = (long *)(*(code *)*puVar15)(plVar21,puVar15[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0();
        }
        if ((*(int *)((long)plVar14 + 0x6c) == 2) ||
           (plVar14 = (long *)FUN_05b0ab1c(plVar14,0), plVar14 == (long *)0x0)) {
LAB_05acd7cc:
          if (plVar21 == (long *)0x0) break;
          goto LAB_05acd694;
        }
        iVar12 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        if ((bool)(iVar12 == 1 & bVar10)) {
          FUN_05bfde88(param_1,*(undefined8 *)puVar7,param_2,0);
          goto LAB_05acd7cc;
        }
        bVar10 = iVar12 == 1 | bVar10;
      } while (plVar21 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05acdcb0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_05acd82c:
    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
      puVar15 = (undefined8 *)(lVar13 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_05acd860;
    }
  }
LAB_05acd844:
  puVar15 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar2,0);
LAB_05acd860:
  (*(code *)*puVar15)(plVar21,puVar15[1]);
LAB_05acd86c:
  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<JoinLobby>d__10>__
                             );
  FUN_05ae1138(lVar13,0);
  uVar16 = FUN_05ad3890(param_1,param_2);
  if (lVar13 != 0) {
    *(undefined8 *)(lVar13 + 0x80) = uVar16;
    LeanTween__value();
    *(long *)(lVar13 + 0x28) = param_2;
    LeanTween__value((long *)(lVar13 + 0x28),param_2);
    bVar10 = FUN_05b0caf0(param_2,0);
    *(byte *)(lVar13 + 0x72) = bVar10 & 1;
    *(undefined8 *)(lVar13 + 0x30) = *(undefined8 *)(param_2 + 0x68);
    LeanTween__value();
    uVar11 = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)(lVar13 + 0x88) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar13 + 0x90) = uVar11;
    LeanTween__value();
    lVar17 = FUN_05b0cc10(param_2,0);
    if ((lVar17 != 0) && (plVar21 = (long *)FUN_05b11118(lVar17,0), plVar21 != (long *)0x0)) {
      lVar17 = *plVar21;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_05acd974;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar15 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar5,0);
LAB_05acd974:
      plVar21 = (long *)(*(code *)*puVar15)(plVar21,puVar15[1]);
      puVar9 = Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__;
      puVar8 = Method_UnityEngine_UIElements_BaseField<bool>_set_value__;
      puVar2 = Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__;
      puVar7 = Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__;
      puVar6 = OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo;
      puVar4 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
      puVar5 = PTR_DAT_069fbff8;
      do {
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar18 = *plVar21;
        lVar17 = *(long *)puVar5;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar15 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_05acda20;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(plVar21,lVar17,0);
LAB_05acda20:
        uVar19 = (*(code *)*puVar15)(plVar21,puVar15[1]);
        puVar3 = PTR_DAT_069fbff0;
        if ((uVar19 & 1) == 0) {
          plVar21 = (long *)thunk_FUN_02dd3048(plVar21,*(undefined8 *)PTR_DAT_069fbff0);
          if (plVar21 == (long *)0x0) goto LAB_05acdc20;
          lVar17 = *plVar21;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 == 0) goto LAB_05acdbf8;
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_05acdbe0;
        }
        if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar18 = *plVar21;
        lVar17 = *(long *)puVar5;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar15 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_05acda88;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(plVar21,lVar17,1);
LAB_05acda88:
        plVar14 = (long *)(*(code *)*puVar15)(plVar21,puVar15[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar10 = *(byte *)(*(long *)puVar6 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar10) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar10 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar14);
        }
        if (*(int *)((long)plVar14 + 0x6c) == 2) {
          if (*(long *)(lVar13 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar19 = FUN_04e937e4(*(long *)(lVar13 + 0x78),plVar14[0x10],*(undefined8 *)puVar8);
          if ((uVar19 & 1) == 0) {
            if (*(long *)(lVar13 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_04e935f0(*(long *)(lVar13 + 0x78),plVar14[0x10],plVar14[0x10],*(undefined8 *)puVar2)
            ;
          }
        }
        else {
          if (*(long *)(lVar13 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar19 = FUN_04e937e4(*(long *)(lVar13 + 0x60),plVar14[0x10],*(undefined8 *)puVar9);
          if (((uVar19 & 1) == 0) && (plVar14[0x13] != 0)) {
            lVar17 = *(long *)puVar4;
            uVar16 = *(undefined8 *)(plVar14[0x13] + 0x10);
            if (*(int *)(lVar17 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar17 = *(long *)puVar4;
            }
            uVar19 = FUN_05bcaa30(uVar16,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 8),0);
            if ((uVar19 & 1) != 0) {
              lVar17 = *(long *)puVar7;
              lVar18 = plVar14[0x13];
              if (*(int *)(lVar17 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar17 = *(long *)puVar7;
              }
              if (lVar18 != **(long **)(lVar17 + 0xb8)) {
                FUN_05ae16dc(lVar13,plVar14[0x13],0);
              }
            }
          }
        }
      } while( true );
    }
  }
  goto LAB_05acdcb0;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_05acdbe0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
      puVar15 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_05acdc14;
    }
  }
LAB_05acdbf8:
  puVar15 = (undefined8 *)FUN_02dd004c(plVar21,*(long *)puVar3,0);
LAB_05acdc14:
  (*(code *)*puVar15)(plVar21,puVar15[1]);
LAB_05acdc20:
  FUN_05b1b20c(param_2,lVar13,0);
  *(undefined1 *)(param_2 + 0x30) = 0;
  return;
}


