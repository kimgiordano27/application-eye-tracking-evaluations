/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 073c2b4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__remove_PassthroughLayerResumed(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_0941e61c & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eb2b08);
    FUN_03c8f898(PTR_DAT_08eb2b00);
    FUN_03c8f898(PTR_DAT_08eb55c8);
    DAT_0941e61c = 1;
  }
  puVar2 = PTR_DAT_08eb55c8;
  puVar1 = PTR_DAT_08eb2b08;
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* try { // try from 073c2b9c to 074c2bab has its CatchHandler @ 073c2bb0 */
                    /* try { // try from 073c2bac to 074c2bb3 has its CatchHandler @ 073c2a00 */
                    /* catch() { ... } // from try @ 073c2b10 with catch @ 073c2bb0
                       catch() { ... } // from try @ 073c2b9c with catch @ 073c2bb0 */
    FUN_085db068(*(long *)(param_1 + 0x30),0,0);
                    /* try { // try from 073c2bb4 to 074c2bb7 has its CatchHandler @ 073c2bc0 */
                    /* try { // try from 073c2bb8 to 074c2bc3 has its CatchHandler @ 073c2a00 */
    plVar8 = *(long **)(param_1 + 0x28);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 073c2bb4 with catch @ 073c2bc0
                        */
    FUN_04f104c0(uVar3,param_1,*(undefined8 *)puVar2,0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08eb2b00) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto OVRManager__add_BoundaryVisibilityChanged;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar8,*(long *)PTR_DAT_08eb2b00,2);
OVRManager__add_BoundaryVisibilityChanged:
                    /* WARNING: Could not recover jumptable at 0x073c2c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


