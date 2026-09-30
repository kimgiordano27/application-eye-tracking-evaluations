/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 06e26284
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06e2643c) */
/* WARNING: Removing unreachable block (ram,0x06e26438) */
/* WARNING: Removing unreachable block (ram,0x06e26480) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__ToArray(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  long *plStack00000000000000a8;
  
  puVar1 = PTR_DAT_0ac09ba8;
  uStack0000000000000048 = 0;
  uStack0000000000000050 = param_1;
  do {
    plStack00000000000000a8 = param_2;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e262e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar1,0);
LAB_06e262e8:
    uVar6 = (*(code *)*puVar3)(param_2,puVar3[1]);
    plVar2 = plStack00000000000000a8;
    if ((uVar6 & 1) == 0) {
      if (plStack00000000000000a8 == (long *)0x0) goto LAB_06e2642c;
      lVar4 = *plStack00000000000000a8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_06e26404;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plStack00000000000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04980b34(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06e2636c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar2,lVar4,0);
LAB_06e2636c:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    memcpy(&stack0x00000058,&stack0x00000000,0x48);
    FUN_06e25d38();
    param_2 = plStack00000000000000a8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06e26420;
    }
  }
LAB_06e26404:
  puVar3 = (undefined8 *)FUN_04980e68(plStack00000000000000a8,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e26420:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_06e2642c:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


