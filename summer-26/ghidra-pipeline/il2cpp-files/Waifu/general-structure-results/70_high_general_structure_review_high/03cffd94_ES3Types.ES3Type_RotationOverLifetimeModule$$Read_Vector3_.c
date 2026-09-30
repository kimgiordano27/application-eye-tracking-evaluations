/*
FUNCTION_NAME: ES3Types.ES3Type_RotationOverLifetimeModule$$Read<Vector3>
ENTRY_POINT: 03cffd94
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void ES3Types_ES3Type_RotationOverLifetimeModule__Read<Vector3>(code *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  do {
    uVar1 = (*param_1)();
    pcVar4 = *(code **)(unaff_x26 + 0x4b8);
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)FUN_033d1b68(
                                   "UnityEngine.ParticleSystem/ColorBySpeedModule::set_enabled_Injected(UnityEngine.ParticleSystem/ColorBySpeedModule&,System.Boolean)"
                                   );
      *(code **)(unaff_x26 + 0x4b8) = pcVar4;
    }
    (*pcVar4)(&stack0x00000078,uVar1 & 1);
    while( true ) {
      lVar3 = (**(code **)(*unaff_x19 + 0x288))();
      if (lVar3 == 0) {
        return;
      }
      uVar2 = FUN_0666e380(lVar3,*(undefined8 *)(unaff_x23 + 0x338));
      if ((uVar2 & 1) != 0) break;
      uVar2 = FUN_0666e380(lVar3,*(undefined8 *)(unaff_x27 + 0xe48));
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0666e380(lVar3,*(undefined8 *)(unaff_x20 + 0x430));
        if ((uVar2 & 1) == 0) {
          (**(code **)(*unaff_x19 + 0x3c8))();
        }
        else {
          lVar3 = FUN_033c1aac(*(undefined8 *)
                                (*unaff_x19 + (ulong)*(ushort *)(DAT_08408b78 + 0x50) * 0x10 + 0x140
                                ));
          (**(code **)(lVar3 + 8))();
          FUN_07a75fa8(&stack0x00000078,0);
        }
      }
      else {
        lVar3 = FUN_033c1aac(*(undefined8 *)
                              (*unaff_x19 +
                               (ulong)*(ushort *)(*(long *)(unaff_x29 + 0xb98) + 0x50) * 0x10 +
                              0x140));
        (**(code **)(lVar3 + 8))(&stack0x00000040);
        pcVar4 = *(code **)(unaff_x21 + 0x4c8);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68(
                                       "UnityEngine.ParticleSystem/ColorBySpeedModule::set_color_Injected(UnityEngine.ParticleSystem/ColorBySpeedModule&,UnityEngine.ParticleSystem/MinMaxGradient&)"
                                       );
          *(code **)(unaff_x21 + 0x4c8) = pcVar4;
        }
        (*pcVar4)(&stack0x00000078);
      }
    }
    lVar3 = FUN_033c1aac(*(undefined8 *)
                          (*unaff_x19 +
                           (ulong)*(ushort *)(*(long *)(unaff_x25 + 0xab8) + 0x50) * 0x10 + 0x140));
    param_1 = *(code **)(lVar3 + 8);
  } while( true );
}


