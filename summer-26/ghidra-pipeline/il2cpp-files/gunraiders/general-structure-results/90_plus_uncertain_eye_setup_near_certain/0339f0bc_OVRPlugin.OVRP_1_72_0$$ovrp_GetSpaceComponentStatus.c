/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceComponentStatus
ENTRY_POINT: 0339f0bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceComponentStatus(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  while( true ) {
    lVar10 = *(long *)(unaff_x24 + 0x10);
    *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
    if (lVar10 == 0) break;
    uVar1 = *(uint *)(unaff_x24 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
      *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x26;
    }
    else {
      FUN_02d5004c();
    }
    lVar10 = *(long *)(unaff_x26 + 0x20);
    if ((lVar10 != 0) || (lVar10 = *(long *)(unaff_x26 + 0x18), lVar10 != 0)) {
      if (*(char *)(lVar10 + 0x80) == '\0') {
        if (*(long *)(lVar10 + 0x48) == 0) {
          uVar8 = FUN_03395dc8();
          *(undefined8 *)(lVar10 + 0x48) = uVar8;
        }
        plVar4 = (long *)FUN_03396234();
        uVar5 = FUN_0335ce1c();
        if ((uVar5 & 1) != 0) {
          if ((plVar4 == (long *)0x0) ||
             (uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0)),
             (uVar5 & 1) == 0)) {
            uVar8 = FUN_033966b4();
          }
          else {
            uVar8 = FUN_033962a0();
          }
          goto LAB_0339f3d0;
        }
      }
      else {
        uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
        if ((uVar5 & 1) != 0) goto LAB_0339f3b4;
      }
LAB_0339f44c:
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar8 = FUN_03295500(0);
      uVar9 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
      FUN_0336f2b8(uVar9,uVar8,unaff_x25,0);
LAB_0339f4e4:
      uVar8 = FUN_0335cdc4();
      uVar9 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Contains__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar8,uVar9);
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar5 & 1) == 0) goto LAB_0339f44c;
    plVar4 = *(long **)(unaff_x22 + 0x28);
    if (plVar4 != (long *)0x0) {
      lVar10 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0339f258;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01c72498(plVar4,*(long *)
                                    Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339f258:
      iVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
      if (3 < iVar2) {
        plVar4 = *(long **)(unaff_x22 + 0x28);
        uVar8 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar9 = FUN_03295500(0);
        uVar9 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<Player>_Clear__,uVar9,
                             unaff_x25,*(undefined8 *)(unaff_x21 + 0x60),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar7 = thunk_FUN_01c495e4();
        uVar8 = FUN_03358c64(uVar7,uVar8,uVar9,0);
        if (plVar4 == (long *)0x0) break;
        lVar10 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
               ) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar4,*(long *)
                                      Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                              ,1);
OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults:
        (*(code *)*puVar6)(plVar4,4,uVar8,0,puVar6[1]);
        unaff_x29 = (undefined8 *)
                    Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__;
      }
    }
    if (*(char *)(unaff_x21 + 0xc0) == '\0') {
      if (*(long *)(unaff_x22 + 0x20) == 0) break;
      iVar2 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
    }
    else {
      iVar2 = *(int *)(unaff_x21 + 0xc4);
    }
    if (iVar2 == 1) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar8 = FUN_03295500(0);
      FUN_019b2708(in_stack_00000010);
      uVar9 = (**(code **)(*in_stack_00000010 + 0x1b8))
                        (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1c0));
      uVar7 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
      FUN_033704d4(uVar7,uVar8,unaff_x25,uVar9,0);
      goto LAB_0339f4e4;
    }
LAB_0339f3b4:
    if (*(long *)(unaff_x21 + 0xe0) == 0) {
      FUN_0335c934();
    }
    else {
      uVar8 = FUN_0339fa34();
LAB_0339f3d0:
      *(undefined8 *)(unaff_x26 + 0x30) = uVar8;
    }
    while( true ) {
      uVar5 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar5 & 1) == 0) {
        FUN_0339d160();
        return;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x188))();
      if (iVar2 == 4) break;
      if (iVar2 != 5) {
        if (iVar2 == 0xd) {
          return;
        }
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar3;
        uVar8 = FUN_03307544(&stack0x00000018,0);
        uVar9 = thunk_FUN_01c273e8(
                                  Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                  );
        FUN_03146988(uVar9,uVar8,0);
        goto LAB_0339f4e4;
      }
    }
    plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar4 == (long *)0x0) break;
    unaff_x25 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    unaff_x26 = thunk_FUN_01c496e0(*unaff_x29);
    FUN_03313b6c(unaff_x26,0);
    *(undefined8 *)(unaff_x26 + 0x10) = unaff_x25;
    if ((unaff_x21 == 0) || (lVar10 = FUN_03392404(), lVar10 == 0)) break;
    uVar8 = FUN_033936cc(lVar10,unaff_x25);
    *(undefined8 *)(unaff_x26 + 0x20) = uVar8;
    if (*(long *)(unaff_x21 + 0xd8) == 0) break;
    uVar8 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),unaff_x25);
    *(undefined8 *)(unaff_x26 + 0x18) = uVar8;
    if (unaff_x24 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


