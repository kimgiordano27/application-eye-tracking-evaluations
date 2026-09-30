/*
FUNCTION_NAME: FUN_04287b50
ENTRY_POINT: 04287b50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04287cac) */

void FUN_04287b50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04841802 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04592fe0);
    thunk_FUN_01efb3a4(PTR_DAT_04592fd8);
    DAT_04841802 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar4 = FUN_04286b2c(param_1);
    if (lVar4 == 0) {
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
    }
    puVar3 = PTR_DAT_04592fe0;
    puVar2 = PTR_DAT_04592fd8;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    FUN_04287a08(param_1,lVar4);
    plVar5 = (long *)FUN_03322794(**(undefined4 **)(*(long *)puVar2 + 0xb8),*(undefined8 *)puVar3);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar5,lVar4,0);
    FUN_04286fe0(param_1,plVar5,param_2);
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04287c84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_04287c84:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


