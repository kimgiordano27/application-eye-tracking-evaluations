/*
FUNCTION_NAME: UnityEngine.Rendering.DebugDisplaySettings<object>$$get_AreAnySettingsActive
ENTRY_POINT: 02979bc8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02979d94) */

void UnityEngine_Rendering_DebugDisplaySettings<object>__get_AreAnySettingsActive(void)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (unaff_x20 == (long *)0x0) {
LAB_02979d8c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 02979bcc to 02a79bdb has its CatchHandler @ 02979994 */
  FUN_0422b6c0();
                    /* try { // try from 02979bdc to 02a79bdf has its CatchHandler @ 02979be0 */
  if (unaff_x20[0x7d] != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02979bdc with catch @ 02979be0
                       try { // try from 02979be0 to 02a79c03 has its CatchHandler @ 02979994 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02979bb4 with catch @ 02979be4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02979b44 with catch @ 02979be8
                        */
    FUN_0422b208();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02979bb8 with catch @ 02979bec
                        */
    lVar8 = unaff_x20[0x7e];
    uVar10 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
    lVar1 = unaff_x20[0x7f];
    uVar11 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
                    /* try { // try from 02979c04 to 02a79c1b has its CatchHandler @ 02979c50 */
    FUN_0422b27c();
                    /* try { // try from 02979c1c to 02a79c3f has its CatchHandler @ 02979994 */
    plVar4 = (long *)FUN_0249b5b8(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
    if (plVar4 == (long *)0x0) goto LAB_02979d8c;
                    /* try { // try from 02979c40 to 02a79c4f has its CatchHandler @ 02979c50 */
    uVar5 = (**(code **)(*plVar4 + 0x1b8))
                      ((int)lVar8,uVar10,(int)lVar1,uVar11,(int)unaff_x20[0x7e],
                       *(undefined4 *)((long)unaff_x20 + 0x3f4),(int)unaff_x20[0x7f],
                       *(undefined4 *)((long)unaff_x20 + 0x3fc),plVar4,
                       *(undefined8 *)(*plVar4 + 0x1c0));
                    /* catch() { ... } // from try @ 02979c04 with catch @ 02979c50
                       catch() { ... } // from try @ 02979c40 with catch @ 02979c50 */
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 02979c54 to 02a79c57 has its CatchHandler @ 02979c60 */
                    /* try { // try from 02979c58 to 02a79c63 has its CatchHandler @ 02979994 */
      lVar2 = unaff_x20[0x7e];
      uVar12 = *(undefined4 *)((long)unaff_x20 + 0x3f4);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02979c54 with catch @ 02979c60
                        */
      lVar3 = unaff_x20[0x7f];
      uVar13 = *(undefined4 *)((long)unaff_x20 + 0x3fc);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar4 = (long *)FUN_029e7ccc((int)lVar8,uVar10,(int)lVar1,uVar11,(int)lVar2,uVar12,(int)lVar3
                                    ,uVar13,*(undefined8 *)
                                             (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50))
      ;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar4);
      (**(code **)(*unaff_x20 + 0x838))
                ((int)unaff_x20[0x7e],*(undefined4 *)((long)unaff_x20 + 0x3f4),(int)unaff_x20[0x7f],
                 *(undefined4 *)((long)unaff_x20 + 0x3fc));
      (**(code **)(*unaff_x20 + 0x198))();
      lVar8 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_02979d60;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02979d60:
      (*(code *)*puVar7)(plVar4,puVar7[1]);
    }
  }
  return;
}


