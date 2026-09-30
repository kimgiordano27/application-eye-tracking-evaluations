/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRTask.Callback<OVRSceneManager.Metrics>>
ENTRY_POINT: 03f2b1f0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void System_Array__InternalArray__ICollection_Add<OVRTask_Callback<OVRSceneManager_Metrics>>
               (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  int iVar9;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while (unaff_x23 != 0) {
    *(undefined4 *)(unaff_x23 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
                    /* try { // try from 03f2b208 to 0402b22f has its CatchHandler @ 03f2ba40 */
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(lVar6 + 0x50);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined4 *)(lVar5 + 0x54) = *(undefined4 *)(lVar6 + 0x54);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar6 + 0x58);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined1 *)(lVar5 + 0x5c) = *(undefined1 *)(lVar6 + 0x5c);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(lVar6 + 0x60);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined4 *)(lVar5 + 100) = *(undefined4 *)(lVar6 + 100);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined1 *)(lVar5 + 0x68) = *(undefined1 *)(lVar6 + 0x68);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined1 *)(lVar5 + 0x69) = *(undefined1 *)(lVar6 + 0x69);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined1 *)(lVar5 + 0x6a) = *(undefined1 *)(lVar6 + 0x6a);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(lVar6 + 0x70);
    thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x70));
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) break;
    uVar10 = *(undefined8 *)(lVar6 + 0x78);
    uVar7 = thunk_FUN_03ac74bc(*unaff_x29);
    FUN_04e86ce4(uVar7,uVar10,*unaff_x27);
    if (lVar5 == 0) break;
    *(undefined8 *)(lVar5 + 0x78) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x78),uVar7);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) break;
    uVar10 = *(undefined8 *)(lVar6 + 0x80);
    uVar7 = thunk_FUN_03ac74bc(*unaff_x29);
    FUN_04e86ce4(uVar7,uVar10,*unaff_x27);
    if (lVar5 == 0) break;
    *(undefined8 *)(lVar5 + 0x80) = uVar7;
    thunk_FUN_03afed3c((undefined8 *)(lVar5 + 0x80),uVar7);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined1 *)(lVar5 + 0x88) = *(undefined1 *)(lVar6 + 0x88);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)(lVar6 + 0x8c);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined4 *)(lVar5 + 0x90) = *(undefined4 *)(lVar6 + 0x90);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined4 *)(lVar5 + 0x94) = *(undefined4 *)(lVar6 + 0x94);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined4 *)(lVar5 + 0x98) = *(undefined4 *)(lVar6 + 0x98);
    do {
      unaff_w22 = unaff_w22 + 1;
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_03f2b8c0;
      if (*(int *)(*(long *)(unaff_x21 + 0x20) + 0x18) <= unaff_w22) {
        lVar5 = *unaff_x20;
        if (lVar5 == 0) goto LAB_03f2b8c0;
        iVar9 = 0;
        goto LAB_03f2b730;
      }
      if (*unaff_x20 == 0) goto LAB_03f2b8c0;
      lVar5 = *(long *)(*unaff_x20 + 0x20);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e838);
      FUN_03f87a60(uVar7,0);
      if (lVar5 == 0) goto LAB_03f2b8c0;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)PTR_DAT_0848e7f0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_03f2b8c0;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = uVar7;
        thunk_FUN_03afed3c(puVar3,uVar7);
      }
      else {
        FUN_04de85b0(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0))
      goto LAB_03f2b8c0;
      lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x26);
      if ((*(long *)(unaff_x21 + 0x20) == 0) ||
         ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar6 == 0 ||
          (lVar5 == 0)))) goto LAB_03f2b8c0;
      *(undefined1 *)(lVar5 + 0x160) = *(undefined1 *)(lVar6 + 0x160);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0))
      goto LAB_03f2b8c0;
      lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x26);
      if (((*(long *)(unaff_x21 + 0x20) == 0) ||
          (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar6 == 0)) ||
         (lVar5 == 0)) goto LAB_03f2b8c0;
      *(undefined1 *)(lVar5 + 400) = *(undefined1 *)(lVar6 + 400);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0))
      goto LAB_03f2b8c0;
      lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x26);
      if ((*(long *)(unaff_x21 + 0x20) == 0) ||
         ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar6 == 0 ||
          (lVar5 == 0)))) goto LAB_03f2b8c0;
      *(undefined1 *)(lVar5 + 0x191) = *(undefined1 *)(lVar6 + 0x191);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0))
      goto LAB_03f2b8c0;
      lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x26);
      if (((*(long *)(unaff_x21 + 0x20) == 0) ||
          (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar6 == 0)) ||
         (lVar5 == 0)) goto LAB_03f2b8c0;
      *(undefined8 *)(lVar5 + 0x198) = *(undefined8 *)(lVar6 + 0x198);
      thunk_FUN_03afed3c(lVar5 + 0x198);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0))
      goto LAB_03f2b8c0;
      lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x26);
      if ((*(long *)(unaff_x21 + 0x20) == 0) ||
         ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar6 == 0 ||
          (lVar5 == 0)))) goto LAB_03f2b8c0;
      *(undefined8 *)(lVar5 + 0x290) = *(undefined8 *)(lVar6 + 0x290);
      if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0))
      goto LAB_03f2b8c0;
      lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x26);
      if (((*(long *)(unaff_x21 + 0x20) == 0) ||
          (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar6 == 0)) ||
         (lVar5 == 0)) goto LAB_03f2b8c0;
      *(undefined8 *)(lVar5 + 0x2a0) = *(undefined8 *)(lVar6 + 0x2a0);
      if (*unaff_x20 == 0) goto LAB_03f2b8c0;
      lVar5 = *(long *)(*unaff_x20 + 0x28);
      uVar7 = *(undefined8 *)PTR_DAT_0848e758;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_0675ff58(uVar7,0);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
      }
      plVar4 = (long *)FUN_07ca3718(uVar7,0);
      uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
      if (plVar4 == (long *)0x0) {
LAB_03f2aebc:
        plVar4 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0848e760 + 0x130);
        if (*(byte *)(*plVar4 + 0x130) < bVar1) goto LAB_03f2aebc;
        if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0848e760
           ) {
          plVar4 = (long *)0x0;
        }
      }
      FUN_03f1fda0(uVar7,plVar4);
      if (lVar5 == 0) goto LAB_03f2b8c0;
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar8 = *(long *)PTR_DAT_0848e800;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_03f2b8c0;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *puVar3 = uVar7;
        thunk_FUN_03afed3c(puVar3,uVar7);
      }
      else {
        FUN_04de85b0(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(unaff_x21 + 0x28) == 0) goto LAB_03f2b8c0;
    } while (*(int *)(*(long *)(unaff_x21 + 0x28) + 0x18) <= unaff_w22);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(lVar6 + 0x10);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(lVar6 + 0x14);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar6 + 0x20);
    *(undefined8 *)(lVar5 + 0x18) = uVar7;
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    uVar7 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar6 + 0x38);
    *(undefined8 *)(lVar5 + 0x30) = uVar7;
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    uVar7 = *(undefined8 *)(lVar6 + 0x3c);
    *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(lVar6 + 0x44);
    *(undefined8 *)(lVar5 + 0x3c) = uVar7;
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined1 *)(lVar5 + 0x48) = *(undefined1 *)(lVar6 + 0x48);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0 ||
        (lVar5 == 0)))) break;
    *(undefined1 *)(lVar5 + 0x49) = *(undefined1 *)(lVar6 + 0x49);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    lVar5 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar6 == 0)) ||
       (lVar5 == 0)) break;
    *(undefined1 *)(lVar5 + 0x4a) = *(undefined1 *)(lVar6 + 0x4a);
    if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) break;
    unaff_x23 = FUN_04de82e0(lVar5,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (param_1 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), param_1 == 0))
    break;
  }
