/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxDestroy
ENTRY_POINT: 01f93598
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_65_0__ovrp_KtxDestroy(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long unaff_x19;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long unaff_x23;
  byte unaff_w25;
  long *plVar16;
  long *unaff_x28;
  long *in_stack_00000010;
  long in_stack_00000038;
  long in_stack_00000040;
  
  uVar13 = *(undefined8 *)(unaff_x19 + 0x18);
  FUN_01fab77c();
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  thunk_FUN_01286abc((undefined8 *)(unaff_x22 + 0x10),0);
  *(int *)(unaff_x22 + 0x18) = (int)uVar13;
  *(byte *)(unaff_x22 + 0x1c) = unaff_w25 & 1;
  *in_stack_00000010 = unaff_x22;
  thunk_FUN_01286abc();
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
                    /* try { // try from 01f935e0 to 020935e3 has its CatchHandler @ 01f935e8 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f93550 with catch @ 01f935e4
                       try { // try from 01f935e4 to 020935ff has its CatchHandler @ 01f934d0 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f93580 with catch @ 01f935e8
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f935e0 with catch @ 01f935e8
                        */
  uVar13 = *(undefined8 *)(unaff_x23 + 0x20);
  lVar15 = *unaff_x28;
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                    /* try { // try from 01f93600 to 02093603 has its CatchHandler @ 01f93610 */
    thunk_FUN_01220628();
  }
  FUN_01f94678(uVar13,lVar15);
  puVar4 = PTR_DAT_027b32e0;
                    /* catch() { ... } // from try @ 01f93600 with catch @ 01f93610 */
  if ((int)*(undefined8 *)(in_stack_00000040 + 0x18) == 0) goto LAB_01f9340c;
  plVar16 = (long *)(in_stack_00000040 + 0x20);
  plVar6 = (long *)*plVar16;
  if (((plVar6 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380)), lVar15 == 0
      )) || (*unaff_x28 == 0)) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  iVar1 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar1) {
    if (in_stack_00000038 == 0) goto LAB_01f92644;
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f801dc(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18));
      uVar5 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar6,0,uVar5,0);
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_01f894b8(uVar13,lVar15,0);
      if (plVar6 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      plVar9 = plVar6 + (long)(int)uVar5 + 4;
      *plVar9 = lVar15;
      thunk_FUN_01286abc(plVar9,lVar15);
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80))
      {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar9);
      }
      FUN_01f89750(plVar9,*(undefined8 *)(lVar15 + (long)(int)uVar5 * 8 + 0x20),0,0);
      goto LAB_01f94118;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar15 + 0x18)) {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar8 = *unaff_x28;
      if (lVar8 != 0) {
        uVar7 = 0;
        plVar9 = plVar6 + 4;
        do {
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) {
            uVar5 = *(uint *)(lVar15 + 0x18);
            if ((int)(uVar5 - 1) <= (int)uVar7) goto LAB_01f93a68;
            goto LAB_01f939f4;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
          if (plVar6 == (long *)0x0) break;
          lVar8 = *(long *)(lVar8 + uVar7 * 8 + 0x20);
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar6 + 3) <= uVar7) goto LAB_01f9340c;
          *plVar9 = lVar8;
          thunk_FUN_01286abc(plVar9,lVar8);
          lVar8 = *unaff_x28;
          uVar7 = uVar7 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(int *)(in_stack_00000040 + 0x18) == 0) goto LAB_01f9340c;
    plVar6 = (long *)*plVar16;
    if (plVar6 == (long *)0x0) goto LAB_01f92644;
    uVar5 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
    if ((uVar5 >> 1 & 1) == 0) {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar15 + 0x18));
      uVar5 = *(int *)(lVar15 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar6,0,uVar5,0);
      if (in_stack_00000038 == 0) goto LAB_01f92644;
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar15 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
      lVar15 = thunk_FUN_01f894b8(uVar13,lVar15,0);
      if (plVar6 == (long *)0x0) goto LAB_01f92644;
      if ((lVar15 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      plVar9 = plVar6 + (long)(int)uVar5 + 4;
      *plVar9 = lVar15;
      thunk_FUN_01286abc(plVar9,lVar15);
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_01f92644;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar15,uVar5,plVar9,0,*(int *)(lVar15 + 0x18) - uVar5,0);
      *unaff_x28 = (long)plVar6;
      thunk_FUN_01286abc();
    }
  }
  goto LAB_01f94128;
  while( true ) {
    plVar11 = *(long **)(lVar15 + 0x20 + uVar7 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar6 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar6 + 3) <= (uint)uVar7) goto LAB_01f9340c;
    *plVar9 = lVar8;
    thunk_FUN_01286abc(plVar9,lVar8);
    uVar5 = *(uint *)(lVar15 + 0x18);
    uVar7 = uVar7 + 1;
    plVar9 = plVar9 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar7) break;
LAB_01f939f4:
    if (uVar5 <= (uint)uVar7) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == 0) goto LAB_01f92644;
  if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
  uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar12 = FUN_01f801dc(uVar13,0,0);
  uVar5 = (uint)uVar7;
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(lVar15 + 0x18) <= uVar5) goto LAB_01f9340c;
    plVar9 = *(long **)(lVar15 + (long)(int)uVar5 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar6 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar15 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_01f941d8;
    uVar2 = *(uint *)(plVar6 + 3);
  }
  else {
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
    uVar13 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar15 = thunk_FUN_01f894b8(uVar14,uVar13,0);
    if (plVar6 == (long *)0x0) goto LAB_01f92644;
    if ((lVar15 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_01f941d8:
      uVar13 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar13,0);
    }
    uVar2 = *(uint *)(plVar6 + 3);
  }
  if (uVar2 <= uVar5) goto LAB_01f9340c;
  plVar6[(long)(int)uVar5 + 4] = lVar15;
  thunk_FUN_01286abc(plVar6 + (long)(int)uVar5 + 4,lVar15);
LAB_01f94118:
  *unaff_x28 = (long)plVar6;
  thunk_FUN_01286abc();
LAB_01f94128:
  if (*(int *)(in_stack_00000040 + 0x18) != 0) {
    return *plVar16;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


