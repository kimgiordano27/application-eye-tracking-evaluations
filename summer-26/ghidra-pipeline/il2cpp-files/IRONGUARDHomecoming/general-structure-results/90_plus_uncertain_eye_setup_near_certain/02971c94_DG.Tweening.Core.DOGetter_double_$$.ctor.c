/*
FUNCTION_NAME: DG.Tweening.Core.DOGetter<double>$$.ctor
ENTRY_POINT: 02971c94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02971dc0) */

void DG_Tweening_Core_DOGetter<double>___ctor(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 02971c98 to 02a71ca7 has its CatchHandler @ 02971a60 */
  lVar7 = unaff_x20[0x7e];
                    /* try { // try from 02971ca8 to 02a71cab has its CatchHandler @ 02971cac */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02971ca8 with catch @ 02971cac
                       try { // try from 02971cac to 02a71ccf has its CatchHandler @ 02971a60 */
  (**(code **)(*unaff_x20 + 0x838))();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02971c80 with catch @ 02971cb0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02971c10 with catch @ 02971cb4
                        */
  lVar6 = unaff_x20[0x7e];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02971c84 with catch @ 02971cb8
                        */
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
                    /* try { // try from 02971cd0 to 02a71ce7 has its CatchHandler @ 02971d1c */
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 02971ce8 to 02a71d0b has its CatchHandler @ 02971a60 */
  plVar2 = (long *)FUN_029e733c(lVar7,lVar6,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_041d4560(plVar2);
                    /* try { // try from 02971d0c to 02a71d1b has its CatchHandler @ 02971d1c */
  (**(code **)(*unaff_x20 + 0x198))();
                    /* catch() { ... } // from try @ 02971cd0 with catch @ 02971d1c
                       catch() { ... } // from try @ 02971d0c with catch @ 02971d1c */
                    /* try { // try from 02971d20 to 02a71d23 has its CatchHandler @ 02971d2c */
                    /* try { // try from 02971d24 to 02a71d2f has its CatchHandler @ 02971a60 */
  lVar1 = *plVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02971d20 with catch @ 02971d2c
                        */
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto FUN_02971d98;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
FUN_02971d98:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}


