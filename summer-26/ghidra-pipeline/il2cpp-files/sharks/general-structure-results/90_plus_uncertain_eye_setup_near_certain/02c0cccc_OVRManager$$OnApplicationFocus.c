/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 02c0cccc
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c0d0d4) */
/* WARNING: Removing unreachable block (ram,0x02c0d0d8) */

undefined8 OVRManager__OnApplicationFocus(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long unaff_x19;
  long lVar12;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w26;
  long *unaff_x29;
  long *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
code_r0x02c0cccc:
  pcVar11 = *(code **)(param_1 + 0x288);
  uVar10 = *(undefined8 *)(param_1 + 0x290);
  plVar8 = unaff_x20;
  do {
    plVar3 = (long *)(*pcVar11)(param_2,1,uVar10);
                    /* catch() { ... } // from try @ 02c0cc1c with catch @ 02c0cce8
                       catch() { ... } // from try @ 02c0ccd8 with catch @ 02c0cce8 */
                    /* try { // try from 02c0ccec to 02d0ccef has its CatchHandler @ 02c0ccf8 */
                    /* try { // try from 02c0ccf0 to 02d0ccfb has its CatchHandler @ 02c0cb00 */
    uVar4 = FUN_02b0f554(plVar3,0,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02c0cbfc with catch @ 02c0ccf8
                       catch(type#2 @ 00000000) { ... } // from try @ 02c0ccec with catch @ 02c0ccf8
                        */
    unaff_x20 = plVar8;
    if ((uVar4 & 1) == 0) {
      uVar10 = FUN_017fc3f4(*unaff_x23,in_stack_00000048._4_4_);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01843fdc(*unaff_x29);
      }
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
        if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03802908
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar3);
        }
      }
      uVar4 = FUN_02c070a0(plVar3,unaff_w25,3,uVar10);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = FUN_02b0f554(plVar8,0,0), unaff_x20 = plVar3, (uVar4 & 1) == 0)) {
        if (unaff_x19 == 0) {
          unaff_x19 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
          FUN_02709c80(unaff_x19,*(undefined4 *)(unaff_x24 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
          if (unaff_x19 == 0) goto LAB_02c0d1d0;
          lVar7 = *(long *)(unaff_x19 + 0x10);
          lVar12 = *(long *)PTR_DAT_03803070;
          *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_02c0d1d0;
          uVar2 = *(uint *)(unaff_x19 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
            puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
            *puVar5 = plVar8;
            thunk_FUN_0188fd20(puVar5,plVar8);
          }
          else {
            FUN_0270a444(unaff_x19,plVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar7 = *(long *)(unaff_x19 + 0x10);
        lVar12 = *(long *)PTR_DAT_03803070;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_02c0d1d0;
        uVar2 = *(uint *)(unaff_x19 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
          plVar6 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *plVar6 = (long)plVar3;
          thunk_FUN_0188fd20(plVar6,plVar3);
          unaff_x20 = plVar8;
        }
        else {
          FUN_0270a444(unaff_x19,plVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          unaff_x20 = plVar8;
        }
      }
    }
    unaff_w21 = unaff_w21 + 1;
    if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w21) {
      if (unaff_x19 != 0) {
        in_stack_00000010 =
             (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(unaff_x19 + 0x18))
        ;
        FUN_0270a8f8(unaff_x19,in_stack_00000010,*(undefined8 *)PTR_DAT_0380b0a0);
      }
      uVar4 = FUN_02b0f518(unaff_x20,0,0);
      if ((uVar4 & 1) != 0) {
        if ((in_stack_00000048._4_4_ == 0) && (in_stack_00000010 == (long *)0x0)) {
          if ((unaff_x20 == (long *)0x0) ||
             (lVar7 = (**(code **)(*unaff_x20 + 0x398))
                                (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x3a0)), lVar7 == 0))
          goto LAB_02c0d1d0;
          if (((unaff_w25 >> 0x12 & 1) == 0) && (*(long *)(lVar7 + 0x18) == 0)) {
            uVar10 = (**(code **)(*unaff_x20 + 0x328))
                               (unaff_x20,in_stack_00000040,unaff_w25,in_stack_00000018,
                                in_stack_00000058);
            return uVar10;
          }
        }
        if (in_stack_00000010 == (long *)0x0) {
          in_stack_00000010 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
          if (in_stack_00000010 == (long *)0x0) goto LAB_02c0d1d0;
          if ((unaff_x20 != (long *)0x0) &&
             (lVar7 = thunk_FUN_01861ac0(unaff_x20,*(undefined8 *)(*in_stack_00000010 + 0x40)),
             lVar7 == 0)) {
            uVar10 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar10,0);
          }
          if ((int)in_stack_00000010[3] == 0) goto LAB_02c0d1d4;
          in_stack_00000010[4] = (long)unaff_x20;
          thunk_FUN_0188fd20(in_stack_00000010 + 4,unaff_x20);
        }
        if (in_stack_00000058 == 0) {
          lVar12 = *(long *)PTR_DAT_037f4dc8;
          lVar7 = *(long *)(lVar12 + 0x38);
          if (lVar7 == 0) {
            FUN_0185db00(lVar12);
            lVar7 = *(long *)(lVar12 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0185daa4();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0185daa4();
          }
          in_stack_00000058 = **(long **)(lVar7 + 0xb8);
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        plVar8 = (long *)(**(code **)(*in_stack_00000018 + 0x188))
                                   (in_stack_00000018,unaff_w25,in_stack_00000010,&stack0x00000058,
                                    in_stack_00000020);
        uVar4 = FUN_02b0f0b4(plVar8,0,0);
        if ((uVar4 & 1) == 0) {
          if (plVar8 != (long *)0x0) {
            lVar7 = *plVar8;
            bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
            if ((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
               (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_037fc238)) {
              uVar10 = (**(code **)(lVar7 + 0x328))
                                 (plVar8,in_stack_00000040,unaff_w25,in_stack_00000018,
                                  in_stack_00000058);
              return uVar10;
            }
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(plVar8);
          }
          goto LAB_02c0d1d0;
        }
      }
      uVar10 = (**(code **)(*in_stack_00000028 + 0x2c8))
                         (in_stack_00000028,*(undefined8 *)(*in_stack_00000028 + 0x2d0));
      thunk_FUN_01851c08(PTR_DAT_037f87c8);
      uVar9 = thunk_FUN_01861bbc();
      FUN_02bd1250(uVar9,uVar10,in_stack_00000030,0);
      uVar10 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar9,uVar10);
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w21) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    param_2 = *(long **)(unaff_x24 + (long)(int)unaff_w21 * 8 + 0x20);
    if (param_2 == (long *)0x0) {
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    param_1 = *param_2;
    if (unaff_w26 == 0) goto code_r0x02c0cccc;
                    /* try { // try from 02c0ccd8 to 02d0cce7 has its CatchHandler @ 02c0cce8 */
    pcVar11 = *(code **)(param_1 + 0x2b8);
    uVar10 = *(undefined8 *)(param_1 + 0x2c0);
    plVar8 = unaff_x20;
  } while( true );
}