LAB_03f2b8c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_03f2b730:
  lVar6 = *(long *)(lVar5 + 0x28);
  if (lVar6 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar6 + 0x18) <= iVar9) {
    iVar9 = 0;
    goto 
    System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
    ;
  }
  lVar5 = FUN_04de82e0(lVar6,iVar9,*unaff_x28);
  if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x28) == 0)) ||
      (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar9,*unaff_x28), lVar6 == 0)) ||
     (lVar5 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar5 + 0x48) = *(undefined1 *)(lVar6 + 0x48);
  if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) goto LAB_03f2b8c0;
  lVar5 = FUN_04de82e0(lVar5,iVar9,*unaff_x28);
  if ((*(long *)(unaff_x21 + 0x28) == 0) ||
     ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar9,*unaff_x28), lVar6 == 0 ||
      (lVar5 == 0)))) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar5 + 0x49) = *(undefined1 *)(lVar6 + 0x49);
  if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x28), lVar5 == 0)) goto LAB_03f2b8c0;
  lVar5 = FUN_04de82e0(lVar5,iVar9,*unaff_x28);
  if (((*(long *)(unaff_x21 + 0x28) == 0) ||
      (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar9,*unaff_x28), lVar6 == 0)) ||
     (lVar5 == 0)) goto LAB_03f2b8c0;
  iVar9 = iVar9 + 1;
  *(undefined1 *)(lVar5 + 0x4a) = *(undefined1 *)(lVar6 + 0x4a);
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_03f2b8c0;
  goto LAB_03f2b730;

  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  :
  lVar5 = *(long *)(lVar5 + 0x20);
  if (lVar5 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar5 + 0x18) <= iVar9) {
    System_Array__IndexOfImpl<SerializedCommand>();
    System_Array__IndexOfImpl<Vector4>();
    FUN_03f26eac();
    return;
  }
  lVar5 = FUN_04de82e0(lVar5,iVar9,*unaff_x26);
  if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x20) == 0)) ||
      (lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),iVar9,*unaff_x26), lVar6 == 0)) ||
     (lVar5 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar5 + 400) = *(undefined1 *)(lVar6 + 400);
  if ((*unaff_x20 == 0) || (lVar5 = *(long *)(*unaff_x20 + 0x20), lVar5 == 0)) goto LAB_03f2b8c0;
  lVar5 = FUN_04de82e0(lVar5,iVar9,*unaff_x26);
  if ((*(long *)(unaff_x21 + 0x20) == 0) ||
     ((lVar6 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),iVar9,*unaff_x26), lVar6 == 0 ||
      (lVar5 == 0)))) goto LAB_03f2b8c0;
  iVar9 = iVar9 + 1;
  *(undefined1 *)(lVar5 + 0x191) = *(undefined1 *)(lVar6 + 0x191);
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_03f2b8c0;
  goto 
  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  ;
}


