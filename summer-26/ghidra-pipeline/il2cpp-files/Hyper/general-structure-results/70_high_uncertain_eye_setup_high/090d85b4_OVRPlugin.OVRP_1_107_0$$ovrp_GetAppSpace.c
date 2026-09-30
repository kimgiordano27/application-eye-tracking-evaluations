/*
FUNCTION_NAME: OVRPlugin.OVRP_1_107_0$$ovrp_GetAppSpace
ENTRY_POINT: 090d85b4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_107_0__ovrp_GetAppSpace(undefined8 param_1)

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
  
  lVar1 = FUN_0a17b7e4(param_1,0);
  if (lVar1 != 0) {
    FUN_0a18a274(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar1,0);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar1 = FUN_0a17b7e4(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
                    /* try { // try from 090d85ec to 091d8613 has its CatchHandler @ 090d8a90 */
      FUN_0a18a428(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                   in_stack_00000018,lVar1,0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar1 = FUN_0a17b7e4(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
        uVar2 = thunk_FUN_0a18aba0(lVar1,0);
        if (*(int *)(*(long *)PTR_DAT_0ac09788 + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)PTR_DAT_0ac09788);
        }
        uVar3 = FUN_0a17b398(uVar2,0,0);
        fVar8 = 1.0;
        if ((uVar3 & 1) != 0) {
          if (((*(long *)(unaff_x19 + 0x30) == 0) ||
              (lVar1 = FUN_0a17b7e4(*(long *)(unaff_x19 + 0x30),0), lVar1 == 0)) ||
             (lVar1 = thunk_FUN_0a18aba0(lVar1,0), lVar1 == 0)) goto LAB_090d8774;
          fVar8 = (float)FUN_0a18c388(lVar1,0);
        }
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          lVar1 = FUN_0a17b7e4(*(long *)(unaff_x19 + 0x30),0);
          plVar7 = *(long **)(unaff_x19 + 0x28);
          if (plVar7 != (long *)0x0) {
            lVar5 = *plVar7;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *unaff_x21) {
                  puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_090d8708;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x21,1);
LAB_090d8708:
            fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
            if (DAT_0b31f763 == '\0') {
              FUN_04947ee4(PTR_DAT_0ac0def8);
              DAT_0b31f763 = '\x01';
            }
            if (lVar1 != 0) {
              fVar9 = fVar9 / fVar8;
              lVar5 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
              FUN_0a18aa1c(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                           fVar9 * *(float *)(lVar5 + 0x14),lVar1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_090d8774:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


