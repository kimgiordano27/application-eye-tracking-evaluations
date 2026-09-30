/*
FUNCTION_NAME: OVRPlugin.TextureRectMatrixf$$.cctor
ENTRY_POINT: 01da8f8c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01da9244) */
/* WARNING: Removing unreachable block (ram,0x01da9274) */

void OVRPlugin_TextureRectMatrixf___cctor(ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
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
  long in_stack_00000008;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  puVar5 = PTR_DAT_02359fc8;
  puVar4 = PTR_DAT_02359fb8;
  puVar3 = PTR_DAT_02359ee8;
  puVar2 = PTR_DAT_0234d288;
  uVar11 = 0;
  param_1 = param_1 & 0xffffffff;
  plVar1 = (long *)(unaff_x19 + 0x30);
  do {
    if (param_1 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar12 = *(long *)(unaff_x27 + uVar11 * 8 + 0x20);
    thunk_FUN_00ffe618();
    if (lVar12 != 0) {
      for (lVar12 = FUN_01a372b8(lVar12,*(undefined8 *)PTR_DAT_02359fe0); lVar12 != 0;
          lVar12 = FUN_01a371b0(lVar12,*(undefined8 *)PTR_DAT_02359fd8)) {
        iVar6 = FUN_01a37194(lVar12,*(undefined8 *)PTR_DAT_02359fd0);
        while (iVar6 = iVar6 + -1, -1 < iVar6) {
          lVar8 = FUN_01a3715c(lVar12,iVar6,*(undefined8 *)puVar5);
          thunk_FUN_00ffe618();
          *plVar1 = lVar8;
          thunk_FUN_0106e12c(plVar1,lVar8);
          lVar8 = *plVar1;
          thunk_FUN_00ffe618();
          if (lVar8 != 0) {
            in_stack_00000030 = lVar12;
            thunk_FUN_0106e12c(&stack0x00000030,lVar12);
            plVar13 = (long *)*plVar1;
            iStack0000000000000038 = iVar6;
            thunk_FUN_00ffe618();
            if ((plVar13 == (long *)0x0) || (*plVar13 != *(long *)puVar3)) {
              FUN_01da93cc();
            }
            else {
              plVar13 = (long *)plVar13[6];
              uVar9 = thunk_FUN_010400dc(*(undefined8 *)puVar2);
              FUN_01da5f8c();
              in_stack_00000028 = CONCAT44(uStack000000000000003c,iStack0000000000000038);
              in_stack_00000020 = in_stack_00000030;
              uVar10 = thunk_FUN_0103fd0c(*(undefined8 *)puVar4,&stack0x00000020);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fdc534();
              }
              (**(code **)(*plVar13 + 0x178))
                        (plVar13,uVar9,uVar10,*(undefined8 *)(*plVar13 + 0x180));
              uVar7 = FUN_01d8c0b0(0);
              thunk_FUN_00ffe618();
              *(undefined4 *)(unaff_x19 + 0x24) = uVar7;
            }
          }
        }
      }
    }
    param_1 = (ulong)*(uint *)(unaff_x27 + 0x18);
    uVar11 = uVar11 + 1;
  } while ((long)uVar11 < (long)(int)*(uint *)(unaff_x27 + 0x18));
  thunk_FUN_00ffe618();
  *(undefined4 *)(unaff_x19 + 0x20) = 3;
  thunk_FUN_00ffe618();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x30),0);
  FUN_00ffe618();
  if (in_stack_00000008 != 0) {
    thunk_FUN_010303a8(PTR_DAT_02353530);
    uVar9 = thunk_FUN_010400dc();
    FUN_01c6557c(uVar9,in_stack_00000008,0);
    uVar10 = thunk_FUN_010303a8(PTR_DAT_0235a000);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar9,uVar10);
  }
  return;
}


