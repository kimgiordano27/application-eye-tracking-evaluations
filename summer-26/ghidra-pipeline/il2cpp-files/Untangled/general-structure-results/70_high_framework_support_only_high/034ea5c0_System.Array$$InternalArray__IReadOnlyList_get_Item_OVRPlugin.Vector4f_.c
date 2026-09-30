/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 034ea5c0
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector4f>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  long unaff_x22;
  float fVar7;
  
  lVar6 = *(long *)(unaff_x19 + 0x40);
  if (*(char *)(unaff_x22 + 0xc5b) == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    *(undefined1 *)(unaff_x22 + 0xc5b) = 1;
  }
  puVar2 = PTR_DAT_06d02c10;
  if (lVar6 != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x50);
    lVar4 = *(long *)(*(long *)PTR_DAT_06d02c10 + 0xb8);
    FUN_066d4f80(fVar7 * *(float *)(lVar4 + 0xc),fVar7 * *(float *)(lVar4 + 0x10),
                 fVar7 * *(float *)(lVar4 + 0x14),lVar6,0);
    lVar6 = *(long *)(unaff_x19 + 0x40);
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    puVar1 = PTR_DAT_06d01e20;
    if (lVar6 != 0) {
      puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_066d3f5c(*puVar5,puVar5[1],puVar5[2],lVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar3 = FUN_066ca6a0();
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        FUN_066d51a4();
        *(undefined8 *)(unaff_x19 + 0x48) = unaff_x20;
        thunk_FUN_02f411dc(unaff_x19 + 0x48);
        lVar6 = *(long *)(unaff_x19 + 0x40);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        if (lVar6 != 0) {
          puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
          FUN_066d3f5c(*puVar5,puVar5[1],puVar5[2],lVar6,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


