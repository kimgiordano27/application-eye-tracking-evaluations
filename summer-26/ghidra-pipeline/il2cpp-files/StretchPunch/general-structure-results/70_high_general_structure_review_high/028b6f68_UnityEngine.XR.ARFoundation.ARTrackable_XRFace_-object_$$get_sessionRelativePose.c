/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.ARTrackable<XRFace,-object>$$get_sessionRelativePose
ENTRY_POINT: 028b6f68
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
UnityEngine_XR_ARFoundation_ARTrackable<XRFace,_object>__get_sessionRelativePose
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 unaff_x21;
  long *unaff_x23;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = unaff_x21;
  do {
    if ((param_1 == 0) ||
       (uVar2 = (**(code **)(param_1 + 0x18))
                          (*(undefined8 *)(param_1 + 0x40),auVar7._0_8_,auVar7._8_8_,
                           *(undefined8 *)(param_1 + 0x28)), (uVar2 & 1) != 0)) {
      lVar4 = unaff_x19[7];
      if (lVar4 != 0) {
        auVar7 = (**(code **)(lVar4 + 0x18))
                           (*(undefined8 *)(lVar4 + 0x40),auVar7._0_8_,auVar7._8_8_,
                            *(undefined8 *)(lVar4 + 0x28));
        *(undefined1 (*) [16])(unaff_x19 + 3) = auVar7;
        thunk_FUN_01e10808((undefined1 (*) [16])(unaff_x19 + 3),0);
        return 1;
      }
LAB_028b6ff0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    plVar6 = (long *)unaff_x19[8];
    if (plVar6 == (long *)0x0) goto LAB_028b6ff0;
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_028b6ed4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc(plVar6,*unaff_x23,0);
LAB_028b6ed4:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 != (long *)0x0) {
        (**(code **)(*unaff_x19 + 0x1f8))();
        return 0;
      }
      goto LAB_028b6ff0;
    }
    plVar6 = (long *)unaff_x19[8];
    if (plVar6 == (long *)0x0) goto LAB_028b6ff0;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar3 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_028b6f54;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc(plVar6,lVar4,0);
LAB_028b6f54:
    auVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    param_1 = unaff_x19[6];
  } while( true );
}


