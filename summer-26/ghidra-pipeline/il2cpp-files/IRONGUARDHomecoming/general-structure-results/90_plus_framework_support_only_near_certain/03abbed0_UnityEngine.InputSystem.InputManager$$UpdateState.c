/*
FUNCTION_NAME: UnityEngine.InputSystem.InputManager$$UpdateState
ENTRY_POINT: 03abbed0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03abc1a4) */
/* WARNING: Removing unreachable block (ram,0x03abc23c) */

void UnityEngine_InputSystem_InputManager__UpdateState(void)

{
  byte bVar1;
  undefined1 in_CY;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x23;
  ulong unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x03abbed0:
  if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  uVar2 = FUN_034b9218(*(undefined8 *)(unaff_x19 + unaff_x24 * 8 + 0x20),0);
  lVar6 = *unaff_x25;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar6);
    lVar6 = *unaff_x25;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar9 == 0) {
                    /* try { // try from 03abbf0c to 03bbbf17 has its CatchHandler @ 03abbf68 */
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
                    /* try { // try from 03abbf1c to 03bbbf1f has its CatchHandler @ 03abbf58 */
      lVar6 = *unaff_x25;
    }
                    /* try { // try from 03abbf24 to 03bbbf2f has its CatchHandler @ 03abbf54 */
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
                    /* try { // try from 03abbf34 to 03bbbf37 has its CatchHandler @ 03abbf50 */
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_9005);
                    /* try { // try from 03abbf3c to 03bbbf3f has its CatchHandler @ 03abbf44 */
                    /* try { // try from 03abbf40 to 03bbbf77 has its CatchHandler @ 03abb9e0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbf3c with catch @ 03abbf44
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbf34 with catch @ 03abbf50
                        */
    FUN_02e6c0a0(lVar9,uVar10,*(undefined8 *)StringLiteral_9027,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbf24 with catch @ 03abbf54
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbf1c with catch @ 03abbf58
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbdc8 with catch @ 03abbf5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbd50 with catch @ 03abbf60
                        */
    plVar3 = (long *)(*(long *)(*unaff_x25 + 0xb8) + 0x10);
    *plVar3 = lVar9;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbcf4 with catch @ 03abbf64
                        */
    thunk_FUN_01f51358(plVar3,lVar9);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03abbf0c with catch @ 03abbf68
                        */
                    /* try { // try from 03abbf78 to 03bbbf7b has its CatchHandler @ 03abbfe0 */
                    /* try { // try from 03abbf7c to 03bbc01f has its CatchHandler @ 03abb9e0 */
  plVar3 = (long *)FUN_0230b6f4(uVar2,lVar9,*(undefined8 *)StringLiteral_9025);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03abbfdc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                        ,0);
LAB_03abbfdc:
                    /* catch() { ... } // from try @ 03abbf78 with catch @ 03abbfe0 */
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03abc03c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 03abc020 to 03bbc047 has its CatchHandler @ 03abc05c */
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x26,0);
LAB_03abc03c:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto UnityEngine_InputSystem_InputManager__ProcessStateChangeMonitors;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x27,0);
UnityEngine_InputSystem_InputManager__ProcessStateChangeMonitors:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 == (long *)0x0) {
LAB_03abc1bc:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar5;
    lVar6 = *unaff_x23;
    bVar1 = *(byte *)(lVar6 + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar6)) goto LAB_03abc1bc;
    if (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar6) {
      plVar5 = (long *)0x0;
    }
    if (plVar5[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = FUN_03584c60(plVar5[2],*unaff_x28,0x18,0);
    uVar2 = FUN_01f08890(*unaff_x29,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_034b2bf4(lVar6,0,uVar2,0);
  } while( true );
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03abc18c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03abc18c:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  unaff_x24 = unaff_x24 + 1;
  if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x24) {
    return;
  }
  in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_x24;
  goto code_r0x03abbed0;
}


