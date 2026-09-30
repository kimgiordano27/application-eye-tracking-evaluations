/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 03683b9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeMixedReality(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x700));
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_5__);
  *(undefined1 *)(unaff_x23 + 0xe6e) = 1;
  puVar2 = Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_6__;
  if (*(char *)(unaff_x20 + 0x69) != '\0') {
    unaff_x21 = unaff_x22;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar9 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 03683bf0 to 03783bf7 has its CatchHandler @ 03683df4 */
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_6__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03683c20;
        }
                    /* try { // try from 03683bf8 to 03783c3f has its CatchHandler @ 03683b4c */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03683c20:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
                    /* try { // try from 03683c40 to 03783c47 has its CatchHandler @ 03683d90 */
      bVar1 = *(byte *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ +
                       0x130);
                    /* try { // try from 03683c48 to 03783d7f has its CatchHandler @ 03683b4c */
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__)) {
        uVar5 = FUN_040766fc(plVar4,0);
        uVar9 = FUN_0340ebc0(uVar9,uVar5,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_8__
                             ,0);
      }
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03683cd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03683cd8:
    lVar6 = (*(code *)*puVar3)();
    if ((lVar6 != 0) &&
       (plVar4 = (long *)thunk_FUN_01ecaf38(lVar6,0),
       puVar2 = Method_Unity_VisualScripting_NumericNegationHandler_<>c_<_ctor>b__0_7__,
       plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      uVar5 = FUN_03406290(*(undefined8 *)puVar2,uVar5,0);
      FUN_03405678(uVar9,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


