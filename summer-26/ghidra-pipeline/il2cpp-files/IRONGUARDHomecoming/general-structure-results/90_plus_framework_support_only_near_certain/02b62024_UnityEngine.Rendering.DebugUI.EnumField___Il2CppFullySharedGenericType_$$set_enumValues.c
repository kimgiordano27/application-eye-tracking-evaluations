/*
FUNCTION_NAME: UnityEngine.Rendering.DebugUI.EnumField<__Il2CppFullySharedGenericType>$$set_enumValues
ENTRY_POINT: 02b62024
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


/* WARNING: Removing unreachable block (ram,0x02b62240) */

void UnityEngine_Rendering_DebugUI_EnumField<__Il2CppFullySharedGenericType>__set_enumValues
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_01ecaf44(param_3);
  }
                    /* try { // try from 02b62034 to 02c62037 has its CatchHandler @ 02b620a0 */
  lVar4 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
                    /* try { // try from 02b62048 to 02c6204b has its CatchHandler @ 02b62098 */
                    /* try { // try from 02b6204c to 02c6208b has its CatchHandler @ 02b61f74 */
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_02b6207c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02b6207c:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
                    /* try { // try from 02b6208c to 02c6208f has its CatchHandler @ 02b620ac */
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b62048 with catch @ 02b62098
                       try { // try from 02b62098 to 02c620cf has its CatchHandler @ 02b61f74 */
    lVar4 = *plVar3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b62094 with catch @ 02b6209c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b62034 with catch @ 02b620a0
                        */
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b62090 with catch @ 02b620a4
                        */
    if (uVar6 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b61fa8 with catch @ 02b620a8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b62020 with catch @ 02b620ac
                       catch(type#1 @ 042b3198) { ... } // from try @ 02b6208c with catch @ 02b620ac
                        */
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b61fd4 with catch @ 02b620b0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b61fbc with catch @ 02b620b4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02b6200c with catch @ 02b620b8
                        */
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 02b620d0 with catch @ 02b620e0 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b620e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 02b620d0 to 02c620d3 has its CatchHandler @ 02b620e0 */
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02b620e4:
                    /* try { // try from 02b620ec to 02c620f7 has its CatchHandler @ 02b6210c */
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) break;
                    /* try { // try from 02b620f8 to 02c62103 has its CatchHandler @ 02b61f74 */
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
                    /* try { // try from 02b62104 to 02c6210b has its CatchHandler @ 02b6210c */
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02b620ec with catch @ 02b6210c
                       catch(type#2 @ 00000000) { ... } // from try @ 02b62104 with catch @ 02b6210c
                        */
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b6215c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar3,lVar4,0);
LAB_02b6215c:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    FUN_02b62fd8();
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02b621fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b621fc:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  return;
}


