/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$GetHashCode
ENTRY_POINT: 04936b84
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04936d2c) */

void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__GetHashCode(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  FUN_06b25024();
  if (unaff_x19[0x99] != 0) {
    FUN_06b24c24();
    lVar6 = unaff_x19[0x9c];
    lVar7 = unaff_x19[0x9d];
    FUN_06b24c98();
    lVar4 = unaff_x19[0x9b];
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
    plVar1 = (long *)FUN_03d45ef4(*(undefined8 *)
                                   (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xb8));
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar2 = (**(code **)(*plVar1 + 0x1b8))
                      (plVar1,lVar6,lVar7,unaff_x19[0x9c],unaff_x19[0x9d],
                       *(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      lVar8 = unaff_x19[0x9c];
      lVar9 = unaff_x19[0x9d];
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      plVar1 = (long *)FUN_04c4e2d4(lVar6,lVar7,lVar8,lVar9,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      plVar1[7] = (long)unaff_x19;
      (**(code **)(*unaff_x19 + 0xae8))();
      (**(code **)(*unaff_x19 + 0x188))();
      if (plVar1 != (long *)0x0) {
        lVar4 = *plVar1;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_070c2e88) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_04936cfc;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08(plVar1,*(long *)PTR_DAT_070c2e88,0);
LAB_04936cfc:
        (*(code *)*puVar3)(plVar1,puVar3[1]);
      }
    }
  }
  return;
}


