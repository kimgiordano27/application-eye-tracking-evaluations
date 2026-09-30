/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetSkeleton
ENTRY_POINT: 0339bff8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_44_0__ovrp_GetSkeleton(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar10;
  long unaff_x26;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  
  lVar3 = FUN_033962a0();
  if ((in_stack_00000050._4_1_ == '\0') || (lVar3 != unaff_x26)) {
    uVar4 = FUN_0339c840();
    if ((uVar4 & 1) == 0) {
      return in_stack_00000050._4_1_ != '\0';
    }
    plVar10 = *(long **)(unaff_x20 + 0x68);
    if (plVar10 == (long *)0x0) goto LAB_0339c2cc;
    lVar3 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto FUN_0339c0c8;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01c72498(plVar10,*(long *)
                                   Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
FUN_0339c0c8:
    (*(code *)*puVar5)(plVar10);
    puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    if (*(long *)(unaff_x20 + 200) == 0) {
      return true;
    }
    plVar10 = *(long **)(unaff_x22 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar3 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0339c140;
          }
          uVar4 = uVar4 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c140:
      iVar2 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if (3 < iVar2) {
        if (unaff_x21 == (long *)0x0) goto LAB_0339c2cc;
        plVar10 = *(long **)(unaff_x22 + 0x28);
        uVar6 = (**(code **)(*unaff_x21 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar7 = FUN_03295500(0);
        uVar7 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<int>_UnionWith__,uVar7,
                             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x50),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar8 = thunk_FUN_01c495e4();
        uVar6 = FUN_03358c64(uVar8,uVar6,uVar7,0);
        if (plVar10 == (long *)0x0) goto LAB_0339c2cc;
        lVar3 = *plVar10;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0339c254;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,1);
LAB_0339c254:
        (*(code *)*puVar5)(plVar10,4,uVar6,0,puVar5[1]);
      }
    }
    lVar3 = *(long *)(unaff_x20 + 200);
    in_stack_00000030._4_1_ = 1;
    thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000030 + 4);
    if (lVar3 == 0) {
LAB_0339c2cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
  }
  return true;
}


