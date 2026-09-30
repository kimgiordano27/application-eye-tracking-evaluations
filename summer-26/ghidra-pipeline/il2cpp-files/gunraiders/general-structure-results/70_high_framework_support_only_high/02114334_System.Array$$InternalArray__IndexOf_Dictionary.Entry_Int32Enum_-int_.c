/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<Dictionary.Entry<Int32Enum,-int>>
ENTRY_POINT: 02114334
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void System_Array__InternalArray__IndexOf<Dictionary_Entry<Int32Enum,_int>>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_01c5d288();
  FUN_01c5d288(VoxelBusters_CoreLibrary_PrivateSingletonBehaviour<DemoResources>_TypeInfo);
  FUN_01c5d288(PTR_DAT_042393a8);
  FUN_01c5d288(PTR_DAT_04235e98);
  FUN_01c5d288(OVRPlugin_Vector3f___TypeInfo);
  FUN_01c5d288(OVRPlugin_Vector4f___TypeInfo);
  FUN_01c5d288(OVRPlugin_Vector4s___TypeInfo);
  FUN_01c5d288(OVRTrackedKeyboardHands_HandBoneMapping___TypeInfo);
  FUN_01c5d288(RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo);
  FUN_01c5d288(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
  FUN_01c5d288(System_ParameterizedStrings_FormatParam___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x71d) = 1;
  puVar2 = PTR_DAT_042393a8;
  lVar4 = thunk_FUN_01c496e0(*unaff_x19);
  FUN_03ce62b4(lVar4,*(undefined8 *)OVRTrackedKeyboardHands_HandBoneMapping___TypeInfo,0);
  puVar1 = PTR_DAT_0422f958;
  lVar8 = *(long *)PTR_DAT_0422f958;
  lVar7 = *(long *)(lVar8 + 0x38);
  if (lVar7 == 0) {
    FUN_01c723f0(lVar8);
    lVar7 = *(long *)(lVar8 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01c72394();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01c72394();
  }
  if (lVar4 != 0) {
    lVar4 = FUN_021fb584(lVar4,*(undefined8 *)RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo,
                         **(undefined8 **)(lVar7 + 0xb8),
                         *(undefined8 *)OVRPlugin_Vector2f___TypeInfo);
    lVar8 = *(long *)puVar1;
    lVar7 = *(long *)(lVar8 + 0x38);
    if (lVar7 == 0) {
      FUN_01c723f0(lVar8);
      lVar7 = *(long *)(lVar8 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01c72394();
    }
    if (lVar4 != 0) {
      uVar5 = FUN_021fad1c(lVar4,*(undefined8 *)OVRPlugin_Vector4f___TypeInfo,
                           **(undefined8 **)(lVar7 + 0xb8),
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<IResourceLocation,_List<object>>_TypeInfo
                          );
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar2;
      }
      *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50) = uVar5;
      uVar6 = FUN_031532a8(uVar5,0);
      if ((uVar6 & 1) == 0) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar5 = FUN_03154a7c(lVar4,0x5f,0x2d,0);
        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = uVar5;
        if (*(int *)(*(long *)
                      VoxelBusters_CoreLibrary_PrivateSingletonBehaviour<DemoResources>_TypeInfo +
                    0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar5 = FUN_020f76f8(uVar5,1,1,0);
        *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50) = uVar5;
        uVar6 = FUN_031532a8(uVar5,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      puVar1 = PTR_DAT_04235e98;
      if (*(int *)(*(long *)PTR_DAT_0422fc88 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      puVar3 = OVRPlugin_Vector4s___TypeInfo;
      in_stack_00000018 = FUN_03cfe0a8(0);
      in_stack_00000008 = *(undefined8 *)puVar1;
      in_stack_00000010 = 0xffffffffffffffff;
      uVar5 = FUN_03307544(&stack0x00000008,0);
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar4);
        lVar4 = *(long *)puVar2;
      }
      *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50) = uVar5;
      uVar6 = thunk_FUN_03152714(uVar5,*(undefined8 *)puVar3,0);
      lVar4 = *(long *)puVar2;
      if ((uVar6 & 1) != 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(lVar4);
          lVar4 = *(long *)puVar2;
        }
        *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50) =
             *(undefined8 *)System_ParameterizedStrings_FormatParam___TypeInfo;
      }
      puVar1 = MS_Internal_Xml_XPath_Operator_Op___TypeInfo;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar4);
        lVar4 = *(long *)puVar2;
      }
      uVar6 = thunk_FUN_03152714(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50),
                                 *(undefined8 *)puVar1,0);
      if ((uVar6 & 1) != 0) {
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar4 = *(long *)puVar2;
        }
        *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x50) =
             *(undefined8 *)OVRPlugin_Vector3f___TypeInfo;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


