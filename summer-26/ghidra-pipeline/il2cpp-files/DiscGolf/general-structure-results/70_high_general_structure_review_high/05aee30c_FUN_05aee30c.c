/*
FUNCTION_NAME: FUN_05aee30c
ENTRY_POINT: 05aee30c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x05aeebf0) */
/* WARNING: Removing unreachable block (ram,0x05aeecc8) */
/* WARNING: Removing unreachable block (ram,0x05aeec20) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05aee30c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 uVar20;
  
  if ((DAT_06dc1eac & 1) == 0) {
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
    DAT_06dc1eac = 1;
  }
  if (param_2 != 0) {
    lVar11 = FUN_05b1b1f4(param_2,0);
    if (lVar11 != 0) {
      return;
    }
    if (*(char *)(param_2 + 0x30) != '\0') {
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__,
                   param_2,0);
      return;
    }
    plVar19 = *(long **)(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0x30) = 1;
    puVar2 = System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
    if (plVar19 == (long *)0x0) {
      if (*(int *)(*(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc1dca == '\0') {
        FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
        DAT_06dc1dca = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar11 = *(long *)puVar2;
      }
      *(undefined8 *)(param_2 + 0x60) = **(undefined8 **)(lVar11 + 0xb8);
      LeanTween__value((undefined8 *)(param_2 + 0x60));
      if (DAT_06dc1dca == '\0') {
        FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
        DAT_06dc1dca = '\x01';
      }
      lVar11 = *(long *)puVar2;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar11 = *(long *)puVar2;
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar20 = **(undefined8 **)(lVar11 + 0xb8);
      uVar14 = FUN_05b0cb78(param_2,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05af4f74(param_1,uVar20,param_2,uVar14,*(undefined8 *)(param_2 + 0xb0),4);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined4 *)(param_2 + 0x5c) = 4;
      uVar14 = FUN_05af63d8(param_1,*(undefined8 *)(param_2 + 0xa0));
      *(undefined8 *)(param_2 + 0xb8) = uVar14;
      uVar14 = LeanTween__value((undefined8 *)(param_2 + 0xb8));
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = FUN_05af6538(uVar14,param_2,0,*(undefined8 *)(param_2 + 0xb8));
      *(undefined4 *)(param_2 + 0x90) = uVar10;
    }
    else {
      lVar11 = *plVar19;
      bVar9 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo + 0x130);
      if ((*(byte *)(lVar11 + 0x130) < bVar9) ||
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar9 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo)) {
        bVar9 = *(byte *)(*(long *)
                           OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo +
                         0x130);
        if ((*(byte *)(lVar11 + 0x130) < bVar9) ||
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar9 * 8 + -8) !=
            *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar19);
        }
        plVar12 = (long *)(**(code **)(lVar11 + 0x218))(plVar19,*(undefined8 *)(lVar11 + 0x220));
        puVar2 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo;
        if (plVar12 != (long *)0x0) {
          bVar9 = *(byte *)(*(long *)
                             OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo +
                           0x130);
          if ((bVar9 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) ==
              *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo)) {
            plVar12 = (long *)(**(code **)(*plVar19 + 0x218))
                                        (plVar19,*(undefined8 *)(*plVar19 + 0x220));
            if (plVar12 != (long *)0x0) {
              bVar9 = *(byte *)(*(long *)puVar2 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar9) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar2))
              {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar12);
              }
            }
            FUN_05af48c8(param_1,param_2,plVar19);
            goto LAB_05aee7f4;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar19 + 0x218))(plVar19,*(undefined8 *)(*plVar19 + 0x220))
        ;
        if (plVar12 != (long *)0x0) {
          bVar9 = *(byte *)(*(long *)
                             OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar9) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) !=
              *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar12);
          }
        }
        FUN_05af4c80(param_1,param_2,plVar19);
      }
      else {
        *(undefined4 *)(param_2 + 0x90) = 0;
        plVar12 = (long *)(**(code **)(*plVar19 + 0x218))(plVar19,*(undefined8 *)(*plVar19 + 0x220))
        ;
        puVar2 = OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
        if (plVar12 != (long *)0x0) {
          bVar9 = *(byte *)(*(long *)
                             OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo +
                           0x130);
          if ((bVar9 <= *(byte *)(*plVar12 + 0x130)) &&
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) ==
              *(long *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo)) {
            plVar19 = (long *)(**(code **)(*plVar19 + 0x218))
                                        (plVar19,*(undefined8 *)(*plVar19 + 0x220));
            if (plVar19 != (long *)0x0) {
              bVar9 = *(byte *)(*(long *)puVar2 + 0x130);
              if ((*(byte *)(*plVar19 + 0x130) < bVar9) ||
                 (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar2))
              {
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(plVar19);
              }
            }
            FUN_05af424c(param_1,param_2);
            goto LAB_05aee7f4;
          }
        }
        plVar19 = (long *)(**(code **)(*plVar19 + 0x218))(plVar19,*(undefined8 *)(*plVar19 + 0x220))
        ;
        if (plVar19 != (long *)0x0) {
          bVar9 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar9) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar9 * 8 + -8) !=
              *(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar19);
          }
        }
        FUN_05af44c0(param_1,param_2);
      }
    }
LAB_05aee7f4:
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar13 = FUN_05b0cd2c(param_2,1,0);
    if ((uVar13 & 1) != 0) {
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__,
                   param_2,0);
    }
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_Start<AutoMatchmakingNGO_<JoinLobby>d__10>__
                               );
    FUN_05ae1138();
    uVar14 = FUN_05af65a8(param_1,param_2);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar11 + 0x80) = uVar14;
    LeanTween__value();
    *(long *)(lVar11 + 0x28) = param_2;
    LeanTween__value();
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    bVar9 = FUN_05b0caf0(param_2,0);
    *(byte *)(lVar11 + 0x72) = bVar9 & 1;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(param_2 + 0x68);
    LeanTween__value();
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar10 = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)(lVar11 + 0x88) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar11 + 0x90) = uVar10;
    LeanTween__value();
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = FUN_05b0cc10(param_2,0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar19 = (long *)FUN_05b11118(lVar15,0);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = *plVar19;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069ff8a8) {
          puVar16 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05aee938;
        }
        uVar13 = uVar13 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)PTR_DAT_069ff8a8,0);
LAB_05aee938:
    plVar19 = (long *)(*(code *)*puVar16)(plVar19,puVar16[1]);
    puVar8 = Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__;
    puVar7 = Method_UnityEngine_UIElements_BaseField<bool>_set_value__;
    puVar6 = Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__;
    puVar5 = Method_UnityEngine_UIElements_BaseCompositeField<Vector4,_FloatField,_float>__ctor__;
    puVar4 = OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo;
    puVar3 = System_Xml_Serialization_XmlArrayAttribute_TypeInfo;
    puVar2 = PTR_DAT_069fbff8;
    do {
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar17 = *plVar19;
      lVar15 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar16 = (undefined8 *)(lVar17 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_05aee9e4;
          }
          uVar13 = uVar13 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_02dd004c(plVar19,lVar15,0);
LAB_05aee9e4:
      uVar13 = (*(code *)*puVar16)(plVar19,puVar16[1]);
      puVar1 = PTR_DAT_069fbff0;
      if ((uVar13 & 1) == 0) {
        plVar19 = (long *)thunk_FUN_02dd3048(plVar19,*(undefined8 *)PTR_DAT_069fbff0);
        if (plVar19 == (long *)0x0) goto LAB_05aeebe4;
        lVar15 = *plVar19;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 == 0) goto LAB_05aeebbc;
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_05aeeba4;
      }
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar17 = *plVar19;
      lVar15 = *(long *)puVar2;
      uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar13 != 0) {
        piVar18 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar15) {
            puVar16 = (undefined8 *)(lVar17 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_05aeea4c;
          }
          uVar13 = uVar13 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)FUN_02dd004c(plVar19,lVar15,1);
LAB_05aeea4c:
      plVar12 = (long *)(*(code *)*puVar16)(plVar19,puVar16[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      bVar9 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar9) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar9 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar12);
      }
      if (*(int *)((long)plVar12 + 0x6c) == 2) {
        if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar13 = FUN_04e937e4(*(long *)(lVar11 + 0x78),plVar12[0x10],*(undefined8 *)puVar7);
        if ((uVar13 & 1) == 0) {
          if (*(long *)(lVar11 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e935f0(*(long *)(lVar11 + 0x78),plVar12[0x10],plVar12[0x10],*(undefined8 *)puVar6);
        }
      }
      else {
        if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar13 = FUN_04e937e4(*(long *)(lVar11 + 0x60),plVar12[0x10],*(undefined8 *)puVar8);
        if (((uVar13 & 1) == 0) && (plVar12[0x13] != 0)) {
          lVar15 = *(long *)puVar3;
          uVar14 = *(undefined8 *)(plVar12[0x13] + 0x10);
          if (*(int *)(lVar15 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar15 = *(long *)puVar3;
          }
          uVar13 = FUN_05bcaa30(uVar14,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8),0);
          if ((uVar13 & 1) != 0) {
            lVar15 = *(long *)puVar5;
            lVar17 = plVar12[0x13];
            if (*(int *)(lVar15 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar15 = *(long *)puVar5;
            }
            if (lVar17 != **(long **)(lVar15 + 0xb8)) {
              FUN_05ae16dc(lVar11,plVar12[0x13]);
            }
          }
        }
      }
    } while( true );
  }
  goto LAB_05aeec98;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar18 = piVar18 + 4;
    if (uVar13 == 0) break;
LAB_05aeeba4:
    if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
      puVar16 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05aeebd8;
    }
  }
LAB_05aeebbc:
  puVar16 = (undefined8 *)FUN_02dd004c(plVar19,*(long *)puVar1,0);
LAB_05aeebd8:
  (*(code *)*puVar16)(plVar19,puVar16[1]);
LAB_05aeebe4:
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05b1b20c(param_2,lVar11,0);
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x30) = 0;
    return;
  }
LAB_05aeec98:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


