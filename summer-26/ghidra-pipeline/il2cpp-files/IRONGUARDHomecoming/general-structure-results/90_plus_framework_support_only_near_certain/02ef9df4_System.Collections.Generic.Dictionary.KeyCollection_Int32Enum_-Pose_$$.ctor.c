/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<Int32Enum,-Pose>$$.ctor
ENTRY_POINT: 02ef9df4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 161
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02efa0cc) */

uint System_Collections_Generic_Dictionary_KeyCollection<Int32Enum,_Pose>___ctor(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar6 = thunk_FUN_01efb3a4(Method_Oculus_Platform_Request<ApplicationInviteList>__ctor__);
    FUN_034efd20(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5);
  }
  if ((int)unaff_x21[4] == 0) {
    uVar2 = 0;
  }
  else if (unaff_x21 == unaff_x19) {
    uVar2 = 1;
  }
  else {
    lVar7 = *(long *)(unaff_x26 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_02ef9e78;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
FUN_02ef9e78:
    plVar4 = (long *)(*(code *)*puVar3)();
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02ef9ee0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_02ef9ee0:
      uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        break;
      }
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar9 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            lVar7 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_02ef9f5c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar7 = FUN_01ecb238(plVar4,lVar7,0);
LAB_02ef9f5c:
      *(void **)(unaff_x29 + -0x18) = unaff_x23;
      lVar7 = *(long *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar4,unaff_x29 + -0x18);
      memcpy(unaff_x25,unaff_x23,unaff_x22);
      memcpy(unaff_x24,unaff_x25,unaff_x22);
      lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar3 = unaff_x24;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
        puVar3 = (undefined8 *)*unaff_x24;
      }
      puVar8 = *(undefined8 **)(lVar7 + 0x188);
      uVar5 = *puVar8;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar3;
      (*(code *)puVar8[2])(uVar5);
    } while (*(char *)(unaff_x29 + -0xc) == '\0');
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02efa048;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02efa048:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


