/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$.cctor
ENTRY_POINT: 07caa288
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0___cctor(long param_1)

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
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((param_1 != 0) && (lVar1 = FUN_0952a094(param_1,0), lVar1 != 0)) {
    FUN_0953a29c(in_stack_00000008._4_4_,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018,lVar1,0);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar1 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0), lVar1 != 0)) {
      uVar2 = thunk_FUN_0953ac24(lVar1,0);
      if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
      }
      uVar3 = FUN_09531730(uVar2,0,0);
      fVar8 = 1.0;
      if ((uVar3 & 1) != 0) {
        if (((*(long *)(unaff_x19 + 0x30) == 0) ||
            (lVar1 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0), lVar1 == 0)) ||
           (lVar1 = thunk_FUN_0953ac24(lVar1,0), lVar1 == 0)) goto LAB_07caa428;
        fVar8 = (float)FUN_0953db60(lVar1,0);
      }
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        lVar1 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0);
        plVar7 = *(long **)(unaff_x19 + 0x28);
        if (plVar7 != (long *)0x0) {
          lVar5 = *plVar7;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x21) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_07caa3bc;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_044822ac(plVar7,*unaff_x21,1);
LAB_07caa3bc:
          fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
          if (DAT_0a51bf46 == '\0') {
            FUN_04447ba8(PTR_DAT_09f1e740);
            DAT_0a51bf46 = '\x01';
          }
          if (lVar1 != 0) {
            fVar9 = fVar9 / fVar8;
            lVar5 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
            FUN_0953aa9c(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                         fVar9 * *(float *)(lVar5 + 0x14),lVar1,0);
            return;
          }
        }
      }
    }
  }
LAB_07caa428:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


