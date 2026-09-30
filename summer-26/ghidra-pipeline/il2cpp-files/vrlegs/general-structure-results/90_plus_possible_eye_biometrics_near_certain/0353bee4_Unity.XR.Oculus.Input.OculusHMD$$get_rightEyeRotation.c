/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$get_rightEyeRotation
ENTRY_POINT: 0353bee4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 140
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0353c548) */

long Unity_XR_Oculus_Input_OculusHMD__get_rightEyeRotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar12;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar13;
  long unaff_x24;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cbec70);
  FUN_01ab69ac(PTR_DAT_03cbee88);
  FUN_01ab69ac(PTR_DAT_03cc4040);
  FUN_01ab69ac(PTR_DAT_03cbee80);
  FUN_01ab69ac(
              DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerFast_<CreateAtlases>d__3_TypeInfo
              );
  FUN_01ab69ac(UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass155_0_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cbed08);
  FUN_01ab69ac(PTR_DAT_03cbed10);
  FUN_01ab69ac(PTR_DAT_03cbed18);
  FUN_01ab69ac(PTR_DAT_03cbed20);
  FUN_01ab69ac(PTR_DAT_03cbed30);
  FUN_01ab69ac(PTR_DAT_03cbed38);
  FUN_01ab69ac(PTR_DAT_03cbfcb0);
  FUN_01ab69ac(PTR_DAT_03cbedf0);
  FUN_01ab69ac(PTR_DAT_03cbedf8);
  FUN_01ab69ac(Cinemachine_ClipperLib_PolyNode_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cc41b0);
  FUN_01ab69ac(VRM_glTF_VRM_HumanoidBone_TypeInfo);
  FUN_01ab69ac(Cinemachine_ClipperLib_Scanbeam_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cbee08);
  FUN_01ab69ac(PTR_DAT_03cbee10);
  FUN_01ab69ac(Cinemachine_ClipperLib_TEdge_TypeInfo);
  FUN_01ab69ac(Animancer_CloneContext_Pool_TypeInfo);
  FUN_01ab69ac(Fusion_CloudServices_<>c_TypeInfo);
  FUN_01ab69ac(
              Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithoutFilter_00000A3C_BurstDirectCall_TypeInfo
              );
  FUN_01ab69ac(Unity_Mathematics_float2x2_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0xecf) = 1;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  lVar6 = thunk_FUN_01a89e68(*unaff_x23);
  FUN_0219a4f0(lVar6,*unaff_x19);
  puVar2 = UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass155_0_TypeInfo;
  if (unaff_x22 == (long *)0x0) {
LAB_0353c53c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar9 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass155_0_TypeInfo) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0353c098;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec();
LAB_0353c098:
  puVar1 = PTR_DAT_03cbec70;
  uVar8 = (*(code *)*puVar7)();
  uVar10 = FUN_025be440(uVar8,0);
  if ((uVar10 & 1) == 0) {
    lVar9 = *unaff_x22;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0353c104;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec();
LAB_0353c104:
    uVar8 = (*(code *)*puVar7)();
    uVar8 = FUN_025b1328(*(undefined8 *)Unity_Mathematics_float2x2_TypeInfo,uVar8,0);
    if (lVar6 == 0) goto LAB_0353c53c;
    FUN_0219b9a4(lVar6,*(undefined8 *)Fusion_CloudServices_<>c_TypeInfo,uVar8,*(undefined8 *)puVar1)
    ;
  }
  if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_0366d598(0);
  puVar5 = DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerFast_<CreateAtlases>d__3_TypeInfo;
  puVar4 = Animancer_CloneContext_Pool_TypeInfo;
  puVar7 = (undefined8 *)Cinemachine_ClipperLib_TEdge_TypeInfo;
  puVar3 = Cinemachine_ClipperLib_Scanbeam_TypeInfo;
  puVar2 = PTR_DAT_03cbfcb0;
  if (lVar6 == 0) goto LAB_0353c53c;
  FUN_0219b9a4(lVar6,*(undefined8 *)Cinemachine_ClipperLib_PolyNode_TypeInfo,uVar8,
               *(undefined8 *)puVar1);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar3;
  }
  FUN_0219b9a4(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar1);
  FUN_01ab6a94(*(undefined8 *)puVar2,0);
  lVar9 = FUN_01ab6a94(*(undefined8 *)puVar2,2);
  puVar2 = PTR_DAT_03cbee10;
  if (lVar9 == 0) goto LAB_0353c53c;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0353c540:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)PTR_DAT_03cbee10;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(lVar9 + 0x20));
  puVar3 = PTR_DAT_03cc41b0;
  if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_0353c540;
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)VRM_glTF_VRM_HumanoidBone_TypeInfo;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar8 = FUN_0353542c();
  uVar10 = FUN_025be440(uVar8,0);
  if ((uVar10 & 1) == 0) {
    FUN_0219b9a4(lVar6,*(undefined8 *)PTR_DAT_03cbedf8,uVar8,*(undefined8 *)puVar1);
  }
  uVar13 = *(undefined8 *)puVar3;
  uVar8 = FUN_03535504();
  uVar10 = FUN_025be440(uVar8,0);
  if ((uVar10 & 1) == 0) {
    uVar13 = *(undefined8 *)puVar1;
  }
  else {
    uVar10 = thunk_FUN_025bd1c0(uVar13,*(undefined8 *)PTR_DAT_03cbedf0,0);
    if (((uVar10 & 1) == 0) &&
       (uVar10 = thunk_FUN_025bd1c0(uVar13,*(undefined8 *)
                                            Unity_Entities_ChunkIterationUtility_CopyComponentArrayToChunksWithoutFilter_00000A3C_BurstDirectCall_TypeInfo
                                    ,0), (uVar10 & 1) == 0)) goto LAB_0353c320;
    uVar8 = *(undefined8 *)puVar2;
    uVar13 = *(undefined8 *)puVar1;
  }
  FUN_0219b9a4(lVar6,*(undefined8 *)PTR_DAT_03cbee08,uVar8,uVar13);
LAB_0353c320:
  if ((unaff_x20 == 0) || (plVar12 = *(long **)(unaff_x20 + 0x28), plVar12 == (long *)0x0)) {
    return lVar6;
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed10) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0353c380;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cbed10,0);
LAB_0353c380:
  plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
  puVar5 = PTR_DAT_03cc4040;
  puVar4 = PTR_DAT_03cbed38;
  puVar3 = PTR_DAT_03cbed30;
  puVar1 = PTR_DAT_03cbed20;
  puVar2 = PTR_DAT_03cbed18;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0353c408;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)puVar1,0);
LAB_0353c408:
    uVar10 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0353c464;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)puVar2,0);
LAB_0353c464:
    auVar14 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    _in_stack_00000008 = auVar14;
    FUN_01b5f2c8(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar3);
    uVar8 = in_stack_00000018;
    FUN_01b5f3b4(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar4);
    FUN_0219b83c(lVar6,uVar8,in_stack_00000018,*(undefined8 *)puVar5);
  } while( true );
  if (plVar12 == (long *)0x0) {
    return lVar6;
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto Unity_XR_Oculus_Input_OculusHMD___ctor;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03cbed08,0);
Unity_XR_Oculus_Input_OculusHMD___ctor:
  (*(code *)*puVar7)(plVar12,puVar7[1]);
  return lVar6;
}


