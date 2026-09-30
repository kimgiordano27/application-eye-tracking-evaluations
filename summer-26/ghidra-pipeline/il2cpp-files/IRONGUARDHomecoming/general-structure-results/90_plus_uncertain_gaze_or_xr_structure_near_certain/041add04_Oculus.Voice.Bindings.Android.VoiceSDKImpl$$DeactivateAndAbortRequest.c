/*
FUNCTION_NAME: Oculus.Voice.Bindings.Android.VoiceSDKImpl$$DeactivateAndAbortRequest
ENTRY_POINT: 041add04
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 178
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041adfbc) */

void Oculus_Voice_Bindings_Android_VoiceSDKImpl__DeactivateAndAbortRequest(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *plVar10;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  FUN_041ab944();
  plVar10 = *(long **)(unaff_x20 + 0x20);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 041add10 to 042add13 has its CatchHandler @ 041add7c */
                    /* try { // try from 041add14 to 042add3b has its CatchHandler @ 041add8c */
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_041add64;
      }
                    /* try { // try from 041add3c to 042add77 has its CatchHandler @ 041adc00 */
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
LAB_041add64:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 041add78 to 042add7b has its CatchHandler @ 041add88 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 041add10 with catch @ 041add7c
                       try { // try from 041add7c to 042adda3 has its CatchHandler @ 041adc00 */
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041adde0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_041adde0:
    uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_041adf5c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041ade3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_041ade3c:
    lVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar5 = thunk_FUN_01f117cc(*unaff_x24);
    FUN_04228304(lVar5,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0422aa74(lVar5,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x28),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *(long *)(lVar7 + 0x88);
    if (lVar7 == 0) {
LAB_041adebc:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar7 = FUN_041adb7c();
    }
    else {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      if (lVar7 == 0) goto LAB_041adebc;
    }
    lVar6 = *unaff_x25;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *unaff_x25;
    }
    FUN_0422c0ac(lVar5,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 4),lVar7,0);
    FUN_0422f074(lVar5,lVar7,0);
    FUN_0422f074();
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_041adf78;
    }
  }
LAB_041adf5c:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_041adf78:
  (*(code *)*puVar4)(plVar10,puVar4[1]);
  return;
}


