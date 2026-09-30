/*
FUNCTION_NAME: UnityEngine.UIElements.StyleTextShadow$$Equals
ENTRY_POINT: 04138ec4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x041390b8) */
/* WARNING: Removing unreachable block (ram,0x041390f4) */

void UnityEngine_UIElements_StyleTextShadow__Equals(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x22 + 0x810) = 1;
  uVar3 = (**(code **)(*unaff_x19 + 0x818))();
  if (((unaff_x21 == (long *)0x0) || ((uVar3 & 1) == 0)) ||
     (uVar3 = FUN_041391c0(), (uVar3 & 1) != 0)) {
    return;
  }
  FUN_04137e40();
  lVar6 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar3 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04138f58;
      }
      uVar3 = uVar3 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_04138f58:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_System_DateTime_AddTicks__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04138fc8;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_04138fc8:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar3 & 1) == 0) break;
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04139024;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_04139024:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    FUN_04138578();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041390a0;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_041390a0:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  if ((unaff_x20 & 1) != 0) {
    FUN_04138518();
  }
  FUN_0422b58c();
  return;
}


