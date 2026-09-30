/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<quaternion>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b504f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02b50684) */

void System_Array_EmptyInternalEnumerator<quaternion>__System_Collections_IEnumerator_get_Current
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x23;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02b5051c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
                    /* try { // try from 02b504fc to 02c50507 has its CatchHandler @ 02b52434 */
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b5051c:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x21 == (long *)0x0) {
            return;
          }
          lVar3 = *unaff_x21;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0)
          goto 
          System_Array_EmptyInternalEnumerator<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>__System_Collections_IEnumerator_get_Current
          ;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_02b50608;
        }
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ecaf44(lVar3);
        }
        lVar4 = *unaff_x21;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_02b504d0;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b504d0:
        (*(code *)*puVar1)();
        FUN_02b51568();
        param_1 = *unaff_x21;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_02b50608:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02b5063c;
    }
  }

  System_Array_EmptyInternalEnumerator<AdditionalLightsShadowCasterPass_ShadowResolutionRequest>__System_Collections_IEnumerator_get_Current
  :
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b5063c:
  (*(code *)*puVar1)();
  return;
}


