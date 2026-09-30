/*
FUNCTION_NAME: FUN_0569e40c
ENTRY_POINT: 0569e40c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569e620) */

undefined1  [16] FUN_0569e40c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long **pplStack_58;
  long local_50;
  long **local_48;
  long *local_40;
  long *local_38;
  
  puVar3 = PTR_DAT_06a19928;
  if ((DAT_06dbc892 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a19970);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a19928);
    DAT_06dbc892 = 1;
  }
  puVar2 = PTR_DAT_069fbff0;
  local_40 = (long *)0x0;
  local_38 = (long *)0x0;
  local_38 = (long *)FUN_0539dd78(0);
  lVar4 = *(long *)puVar3;
  local_48 = &local_38;
  local_50 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar3;
  }
  plVar10 = local_38;
  uVar11 = **(undefined8 **)(lVar4 + 0xb8);
  plVar5 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a19970);
  FUN_05394ea8(plVar5,uVar11,plVar10,1,0);
  pplStack_58 = &local_40;
  local_60 = 0;
  local_40 = plVar5;
  FUN_0569e6d8(param_1,plVar5);
  if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05395314(local_40,0);
  if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar11 = (**(code **)(*local_38 + 0x1e8))(local_38,*(undefined8 *)(*local_38 + 0x1f0));
  local_70 = 0;
  uStack_68 = 0;
  FUN_059c8114(&local_70,uVar11,0);
  plVar10 = local_40;
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = local_70;
  if (local_40 != (long *)0x0) {
    lVar7 = *local_40;
    lVar4 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0569e57c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(local_40,lVar4,0);
LAB_0569e57c:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  plVar10 = *local_48;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    lVar4 = *(long *)puVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar10,lVar4,0);
OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  if (local_50 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return auVar1;
}


