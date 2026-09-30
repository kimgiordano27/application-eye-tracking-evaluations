/*
FUNCTION_NAME: FUN_04287d60
ENTRY_POINT: 04287d60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04287ee4) */

void FUN_04287d60(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_04841803 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458b658);
    thunk_FUN_01efb3a4(PTR_DAT_04592fd8);
    DAT_04841803 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = FUN_04286b2c(param_1);
    if (lVar3 == 0) {
      plVar4 = *(long **)(param_1 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_04287edc;
      lVar3 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
    }
    FUN_04287a08(param_1,lVar3);
    if (param_2 == 0) {
LAB_04287edc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    uVar8 = *(undefined4 *)(param_2 + 0x24);
    uVar1 = **(undefined4 **)(*(long *)PTR_DAT_04592fd8 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_0458b658 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar4 = (long *)FUN_041e0bc8(uVar9,uVar8,uVar1,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar4,lVar3,0);
    FUN_04286fe0(param_1,plVar4,param_2);
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04287eb8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_04287eb8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}


