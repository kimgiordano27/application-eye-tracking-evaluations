/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 01f93b60
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_19;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long OVRPlugin_UnityOpenXR__OnSessionCreate(long param_1)

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
  undefined8 *puVar13;
  undefined8 *unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000038;
  long in_stack_00000040;
  
  uVar14 = *unaff_x20;
  lVar16 = *unaff_x28;
  if (*(int *)(**(long **)(param_1 + 0x390) + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f94678(uVar14,lVar16);
  puVar4 = PTR_DAT_027b32e0;
  if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_01f9340c;
  plVar17 = (long *)(in_stack_00000040 + unaff_x19 * 8 + 0x20);
  plVar6 = (long *)*plVar17;
  if (((plVar6 == (long *)0x0) ||
      (lVar16 = (**(code **)(*plVar6 + 0x378))(plVar6,*(undefined8 *)(*plVar6 + 0x380)), lVar16 == 0
      )) || (*unaff_x28 == 0)) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  iVar1 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar16 + 0x18) == iVar1) {
    if (in_stack_00000038 == 0) goto LAB_01f92644;
    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
    puVar13 = (undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
    uVar14 = *puVar13;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar7 = FUN_01f801dc(uVar14,0,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar16 + 0x18));
      uVar5 = *(int *)(lVar16 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar6,0,uVar5,0);
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      uVar14 = *puVar13;
      lVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if (lVar16 == 0) goto LAB_01f92644;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01f9340c;
      *(undefined4 *)(lVar16 + 0x20) = 1;
      lVar16 = thunk_FUN_01f894b8(uVar14,lVar16,0);
      if (plVar6 == (long *)0x0) goto LAB_01f92644;
      if ((lVar16 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      plVar9 = plVar6 + (long)(int)uVar5 + 4;
      *plVar9 = lVar16;
      thunk_FUN_01286abc(plVar9,lVar16);
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      lVar16 = *unaff_x28;
      if (lVar16 == 0) goto LAB_01f92644;
      if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_01f9340c;
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
      FUN_01f89750(plVar9,*(undefined8 *)(lVar16 + (long)(int)uVar5 * 8 + 0x20),0,0);
      goto FUN_01f94198;
    }
  }
  else {
    if (iVar1 < *(int *)(lVar16 + 0x18)) {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      lVar8 = *unaff_x28;
      if (lVar8 != 0) {
        uVar7 = 0;
        plVar9 = plVar6 + 4;
        do {
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar7) {
            uVar5 = *(uint *)(lVar16 + 0x18);
            if ((int)(uVar5 - 1) <= (int)uVar7) goto LAB_01f94000;
            goto LAB_01f93f8c;
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
    if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_01f9340c;
    plVar6 = (long *)*plVar17;
    if (plVar6 == (long *)0x0) goto LAB_01f92644;
    uVar5 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
    if ((uVar5 >> 1 & 1) == 0) {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar16 + 0x18));
      uVar5 = *(int *)(lVar16 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar6,0,uVar5,0);
      if (in_stack_00000038 == 0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      uVar14 = *(undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
      lVar16 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar16 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar5;
      lVar16 = thunk_FUN_01f894b8(uVar14,lVar16,0);
      if (plVar6 == (long *)0x0) goto LAB_01f92644;
      if ((lVar16 != 0) &&
         (lVar8 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      plVar9 = plVar6 + (long)(int)uVar5 + 4;
      *plVar9 = lVar16;
      thunk_FUN_01286abc(plVar9,lVar16);
      if (*(uint *)(plVar6 + 3) <= uVar5) goto LAB_01f9340c;
      lVar16 = *unaff_x28;
      if (lVar16 == 0) goto LAB_01f92644;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar16,uVar5,plVar9,0,*(int *)(lVar16 + 0x18) - uVar5,0);
      *unaff_x28 = (long)plVar6;
      thunk_FUN_01286abc();
    }
  }
  goto OVRPlugin_UnityOpenXR__OnSessionExiting;
  while( true ) {
    plVar11 = *(long **)(lVar16 + 0x20 + uVar7 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar6 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar8 != 0) &&
       (lVar10 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar6 + 3) <= (uint)uVar7) goto LAB_01f9340c;
    *plVar9 = lVar8;
    thunk_FUN_01286abc(plVar9,lVar8);
    uVar5 = *(uint *)(lVar16 + 0x18);
    uVar7 = uVar7 + 1;
    plVar9 = plVar9 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar7) break;
LAB_01f93f8c:
    if (uVar5 <= (uint)uVar7) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (in_stack_00000038 == 0) goto LAB_01f92644;
  if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
  puVar13 = (undefined8 *)(in_stack_00000038 + unaff_x19 * 8 + 0x20);
  uVar14 = *puVar13;
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar12 = FUN_01f801dc(uVar14,0,0);
  uVar5 = (uint)uVar7;
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_01f9340c;
    plVar9 = *(long **)(lVar16 + (long)(int)uVar5 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar6 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar16 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_01f941d8;
    uVar2 = *(uint *)(plVar6 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
    uVar15 = *puVar13;
    uVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
    lVar16 = thunk_FUN_01f894b8(uVar15,uVar14,0);
    if (plVar6 == (long *)0x0) goto LAB_01f92644;
    if ((lVar16 != 0) &&
       (lVar8 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_01f941d8:
      uVar14 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar14,0);
    }
    uVar2 = *(uint *)(plVar6 + 3);
  }
  if (uVar2 <= uVar5) goto LAB_01f9340c;
  plVar6[(long)(int)uVar5 + 4] = lVar16;
  thunk_FUN_01286abc(plVar6 + (long)(int)uVar5 + 4,lVar16);
FUN_01f94198:
  *unaff_x28 = (long)plVar6;
  thunk_FUN_01286abc();
OVRPlugin_UnityOpenXR__OnSessionExiting:
  if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
    return *plVar17;
  }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


