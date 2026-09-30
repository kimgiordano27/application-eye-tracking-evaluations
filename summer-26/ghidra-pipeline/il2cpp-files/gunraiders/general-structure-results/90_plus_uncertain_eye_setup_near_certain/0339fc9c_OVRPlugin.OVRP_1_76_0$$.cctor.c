/*
FUNCTION_NAME: OVRPlugin.OVRP_1_76_0$$.cctor
ENTRY_POINT: 0339fc9c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_76_0___cctor(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  
  FUN_01c5d288();
  FUN_01c5d288(PTR_DAT_042305b0);
  FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
              );
  FUN_01c5d288(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
  *(undefined1 *)(unaff_x23 + 0x6cf) = 1;
  if (unaff_x20 == 0) goto LAB_0339fec4;
  lVar8 = *(long *)(unaff_x20 + 0xb8);
  if (lVar8 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
    puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
    plVar12 = *(long **)(unaff_x21 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__)
          {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0339fd60;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar12,*(long *)
                                     Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                            ,0);
LAB_0339fd60:
      iVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (3 < iVar3) {
        if (unaff_x22 != (long *)0x0) {
          plVar12 = *(long **)(unaff_x21 + 0x28);
          uVar5 = (**(code **)(*unaff_x22 + 0x1c8))();
          if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
          }
          uVar6 = FUN_03295500(0);
          uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
          uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
          in_stack_00000008._4_1_ = bVar2 & 1;
          uVar7 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000008 + 4);
          uVar6 = FUN_03383e74(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,uVar6
                               ,uVar13,uVar11,uVar7,0);
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                              );
          }
          uVar5 = FUN_03358c64(0,uVar5,uVar6,0);
          if (plVar12 != (long *)0x0) {
            lVar8 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0339fe90;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar1,1);
LAB_0339fe90:
            (*(code *)*puVar4)(plVar12,4,uVar5,0,puVar4[1]);
            goto LAB_0339fea8;
          }
        }
LAB_0339fec4:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    }
  }
LAB_0339fea8:
  return bVar2 & 1;
}


