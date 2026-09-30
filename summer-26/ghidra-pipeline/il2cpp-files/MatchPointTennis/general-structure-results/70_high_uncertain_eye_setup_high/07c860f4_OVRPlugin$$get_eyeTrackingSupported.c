/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingSupported
ENTRY_POINT: 07c860f4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07c863ac) */

void OVRPlugin__get_eyeTrackingSupported(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined4 uStack0000000000000000;
  uint in_stack_00000008;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  do {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
                    /* try { // try from 07c86124 to 07d86127 has its CatchHandler @ 07c86128 */
                    /* catch() { ... } // from try @ 07c86124 with catch @ 07c86128 */
                    /* catch() { ... } // from try @ 07c860dc with catch @ 07c8612c */
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07c86130;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_044822ac();
LAB_07c86130:
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) {
          return;
        }
        lVar4 = *unaff_x19;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 == 0) goto LAB_07c8633c;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_07c86324;
      }
      lVar4 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_07c8618c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
                    /* try { // try from 07c86178 to 07d8619f has its CatchHandler @ 07c86350 */
      puVar2 = (undefined8 *)FUN_044822ac();
LAB_07c8618c:
      auVar14 = (*(code *)*puVar2)();
      if (auVar14._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      plVar6 = *(long **)(unaff_x20 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar4 = *plVar6;
      uVar1 = *(undefined4 *)(auVar14._0_8_ + 0x10);
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_07c861fc;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(plVar6,*unaff_x27,4);
LAB_07c861fc:
      uVar3 = (*(code *)*puVar2)(plVar6,uVar1);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar10 = (ulong)in_stack_00000008;
        uVar3 = _uStack0000000000000000 >> 0x20;
        uVar8 = FUN_09537f40(uStack0000000000000000,_uStack0000000000000000 >> 0x20,uVar10,
                             *(long *)(unaff_x20 + 0x38),0);
        fVar7 = auVar14._12_4_;
        if (auVar14._8_4_ <= fVar7) {
          fVar13 = 1.0;
          fVar7 = 0.0;
LAB_07c862b0:
          fVar12 = 0.0;
          fVar9 = 1.0;
        }
        else {
          if (fVar7 <= 0.0) {
            fVar7 = 1.0;
            fVar13 = 0.0;
            goto LAB_07c862b0;
          }
          fVar7 = (auVar14._8_4_ / fVar7) * 0.5;
          fVar9 = fVar7;
          if (1.0 < fVar7) {
            fVar9 = 1.0;
          }
          if (fVar7 < 0.0) {
            fVar9 = 0.0;
          }
          fVar7 = fVar9 * 0.0 + 1.0;
          fVar13 = fStack000000000000006c - fVar9 * fStack000000000000006c;
          fVar12 = fStack0000000000000068 - fVar9 * fStack0000000000000068;
          fVar9 = fVar7;
        }
        lVar4 = *unaff_x28;
        fVar11 = *(float *)(unaff_x20 + 0x40);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar4 = *unaff_x28;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        *(float *)(lVar4 + 0x18) = fVar9;
        *(float *)(lVar4 + 0x1c) = fVar11 * 0.5;
        *(float *)(lVar4 + 0xc) = fVar7;
        *(float *)(lVar4 + 0x10) = fVar13;
        *(float *)(lVar4 + 0x14) = fVar12;
        FUN_07c082e4(uVar8,uVar3,uVar10,0,0);
      }
      param_1 = *unaff_x19;
      param_3 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
LAB_07c86324:
    if (*(long *)(piVar5 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_07c86358;
    }
  }
LAB_07c8633c:
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_07c86358:
  (*(code *)*puVar2)();
  return;
}


