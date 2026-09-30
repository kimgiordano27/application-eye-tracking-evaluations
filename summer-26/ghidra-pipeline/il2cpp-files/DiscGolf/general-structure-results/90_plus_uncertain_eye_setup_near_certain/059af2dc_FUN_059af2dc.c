/*
FUNCTION_NAME: FUN_059af2dc
ENTRY_POINT: 059af2dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x059af7f0) */
/* WARNING: Removing unreachable block (ram,0x059af90c) */

void FUN_059af2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  uint uVar17;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long local_68;
  
  puVar3 = PTR_DAT_06a0f540;
  if ((DAT_06dc1490 & 1) == 0) {
                    /* try { // try from 059af324 to 05aaf43b has its CatchHandler @ 059af324
                       catch() { ... } // from try @ 059af324 with catch @ 059af324
                       catch() { ... } // from try @ 059afb68 with catch @ 059af324
                       catch() { ... } // from try @ 059afc74 with catch @ 059af324 */
    FUN_02d965b8(PTR_DAT_06a0f520);
    FUN_02d965b8(PTR_DAT_06a0f528);
    FUN_02d965b8(PTR_DAT_06a20ec8);
    FUN_02d965b8(PTR_DAT_06a12a38);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(OVRPlugin_OVRP_0_1_2_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_06a0f540);
    FUN_02d965b8(PTR_DAT_06a165a8);
    DAT_06dc1490 = 1;
  }
  puVar5 = PTR_DAT_06a20ec8;
  local_68 = 0;
  local_78 = (long *)0x0;
  local_70 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar7 = FUN_054a7674(param_1,0);
  uVar8 = FUN_054a7674(param_2,0);
  local_68 = System_Xml_Schema_DurationFacetsChecker__CheckValueFacets(uVar8,1,param_5);
  local_80 = &local_68;
  local_88 = 0;
  plVar9 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_0549a56c(plVar9,uVar7,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  if (((param_4 & 1) != 0) && (lVar11 = FUN_054a6a24(plVar9,0), lVar11 != 0)) {
                    /* try { // try from 059af43c to 05aaf43f has its CatchHandler @ 059afb6c */
                    /* try { // try from 059af440 to 05aaf447 has its CatchHandler @ 059afbc4 */
    plVar12 = (long *)FUN_054a6a24(plVar9,0);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar10 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
  }
                    /* try { // try from 059af45c to 05aaf463 has its CatchHandler @ 059afbc0 */
  if (*(int *)(*(long *)PTR_DAT_06a0f528 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar16 = *(long *)PTR_DAT_06a0f520;
  lVar11 = *(long *)(lVar16 + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02dcfd18();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02dcfd18();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar11 = *(long *)(lVar16 + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02dcfd18();
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02dcfd18();
  }
  plVar12 = (long *)**(long **)(lVar11 + 0xb8);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_70 = (**(code **)(*plVar12 + 0x178))(plVar12,0x104,*(undefined8 *)(*plVar12 + 0x180));
  puStack_90 = &local_70;
  local_98 = 0;
  plVar12 = (long *)FUN_054a6e40(plVar9,*(undefined8 *)PTR_DAT_06a165a8,1,0);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = *plVar12;
  uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)OVRPlugin_OVRP_0_1_2_TypeInfo) {
        puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_059af580;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar13 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)OVRPlugin_OVRP_0_1_2_TypeInfo,0);
LAB_059af580:
  local_78 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  puVar6 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  puVar4 = PTR_DAT_06a12a38;
  puVar3 = PTR_DAT_069fbff8;
  if (local_78 != (long *)0x0) {
    uVar17 = 1;
    do {
      plVar12 = local_78;
      lVar11 = *local_78;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_059af614;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar3,0);
LAB_059af614:
      uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      plVar12 = local_78;
      puVar2 = PTR_DAT_069fbff0;
      if ((uVar14 & 1) == 0) {
        if (local_78 == (long *)0x0) goto LAB_059af7e4;
        lVar10 = *local_78;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 == 0) goto LAB_059af7bc;
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_059af7a4;
      }
      if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = *local_78;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_059af678;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar13 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar6,0);
LAB_059af678:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar16 = *(long *)puVar4;
      iVar1 = *(int *)(lVar11 + 0x10) - *(int *)(lVar10 + 0x10);
      if (*plVar12 == lVar16) {
        uVar7 = (**(code **)(lVar16 + 0x1b8))(plVar12,*(undefined8 *)(lVar16 + 0x1c0));
        uVar7 = FUN_059afa8c(uVar7,*(undefined4 *)(lVar10 + 0x10),iVar1,&local_70,0);
        lVar11 = local_68;
        uVar8 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        System_Xml_Schema_StringFacetsChecker__CheckBuiltInFacets(lVar11,uVar8,uVar7,param_3);
      }
      else if ((*plVar12 == *(long *)puVar5) && (uVar14 = FUN_059b0184(plVar12), (uVar14 & 1) != 0))
      {
        uVar7 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        uVar7 = FUN_059afa8c(uVar7,*(undefined4 *)(lVar10 + 0x10),iVar1,&local_70,1);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(0,uVar7);
        }
        FUN_059a62fc(local_68,uVar7,0);
      }
      uVar17 = 0;
    } while (local_78 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_059af7a4:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_059af7d8;
    }
  }
LAB_059af7bc:
  puVar13 = (undefined8 *)FUN_02dd004c(local_78,*(long *)PTR_DAT_069fbff0,0);
LAB_059af7d8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_059af7e4:
  lVar10 = local_68;
  if ((uVar17 & param_4) != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    lVar11 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_059afa8c(uVar7,0,*(undefined4 *)(lVar11 + 0x10),&local_70,1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar7,uVar7);
    }
    FUN_059a62fc(lVar10,uVar7,0);
  }
  FUN_02d2a0b4(&local_98);
  plVar9 = (long *)*local_80;
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar13 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_059af8b4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_059af8b4:
    (*(code *)*puVar13)(plVar9,puVar13[1]);
  }
  if (local_88 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


