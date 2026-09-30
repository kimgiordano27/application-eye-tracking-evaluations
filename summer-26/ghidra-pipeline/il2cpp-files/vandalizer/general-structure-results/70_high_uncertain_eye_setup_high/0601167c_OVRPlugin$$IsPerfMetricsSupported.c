/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 0601167c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsPerfMetricsSupported
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *unaff_x21;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  
  fVar7 = (float)FUN_06e6836c(param_4,0);
  plVar6 = (long *)unaff_x19[5];
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    fVar9 = param_2;
    fVar10 = param_3;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_060116e4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8(plVar6,*unaff_x21,0);
LAB_060116e4:
    (*(code *)*puVar1)(&stack0x00000020,plVar6,puVar1[1]);
    fVar11 = in_stack_00000028;
    fVar12 = fStack0000000000000020;
    plVar6 = (long *)unaff_x19[5];
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      fVar13 = *(float *)(unaff_x19 + 6);
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      fStack00000000000000a8 = fStack0000000000000024;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0601176c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0322c1e8(plVar6,*unaff_x21,1);
LAB_0601176c:
      (*(code *)*puVar1)(plVar6,puVar1[1]);
      fStack00000000000000ac = (float)FUN_06011aac();
      if (DAT_07a3fba1 == '\0') {
        FUN_031f20f4(PTR_DAT_0759b370);
        DAT_07a3fba1 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if (0 < (int)unaff_x19[10]) {
        fVar14 = fStack00000000000000a8 + param_2 * fVar13;
        fVar12 = fVar12 + fVar7 * fVar13;
        fVar11 = fVar11 + param_3 * fVar13;
        fVar9 = SQRT((fVar11 - fVar10) * (fVar11 - fVar10) +
                     (fVar12 - fStack00000000000000ac) * (fVar12 - fStack00000000000000ac) +
                     (fVar14 - fVar9) * (fVar14 - fVar9));
        lVar2 = 0;
        uVar4 = 0;
        do {
          fVar10 = fVar14;
          fVar13 = fVar11;
          uVar8 = FUN_06011cd0(fVar12,fVar14,fVar11,fVar12 + fVar7 * fVar9 * 0.5,
                               fVar14 + param_2 * fVar9 * 0.5,fVar11 + param_3 * fVar9 * 0.5);
          lVar3 = unaff_x19[7];
          if (lVar3 == 0) goto LAB_060118f4;
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          lVar3 = lVar3 + lVar2;
          *(undefined4 *)(lVar3 + 0x20) = uVar8;
          *(float *)(lVar3 + 0x24) = fVar10;
          *(float *)(lVar3 + 0x28) = fVar13;
          uVar4 = uVar4 + 1;
          lVar2 = lVar2 + 0xc;
        } while ((long)uVar4 < (long)(int)unaff_x19[10]);
      }
      (**(code **)(*unaff_x19 + 0x1c8))();
      return;
    }
  }
LAB_060118f4:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


