/*
FUNCTION_NAME: UnityEngine.XR.ARCore.ARCorePlaneSubsystem.ARCoreProvider$$SetRequestedPlaneDetectionMode
ENTRY_POINT: 060b5254
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_ARCore_ARCorePlaneSubsystem_ARCoreProvider__SetRequestedPlaneDetectionMode
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  long *plVar10;
  long unaff_x21;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x23;
  long unaff_x24;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  auVar14 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar2 = PTR_DAT_069fd8d8;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined1 (*) [16])(unaff_x21 + 0x20) = auVar14;
  lVar9 = *(long *)(unaff_x19 + 0xc);
  iVar1 = unaff_x19[0xe];
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar2);
  }
  uVar4 = FUN_054ff750((double)iVar1,0);
  puVar2 = PTR_DAT_06a14918;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  *(undefined8 *)(lVar9 + 0x30) = uVar4;
  plVar10 = *(long **)(unaff_x24 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
                    /* try { // try from 060b52c8 to 061b52cf has its CatchHandler @ 060b5320 */
  FUN_03b6fe3c(uVar4,uVar11,
               *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<AITournament,_int>__,0);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  lVar12 = *(long *)Method_System_Linq_Enumerable_OfType<InternalsVisibleToAttribute>__;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar9 = lVar9 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_060b533c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar9 = FUN_02dd004c(plVar10);
LAB_060b533c:
  lVar9 = thunk_FUN_02db5310(*(undefined8 *)(lVar9 + 8),lVar12);
  plVar10 = (long *)(**(code **)(lVar9 + 8))(plVar10,uVar4,lVar9);
  uVar11 = *(undefined8 *)(unaff_x19 + 0xc);
  uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Linq_Enumerable_OfType<IUIControllerInterface>__);
  FUN_03b78e40(uVar4,uVar11,
               *(undefined8 *)
                Method_System_Linq_Enumerable_OrderBy<AITournament,_AITournament_Tier>__,0);
  puVar2 = Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_060b53ec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02dd004c(plVar10,*(long *)
                                 Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__
                        ,2);
LAB_060b53ec:
  plVar10 = (long *)(*(code *)*puVar5)(plVar10,uVar4,puVar5[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_060b5450;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar2,0);
LAB_060b5450:
  plVar10 = (long *)(*(code *)*puVar5)(0x3f000000,plVar10,puVar5[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_060b54b8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar2,1);
LAB_060b54b8:
  plVar10 = (long *)(*(code *)*puVar5)(0x40000000,plVar10,puVar5[1]);
  puVar3 = Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<string,_IList<VivoxMessage>>>__
  ;
  lVar9 = *(long *)
           Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<string,_IList<VivoxMessage>>>__
  ;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar9 = *(long *)puVar3;
  }
  puVar5 = *(undefined8 **)(lVar9 + 0xb8);
  lVar12 = puVar5[2];
  if (lVar12 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar4 = *puVar5;
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Linq_Enumerable_OfType<IMemberReferenceMapper>__);
    FUN_03b7820c(lVar12,uVar4,*(undefined8 *)Method_System_Linq_Enumerable_OrderBy<AIPlayer,_int>__,
                 0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    *plVar6 = lVar12;
    LeanTween__value(plVar6,lVar12);
  }
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  lVar13 = *(long *)Method_System_Linq_Enumerable_OrderBy<KeyValuePair<uint,_NetworkPrefab>,_uint>__
  ;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar13 + 0x20)) {
        lVar9 = lVar9 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
        goto LAB_060b55ac;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar9 = FUN_02dd004c(plVar10);
LAB_060b55ac:
  lVar9 = thunk_FUN_02db5310(*(undefined8 *)(lVar9 + 8),lVar13);
  plVar10 = (long *)(**(code **)(lVar9 + 8))(plVar10,lVar12,lVar9);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar9 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_060b5624;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar2,4);
LAB_060b5624:
  lVar9 = (*(code *)*puVar5)(plVar10,0,puVar5[1]);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_stack_00000018 = FUN_0481d028(lVar9,*(undefined8 *)PTR_DAT_069fccb0);
  uVar7 = FUN_047e6248(&stack0x00000018,*(undefined8 *)PTR_DAT_069fcca0);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
    LeanTween__value(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031f93a8(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar4 = FUN_047e6288(&stack0x00000018,*(undefined8 *)PTR_DAT_069fcc90);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_060b3248(uVar4,uVar4,&stack0x00000028);
    uVar4 = in_stack_00000028;
    puVar2 = OVRPlugin_SkeletonType_TypeInfo;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xfffffffe;
    LeanTween__value(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


