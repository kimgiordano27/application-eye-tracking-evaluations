/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 038b6724
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_0367c9fc(param_2);
  }
  if (unaff_x21 != (long *)0x0) {
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(param_2 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) !=
        param_2)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    lVar8 = unaff_x22[1];
    lVar7 = *unaff_x22;
    lVar4 = unaff_x22[3];
    lVar1 = unaff_x22[2];
    unaff_x21[6] = unaff_x22[4];
    unaff_x21[3] = lVar8;
    unaff_x21[2] = lVar7;
    unaff_x21[5] = lVar4;
    unaff_x21[4] = lVar1;
    thunk_FUN_036b7ad0(unaff_x21 + 3,0);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc(lVar1);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_038b6804;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_038b6804:
    uVar3 = (*(code *)*puVar2)();
    lVar1 = *unaff_x20;
    if (lVar1 != 0) {
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x38) + 0x20) + 0x135) & 1)
          == 0) {
        FUN_0367c9fc();
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        FUN_071bc034(lVar1,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


