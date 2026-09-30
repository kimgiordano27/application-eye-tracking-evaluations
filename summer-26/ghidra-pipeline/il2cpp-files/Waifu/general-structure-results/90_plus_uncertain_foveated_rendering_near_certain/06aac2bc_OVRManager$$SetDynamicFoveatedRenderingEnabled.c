/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 06aac2bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__SetDynamicFoveatedRenderingEnabled
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  float *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_083ccf20) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
          goto LAB_06aac314;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06aac314:
    fVar6 = (float)(*(code *)*puVar1)();
    plVar5 = *(long **)(unaff_x20 + 0x138);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      fVar8 = param_2;
      fVar9 = param_3;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_083ccf20) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
            goto LAB_06aac388;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_0338f71c(plVar5,DAT_083ccf20,1);
LAB_06aac388:
      fVar7 = (float)(*(code *)*puVar1)(plVar5,1,puVar1[1]);
      fVar8 = fVar8 - param_2;
      fVar9 = fVar9 - param_3;
      fVar7 = (float)FUN_07a00a64(fVar7 - fVar6,0);
      *unaff_x19 = fVar6;
      unaff_x19[1] = param_2;
      unaff_x19[2] = param_3;
      unaff_x19[3] = fVar7;
      unaff_x19[4] = fVar8;
      unaff_x19[5] = fVar9;
      unaff_x19[6] = param_4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


