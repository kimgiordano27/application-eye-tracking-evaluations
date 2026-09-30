/*
FUNCTION_NAME: OVRPlugin$$GetTimeInSeconds
ENTRY_POINT: 090a3eb8
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin__GetTimeInSeconds(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0xcc0);
                    /* try { // try from 090a3ec4 to 091a3ec7 has its CatchHandler @ 090a4298 */
  if ((*(byte *)(unaff_x20 + 0x2a3) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac78cc0);
                    /* try { // try from 090a3ed8 to 091a3edf has its CatchHandler @ 090a42e0 */
    FUN_04947ee4(PTR_DAT_0ac78f50);
    *(undefined1 *)(unaff_x20 + 0x2a3) = 1;
  }
  lVar1 = thunk_FUN_04983f60(*puVar4);
                    /* try { // try from 090a3ef0 to 091a3ef7 has its CatchHandler @ 090a42bc */
  OVRPlugin__GetNodeAcceleration();
  if (lVar1 != 0) {
                    /* try { // try from 090a3f08 to 091a3f13 has its CatchHandler @ 090a42b8 */
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x138);
    *(undefined1 *)(lVar1 + 0x10) = 1;
    thunk_FUN_049ee3d8();
    if (*(long *)(param_1 + 0xd0) != 0) {
      lVar3 = *(long *)(param_1 + 0x170);
                    /* try { // try from 090a3f24 to 091a3f2b has its CatchHandler @ 090a42d8 */
      uVar2 = FUN_0a17834c(*(long *)(param_1 + 0xd0),0);
      if (lVar3 != 0) {
                    /* try { // try from 090a3f40 to 091a3f43 has its CatchHandler @ 090a42d0 */
        FUN_090a0bd8(lVar3,uVar2,1,0,lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


