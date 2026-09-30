/*
FUNCTION_NAME: OVRPlugin.Ktx$$DestroyKtxTexture
ENTRY_POINT: 01f9346c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Ktx__DestroyKtxTexture(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long unaff_x19;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x23;
  long unaff_x24;
  long *plVar16;
  long *unaff_x28;
  long *in_stack_00000010;
  long in_stack_00000038;
  long in_stack_00000040;
  
  bVar4 = FUN_01f801dc(param_1,param_2,0);
  lVar6 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
  if (unaff_x24 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = thunk_FUN_0124baac();
    if (lVar7 == 0) {
                    /* try { // try from 01f93580 to 0209358f has its CatchHandler @ 01f935e8 */
                    /* WARNING: Subroutine does not return */
      FUN_01230f60();
    }
  }
  uVar14 = *(undefined8 *)(unaff_x19 + 0x18);
  FUN_01fab77c(lVar6,0);
  *(long *)(lVar6 + 0x10) = lVar7;
  thunk_FUN_01286abc((long *)(lVar6 + 0x10),lVar7);
  *(int *)(lVar6 + 0x18) = (int)uVar14;
  *(byte *)(lVar6 + 0x1c) = bVar4 & 1;
  *in_stack_00000010 = lVar6;
  thunk_FUN_01286abc(in_stack_00000010,lVar6);
  if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_01f9340c;
  uVar14 = *(undefined8 *)(unaff_x23 + 0x20);
  lVar6 = *unaff_x28;
  if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f94678(uVar14,lVar6);
  puVar3 = PTR_DAT_027b32e0;
  if ((int)*(undefined8 *)(in_stack_00000040 + 0x18) == 0) goto LAB_01f9340c;
  plVar16 = (long *)(in_stack_00000040 + 0x20);
  plVar8 = (long *)*plVar16;
  if (((plVar8 == (long *)0x0) ||
      (lVar6 = (**(code **)(*plVar8 + 0x378))(plVar8,*(undefined8 *)(*plVar8 + 0x380)), lVar6 == 0))
     || (*unaff_x28 == 0)) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  iVar1 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar6 + 0x18) == iVar1) {
    if (in_stack_00000038 == 0) goto LAB_01f92644;
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar9 = FUN_01f801dc(uVar14,0,0);
    if ((uVar9 & 1) != 0) {
      plVar8 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar6 + 0x18));
      uVar5 = *(int *)(lVar6 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar8,0,uVar5,0);
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar6 == 0) goto LAB_01f92644;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar6 + 0x20) = 1;
      lVar6 = thunk_FUN_01f894b8(uVar14,lVar6,0);
      if (plVar8 == (long *)0x0) goto LAB_01f92644;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_01f9340c;
      plVar10 = plVar8 + (long)(int)uVar5 + 4;
      *plVar10 = lVar6;
      thunk_FUN_01286abc(plVar10,lVar6);
      if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_01f9340c;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01f9340c;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_01f92644;
      bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_027b3f80)
         ) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(plVar10);
      }
      FUN_01f89750(plVar10,*(undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20),0,0);
      goto LAB_01f94118;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar6 + 0x18)) {
      plVar8 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar7 = *unaff_x28;
      if (lVar7 != 0) {
        uVar9 = 0;
        plVar10 = plVar8 + 4;
        do {
          if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar9) {
            uVar5 = *(uint *)(lVar6 + 0x18);
            if ((int)(uVar5 - 1) <= (int)uVar9) goto LAB_01f93a68;
            goto LAB_01f939f4;
          }
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_01f9340c;
          if (plVar8 == (long *)0x0) break;
          lVar7 = *(long *)(lVar7 + uVar9 * 8 + 0x20);
          if ((lVar7 != 0) &&
             (lVar11 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
          goto LAB_01f941d8;
          if (*(uint *)(plVar8 + 3) <= uVar9) goto LAB_01f9340c;
          *plVar10 = lVar7;
          thunk_FUN_01286abc(plVar10,lVar7);
          lVar7 = *unaff_x28;
          uVar9 = uVar9 + 1;
          plVar10 = plVar10 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_01f92644;
    }
    if (*(int *)(in_stack_00000040 + 0x18) == 0) goto LAB_01f9340c;
    plVar8 = (long *)*plVar16;
    if (plVar8 == (long *)0x0) goto LAB_01f92644;
    uVar5 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
    if ((uVar5 >> 1 & 1) == 0) {
      plVar8 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar6 + 0x18));
      uVar5 = *(int *)(lVar6 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar8,0,uVar5,0);
      if (in_stack_00000038 == 0) goto LAB_01f92644;
      if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
      uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar6 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar6 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
      lVar6 = thunk_FUN_01f894b8(uVar14,lVar6,0);
      if (plVar8 == (long *)0x0) goto LAB_01f92644;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_01f9340c;
      plVar10 = plVar8 + (long)(int)uVar5 + 4;
      *plVar10 = lVar6;
      thunk_FUN_01286abc(plVar10,lVar6);
      if (*(uint *)(plVar8 + 3) <= uVar5) goto LAB_01f9340c;
      lVar6 = *unaff_x28;
      if (lVar6 == 0) goto LAB_01f92644;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar6,uVar5,plVar10,0,*(int *)(lVar6 + 0x18) - uVar5,0);
      *unaff_x28 = (long)plVar8;
      thunk_FUN_01286abc();
    }
  }
  goto LAB_01f94128;
  while( true ) {
    plVar12 = *(long **)(lVar6 + 0x20 + uVar9 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar8 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar7 != 0) &&
       (lVar11 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar8 + 3) <= (uint)uVar9) goto LAB_01f9340c;
    *plVar10 = lVar7;
    thunk_FUN_01286abc(plVar10,lVar7);
    uVar5 = *(uint *)(lVar6 + 0x18);
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar9) break;
LAB_01f939f4:
    if (uVar5 <= (uint)uVar9) goto LAB_01f9340c;
  }
LAB_01f93a68:
  if (in_stack_00000038 == 0) goto LAB_01f92644;
  if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
  uVar14 = *(undefined8 *)(in_stack_00000038 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar13 = FUN_01f801dc(uVar14,0,0);
  uVar5 = (uint)uVar9;
  if ((uVar13 & 1) == 0) {
    if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_01f9340c;
    plVar10 = *(long **)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
    if ((plVar10 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar8 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0))
    goto LAB_01f941d8;
    uVar2 = *(uint *)(plVar8 + 3);
  }
  else {
    if (*(int *)(in_stack_00000038 + 0x18) == 0) goto LAB_01f9340c;
    uVar15 = *(undefined8 *)(in_stack_00000038 + 0x20);
    uVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar6 = thunk_FUN_01f894b8(uVar15,uVar14,0);
    if (plVar8 == (long *)0x0) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_01f941d8:
      uVar14 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar14,0);
    }
    uVar2 = *(uint *)(plVar8 + 3);
  }
  if (uVar2 <= uVar5) goto LAB_01f9340c;
  plVar8[(long)(int)uVar5 + 4] = lVar6;
  thunk_FUN_01286abc(plVar8 + (long)(int)uVar5 + 4,lVar6);
LAB_01f94118:
  *unaff_x28 = (long)plVar8;
  thunk_FUN_01286abc();
LAB_01f94128:
  if (*(int *)(in_stack_00000040 + 0x18) != 0) {
    return *plVar16;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


