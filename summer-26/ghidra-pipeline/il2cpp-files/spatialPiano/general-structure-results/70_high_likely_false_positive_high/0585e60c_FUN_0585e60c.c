/*
FUNCTION_NAME: FUN_0585e60c
ENTRY_POINT: 0585e60c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_16;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_0585e60c(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 extraout_x1;
  ulong uVar21;
  ulong uVar22;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 local_68;
  
  if ((DAT_06bc1068 & 1) == 0) {
    FUN_02f08768(Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_02f08768(
                Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_TryGetValue__
                );
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_Clear__);
    FUN_02f08768(Method_UnityEngine_Pool_GenericPool<XRLayout>_Get__);
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_PostfixBurstDelegate>_get_Value__
                );
    FUN_02f08768(Method_UnityEngine_Pool_GenericPool<XRLayout>_Release__);
    FUN_02f08768(
                Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Get__
                );
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_PostfixBurstDelegate>_get_Value__
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
                );
    DAT_06bc1068 = 1;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_Clear__;
  local_68 = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(int *)(param_1 + 0x10) != 3) {
      lVar13 = *(long *)
                Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_Clear__;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar13 = *(long *)puVar4;
      }
      return **(undefined8 **)(lVar13 + 0xb8);
    }
    lVar13 = *(long *)
              Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_Clear__;
    if (*(char *)(param_1 + 0x14) != '\0') {
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar13 = *(long *)puVar4;
      }
      return *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18);
    }
    if (*(int *)(lVar13 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar13 = *(long *)puVar4;
    }
    return *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8);
  }
  plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                        Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_00000964_PostfixBurstDelegate>_get_Value__
                                      );
  FUN_05116b38(plVar11,0);
  puVar4 = 
  UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
  if (plVar11 == (long *)0x0) goto LAB_0585eb68;
  lVar13 = *(long *)(param_1 + 0x18);
  lVar17 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)
            UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_00000963_BurstDirectCall_TypeInfo
  ;
  plVar11[2] = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if ((lVar13 == 0) ||
     (uVar8 = FUN_0585af7c(lVar13,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0),
     puVar4 = 
     Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000DB9_PostfixBurstDelegate>_get_Value__
     , lVar17 == 0)) goto LAB_0585eb68;
  uVar8 = FUN_0585c390(lVar17,uVar8,0);
  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05116b38(lVar13,0);
  plVar14 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(lVar13 + 0x10) = uVar8;
  plVar11[3] = lVar13;
  if ((plVar14 == (long *)0x0) ||
     ((((**(code **)(*plVar14 + 0x178))
                  (plVar14,plVar11,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(*plVar14 + 0x180)),
       puVar5 = Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__,
       puVar4 = 
       Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_TryGetValue__,
       *(long *)(param_1 + 0x18) == 0 || (*(long *)(param_1 + 0x20) == 0)) ||
      (plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x10), plVar14 == (long *)0x0))))
  goto LAB_0585eb68;
  uVar9 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
  uVar21 = (ulong)uVar9;
  uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_058588b4(uVar15,uVar21);
  uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_058588b4(uVar16,uVar21);
  lVar17 = FUN_02f0880c(*(undefined8 *)puVar5,uVar21);
  if (0 < (int)uVar9) {
    uVar22 = 0;
    do {
      uVar18 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
      FUN_058588b4(uVar18,uVar21);
      if (lVar17 == 0) goto LAB_0585eb68;
      if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_0585eb6c;
      *(undefined8 *)(lVar17 + 0x20 + uVar22 * 8) = uVar18;
      uVar22 = uVar22 + 1;
    } while (uVar21 != uVar22);
  }
  (**(code **)(*plVar11 + 0x188))(plVar11,uVar15,uVar16,lVar17,*(undefined8 *)(*plVar11 + 400));
  if (0 < *(int *)(param_1 + 0x3c)) {
    uVar18 = FUN_0585eb70(param_1,extraout_x1,lVar17,&local_68);
    uVar16 = local_68;
    uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
    if (*(char *)(param_1 + 0x40) != '\0') {
      uVar19 = FUN_0585ee1c(param_1,uVar15,local_68,uVar18);
      FUN_0585ef8c(param_1,uVar19);
      uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
      if (0 < (int)uVar9) {
        if (lVar17 == 0) goto LAB_0585eb68;
        uVar22 = 0;
        do {
          if (*(uint *)(lVar17 + 0x18) <= uVar22) {
LAB_0585eb6c:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar19 = FUN_0585ee1c(param_1,*(undefined8 *)(lVar17 + 0x20 + uVar22 * 8),uVar16,uVar18);
          FUN_0585ef8c(param_1,uVar19);
          uVar8 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
          uVar22 = uVar22 + 1;
        } while (uVar21 != uVar22);
      }
    }
    if ((lVar13 != 0) && (plVar11 = (long *)plVar11[2], plVar11 != (long *)0x0)) {
      uVar1 = *(undefined4 *)(lVar13 + 0x10);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      uVar18 = *(undefined8 *)(param_1 + 0x20);
      uVar9 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
      uVar19 = local_68;
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      uVar20 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Get__
                                 );
      System_Xml_XmlDeclaration__WriteTo
                (uVar20,uVar15,lVar17,uVar16,uVar18,uVar1,uVar2,uVar9 & 1,uVar19,
                 CONCAT44(uVar8,uVar3),0);
      return uVar20;
    }
    goto LAB_0585eb68;
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_0585eb68;
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x38) == '\0') {
    if (*(char *)(param_1 + 0x40) != '\0') {
      FUN_0585f0ec(param_1,uVar15,lVar17);
    }
LAB_0585ea48:
    if (lVar13 == 0) goto LAB_0585eb68;
    uVar16 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    if ((param_2 & 1) == 0) goto LAB_0585ea48;
    if (lVar13 == 0) goto LAB_0585eb68;
    lVar12 = FUN_0585f174(param_1,uVar15,lVar17,*(undefined4 *)(lVar13 + 0x10));
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    if (lVar12 != 0) {
      uVar9 = *(uint *)(param_1 + 0x10);
      if (uVar9 < 2) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)(param_1 + 0x14) != '\0';
      }
      plVar11 = (long *)plVar11[2];
      if (plVar11 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
        uVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                     Method_UnityEngine_Pool_GenericPool<XRLayout>_Get__);
        FUN_0585f6f8(uVar15,lVar12,uVar16,uVar9,bVar6,uVar10 & 1);
        return uVar15;
      }
      goto LAB_0585eb68;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 < 2) {
    bVar6 = false;
  }
  else {
    bVar6 = *(char *)(param_1 + 0x14) != '\0';
  }
  plVar11 = (long *)plVar11[2];
  if (plVar11 != (long *)0x0) {
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined4 *)(lVar13 + 0x10);
    uVar7 = (**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
    uVar18 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_UnityEngine_Pool_GenericPool<XRLayout>_Release__);
    FUN_056fa548(uVar18,uVar15,lVar17,uVar16,uVar19,uVar8,uVar9,bVar6,
                 CONCAT71((int7)((ulong)in_stack_ffffffffffffff70 >> 8),uVar7) & 0xffffffffffffff01,
                 0);
    return uVar18;
  }
LAB_0585eb68:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


