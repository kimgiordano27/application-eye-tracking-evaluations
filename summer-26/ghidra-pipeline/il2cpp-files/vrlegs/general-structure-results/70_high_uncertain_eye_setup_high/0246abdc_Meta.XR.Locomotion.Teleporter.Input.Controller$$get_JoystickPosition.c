/*
FUNCTION_NAME: Meta.XR.Locomotion.Teleporter.Input.Controller$$get_JoystickPosition
ENTRY_POINT: 0246abdc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Locomotion_Teleporter_Input_Controller__get_JoystickPosition
               (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int in_w9;
  uint in_w10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_03ce6f38;
  puVar2 = PTR_DAT_03ce1548;
  if (*(long *)(in_x11 + -8) != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0();
  }
  if (in_w10 <= in_w9 - 3U) {
LAB_0246ad2c:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar5 = *(long **)(param_1 + (long)(int)(in_w9 - 3U) * 8 + 0x20);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(param_3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3)
       ) {
LAB_0246ad3c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar5);
    }
    uVar4 = FUN_024a0e54(plVar5,0);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_024c0644(uVar6,*(undefined8 *)puVar3,uVar4,0);
    puVar2 = PTR_DAT_03ce15e0;
    if ((unaff_x20 != 0) && (lVar8 = *(long *)(unaff_x19 + 0x138), lVar8 != 0)) {
      if (*(uint *)(unaff_x19 + 0x14c) < *(uint *)(lVar8 + 0x18)) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
        plVar5 = *(long **)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 0x14c) * 8 + 0x20);
        uVar4 = FUN_024a0e54();
        uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
        if (plVar5 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_03ce1af8 + 0x130);
          if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03ce1af8)) goto LAB_0246ad3c;
        }
        FUN_024f65bc(uVar7,uVar6,uVar9,plVar5,uVar4,0);
        *(undefined8 *)(unaff_x19 + 0x140) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140,uVar7);
        return;
      }
      goto LAB_0246ad2c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


