/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector2f>
ENTRY_POINT: 03046c2c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector2f>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x24;
  long *plVar9;
  
  lVar3 = *unaff_x20;
  plVar9 = *(long **)(unaff_x24 + 0x6b8);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *plVar9) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_03046d5c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_03046d5c:
  (*(code *)*puVar1)(0);
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 != (long *)0x0) {
    uVar2 = FUN_05ef2cf0();
    lVar3 = *plVar6;
    uVar7 = *(undefined8 *)PTR_DAT_065ca6e0;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    uVar8 = *(undefined8 *)PTR_DAT_065d9fa8;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar9) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
          goto LAB_03046ef0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*plVar9,0xb);
LAB_03046ef0:
    (*(code *)*puVar1)(plVar6,uVar7,uVar8,uVar2,puVar1[1]);
    plVar6 = *(long **)(unaff_x19 + 0x20);
    if (plVar6 != (long *)0x0) {
      uVar2 = FUN_05ef2cf0();
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar7 = *(undefined8 *)PTR_DAT_065ca6c0;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *plVar9) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
            goto LAB_03047024;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar6,*plVar9,7);
LAB_03047024:
      (*(code *)*puVar1)(0,plVar6,uVar7,uVar2,puVar1[1]);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x78) = 1;
  return;
}


