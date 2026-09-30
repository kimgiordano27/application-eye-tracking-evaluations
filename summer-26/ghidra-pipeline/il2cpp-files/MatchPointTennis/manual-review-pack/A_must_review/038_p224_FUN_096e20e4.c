/*
FUNCTION_NAME: FUN_096e20e4
ENTRY_POINT: 096e20e4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_096e20e4(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_38;
  
  if ((DAT_0a5471a7 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(OVRDynamicObject_var);
    FUN_04447ba8(OVRGLTFScene_var);
    FUN_04447ba8(OVRGazePointer_var);
    FUN_04447ba8(Unity_Services_Matchmaker_MatchmakerExceptionReason_var);
    FUN_04447ba8(System_Globalization_NumberFormatInfo_var);
    FUN_04447ba8(PTR_DAT_09f26900);
    FUN_04447ba8(OVRLocatable_var);
    FUN_04447ba8(PTR_DAT_09f20d20);
    FUN_04447ba8(UnityEngine_InputSystem_Pointer_var);
    FUN_04447ba8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_04447ba8(UnityEngine_InputSystem_UI_PointerModel_var);
    FUN_04447ba8(UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData_var);
    FUN_04447ba8(UnityEngine_Pose_var);
    FUN_04447ba8(UnityEngine_Rendering_InstanceCuller_var);
    FUN_04447ba8(UnityEngine_PlayerLoop_PostLateUpdate_var);
    FUN_04447ba8(UnityEngine_Rendering_Universal_PostProcessParams_var);
    FUN_04447ba8(UnityEngine_UIElements_PanelEventHandler_var);
    FUN_04447ba8(PTR_DAT_09f210e0);
    DAT_0a5471a7 = 1;
  }
  local_90 = (long *)0x0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_38 = param_1;
  thunk_FUN_044bb4b4(&local_38,param_1);
  if (local_38 == (long *)0x0) goto LAB_096e26c0;
  if (local_38[0x10] != 0) {
    local_50 = param_2[6];
    uStack_68 = param_2[3];
    local_70 = (long *)param_2[2];
    uStack_58 = param_2[5];
    local_60 = param_2[4];
    uStack_78 = param_2[1];
    local_80 = *param_2;
    lVar4 = (**(code **)(*local_38 + 0x1a8))(local_38,&local_80,*(undefined8 *)(*local_38 + 0x1b0));
    return lVar4;
  }
  uVar5 = FUN_096de08c(local_38[2],&local_88);
  if ((uVar5 & 1) == 0) {
    if ((local_38 == (long *)0x0) || (local_38[2] == 0)) goto LAB_096e26c0;
    uVar5 = FUN_078b3464(local_38[2],
                         *(undefined8 *)UnityEngine_Rendering_Universal_PostProcessParams_var,0);
    if ((uVar5 & 1) == 0) {
      if (((local_38 == (long *)0x0) || (local_38[2] == 0)) ||
         (uVar5 = FUN_078b3464(local_38[2],
                               *(undefined8 *)UnityEngine_InputSystem_UI_PointerModel_var,0),
         local_38 == (long *)0x0)) goto LAB_096e26c0;
      lVar4 = local_38[2];
      if ((uVar5 & 1) != 0) goto LAB_096e22f8;
      uVar5 = thunk_FUN_078b3114(lVar4,*(undefined8 *)UnityEngine_Rendering_InstanceCuller_var,0);
      if ((uVar5 & 1) != 0) {
        uVar6 = *(undefined8 *)UnityEngine_InputSystem_Pointer_var;
        if (*(int *)(*(long *)(PTR_DAT_09f1e5b8 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        plVar8 = (long *)FUN_07a4ce38(uVar6,0);
        if ((plVar8 == (long *)0x0) ||
           (uVar6 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0)),
           local_38 == (long *)0x0)) goto LAB_096e26c0;
        uVar6 = FUN_078b4f58(uVar6,*(undefined8 *)PTR_DAT_09f210e0,local_38[2],0);
        FUN_096de08c(uVar6,&local_88);
        goto LAB_096e23b0;
      }
    }
    else {
      if (local_38 == (long *)0x0) goto LAB_096e26c0;
      lVar4 = local_38[2];
LAB_096e22f8:
      if (lVar4 == 0) goto LAB_096e26c0;
      uVar6 = FUN_078b6ebc(lVar4,*(undefined8 *)UnityEngine_PlayerLoop_PostLateUpdate_var,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Filtering_PokeStateData_var,0);
      uVar5 = FUN_096de08c(uVar6,&local_88);
      if ((uVar5 & 1) != 0) goto LAB_096e23b0;
    }
    if (*(int *)(*(long *)UnityEngine_UIElements_PanelRaycaster_var + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar4 = FUN_096e2b5c(&local_38);
  }
  else {
LAB_096e23b0:
    if (local_88 == 0) {
LAB_096e26c0:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_05bae95c(&local_80,local_88,*(undefined8 *)OVRLocatable_var);
    puVar2 = OVRGLTFScene_var;
    puVar1 = Unity_Services_Matchmaker_MatchmakerExceptionReason_var;
    uStack_98 = uStack_78;
    local_a0 = local_80;
    local_90 = local_70;
    do {
      uVar5 = FUN_0768d020(&local_a0,*(undefined8 *)puVar2);
      plVar3 = local_38;
      plVar8 = local_90;
      if ((uVar5 & 1) == 0) {
        FUN_0768d01c(&local_a0,*(undefined8 *)OVRDynamicObject_var);
        plVar8 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,1);
        if ((local_38 != (long *)0x0) && (plVar8 != (long *)0x0)) {
          lVar4 = local_38[2];
          if ((lVar4 != 0) &&
             (lVar9 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
            uVar6 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
            FUN_04447d10(uVar6,0);
          }
          if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          plVar8[4] = lVar4;
          thunk_FUN_044bb4b4(plVar8 + 4,lVar4);
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c6d68(*(undefined8 *)UnityEngine_UIElements_PanelEventHandler_var,plVar8,0);
          if (local_38 != (long *)0x0) {
            uVar6 = FUN_078ab14c(*(undefined8 *)UnityEngine_Pose_var,local_38[2],0);
            lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f26900);
            FUN_097613fc(lVar4,uVar6,0);
            return lVar4;
          }
        }
        goto LAB_096e26c0;
      }
      uVar16 = param_2[3];
      plVar15 = (long *)param_2[2];
      uVar12 = param_2[5];
      uVar11 = param_2[4];
      uVar6 = param_2[6];
      uVar14 = param_2[1];
      uVar13 = *param_2;
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar4 = *local_90;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_096e2488;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_044822ac(local_90,*(long *)puVar1,2);
LAB_096e2488:
      local_80 = uVar13;
      uStack_78 = uVar14;
      local_70 = plVar15;
      uStack_68 = uVar16;
      local_60 = uVar11;
      uStack_58 = uVar12;
      local_50 = uVar6;
      uVar5 = (*(code *)*puVar7)(plVar8,plVar3,&local_80,puVar7[1]);
    } while ((uVar5 & 1) == 0);
    FUN_0768d01c(&local_a0,*(undefined8 *)OVRDynamicObject_var);
    plVar3 = local_38;
    uVar6 = param_2[6];
    uVar12 = param_2[1];
    uVar11 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    uVar17 = param_2[5];
    uVar16 = param_2[4];
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)System_Globalization_NumberFormatInfo_var) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_096e264c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar8,*(long *)System_Globalization_NumberFormatInfo_var,0)
    ;
LAB_096e264c:
    local_80 = uVar11;
    uStack_78 = uVar12;
    local_70 = (long *)uVar13;
    uStack_68 = uVar14;
    local_60 = uVar16;
    uStack_58 = uVar17;
    local_50 = uVar6;
    lVar4 = (*(code *)*puVar7)(plVar8,plVar3,&local_80,puVar7[1]);
    plVar8 = local_38;
    if (lVar4 != 0) {
      if (*(int *)(*(long *)UnityEngine_UIElements_PanelRaycaster_var + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_096e13a8(plVar8,lVar4);
      FUN_096e1414(local_38,lVar4);
    }
  }
  return lVar4;
}


