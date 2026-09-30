/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 01d6db88
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  int iVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar9;
  undefined *puVar6;
  
  bVar3 = *(byte *)(**(long **)(param_1 + 0xce0) + 0x130);
  if (*(byte *)(*param_2 + 0x130) < bVar3) {
    param_2 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) !=
           **(long **)(param_1 + 0xce0)) {
    param_2 = (long *)0x0;
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar7 = thunk_FUN_010400dc();
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02353b28);
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02358968);
    FUN_01c5e198(uVar7,uVar9,uVar5,0);
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_0234ebc8;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar9 = FUN_01d5e86c(uVar9);
    uVar4 = (**(code **)(*param_2 + 0x8b8))(param_2,uVar9,*(undefined8 *)(*param_2 + 0x8c0));
    if ((uVar4 & 1) == 0) {
      uVar4 = (**(code **)(*param_2 + 0x268))(param_2,*(undefined8 *)(*param_2 + 0x270));
      if ((uVar4 & 1) == 0) {
        iVar1 = *(int *)(unaff_x20 + 0x18);
        if (iVar1 < 1) {
          thunk_FUN_010303a8(PTR_DAT_0234bcd0);
          uVar7 = thunk_FUN_010400dc();
          puVar6 = PTR_DAT_02358ba0;
        }
        else {
          if (iVar1 == *(int *)(unaff_x19 + 0x18)) {
            iVar8 = 0;
            do {
              if (iVar1 == iVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00fdc53c();
              }
              uVar2 = *(uint *)(unaff_x20 + (long)iVar8 * 4 + 0x20);
              if ((int)uVar2 < 0) {
                thunk_FUN_010303a8(PTR_DAT_0234be28);
                uVar7 = thunk_FUN_010400dc();
                uVar9 = thunk_FUN_010303a8(PTR_DAT_02358958);
                puVar6 = PTR_DAT_02358b80;
LAB_01d6dd08:
                uVar5 = thunk_FUN_010303a8(puVar6);
                FUN_01c62494(uVar7,uVar9,uVar5,0);
                goto LAB_01d6dd20;
              }
              if (0x7fffffff <
                  (long)((long)*(int *)(unaff_x19 + (long)iVar8 * 4 + 0x20) + (ulong)uVar2)) {
                thunk_FUN_010303a8(PTR_DAT_0234be28);
                uVar7 = thunk_FUN_010400dc();
                uVar9 = thunk_FUN_010303a8(PTR_DAT_02358958);
                puVar6 = PTR_DAT_02358b88;
                goto LAB_01d6dd08;
              }
              iVar8 = iVar8 + 1;
            } while (iVar1 != iVar8);
            if (iVar1 < 0x100) {
              FUN_0105c8ac(param_2);
              return;
            }
            thunk_FUN_010303a8(PTR_DAT_02353050);
            uVar7 = thunk_FUN_010400dc();
            FUN_01d842e0(uVar7,0);
            goto LAB_01d6dd20;
          }
          thunk_FUN_010303a8(PTR_DAT_0234bcd0);
          uVar7 = thunk_FUN_010400dc();
          puVar6 = PTR_DAT_02358ba8;
        }
        uVar9 = thunk_FUN_010303a8(puVar6);
        FUN_01c65ad0(uVar7,uVar9,0);
        goto LAB_01d6dd20;
      }
      thunk_FUN_010303a8(PTR_DAT_0234ba68);
      uVar7 = thunk_FUN_010400dc();
      puVar6 = PTR_DAT_02358978;
    }
    else {
      thunk_FUN_010303a8(PTR_DAT_0234ba68);
      uVar7 = thunk_FUN_010400dc();
      puVar6 = PTR_DAT_02358970;
    }
    uVar9 = thunk_FUN_010303a8(puVar6);
    FUN_01d45cb4(uVar7,uVar9,0);
  }
LAB_01d6dd20:
  uVar9 = thunk_FUN_010303a8(PTR_DAT_02358b90);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar7,uVar9);
}


