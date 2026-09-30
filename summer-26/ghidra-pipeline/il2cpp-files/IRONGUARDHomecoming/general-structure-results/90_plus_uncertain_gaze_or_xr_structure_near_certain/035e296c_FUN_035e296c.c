/*
FUNCTION_NAME: FUN_035e296c
ENTRY_POINT: 035e296c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 192
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;strong_file_logging_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x035e2c60) */
/* WARNING: Removing unreachable block (ram,0x035e2bfc) */
/* WARNING: Removing unreachable block (ram,0x035e2c6c) */
/* WARNING: Removing unreachable block (ram,0x035e2c24) */

void FUN_035e296c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  char local_44 [4];
  
  if ((DAT_0483378c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483378c = 1;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  thunk_FUN_01f3e6f0();
  if (lVar9 == 0) {
    return;
  }
  puVar10 = (undefined8 *)(lVar9 + 0x40);
  plVar11 = (long *)*puVar10;
  thunk_FUN_01f3e6f0();
  if (plVar11 == (long *)0x0) {
    return;
  }
  local_44[0] = '\0';
  FUN_035ce230(plVar11,local_44,0);
  lVar9 = *plVar11;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_035e2a48;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)Method_Shapes_DrawCommand_<>c_<FlushNullCameras>b__10_1__,0
                       );
LAB_035e2a48:
  plVar5 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
  puVar3 = 
  Method_UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_<>c_<ExecutePass>b__15_0__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_035e2ab8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_035e2ab8:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_035e2bec;
      lVar9 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 == 0) goto LAB_035e2bc4;
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_035e2b14;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_035e2b14:
    lVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(lVar9 + 0x38);
    thunk_FUN_01f3e6f0();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar9 + 0x38), thunk_FUN_01f3e6f0(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar9 = *(long *)(lVar9 + 0x48);
      thunk_FUN_01f3e6f0();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(lVar9 + 0x20);
      thunk_FUN_01f3e6f0();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = FUN_035e21f8(lVar9,0,0);
      FUN_035e201c(param_1,uVar6,0);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_035e2be0;
    }
  }
LAB_035e2bc4:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_035e2be0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_035e2bec:
  if (local_44[0] != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(plVar11,0);
  }
  thunk_FUN_01f3e6f0();
  *puVar10 = 0;
  thunk_FUN_01f51358(puVar10,0);
  return;
}


