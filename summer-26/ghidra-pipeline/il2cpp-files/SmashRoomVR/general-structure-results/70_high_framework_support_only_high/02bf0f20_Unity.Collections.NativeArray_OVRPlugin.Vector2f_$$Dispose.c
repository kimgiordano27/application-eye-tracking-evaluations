/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 02bf0f20
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bf1078) */
/* WARNING: Removing unreachable block (ram,0x02bf1074) */
/* WARNING: Removing unreachable block (ram,0x02bf10b8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose
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
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  
  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bf0f14 with catch @ 02bf0f20
                        */
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02bf0f4c;
    }
                    /* try { // try from 02bf0f24 to 02cf1227 has its CatchHandler @ 02bf0f24
                       catch() { ... } // from try @ 02bf0f24 with catch @ 02bf0f24
                       catch() { ... } // from try @ 02bf130c with catch @ 02bf0f24
                       catch() { ... } // from try @ 02bf13d4 with catch @ 02bf0f24
                       catch() { ... } // from try @ 02bf1480 with catch @ 02bf0f24 */
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_02bf0f4c:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x23 == (long *)0x0) {
            *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
            return;
          }
          FUN_03b4bc9c(*unaff_x23);
          return;
        }
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01ae9e74(lVar3);
        }
        lVar4 = *unaff_x23;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_02bf0fc4;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_02bf0fc4:
        (*(code *)*puVar1)();
        FUN_02bf09f4();
        param_1 = *unaff_x23;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


