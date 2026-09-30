/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_51
ENTRY_POINT: 01fa2e84
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


undefined8 OVRPlugin_<>c__<_cctor>b__655_51(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long *unaff_x19;
  long unaff_x20;
  long *plVar12;
  long *plVar13;
  
  plVar3 = (long *)FUN_01230af8();
  uVar4 = (**(code **)(*unaff_x19 + 0x3b8))();
  if ((uVar4 & 1) == 0) {
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027b3650);
    uVar7 = FUN_01230af8(uVar7,1);
    FUN_0103b050();
    FUN_0103b3ac(uVar7);
    FUN_0103b3e0(uVar7,0);
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027c2088);
    uVar7 = FUN_01f9b348(uVar8,uVar7);
    thunk_FUN_01279b34(PTR_DAT_027b4020);
    uVar8 = thunk_FUN_0124bba8();
    FUN_01f68e18(uVar8,uVar7,0);
  }
  else {
    lVar5 = (**(code **)(*unaff_x19 + 0x448))();
    puVar2 = PTR_DAT_027b3ec0;
    puVar1 = PTR_DAT_027b32e0;
    if (lVar5 == 0) goto LAB_01fa316c;
    iVar10 = (int)*(ulong *)(lVar5 + 0x18);
    if (iVar10 == *(int *)(unaff_x20 + 0x18)) {
      if (0 < iVar10) {
        uVar4 = 0;
        uVar11 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        lVar5 = 0x20;
        do {
          if (uVar11 <= uVar4) goto LAB_01fa3168;
          plVar12 = *(long **)(unaff_x20 + lVar5);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar11 = FUN_01f7f404(plVar12,0,0);
          if ((uVar11 & 1) != 0) {
            thunk_FUN_01279b34(PTR_DAT_027b3df8);
            uVar7 = thunk_FUN_0124bba8();
            FUN_01e7e374(uVar7,0);
            goto LAB_01fa3198;
          }
          lVar6 = *(long *)puVar2;
          if (plVar12 == (long *)0x0) {
LAB_01fa2f3c:
            plVar13 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130)) goto LAB_01fa2f3c;
            plVar13 = plVar12;
            if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) !=
                lVar6) {
              plVar13 = (long *)0x0;
            }
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          if (plVar13 == (long *)0x0) {
            if (plVar12 == (long *)0x0) goto LAB_01fa316c;
            uVar4 = (**(code **)(*plVar12 + 0x5d8))(plVar12,*(undefined8 *)(*plVar12 + 0x5e0));
            if ((uVar4 & 1) != 0) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar7 = FUN_01f82278();
              return uVar7;
            }
            plVar3 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8,
                                          *(undefined4 *)(unaff_x20 + 0x18));
            if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01fa3110;
            uVar4 = 0;
            uVar11 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
            plVar12 = plVar3 + 4;
            goto LAB_01fa30b4;
          }
          if (plVar3 == (long *)0x0) goto LAB_01fa316c;
          lVar6 = thunk_FUN_0124baac(plVar13,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar6 == 0) goto LAB_01fa3170;
          if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_01fa3168;
          *(undefined8 *)((long)plVar3 + lVar5) = plVar13;
          thunk_FUN_01286abc((undefined8 *)((long)plVar3 + lVar5),plVar13);
          uVar11 = (ulong)*(uint *)(unaff_x20 + 0x18);
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 8;
        } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x20 + 0x18));
      }
      uVar7 = FUN_01fa2cf8();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)puVar2);
      }
      FUN_01f9dd74(plVar3,uVar7);
      uVar7 = FUN_01247d40();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)puVar1);
      }
      uVar4 = FUN_01f7f404(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
        return uVar7;
      }
      thunk_FUN_01279b34(PTR_DAT_027bc068);
      uVar7 = thunk_FUN_0124bba8();
      FUN_01fa32f4();
      goto LAB_01fa3198;
    }
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c2090);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar8 = thunk_FUN_0124bba8();
    uVar9 = thunk_FUN_01279b34(PTR_DAT_027c2080);
    FUN_01e7598c(uVar8,uVar7,uVar9,0);
  }
  uVar7 = thunk_FUN_01279b34(PTR_DAT_027c2078);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar8,uVar7);
LAB_01fa30b4:
  do {
    if (uVar11 <= uVar4) {
LAB_01fa3168:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (plVar3 == (long *)0x0) goto LAB_01fa316c;
    lVar5 = *(long *)(unaff_x20 + 0x20 + uVar4 * 8);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0)) {
LAB_01fa3170:
      uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,0);
    }
    if (*(uint *)(plVar3 + 3) <= uVar4) goto LAB_01fa3168;
    *plVar12 = lVar5;
    thunk_FUN_01286abc(plVar12,lVar5);
    uVar11 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar4 = uVar4 + 1;
    plVar12 = plVar12 + 1;
  } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01fa3110:
  uVar4 = FUN_01ed9ae4(0);
  if ((uVar4 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b5050);
    uVar7 = thunk_FUN_0124bba8();
    FUN_01f78278(uVar7,0);
LAB_01fa3198:
    uVar8 = thunk_FUN_01279b34(PTR_DAT_027c2078);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar7,uVar8);
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01fa3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    return uVar7;
  }
LAB_01fa316c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


