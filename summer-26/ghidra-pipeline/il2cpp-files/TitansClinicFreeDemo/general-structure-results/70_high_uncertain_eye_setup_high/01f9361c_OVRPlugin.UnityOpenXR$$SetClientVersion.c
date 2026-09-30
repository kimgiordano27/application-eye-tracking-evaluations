/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 01f9361c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_UnityOpenXR__SetClientVersion(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int in_w8;
  undefined8 uVar13;
  undefined8 uVar14;
  long *unaff_x22;
  long unaff_x24;
  long *plVar15;
  long *unaff_x28;
  long in_stack_00000038;
  long in_stack_00000040;
  
                    /* try { // try from 01f9361c to 02093627 has its CatchHandler @ 01f9363c */
  if (in_w8 == 0) goto LAB_01f9340c;
  plVar15 = (long *)(unaff_x24 + 0x20);
  plVar5 = (long *)*plVar15;
                    /* try { // try from 01f93628 to 02093633 has its CatchHandler @ 01f934d0 */
                    /* try { // try from 01f93634 to 0209363b has its CatchHandler @ 01f9363c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f9361c with catch @ 01f9363c
                       catch(type#2 @ 00000000) { ... } // from try @ 01f93634 with catch @ 01f9363c
                        */
                    /* try { // try from 01f93640 to 0209369f has its CatchHandler @ 01f93640
                       catch() { ... } // from try @ 01f93640 with catch @ 01f93640
                       catch() { ... } // from try @ 01f936e4 with catch @ 01f93640
                       catch() { ... } // from try @ 01f9375c with catch @ 01f93640 */
  if (((plVar5 == (long *)0x0) ||
      (lVar6 = (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380)), lVar6 == 0))
     || (*unaff_x28 == 0)) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  iVar1 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar6 + 0x18) == iVar1) {
    if (in_stack_00000038 == 0) goto LAB_01f92644;
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f801dc(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 01f936a0 to 020936af has its CatchHandler @ 01f93718 */
      plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar6 + 0x18));
                    /* try { // try from 01f936b4 to 020936e3 has its CatchHandler @ 01f9371c */
      uVar4 = *(int *)(lVar6 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar5,0,uVar4,0);
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
                    /* try { // try from 01f936e4 to 02093733 has its CatchHandler @ 01f93640 */
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar6 == 0) goto LAB_01f92644;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar6 + 0x20) = 1;
      lVar6 = thunk_FUN_01f894b8(uVar13,lVar6,0);
      if (plVar5 == (long *)0x0) goto LAB_01f92644;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_01f9340c;
      plVar9 = plVar5 + (long)(int)uVar4 + 4;
      *plVar9 = lVar6;
      thunk_FUN_01286abc(plVar9,lVar6);
      if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_01f9340c;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_01f9340c;
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
      FUN_01f89750(plVar9,*(undefined8 *)(lVar6 + (long)(int)uVar4 * 8 + 0x20),0,0);
      goto LAB_01f94118;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar6 + 0x18)) {
      plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar8 = *unaff_x28;
      if (lVar8 != 0) {
        uVar7 = 0;
        plVar9 = plVar5 + 4;
        do {
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) {
            uVar4 = *(uint *)(lVar6 + 0x18);
            if ((int)(uVar4 - 1) <= (int)uVar7) goto LAB_01f93a68;
            goto LAB_01f939f4;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
          if (plVar5 == (long *)0x0) break;
          lVar8 = *(long *)(lVar8 + uVar7 * 8 + 0x20);
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar5 + 3) <= uVar7) goto LAB_01f9340c;
          *plVar9 = lVar8;
          thunk_FUN_01286abc(plVar9,lVar8);
          lVar8 = *unaff_x28;
          uVar7 = uVar7 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(int *)(unaff_x24 + 0x18) == 0) goto LAB_01f9340c;
    plVar5 = (long *)*plVar15;
    if (plVar5 == (long *)0x0) goto LAB_01f92644;
    uVar4 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
    if ((uVar4 >> 1 & 1) == 0) {
      plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar6 + 0x18));
      uVar4 = *(int *)(lVar6 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar5,0,uVar4,0);
      if (in_stack_00000038 == 0) goto LAB_01f92644;
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar6 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar6 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar4;
      lVar6 = thunk_FUN_01f894b8(uVar13,lVar6,0);
      if (plVar5 == (long *)0x0) goto LAB_01f92644;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_01f9340c;
      plVar9 = plVar5 + (long)(int)uVar4 + 4;
      *plVar9 = lVar6;
      thunk_FUN_01286abc(plVar9,lVar6);
      if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_01f9340c;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_01f92644;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar6,uVar4,plVar9,0,*(int *)(lVar6 + 0x18) - uVar4,0);
      *unaff_x28 = (long)plVar5;
      thunk_FUN_01286abc();
      unaff_x24 = in_stack_00000040;
    }
  }
  goto LAB_01f94128;
  while( true ) {
    plVar11 = *(long **)(lVar6 + 0x20 + uVar7 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar5 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar5 + 3) <= (uint)uVar7) goto LAB_01f9340c;
    *plVar9 = lVar8;
    thunk_FUN_01286abc(plVar9,lVar8);
    uVar4 = *(uint *)(lVar6 + 0x18);
    uVar7 = uVar7 + 1;
    plVar9 = plVar9 + 1;
    if ((int)(uVar4 - 1) <= (int)uVar7) break;
LAB_01f939f4:
    if (uVar4 <= (uint)uVar7) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == 0) goto LAB_01f92644;
  if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
  uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar12 = FUN_01f801dc(uVar13,0,0);
  uVar4 = (uint)uVar7;
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_01f9340c;
    plVar9 = *(long **)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar5 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_01f941d8;
    uVar2 = *(uint *)(plVar5 + 3);
  }
  else {
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
    uVar13 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar6 = thunk_FUN_01f894b8(uVar14,uVar13,0);
    if (plVar5 == (long *)0x0) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_01f941d8:
      uVar13 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar13,0);
    }
    uVar2 = *(uint *)(plVar5 + 3);
  }
  if (uVar2 <= uVar4) goto LAB_01f9340c;
  plVar5[(long)(int)uVar4 + 4] = lVar6;
  thunk_FUN_01286abc(plVar5 + (long)(int)uVar4 + 4,lVar6);
LAB_01f94118:
  *unaff_x28 = (long)plVar5;
  thunk_FUN_01286abc();
  unaff_x24 = in_stack_00000040;
LAB_01f94128:
  if (*(int *)(unaff_x24 + 0x18) != 0) {
    return *plVar15;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


