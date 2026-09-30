/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 08a8cc50
PROGRAM: Hyper-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
               (ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  long *plVar13;
  undefined8 *unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09cd0);
    FUN_04947ee4(PTR_DAT_0ac09cf0);
    FUN_04947ee4(PTR_DAT_0ac09d30);
    FUN_04947ee4(PTR_DAT_0ac54ce0);
    FUN_04947ee4(PTR_DAT_0ac4e660);
    FUN_04947ee4(PTR_DAT_0ac4c7b0);
    FUN_04947ee4(PTR_DAT_0ac54ce8);
    FUN_04947ee4(PTR_DAT_0ac54cf0);
    FUN_04947ee4(PTR_DAT_0ac54cf8);
    FUN_04947ee4(PTR_DAT_0ac54d00);
    FUN_04947ee4(PTR_DAT_0ac54d08);
    FUN_04947ee4(PTR_DAT_0ac54d10);
    FUN_04947ee4(PTR_DAT_0ac54d18);
    FUN_04947ee4(PTR_DAT_0ac54d20);
    FUN_04947ee4(PTR_DAT_0ac54d28);
    FUN_04947ee4(PTR_DAT_0ac4c9f0);
    FUN_04947ee4(PTR_DAT_0ac4c7d8);
    FUN_04947ee4(PTR_DAT_0ac54cd8);
    FUN_04947ee4(PTR_DAT_0ac0fdc0);
    FUN_04947ee4(PTR_DAT_0ac44360);
    FUN_04947ee4(PTR_DAT_0ac127d8);
    *(undefined1 *)(unaff_x25 + 0x6a4) = 1;
  }
  puVar4 = PTR_DAT_0ac54cf8;
  puVar2 = PTR_DAT_0ac09d30;
  uVar6 = thunk_FUN_04983f60(*unaff_x23);
  FUN_08a5a718(uVar6,0);
  *(undefined8 *)(param_2 + 0xb8) = uVar6;
  thunk_FUN_049ee3d8((undefined8 *)(param_2 + 0xb8),uVar6);
  uVar6 = thunk_FUN_04983f60(*unaff_x24);
  FUN_08a56a48(uVar6,0);
  *(undefined8 *)(param_2 + 0xc0) = uVar6;
  thunk_FUN_049ee3d8((undefined8 *)(param_2 + 0xc0),uVar6);
  lVar7 = thunk_FUN_04983f60(*unaff_x24);
  FUN_08a56a48(lVar7,0);
  plVar13 = (long *)(param_2 + 200);
  *plVar13 = lVar7;
  thunk_FUN_049ee3d8(plVar13,lVar7);
  uVar6 = thunk_FUN_04983f60(*unaff_x29);
  FUN_08a59dd0(uVar6,0);
  *(undefined8 *)(param_2 + 0xd0) = uVar6;
  thunk_FUN_049ee3d8((undefined8 *)(param_2 + 0xd0),uVar6);
  uVar6 = *unaff_x28;
  *(undefined8 *)(param_2 + 0xd8) = DAT_01da67a8;
  *(undefined8 *)(param_2 + 0xe0) = 0x440800000;
  uVar6 = thunk_FUN_04983f60(uVar6);
  FUN_08dbf2f0(uVar6,0);
  *(undefined8 *)(param_2 + 0x108) = uVar6;
  thunk_FUN_049ee3d8(param_2 + 0x108,uVar6);
  uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac127d8);
  FUN_09aa65dc(uVar6,0);
  *(undefined8 *)(param_2 + 0x120) = uVar6;
  thunk_FUN_049ee3d8(param_2 + 0x120,uVar6);
  FUN_0899612c(param_2,param_3);
  lVar7 = *unaff_x27;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar7 = *unaff_x27;
  }
  uVar6 = *(undefined8 *)puVar2;
  plVar12 = *(long **)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 4);
  uVar6 = thunk_FUN_04983f60(uVar6);
  FUN_08cc3ad0(uVar6,param_2,*(undefined8 *)puVar4,0);
  puVar4 = PTR_DAT_0ac4c9f0;
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x15) * 0x10 + 0x138);
          goto LAB_08a8cf20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_04980e68(plVar12,*(long *)PTR_DAT_0ac4c9f0,0x15);
