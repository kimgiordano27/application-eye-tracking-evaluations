/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<Int32Enum,-Pose>$$CopyTo
ENTRY_POINT: 02ef9e58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02efa0cc) */

uint System_Collections_Generic_Dictionary_KeyCollection<Int32Enum,_Pose>__CopyTo
               (undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  plVar3 = (long *)(*(code *)*param_1)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02ef9ee0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02ef9ee0:
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      break;
    }
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          lVar7 = lVar8 + (long)*piVar10 * 0x10 + 0x138;
          goto LAB_02ef9f5c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    lVar7 = FUN_01ecb238(plVar3,lVar7,0);
LAB_02ef9f5c:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    lVar7 = *(long *)(lVar7 + 8);
    (**(code **)(lVar7 + 0x10))(*(undefined8 *)(lVar7 + 8),lVar7,plVar3,unaff_x29 + -0x18);
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar4 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar7 + 0x98) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x24;
    }
    puVar6 = *(undefined8 **)(lVar7 + 0x188);
    uVar5 = *puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar6[2])(uVar5);
  } while (*(char *)(unaff_x29 + -0xc) == '\0');
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02efa048;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02efa048:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


