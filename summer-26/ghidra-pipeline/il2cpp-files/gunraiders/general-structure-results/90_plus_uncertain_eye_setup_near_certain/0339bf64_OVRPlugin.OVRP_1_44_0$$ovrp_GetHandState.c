/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandState
ENTRY_POINT: 0339bf64
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_44_0__ovrp_GetHandState(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long in_x9;
  int *in_x10;
  int *piVar10;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar11;
  undefined8 in_stack_00000030;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  do {
    in_x9 = in_x9 + -1;
    piVar10 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_01c72498();
      goto LAB_0339bfc8;
    }
    plVar11 = (long *)(in_x10 + 2);
    in_x10 = piVar10;
  } while (*plVar11 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
LAB_0339bfc8:
  lVar4 = (*(code *)*puVar3)();
  in_stack_00000048 = lVar4;
  if (unaff_x20 == 0) goto LAB_0339c2cc;
  lVar5 = FUN_033962a0();
  if ((in_stack_00000050._4_1_ == '\0') || (lVar5 != lVar4)) {
    uVar6 = FUN_0339c840();
    if ((uVar6 & 1) == 0) {
      return in_stack_00000050._4_1_ != '\0';
    }
    plVar11 = *(long **)(unaff_x20 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_0339c2cc;
    lVar4 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_0339c0c8;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar11,*(long *)
                                   Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
FUN_0339c0c8:
    (*(code *)*puVar3)(plVar11);
    puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    if (*(long *)(unaff_x20 + 200) == 0) {
      return true;
    }
    plVar11 = *(long **)(unaff_x22 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar4 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0339c140;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(plVar11,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c140:
      iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (3 < iVar2) {
        if (unaff_x21 == (long *)0x0) goto LAB_0339c2cc;
        plVar11 = *(long **)(unaff_x22 + 0x28);
        uVar7 = (**(code **)(*unaff_x21 + 0x1c8))();
        if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
        }
        uVar8 = FUN_03295500(0);
        uVar8 = FUN_033704d4(*(undefined8 *)
                              Method_System_Collections_Generic_HashSet<int>_UnionWith__,uVar8,
                             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x50),0);
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                            );
        }
        uVar9 = thunk_FUN_01c495e4();
        uVar7 = FUN_03358c64(uVar9,uVar7,uVar8,0);
        if (plVar11 == (long *)0x0) goto LAB_0339c2cc;
        lVar4 = *plVar11;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0339c254;
            }
            uVar6 = uVar6 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar1,1);
LAB_0339c254:
        (*(code *)*puVar3)(plVar11,4,uVar7,0,puVar3[1]);
      }
    }
    lVar4 = *(long *)(unaff_x20 + 200);
    in_stack_00000030._4_1_ = 1;
    thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000030 + 4);
    if (lVar4 == 0) {
LAB_0339c2cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
  }
  return true;
}


