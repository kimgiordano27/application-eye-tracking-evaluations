/*
FUNCTION_NAME: OVRPlugin$$GetLayerRecommendedResolution
ENTRY_POINT: 02c33498
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c33764) */
/* WARNING: Removing unreachable block (ram,0x02c33794) */

void OVRPlugin__GetLayerRecommendedResolution(ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x19;
  long lVar12;
  long *plVar13;
  long unaff_x27;
  long lStack0000000000000008;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  puVar5 = PTR_DAT_0380bf48;
  puVar4 = PTR_DAT_0380bf38;
  puVar3 = PTR_DAT_0380be50;
  puVar2 = PTR_DAT_037fb428;
  if (in_NG == in_OV) {
    lStack0000000000000008 = 0;
    uVar11 = 0;
    param_1 = param_1 & 0xffffffff;
    plVar1 = (long *)(unaff_x19 + 0x30);
    do {
      if (param_1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      lVar12 = *(long *)(unaff_x27 + uVar11 * 8 + 0x20);
      thunk_FUN_0181f594();
      if (lVar12 != 0) {
        for (lVar12 = FUN_01dbe238(lVar12,*(undefined8 *)PTR_DAT_0380bf60); lVar12 != 0;
            lVar12 = FUN_01dbe130(lVar12,*(undefined8 *)PTR_DAT_0380bf58)) {
          iVar6 = FUN_01dbe114(lVar12,*(undefined8 *)PTR_DAT_0380bf50);
          while (iVar6 = iVar6 + -1, -1 < iVar6) {
            lVar8 = FUN_01dbe0dc(lVar12,iVar6,*(undefined8 *)puVar5);
            thunk_FUN_0181f594();
            *plVar1 = lVar8;
            thunk_FUN_0188fd20(plVar1,lVar8);
            lVar8 = *plVar1;
            thunk_FUN_0181f594();
            if (lVar8 != 0) {
              in_stack_00000030 = lVar12;
              thunk_FUN_0188fd20(&stack0x00000030,lVar12);
              plVar13 = (long *)*plVar1;
              iStack0000000000000038 = iVar6;
              thunk_FUN_0181f594();
              if ((plVar13 == (long *)0x0) || (*plVar13 != *(long *)puVar3)) {
                FUN_02c338ec();
              }
              else {
                plVar13 = (long *)plVar13[6];
                uVar9 = thunk_FUN_01861bbc(*(undefined8 *)puVar2);
                FUN_02c30000();
                in_stack_00000028 = CONCAT44(uStack000000000000003c,iStack0000000000000038);
                in_stack_00000020 = in_stack_00000030;
                uVar10 = thunk_FUN_018617ec(*(undefined8 *)puVar4,&stack0x00000020);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
                (**(code **)(*plVar13 + 0x178))
                          (plVar13,uVar9,uVar10,*(undefined8 *)(*plVar13 + 0x180));
                uVar7 = FUN_02c145a0(0);
                thunk_FUN_0181f594();
                *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
              }
            }
          }
        }
      }
      param_1 = (ulong)*(uint *)(unaff_x27 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(unaff_x27 + 0x18));
  }
  else {
    lStack0000000000000008 = 0;
  }
  thunk_FUN_0181f594();
  *(undefined4 *)(unaff_x19 + 0x20) = 3;
  thunk_FUN_0181f594();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  thunk_FUN_0188fd20((undefined8 *)(unaff_x19 + 0x30),0);
  FUN_02c3ea9c(0);
  if (lStack0000000000000008 != 0) {
    thunk_FUN_01851c08(PTR_DAT_03804068);
    uVar9 = thunk_FUN_01861bbc();
    FUN_02b432f4(uVar9,lStack0000000000000008,0);
    uVar10 = thunk_FUN_01851c08(PTR_DAT_0380bf80);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar9,uVar10);
  }
  return;
}


