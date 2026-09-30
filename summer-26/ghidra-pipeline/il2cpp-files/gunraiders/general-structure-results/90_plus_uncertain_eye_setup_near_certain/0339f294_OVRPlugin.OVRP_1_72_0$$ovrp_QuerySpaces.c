/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_QuerySpaces
ENTRY_POINT: 0339f294
PROGRAM: gunraiders-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_72_0__ovrp_QuerySpaces(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int in_w9;
  ulong uVar11;
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
  
code_r0x0339f294:
  if (in_w9 == 0) {
    thunk_FUN_01c1d1e8(param_1);
  }
  uVar6 = FUN_03295500(0);
  uVar6 = FUN_033704d4(*(undefined8 *)Method_System_Collections_Generic_HashSet<Player>_Clear__,
                       uVar6,unaff_x25,*(undefined8 *)(unaff_x21 + 0x60),0);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      );
  }
  uVar7 = thunk_FUN_01c495e4();
  uVar6 = FUN_03358c64(uVar7,unaff_x28,uVar6,0);
  if (unaff_x27 == (long *)0x0) {
LAB_0339f448:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar10 = *unaff_x27;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
        puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01c72498(unaff_x27,
                        *(long *)
                         Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                        ,1);
OVRPlugin_OVRP_1_72_0__ovrp_RetrieveSpaceQueryResults:
  (*(code *)*puVar8)(unaff_x27,4,uVar6,0,puVar8[1]);
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
    uVar6 = FUN_03295500(0);
    FUN_019b2708(in_stack_00000010);
    uVar7 = (**(code **)(*in_stack_00000010 + 0x1b8))
                      (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x1c0));
    uVar9 = thunk_FUN_01c273e8(Method_UnityEngine_Rendering_GenericPool<XRPass>_Release__);
    FUN_033704d4(uVar9,uVar6,unaff_x25,uVar7,0);
  }
  else {
    do {
      if (*(long *)(unaff_x21 + 0xe0) == 0) {
        FUN_0335c934();
        goto LAB_0339f3e4;
      }
      uVar6 = FUN_0339fa34();
      while( true ) {
        *(undefined8 *)(unaff_x26 + 0x30) = uVar6;
LAB_0339f3e4:
        while( true ) {
          uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar11 & 1) == 0) {
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
            uVar6 = FUN_03307544(&stack0x00000018,0);
            uVar7 = thunk_FUN_01c273e8(
                                      Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                                      );
            FUN_03146988(uVar7,uVar6,0);
            goto LAB_0339f4e4;
          }
        }
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
        if (plVar5 == (long *)0x0) goto LAB_0339f448;
        unaff_x25 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        unaff_x26 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
        FUN_03313b6c(unaff_x26,0);
        *(undefined8 *)(unaff_x26 + 0x10) = unaff_x25;
        if ((unaff_x21 == 0) || (lVar10 = FUN_03392404(), lVar10 == 0)) goto LAB_0339f448;
        uVar6 = FUN_033936cc(lVar10,unaff_x25);
        *(undefined8 *)(unaff_x26 + 0x20) = uVar6;
        if (*(long *)(unaff_x21 + 0xd8) == 0) goto LAB_0339f448;
        uVar6 = FUN_033936cc(*(long *)(unaff_x21 + 0xd8),unaff_x25);
        *(undefined8 *)(unaff_x26 + 0x18) = uVar6;
        if (unaff_x24 == 0) goto LAB_0339f448;
        lVar10 = *(long *)(unaff_x24 + 0x10);
        *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0339f448;
        uVar1 = *(uint *)(unaff_x24 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(unaff_x24 + 0x18) = uVar1 + 1;
          *(long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = unaff_x26;
        }
        else {
          FUN_02d5004c();
        }
        lVar10 = *(long *)(unaff_x26 + 0x20);
        if ((lVar10 == 0) && (lVar10 = *(long *)(unaff_x26 + 0x18), lVar10 == 0)) {
          uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
          if ((uVar11 & 1) == 0) goto LAB_0339f44c;
          plVar5 = *(long **)(unaff_x22 + 0x28);
          if (plVar5 == (long *)0x0) goto LAB_0339f390;
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0339f23c;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0339f224;
        }
        if (*(char *)(lVar10 + 0x80) != '\0') break;
        if (*(long *)(lVar10 + 0x48) == 0) {
          uVar6 = FUN_03395dc8();
          *(undefined8 *)(lVar10 + 0x48) = uVar6;
        }
        plVar5 = (long *)FUN_03396234();
        uVar11 = FUN_0335ce1c();
        if ((uVar11 & 1) == 0) goto LAB_0339f44c;
        if ((plVar5 == (long *)0x0) ||
           (uVar11 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0)),
           (uVar11 & 1) == 0)) {
          uVar6 = FUN_033966b4();
        }
        else {
          uVar6 = FUN_033962a0();
        }
      }
      uVar11 = (**(code **)(*unaff_x19 + 0x1d8))();
    } while ((uVar11 & 1) != 0);
LAB_0339f44c:
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar6 = FUN_03295500(0);
    uVar7 = thunk_FUN_01c273e8(Method_Photon_Voice_Framer<float>__ctor__);
    FUN_0336f2b8(uVar7,uVar6,unaff_x25,0);
  }
LAB_0339f4e4:
  uVar6 = FUN_0335cdc4();
  uVar7 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Player>_Contains__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar7);
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0339f224:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0339f258;
    }
  }
LAB_0339f23c:
  puVar8 = (undefined8 *)
           FUN_01c72498(plVar5,*(long *)
                                Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                        ,0);
LAB_0339f258:
  iVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
  if (3 < iVar3) goto code_r0x0339f26c;
  goto LAB_0339f390;
code_r0x0339f26c:
  unaff_x27 = *(long **)(unaff_x22 + 0x28);
  unaff_x28 = (**(code **)(*unaff_x19 + 0x1c8))();
  param_1 = *(long *)PTR_DAT_042305b0;
  in_w9 = *(int *)(param_1 + 0xe0);
  goto code_r0x0339f294;
}


