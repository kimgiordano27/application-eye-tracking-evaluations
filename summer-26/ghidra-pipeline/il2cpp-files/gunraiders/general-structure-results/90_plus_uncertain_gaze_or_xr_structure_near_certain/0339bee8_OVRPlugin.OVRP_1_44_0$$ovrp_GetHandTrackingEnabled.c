/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 0339bee8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


bool OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar11;
  undefined8 in_stack_00000030;
  char cStack0000000000000038;
  char cStack000000000000003c;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uVar3 = FUN_0339c2d0();
  if ((uVar3 & 1) != 0) {
    return cStack0000000000000038 != '\0';
  }
  if ((in_stack_00000058 == (long *)0x0) ||
     (uVar3 = (**(code **)(*in_stack_00000058 + 0x1a8))
                        (in_stack_00000058,*(undefined8 *)(*in_stack_00000058 + 0x1b0)),
     (uVar3 & 1) == 0)) {
    lVar9 = in_stack_00000048;
    if ((unaff_x20 == 0) || (unaff_x22 == 0)) goto LAB_0339c2cc;
    lVar5 = FUN_033966b4();
  }
  else {
    if (cStack000000000000003c == '\0') {
      if (unaff_x20 == 0) goto LAB_0339c2cc;
      if (*(char *)(unaff_x20 + 0x81) != '\0') {
        plVar11 = *(long **)(unaff_x20 + 0x68);
        if (plVar11 == (long *)0x0) goto LAB_0339c2cc;
        lVar9 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0339bfc8;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(plVar11,*(long *)
                                       Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,
                              1);
LAB_0339bfc8:
        in_stack_00000048 = (*(code *)*puVar4)(plVar11);
        goto LAB_0339bfdc;
      }
    }
    else {
LAB_0339bfdc:
      if (unaff_x20 == 0) goto LAB_0339c2cc;
    }
    lVar9 = in_stack_00000048;
    lVar5 = FUN_033962a0();
  }
  if ((in_stack_00000050._4_1_ == '\0') || (lVar5 != lVar9)) {
    uVar3 = FUN_0339c840();
    if ((uVar3 & 1) == 0) {
      return in_stack_00000050._4_1_ != '\0';
    }
    plVar11 = *(long **)(unaff_x20 + 0x68);
    if (plVar11 == (long *)0x0) goto LAB_0339c2cc;
    lVar9 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet<int>_RemoveWhere__) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_0339c0c8;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01c72498(plVar11,*(long *)
                                   Method_System_Collections_Generic_HashSet<int>_RemoveWhere__,0);
FUN_0339c0c8:
    (*(code *)*puVar4)(plVar11);
    puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    if (*(long *)(unaff_x20 + 200) == 0) {
      return true;
    }
    plVar11 = *(long **)(unaff_x22 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0339c140;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar11,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339c140:
      iVar2 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      if (3 < iVar2) {
        if (unaff_x21 == (long *)0x0) goto LAB_0339c2cc;
        plVar11 = *(long **)(unaff_x22 + 0x28);
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
        if (plVar11 == (long *)0x0) goto LAB_0339c2cc;
        lVar9 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0339c254;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498(plVar11,*(long *)puVar1,1);
LAB_0339c254:
        (*(code *)*puVar4)(plVar11,4,uVar6,0,puVar4[1]);
      }
    }
    lVar9 = *(long *)(unaff_x20 + 200);
    in_stack_00000030._4_1_ = 1;
    thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000030 + 4);
    if (lVar9 == 0) {
LAB_0339c2cc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
  }
  return true;
}


