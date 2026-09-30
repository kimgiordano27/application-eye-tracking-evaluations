/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetNodePoseStateRaw
ENTRY_POINT: 0339aea0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetNodePoseStateRaw(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *in_x10;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *plVar13;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0339aeec;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_01c72498();
LAB_0339aeec:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar1 = PTR_DAT_0422fb28;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar11 = FUN_032e935c(plVar5,0,0);
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  if ((uVar11 & 1) != 0) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar6 = FUN_03295500(0);
    uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IResourceLocation>__ctor__)
    ;
    FUN_0336f2b8(uVar7,uVar6);
LAB_0339b1b4:
    uVar6 = FUN_0335cdc4();
    uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IResourceLocation>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar7);
  }
  plVar13 = *(long **)(unaff_x22 + 0x28);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0339af8c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c72498(plVar13,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_0339af8c:
    iVar3 = (*(code *)*puVar4)(plVar13,puVar4[1]);
    if (3 < iVar3) {
      if (unaff_x19 == (long *)0x0) goto LAB_0339b170;
      plVar13 = *(long **)(unaff_x22 + 0x28);
      uVar6 = (**(code **)(*unaff_x19 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar7 = FUN_03295500(0);
      uVar7 = FUN_033704d4(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<IResourceLocation>__ctor__,
                           uVar7);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar8 = thunk_FUN_01c495e4();
      uVar6 = FUN_03358c64(uVar8,uVar6,uVar7,0);
      if (plVar13 == (long *)0x0) goto LAB_0339b170;
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0339b0a0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar2,1);
LAB_0339b0a0:
      (*(code *)*puVar4)(plVar13,4,uVar6,0,puVar4[1]);
    }
  }
  lVar10 = *unaff_x20;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar11 = FUN_032ea0d4(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = *unaff_x20;
    uVar6 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_032e04b8(uVar6,0);
    uVar11 = FUN_032ea0d4(lVar10,uVar6,0);
    if ((uVar11 & 1) != 0) {
      plVar13 = (long *)*unaff_x20;
      if (plVar13 == (long *)0x0) {
LAB_0339b170:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar11 = (**(code **)(*plVar13 + 0x298))(plVar13,plVar5,*(undefined8 *)(*plVar13 + 0x2a0));
      if ((uVar11 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar6 = FUN_03295500(0);
        FUN_019b2708(plVar5);
        uVar7 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
        plVar5 = (long *)*unaff_x20;
        FUN_019b2708(plVar5);
        uVar8 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
        uVar9 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<IResourceLocation>_IntersectWith__
                                  );
        FUN_033704d4(uVar9,uVar6,uVar7,uVar8,0);
        goto LAB_0339b1b4;
      }
    }
  }
  *unaff_x20 = (long)plVar5;
  uVar6 = FUN_03395e54();
  *unaff_x21 = uVar6;
  return;
}


