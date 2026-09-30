/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 01f94a68
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl__CreateMarkerHandle(long param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long *unaff_x19;
  long unaff_x20;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  
  puVar5 = PTR_DAT_027c1c00;
  puVar4 = PTR_DAT_027b5b48;
  puVar3 = PTR_DAT_027b32e0;
  iVar6 = (int)param_1;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94900 with catch @ 01f94a68
                       try { // try from 01f94a68 to 02094a97 has its CatchHandler @ 01f947e0 */
  if (in_NG == in_OV) {
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f948d0 with catch @ 01f94a6c
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f948bc with catch @ 01f94a70
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94a60 with catch @ 01f94a74
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94904 with catch @ 01f94a78
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f94a64 with catch @ 01f94a78
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94884 with catch @ 01f94a7c
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94924 with catch @ 01f94a80
                        */
    uVar16 = 0;
    uVar14 = 0;
    do {
      if ((uint)param_1 <= uVar14) goto LAB_01f94d44;
                    /* try { // try from 01f94a98 to 02094a9b has its CatchHandler @ 01f94ab0 */
      plVar7 = (long *)unaff_x19[(long)(int)uVar14 + 4];
      if (plVar7 == (long *)0x0) goto LAB_01f94dac;
                    /* catch() { ... } // from try @ 01f94a98 with catch @ 01f94ab0 */
      plVar7 = (long *)(**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      lVar12 = *(long *)puVar3;
                    /* try { // try from 01f94abc to 02094ac7 has its CatchHandler @ 01f94adc */
      if (*(int *)(lVar12 + 0xe0) == 0) {
                    /* try { // try from 01f94ac8 to 02094ad3 has its CatchHandler @ 01f947e0 */
        thunk_FUN_01220628(lVar12);
      }
                    /* try { // try from 01f94ad4 to 02094adb has its CatchHandler @ 01f94adc */
      uVar8 = FUN_01f7f404(plVar7,param_2,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f94abc with catch @ 01f94adc
                       catch(type#2 @ 00000000) { ... } // from try @ 01f94ad4 with catch @ 01f94adc
                        */
      if ((uVar8 & 1) == 0) {
        lVar12 = *(long *)puVar5;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar12 = *(long *)puVar5;
        }
        if (**(long **)(lVar12 + 0xb8) == unaff_x20) {
          if (plVar7 == (long *)0x0) goto LAB_01f94dac;
          uVar8 = FUN_01f8134c(plVar7,0);
          if ((uVar8 & 1) != 0) goto LAB_01f94b4c;
        }
        uVar15 = *(undefined8 *)puVar4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar15 = FUN_01f7d8a0(uVar15,0);
        uVar8 = FUN_01f7f404(plVar7,uVar15,0);
        if ((uVar8 & 1) != 0) goto LAB_01f94b4c;
        if (plVar7 == (long *)0x0) {
LAB_01f94dac:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar8 = FUN_01f81644(plVar7,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = (**(code **)(*plVar7 + 0x288))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x290));
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_027b3ec0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(plVar7);
          }
          uVar8 = FUN_01f9451c();
        }
        if ((uVar8 & 1) != 0) goto LAB_01f94b4c;
      }
      else {
LAB_01f94b4c:
        uVar11 = *(uint *)(unaff_x19 + 3);
        if (uVar11 <= uVar14) goto LAB_01f94d44;
        lVar12 = unaff_x19[(long)(int)uVar14 + 4];
        if (lVar12 != 0) {
          lVar9 = thunk_FUN_0124baac(lVar12,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar9 == 0) {
            uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
            FUN_01230b78(uVar15,0);
          }
          uVar11 = *(uint *)(unaff_x19 + 3);
        }
        if (uVar11 <= uVar16) goto LAB_01f94d44;
        lVar9 = (long)(int)uVar16;
        unaff_x19[lVar9 + 4] = lVar12;
        uVar16 = uVar16 + 1;
        thunk_FUN_01286abc(unaff_x19 + lVar9 + 4,lVar12);
      }
      param_1 = unaff_x19[3];
      uVar14 = uVar14 + 1;
      iVar6 = (int)param_1;
    } while ((int)uVar14 < iVar6);
  }
  else {
    uVar16 = 0;
  }
  puVar3 = PTR_DAT_027c1390;
  if (uVar16 == 1) {
    if (iVar6 == 0) {
LAB_01f94d44:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
  }
  else {
    if (uVar16 == 0) {
      uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1c10);
      thunk_FUN_01279b34(PTR_DAT_027c1c18);
      uVar15 = thunk_FUN_0124bba8();
      FUN_01f88c80(uVar15,uVar10,0);
LAB_01f94dec:
      uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1c08);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar15,uVar10);
    }
    if ((int)uVar16 < 2) {
      uVar14 = 0;
    }
    else {
      lVar12 = 0;
      uVar14 = 0;
      bVar2 = false;
      do {
        if (((uint)unaff_x19[3] <= uVar14) || ((unaff_x19[3] & 0xffffffffU) <= lVar12 + 1U))
        goto LAB_01f94d44;
        lVar9 = unaff_x19[(long)(int)uVar14 + 4];
        lVar13 = unaff_x19[lVar12 + 5];
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        iVar6 = FUN_01f94e14(lVar9,lVar13);
        if (iVar6 == 0) {
          bVar2 = true;
        }
        else if (iVar6 == 2) {
          bVar2 = false;
          uVar14 = (int)lVar12 + 1;
        }
        lVar12 = lVar12 + 1;
      } while ((ulong)uVar16 - 1 != lVar12);
      if (bVar2) {
        uVar10 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar15 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar15,uVar10,0);
        goto LAB_01f94dec;
      }
    }
    if (*(uint *)(unaff_x19 + 3) <= uVar14) goto LAB_01f94d44;
    unaff_x19 = unaff_x19 + (int)uVar14;
  }
  return unaff_x19[4];
}


