/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 055458e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(code *param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 *unaff_x19;
  long *plVar4;
  long unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  long lVar5;
  long unaff_x25;
  void *unaff_x26;
  long unaff_x29;
  
  (*param_1)();
                    /* try { // try from 055458ec to 056458fb has its CatchHandler @ 055458fc */
  lVar5 = *(long *)(unaff_x21 + 0x20);
  plVar4 = *(long **)(unaff_x29 + -0x10);
                    /* catch() { ... } // from try @ 0554586c with catch @ 055458fc
                       catch() { ... } // from try @ 055458ec with catch @ 055458fc */
                    /* try { // try from 05545900 to 05645903 has its CatchHandler @ 0554590c */
                    /* try { // try from 05545904 to 0564590f has its CatchHandler @ 05545794 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05545900 with catch @ 0554590c
                        */
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x70) + 0x28)) {
    unaff_x22 = unaff_x26;
  }
  memcpy(unaff_x19,unaff_x22,unaff_x23);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar1 = *(long *)(lVar5 + 0xc0);
  lVar5 = *(long *)(lVar1 + 0x88);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244(lVar5);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  }
  if (-1 < *(int *)(*(long *)(lVar1 + 0x70) + 0x28)) {
    unaff_x19 = (undefined8 *)*unaff_x19;
  }
  lVar1 = *plVar4;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == lVar5) {
        lVar5 = lVar1 + (long)(*piVar3 + 2) * 0x10 + 0x138;
        goto LAB_05545998;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  lVar5 = FUN_03cf1348(plVar4,lVar5,2);
LAB_05545998:
  *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
  lVar5 = *(long *)(lVar5 + 8);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar4,unaff_x29 + -0x18,unaff_x19);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


