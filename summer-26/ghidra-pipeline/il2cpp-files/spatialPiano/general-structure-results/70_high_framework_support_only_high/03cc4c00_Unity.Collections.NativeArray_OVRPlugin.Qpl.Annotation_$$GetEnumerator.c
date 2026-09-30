/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetEnumerator
ENTRY_POINT: 03cc4c00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03cc4df8) */
/* WARNING: Removing unreachable block (ram,0x03cc4e94) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetEnumerator(code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  
  plVar2 = (long *)(*param_1)();
  puVar1 = PTR_DAT_067c91b8;
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* try { // try from 03cc4c6c to 03dc4cbb has its CatchHandler @ 03cc4c6c
                       catch() { ... } // from try @ 03cc4c6c with catch @ 03cc4c6c
                       catch() { ... } // from try @ 03cc4cec with catch @ 03cc4c6c
                       catch() { ... } // from try @ 03cc4d34 with catch @ 03cc4c6c
                       catch() { ... } // from try @ 03cc4d64 with catch @ 03cc4c6c
                       catch() { ... } // from try @ 03cc4de4 with catch @ 03cc4c6c */
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cc4c70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar2,*(long *)puVar1,0);
LAB_03cc4c70:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_03cc4dec;
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_03cc4d74;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x78);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03cc4cf4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar2,lVar4,0);
LAB_03cc4cf4:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    FUN_03cc4888();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03cc4de0;
    }
  }
LAB_03cc4d74:
  puVar3 = (undefined8 *)FUN_02f421d0(plVar2,*(long *)PTR_DAT_067c91b0,0);
LAB_03cc4de0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_03cc4dec:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


