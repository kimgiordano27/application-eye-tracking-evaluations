/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$OnColocationSessionFound
ENTRY_POINT: 05f5bde8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__OnColocationSessionFound(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
                    /* try { // try from 05f5bdf0 to 0605be07 has its CatchHandler @ 05f5bed8 */
  if ((DAT_0825a012 & 1) == 0) {
                    /* try { // try from 05f5be08 to 0605be27 has its CatchHandler @ 05f5bd44 */
    FUN_0373b518(PTR_DAT_07d982f8);
    FUN_0373b518(PTR_DAT_07d98300);
    FUN_0373b518(PTR_DAT_07d98308);
                    /* try { // try from 05f5be28 to 0605be3f has its CatchHandler @ 05f5bed8 */
    FUN_0373b518(PTR_DAT_07d98310);
    FUN_0373b518(PTR_DAT_07d98318);
                    /* try { // try from 05f5be40 to 0605be53 has its CatchHandler @ 05f5bd44 */
    FUN_0373b518(PTR_DAT_07d98320);
                    /* try { // try from 05f5be54 to 0605be6b has its CatchHandler @ 05f5bed8 */
    FUN_0373b518(PTR_DAT_07d98328);
    FUN_0373b518(PTR_DAT_07d98330);
                    /* try { // try from 05f5be6c to 0605bec7 has its CatchHandler @ 05f5bd44 */
    FUN_0373b518(PTR_DAT_07d95eb0);
    FUN_0373b518(PTR_DAT_07d98338);
    FUN_0373b518(PTR_DAT_07d98340);
    FUN_0373b518(PTR_DAT_07d92630);
    DAT_0825a012 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  puVar2 = PTR_DAT_07d86548;
  uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
  }
  puVar3 = PTR_DAT_07d95eb0;
  plVar6 = (long *)FUN_062519f8(uVar11,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05f5c3c4;
  }
  uVar11 = FUN_062519f8(*(long *)(puVar2 + 0x18) + 0x20,0);
  uVar7 = FUN_0625ad04(plVar6,uVar11,0);
  if ((uVar7 & 1) == 0) {
    lVar5 = *(long *)(puVar2 + 0x90);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar11 = FUN_062519f8(lVar5 + 0x20,0);
    uVar7 = FUN_0625ad04(plVar6,uVar11,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
      FUN_061efe40(plVar6,0);
      goto LAB_05f5bfb0;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
    }
    plVar10 = (long *)FUN_062519f8(uVar11,0);
    if (plVar10 == (long *)0x0) {
LAB_05f5c3cc:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)FUN_078d9d1c(&PTR_DAT_07d98000,*(undefined8 *)(puVar2 + 0xe0));
      return plVar6;
    }
    if (plVar6 == (long *)0x0) goto LAB_05f5c3cc;
    uVar7 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
    if ((uVar7 & 1) == 0) {
LAB_05f5c2b0:
      uVar7 = (**(code **)(*plVar6 + 0x5b8))(plVar6,*(undefined8 *)(*plVar6 + 0x5c0));
      if ((uVar7 & 1) != 0) {
        if (*(int *)(*(long *)(puVar2 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar11 = FUN_06276e18(plVar6,0);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
        }
        uVar4 = FUN_0625d834(uVar11,0);
        switch(uVar4) {
        case 5:
          plVar6 = (long *)FUN_05f5c028(PTR_DAT_07d98338,*(undefined8 *)(puVar2 + 0xe0));
          return plVar6;
        case 6:
        case 8:
        case 9:
        case 10:
          plVar6 = (long *)FUN_05f5c028(PTR_DAT_07d98300,*(undefined8 *)(puVar2 + 0xe0));
          return plVar6;
        case 7:
          plVar6 = (long *)FUN_05f5c028(PTR_DAT_07d98340,*(undefined8 *)(puVar2 + 0xe0));
          return plVar6;
        case 0xb:
        case 0xc:
          plVar6 = (long *)FUN_05f5c028(PTR_DAT_07d98320,*(undefined8 *)(puVar2 + 0xe0));
          return plVar6;
        }
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      plVar6 = (long *)thunk_FUN_037788cc();
      lVar5 = *(long *)(param_1 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678(lVar5);
      }
      FUN_04f177dc(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar6;
    }
    uVar11 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
    uVar12 = *(undefined8 *)PTR_DAT_07d98330;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(puVar2 + 0xe0));
    }
    uVar12 = FUN_062519f8(uVar12,0);
    uVar7 = FUN_0625ad04(uVar11,uVar12,0);
    if ((uVar7 & 1) == 0) goto LAB_05f5c2b0;
    lVar5 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
    if (lVar5 == 0) goto LAB_05f5c3cc;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f5c3d0:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar10 = *(long **)(lVar5 + 0x20);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar10);
      }
    }
    uVar11 = *(undefined8 *)PTR_DAT_07d98310;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar8 = (long *)FUN_062519f8(uVar11,0);
    plVar9 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar9 == (long *)0x0) goto LAB_05f5c3cc;
    if ((plVar10 != (long *)0x0) &&
       (lVar5 = thunk_FUN_037787d0(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
      uVar11 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar11,0);
    }
    if ((int)plVar9[3] == 0) goto LAB_05f5c3d0;
    plVar9[4] = (long)plVar10;
    thunk_FUN_037aeb94(plVar9 + 4,plVar10);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x978))
                                   (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x980)),
       plVar8 == (long *)0x0)) goto LAB_05f5c3cc;
    uVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((uVar7 & 1) == 0) goto LAB_05f5c2b0;
    uVar11 = *(undefined8 *)PTR_DAT_07d98328;
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar11 = FUN_062519f8(uVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar3);
    }
    plVar6 = (long *)FUN_06284508(uVar11,plVar10,0);
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d982f8);
    FUN_061efd40(plVar6,0);
LAB_05f5bfb0:
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03775678();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_05f5c3c4:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar6);
    }
  }
  return plVar6;
}


