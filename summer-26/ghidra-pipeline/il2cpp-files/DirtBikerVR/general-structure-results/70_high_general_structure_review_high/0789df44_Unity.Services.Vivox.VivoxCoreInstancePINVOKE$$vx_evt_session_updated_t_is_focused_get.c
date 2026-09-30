/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_updated_t_is_focused_get
ENTRY_POINT: 0789df44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_updated_t_is_focused_get
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 *in_stack_00000008;
  
                    /* catch() { ... } // from try @ 0789dc58 with catch @ 0789df44 */
                    /* catch() { ... } // from try @ 0789df38 with catch @ 0789df48 */
  if (param_2 != 1) {
                    /* catch() { ... } // from try @ 0789dd6c with catch @ 0789df6c */
                    /* catch() { ... } // from try @ 0789dd5c with catch @ 0789df70 */
    FUN_0350b2a4();
                    /* catch() { ... } // from try @ 0789df24 with catch @ 0789df74 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0789dc70 with catch @ 0789df78 */
    FUN_03b79cbc();
  }
                    /* catch() { ... } // from try @ 0789df34 with catch @ 0789df4c */
                    /* catch() { ... } // from try @ 0789dc00 with catch @ 0789df50 */
  plVar2 = (long *)__cxa_begin_catch();
                    /* catch() { ... } // from try @ 0789dbe0 with catch @ 0789df54 */
  lVar6 = *plVar2;
                    /* catch() { ... } // from try @ 0789ddf8 with catch @ 0789df58 */
                    /* catch() { ... } // from try @ 0789dbb8 with catch @ 0789df5c */
  __cxa_end_catch();
  plVar2 = (long *)*in_stack_00000008;
                    /* catch() { ... } // from try @ 0789da00 with catch @ 0789df60 */
                    /* catch() { ... } // from try @ 0789df30 with catch @ 0789df64 */
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0789dee8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03ac43c4(plVar2,*(long *)PTR_DAT_08488550,0);
LAB_0789dee8:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9b8(lVar6);
}


