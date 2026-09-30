/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 0339b034
PROGRAM: gunraiders-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long *plVar8;
  undefined8 *unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 uVar9;
  long *unaff_x27;
  long *unaff_x28;
  
  thunk_FUN_01c495e4();
  FUN_03358c64();
  if (unaff_x25 != (long *)0x0) {
    lVar5 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_0339b0a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c72498();
LAB_0339b0a0:
    (*(code *)*puVar1)();
    lVar5 = *unaff_x20;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar6 = FUN_032ea0d4(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      lVar5 = *unaff_x20;
      uVar9 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__
      ;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032e04b8(uVar9,0);
      uVar6 = FUN_032ea0d4(lVar5,uVar9,0);
      if ((uVar6 & 1) != 0) {
        if ((long *)*unaff_x20 == (long *)0x0) goto LAB_0339b170;
        uVar6 = (**(code **)(*(long *)*unaff_x20 + 0x298))();
        if ((uVar6 & 1) == 0) {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar9 = FUN_03295500(0);
          FUN_019b2708();
          uVar2 = (**(code **)(*unaff_x24 + 0x2c8))();
          plVar8 = (long *)*unaff_x20;
          FUN_019b2708(plVar8);
          uVar3 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
          uVar4 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<IResourceLocation>_IntersectWith__
                                    );
          FUN_033704d4(uVar4,uVar9,uVar2,uVar3,0);
          uVar9 = FUN_0335cdc4();
          uVar2 = thunk_FUN_01c273e8(
                                    Method_System_Collections_Generic_HashSet<IResourceLocation>_Add__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar9,uVar2);
        }
      }
    }
    *unaff_x20 = (long)unaff_x24;
    uVar9 = FUN_03395e54();
    *unaff_x21 = uVar9;
    return;
  }
LAB_0339b170:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


