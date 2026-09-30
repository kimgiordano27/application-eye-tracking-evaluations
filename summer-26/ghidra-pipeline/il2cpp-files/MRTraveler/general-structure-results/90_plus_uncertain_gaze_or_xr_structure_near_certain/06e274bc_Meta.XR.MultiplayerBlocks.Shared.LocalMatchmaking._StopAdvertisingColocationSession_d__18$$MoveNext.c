/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopAdvertisingColocationSession>d__18$$MoveNext
ENTRY_POINT: 06e274bc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06e27644) */

int Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopAdvertisingColocationSession>d__18__MoveNext
              (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *plVar7;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  do {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == param_3) {
          puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_06e27504;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(unaff_x22,param_3,2);
LAB_06e27504:
    iVar1 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = FUN_0675cb20(*(long *)(unaff_x20 + 0x30),unaff_x21,*unaff_x27);
                    /* try { // try from 06e27528 to 06f2752f has its CatchHandler @ 06e278bc */
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar7 = *(long **)(lVar4 + 0x50);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 06e27544 to 06f2754b has its CatchHandler @ 06e278b4 */
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
                    /* try { // try from 06e27578 to 06f27583 has its CatchHandler @ 06e2785c */
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_06e27584;
        }
        uVar5 = uVar5 - 1;
                    /* try { // try from 06e2755c to 06f27563 has its CatchHandler @ 06e278b8 */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*unaff_x28,6);
LAB_06e27584:
    iVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    unaff_x23 = unaff_x23 + (long)(iVar1 * iVar2 * 2);
                    /* try { // try from 06e2759c to 06f2759f has its CatchHandler @ 06e27860 */
    do {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06e27408;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06e27408:
      uVar5 = (*(code *)*puVar3)();
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 06e275a0 to 06f275af has its CatchHandler @ 06e278b0 */
        if (unaff_x19 == (long *)0x0) goto code_r0x06e27604;
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_06e275d8;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_06e275c0;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06e27464;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348();
LAB_06e27464:
      unaff_x21 = (*(code *)*puVar3)();
      if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar4 = FUN_0675cb20(*(long *)(unaff_x20 + 0x30),unaff_x21,*unaff_x27);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
    } while (*(long *)(lVar4 + 0x50) == 0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = FUN_0675cb20(*(long *)(unaff_x20 + 0x30),unaff_x21,*unaff_x27);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    unaff_x22 = *(long **)(lVar4 + 0x50);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *unaff_x22;
    param_3 = *unaff_x28;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_06e275c0:
                    /* try { // try from 06e275c4 to 06f275c7 has its CatchHandler @ 06e27844 */
                    /* try { // try from 06e275c8 to 06f275d7 has its CatchHandler @ 06e27880 */
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06e275f4;
    }
  }
LAB_06e275d8:
  puVar3 = (undefined8 *)FUN_03cf1348();
                    /* try { // try from 06e275e4 to 06f275ef has its CatchHandler @ 06e27850 */
LAB_06e275f4:
  (*(code *)*puVar3)();
code_r0x06e27604:
                    /* try { // try from 06e27600 to 06f27607 has its CatchHandler @ 06e2784c */
  uVar5 = unaff_x23 + 0x3ff;
  if (-1 < (long)unaff_x23) {
    uVar5 = unaff_x23;
  }
                    /* try { // try from 06e27620 to 06f2764f has its CatchHandler @ 06e27848 */
  return (int)(uVar5 >> 10) + 1;
}


