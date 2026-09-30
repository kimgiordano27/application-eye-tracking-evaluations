/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 05bc63f0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05bc653c) */

void OVRPlugin__SetHeadPoseModifier
               (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar10;
  long *in_stack_00000088;
  
  do {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05bc6378 with catch @ 05bc63f0
                        */
    fVar9 = unaff_s14 * param_2;
    fVar10 = unaff_s14 * param_3;
    fVar8 = unaff_s14 * param_4;
                    /* try { // try from 05bc6408 to 05cc641f has its CatchHandler @ 05bc64cc */
                    /* try { // try from 05bc6420 to 05cc64b7 has its CatchHandler @ 05bc630c */
    unaff_s14 = (unaff_s13 * param_3 + param_5 + unaff_s11 * param_4) - unaff_s12 * param_2;
    FUN_069e7c88(unaff_s8,unaff_s9,unaff_s10,unaff_s14,
                 (unaff_s12 * param_1 + fVar9 + unaff_s13 * param_4) - unaff_s11 * param_3,
                 (unaff_s11 * param_2 + fVar10 + unaff_s12 * param_4) - unaff_s13 * param_1,
                 ((fVar8 - unaff_s11 * param_1) - unaff_s13 * param_2) - unaff_s12 * param_3,
                 unaff_x19,0);
    do {
      if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = *in_stack_00000088;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x20) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05bc62f8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000088,*unaff_x20,0);
LAB_05bc62f8:
      uVar6 = (*(code *)*puVar3)(in_stack_00000088,puVar3[1]);
      puVar2 = PTR_DAT_070c2e88;
      if ((uVar6 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_031c3cac(in_stack_00000088,*(undefined8 *)PTR_DAT_070c2e88);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_05bc64dc;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_05bc64c4;
      }
      if (in_stack_00000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      lVar5 = *in_stack_00000088;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x20) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_05bc6360;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(in_stack_00000088,*unaff_x20,1);
LAB_05bc6360:
      unaff_x19 = (long *)(*(code *)*puVar3)(in_stack_00000088,puVar3[1]);
    } while (unaff_x19 == (long *)0x0);
    bVar1 = *(byte *)(*unaff_x21 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x21)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(unaff_x19);
    }
    FUN_069e6528(unaff_x19,0);
    unaff_s8 = FUN_069c2d88(&stack0x000000d0,0);
    unaff_s13 = unaff_s9;
    unaff_s12 = unaff_s10;
    unaff_s11 = (float)thunk_FUN_069c1a10(&stack0x000000d0,0);
    param_2 = unaff_s13;
    param_3 = unaff_s12;
    param_4 = unaff_s14;
    param_1 = (float)FUN_069e7314(unaff_x19,0);
    param_5 = unaff_s14 * param_1;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_05bc64c4:
    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05bc64f8;
    }
  }
LAB_05bc64dc:
  puVar3 = (undefined8 *)FUN_031c0d08(plVar4,*(long *)puVar2,0);
LAB_05bc64f8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


