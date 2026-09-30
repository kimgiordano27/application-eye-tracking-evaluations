/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.BoneCapsule>
ENTRY_POINT: 040c8fc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_BoneCapsule>(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long unaff_x20;
  long *plVar8;
  
  *(undefined1 *)(unaff_x19 + 0x66a) = in_w8;
  lVar7 = *(long *)(unaff_x20 + 0x120);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_071245a8(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      lVar7 = *(long *)(unaff_x20 + 0x120);
    }
    if (DAT_094116e2 == '\0') {
      FUN_03c8f898(PTR_DAT_08e7d108);
      DAT_094116e2 = '\x01';
    }
    plVar8 = (long *)**(undefined8 **)(*(long *)PTR_DAT_08e7d108 + 0xb8);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e7d0f0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x2f) * 0x10 + 0x138);
            goto LAB_040c908c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08e7d0f0,0x2f);
LAB_040c908c:
      uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (lVar7 != 0) {
        FUN_05212f00(lVar7,uVar3,*(undefined8 *)PTR_DAT_08e7d440);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


