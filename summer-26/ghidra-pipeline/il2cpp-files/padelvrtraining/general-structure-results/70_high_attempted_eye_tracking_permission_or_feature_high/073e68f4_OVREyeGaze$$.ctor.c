/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 073e68f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x19;
  long *unaff_x22;
  
  Unity_Networking_Transport_ConnectionDataMap<TLSLayer_TLSConnectionData>__get_Length
            (param_1,*(undefined8 *)PTR_DAT_09221010);
  **(undefined8 **)(*unaff_x22 + 0xb8) = param_1;
  thunk_FUN_03d1023c(*(undefined8 *)(*unaff_x22 + 0xb8),param_1);
  (**(code **)(*unaff_x19 + 0x368))();
  plVar3 = unaff_x19 + 0x1a;
  if (*plVar3 == 0) {
    lVar2 = FUN_08a4d9c8();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar2 = FUN_04f82d4c(lVar2,*(undefined8 *)PTR_DAT_092208d0);
    *plVar3 = lVar2;
    thunk_FUN_03d1023c(plVar3,lVar2);
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      unaff_x19[0x19] = 0;
    }
    else {
      lVar2 = *(long *)PTR_DAT_091db300;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if (*(byte *)(*plVar3 + 0x130) < bVar1) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = plVar3;
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
          plVar4 = (long *)0x0;
        }
      }
      unaff_x19[0x19] = (long)plVar4;
      if (*(byte *)(*plVar3 + 0x130) < bVar1) {
        plVar3 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
        plVar3 = (long *)0x0;
      }
    }
    thunk_FUN_03d1023c(unaff_x19 + 0x19,plVar3);
  }
  FUN_073a32e4();
  return;
}


