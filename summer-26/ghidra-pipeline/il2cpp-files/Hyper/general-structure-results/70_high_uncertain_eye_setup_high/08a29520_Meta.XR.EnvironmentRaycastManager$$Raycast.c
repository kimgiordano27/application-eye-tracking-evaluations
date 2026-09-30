/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Raycast
ENTRY_POINT: 08a29520
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__Raycast(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  (**(code **)(param_1 + (long)(in_w9 + 6) * 0x10 + 0x138))();
  plVar6 = *(long **)(unaff_x19 + 0x58);
  uVar1 = thunk_FUN_04983f60(*unaff_x22);
  FUN_0633c1f0();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_08a295b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x23,6);
LAB_08a295b8:
    (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
    plVar6 = *(long **)(unaff_x19 + 0x60);
    uVar1 = thunk_FUN_04983f60(*unaff_x22);
    FUN_0633c1f0();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
            goto LAB_08a2963c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x23,6);
LAB_08a2963c:
      (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
      FUN_08a2967c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


