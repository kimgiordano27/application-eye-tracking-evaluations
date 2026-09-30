/*
FUNCTION_NAME: FUN_028dc1d4
ENTRY_POINT: 028dc1d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x028dc45c) */

void FUN_028dc1d4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
                    /* catch() { ... } // from try @ 028dc228 with catch @ 028dc1fc
                       catch() { ... } // from try @ 028dc25c with catch @ 028dc1fc
                       catch() { ... } // from try @ 028dc294 with catch @ 028dc1fc */
  if ((DAT_04830a9c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OculusSampleFramework_DistanceGrabberSample_ToggleSphereCasting__);
                    /* try { // try from 028dc214 to 029dc217 has its CatchHandler @ 028dc228 */
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractable_<Start>b__43_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractor_<Start>b__67_0__
                      );
                    /* try { // try from 028dc224 to 029dc227 has its CatchHandler @ 028dc22c */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 028dc214 with catch @ 028dc228
                       try { // try from 028dc228 to 029dc243 has its CatchHandler @ 028dc1fc */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 028dc224 with catch @ 028dc22c
                        */
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_HandlePostProcessed__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                      );
                    /* try { // try from 028dc244 to 029dc25b has its CatchHandler @ 028dc28c */
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_All<ControlOutput>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_HandleStateChanged__
                      );
                    /* try { // try from 028dc25c to 029dc27b has its CatchHandler @ 028dc1fc */
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_EnumBuilder_get_UnderlyingSystemType__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerDownEvent>__
                      );
    DAT_04830a9c = 1;
  }
  local_48 = 0;
                    /* try { // try from 028dc27c to 029dc28b has its CatchHandler @ 028dc28c */
  uStack_68 = 0;
  local_70 = (long *)0x0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  plVar9 = (long *)(param_1 + 0x18);
  lVar10 = *plVar9;
                    /* catch() { ... } // from try @ 028dc244 with catch @ 028dc28c
                       catch() { ... } // from try @ 028dc27c with catch @ 028dc28c */
  plVar11 = (long *)(param_1 + 0x20);
                    /* try { // try from 028dc290 to 029dc293 has its CatchHandler @ 028dc29c */
                    /* try { // try from 028dc294 to 029dc29f has its CatchHandler @ 028dc1fc */
  *plVar9 = *plVar11;
  thunk_FUN_01f51358(plVar9);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 028dc290 with catch @ 028dc29c
                        */
  *plVar11 = lVar10;
  thunk_FUN_01f51358(plVar11,lVar10);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar11 = *(long **)(*plVar9 + 0x20);
  if (plVar11 == (long *)0x0) {
    uVar5 = 0;
                    /* try { // try from 028dc308 to 029dc3cb has its CatchHandler @ 028dc308
                       catch() { ... } // from try @ 028dc308 with catch @ 028dc308
                       catch() { ... } // from try @ 028dc3e8 with catch @ 028dc308
                       catch() { ... } // from try @ 028dc440 with catch @ 028dc308
                       catch() { ... } // from try @ 028dc470 with catch @ 028dc308
                       catch() { ... } // from try @ 028dc55c with catch @ 028dc308 */
  }
  else {
    lVar10 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
           ) {
          puVar4 = (undefined8 *)(lVar10 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_028dc31c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                          ,1);
LAB_028dc31c:
    uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
  }
  FUN_041d3014(&local_48,uVar5,0);
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *(long *)(*plVar9 + 0x18);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 028dc458 to 029dc46f has its CatchHandler @ 028dc554 */
    FUN_01f08a3c();
  }
  FUN_02c04fdc(&local_b0,lVar10,
               *(undefined8 *)
                Method_OculusSampleFramework_DistanceGrabberSample_ToggleSphereCasting__);
  puVar3 = Method_System_Reflection_Emit_EnumBuilder_get_UnderlyingSystemType__;
  puVar2 = Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractor_<Start>b__67_0__;
  puVar1 = Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractable_<Start>b__43_0__;
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  uStack_68 = uStack_98;
  local_70 = plStack_a0;
  uStack_58 = uStack_88;
  local_60 = local_90;
  do {
    uVar7 = FUN_02d073ec(&local_80,*(undefined8 *)puVar2);
    lVar10 = local_60;
    plVar11 = local_70;
    if ((uVar7 & 1) == 0) {
      FUN_02d07520(&local_80,*(undefined8 *)puVar1);
      if (*plVar9 != 0) {
        FUN_027c5b10(*plVar9,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x198));
        FUN_041d30a0(&local_48,0);
                    /* try { // try from 028dc43c to 029dc43f has its CatchHandler @ 028dc440 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 028dc3cc with catch @ 028dc440
                       catch(type#1 @ 042b3198) { ... } // from try @ 028dc43c with catch @ 028dc440
                       try { // try from 028dc440 to 029dc457 has its CatchHandler @ 028dc308 */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    while( true ) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar10 + 0x20) < 1) break;
      plVar6 = (long *)FUN_026078c4(lVar10,*(undefined8 *)puVar3);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 028dc3cc to 029dc3e7 has its CatchHandler @ 028dc440 */
      (**(code **)(*plVar11 + 0x198))(plVar11,plVar6,*(undefined8 *)(*plVar11 + 0x1a0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 028dc3e8 to 029dc43b has its CatchHandler @ 028dc308 */
      (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
    }
  } while( true );
}


