/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppMonoscopic
ENTRY_POINT: 01f9649c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppMonoscopic(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  long in_x9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
  bVar2 = *(byte *)(**(long **)(in_x9 + 0xbc8) + 0x130);
                    /* try { // try from 01f964b4 to 020964b7 has its CatchHandler @ 01f9655c */
  if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != **(long **)(in_x9 + 0xbc8)))
  {
                    /* WARNING: Subroutine does not return */
    FUN_01230f60();
  }
  lVar5 = unaff_x20[2];
  lVar7 = *unaff_x19;
                    /* try { // try from 01f964e0 to 020964e7 has its CatchHandler @ 01f96570 */
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                    /* try { // try from 01f964e8 to 02096523 has its CatchHandler @ 01f960e4 */
    thunk_FUN_01220628();
  }
  FUN_01f94678(lVar5,lVar7);
  puVar4 = PTR_DAT_027b3650;
  plVar9 = (long *)*unaff_x19;
  if (plVar9 == (long *)0x0) {
LAB_01f96724:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(char *)((long)unaff_x20 + 0x1c) == '\0') {
    if ((int)plVar9[3] <= (int)unaff_x20[3]) {
      return;
    }
    lVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
    FUN_01f89ca0(*unaff_x19,0,lVar5,0,(int)unaff_x20[3],0);
    *unaff_x19 = lVar5;
  }
  else {
    iVar1 = (int)plVar9[3];
    uVar3 = iVar1 - 1;
    if ((int)unaff_x20[3] == iVar1) {
      if (iVar1 == 0) goto LAB_01f9658c;
      unaff_x19 = plVar9 + (long)(int)uVar3 + 4;
      lVar5 = *unaff_x19;
      if (lVar5 == 0) goto LAB_01f96724;
      uVar8 = *(undefined8 *)PTR_DAT_027b3650;
      lVar7 = thunk_FUN_0124baac(lVar5,uVar8);
      if (lVar7 == 0) {
LAB_01f96748:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar5,uVar8);
      }
      uVar8 = *(undefined8 *)puVar4;
      lVar7 = thunk_FUN_0124baac(lVar5,uVar8);
      if (lVar7 == 0) goto LAB_01f96748;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_01f9658c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar6 = *(long **)(lVar7 + 0x20);
      if ((plVar6 != (long *)0x0) &&
         (lVar5 = thunk_FUN_0124baac(plVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
LAB_01f96734:
        uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar3) goto LAB_01f9658c;
    }
    else {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      FUN_01f89ca0(*unaff_x19,0,plVar6,0,uVar3,0);
      if (plVar6 == (long *)0x0) goto LAB_01f96724;
      if ((int)uVar3 < (int)plVar6[3]) {
        uVar10 = 0;
        plVar9 = plVar6 + (long)(int)uVar3 + 4;
        do {
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_01f96724;
          if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_01f9658c;
          lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_01f96724;
          uVar8 = *(undefined8 *)puVar4;
          lVar7 = thunk_FUN_0124baac(lVar5,uVar8);
          if (lVar7 == 0) {
LAB_01f96728:
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar5,uVar8);
          }
          uVar8 = *(undefined8 *)puVar4;
          lVar7 = thunk_FUN_0124baac(lVar5,uVar8);
          if (lVar7 == 0) goto LAB_01f96728;
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_01f9658c;
          lVar5 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
          if ((lVar5 != 0) &&
             (lVar7 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_01f96734;
          if (*(uint *)(plVar6 + 3) <= uVar3 + uVar10) goto LAB_01f9658c;
          *plVar9 = lVar5;
          thunk_FUN_01286abc(plVar9,lVar5);
          uVar10 = uVar10 + 1;
          plVar9 = plVar9 + 1;
        } while ((int)(uVar3 + uVar10) < (int)plVar6[3]);
      }
    }
    *unaff_x19 = (long)plVar6;
  }
  thunk_FUN_01286abc();
  return;
}


