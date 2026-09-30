/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 02bf0d70
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02bf1078) */
/* WARNING: Removing unreachable block (ram,0x02bf1074) */
/* WARNING: Removing unreachable block (ram,0x02bf10b8) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_02bf0ee4;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
                    /* try { // try from 02bf0d90 to 02cf0ddb has its CatchHandler @ 02bf0d90
                       catch() { ... } // from try @ 02bf0d90 with catch @ 02bf0d90
                       catch() { ... } // from try @ 02bf0e68 with catch @ 02bf0d90
                       catch() { ... } // from try @ 02bf0e98 with catch @ 02bf0d90
                       catch() { ... } // from try @ 02bf0f18 with catch @ 02bf0d90 */
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_02bf0ee4:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  do {
                    /* try { // try from 02bf0f00 to 02cf0f0f has its CatchHandler @ 02bf0f10 */
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 02bf0e80 with catch @ 02bf0f10
                       catch() { ... } // from try @ 02bf0f00 with catch @ 02bf0f10 */
                    /* try { // try from 02bf0f14 to 02cf0f17 has its CatchHandler @ 02bf0f20 */
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 02bf0f18 to 02cf0f23 has its CatchHandler @ 02bf0d90 */
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02bf0f4c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar3,*(long *)puVar1,0);
LAB_02bf0f4c:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar3 != (long *)0x0) {
        FUN_03b4bc9c(*plVar3);
        return;
      }
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74(lVar4);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02bf0fc4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(plVar3,lVar4,0);
LAB_02bf0fc4:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    FUN_02bf09f4();
  } while( true );
}


