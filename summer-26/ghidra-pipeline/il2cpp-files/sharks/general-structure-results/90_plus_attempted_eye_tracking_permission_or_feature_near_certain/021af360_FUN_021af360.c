/*
FUNCTION_NAME: FUN_021af360
ENTRY_POINT: 021af360
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_5;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_021af360(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
                    /* try { // try from 021af368 to 022af36b has its CatchHandler @ 021af374 */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 021af2cc with catch @ 021af36c
                       try { // try from 021af36c to 022af38f has its CatchHandler @ 021af1f8 */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 021af214 with catch @ 021af370
                        */
  lVar4 = *(long *)(param_1 + 0x18);
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 021af270 with catch @ 021af374
                       catch(type#1 @ 0361ba68) { ... } // from try @ 021af368 with catch @ 021af374
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 021af240 with catch @ 021af378
                        */
  if (param_2 == 0) {
    if (0 < *(int *)(param_1 + 0x20)) {
      if (lVar4 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
      uVar5 = 0;
      plVar1 = (long *)(lVar4 + 0x30);
      do {
        if (*(uint *)(lVar4 + 0x18) <= uVar5)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
        ;
        if ((-1 < (int)plVar1[-2]) && (*plVar1 == 0)) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        plVar1 = plVar1 + 3;
      } while ((long)uVar5 < (long)*(int *)(param_1 + 0x20));
    }
  }
  else {
    plVar1 = (long *)FUN_01abe7cc(*(undefined8 *)
                                   (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108));
                    /* try { // try from 021af390 to 022af393 has its CatchHandler @ 021af3a4 */
    iVar3 = *(int *)(param_1 + 0x20);
    if (0 < iVar3) {
      if (lVar4 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
                    /* catch() { ... } // from try @ 021af390 with catch @ 021af3a4 */
      uVar5 = 0;
      puVar6 = (undefined8 *)(lVar4 + 0x30);
      do {
                    /* try { // try from 021af3b0 to 022af3bb has its CatchHandler @ 021af3d0 */
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
                    /* try { // try from 021af3bc to 022af3c7 has its CatchHandler @ 021af1f8 */
        if (-1 < *(int *)(puVar6 + -2)) {
          if (plVar1 == (long *)0x0)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
                    /* try { // try from 021af3c8 to 022af3cf has its CatchHandler @ 021af3d0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 021af3b0 with catch @ 021af3d0
                       catch(type#2 @ 00000000) { ... } // from try @ 021af3c8 with catch @ 021af3d0
                        */
          uVar2 = (**(code **)(*plVar1 + 0x1b8))
                            (plVar1,*puVar6,param_2,*(undefined8 *)(*plVar1 + 0x1c0));
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          iVar3 = *(int *)(param_1 + 0x20);
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 3;
      } while ((long)uVar5 < (long)iVar3);
    }
  }
  return 0;
}


