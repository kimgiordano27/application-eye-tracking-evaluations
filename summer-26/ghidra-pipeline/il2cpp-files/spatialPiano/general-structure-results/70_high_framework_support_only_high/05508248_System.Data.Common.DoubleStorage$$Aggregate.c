/*
FUNCTION_NAME: System.Data.Common.DoubleStorage$$Aggregate
ENTRY_POINT: 05508248
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05508644) */
/* WARNING: Removing unreachable block (ram,0x0550884c) */

void System_Data_Common_DoubleStorage__Aggregate(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong in_x9;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x26;
  uint unaff_w27;
  undefined1 auVar12 [16];
  long in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long *in_stack_00000048;
  
code_r0x05508248:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_05508238;
LAB_05508250:
  puVar5 = (undefined8 *)FUN_02f421d0(unaff_x20,param_3,0);
                    /* try { // try from 0550825c to 056084cf has its CatchHandler @ 0550825c
                       catch() { ... } // from try @ 0550825c with catch @ 0550825c
                       catch() { ... } // from try @ 05509598 with catch @ 0550825c
                       catch() { ... } // from try @ 05509620 with catch @ 0550825c
                       catch() { ... } // from try @ 05509740 with catch @ 0550825c
                       catch() { ... } // from try @ 05509930 with catch @ 0550825c */
  do {
    uVar6 = (*(code *)*puVar5)(unaff_x20,puVar5[1]);
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 055085ac to 056085bf has its CatchHandler @ 05509890 */
      if (in_stack_00000048 == (long *)0x0) goto LAB_05508638;
      lVar7 = *in_stack_00000048;
                    /* try { // try from 055085d0 to 05608627 has its CatchHandler @ 05509900 */
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 == 0) goto LAB_055085fc;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05508800 to 05608807 has its CatchHandler @ 05509870 */
      FUN_02f089c8();
    }
    lVar7 = *in_stack_00000048;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_055082d8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02f421d0(in_stack_00000048,*(long *)OVR_OpenVR_IVRSettings__SetString_TypeInfo,0);
