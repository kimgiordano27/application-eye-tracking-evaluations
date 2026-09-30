/*
FUNCTION_NAME: FUN_06093310
ENTRY_POINT: 06093310
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


long * FUN_06093310(long param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((DAT_076dd450 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07280380);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(System_Func<CancellationToken,_Task<int>>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<InteractionGroupUnregisteredEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<object,_Vector3>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<InteractorRegisteredEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<InputDevice,_string>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<KeyValuePair<string,_string>,_string>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727eb68);
    thunk_FUN_032e1da0(System_Func<IUnitPort,_IEnumerable<IUnitConnection>>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<List<InvocationContext>,_bool>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<HoverEnterEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Func<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07287a50);
    thunk_FUN_032e1da0(System_Func<InputEventPtr,_InputControl>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07280168);
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    thunk_FUN_032e1da0(System_Func<VisualElement>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727c868);
    DAT_076dd450 = 1;
  }
  puVar5 = 
  System_Func<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>_TypeInfo
  ;
  puVar4 = System_Collections_Generic_Dictionary<object,_Vector3>_TypeInfo;
  puVar3 = PTR_DAT_072a1998;
  puVar2 = PTR_DAT_07287a50;
  puVar1 = PTR_DAT_07280168;
  lVar13 = param_3;
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_0609392c;
    lVar13 = *(long *)(param_4 + 0x20);
    if (lVar13 != 0) goto LAB_06093478;
    plVar10 = *(long **)(param_1 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar11 = FUN_06240334(*(undefined8 *)
                           System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
                          ,0);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar10 + 0x4d8))
              (plVar10,*(undefined8 *)puVar1,uVar11,*(undefined8 *)(*plVar10 + 0x4e0));
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar2,
               *(undefined8 *)(*plVar10 + 0x520));
    plVar10 = *(long **)(param_1 + 0x78);
    lVar13 = FUN_0601931c(param_4,0);
    if (lVar13 == 0) goto LAB_0609392c;
    uVar11 = *(undefined8 *)puVar4;
    uVar12 = *(undefined8 *)System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
    if (*(int *)(lVar13 + 0x10) == 0) {
      uVar7 = *(undefined8 *)(param_4 + 0x90);
    }
    else {
      uVar7 = FUN_0601931c(param_4,0);
      uVar7 = FUN_057aaeec(uVar7,*(undefined8 *)PTR_DAT_0727eb68,*(undefined8 *)(param_4 + 0x90),0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar7 = FUN_06240334(uVar7,0);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar10 + 0x518))(plVar10,uVar12,uVar11,uVar7,*(undefined8 *)(*plVar10 + 0x520));
    if (*(char *)(param_4 + 0xe8) != '\0') {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_0609392c;
      (**(code **)(*plVar10 + 0x518))
                (plVar10,*(undefined8 *)System_Func<CancellationToken,_Task<int>>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 0x520));
    }
    if (*(char *)(param_4 + 0xc0) == '\0') {
      plVar10 = *(long **)(param_4 + 0xb8);
      if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar11 = FUN_058e6040(0);
      if (plVar10 == (long *)0x0) goto LAB_0609392c;
      uVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x140));
      if ((uVar8 & 1) == 0) goto LAB_06093924;
      goto LAB_060936d0;
    }
LAB_06093924:
    plVar10 = *(long **)(param_4 + 0xb8);
joined_r0x06093928:
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    plVar9 = *(long **)(param_1 + 0x78);
    uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    if (plVar9 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar9 + 0x518))
              (plVar9,*(undefined8 *)System_Func<VisualElement>_TypeInfo,*(undefined8 *)puVar4,
               uVar11,*(undefined8 *)(*plVar9 + 0x520));
  }
  else {
LAB_06093478:
    plVar10 = *(long **)(param_1 + 0x78);
    uVar11 = *(undefined8 *)(lVar13 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar11 = FUN_06240334(uVar11,0);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar10 + 0x4d8))
              (plVar10,*(undefined8 *)puVar1,uVar11,*(undefined8 *)(*plVar10 + 0x4e0));
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)puVar5,*(undefined8 *)puVar4,*(undefined8 *)puVar2,
               *(undefined8 *)(*plVar10 + 0x520));
    if (param_3 == 0) {
      if (param_4 == 0) goto LAB_0609392c;
      plVar10 = *(long **)(param_1 + 0x78);
      lVar6 = FUN_0601931c(param_4,0);
      if (lVar6 == 0) goto LAB_0609392c;
      uVar11 = *(undefined8 *)puVar4;
      uVar12 = *(undefined8 *)System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
      if (*(int *)(lVar6 + 0x10) == 0) {
        uVar7 = *(undefined8 *)(param_4 + 0x90);
      }
      else {
        uVar7 = FUN_0601931c(param_4,0);
        uVar7 = FUN_057aaeec(uVar7,*(undefined8 *)PTR_DAT_0727eb68,*(undefined8 *)(param_4 + 0x90),0
                            );
      }
      if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar7 = FUN_06240334(uVar7,0);
      if (plVar10 == (long *)0x0) goto LAB_0609392c;
      (**(code **)(*plVar10 + 0x518))(plVar10,uVar12,uVar11,uVar7,*(undefined8 *)(*plVar10 + 0x520))
      ;
    }
    if (*(char *)(lVar13 + 0x59) != '\0') {
      plVar10 = *(long **)(param_1 + 0x78);
      if (plVar10 == (long *)0x0) goto LAB_0609392c;
      (**(code **)(*plVar10 + 0x518))
                (plVar10,*(undefined8 *)System_Func<CancellationToken,_Task<int>>_TypeInfo,
                 *(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 0x520));
    }
    if (*(char *)(lVar13 + 0x68) != '\0') {
LAB_06093700:
      plVar10 = *(long **)(lVar13 + 0x60);
      goto joined_r0x06093928;
    }
    plVar10 = *(long **)(lVar13 + 0x60);
    if (*(int *)(*(long *)PTR_DAT_07280380 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar11 = FUN_058e6040(0);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    uVar8 = (**(code **)(*plVar10 + 0x138))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x140));
    if ((uVar8 & 1) == 0) goto LAB_06093700;
LAB_060936d0:
    plVar10 = *(long **)(param_1 + 0x78);
    if (plVar10 == (long *)0x0) goto LAB_0609392c;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)System_Func<List<InvocationContext>,_bool>_TypeInfo,
               *(undefined8 *)puVar4,*(undefined8 *)puVar2,*(undefined8 *)(*plVar10 + 0x520));
  }
  puVar2 = System_Func<HoverEnterEventArgs>_TypeInfo;
  puVar1 = PTR_DAT_07285080;
  if (param_2 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*param_2 + 0x5a8))
                                (param_2,*(undefined8 *)System_Func<HoverEnterEventArgs>_TypeInfo,
                                 *(undefined8 *)System_Func<InputEventPtr,_InputControl>_TypeInfo,
                                 *(undefined8 *)PTR_DAT_07285080,*(undefined8 *)(*param_2 + 0x5b0));
    puVar3 = System_Func<InputDevice,_string>_TypeInfo;
    plVar9 = *(long **)(param_1 + 0x78);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x2d0));
      plVar9 = (long *)(**(code **)(*param_2 + 0x5a8))
                                 (param_2,*(undefined8 *)puVar2,*(undefined8 *)puVar3,
                                  *(undefined8 *)puVar1,*(undefined8 *)(*param_2 + 0x5b0));
      puVar2 = System_Func<IUnitPort,_IEnumerable<IUnitConnection>>_TypeInfo;
      puVar1 = System_Func<InteractorRegisteredEventArgs>_TypeInfo;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x4d8))
                  (plVar9,*(undefined8 *)System_Func<InteractionGroupUnregisteredEventArgs>_TypeInfo
                   ,*(undefined8 *)PTR_DAT_0727c868,*(undefined8 *)(*plVar9 + 0x4e0));
        (**(code **)(*plVar9 + 0x4d8))
                  (plVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar2,
                   *(undefined8 *)(*plVar9 + 0x4e0));
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x2c8))(plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x2d0));
          return plVar9;
        }
      }
    }
  }
LAB_0609392c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


