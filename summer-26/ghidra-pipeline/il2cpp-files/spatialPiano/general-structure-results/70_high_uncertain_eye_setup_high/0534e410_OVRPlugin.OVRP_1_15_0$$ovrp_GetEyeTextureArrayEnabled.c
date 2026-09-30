/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetEyeTextureArrayEnabled
ENTRY_POINT: 0534e410
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetEyeTextureArrayEnabled(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
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
  
  uVar1 = (*(code *)*param_1)();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_060f0c58(*(long *)(unaff_x19 + 0x30),0,0);
      return;
    }
  }
  else if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_060f0c58(*(long *)(unaff_x19 + 0x30),1,0);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar2 = FUN_060f0a10(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
      FUN_060ffcc0(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar2,0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar2 = FUN_060f0a10(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
        FUN_060ffe7c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar2,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar2 = FUN_060f0a10(*(long *)(unaff_x19 + 0x30),0), lVar2 != 0)) {
          uVar3 = thunk_FUN_0610061c(lVar2,0);
          if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
          }
          uVar1 = FUN_060f078c(uVar3,0,0);
          fVar8 = 1.0;
          if ((uVar1 & 1) != 0) {
            if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                (lVar2 = FUN_060f0a10(*(long *)(unaff_x19 + 0x30),0), lVar2 == 0)) ||
               (lVar2 = thunk_FUN_0610061c(lVar2,0), lVar2 == 0)) goto LAB_0534e614;
            fVar8 = (float)FUN_06101d4c(lVar2,0);
          }
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar2 = FUN_060f0a10(*(long *)(unaff_x19 + 0x30),0);
            plVar7 = *(long **)(unaff_x19 + 0x28);
            if (plVar7 != (long *)0x0) {
              lVar5 = *plVar7;
              uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar1 != 0) {
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *unaff_x21) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_0534e5a8;
                  }
                  uVar1 = uVar1 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar1 != 0);
              }
              puVar4 = (undefined8 *)FUN_02f421d0(plVar7,*unaff_x21,1);
LAB_0534e5a8:
              fVar9 = (float)(*(code *)*puVar4)(plVar7,puVar4[1]);
              if (DAT_06bb42c2 == '\0') {
                FUN_02f08768(PTR_DAT_067c8f78);
                DAT_06bb42c2 = '\x01';
              }
              if (lVar2 != 0) {
                fVar9 = fVar9 / fVar8;
                lVar5 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
                FUN_06100490(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                             fVar9 * *(float *)(lVar5 + 0x14),lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0534e614:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


