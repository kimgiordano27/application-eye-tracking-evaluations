/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_53
ENTRY_POINT: 01fa2f5c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__655_53(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int in_w8;
  ulong uVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar8;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01220628();
    }
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x22 == (long *)0x0) goto LAB_01fa316c;
      uVar3 = (**(code **)(*unaff_x22 + 0x5d8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x5e0));
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar2 = FUN_01f82278();
        return uVar2;
      }
      plVar4 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8,
                                    *(undefined4 *)(unaff_x20 + 0x18));
      if ((int)*(ulong *)(unaff_x20 + 0x18) < 1) goto LAB_01fa3110;
      uVar3 = 0;
      uVar7 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
      plVar8 = plVar4 + 4;
      goto LAB_01fa30b4;
    }
    if (unaff_x21 == (long *)0x0) goto LAB_01fa316c;
    lVar1 = thunk_FUN_0124baac(unaff_x23,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar1 == 0) goto LAB_01fa3170;
    if (*(uint *)(unaff_x21 + 3) <= unaff_x26) goto LAB_01fa3168;
    *(undefined8 *)((long)unaff_x21 + unaff_x27) = unaff_x23;
    thunk_FUN_01286abc((undefined8 *)((long)unaff_x21 + unaff_x27),unaff_x23);
    unaff_x26 = unaff_x26 + 1;
    unaff_x27 = unaff_x27 + 8;
    if ((long)(int)*(uint *)(unaff_x20 + 0x18) <= (long)unaff_x26) {
      FUN_01fa2cf8();
                    /* try { // try from 01fa2fc0 to 020a2fc7 has its CatchHandler @ 01fa3200 */
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x24);
      }
      FUN_01f9dd74();
      uVar2 = FUN_01247d40();
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01220628(*unaff_x25);
      }
      uVar3 = FUN_01f7f404(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        return uVar2;
      }
      thunk_FUN_01279b34(PTR_DAT_027bc068);
      uVar2 = thunk_FUN_0124bba8();
      FUN_01fa32f4();
      goto LAB_01fa3198;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x26) goto LAB_01fa3168;
    unaff_x22 = *(long **)(unaff_x20 + unaff_x27);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f7f404(unaff_x22,0,0);
    if ((uVar3 & 1) != 0) break;
    lVar1 = *unaff_x24;
    if (unaff_x22 == (long *)0x0) {
LAB_01fa2f3c:
      unaff_x23 = (long *)0x0;
    }
    else {
      if (*(byte *)(*unaff_x22 + 0x130) < *(byte *)(lVar1 + 0x130)) goto LAB_01fa2f3c;
      unaff_x23 = unaff_x22;
      if (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1
         ) {
        unaff_x23 = (long *)0x0;
      }
    }
    in_w8 = *(int *)(lVar1 + 0xe0);
  }
  thunk_FUN_01279b34(PTR_DAT_027b3df8);
  uVar2 = thunk_FUN_0124bba8();
  FUN_01e7e374(uVar2,0);
  goto LAB_01fa3198;
LAB_01fa30b4:
  do {
    if (uVar7 <= uVar3) {
LAB_01fa3168:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca8();
    }
    if (plVar4 == (long *)0x0) goto LAB_01fa316c;
    lVar1 = *(long *)(unaff_x20 + 0x20 + uVar3 * 8);
    if ((lVar1 != 0) &&
       (lVar5 = thunk_FUN_0124baac(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_01fa3170:
      uVar2 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar2,0);
    }
    if (*(uint *)(plVar4 + 3) <= uVar3) goto LAB_01fa3168;
    *plVar8 = lVar1;
    thunk_FUN_01286abc(plVar8,lVar1);
    uVar7 = (ulong)*(uint *)(unaff_x20 + 0x18);
    uVar3 = uVar3 + 1;
    plVar8 = plVar8 + 1;
  } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x20 + 0x18));
LAB_01fa3110:
  uVar3 = FUN_01ed9ae4(0);
  if ((uVar3 & 1) != 0) {
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar1 = *unaff_x24;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01fa3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
      return uVar2;
    }
LAB_01fa316c:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  thunk_FUN_01279b34(PTR_DAT_027b5050);
  uVar2 = thunk_FUN_0124bba8();
  FUN_01f78278(uVar2,0);
LAB_01fa3198:
  uVar6 = thunk_FUN_01279b34(PTR_DAT_027c2078);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar2,uVar6);
}


