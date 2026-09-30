/*
FUNCTION_NAME: UnityEngine.UIElements.TextElement$$UnityEngine.UIElements.ITextSelection.get_lineHeightAtCursorPosition
ENTRY_POINT: 039e8d30
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


undefined8
UnityEngine_UIElements_TextElement__UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition
          (long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000058;
  
  do {
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = FUN_029072e4(*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x98),*unaff_x21);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(in_stack_00000058 + 0x30) != 0) {
        FUN_02907dd4(*(long *)(in_stack_00000058 + 0x30),*(undefined8 *)(in_stack_00000058 + 0x98),
                     *(undefined8 *)PTR_DAT_03daf5f0);
        *(undefined8 *)(in_stack_00000058 + 0x18) = *(undefined8 *)(in_stack_00000058 + 0x98);
        thunk_FUN_01b4f09c();
        *(undefined4 *)(in_stack_00000058 + 0x10) = 2;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    do {
      *(undefined8 *)(in_stack_00000058 + 0x98) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000058 + 0x98),0);
      *(undefined8 *)(in_stack_00000058 + 0x90) = 0;
      thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000058 + 0x90),0);
      while (uVar4 = FUN_02739b98(in_stack_00000058 + 0x78,
                                  *(undefined8 *)
                                   Method_OVRSceneManager_<>c__DisplayClass40_0_<CheckClassificationsInRooms>b__0__
                                 ), (uVar4 & 1) == 0) {
        FUN_039e8ec8();
        *(undefined8 *)(in_stack_00000058 + 0x78) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x80) = 0;
        *(undefined8 *)(in_stack_00000058 + 0x88) = 0;
        do {
          *(undefined8 *)(in_stack_00000058 + 0x50) = 0;
          thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000058 + 0x50),0);
          uVar4 = FUN_02739b98(in_stack_00000058 + 0x38,*(undefined8 *)PTR_DAT_03daf5d0);
          if ((uVar4 & 1) == 0) {
            FUN_039e8f18();
            *(undefined8 *)(in_stack_00000058 + 0x38) = 0;
            *(undefined8 *)(in_stack_00000058 + 0x40) = 0;
            *(undefined8 *)(in_stack_00000058 + 0x48) = 0;
            return 0;
          }
          *(undefined8 *)(in_stack_00000058 + 0x50) = *(undefined8 *)(in_stack_00000058 + 0x48);
          thunk_FUN_01b4f09c();
          if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = FUN_03af3ccc(*(long *)(in_stack_00000058 + 0x50),0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar2 = FUN_03af3c48(*(long *)(in_stack_00000058 + 0x50),0);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            FUN_02b5a400(&stack0x00000008,lVar2,*(undefined8 *)PTR_DAT_03daf618);
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            *(undefined8 *)(in_stack_00000058 + 0x68) = in_stack_00000018;
            *(undefined8 *)(in_stack_00000058 + 0x60) = in_stack_00000010;
            *(undefined8 *)(in_stack_00000058 + 0x58) = in_stack_00000008;
            thunk_FUN_01b4f09c(in_stack_00000058 + 0x58,0);
            *(undefined4 *)(in_stack_00000058 + 0x10) = 0xfffffffc;
            while (uVar4 = FUN_02739b98(in_stack_00000058 + 0x58,*(undefined8 *)PTR_DAT_03daf5d8),
                  (uVar4 & 1) != 0) {
              *(undefined8 *)(in_stack_00000058 + 0x70) = *(undefined8 *)(in_stack_00000058 + 0x68);
              thunk_FUN_01b4f09c();
              if (*(long *)(in_stack_00000058 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar4 = FUN_029072e4(*(long *)(in_stack_00000058 + 0x30),
                                   *(undefined8 *)(in_stack_00000058 + 0x70),*unaff_x21);
              if ((uVar4 & 1) == 0) {
                if (*(long *)(in_stack_00000058 + 0x30) != 0) {
                  FUN_02907dd4(*(long *)(in_stack_00000058 + 0x30),
                               *(undefined8 *)(in_stack_00000058 + 0x70),
                               *(undefined8 *)PTR_DAT_03daf5f0);
                  *(undefined8 *)(in_stack_00000058 + 0x18) =
                       *(undefined8 *)(in_stack_00000058 + 0x70);
                  thunk_FUN_01b4f09c();
                  *(undefined4 *)(in_stack_00000058 + 0x10) = 1;
                  return 1;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              *(undefined8 *)(in_stack_00000058 + 0x70) = 0;
              thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000058 + 0x70),0);
            }
            FUN_039e8e78();
            *(undefined8 *)(in_stack_00000058 + 0x58) = 0;
            *(undefined8 *)(in_stack_00000058 + 0x60) = 0;
            *(undefined8 *)(in_stack_00000058 + 0x68) = 0;
          }
          if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar4 = FUN_03af3c38(*(long *)(in_stack_00000058 + 0x50),0);
        } while ((uVar4 & 1) == 0);
        if (*(long *)(in_stack_00000058 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar2 = FUN_03af3bb4(*(long *)(in_stack_00000058 + 0x50),0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_02b5a400(&stack0x00000008,lVar2,
                     *(undefined8 *)Method_OVRSpaceQuery_Options_ValidateSingleFilter__);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        *(undefined8 *)(in_stack_00000058 + 0x88) = in_stack_00000018;
        *(undefined8 *)(in_stack_00000058 + 0x80) = in_stack_00000010;
        *(undefined8 *)(in_stack_00000058 + 0x78) = in_stack_00000008;
        thunk_FUN_01b4f09c(in_stack_00000058 + 0x78,0);
        *(undefined4 *)(in_stack_00000058 + 0x10) = 0xfffffffb;
      }
      *(undefined8 *)(in_stack_00000058 + 0x90) = *(undefined8 *)(in_stack_00000058 + 0x88);
      thunk_FUN_01b4f09c();
      uVar6 = *(undefined8 *)(in_stack_00000058 + 0x90);
      uVar7 = *(undefined8 *)PTR_DAT_03daf620;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_0304eec0(uVar7,0);
      uVar8 = FUN_03941954(0);
      if (*(int *)(*(long *)StringLiteral_3289 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      plVar3 = (long *)FUN_03a9134c(uVar8,uVar6,uVar7,0);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        *(undefined8 *)(in_stack_00000058 + 0x98) = 0;
      }
      else {
        lVar2 = *(long *)PTR_DAT_03daf628;
        bVar1 = *(byte *)(lVar2 + 0x130);
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar5 = (long *)0x0;
        }
        else {
          plVar5 = plVar3;
          if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
            plVar5 = (long *)0x0;
          }
        }
        *(long **)(in_stack_00000058 + 0x98) = plVar5;
        if (*(byte *)(*plVar3 + 0x130) < bVar1) {
          plVar3 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
          plVar3 = (long *)0x0;
        }
      }
      thunk_FUN_01b4f09c(in_stack_00000058 + 0x98,plVar3);
      uVar6 = *(undefined8 *)(in_stack_00000058 + 0x98);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0391f968(uVar6,0,0);
      param_1 = in_stack_00000058;
    } while ((uVar4 & 1) == 0);
  } while( true );
}


