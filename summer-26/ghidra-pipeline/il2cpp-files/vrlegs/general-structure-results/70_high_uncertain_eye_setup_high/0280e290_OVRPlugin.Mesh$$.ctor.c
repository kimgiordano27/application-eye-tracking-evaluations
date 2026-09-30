/*
FUNCTION_NAME: OVRPlugin.Mesh$$.ctor
ENTRY_POINT: 0280e290
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


ulong OVRPlugin_Mesh___ctor(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 in_w8;
  int in_w9;
  long lVar7;
  long unaff_x19;
  uint uVar8;
  long unaff_x21;
  long *unaff_x22;
  ushort uStack000000000000000c;
  undefined1 uStack000000000000001c;
  
  *(undefined4 *)(unaff_x19 + 0x90) = in_w8;
  *(int *)(unaff_x19 + 0x94) = in_w9 + 1;
  do {
    while( true ) {
      lVar7 = *(long *)(unaff_x19 + 0x80);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar2 = *(uint *)(unaff_x19 + 0x8c);
      if (*(uint *)(lVar7 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      uVar1 = *(ushort *)(lVar7 + (long)(int)uVar2 * 2 + 0x20);
      uVar8 = (uint)uVar1;
      if (0x39 < uVar1) break;
      if (uVar8 - 9 < 0x31) {
                    /* WARNING: Could not recover jumptable at 0x0280e200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)((ulong)*(byte *)(unaff_x21 + (ulong)(uVar8 - 9)) * 4 + 0x280e204))();
        return uVar4;
      }
      if (uVar8 != 0) goto switchD_0280e200_caseD_b;
      uVar4 = FUN_0280d810();
      if ((uVar4 & 1) != 0) {
        if ((DAT_041252ed & 1) == 0) {
          FUN_01ab69ac(PTR_DAT_03cbebc0);
          DAT_041252ed = 1;
        }
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        *(undefined4 *)(unaff_x19 + 0x10) = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(unaff_x19 + 0x18),0);
LAB_0280e47c:
        uStack000000000000000c = 0;
LAB_0280e508:
        return (ulong)uStack000000000000000c;
      }
    }
    if (0x66 < uVar1) {
      if (uVar1 != 0x6e) {
        if (uVar1 == 0x74) goto OVRPlugin_InsightPassthroughStyle2__CopyTo;
        goto switchD_0280e200_caseD_b;
      }
      FUN_0280d860();
      goto LAB_0280e47c;
    }
    if (uVar1 == 0x5d) {
      *(uint *)(unaff_x19 + 0x8c) = uVar2 + 1;
      if ((*(int *)(unaff_x19 + 0x24) - 5U < 2) || (*(int *)(unaff_x19 + 0x24) == 8)) {
        FUN_02804374();
        goto LAB_0280e47c;
      }
      goto LAB_0280e598;
    }
    if (uVar1 == 0x66) {
OVRPlugin_InsightPassthroughStyle2__CopyTo:
      if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar4 = FUN_0280df64();
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_03cfe1b0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_02818a5c(0x66 < uVar1,0);
        FUN_02804374();
        uStack000000000000000c = 0;
        uStack000000000000001c = 0x66 < uVar1;
        FUN_02241190(&stack0x0000000c,&stack0x0000001c,*(undefined8 *)PTR_DAT_03cbffe8);
        goto LAB_0280e508;
      }
      uVar5 = *(undefined8 *)(unaff_x19 + 0x80);
      iVar3 = *(int *)(unaff_x19 + 0x8c);
      FUN_018748a8(uVar5);
      FUN_019a7458(uVar5,(long)iVar3);
      goto LAB_0280e598;
    }
switchD_0280e200_caseD_b:
    *(uint *)(unaff_x19 + 0x8c) = uVar2 + 1;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_026b63d8(uVar8,0);
    if ((uVar4 & 1) == 0) {
LAB_0280e598:
      uVar5 = FUN_0280d99c();
      uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfe1b8);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar5,uVar6);
    }
  } while( true );
}


