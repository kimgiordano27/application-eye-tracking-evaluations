/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$.cctor
ENTRY_POINT: 0339af3c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0___cctor(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *plVar11;
  long *unaff_x27;
  long unaff_x28;
  long *plVar12;
  
  lVar7 = *unaff_x25;
  plVar12 = *(long **)(unaff_x28 + 0x7d8);
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *plVar12) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0339af8c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339af8c:
  iVar1 = (*(code *)*puVar2)();
  if (3 < iVar1) {
    if (unaff_x19 == (long *)0x0) goto LAB_0339b170;
    plVar11 = *(long **)(unaff_x22 + 0x28);
    uVar3 = (**(code **)(*unaff_x19 + 0x1c8))();
    if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
    }
    uVar4 = FUN_03295500(0);
    uVar4 = FUN_033704d4(*(undefined8 *)
                          Method_System_Collections_Generic_HashSet<IResourceLocation>__ctor__,uVar4
                        );
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        );
    }
    uVar5 = thunk_FUN_01c495e4();
    uVar3 = FUN_03358c64(uVar5,uVar3,uVar4,0);
    if (plVar11 == (long *)0x0) goto LAB_0339b170;
    lVar8 = *plVar11;
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_0339b0a0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar11,lVar7,1);
LAB_0339b0a0:
    (*(code *)*puVar2)(plVar11,4,uVar3,0,puVar2[1]);
  }
  lVar7 = *unaff_x20;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_032ea0d4(lVar7,0,0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *unaff_x20;
    uVar3 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032e04b8(uVar3,0);
    uVar9 = FUN_032ea0d4(lVar7,uVar3,0);
    if ((uVar9 & 1) != 0) {
      if ((long *)*unaff_x20 == (long *)0x0) {
LAB_0339b170:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar9 = (**(code **)(*(long *)*unaff_x20 + 0x298))();
      if ((uVar9 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar3 = FUN_03295500(0);
        FUN_019b2708();
        uVar4 = (**(code **)(*unaff_x24 + 0x2c8))();
        plVar12 = (long *)*unaff_x20;
        FUN_019b2708(plVar12);
        uVar5 = (**(code **)(*plVar12 + 0x2c8))(plVar12,*(undefined8 *)(*plVar12 + 0x2d0));
        uVar6 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<IResourceLocation>_IntersectWith__
                                  );
        FUN_033704d4(uVar6,uVar3,uVar4,uVar5,0);
        uVar3 = FUN_0335cdc4();
        uVar4 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<IResourceLocation>_Add__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar3,uVar4);
      }
    }
  }
  *unaff_x20 = (long)unaff_x24;
  uVar3 = FUN_03395e54();
  *unaff_x21 = uVar3;
  return;
}


