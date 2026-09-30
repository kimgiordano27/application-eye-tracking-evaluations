/*
FUNCTION_NAME: thunk_FUN_068e1098
ENTRY_POINT: 068e17ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


void thunk_FUN_068e1098(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  int iStack_6c;
  undefined8 uStack_68;
  
  if ((DAT_071d70d8 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(OVRInput_OVRControllerBase_VirtualTouchMap_TypeInfo);
    FUN_02f07e70(OVRPlugin_Media_InputVideoBufferType_TypeInfo);
    FUN_02f07e70(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo);
    FUN_02f07e70(OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0e120);
    FUN_02f07e70(OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo);
    FUN_02f07e70(TMPro_ColorTween_ColorTweenCallback_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0e108);
    FUN_02f07e70(
                OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo
                );
    DAT_071d70d8 = 1;
  }
  puVar2 = TMPro_ColorTween_ColorTweenCallback_TypeInfo;
  uStack_68 = 0;
  if ((*(long *)(param_1 + 0x28) == 0) || (lVar12 = *(long *)(param_1 + 0x20), lVar12 == 0)) {
    return;
  }
  uVar16 = *(uint *)(lVar12 + 0x18);
  if (0 < (int)uVar16) {
    uVar13 = 0;
    do {
      if (uVar16 <= uVar13) goto LAB_068e1604;
      lVar15 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
      if ((lVar15 == 0) || (lVar17 = *(long *)(lVar15 + 0x10), lVar17 == 0)) goto LAB_068e15e0;
      uVar16 = *(uint *)(lVar17 + 0x18);
      if (0 < (int)uVar16) {
        uVar18 = 0;
        do {
          if (uVar16 <= uVar18) goto LAB_068e1604;
          lVar19 = *(long *)(lVar17 + (long)(int)uVar18 * 8 + 0x20);
          if (lVar19 == 0) goto LAB_068e15e0;
          lVar5 = *(long *)puVar2;
          uVar10 = *(undefined8 *)(lVar19 + 0x10);
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
            lVar5 = *(long *)puVar2;
          }
          uVar6 = FUN_068e1988(uVar10,**(undefined8 **)(lVar5 + 0xb8));
          if ((uVar6 & 1) != 0) {
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            *(undefined1 *)(lVar19 + 0x28) = 1;
          }
          lVar5 = *(long *)(lVar19 + 0x20);
          if (lVar5 == 0) goto LAB_068e15e0;
          if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
            uVar6 = 0;
            uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
            do {
              if (uVar8 <= uVar6) goto LAB_068e1604;
              uVar8 = FUN_068255f8(*(undefined8 *)(lVar5 + 0x20 + uVar6 * 8),0);
              if ((uVar8 & 1) != 0) {
                *(undefined1 *)(lVar19 + 0x29) = 1;
                break;
              }
              uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18));
          }
          uVar16 = *(uint *)(lVar17 + 0x18);
          uVar18 = uVar18 + 1;
        } while ((int)uVar18 < (int)uVar16);
      }
      uVar16 = *(uint *)(lVar12 + 0x18);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar16);
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
    uVar16 = *(uint *)(lVar12 + 0x18);
    if ((int)uVar16 < 1) {
LAB_068e12b4:
      puVar2 = PTR_DAT_06d0e120;
      if (*(int *)(*(long *)PTR_DAT_06d0e120 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (DAT_071bbbfa == '\0') {
        FUN_02f07e70(PTR_DAT_06d0e120);
        DAT_071bbbfa = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar12 = *(long *)puVar2;
      }
      puVar4 = OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo;
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
      lVar12 = thunk_FUN_02ef1808(*(undefined8 *)
                                   OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo)
      ;
      puVar3 = OVRPlugin_Media_InputVideoBufferType_TypeInfo;
      FUN_04c73c8c(lVar12,uVar10,*(undefined8 *)OVRPlugin_Media_InputVideoBufferType_TypeInfo);
      plVar11 = (long *)(param_1 + 0x88);
      *plVar11 = lVar12;
      thunk_FUN_02f411dc(plVar11,lVar12);
      if (DAT_071bbbfa == '\0') {
        FUN_02f07e70(PTR_DAT_06d0e120);
        DAT_071bbbfa = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar12 = *(long *)puVar2;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
      lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_04c73c8c(lVar12,uVar10,*(undefined8 *)puVar3);
      plVar7 = (long *)(param_1 + 0x78);
      *plVar7 = lVar12;
      thunk_FUN_02f411dc(plVar7,lVar12);
      if (DAT_071bbbfa == '\0') {
        FUN_02f07e70(PTR_DAT_06d0e120);
        DAT_071bbbfa = '\x01';
      }
      lVar12 = *(long *)puVar2;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar12 = *(long *)puVar2;
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
      lVar12 = thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_04c73c8c(lVar12,uVar10,*(undefined8 *)puVar3);
      plVar14 = (long *)(param_1 + 0x80);
      *plVar14 = lVar12;
      thunk_FUN_02f411dc(plVar14,lVar12);
      puVar3 = OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo;
      puVar2 = OVRInput_OVRControllerBase_VirtualTouchMap_TypeInfo;
      lVar12 = *(long *)(param_1 + 0x28);
      if (lVar12 != 0) {
        lVar15 = 0;
        do {
          uVar16 = (uint)lVar15;
          if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar16) {
            return;
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar16) {
LAB_068e1604:
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          lVar12 = *(long *)(lVar12 + lVar15 * 8 + 0x20);
          if ((lVar12 == 0) || (lVar17 = *(long *)(param_1 + 0x20), lVar17 == 0)) break;
          uVar13 = *(uint *)(lVar12 + 0x40);
          if ((int)uVar13 < (int)*(uint *)(lVar17 + 0x18)) {
            if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_068e1604;
            *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar17 + (long)(int)uVar13 * 8 + 0x20);
            thunk_FUN_02f411dc();
          }
          FUN_068e0628(lVar12);
          lVar17 = *(long *)(lVar12 + 0x38);
          *(uint *)(lVar12 + 0x50) = uVar16;
          if (lVar17 == 0) break;
          if ((int)*(long *)(lVar17 + 0x18) == 0) goto LAB_068e1604;
          lVar17 = *(long *)(lVar17 + ((*(long *)(lVar17 + 0x18) << 0x20) + -0x100000000 >> 0x1d) +
                            0x20);
          if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) break;
          if (*(int *)(lVar17 + 0x18) == 0) goto LAB_068e1604;
          iVar1 = *(int *)(lVar17 + 0x28);
          if (iVar1 - 1U < 6) {
            lVar19 = *(long *)(lVar17 + 0x20);
            plVar9 = plVar11;
            lVar17 = lVar19;
            switch(iVar1) {
            default:
              plVar9 = plVar14;
              lVar17 = *(long *)PTR_DAT_06d0e108;
              if (lVar19 != 0) {
                lVar17 = lVar19;
              }
              break;
            case 3:
              break;
            case 4:
              plVar9 = plVar14;
              lVar17 = *(long *)PTR_DAT_06d0e108;
              break;
            case 5:
              goto switchD_068e14ec_caseD_5;
            case 6:
              plVar9 = plVar7;
            }
            lVar19 = *plVar9;
            if (lVar19 != 0) {
              uVar6 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                                (lVar19,lVar17,&uStack_68,*(undefined8 *)puVar2);
              if ((uVar6 & 1) != 0) {
                *(undefined8 *)(lVar12 + 0x48) = uStack_68;
                thunk_FUN_02f411dc();
              }
              FUN_04c74618(lVar19,lVar17,lVar12,*(undefined8 *)puVar3);
            }
          }
          else {
switchD_068e14ec_caseD_5:
            iStack_6c = iVar1;
            uVar10 = thunk_FUN_02ef1438(*(undefined8 *)
                                         OVRInput_OVRControllerBase_VirtualButtonMap_TypeInfo,
                                        &iStack_6c);
            uVar10 = FUN_0545c378(*(undefined8 *)
                                   OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo
                                  ,uVar10,0);
            if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
            }
            FUN_06693ec4(uVar10,param_1,0);
          }
          lVar15 = lVar15 + 1;
          lVar12 = *(long *)(param_1 + 0x28);
          if (lVar12 == 0) break;
        } while( true );
      }
    }
    else {
      uVar13 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_068e1604;
        if (*(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20) == 0) break;
        FUN_068dff68();
        uVar13 = uVar13 + 1;
        if (uVar16 == uVar13) goto LAB_068e12b4;
        lVar12 = *(long *)(param_1 + 0x28);
      } while (lVar12 != 0);
    }
  }
LAB_068e15e0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


