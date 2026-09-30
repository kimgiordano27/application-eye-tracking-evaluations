/*
FUNCTION_NAME: OVRPlugin.OVRP_1_43_0$$.cctor
ENTRY_POINT: 0339be6c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_43_0___cctor(long param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar12;
  long unaff_x25;
  undefined8 in_stack_00000030;
  char in_stack_00000038;
  char cStack000000000000003c;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  char cStack0000000000000054;
  long *in_stack_00000058;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x228));
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              );
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<int>_UnionWith__);
  *(undefined1 *)(unaff_x25 + 0x6bd) = 1;
  cStack0000000000000054 = '\0';
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  cStack000000000000003c = '\0';
  in_stack_00000038 = '\0';
  uVar4 = FUN_0339c2d0();
  if ((uVar4 & 1) != 0) {
    return in_stack_00000038 != '\0';
  }
  if ((in_stack_00000058 == (long *)0x0) ||
     (uVar4 = (**(code **)(*in_stack_00000058 + 0x1a8))
                        (in_stack_00000058,*(undefined8 *)(*in_stack_00000058 + 0x1b0)),
     (uVar4 & 1) == 0)) {
    cVar1 = cStack0000000000000054;
    lVar10 = in_stack_00000048;
    if ((unaff_x20 == 0) || (unaff_x22 == 0)) goto LAB_0339c2cc;
    lVar6 = FUN_033966b4();
  }
  else {
    if (cStack000000000000003c == '\0') {
      if (unaff_x20 == 0) goto LAB_0339c2cc;
      if (*(char *)(unaff_x20 + 0x81) != '\0') {
        plVar12 = *(long **)(unaff_x20 + 0x68);
        if (plVar12 == (long *)0x0) goto LAB_0339c2cc;
        lVar10 = *plVar12;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0339bfc8;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01c72498(plVar12,*(long *)
                                       Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,
                              1);
LAB_0339bfc8:
        in_stack_00000048 = (*(code *)*puVar5)(plVar12);
        goto LAB_0339bfdc;
      }
    }
    else {
LAB_0339bfdc:
      if (unaff_x20 == 0) goto LAB_0339c2cc;
    }
    lVar10 = in_stack_00000048;
    lVar6 = FUN_033962a0();
    cVar1 = cStack0000000000000054;
  }
  if ((cVar1 == '\0') || (lVar6 != lVar10)) {
    uVar4 = FUN_0339c840();
    if ((uVar4 & 1) == 0) {
      return cVar1 != '\0';
    }
    plVar12 = *(long **)(unaff_x20 + 0x68);
    if (plVar12 == (long *)0x0) goto LAB_0339c2cc;
    lVar10 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_0339c0c8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01c72498(plVar12,*(long *)
                                   Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
FUN_0339c0c8:
    (*(code *)*puVar5)(plVar12);
    puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    if (*(long *)(unaff_x20 + 200) == 0) {
      return true;
    }
    plVar12 = *(long **)(unaff_x22 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar10 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0339c140;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01c72498(plVar12,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c140:
      iVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (3 < iVar3) {
        if (unaff_x21 == (long *)0x0) goto LAB_0339c2cc;
        plVar12 = *(long **)(unaff_x22 + 0x28);
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
        if (plVar12 == (long *)0x0) goto LAB_0339c2cc;
        lVar10 = *plVar12;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0339c254;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar2,1);
LAB_0339c254:
        (*(code *)*puVar5)(plVar12,4,uVar7,0,puVar5[1]);
      }
    }
    lVar10 = *(long *)(unaff_x20 + 200);
    in_stack_00000030._4_1_ = 1;
    thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000030 + 4);
    if (lVar10 == 0) {
LAB_0339c2cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(lVar10 + 0x18))(*(undefined8 *)(lVar10 + 0x40));
  }
  return true;
}


