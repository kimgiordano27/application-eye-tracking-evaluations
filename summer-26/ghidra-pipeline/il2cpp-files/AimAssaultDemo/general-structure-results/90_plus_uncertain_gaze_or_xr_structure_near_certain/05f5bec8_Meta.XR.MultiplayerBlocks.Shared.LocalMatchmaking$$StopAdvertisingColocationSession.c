/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$StopAdvertisingColocationSession
ENTRY_POINT: 05f5bec8
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


long * Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__StopAdvertisingColocationSession
                 (undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long unaff_x19;
  undefined8 uVar11;
  long unaff_x25;
  
                    /* try { // try from 05f5bec8 to 0605bed7 has its CatchHandler @ 05f5bed8 */
  thunk_FUN_03798b70(param_1);
  puVar2 = PTR_DAT_07d95eb0;
                    /* catch() { ... } // from try @ 05f5bdf0 with catch @ 05f5bed8
                       catch() { ... } // from try @ 05f5be28 with catch @ 05f5bed8
                       catch() { ... } // from try @ 05f5be54 with catch @ 05f5bed8
                       catch() { ... } // from try @ 05f5bec8 with catch @ 05f5bed8 */
                    /* try { // try from 05f5bedc to 0605bedf has its CatchHandler @ 05f5bee8 */
                    /* try { // try from 05f5bee0 to 0605beeb has its CatchHandler @ 05f5bd44 */
  plVar4 = (long *)FUN_062519f8();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f5bedc with catch @ 05f5bee8
                        */
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_05f5c3c4;
  }
  uVar5 = FUN_062519f8(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar6 = FUN_0625ad04(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_062519f8(lVar7 + 0x20,0);
    uVar6 = FUN_0625ad04(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
      FUN_061efe40(plVar4,0);
      goto LAB_05f5bfb0;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    plVar10 = (long *)FUN_062519f8(uVar5,0);
    if (plVar10 == (long *)0x0) {
LAB_05f5c3cc:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar6 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)FUN_078d9d1c(&PTR_DAT_07d98000,*(undefined8 *)(unaff_x25 + 0xe0));
      return plVar4;
    }
    if (plVar4 == (long *)0x0) goto LAB_05f5c3cc;
    uVar6 = (**(code **)(*plVar4 + 0x3c8))(plVar4,*(undefined8 *)(*plVar4 + 0x3d0));
    if ((uVar6 & 1) == 0) {
LAB_05f5c2b0:
      uVar6 = (**(code **)(*plVar4 + 0x5b8))(plVar4,*(undefined8 *)(*plVar4 + 0x5c0));
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar5 = FUN_06276e18(plVar4,0);
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
        }
        uVar3 = FUN_0625d834(uVar5,0);
        switch(uVar3) {
        case 5:
          plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98338,*(undefined8 *)(unaff_x25 + 0xe0));
          return plVar4;
        case 6:
        case 8:
        case 9:
        case 10:
          plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98300,*(undefined8 *)(unaff_x25 + 0xe0));
          return plVar4;
        case 7:
          plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98340,*(undefined8 *)(unaff_x25 + 0xe0));
          return plVar4;
        case 0xb:
        case 0xc:
          plVar4 = (long *)FUN_05f5c028(PTR_DAT_07d98320,*(undefined8 *)(unaff_x25 + 0xe0));
          return plVar4;
        }
      }
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      plVar4 = (long *)thunk_FUN_037788cc();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03775678(lVar7);
      }
      FUN_04f177dc(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
      return plVar4;
    }
    uVar5 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
    uVar11 = *(undefined8 *)PTR_DAT_07d98330;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_062519f8(uVar11,0);
    uVar6 = FUN_0625ad04(uVar5,uVar11,0);
    if ((uVar6 & 1) == 0) goto LAB_05f5c2b0;
    lVar7 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
    if (lVar7 == 0) goto LAB_05f5c3cc;
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_05f5c3d0:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    plVar10 = *(long **)(lVar7 + 0x20);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar10);
      }
    }
    uVar5 = *(undefined8 *)PTR_DAT_07d98310;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar8 = (long *)FUN_062519f8(uVar5,0);
    plVar9 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
    if (plVar9 == (long *)0x0) goto LAB_05f5c3cc;
    if ((plVar10 != (long *)0x0) &&
       (lVar7 = thunk_FUN_037787d0(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
      uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,0);
    }
    if ((int)plVar9[3] == 0) goto LAB_05f5c3d0;
    plVar9[4] = (long)plVar10;
    thunk_FUN_037aeb94(plVar9 + 4,plVar10);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x978))
                                   (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x980)),
       plVar8 == (long *)0x0)) goto LAB_05f5c3cc;
    uVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((uVar6 & 1) == 0) goto LAB_05f5c2b0;
    uVar5 = *(undefined8 *)PTR_DAT_07d98328;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar5 = FUN_062519f8(uVar5,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)puVar2);
    }
    plVar4 = (long *)FUN_06284508(uVar5,plVar10,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678(lVar7);
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d982f8);
    FUN_061efd40(plVar4,0);
LAB_05f5bfb0:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03775678();
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar10;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03775678(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_05f5c3c4:
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
  }
  return plVar4;
}


