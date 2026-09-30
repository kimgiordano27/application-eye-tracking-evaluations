/*
FUNCTION_NAME: OVRPlugin.Ktx$$.ctor
ENTRY_POINT: 01f93614
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


long OVRPlugin_Ktx___ctor(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  long *plVar14;
  long unaff_x24;
  long *plVar15;
  long *unaff_x28;
  long in_stack_00000038;
  long in_stack_00000040;
  
  plVar14 = *(long **)(unaff_x22 + 0x2e0);
  if ((int)*(undefined8 *)(unaff_x24 + 0x18) == 0) goto LAB_01f9340c;
  plVar15 = (long *)(unaff_x24 + 0x20);
  plVar5 = (long *)*plVar15;
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
    uVar12 = *(undefined8 *)(in_stack_00000038 + 0x20);
    if (*(int *)(*plVar14 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f801dc(uVar12,0,0);
    if ((uVar7 & 1) != 0) {
      plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar6 + 0x18));
      uVar4 = *(int *)(lVar6 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar14,0,uVar4,0);
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar12 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar6 == 0) goto LAB_01f92644;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar6 + 0x20) = 1;
      lVar6 = thunk_FUN_01f894b8(uVar12,lVar6,0);
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar14 + 3) <= uVar4) goto LAB_01f9340c;
      plVar5 = plVar14 + (long)(int)uVar4 + 4;
      *plVar5 = lVar6;
      thunk_FUN_01286abc(plVar5,lVar6);
      if (*(uint *)(plVar14 + 3) <= uVar4) goto LAB_01f9340c;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_01f9340c;
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_01f92644;
      bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80))
      {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar5);
      }
      FUN_01f89750(plVar5,*(undefined8 *)(lVar6 + (long)(int)uVar4 * 8 + 0x20),0,0);
      goto LAB_01f94118;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar6 + 0x18)) {
      plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar8 = *unaff_x28;
      if (lVar8 != 0) {
        uVar7 = 0;
        plVar5 = plVar14 + 4;
        do {
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) {
            uVar4 = *(uint *)(lVar6 + 0x18);
            if ((int)(uVar4 - 1) <= (int)uVar7) goto LAB_01f93a68;
            goto LAB_01f939f4;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_01f9340c;
          if (plVar14 == (long *)0x0) break;
          lVar8 = *(long *)(lVar8 + uVar7 * 8 + 0x20);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar14 + 3) <= uVar7) goto LAB_01f9340c;
          *plVar5 = lVar8;
          thunk_FUN_01286abc(plVar5,lVar8);
          lVar8 = *unaff_x28;
          uVar7 = uVar7 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(int *)(unaff_x24 + 0x18) == 0) goto LAB_01f9340c;
    plVar14 = (long *)*plVar15;
    if (plVar14 == (long *)0x0) goto LAB_01f92644;
    uVar4 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    if ((uVar4 >> 1 & 1) == 0) {
      plVar14 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar6 + 0x18));
      uVar4 = *(int *)(lVar6 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar14,0,uVar4,0);
      if (in_stack_00000038 == 0) goto LAB_01f92644;
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar12 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar6 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar6 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar4;
      lVar6 = thunk_FUN_01f894b8(uVar12,lVar6,0);
      if (plVar14 == (long *)0x0) goto LAB_01f92644;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar14 + 3) <= uVar4) goto LAB_01f9340c;
      plVar5 = plVar14 + (long)(int)uVar4 + 4;
      *plVar5 = lVar6;
      thunk_FUN_01286abc(plVar5,lVar6);
      if (*(uint *)(plVar14 + 3) <= uVar4) goto LAB_01f9340c;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_01f92644;
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar6,uVar4,plVar5,0,*(int *)(lVar6 + 0x18) - uVar4,0);
      *unaff_x28 = (long)plVar14;
      thunk_FUN_01286abc();
      unaff_x24 = in_stack_00000040;
    }
  }
  goto LAB_01f94128;
  while( true ) {
    plVar10 = *(long **)(lVar6 + 0x20 + uVar7 * 8);
    if ((plVar10 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar14 + 3) <= (uint)uVar7) goto LAB_01f9340c;
    *plVar5 = lVar8;
    thunk_FUN_01286abc(plVar5,lVar8);
    uVar4 = *(uint *)(lVar6 + 0x18);
    uVar7 = uVar7 + 1;
    plVar5 = plVar5 + 1;
    if ((int)(uVar4 - 1) <= (int)uVar7) break;
LAB_01f939f4:
    if (uVar4 <= (uint)uVar7) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == 0) goto LAB_01f92644;
  if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
  uVar12 = *(undefined8 *)(in_stack_00000038 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar11 = FUN_01f801dc(uVar12,0,0);
  uVar4 = (uint)uVar7;
  if ((uVar11 & 1) == 0) {
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_01f9340c;
    plVar5 = *(long **)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
    if ((plVar5 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar5 + 0x1f8))(plVar5,*(undefined8 *)(*plVar5 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0))
    goto LAB_01f941d8;
    uVar2 = *(uint *)(plVar14 + 3);
  }
  else {
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar13 = *(undefined8 *)(in_stack_00000038 + 0x20);
    uVar12 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar6 = thunk_FUN_01f894b8(uVar13,uVar12,0);
    if (plVar14 == (long *)0x0) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
LAB_01f941d8:
      uVar12 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar12,0);
    }
    uVar2 = *(uint *)(plVar14 + 3);
  }
  if (uVar2 <= uVar4) goto LAB_01f9340c;
  plVar14[(long)(int)uVar4 + 4] = lVar6;
  thunk_FUN_01286abc(plVar14 + (long)(int)uVar4 + 4,lVar6);
LAB_01f94118:
  *unaff_x28 = (long)plVar14;
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


