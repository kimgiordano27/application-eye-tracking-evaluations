/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection<object,-float>$$get_Count
ENTRY_POINT: 0276ad8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0276af18) */

void System_Collections_Generic_Dictionary_ValueCollection<object,_float>__get_Count(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  
  thunk_FUN_01f51358();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* try { // try from 0276ad94 to 0286ada3 has its CatchHandler @ 0276ada4 */
  if (*(long *)(unaff_x20 + -8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch() { ... } // from try @ 0276ad58 with catch @ 0276ada4
                       catch() { ... } // from try @ 0276ad94 with catch @ 0276ada4 */
                    /* try { // try from 0276ada8 to 0286adab has its CatchHandler @ 0276adb4 */
                    /* try { // try from 0276adac to 0286adb7 has its CatchHandler @ 0276a900 */
  plVar4 = (long *)FUN_0265d924(*(long *)(unaff_x20 + -8),
                                *(undefined8 *)
                                 Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_0__
                               );
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0276ae14;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0276ae14:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0276ae70;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar3,0);
LAB_0276ae70:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    thunk_FUN_03fe9acc();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0276aee8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0276aee8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}


