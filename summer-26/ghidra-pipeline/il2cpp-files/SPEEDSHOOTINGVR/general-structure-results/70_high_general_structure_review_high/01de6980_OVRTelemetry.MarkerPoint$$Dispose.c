/*
FUNCTION_NAME: OVRTelemetry.MarkerPoint$$Dispose
ENTRY_POINT: 01de6980
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x01de6cec) */

void OVRTelemetry_MarkerPoint__Dispose(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *plVar12;
  long unaff_x23;
  long *plVar13;
  long unaff_x24;
  long *plVar14;
  long unaff_x25;
  long *plVar15;
  long unaff_x26;
  long *plVar16;
  long unaff_x27;
  long *plVar17;
  
  puVar3 = PTR_DAT_02352080;
  plVar12 = *(long **)(unaff_x22 + 0xef8);
  plVar13 = *(long **)(unaff_x23 + 0x558);
  plVar14 = *(long **)(unaff_x24 + 0x4e8);
  plVar15 = *(long **)(unaff_x25 + 0x550);
  plVar16 = *(long **)(unaff_x26 + 0x4f0);
  plVar17 = *(long **)(unaff_x27 + 0x560);
  do {
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar12) {
                    /* try { // try from 01de69e4 to 01ee6ac7 has its CatchHandler @ 01de695c */
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01de69ec;
        }
        uVar9 = uVar9 - 1;
                    /* try { // try from 01de69c8 to 01ee69cb has its CatchHandler @ 01de6ab0 */
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
                    /* try { // try from 01de69dc to 01ee69e3 has its CatchHandler @ 01de6aac */
LAB_01de69ec:
    uVar9 = (*(code *)*puVar4)();
    if ((uVar9 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_0103ffe0();
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto OVRTelemetry_NullTelemetryClient__MarkerAnnotation;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar12) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_01de6a4c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_01de6a4c:
    plVar5 = (long *)(*(code *)*puVar4)();
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      bVar1 = *(byte *)(lVar7 + 0x130);
      uVar8 = (uint)bVar1;
      bVar2 = *(byte *)(*plVar13 + 0x130);
      if ((bVar1 < bVar2) ||
         (lVar10 = *(long *)(lVar7 + 200), *(long *)(lVar10 + (ulong)bVar2 * 8 + -8) != *plVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar5);
      }
      lVar6 = *plVar14;
      uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
      if ((bVar1 < *(byte *)(lVar6 + 0x130)) || (*(long *)(lVar10 + uVar9 * 8 + -8) != lVar6)) {
        lVar6 = *plVar15;
        uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
        if ((bVar1 < *(byte *)(lVar6 + 0x130)) || (*(long *)(lVar10 + uVar9 * 8 + -8) != lVar6)) {
          lVar6 = *plVar16;
          uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
          if ((bVar1 < *(byte *)(lVar6 + 0x130)) || (*(long *)(lVar10 + uVar9 * 8 + -8) != lVar6)) {
            lVar6 = *plVar17;
            uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
            if ((*(byte *)(lVar6 + 0x130) <= bVar1) && (*(long *)(lVar10 + uVar9 * 8 + -8) == lVar6)
               ) {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01022c14();
                lVar7 = *plVar5;
                lVar6 = *plVar17;
                uVar8 = (uint)*(byte *)(lVar7 + 0x130);
                uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
              }
              if ((uVar8 < (uint)uVar9) ||
                 (*(long *)(*(long *)(lVar7 + 200) + uVar9 * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_00fdc8d0(plVar5);
              }
              FUN_01de46e8(plVar5);
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar7 = *plVar5;
              lVar6 = *plVar16;
              uVar8 = (uint)*(byte *)(lVar7 + 0x130);
              uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
            }
            if ((uVar8 < (uint)uVar9) ||
               (*(long *)(*(long *)(lVar7 + 200) + uVar9 * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
              FUN_00fdc8d0(plVar5);
            }
            FUN_01de446c(plVar5);
          }
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar7 = *plVar5;
            lVar6 = *plVar15;
            uVar8 = (uint)*(byte *)(lVar7 + 0x130);
            uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
          }
          if ((uVar8 < (uint)uVar9) || (*(long *)(*(long *)(lVar7 + 200) + uVar9 * 8 + -8) != lVar6)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc8d0(plVar5);
          }
          FUN_01de432c(plVar5);
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
          lVar7 = *plVar5;
          lVar6 = *plVar14;
          uVar8 = (uint)*(byte *)(lVar7 + 0x130);
          uVar9 = (ulong)*(byte *)(lVar6 + 0x130);
        }
        if ((uVar8 < (uint)uVar9) || (*(long *)(*(long *)(lVar7 + 200) + uVar9 * 8 + -8) != lVar6))
        {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc8d0(plVar5);
        }
        FUN_01de40b0(plVar5);
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x21) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto FUN_01de6c90;
    }
  }
OVRTelemetry_NullTelemetryClient__MarkerAnnotation:
  puVar4 = (undefined8 *)FUN_0103c348(plVar12,*unaff_x21,0);
FUN_01de6c90:
  (*(code *)*puVar4)(plVar12,puVar4[1]);
  return;
}


