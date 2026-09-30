/*
FUNCTION_NAME: Oculus.Interaction.InteractorStateChangeArgs$$.ctor
ENTRY_POINT: 03506674
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_14;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong Oculus_Interaction_InteractorStateChangeArgs___ctor(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x23;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    );
  *(undefined1 *)(unaff_x23 + 0xf8d) = 1;
  puVar7 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  if (unaff_w21 == 0x10000000) {
    uVar3 = FUN_0340d008();
    return uVar3;
  }
  if ((unaff_w21 >> 0x1e & 1) == 0) {
    if ((unaff_w21 & 0xdfffffe0) == 0) {
      if (unaff_x20 == 0) {
        uVar3 = (ulong)-(uint)(unaff_x19 != 0);
      }
      else if (unaff_x19 == 0) {
        uVar3 = 1;
      }
      else {
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_04833019 == '\0') {
          thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                            );
          DAT_04833019 = '\x01';
        }
        lVar4 = *(long *)puVar7;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar7;
        }
        if (**(char **)(lVar4 + 0xb8) != '\0') {
          if ((unaff_w21 & 1) != 0) {
            if (DAT_048317e1 == '\0') {
              thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
              DAT_048317e1 = '\x01';
            }
            uVar5 = FUN_0340ce04();
            uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
            if (DAT_048317e1 == '\0') {
              thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
              DAT_048317e1 = '\x01';
            }
            uVar6 = FUN_0340ce04();
            uVar2 = *(undefined4 *)(unaff_x19 + 0x10);
            if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__);
            }
            uVar3 = FUN_035068dc(uVar5,uVar1,uVar6,uVar2);
            return uVar3;
          }
          goto LAB_035067ec;
        }
        uVar3 = FUN_03506ad0();
      }
      return uVar3;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__;
  }
  else {
    if (unaff_w21 == 0x40000000) {
LAB_035067ec:
      uVar3 = FUN_0340d8ec();
      return uVar3;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    puVar7 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector2>__;
  }
  uVar6 = thunk_FUN_01efb3a4(puVar7);
  uVar8 = thunk_FUN_01efb3a4(
                            Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<AllocatorManager_AllocatorHandle>__
                            );
  FUN_034efd98(uVar5,uVar6,uVar8,0);
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Vector3>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar6);
}


