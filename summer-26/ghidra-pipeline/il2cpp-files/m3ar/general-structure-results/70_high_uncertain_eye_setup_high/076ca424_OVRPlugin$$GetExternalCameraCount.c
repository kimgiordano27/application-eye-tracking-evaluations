/*
FUNCTION_NAME: OVRPlugin$$GetExternalCameraCount
ENTRY_POINT: 076ca424
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin__GetExternalCameraCount(float param_1,float param_2,float param_3,long *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  byte bVar9;
  long unaff_x24;
  long *plVar10;
  long unaff_x25;
  long *plVar11;
  long unaff_x26;
  long *plVar12;
  long unaff_x27;
  long *plVar13;
  long unaff_x28;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  undefined8 in_stack_00000068;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  long *in_stack_00000088;
  
                    /* try { // try from 076ca424 to 077ca42f has its CatchHandler @ 076ca538 */
  plVar10 = *(long **)(unaff_x24 + 0x880);
  plVar11 = *(long **)(unaff_x25 + 3000);
  plVar12 = *(long **)(unaff_x26 + 0x1b8);
  plVar13 = *(long **)(unaff_x27 + 0xf0);
  puVar14 = *(undefined8 **)(unaff_x28 + 0xbc0);
                    /* try { // try from 076ca440 to 077ca447 has its CatchHandler @ 076ca534 */
  bVar9 = 1;
  do {
    lVar4 = *param_4;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 076ca450 to 077ca453 has its CatchHandler @ 076ca56c */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar10) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076ca490;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(param_4,*plVar10,0);
LAB_076ca490:
    uVar6 = (*(code *)*puVar2)(param_4,puVar2[1]);
    plVar8 = in_stack_00000088;
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)*in_stack_00000030;
      if (plVar10 == (long *)0x0) goto LAB_076ca7e4;
      lVar4 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_076ca7bc;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 076ca4a4 to 077ca4cb has its CatchHandler @ 076ca5ec */
    if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *in_stack_00000088;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *plVar11) {
                    /* try { // try from 076ca4f0 to 077ca4f7 has its CatchHandler @ 076ca5e0 */
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076ca4f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000088,*plVar11,0);
LAB_076ca4f4:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    plVar8 = *(long **)(unaff_x19 + 0x28);
                    /* try { // try from 076ca504 to 077ca507 has its CatchHandler @ 076ca568 */
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *plVar8;
    lVar3 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
          goto LAB_076ca55c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar8,lVar3,0x12);
LAB_076ca55c:
    uVar6 = (*(code *)*puVar2)(plVar8,&stack0x00000068,puVar2[1]);
    if ((uVar6 & 1) == 0) {
LAB_076ca6e4:
      bVar9 = 0;
      param_4 = in_stack_00000088;
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar8 = *(long **)(unaff_x19 + 0x28);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar8;
      uVar1 = *(undefined4 *)(lVar4 + 0x14);
      lVar3 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_076ca5d0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar8,lVar3,9);
LAB_076ca5d0:
      uVar6 = (*(code *)*puVar2)(plVar8,uVar1,&stack0x00000048,puVar2[1]);
      if ((uVar6 & 1) == 0) goto LAB_076ca6e4;
      plVar8 = *(long **)(unaff_x19 + 0x38);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar3 = *plVar8;
      uVar1 = *(undefined4 *)(lVar4 + 0x14);
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *plVar13) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_076ca640;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar8,*plVar13,0);
LAB_076ca640:
      uVar6 = (*(code *)*puVar2)(plVar8,uVar1,&stack0x00000038,puVar2[1]);
      if ((uVar6 & 1) == 0) goto LAB_076ca6e4;
      fVar16 = fStack0000000000000074;
      fVar15 = (float)FUN_076ca834();
      fVar15 = fVar15 * fStack0000000000000038;
      fVar16 = fVar16 * fStack000000000000003c;
      fVar17 = param_3 * in_stack_00000040;
      if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      FUN_0706723c(*(long *)(unaff_x19 + 0x68),lVar4,*puVar14);
      bVar9 = bVar9 & param_1 * param_2 < fVar17 + fVar15 + fVar16;
      param_4 = in_stack_00000088;
    }
    in_stack_00000088 = param_4;
    if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar14 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076ca7d8;
    }
  }
LAB_076ca7bc:
  puVar14 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f65868,0);
LAB_076ca7d8:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
LAB_076ca7e4:
  if (in_stack_00000028 == 0) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031884();
}


