/*
FUNCTION_NAME: FUN_041e7664
ENTRY_POINT: 041e7664
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 120
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x041e783c) */

void FUN_041e7664(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_04840ffa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AndAssign__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04590470);
    DAT_04840ffa = 1;
  }
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x41) >> 3 & 1) == 0) {
      plVar7 = *(long **)(param_1 + 0x10);
      uVar2 = FUN_041d57dc(param_1);
      if (plVar7 == (long *)0x0) goto LAB_041e7838;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_04590470) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_041e7724;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)PTR_DAT_04590470,0);
LAB_041e7724:
      plVar7 = (long *)(*(code *)*puVar3)(plVar7,uVar2,param_2,puVar3[1]);
      puVar1 = Method_System_Linq_Expressions_Expression_AndAssign__;
      if (*(int *)(*(long *)Method_System_Linq_Expressions_Expression_AndAssign__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Linq_Expressions_Expression_AndAssign__);
      }
      if (DAT_04840ab0 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AndAssign__);
        DAT_04840ab0 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar1;
      }
      if (plVar7 != *(long **)(*(long *)(lVar4 + 0xb8) + 8)) {
        FUN_041e8770(param_1,plVar7);
        *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 0x800;
      }
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_041e7818;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_041e7818:
        (*(code *)*puVar3)(plVar7,puVar3[1]);
      }
    }
    return;
  }
LAB_041e7838:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


