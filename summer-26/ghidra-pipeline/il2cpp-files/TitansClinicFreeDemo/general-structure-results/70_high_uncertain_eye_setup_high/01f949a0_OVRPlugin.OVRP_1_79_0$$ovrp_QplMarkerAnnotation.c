/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_QplMarkerAnnotation
ENTRY_POINT: 01f949a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_79_0__ovrp_QplMarkerAnnotation
               (ulong param_1,undefined8 param_2,uint param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  uint uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1390);
    thunk_FUN_01279b34(PTR_DAT_027c1c00);
    thunk_FUN_01279b34(PTR_DAT_027bb780);
    thunk_FUN_01279b34(PTR_DAT_027b5b48);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    *(undefined1 *)(unaff_x22 + 0xefb) = 1;
  }
  if (param_4 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar15 = thunk_FUN_0124bba8();
    uVar16 = thunk_FUN_01279b34(PTR_DAT_027b3fe8);
    FUN_01e75914(uVar15,uVar16,0);
    uVar16 = thunk_FUN_01279b34(PTR_DAT_027c1c08);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar15,uVar16);
  }
  lVar7 = FUN_01f8a1a8(param_4,0);
  if (lVar7 == 0) {
    if (((param_3 >> 0xb & 1) != 0) && (unaff_x20 != 0)) {
      thunk_FUN_0122c1cc();
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
LAB_01f94dac:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar15 = *(undefined8 *)PTR_DAT_027bb780;
  plVar8 = (long *)thunk_FUN_0124baac(lVar7,uVar15);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60(lVar7,uVar15);
  }
  if ((param_3 >> 0xb & 1) == 0) {
LAB_01f94a34:
    uVar14 = 0;
  }
  else {
    if (unaff_x20 == 0) goto LAB_01f94dac;
    uVar15 = thunk_FUN_0122c1cc();
    puVar5 = PTR_DAT_027c1c00;
    puVar4 = PTR_DAT_027b5b48;
    puVar3 = PTR_DAT_027b32e0;
                    /* try { // try from 01f94a60 to 02094a63 has its CatchHandler @ 01f94a74 */
    lVar7 = plVar8[3];
                    /* try { // try from 01f94a64 to 02094a67 has its CatchHandler @ 01f94a78 */
    iVar6 = (int)lVar7;
    if (iVar6 < 1) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar14 = 0;
      do {
        if ((uint)lVar7 <= uVar14) goto LAB_01f94d44;
        plVar9 = (long *)plVar8[(long)(int)uVar14 + 4];
        if (plVar9 == (long *)0x0) goto LAB_01f94dac;
        plVar9 = (long *)(**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar7);
        }
        uVar10 = FUN_01f7f404(plVar9,uVar15,0);
        if ((uVar10 & 1) == 0) {
          lVar7 = *(long *)puVar5;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar7 = *(long *)puVar5;
          }
          if (**(long **)(lVar7 + 0xb8) == unaff_x20) {
            if (plVar9 == (long *)0x0) goto LAB_01f94dac;
            uVar10 = FUN_01f8134c(plVar9,0);
            if ((uVar10 & 1) != 0) goto LAB_01f94b4c;
          }
          uVar16 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar16 = FUN_01f7d8a0(uVar16,0);
          uVar10 = FUN_01f7f404(plVar9,uVar16,0);
          if ((uVar10 & 1) != 0) goto LAB_01f94b4c;
          if (plVar9 == (long *)0x0) goto LAB_01f94dac;
          uVar10 = FUN_01f81644(plVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar15,*(undefined8 *)(*plVar9 + 0x290));
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
              FUN_01230f60(plVar9);
            }
            uVar10 = FUN_01f9451c();
          }
          if ((uVar10 & 1) != 0) goto LAB_01f94b4c;
        }
        else {
LAB_01f94b4c:
          uVar12 = *(uint *)(plVar8 + 3);
          if (uVar12 <= uVar14) goto LAB_01f94d44;
          lVar7 = plVar8[(long)(int)uVar14 + 4];
          if (lVar7 != 0) {
            lVar11 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*plVar8 + 0x40));
            if (lVar11 == 0) {
              uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
              FUN_01230b78(uVar15,0);
            }
            uVar12 = *(uint *)(plVar8 + 3);
          }
          if (uVar12 <= uVar17) goto LAB_01f94d44;
          lVar11 = (long)(int)uVar17;
          plVar8[lVar11 + 4] = lVar7;
          uVar17 = uVar17 + 1;
          thunk_FUN_01286abc(plVar8 + lVar11 + 4,lVar7);
        }
        lVar7 = plVar8[3];
        uVar14 = uVar14 + 1;
        iVar6 = (int)lVar7;
      } while ((int)uVar14 < iVar6);
    }
    puVar3 = PTR_DAT_027c1390;
    if (uVar17 == 1) {
      if (iVar6 == 0) goto LAB_01f94d44;
      goto OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize;
    }
    if (uVar17 == 0) {
      uVar16 = thunk_FUN_01279b34(PTR_DAT_027c1c10);
      thunk_FUN_01279b34(PTR_DAT_027c1c18);
      uVar15 = thunk_FUN_0124bba8();
      FUN_01f88c80(uVar15,uVar16,0);
LAB_01f94dec:
      uVar16 = thunk_FUN_01279b34(PTR_DAT_027c1c08);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar15,uVar16);
    }
    if ((int)uVar17 < 2) goto LAB_01f94a34;
    lVar7 = 0;
    uVar14 = 0;
    bVar2 = false;
    do {
      if (((uint)plVar8[3] <= uVar14) || ((plVar8[3] & 0xffffffffU) <= lVar7 + 1U))
      goto LAB_01f94d44;
      lVar11 = plVar8[(long)(int)uVar14 + 4];
      lVar13 = plVar8[lVar7 + 5];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      iVar6 = FUN_01f94e14(lVar11,lVar13);
      if (iVar6 == 0) {
        bVar2 = true;
      }
      else if (iVar6 == 2) {
        bVar2 = false;
        uVar14 = (int)lVar7 + 1;
      }
      lVar7 = lVar7 + 1;
    } while ((ulong)uVar17 - 1 != lVar7);
    if (bVar2) {
      uVar16 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
      thunk_FUN_01279b34(PTR_DAT_027bc458);
      uVar15 = thunk_FUN_0124bba8();
      FUN_01ee31d4(uVar15,uVar16,0);
      goto LAB_01f94dec;
    }
  }
  if (*(uint *)(plVar8 + 3) <= uVar14) {
LAB_01f94d44:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  plVar8 = plVar8 + (int)uVar14;
OVRPlugin_OVRP_0_1_0__ovrp_GetEyeTextureSize:
  return plVar8[4];
}


