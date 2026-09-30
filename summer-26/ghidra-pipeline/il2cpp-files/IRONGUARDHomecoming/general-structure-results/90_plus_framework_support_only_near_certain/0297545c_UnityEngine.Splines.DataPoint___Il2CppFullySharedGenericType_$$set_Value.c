/*
FUNCTION_NAME: UnityEngine.Splines.DataPoint<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 0297545c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0297561c) */

void UnityEngine_Splines_DataPoint<__Il2CppFullySharedGenericType>__set_Value(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar10;
  undefined4 uVar11;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  *(undefined1 *)(unaff_x21 + 0xcab) = 1;
  if (unaff_x20 == (long *)0x0) {
LAB_02975614:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0422b6c0();
  if (unaff_x20[0x7d] != 0) {
    FUN_0422b208();
    lVar8 = unaff_x20[0x7e];
                    /* try { // try from 02975498 to 02a754bf has its CatchHandler @ 0297551c */
    uVar10 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
    lVar1 = unaff_x20[0x7f];
    FUN_0422b27c();
    plVar4 = (long *)FUN_0249b4e8(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
    if (plVar4 == (long *)0x0) goto LAB_02975614;
                    /* try { // try from 029754e8 to 02a754eb has its CatchHandler @ 02975518 */
    uVar5 = (**(code **)(*plVar4 + 0x1b8))
                      ((int)lVar8,uVar10,(int)lVar1,(int)unaff_x20[0x7e],
                       *(undefined4 *)((long)unaff_x20 + 0x3f4),(int)unaff_x20[0x7f],plVar4,
                       *(undefined8 *)(*plVar4 + 0x1c0));
                    /* try { // try from 029754ec to 02a754ff has its CatchHandler @ 02975520 */
    if ((uVar5 & 1) == 0) {
      lVar2 = unaff_x20[0x7e];
      uVar11 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
      lVar3 = unaff_x20[0x7f];
                    /* try { // try from 02975500 to 02a7550f has its CatchHandler @ 029752f0 */
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 02975510 to 02a75513 has its CatchHandler @ 02975514 */
        lVar6 = FUN_01ecaf44();
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02975510 with catch @ 02975514
                       try { // try from 02975514 to 02a75537 has its CatchHandler @ 029752f0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029754e8 with catch @ 02975518
                        */
      if (*(int *)(lVar6 + 0xe0) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02975498 with catch @ 0297551c
                        */
        thunk_FUN_01ee6d7c();
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 029754ec with catch @ 02975520
                        */
                    /* try { // try from 02975538 to 02a7554f has its CatchHandler @ 02975590 */
      plVar4 = (long *)FUN_029e7654((int)lVar8,uVar10,(int)lVar1,(int)lVar2,uVar11,(int)lVar3,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 02975550 to 02a7557f has its CatchHandler @ 029752f0 */
      FUN_041d4560(plVar4);
      (**(code **)(*unaff_x20 + 0x838))
                ((int)unaff_x20[0x7e],*(undefined4 *)((long)unaff_x20 + 0x3f4),(int)unaff_x20[0x7f])
      ;
      (**(code **)(*unaff_x20 + 0x198))();
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_029755ec;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_029755ec:
      (*(code *)*puVar7)(plVar4,puVar7[1]);
    }
  }
  return;
}


