/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.Vector2f>
ENTRY_POINT: 04da27d8
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_Vector2f>(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 in_stack_00000018;
  
  if (unaff_x20 != (long *)0x0) {
    in_stack_00000018._4_4_ = (**(code **)(*unaff_x20 + 0x218))();
    if (*(int *)(unaff_x19 + 0xb8) < *(int *)(unaff_x19 + 0x98)) {
      uVar1 = FUN_04c87614((long)&stack0x00000018 + 4,&stack0x00000008,
                           *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x28));
      if ((uVar1 & 1) == 0) {
        *(undefined4 *)(unaff_x19 + 0xa8) = 4;
      }
      else {
        lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
        lVar2 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar2 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
          plVar3 = (long *)FUN_0495f278(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x48));
          if (plVar3 == (long *)0x0) goto LAB_04da29b4;
          uVar1 = (**(code **)(*plVar3 + 0x1b8))
                            (plVar3,in_stack_00000018._4_4_,0,*(undefined8 *)(*plVar3 + 0x1c0));
          if ((uVar1 & 1) != 0) {
            uVar4 = FUN_05d516ac();
            plVar3 = (long *)FUN_0862ccb8(uVar4,0);
            if (plVar3 == (long *)0x0) {
              return;
            }
            lVar2 = *plVar3;
            uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar1 != 0) {
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f8c250) {
                  puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_04da2990;
                }
                uVar1 = uVar1 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 != 0);
            }
            puVar5 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)PTR_DAT_08f8c250,0);
LAB_04da2990:
            (*(code *)*puVar5)(plVar3);
            return;
          }
        }
        FUN_04ca8684();
      }
    }
    else {
      uVar4 = FUN_05d516ac();
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar4;
    }
    return;
  }
LAB_04da29b4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


