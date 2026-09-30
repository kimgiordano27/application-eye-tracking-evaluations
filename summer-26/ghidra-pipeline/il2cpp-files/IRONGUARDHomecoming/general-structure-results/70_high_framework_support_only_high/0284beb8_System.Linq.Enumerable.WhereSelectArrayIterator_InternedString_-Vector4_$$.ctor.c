/*
FUNCTION_NAME: System.Linq.Enumerable.WhereSelectArrayIterator<InternedString,-Vector4>$$.ctor
ENTRY_POINT: 0284beb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0284c044) */

void System_Linq_Enumerable_WhereSelectArrayIterator<InternedString,_Vector4>___ctor(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  
                    /* try { // try from 0284beb8 to 0294bec7 has its CatchHandler @ 0284bec8 */
  FUN_0422b27c();
                    /* catch() { ... } // from try @ 0284be2c with catch @ 0284bec8
                       catch() { ... } // from try @ 0284be58 with catch @ 0284bec8
                       catch() { ... } // from try @ 0284beb8 with catch @ 0284bec8 */
                    /* try { // try from 0284becc to 0294becf has its CatchHandler @ 0284bed8 */
  plVar1 = (long *)FUN_02249438(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
                    /* try { // try from 0284bed0 to 0294bedb has its CatchHandler @ 0284bd10 */
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0284becc with catch @ 0284bed8
                        */
  uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar1 = (long *)FUN_029e60f0(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar1);
    (**(code **)(*unaff_x20 + 0x838))
              ((int)unaff_x20[0x7e],*(undefined4 *)((long)unaff_x20 + 0x3f4),(int)unaff_x20[0x7f],
               *(undefined4 *)((long)unaff_x20 + 0x3fc));
    (**(code **)(*unaff_x20 + 0x198))();
    lVar3 = *plVar1;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0284c010;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar1,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0284c010:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return;
}


