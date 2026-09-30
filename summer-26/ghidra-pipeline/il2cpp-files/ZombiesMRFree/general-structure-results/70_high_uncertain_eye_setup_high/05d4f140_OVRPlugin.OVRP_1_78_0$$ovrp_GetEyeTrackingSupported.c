/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingSupported
ENTRY_POINT: 05d4f140
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingSupported(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if (param_1 != 0) {
    FUN_068f8b44(param_1,1,0);
                    /* try { // try from 05d4f150 to 05e4f153 has its CatchHandler @ 05d4f174 */
                    /* try { // try from 05d4f154 to 05e4f17b has its CatchHandler @ 05d4efd8 */
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar1 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
      FUN_06904354(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar1,0);
                    /* catch() { ... } // from try @ 05d4f150 with catch @ 05d4f174 */
                    /* try { // try from 05d4f17c to 05e4f183 has its CatchHandler @ 05d4f198 */
                    /* try { // try from 05d4f184 to 05e4f18f has its CatchHandler @ 05d4efd8 */
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar1 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                    /* try { // try from 05d4f190 to 05e4f197 has its CatchHandler @ 05d4f198 */
        FUN_06904520(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar1,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d4f17c with catch @ 05d4f198
                       catch(type#2 @ 00000000) { ... } // from try @ 05d4f190 with catch @ 05d4f198
                        */
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar1 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
          uVar2 = FUN_069041ac(lVar1,0);
          if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
            thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
          }
          uVar3 = FUN_068f8810(uVar2,0,0);
          fVar8 = 1.0;
          if ((uVar3 & 1) != 0) {
            if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                (lVar1 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0), lVar1 == 0)) ||
               (lVar1 = FUN_069041ac(lVar1,0), lVar1 == 0)) goto LAB_05d4f318;
            fVar8 = (float)FUN_06905eb0(lVar1,0);
          }
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar1 = FUN_068f8a88(*(long *)(unaff_x19 + 0x30),0);
            plVar7 = *(long **)(unaff_x19 + 0x28);
            if (plVar7 != (long *)0x0) {
              lVar5 = *plVar7;
              uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_05d4f2ac;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)FUN_02feb5b8(plVar7,*unaff_x21,1);
LAB_05d4f2ac:
              fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
              if (DAT_0738e666 == '\0') {
                FUN_02fe925c(PTR_DAT_06f6d5d8);
                DAT_0738e666 = '\x01';
              }
              if (lVar1 != 0) {
                fVar9 = fVar9 / fVar8;
                lVar5 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
                FUN_06904aa4(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                             fVar9 * *(float *)(lVar5 + 0x14),lVar1,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_05d4f318:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


