/*
FUNCTION_NAME: RCG.Lovesick.InteractiveObjects.CrumpleablePoster$$OnCollisionEnter
ENTRY_POINT: 00decec0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void RCG_Lovesick_InteractiveObjects_CrumpleablePoster__OnCollisionEnter(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  uint in_w9;
  long unaff_x20;
  char *pcVar8;
  char *pcVar9;
  long unaff_x26;
  long unaff_x29;
  char acStack_30 [48];
  
  puVar5 = (undefined1 *)(param_1 | 2);
  *(undefined1 *)(unaff_x29 + -0x5f) = 0x2b;
  puVar6 = puVar5;
  if ((in_w9 >> 9 & 1) != 0) {
    puVar6 = puVar5 + 1;
    *puVar5 = 0x23;
  }
  *puVar6 = 0x6c;
  if ((in_w9 & 0x4a) == 0x40) {
    uVar7 = 0x6f;
  }
  else if ((in_w9 & 0x4a) == 8) {
    uVar7 = 0x78;
    if ((in_w9 & 0x4000) != 0) {
      uVar7 = 0x58;
    }
  }
  else {
    uVar7 = 100;
  }
  puVar6[1] = uVar7;
  uVar1 = ((ulong)(*(uint *)(unaff_x20 + 8) >> 9) & 1) + 0x17;
  pcVar8 = &stack0x00000000 + -((ulong)((int)uVar1 + 0xf) & 0x30);
  if (((DAT_0378d490 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0378d490), iVar4 != 0)) {
    DAT_0378d488 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_0378d490);
  }
  iVar4 = std::__ndk1::__libcpp_snprintf_l
                    (pcVar8,uVar1,(__locale_t *)DAT_0378d488,(char *)(unaff_x29 + -0x60));
  uVar2 = *(uint *)(unaff_x20 + 8) & 0xb0;
  pcVar9 = pcVar8 + iVar4;
  if ((uVar2 != 0x20) && (pcVar9 = pcVar8, uVar2 == 0x10)) {
    cVar3 = *pcVar8;
    if ((cVar3 == '-') || (cVar3 == '+')) {
      pcVar9 = pcVar8 + 1;
    }
    else if (((1 < iVar4) && (cVar3 == '0')) && ((byte)(pcVar8[1] | 0x20U) == 0x78)) {
      pcVar9 = pcVar8 + 2;
    }
  }
  std::__ndk1::ios_base::getloc();
  std::__ndk1::__num_put<char>::__widen_and_group_int
            (pcVar8,pcVar9,pcVar8 + iVar4,pcVar8 + -0x30,(char **)(unaff_x29 + -0x68),
             (char **)(unaff_x29 + -0x70),(locale *)(unaff_x29 + -0x78));
  std::__ndk1::__shared_count::__release_shared(*(__shared_count **)(unaff_x29 + -0x78));
  FUN_00d5ee7c();
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


