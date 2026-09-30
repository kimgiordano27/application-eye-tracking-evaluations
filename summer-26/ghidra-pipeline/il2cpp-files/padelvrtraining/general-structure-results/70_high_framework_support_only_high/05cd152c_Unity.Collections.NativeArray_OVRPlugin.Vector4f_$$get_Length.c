/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Length
ENTRY_POINT: 05cd152c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Length(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w8;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iStack0000000000000008;
  
  plVar6 = *(long **)(in_x9 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x19 + 0xd0);
  iStack0000000000000008 = in_w8 + 1;
  uVar1 = FUN_07175a38(&stack0x00000008,0);
  uVar1 = FUN_06fd2168(uVar7,*(undefined8 *)PTR_DAT_091fcc38,uVar1,0);
  lVar8 = *(long *)PTR_DAT_091a0c08;
  lVar3 = *(long *)(lVar8 + 0x38);
  if (lVar3 == 0) {
    FUN_03d8f2c8(lVar8);
    lVar3 = *(long *)(lVar8 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *plVar6;
  uVar7 = **(undefined8 **)(lVar3 + 0xb8);
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_091faf08) {
        puVar2 = (undefined8 *)(lVar8 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_05cd11a8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_091faf08,1);
LAB_05cd11a8:
  (*(code *)*puVar2)(plVar6,2,uVar1,uVar7,puVar2[1]);
  *(int *)(unaff_x19 + 0x140) = *(int *)(unaff_x19 + 0x144) + 10;
  *(int *)(unaff_x19 + 0x144) = *(int *)(unaff_x19 + 0x144) + 1;
  return;
}


