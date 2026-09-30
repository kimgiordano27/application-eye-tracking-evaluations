/*
FUNCTION_NAME: OVRPlugin.GetBoneSkeleton2Delegate$$BeginInvoke
ENTRY_POINT: 0515f7cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0515fa60) */

long OVRPlugin_GetBoneSkeleton2Delegate__BeginInvoke(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  FUN_03aabcd0(param_2,unaff_w21,*param_1);
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  thunk_FUN_02dd37b4();
  plVar7 = *(long **)(unaff_x20 + 0x10);
  if ((plVar7 == (long *)0x0) ||
     (plVar7 = (long *)(**(code **)(*plVar7 + 0x228))(plVar7,*(undefined8 *)(*plVar7 + 0x230)),
     plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
  puVar6 = PTR_DAT_067823b8;
  puVar5 = PTR_DAT_067823b0;
  puVar4 = PTR_DAT_0675f3d8;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar12 = *plVar7;
    lVar11 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_0515f880;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar11,0);
LAB_0515f880:
    uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar3 = PTR_DAT_0675f3d0;
    if ((uVar13 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_02d9d438(plVar7,*(undefined8 *)PTR_DAT_0675f3d0);
      if (plVar7 == (long *)0x0) goto LAB_0515fa30;
      lVar11 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_0515fa08;
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar7;
    lVar11 = *(long *)puVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_0515f8e0;
        }
        uVar13 = uVar13 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar11,1);
LAB_0515f8e0:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
    }
    lVar11 = *unaff_x19;
    uVar10 = FUN_0515f4e8();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar14 = *(long *)puVar6;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494(lVar11,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
      ;
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0515fa24;
    }
  }
LAB_0515fa08:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_0515fa24:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0515fa30:
  return *unaff_x19;
}


