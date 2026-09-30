/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 0694145c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfileName(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long unaff_x20;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
                    /* catch() { ... } // from try @ 0694144c with catch @ 0694145c */
  thunk_FUN_03ae8be4();
                    /* try { // try from 06941460 to 06a41467 has its CatchHandler @ 069414a8 */
                    /* try { // try from 06941468 to 06a41487 has its CatchHandler @ 069407a4 */
                    /* catch() { ... } // from try @ 06940c0c with catch @ 0694146c */
  uVar3 = FUN_07c9c218();
  if (((uVar3 & 1) == 0) || (*(char *)(unaff_x20 + 0x70) == '\0')) {
LAB_06941680:
    puVar6 = (undefined8 *)(*unaff_x19 + 0x328);
LAB_0694168c:
                    /* WARNING: Could not recover jumptable at 0x069416b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)();
    return;
  }
  if (unaff_x19[6] != 0) {
                    /* try { // try from 06941488 to 06a4148b has its CatchHandler @ 06941494 */
    thunk_FUN_07c3556c(unaff_x19[6],*(undefined8 *)(unaff_x20 + 0x68),0);
    puVar1 = PTR_DAT_084b5d60;
    fVar10 = DAT_015c5990;
    fVar11 = DAT_015c58f8;
    lVar5 = unaff_x19[2];
                    /* catch() { ... } // from try @ 06941488 with catch @ 06941494 */
    if (lVar5 != 0) {
                    /* try { // try from 06941498 to 06a4149f has its CatchHandler @ 069414a8 */
                    /* try { // try from 069414a0 to 06a414ab has its CatchHandler @ 069407a4 */
                    /* catch() { ... } // from try @ 06941460 with catch @ 069414a8
                       catch() { ... } // from try @ 06941498 with catch @ 069414a8 */
      iVar7 = 0;
      fVar12 = 0.0;
      do {
        if (*(long *)(lVar5 + 0xe8) == 0) break;
        iVar2 = FUN_06936294();
        lVar5 = unaff_x19[2];
        if (iVar2 <= iVar7) {
          if (lVar5 == 0) break;
          fVar10 = *(float *)(lVar5 + 0x13c) * 10.0;
          fVar11 = 1.0;
          if (fVar10 <= 1.0) {
            fVar11 = fVar10;
          }
          fVar8 = 0.0;
          if (0.0 <= fVar10) {
            fVar8 = fVar11;
          }
          fVar11 = *(float *)(unaff_x19 + 7) + (fVar12 - *(float *)(unaff_x19 + 7)) * fVar8;
          (**(code **)(*unaff_x19 + 0x318))(fVar11);
          *(float *)(unaff_x19 + 7) = fVar11;
          if (fVar11 < DAT_015c5994) {
            if (unaff_x19[6] == 0) break;
            uVar3 = FUN_07c35ac4(unaff_x19[6],0);
            if ((uVar3 & 1) != 0) goto LAB_06941680;
          }
          if (unaff_x19[6] != 0) {
            uVar3 = FUN_07c35ac4(unaff_x19[6],0);
            if ((uVar3 & 1) != 0) {
              return;
            }
            puVar6 = (undefined8 *)(*unaff_x19 + 0x2e8);
            goto LAB_0694168c;
          }
          break;
        }
        if ((((lVar5 == 0) || (*(long *)(lVar5 + 0xe8) == 0)) ||
            (lVar5 = *(long *)(*(long *)(lVar5 + 0xe8) + 0x58), lVar5 == 0)) ||
           ((lVar5 = FUN_04de82e0(lVar5,iVar7,*(undefined8 *)puVar1), lVar5 == 0 ||
            (plVar4 = *(long **)(lVar5 + 0x80), plVar4 == (long *)0x0)))) break;
        uVar3 = (**(code **)(*plVar4 + 0x2e8))(plVar4,*(undefined8 *)(*plVar4 + 0x2f0));
        if ((uVar3 & 1) == 0) {
LAB_069415f0:
          fVar8 = fVar12;
        }
        else {
          plVar4 = *(long **)(lVar5 + 0x80);
          if (plVar4 == (long *)0x0) break;
          uVar3 = (**(code **)(*plVar4 + 0x518))(plVar4,*(undefined8 *)(*plVar4 + 0x520));
          if ((uVar3 & 1) == 0) {
            plVar4 = *(long **)(lVar5 + 0x80);
            if (plVar4 == (long *)0x0) break;
            uVar3 = (**(code **)(*plVar4 + 0x4d8))(plVar4,*(undefined8 *)(*plVar4 + 0x4e0));
            if ((uVar3 & 1) == 0) goto LAB_069415f0;
          }
          plVar4 = *(long **)(lVar5 + 0x80);
          if (plVar4 == (long *)0x0) break;
          fVar8 = (float)(**(code **)(*plVar4 + 0x528))(plVar4,*(undefined8 *)(*plVar4 + 0x530));
          plVar4 = *(long **)(lVar5 + 0x80);
          if (plVar4 == (long *)0x0) break;
          fVar9 = (float)(**(code **)(*plVar4 + 0x4e8))(plVar4,*(undefined8 *)(*plVar4 + 0x4f0));
          fVar8 = fVar8 + fVar9;
          fVar9 = 1.0;
          if (fVar8 <= 1.0) {
            fVar9 = fVar8;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar8) {
            fVar13 = fVar9;
          }
          if (unaff_x19[2] == 0) break;
          fVar8 = (float)FUN_06926524(unaff_x19[2],0);
          plVar4 = *(long **)(lVar5 + 0x80);
          if (plVar4 == (long *)0x0) break;
          fVar9 = (float)(**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
          fVar9 = fVar8 * fVar11 + fVar9 * fVar10;
          fVar8 = 1.0;
          if (fVar9 <= 1.0) {
            fVar8 = fVar9;
          }
          fVar8 = fVar13 * *(float *)(unaff_x20 + 0x78) * fVar8;
          if (fVar8 < fVar12) goto LAB_069415f0;
        }
        lVar5 = unaff_x19[2];
        iVar7 = iVar7 + 1;
        fVar12 = fVar8;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


