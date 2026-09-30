/*
FUNCTION_NAME: OVRPlugin.OVRP_0_5_0$$.cctor
ENTRY_POINT: 03396400
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_0_5_0___cctor(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  long *plVar10;
  long *unaff_x27;
  
  FUN_033704d4(param_1);
  if (*(int *)(*(long *)
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      );
  }
  thunk_FUN_01c495e4();
  FUN_03358c64();
  if (unaff_x24 != (long *)0x0) {
    lVar7 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_033964a8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_033964a8:
    (*(code *)*puVar2)();
    FUN_03396bc0();
    if (unaff_x21 != (long *)0x0) {
      uVar3 = (**(code **)(*unaff_x21 + 0x188))();
      plVar10 = *(long **)(unaff_x22 + 0x28);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03396550;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_01c72498(plVar10,*unaff_x27,0);
LAB_03396550:
        iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
        if (2 < iVar1) {
          if (unaff_x19 != (long *)0x0) {
            plVar10 = *(long **)(unaff_x22 + 0x28);
            uVar4 = (**(code **)(*unaff_x19 + 0x1c8))();
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
            }
            uVar5 = FUN_03295500(0);
            thunk_FUN_01c5d21c();
            uVar5 = FUN_033704d4(*(undefined8 *)Method_GenericPooler<FriendButton>_PoolInstantiate__
                                 ,uVar5);
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                                );
            }
            uVar6 = thunk_FUN_01c495e4();
            uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
            if (plVar10 != (long *)0x0) {
              lVar7 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x27) {
                    puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                    goto LAB_03396678;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar2 = (undefined8 *)FUN_01c72498(plVar10,*unaff_x27,1);
LAB_03396678:
              (*(code *)*puVar2)(plVar10,3,uVar4,0,puVar2[1]);
              return uVar3;
            }
          }
          goto LAB_033966b0;
        }
      }
      return uVar3;
    }
  }
LAB_033966b0:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