LAB_055082d8:
    lVar7 = (*(code *)*puVar5)(in_stack_00000048,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *(long *)(lVar7 + 0x10);
    if (lVar11 == 0) {
      uVar9 = *(undefined8 *)(lVar7 + 0x18);
      if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar11 = FUN_054d2524(uVar9,0);
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uVar2 = FUN_054f6fe4();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    auVar12 = FUN_05512e44(lVar10,lVar11,uVar2,0);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_042e7cdc(*(long *)(unaff_x19 + 0x38),lVar11,*(undefined8 *)OVRPlugin_OVRP_1_18_0_TypeInfo);
    if (*(long *)(lVar7 + 0x28) == 0) {
      lVar11 = 0;
    }
    else {
      FUN_05506338();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054fc2d8();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar2 = FUN_054fbb50();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar3 = FUN_054f6fe4();
      FUN_0550147c();
      FUN_05500c08();
      FUN_05501280();
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05508838 to 0560885b has its CatchHandler @ 05509898 */
        FUN_02f089c8();
      }
      uVar4 = FUN_054f6fe4();
      lVar11 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
      FUN_05116b38(lVar11,0);
      lVar10 = *(long *)(unaff_x19 + 0x10);
      *(undefined4 *)(lVar11 + 0x10) = uVar2;
      *(undefined4 *)(lVar11 + 0x14) = uVar3;
      *(undefined4 *)(lVar11 + 0x18) = uVar4;
      if (lVar10 == 0) {
LAB_055087f0:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054fc338();
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087f0;
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
    }
    FUN_05506338();
    if ((unaff_w27 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054fc3f8();
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      FUN_054fc398();
    }
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar2 = FUN_054fbb50();
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = FUN_054f6fe4();
    FUN_0550147c();
    if ((unaff_w27 & 1) == 0) {
      FUN_05501c04();
    }
    else {
      FUN_05500c08();
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_042e7c30(*(long *)(unaff_x19 + 0x38),*(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_054fc458(*(long *)(unaff_x19 + 0x10),unaff_w27 & 1,in_stack_00000030);
                    /* try { // try from 055084d0 to 056084d3 has its CatchHandler @ 05509810 */
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar4 = FUN_054f6fe4();
    uVar9 = *(undefined8 *)(lVar7 + 0x18);
                    /* try { // try from 055084e4 to 056084f3 has its CatchHandler @ 055098e0 */
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo);
    FUN_05116b38(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar9;
    *(undefined4 *)(lVar7 + 0x18) = uVar2;
    *(undefined4 *)(lVar7 + 0x1c) = uVar3;
    *(undefined4 *)(lVar7 + 0x20) = uVar4;
                    /* try { // try from 05508508 to 0560850b has its CatchHandler @ 0550980c */
    *(long *)(lVar7 + 0x28) = lVar11;
    if (unaff_x26 == 0) {
LAB_055087ec:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05508518 to 05608563 has its CatchHandler @ 055098e8 */
    lVar11 = *(long *)(unaff_x26 + 0x10);
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_055087ec;
    uVar1 = *(uint *)(unaff_x26 + 0x18);
    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x26 + 0x18) = uVar1 + 1;
      *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
    }
    else {
                    /* try { // try from 05508564 to 05608573 has its CatchHandler @ 055098dc */
      FUN_03abf904();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_055087ec;
                    /* try { // try from 05508578 to 056085ab has its CatchHandler @ 05509900 */
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05508814 to 0560881b has its CatchHandler @ 0550986c */
      FUN_02f089c8();
    }
    lVar7 = *(long *)(unaff_x19 + 0x18);
    uVar2 = FUN_054f6fe4();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0550dba0(lVar7,auVar12._0_8_,auVar12._8_8_,uVar2,0);
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    param_1 = *in_stack_00000048;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)PTR_DAT_067c91b8;
    unaff_x20 = in_stack_00000048;
    if (in_x9 == 0) goto LAB_05508250;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_05508238:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x05508248;
    }
    puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar8 = piVar8 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
                    /* try { // try from 05508628 to 05608663 has its CatchHandler @ 055098c8 */
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0550862c;
    }
  }
LAB_055085fc:
  puVar5 = (undefined8 *)FUN_02f421d0(in_stack_00000048,*(long *)PTR_DAT_067c91b0,0);
LAB_0550862c:
  (*(code *)*puVar5)(in_stack_00000048,puVar5[1]);
LAB_05508638:
  if (*(long *)(in_stack_00000028 + 0x28) == 0) {
    if (unaff_x26 == 0) goto LAB_055087f4;
    uVar2 = *(undefined4 *)(in_stack_00000030 + 0x10);
    uVar9 = FUN_03ac12f8();
                    /* try { // try from 0550879c to 0560879f has its CatchHandler @ 05509778 */
                    /* try { // try from 055087a0 to 056087a7 has its CatchHandler @ 05509878 */
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
                    /* try { // try from 055087b4 to 056087b7 has its CatchHandler @ 055097ec */
    FUN_05116b38(lVar7,0);
    *(undefined4 *)(lVar7 + 0x20) = uVar2;
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
    *(undefined4 *)(lVar7 + 0x10) = uStack0000000000000018;
    *(undefined4 *)(lVar7 + 0x14) = uStack000000000000001c;
    *(undefined8 *)(lVar7 + 0x18) = 0x7fffffff7fffffff;
    if (in_stack_00000010 == 0) goto LAB_055087f4;
                    /* try { // try from 055087e0 to 056087ff has its CatchHandler @ 055098b0 */
    *(long *)(in_stack_00000010 + 0x18) = lVar7;
  }
  else {
    FUN_05506338();
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (in_stack_00000020 == 0)) goto LAB_055087f4;
    FUN_054eb158(in_stack_00000020,*(long *)(unaff_x19 + 0x10),0);
                    /* try { // try from 0550867c to 05608683 has its CatchHandler @ 0550988c */
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_055087f4;
    FUN_054fc110(*(long *)(unaff_x19 + 0x10),in_stack_00000020);
    FUN_05501c04();
    if ((*(long *)(unaff_x19 + 0x10) == 0) ||
       (System_Data_Common_ObjectStorage__VerifyIDynamicMetaObjectProvider(),
       *(long *)(unaff_x19 + 0x10) == 0)) goto LAB_055087f4;
    uVar2 = *(undefined4 *)(in_stack_00000020 + 0x10);
    uVar3 = *(undefined4 *)(in_stack_00000030 + 0x10);
                    /* try { // try from 055086b8 to 056086bb has its CatchHandler @ 05509784 */
    uVar4 = FUN_054f6fe4();
                    /* try { // try from 055086bc to 056086c3 has its CatchHandler @ 055098d4 */
    if (unaff_x26 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_03ac12f8();
    }
    lVar7 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_19_0_TypeInfo);
                    /* try { // try from 05508700 to 05608703 has its CatchHandler @ 05509780 */
    FUN_05116b38(lVar7,0);
    *(undefined4 *)(lVar7 + 0x18) = uVar2;
    *(undefined4 *)(lVar7 + 0x1c) = uVar4;
    *(undefined4 *)(lVar7 + 0x20) = uVar3;
    *(undefined4 *)(lVar7 + 0x10) = uStack0000000000000018;
    *(undefined4 *)(lVar7 + 0x14) = uStack000000000000001c;
    *(undefined8 *)(lVar7 + 0x28) = uVar9;
                    /* try { // try from 0550871c to 0560871f has its CatchHandler @ 055097f4 */
    if (in_stack_00000010 == 0) goto LAB_055087f4;
    lVar11 = *(long *)(unaff_x19 + 0x30);
    *(long *)(in_stack_00000010 + 0x18) = lVar7;
    if (lVar11 == 0) goto LAB_055087f4;
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(lVar11 + 0x20);
  }
  if ((*(long *)(unaff_x19 + 0x10) != 0) && (in_stack_00000008 != 0)) {
    FUN_054eb158(in_stack_00000008,*(long *)(unaff_x19 + 0x10),0);
                    /* try { // try from 05508750 to 05608753 has its CatchHandler @ 0550977c */
    if (*(long *)(unaff_x19 + 0x30) != 0) {
                    /* try { // try from 05508754 to 0560875b has its CatchHandler @ 05509880 */
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
                    /* try { // try from 05508768 to 0560876b has its CatchHandler @ 055097f0 */
      return;
    }
  }
LAB_055087f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


