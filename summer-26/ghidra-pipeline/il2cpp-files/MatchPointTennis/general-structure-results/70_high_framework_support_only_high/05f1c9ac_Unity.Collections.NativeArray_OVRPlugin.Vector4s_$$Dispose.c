/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 05f1c9ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_05f1c374(param_1,param_2,unaff_w23);
  if ((int)unaff_w23 <= (int)unaff_w19) {
LAB_05f1cbac:
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f1c374();
    return unaff_w19;
  }
  do {
    do {
      unaff_w19 = unaff_w19 + 1;
                    /* catch() { ... } // from try @ 05f1c9bc with catch @ 05f1c9cc */
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_05f1cc1c:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
                    /* try { // try from 05f1ca04 to 0601ca2b has its CatchHandler @ 05f1ca40 */
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
                    /* try { // try from 05f1ca2c to 0601ca37 has its CatchHandler @ 05f1c684 */
                    /* try { // try from 05f1ca38 to 0601ca3f has its CatchHandler @ 05f1ca40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f1ca04 with catch @ 05f1ca40
                       catch(type#2 @ 00000000) { ... } // from try @ 05f1ca38 with catch @ 05f1ca40
                        */
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c8 = in_stack_00000188;
      in_stack_000001c0 = in_stack_00000180;
      in_stack_000001d8 = in_stack_00000198;
      in_stack_000001d0 = in_stack_00000190;
      in_stack_000001e8 = in_stack_000001a8;
      in_stack_000001e0 = in_stack_000001a0;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    do {
      unaff_w23 = unaff_w23 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w23) goto LAB_05f1cc1c;
      lVar2 = unaff_x20 + (long)(int)unaff_w23 * 0x38;
      uVar4 = *(undefined8 *)(lVar2 + 0x28);
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      uVar6 = *(undefined8 *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      uVar8 = *(undefined8 *)(lVar2 + 0x48);
      uVar7 = *(undefined8 *)(lVar2 + 0x40);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_000001c0 = uVar3;
      in_stack_000001c8 = uVar4;
      in_stack_000001d0 = uVar5;
      in_stack_000001d8 = uVar6;
      in_stack_000001e0 = uVar7;
      in_stack_000001e8 = uVar8;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    if ((int)unaff_w23 <= (int)unaff_w19) goto LAB_05f1cbac;
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    FUN_05f1c374();
  } while( true );
}


