/*
FUNCTION_NAME: OVRPlugin.RectiPair$$set_Item
ENTRY_POINT: 076d98bc
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_RectiPair__set_Item(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  
  fVar9 = param_2;
  fVar10 = param_3;
  if ((DAT_0954826e & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fae100);
    FUN_0403162c(PTR_DAT_08fae108);
    FUN_0403162c(PTR_DAT_08fae110);
    FUN_0403162c(PTR_DAT_08fae118);
    FUN_0403162c(PTR_DAT_08fae120);
    FUN_0403162c(PTR_DAT_08fae128);
    FUN_0403162c(PTR_DAT_08fae130);
    DAT_0954826e = 1;
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  _uStack0000000000000028 = 0;
  lVar5 = FUN_085849e0(param_4,0);
  if (lVar5 != 0) {
    fVar8 = (float)FUN_08598884(lVar5,0);
    FUN_076d94b4(param_4);
    puVar1 = PTR_DAT_08fae110;
    if (*(long *)(param_4 + 0x30) != 0) {
      FUN_06f806bc(in_stack_00000008._4_4_ - (fVar8 - param_1),*(long *)(param_4 + 0x30),0,
                   *(undefined8 *)PTR_DAT_08fae110);
      if (*(long *)(param_4 + 0x30) != 0) {
        FUN_06f806bc(fStack0000000000000010 - (fVar9 - param_2),*(long *)(param_4 + 0x30),1,
                     *(undefined8 *)puVar1);
        if (*(long *)(param_4 + 0x30) != 0) {
          FUN_06f806bc(fStack0000000000000014 - (fVar10 - param_3),*(long *)(param_4 + 0x30),2,
                       *(undefined8 *)puVar1);
          if (*(long *)(param_4 + 0x30) != 0) {
            FUN_06f806bc((fVar8 - param_1) + in_stack_00000008._4_4_,*(long *)(param_4 + 0x30),3,
                         *(undefined8 *)puVar1);
            if (*(long *)(param_4 + 0x30) != 0) {
              FUN_06f806bc((fVar9 - param_2) + fStack0000000000000010,*(long *)(param_4 + 0x30),4,
                           *(undefined8 *)puVar1);
              if (*(long *)(param_4 + 0x30) != 0) {
                FUN_06f806bc((fVar10 - param_3) + fStack0000000000000014,*(long *)(param_4 + 0x30),5
                             ,*(undefined8 *)puVar1);
                if ((*(long *)(param_4 + 0x30) != 0) &&
                   (lVar5 = FUN_06f803dc(*(long *)(param_4 + 0x30),*(undefined8 *)PTR_DAT_08fae108),
                   puVar3 = PTR_DAT_08fae120, puVar2 = PTR_DAT_08fae118, puVar1 = PTR_DAT_08fae100,
                   lVar5 != 0)) {
                  FUN_055eb3ac(&stack0x00000018,lVar5,*(undefined8 *)PTR_DAT_08fae130);
                  uVar7 = 0;
                  while( true ) {
                    uVar6 = FUN_04fbf81c(&stack0x00000018,*(undefined8 *)puVar3);
                    if ((uVar6 & 1) == 0) {
                      FUN_04fbf818(&stack0x00000018,*(undefined8 *)puVar2);
                      return uVar7;
                    }
                    if (*(long *)(param_4 + 0x30) == 0) break;
                    uVar4 = uStack0000000000000028;
                    fVar9 = (float)FUN_06f80634(*(long *)(param_4 + 0x30),
                                                _uStack0000000000000028 & 0xffffffff,
                                                *(undefined8 *)puVar1);
                    if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0403188c();
                    }
                    fVar10 = (float)FUN_06f80634(*(long *)(param_4 + 0x30),uVar7,
                                                 *(undefined8 *)puVar1);
                    if (fVar9 < fVar10) {
                      uVar7 = uVar4;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_0403188c();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


