/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetPassthroughCapabilityFlags
ENTRY_POINT: 0339fd18
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


byte OVRPlugin_OVRP_1_78_0__ovrp_GetPassthroughCapabilityFlags
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  byte unaff_w19;
  long unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  long *plVar10;
  long *unaff_x22;
  undefined8 uVar11;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (in_x9 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0339fd60;
      }
      in_x9 = in_x9 + -1;
      piVar8 = piVar8 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_0339fd60:
  iVar1 = (*(code *)*puVar2)();
  if (3 < iVar1) {
    if (unaff_x22 != (long *)0x0) {
      plVar10 = *(long **)(unaff_x21 + 0x28);
      uVar3 = (**(code **)(*unaff_x22 + 0x1c8))();
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar4 = FUN_03295500(0);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
      in_stack_00000008._4_1_ = unaff_w19 & 1;
      uVar5 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,(long)&stack0x00000008 + 4);
      uVar4 = FUN_03383e74(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,uVar4,
                           uVar11,uVar9,uVar5,0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar3 = FUN_03358c64(0,uVar3,uVar4,0);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0339fe90;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)FUN_01c72498(plVar10,*unaff_x25,1);
LAB_0339fe90:
        (*(code *)*puVar2)(plVar10,4,uVar3,0,puVar2[1]);
        goto LAB_0339fea8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
LAB_0339fea8:
  return unaff_w19 & 1;
}


