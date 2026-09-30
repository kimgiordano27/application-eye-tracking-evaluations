/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 04936b3c
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

void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__Equals(long *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((DAT_07548f9e & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2e88);
    DAT_07548f9e = 1;
  }
  if (param_1 != (long *)0x0) {
    FUN_06b25024(param_1,0);
    if (param_1[0x99] != 0) {
      uVar1 = FUN_06b24c24(param_1,0);
      lVar7 = param_1[0x9c];
      lVar8 = param_1[0x9d];
      FUN_06b24c98(param_1,param_1,uVar1,0);
      lVar5 = param_1[0x9b];
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      plVar2 = (long *)FUN_03d45ef4(*(undefined8 *)
                                     (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xb8));
      if (plVar2 == (long *)0x0) goto LAB_04936d24;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,lVar7,lVar8,param_1[0x9c],param_1[0x9d],
                         *(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) == 0) {
        lVar9 = param_1[0x9c];
        lVar10 = param_1[0x9d];
        lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x50);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_031c09d4();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        plVar2 = (long *)FUN_04c4e2d4(lVar7,lVar8,lVar9,lVar10,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x48));
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        plVar2[7] = (long)param_1;
        (**(code **)(*param_1 + 0xae8))
                  (param_1,param_1[0x9c],param_1[0x9d],*(undefined8 *)(*param_1 + 0xaf0));
        (**(code **)(*param_1 + 0x188))(param_1,plVar2,*(undefined8 *)(*param_1 + 400));
        if (plVar2 != (long *)0x0) {
          lVar5 = *plVar2;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070c2e88) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04936cfc;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar2,*(long *)PTR_DAT_070c2e88,0);
LAB_04936cfc:
          (*(code *)*puVar4)(plVar2,puVar4[1]);
        }
      }
    }
    return;
  }
LAB_04936d24:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


