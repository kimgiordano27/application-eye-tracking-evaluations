/*
FUNCTION_NAME: FUN_03f70778
ENTRY_POINT: 03f70778
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03f70778(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_0483b580 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045811c0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
    thunk_FUN_01efb3a4(Method_System_Collections_CollectionBase_System_Collections_IList_Remove__);
    thunk_FUN_01efb3a4(PTR_DAT_045810e8);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__);
    thunk_FUN_01efb3a4(PTR_DAT_045810f0);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045811c8);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ToggleFlow_Toggle__);
    DAT_0483b580 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (*(int *)(param_1 + 0x10) == 1) goto LAB_03f70ad0;
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (*(int *)(*(long *)Method_System_Collections_CollectionBase_System_Collections_IList_Remove__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_03ec8718(*(undefined8 *)Method_Unity_VisualScripting_ToggleFlow_Toggle__,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_022df844(lVar3,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)
                Method_Unity_Collections_FixedStringMethods_Append<FixedString512Bytes>__);
  lVar3 = FUN_03ec8718(*(undefined8 *)PTR_DAT_045811c8,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_022df844(lVar3,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_045811c0);
  plVar9 = *(long **)(param_1 + 0x38);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_045810e8) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03f70918;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_045810e8,0);
LAB_03f70918:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_01f51358();
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_03f70970:
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar9;
  lVar3 = *(long *)puVar1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03f709c4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar3,0);
LAB_03f709c4:
  uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if ((uVar7 & 1) == 0) {
    FUN_03f70d8c();
    *(undefined8 *)(param_1 + 0x48) = 0;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),0);
    return 0;
  }
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_045810f0) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03f70a38;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_045810f0,0);
LAB_03f70a38:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  plVar9 = (long *)FUN_034b9228(uVar5,*(undefined8 *)(param_1 + 0x28),0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar3 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03f70ab0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                        ,0);
LAB_03f70ab0:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_01f51358();
LAB_03f70ad0:
  plVar9 = *(long **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
  puVar2 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *plVar9;
    lVar3 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f70b34;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar3,0);
LAB_03f70b34:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    plVar9 = *(long **)(param_1 + 0x50);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f70ba0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03f70ba0:
    uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = (**(code **)(*plVar9 + 0x8b8))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x8c0));
    if ((uVar7 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(param_1 + 0x18),uVar5);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(param_1 + 0x50);
  } while( true );
  FUN_03f70cdc();
  *(undefined8 *)(param_1 + 0x50) = 0;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x50),0);
  goto LAB_03f70970;
}


