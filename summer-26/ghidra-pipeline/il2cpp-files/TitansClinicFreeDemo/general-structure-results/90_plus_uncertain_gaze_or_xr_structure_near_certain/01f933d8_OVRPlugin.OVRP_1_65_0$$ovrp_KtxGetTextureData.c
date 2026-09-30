/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 01f933d8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_12;validity_or_gating_hits_21;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined **unaff_x22;
  long unaff_x23;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *unaff_x28;
  uint unaff_w29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    lVar5 = unaff_x19;
    plVar9 = (long *)unaff_x22[0x5c];
LAB_01f933e4:
    if (in_stack_00000030 == lVar5) {
      if ((in_stack_00000018._4_4_ & 1) != 0) {
        uVar14 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar16 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar16,uVar14,0);
        uVar14 = thunk_FUN_01279b34(PTR_DAT_027c1bf8);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar16,uVar14);
      }
      if (in_stack_00000020 != 0) {
        if (unaff_x23 == 0) goto LAB_01f92644;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_01f9340c;
        plVar15 = (long *)(unaff_x23 + (long)(int)unaff_w29 * 8 + 0x20);
        lVar5 = *plVar15;
        if (lVar5 == 0) goto LAB_01f92644;
        lVar5 = FUN_01f8a1a8(lVar5,0);
        lVar12 = *unaff_x28;
        if ((lVar12 == 0) || (in_stack_00000038 == 0)) goto LAB_01f92644;
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
        uVar14 = *(undefined8 *)(in_stack_00000038 + (long)(int)unaff_w29 * 8 + 0x20);
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar2 = FUN_01f801dc(uVar14,0,0);
        lVar6 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1bc8);
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          uVar14 = *(undefined8 *)PTR_DAT_027b1ca8;
          lVar7 = thunk_FUN_0124baac(lVar5,uVar14);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar5,uVar14);
          }
        }
        uVar14 = *(undefined8 *)(lVar12 + 0x18);
        FUN_01fab77c(lVar6,0);
        *(long *)(lVar6 + 0x10) = lVar7;
        thunk_FUN_01286abc((long *)(lVar6 + 0x10),lVar7);
        *(int *)(lVar6 + 0x18) = (int)uVar14;
        *(byte *)(lVar6 + 0x1c) = bVar2 & 1;
        *in_stack_00000010 = lVar6;
        thunk_FUN_01286abc(in_stack_00000010,lVar6);
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_01f9340c;
        lVar5 = *plVar15;
        lVar12 = *unaff_x28;
        if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f94678(lVar5,lVar12);
        plVar9 = (long *)PTR_DAT_027b32e0;
      }
      lVar5 = (long)(int)unaff_w29;
      if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      plVar19 = (long *)(in_stack_00000040 + lVar5 * 8 + 0x20);
      plVar15 = (long *)*plVar19;
      if (((plVar15 == (long *)0x0) ||
          (lVar12 = (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380)),
          lVar12 == 0)) || (*unaff_x28 == 0)) goto LAB_01f92644;
      iVar3 = *(int *)(*unaff_x28 + 0x18);
      if (*(int *)(lVar12 + 0x18) == iVar3) {
        if (in_stack_00000038 == 0) goto LAB_01f92644;
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
        puVar13 = (undefined8 *)(in_stack_00000038 + lVar5 * 8 + 0x20);
        uVar14 = *puVar13;
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar8 = FUN_01f801dc(uVar14,0,0);
        if ((uVar8 & 1) == 0) goto OVRPlugin_UnityOpenXR__OnSessionExiting;
        plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar12 + 0x18)
                                     );
        uVar4 = *(int *)(lVar12 + 0x18) - 1;
        FUN_01f89ca0(*unaff_x28,0,plVar9,0,uVar4,0);
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
        uVar14 = *puVar13;
        lVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        if (lVar5 == 0) goto LAB_01f92644;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01f9340c;
        *(undefined4 *)(lVar5 + 0x20) = 1;
        lVar5 = thunk_FUN_01f894b8(uVar14,lVar5,0);
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
        goto LAB_01f941d8;
        if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_01f9340c;
        plVar15 = plVar9 + (long)(int)uVar4 + 4;
        *plVar15 = lVar5;
        thunk_FUN_01286abc(plVar15,lVar5);
        if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_01f9340c;
        lVar5 = *unaff_x28;
        if (lVar5 == 0) goto LAB_01f92644;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_01f9340c;
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_01f92644;
        bVar2 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) {
LAB_01f942dc:
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar15);
        }
        FUN_01f89750(plVar15,*(undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20),0,0);
        goto FUN_01f94198;
      }
      if (iVar3 < *(int *)(lVar12 + 0x18)) {
        plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
        lVar6 = *unaff_x28;
        if (lVar6 == 0) goto LAB_01f92644;
        uVar8 = 0;
        plVar15 = plVar9 + 4;
        break;
      }
      if (*(uint *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      plVar9 = (long *)*plVar19;
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      uVar4 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
      if ((uVar4 >> 1 & 1) != 0) goto OVRPlugin_UnityOpenXR__OnSessionExiting;
      plVar9 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar12 + 0x18));
      uVar4 = *(int *)(lVar12 + 0x18) - 1;
      FUN_01f89ca0(*unaff_x28,0,plVar9,0,uVar4,0);
      if (in_stack_00000038 == 0) goto LAB_01f92644;
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
      uVar14 = *(undefined8 *)(in_stack_00000038 + lVar5 * 8 + 0x20);
      lVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
      if ((*unaff_x28 == 0) || (lVar5 == 0)) goto LAB_01f92644;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01f9340c;
      *(uint *)(lVar5 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar4;
      lVar5 = thunk_FUN_01f894b8(uVar14,lVar5,0);
      if (plVar9 == (long *)0x0) goto LAB_01f92644;
      if ((lVar5 != 0) &&
         (lVar12 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
      goto LAB_01f941d8;
      if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_01f9340c;
      plVar15 = plVar9 + (long)(int)uVar4 + 4;
      *plVar15 = lVar5;
      thunk_FUN_01286abc(plVar15,lVar5);
      if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_01f9340c;
      lVar5 = *unaff_x28;
      if (lVar5 == 0) goto LAB_01f92644;
      plVar15 = (long *)*plVar15;
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)PTR_DAT_027b3f80)) goto LAB_01f942dc;
      }
      FUN_01f89ca0(lVar5,uVar4,plVar15,0,*(int *)(lVar5 + 0x18) - uVar4,0);
      *unaff_x28 = (long)plVar9;
      thunk_FUN_01286abc(unaff_x28,plVar9);
      goto OVRPlugin_UnityOpenXR__OnSessionExiting;
    }
    lVar12 = (long)(int)unaff_w29;
    unaff_x19 = lVar5 + 1;
    if ((uint)*(ulong *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_01f9340c;
    if (unaff_x23 == 0) goto LAB_01f92644;
    if ((uint)*(ulong *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_01f9340c;
    if (in_stack_00000038 == 0) goto LAB_01f92644;
    if (((((uint)*(ulong *)(in_stack_00000038 + 0x18) <= unaff_w29) ||
         (uVar8 = lVar5 + 2, (*(ulong *)(in_stack_00000040 + 0x18) & 0xffffffff) <= uVar8)) ||
        ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar8)) ||
       ((*(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff) <= uVar8)) goto LAB_01f9340c;
    uVar17 = *(undefined8 *)(in_stack_00000040 + lVar12 * 8 + 0x20);
    uVar21 = *(undefined8 *)(in_stack_00000028 + unaff_x19 * 8);
    uVar14 = *(undefined8 *)(in_stack_00000038 + lVar12 * 8 + 0x20);
    uVar16 = *(undefined8 *)(unaff_x23 + lVar12 * 8 + 0x20);
    uVar20 = *(undefined8 *)(in_stack_00000048 + unaff_x19 * 8);
    uVar18 = *(undefined8 *)(in_stack_00000050 + unaff_x19 * 8);
    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    iVar3 = FUN_01f947fc(uVar17,uVar16,uVar14,uVar21,uVar20,uVar18);
    unaff_x28 = in_stack_00000058;
    if (iVar3 != 0) {
      lVar5 = unaff_x19;
      plVar9 = (long *)PTR_DAT_027b32e0;
      if (iVar3 == 2) {
        unaff_w29 = (int)unaff_x19 + 1;
        in_stack_00000018._4_4_ = 0;
      }
      goto LAB_01f933e4;
    }
    in_stack_00000018._4_4_ = 1;
    unaff_x22 = &PTR_DAT_027b3000;
  } while( true );
  while( true ) {
    lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar9 + 3) <= uVar8) goto LAB_01f9340c;
    *plVar15 = lVar6;
    thunk_FUN_01286abc(plVar15,lVar6);
    lVar6 = *unaff_x28;
    uVar8 = uVar8 + 1;
    plVar15 = plVar15 + 1;
    if (lVar6 == 0) break;
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar8) {
      uVar4 = *(uint *)(lVar12 + 0x18);
      if ((int)(uVar4 - 1) <= (int)uVar8) goto LAB_01f94000;
      goto LAB_01f93f8c;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) goto LAB_01f9340c;
    if (plVar9 == (long *)0x0) break;
  }
  goto LAB_01f92644;
  while( true ) {
    plVar10 = *(long **)(lVar12 + 0x20 + uVar8 * 8);
    if ((plVar10 == (long *)0x0) ||
       (lVar6 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
       plVar9 == (long *)0x0)) goto LAB_01f92644;
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0))
    goto LAB_01f941d8;
    if (*(uint *)(plVar9 + 3) <= (uint)uVar8) goto LAB_01f9340c;
    *plVar15 = lVar6;
    thunk_FUN_01286abc(plVar15,lVar6);
    uVar4 = *(uint *)(lVar12 + 0x18);
    uVar8 = uVar8 + 1;
    plVar15 = plVar15 + 1;
    if ((int)(uVar4 - 1) <= (int)uVar8) break;
