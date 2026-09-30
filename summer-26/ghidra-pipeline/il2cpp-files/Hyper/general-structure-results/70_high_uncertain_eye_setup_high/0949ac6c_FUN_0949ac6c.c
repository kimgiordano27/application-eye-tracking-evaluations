/*
FUNCTION_NAME: FUN_0949ac6c
ENTRY_POINT: 0949ac6c
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0949b194) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0949ac6c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  int *piVar11;
  int iVar12;
  undefined1 auVar13 [16];
  long local_78;
  int *local_70;
  int **local_68;
  undefined8 uStack_60;
  int local_58;
  undefined1 local_50 [16];
  int local_34;
  int *local_28;
  
  local_28 = param_1;
  if ((DAT_0b335c72 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac91008);
    FUN_04947ee4(PTR_DAT_0ac13080);
    FUN_04947ee4(PTR_DAT_0ac13050);
    FUN_04947ee4(PTR_DAT_0ac127f8);
    FUN_04947ee4(PTR_DAT_0ac12800);
    FUN_04947ee4(PTR_DAT_0ac12808);
    FUN_04947ee4(PTR_DAT_0ac09b90);
    FUN_04947ee4(PTR_DAT_0ac107c8);
    FUN_04947ee4(PTR_DAT_0ac90ff0);
    FUN_04947ee4(PTR_DAT_0ac90ff8);
    FUN_04947ee4(PTR_DAT_0ac91000);
    FUN_04947ee4(PTR_DAT_0ac12810);
    DAT_0b335c72 = 1;
  }
  puVar3 = PTR_DAT_0ac12810;
  puVar2 = PTR_DAT_0ac12808;
  puVar1 = PTR_DAT_0ac12800;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_34 = *param_1;
  local_58 = 0;
  if (local_34 != 0) {
    local_78 = 0;
    Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
              (&local_78,0x80,*(undefined8 *)PTR_DAT_0ac90ff8);
    *(long *)(local_28 + 0xc) = local_78;
    thunk_FUN_049ee3d8(local_28 + 0xc,0);
    local_70 = &local_34;
    local_78 = 0;
    local_68 = &local_28;
    if (local_34 != 0) {
      uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac107c8);
      FUN_08d21a94(uVar5,0x80,0);
      *(undefined8 *)(local_28 + 0xe) = uVar5;
      thunk_FUN_049ee3d8(local_28 + 0xe,uVar5);
      if (local_34 != 0) {
        local_28[0x10] = 0;
        *(undefined1 *)(local_28 + 0x11) = 0;
        goto LAB_0949aed4;
      }
      goto LAB_0949ae10;
    }
  }
  local_78 = 0;
  local_68 = &local_28;
  local_70 = &local_34;
LAB_0949ae10:
  local_34 = -1;
  local_50 = *(undefined1 (*) [16])(local_28 + 0x12);
  local_28[0x12] = 0;
  local_28[0x13] = 0;
  local_28[0x14] = 0;
  local_28[0x15] = 0;
  *local_28 = -1;
  do {
    uVar4 = FUN_08471888(local_50,*(undefined8 *)puVar1);
    if ((int)uVar4 < 1) {
LAB_0949af8c:
      plVar6 = *(long **)(local_28 + 8);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar7 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
      (**(code **)(*plVar6 + 0x218))(plVar6,lVar7 - local_28[0x10],*(undefined8 *)(*plVar6 + 0x220))
      ;
      plVar6 = *(long **)(local_28 + 0xe);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar5 = (**(code **)(*plVar6 + 0x418))(plVar6,*(undefined8 *)(*plVar6 + 0x420));
      iVar12 = 0xe;
      goto LAB_0949aff0;
    }
    lVar7 = *(long *)(local_28 + 0xc);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = 0;
    do {
      if ((uint)*(undefined8 *)(lVar7 + 0x18) == (uint)uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      if (*(char *)(lVar7 + 0x20 + uVar8) == '\n') {
        *(undefined1 *)(local_28 + 0x11) = 1;
        local_28[0x10] = ~(uint)uVar8 + uVar4;
        goto LAB_0949aeac;
      }
      uVar8 = uVar8 + 1;
    } while (uVar4 != (uint)uVar8);
    uVar8 = (ulong)uVar4;
LAB_0949aeac:
    plVar6 = *(long **)(local_28 + 0xe);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    (**(code **)(*plVar6 + 0x398))(plVar6,lVar7,0,uVar8,*(undefined8 *)(*plVar6 + 0x3a0));
    if ((char)local_28[0x11] != '\0') goto LAB_0949af8c;
LAB_0949aed4:
    plVar6 = *(long **)(local_28 + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = (**(code **)(*plVar6 + 0x2e8))
                      (plVar6,*(undefined8 *)(local_28 + 0xc),0,0x80,*(undefined8 *)(local_28 + 10),
                       *(undefined8 *)(*plVar6 + 0x2f0));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    auVar13 = FUN_0775e154(lVar7,0,*(undefined8 *)puVar3);
    local_50 = auVar13;
    uVar8 = FUN_08471840(local_50,*(undefined8 *)puVar2);
  } while ((uVar8 & 1) != 0);
  local_34 = 0;
  *local_28 = 0;
  *(undefined1 (*) [16])(local_28 + 0x12) = local_50;
  thunk_FUN_049ee3d8(local_28 + 0x12,0);
  piVar11 = local_28;
  if (*(int *)(*(long *)PTR_DAT_0ac13050 + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)PTR_DAT_0ac13050,extraout_x1,local_28);
  }
  FUN_0534a44c(piVar11 + 2,local_50,local_28,*(undefined8 *)PTR_DAT_0ac91008);
  uVar5 = 0;
  iVar12 = 8;
LAB_0949aff0:
  if ((local_34 < 0) && (plVar6 = *(long **)(local_28 + 0xe), plVar6 != (long *)0x0)) {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0949b060;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac09b90,0);
LAB_0949b060:
    (*(code *)*puVar9)(plVar6,puVar9[1]);
  }
  if (*local_70 < 0) {
    FUN_0717d768(*local_68 + 0xc,*(undefined8 *)PTR_DAT_0ac90ff0);
  }
  if (local_78 == 0) {
    if (iVar12 == 0xe) {
      *local_28 = -2;
      local_28[0xc] = 0;
      local_28[0xd] = 0;
      piVar11 = local_28 + 0xe;
      piVar11[0] = 0;
      piVar11[1] = 0;
      thunk_FUN_049ee3d8(piVar11,0);
      piVar11 = local_28;
      if (*(int *)(*(long *)PTR_DAT_0ac13050 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b6c5d8(piVar11 + 2,uVar5,*(undefined8 *)PTR_DAT_0ac13080);
    }
    else if (iVar12 == 0) {
      uVar5 = (&uStack_60)[local_58 + -1];
      *local_28 = -2;
      local_28[0xc] = 0;
      local_28[0xd] = 0;
      piVar11 = local_28 + 0xe;
      piVar11[0] = 0;
      piVar11[1] = 0;
      thunk_FUN_049ee3d8(piVar11,0);
      piVar11 = local_28;
      lVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac13050);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      uVar10 = thunk_FUN_049ae08c(PTR_DAT_0ac130d8);
      FUN_07b6c824(piVar11 + 2,uVar5,uVar10);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


