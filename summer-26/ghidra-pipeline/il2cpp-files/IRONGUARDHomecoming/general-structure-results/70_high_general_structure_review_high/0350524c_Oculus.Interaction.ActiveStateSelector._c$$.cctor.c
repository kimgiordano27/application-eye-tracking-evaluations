/*
FUNCTION_NAME: Oculus.Interaction.ActiveStateSelector.<>c$$.cctor
ENTRY_POINT: 0350524c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int Oculus_Interaction_ActiveStateSelector_<>c___cctor(ushort *param_1,int param_2)

{
  int iVar1;
  undefined1 in_ZR;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_w8;
  ushort *in_x9;
  
  do {
    puVar2 = param_1;
    if ((bool)in_ZR) {
      param_2 = param_2 + -1;
      in_w8 = in_w8 + 1;
    }
    while( true ) {
      if (in_x9 <= puVar2) {
        if (in_w8 < 3) {
          iVar1 = param_2 + 3;
          if (-1 < param_2) {
            iVar1 = param_2;
          }
          return *(int *)(&DAT_00d4a1ac + (long)(int)in_w8 * 4) + (iVar1 >> 2) * 3;
        }
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
        uVar3 = thunk_FUN_01f117cc();
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<GUIStyleState>__
                                  );
        FUN_03553fd0(uVar3,uVar4,0);
        uVar4 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<ImagePosition>__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar3,uVar4);
      }
      param_1 = puVar2 + 1;
      if (0x20 < *puVar2) break;
      param_2 = param_2 + -1;
      puVar2 = param_1;
    }
    in_ZR = *puVar2 == 0x3d;
  } while( true );
}


