/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.PostProcessPass$$OnCameraSetup
ENTRY_POINT: 02375484
PROGRAM: Lovesick-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;pose_vector;telemetry;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow
*/


undefined8
UnityEngine_Rendering_Universal_Internal_PostProcessPass__OnCameraSetup
          (undefined1 param_1 [16],undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int iVar15;
  undefined8 uVar16;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(UnityEngine_Rendering_DebugUpdater_<RefreshRuntimeUINextFrame>d__15_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033eadc0);
  thunk_FUN_00d48444(PTR_DAT_033f6548);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                    );
  thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xdb5) = 1;
  plVar8 = (long *)FUN_0231aeb8();
  lVar9 = thunk_FUN_00d62348(*unaff_x20);
  if ((lVar9 == 0) ||
     (FUN_01298da0(lVar9,*(undefined8 *)
                          Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__),
     puVar6 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__,
     puVar5 = Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__,
     puVar4 = UnityEngine_Rendering_DebugUpdater_<RefreshRuntimeUINextFrame>d__15_TypeInfo,
     puVar3 = UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo,
     puVar2 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo, puVar1 = PTR_DAT_033eadc0,
     plVar8 == (long *)0x0)) {
LAB_02375714:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar15 = 0;
  do {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_0237558c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar4,0);
LAB_0237558c:
    iVar7 = (*(code *)*puVar10)(plVar8,puVar10[1]);
    if (iVar7 <= iVar15) {
      uVar13 = FUN_02375748(plVar8);
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      lVar11 = *unaff_x19;
      if (lVar11 != 0) {
        iVar15 = 0;
        do {
          if (*(int *)(lVar11 + 0x18) <= iVar15) {
            return 1;
          }
          FUN_0132138c(lVar11,iVar15,(long)&stack0x00000008 + 4,*(undefined8 *)puVar5);
          FUN_01299bc0(lVar9,(long)&stack0x00000008 + 4,&stack0x00000008,*(undefined8 *)puVar2);
          iStack000000000000000c = iStack0000000000000008;
          FUN_0132149c(lVar11,iVar15,(long)&stack0x00000008 + 4,*(undefined8 *)puVar3);
          lVar11 = *unaff_x19;
          iVar15 = iVar15 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_02375714;
    }
    lVar12 = *plVar8;
    lVar11 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar11) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_023755ec;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar11,0);
LAB_023755ec:
    uVar16 = (*(code *)*puVar10)(plVar8,iVar15,puVar10[1]);
    if (unaff_x21 == (long *)0x0) goto LAB_02375714;
    lVar11 = *unaff_x21;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_02375658;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724();
LAB_02375658:
    iStack0000000000000008 = (*(code *)*puVar10)(uVar16,param_2);
    iStack000000000000000c = iVar15;
    FUN_0129a054(lVar9,(long)&stack0x00000008 + 4,&stack0x00000008,*(undefined8 *)puVar6);
    iVar15 = iVar15 + 1;
  } while( true );
}


