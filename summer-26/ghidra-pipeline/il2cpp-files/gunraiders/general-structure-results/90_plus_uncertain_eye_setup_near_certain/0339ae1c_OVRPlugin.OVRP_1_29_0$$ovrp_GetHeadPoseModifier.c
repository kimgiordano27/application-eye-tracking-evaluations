/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 0339ae1c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  if ((unaff_x25 == 0) || (*(char *)(unaff_x25 + 0xb4) == '\0')) {
    if ((unaff_x24 == 0) || (*(char *)(unaff_x24 + 0xdc) == '\0')) {
      if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_0339b170;
      iVar3 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x10);
    }
    else {
      iVar3 = *(int *)(unaff_x24 + 0xe0);
    }
  }
  else {
    iVar3 = *(int *)(unaff_x25 + 0xb8);
  }
  if (iVar3 != 0) {
    if (*(int *)(*(long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    auVar14 = FUN_0338261c();
    if (*(long *)(unaff_x22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    plVar13 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0x58);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_JSONNode>_MoveNext__
           ) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0339aeec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c72498(plVar13,*(long *)
                                   Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_JSONNode>_MoveNext__
                          ,0);
LAB_0339aeec:
    plVar13 = (long *)(*(code *)*puVar4)(plVar13,auVar14._0_8_,auVar14._8_8_,puVar4[1]);
    puVar1 = PTR_DAT_0422fb28;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032e935c(plVar13,0,0);
    puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    if ((uVar10 & 1) != 0) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar5 = FUN_03295500(0);
      uVar6 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_HashSet<IResourceLocation>__ctor__
                                );
      FUN_0336f2b8(uVar6,uVar5);
LAB_0339b1b4:
      uVar5 = FUN_0335cdc4();
      uVar6 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<IResourceLocation>_Add__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar5,uVar6);
    }
    plVar12 = *(long **)(unaff_x22 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0339af8c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar12,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339af8c:
      iVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (3 < iVar3) {
        if (unaff_x19 == (long *)0x0) goto LAB_0339b170;
        plVar12 = *(long **)(unaff_x22 + 0x28);
        uVar5 = (**(code **)(*unaff_x19 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar6 = FUN_03295500(0);
        uVar6 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<IResourceLocation>__ctor__,
                             uVar6);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar7 = thunk_FUN_01c495e4();
        uVar5 = FUN_03358c64(uVar7,uVar5,uVar6,0);
        if (plVar12 == (long *)0x0) goto LAB_0339b170;
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0339b0a0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar2,1);
LAB_0339b0a0:
        (*(code *)*puVar4)(plVar12,4,uVar5,0,puVar4[1]);
      }
    }
    lVar9 = *unaff_x20;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032ea0d4(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      lVar9 = *unaff_x20;
      uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__
      ;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_032e04b8(uVar5,0);
      uVar10 = FUN_032ea0d4(lVar9,uVar5,0);
      if ((uVar10 & 1) != 0) {
        plVar12 = (long *)*unaff_x20;
        if (plVar12 == (long *)0x0) {
LAB_0339b170:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,plVar13,*(undefined8 *)(*plVar12 + 0x2a0));
        if ((uVar10 & 1) == 0) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar5 = FUN_03295500(0);
          FUN_019b2708(plVar13);
          uVar6 = (**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
          plVar13 = (long *)*unaff_x20;
          FUN_019b2708(plVar13);
          uVar7 = (**(code **)(*plVar13 + 0x2c8))(plVar13,*(undefined8 *)(*plVar13 + 0x2d0));
          uVar8 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<IResourceLocation>_IntersectWith__
                                    );
          FUN_033704d4(uVar8,uVar5,uVar6,uVar7,0);
          goto LAB_0339b1b4;
        }
      }
    }
    *unaff_x20 = (long)plVar13;
    uVar5 = FUN_03395e54();
    *unaff_x21 = uVar5;
  }
  return;
}


