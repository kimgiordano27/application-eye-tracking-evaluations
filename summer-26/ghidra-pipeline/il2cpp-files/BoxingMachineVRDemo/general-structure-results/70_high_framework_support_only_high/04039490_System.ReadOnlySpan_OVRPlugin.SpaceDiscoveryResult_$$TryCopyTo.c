/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$TryCopyTo
ENTRY_POINT: 04039490
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long *plVar9;
  int iVar10;
  
  plVar2 = (long *)FUN_05015c2c(param_1,0);
  if (unaff_x23 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x23 + 0x298))();
    if ((uVar3 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_040396c8;
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2);
      if ((uVar3 & 1) == 0) {
        FUN_05027ef4(0);
      }
    }
    plVar2 = (long *)thunk_FUN_02d9d438();
    if (plVar2 == (long *)0x0) {
      FUN_05027ef4();
    }
    plVar9 = *(long **)(unaff_x21 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02d9a2e0(lVar6);
      }
      lVar7 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_040395a8;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar6,0);
LAB_040395a8:
      iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (0 < iVar1) {
        iVar10 = 0;
        do {
          plVar9 = *(long **)(unaff_x21 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02d9a2e0(lVar6);
          }
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_04039634;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar9,lVar6,0);
LAB_04039634:
          lVar6 = (*(code *)*puVar4)(plVar9,iVar10,puVar4[1]);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_02d9d438(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
            FUN_02d609b4(uVar5,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar6;
          thunk_FUN_02dd37b4(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
          iVar10 = iVar10 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar10 != iVar1);
      }
      return;
    }
  }
LAB_040396c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


