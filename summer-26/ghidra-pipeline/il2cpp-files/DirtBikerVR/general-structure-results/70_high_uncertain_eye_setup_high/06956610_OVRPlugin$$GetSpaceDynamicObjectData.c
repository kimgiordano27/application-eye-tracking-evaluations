/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 06956610
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetSpaceDynamicObjectData(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  int unaff_w20;
  long *plVar4;
  undefined8 *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  
  while( true ) {
    lVar2 = FUN_04de82e0(param_1,unaff_w20,*unaff_x22);
    if ((lVar2 == 0) || (plVar4 = *(long **)(lVar2 + 0x80), plVar4 == (long *)0x0))
    goto LAB_0695666c;
    uVar3 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
    if (((uVar3 & 1) != 0) &&
       (fVar5 = (float)(**(code **)(*plVar4 + 0x4b8))(plVar4,*(undefined8 *)(*plVar4 + 0x4c0)),
       *(float *)(unaff_x19 + 0x3c) <= fVar5)) break;
    unaff_w20 = unaff_w20 + 1;
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar2 == 0)) goto LAB_0695666c;
    iVar1 = FUN_06936294(lVar2,0);
    if (iVar1 <= unaff_w20) {
      return unaff_s8;
    }
    if (((*(long *)(unaff_x19 + 0x10) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xe8), lVar2 == 0)) ||
       (param_1 = *(long *)(lVar2 + 0x58), param_1 == 0)) goto LAB_0695666c;
  }
  *(undefined1 *)(unaff_x19 + 0x30) = 1;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0x28),0);
    fVar6 = (float)(**(code **)(*plVar4 + 0x4b8))(plVar4,*(undefined8 *)(*plVar4 + 0x4c0));
    fVar6 = fVar6 - *(float *)(unaff_x19 + 0x3c);
                    /* try { // try from 069566a8 to 06a5681b has its CatchHandler @ 069566a8
                       catch() { ... } // from try @ 069566a8 with catch @ 069566a8
                       catch() { ... } // from try @ 06956944 with catch @ 069566a8
                       catch() { ... } // from try @ 06956a44 with catch @ 069566a8
                       catch() { ... } // from try @ 06956acc with catch @ 069566a8
                       catch() { ... } // from try @ 06956ce4 with catch @ 069566a8
                       catch() { ... } // from try @ 06956cf8 with catch @ 069566a8 */
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar6) {
      fVar7 = fVar5;
    }
    return fVar7 / *(float *)(unaff_x19 + 0x38);
  }
LAB_0695666c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