LAB_01f93f8c:
    if (uVar4 <= (uint)uVar8) goto LAB_01f9340c;
  }
LAB_01f94000:
  if (in_stack_00000038 != 0) {
    if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
      puVar13 = (undefined8 *)(in_stack_00000038 + lVar5 * 8 + 0x20);
      uVar14 = *puVar13;
      if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar11 = FUN_01f801dc(uVar14,0,0);
      uVar4 = (uint)uVar8;
      if ((uVar11 & 1) == 0) {
        if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_01f9340c;
        plVar15 = *(long **)(lVar12 + (long)(int)uVar4 * 8 + 0x20);
        if ((plVar15 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
           plVar9 == (long *)0x0)) goto LAB_01f92644;
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
        goto LAB_01f941d8;
        uVar1 = *(uint *)(plVar9 + 3);
      }
      else {
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_01f9340c;
        uVar16 = *puVar13;
        uVar14 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,1);
        lVar5 = thunk_FUN_01f894b8(uVar16,uVar14,0);
        if (plVar9 == (long *)0x0) goto LAB_01f92644;
        if ((lVar5 != 0) &&
           (lVar12 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0)) {
LAB_01f941d8:
          uVar14 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar14,0);
        }
        uVar1 = *(uint *)(plVar9 + 3);
      }
      if (uVar4 < uVar1) {
        plVar9[(long)(int)uVar4 + 4] = lVar5;
        thunk_FUN_01286abc(plVar9 + (long)(int)uVar4 + 4,lVar5);
FUN_01f94198:
        *unaff_x28 = (long)plVar9;
        thunk_FUN_01286abc(unaff_x28,plVar9);
OVRPlugin_UnityOpenXR__OnSessionExiting:
        if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
          return *plVar19;
        }
      }
    }
LAB_01f9340c:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