LAB_08a8cf20:
    (*(code *)*puVar8)(plVar12,uVar6,puVar8[1]);
    puVar1 = PTR_DAT_0ac54d00;
    lVar7 = *plVar13;
    if (lVar7 != 0) {
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
      FUN_08cc3ad0(uVar6,param_2,*(undefined8 *)puVar1,0);
      FUN_08a56650(lVar7,uVar6,0);
    }
    puVar3 = PTR_DAT_0ac54d20;
    puVar1 = PTR_DAT_0ac4c7b0;
    if (*(long *)(param_2 + 0x28) != 0) {
      plVar13 = *(long **)(*(long *)(param_2 + 0x28) + 0x50);
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4c7b0);
      FUN_0633c1f0(uVar6,param_2,*(undefined8 *)puVar3,0);
      puVar3 = PTR_DAT_0ac4c7d8;
      if (plVar13 != (long *)0x0) {
        lVar7 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac4c7d8) {
              puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
              goto LAB_08a8d000;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac4c7d8,6);
LAB_08a8d000:
        (*(code *)*puVar8)(plVar13,uVar6,puVar8[1]);
        puVar5 = PTR_DAT_0ac54d18;
        if (*(long *)(param_2 + 0x28) != 0) {
          plVar13 = *(long **)(*(long *)(param_2 + 0x28) + 0x58);
          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_0633c1f0(uVar6,param_2,*(undefined8 *)puVar5,0);
          if (plVar13 != (long *)0x0) {
            lVar9 = *plVar13;
            lVar7 = *(long *)puVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                  goto LAB_08a8d094;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar8 = (undefined8 *)FUN_04980e68(plVar13,lVar7,6);
LAB_08a8d094:
            (*(code *)*puVar8)(plVar13,uVar6,puVar8[1]);
            puVar5 = PTR_DAT_0ac54d28;
            if (*(long *)(param_2 + 0x28) != 0) {
              plVar13 = *(long **)(*(long *)(param_2 + 0x28) + 0x60);
              uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
              FUN_0633c1f0(uVar6,param_2,*(undefined8 *)puVar5,0);
              puVar5 = PTR_DAT_0ac54d08;
              puVar1 = PTR_DAT_0ac09cf0;
              if (plVar13 != (long *)0x0) {
                lVar9 = *plVar13;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                lVar7 = *(long *)puVar3;
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == lVar7) {
                      puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                      goto LAB_08a8d138;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar8 = (undefined8 *)FUN_04980e68(plVar13,lVar7,6);
LAB_08a8d138:
                (*(code *)*puVar8)(plVar13,uVar6,puVar8[1]);
                lVar7 = *(long *)(param_2 + 0x28);
                uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                FUN_05f901fc(uVar6,param_2,*(undefined8 *)puVar5,0);
                puVar5 = PTR_DAT_0ac54d10;
                puVar3 = PTR_DAT_0ac54cf0;
                puVar1 = PTR_DAT_0ac09cd0;
                if (lVar7 != 0) {
                  FUN_08a28d04(lVar7,uVar6,0);
                  FUN_08a8d2d0();
                  uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                  FUN_08cc3ad0(uVar6,param_2,*(undefined8 *)puVar5,0);
                  FUN_089956cc(param_2,uVar6,0);
                  uVar6 = FUN_08dea498(0);
                  *(undefined8 *)(param_2 + 0x140) = uVar6;
                  thunk_FUN_049ee3d8(param_2 + 0x140,uVar6);
                  if (*(long *)(param_2 + 0x140) == 0) {
                    uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac44360);
                    Nakama_Console_UserGroupListUserGroup__set_State(uVar6,0);
                    *(undefined8 *)(param_2 + 0x140) = uVar6;
                    thunk_FUN_049ee3d8(param_2 + 0x140,uVar6);
                    FUN_08dea364(*(undefined8 *)(param_2 + 0x140),0);
                  }
                  plVar13 = *(long **)(param_2 + 0x10);
                  uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                  FUN_05f878c4(uVar6,param_2,*(undefined8 *)puVar3,0);
                  if (plVar13 != (long *)0x0) {
                    lVar7 = *plVar13;
                    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
                          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x17) * 0x10 + 0x138);
                          goto LAB_08a8d290;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar8 = (undefined8 *)FUN_04980e68(plVar13,*(long *)puVar4,0x17);
LAB_08a8d290:
                    (*(code *)*puVar8)(plVar13,uVar6,puVar8[1]);
                    plVar13 = *(long **)(param_2 + 0x60);
                    if (plVar13 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08a8d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


