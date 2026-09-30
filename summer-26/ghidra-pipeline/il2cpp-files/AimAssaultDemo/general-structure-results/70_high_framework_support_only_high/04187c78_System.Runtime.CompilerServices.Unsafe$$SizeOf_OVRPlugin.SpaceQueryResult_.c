/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$SizeOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04187c78
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__SizeOf<OVRPlugin_SpaceQueryResult>(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  
  plVar4 = (long *)thunk_FUN_0374b7cc(param_1,0);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
    puVar2 = PTR_DAT_07d86548;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
    }
    plVar4 = (long *)FUN_062519f8(uVar10,0);
    if (plVar4 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
      uVar6 = FUN_0616cbfc(uVar5,uVar10,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      if (unaff_x20 != 0) {
        uVar5 = thunk_FUN_0374b7cc();
        uVar5 = FUN_03f24968(uVar5,*(undefined8 *)PTR_DAT_07d97848);
        uVar6 = FUN_03f44658(uVar5,*(undefined8 *)PTR_DAT_07d97850);
        if ((uVar6 & 1) != 0) {
          plVar4 = (long *)thunk_FUN_0374b7cc();
          if (plVar4 == (long *)0x0) goto LAB_04187f6c;
          uVar5 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
          uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
          }
          plVar4 = (long *)FUN_062519f8(uVar10,0);
          if (plVar4 == (long *)0x0) goto LAB_04187f6c;
          uVar10 = (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
          uVar6 = FUN_0616cde0(uVar5,uVar10,0);
          if ((uVar6 & 1) != 0) {
            return;
          }
        }
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        **(long **)(lVar7 + 0xb8) = unaff_x20;
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03775678();
        }
        thunk_FUN_037aeb94(*(undefined8 *)(lVar7 + 0xb8));
        puVar2 = PTR_DAT_07d97830;
        lVar7 = *(long *)PTR_DAT_07d97830;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar7 = *(long *)puVar2;
        }
        puVar3 = PTR_DAT_07d86548;
        lVar7 = **(long **)(lVar7 + 0xb8);
        uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
        if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar5 = FUN_062519f8(uVar5,0);
        if (lVar7 != 0) {
          uVar6 = FUN_058a57f4(lVar7,uVar5,*(undefined8 *)PTR_DAT_07d97838);
          if ((uVar6 & 1) == 0) {
            lVar7 = *(long *)puVar2;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_03798b70();
              lVar7 = *(long *)puVar2;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
            uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar5 = FUN_062519f8(uVar5,0);
            if (lVar7 == 0) goto LAB_04187f6c;
            lVar8 = *(long *)(lVar7 + 0x10);
            lVar9 = *(long *)PTR_DAT_07d96f68;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_04187f6c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(lVar7,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar7 = *(long *)puVar2;
          }
          lVar7 = **(long **)(lVar7 + 0xb8);
          uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar5 = FUN_062519f8(uVar5,0);
          if (lVar7 != 0) {
            FUN_058a74c8(lVar7,uVar5);
            return;
          }
        }
      }
    }
  }
LAB_04187f6c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


