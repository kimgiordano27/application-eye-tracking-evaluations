/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_RetrieveSpaceQueryResults
ENTRY_POINT: 0339f370
PROGRAM: gunraiders-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x0339f370:
  (*(code *)*param_1)(unaff_x27,4,unaff_x28,0,param_1[1]);
  puVar2 = Method_System_Collections_Generic_HashSet<LabelScopeInfo>_Contains__;
LAB_0339f390:
  if (*(char *)(unaff_x21 + 0xc0) == '\0') {
    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0339f448;
    iVar3 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
  }
  else {
    iVar3 = *(int *)(unaff_x21 + 0xc4);
  }
  if (iVar3 == 1) {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    FUN_019b2708(in_stack_00000010);
    uVar11 = (**(code **)(*in_stack_00000010 + 0x1b8))
                       (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1c0));
    uVar8 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
    FUN_033704d4(uVar8,uVar9,unaff_x25,uVar11,0);
  }
  else {
    do {
      if (*(long *)(unaff_x21 + 0xe0) == 0) {
        FUN_0335c934();
        goto LAB_0339f3e4;
      }
      uVar9 = FUN_0339fa34();
      while( true ) {
        *(undefined8 *)(unaff_x26 + 0x30) = uVar9;
LAB_0339f3e4:
        while( true ) {
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) == 0) {
            FUN_0339d160();
            return;
          }
          iVar3 = (**(code **)(*unaff_x19 + 0x188))();
          if (iVar3 == 4) break;
          if (iVar3 != 5) {
            if (iVar3 == 0xd) {
              return;
            }
            FUN_019b2708();
            uVar4 = (**(code **)(*unaff_x19 + 0x188))();
            in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
            in_stack_00000020 = 0xffffffffffffffff;
            in_stack_00000028 = uVar4;
            uVar9 = FUN_03307544(&stack0x00000018,0);
            uVar11 = thunk_FUN_01c273e8(
                                       Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                       );
            FUN_03146988(uVar11,uVar9,0);
            goto LAB_0339f4e4;
          }
        }
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar5 == (long *)0x0) goto LAB_0339f448;
        unaff_x25 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        unaff_x26 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
        FUN_03313b6c(unaff_x26,0);
        *(undefined8 *)(unaff_x26 + 0x10) = unaff_x25;
        if ((unaff_x21 == 0) || (lVar6 = FUN_03392404(), lVar6 == 0)) goto LAB_0339f448;
        uVar9 = FUN_033936cc(lVar6,unaff_x25);
        *(undefined8 *)(unaff_x26 + 0x20) = uVar9;
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_0339f448;
        uVar9 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        *(undefined8 *)(unaff_x26 + 0x18) = uVar9;
        if (unaff_x24 == 0) goto LAB_0339f448;
        lVar6 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0339f448;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x26;
        }
        else {
          FUN_02d5004c();
        }
        lVar6 = *(long *)(unaff_x26 + 0x20);
        if ((lVar6 == 0) && (lVar6 = *(long *)(unaff_x26 + 0x18), lVar6 == 0)) {
          uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar10 & 1) == 0) goto LAB_0339f44c;
          plVar5 = *(long **)(unaff_x22 + 0x28);
          if (plVar5 == (long *)0x0) goto LAB_0339f390;
          lVar6 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar10 == 0) goto LAB_0339f23c;
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0339f224;
        }
        if (*(char *)(lVar6 + 0x80) != '\0') break;
        if (*(long *)(lVar6 + 0x48) == 0) {
          uVar9 = FUN_03395dc8();
          *(undefined8 *)(lVar6 + 0x48) = uVar9;
        }
        plVar5 = (long *)FUN_03396234();
        uVar10 = FUN_0335ce1c();
        if ((uVar10 & 1) == 0) goto LAB_0339f44c;
        if ((plVar5 == (long *)0x0) ||
           (uVar10 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
           (uVar10 & 1) == 0)) {
          uVar9 = FUN_033966b4();
        }
        else {
          uVar9 = FUN_033962a0();
        }
      }
      uVar10 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar10 & 1) != 0);
LAB_0339f44c:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar9 = FUN_03295500(0);
    uVar11 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
    FUN_0336f2b8(uVar11,uVar9,unaff_x25,0);
  }
LAB_0339f4e4:
  uVar9 = FUN_0335cdc4();
  uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Contains__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar9,uVar11);
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_0339f224:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0339f258;
    }
  }
LAB_0339f23c:
  puVar7 = (undefined8 *)
           FUN_01c72498(plVar5,*(long *)
                                Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                        ,0);
LAB_0339f258:
  iVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
  if (3 < iVar3) goto code_r0x0339f26c;
  goto LAB_0339f390;
code_r0x0339f26c:
  unaff_x27 = *(long **)(unaff_x22 + 0x28);
  uVar9 = (**(code **)(*unaff_x19 + 0x1c8))();
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  uVar11 = FUN_03295500(0);
  uVar11 = FUN_033704d4(*(undefined8 *)Method_System_Collections_Generic_HashSet<Player>_Clear__,
                        uVar11,unaff_x25,*(undefined8 *)(unaff_x21 + 0x60),0);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      );
  }
  uVar8 = thunk_FUN_01c495e4();
  unaff_x28 = FUN_03358c64(uVar8,uVar9,uVar11,0);
  if (unaff_x27 == (long *)0x0) {
LAB_0339f448:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar6 = *unaff_x27;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
        param_1 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto code_r0x0339f370;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  param_1 = (undefined8 *)
            FUN_01c72498(unaff_x27,
                         *(long *)
                          Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                         ,1);
  goto code_r0x0339f370;
}


