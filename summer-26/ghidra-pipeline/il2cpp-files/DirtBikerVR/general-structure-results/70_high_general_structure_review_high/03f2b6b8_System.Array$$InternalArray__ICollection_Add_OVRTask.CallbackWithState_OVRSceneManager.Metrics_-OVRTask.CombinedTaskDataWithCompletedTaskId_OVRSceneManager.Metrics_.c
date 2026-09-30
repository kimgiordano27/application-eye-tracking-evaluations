/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRTask.CallbackWithState<OVRSceneManager.Metrics,-OVRTask.CombinedTaskDataWithCompletedTaskId<OVRSceneManager.Metrics>>>
ENTRY_POINT: 03f2b6b8
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


void System_Array__InternalArray__ICollection_Add<OVRTask_CallbackWithState<OVRSceneManager_Metrics,_OVRTask_CombinedTaskDataWithCompletedTaskId<OVRSceneManager_Metrics>>>
               (long param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  int iVar9;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while ((lVar6 = FUN_04de82e0(param_1,param_2,param_3), lVar6 != 0 && (unaff_x23 != 0))) {
    *(undefined4 *)(unaff_x23 + 0x94) = *(undefined4 *)(lVar6 + 0x94);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
                    /* try { // try from 03f2b6f4 to 0402b6f7 has its CatchHandler @ 03f2b8c4 */
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined4 *)(lVar6 + 0x98) = *(undefined4 *)(lVar7 + 0x98);
    do {
      unaff_w22 = unaff_w22 + 1;
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_03f2b8c0;
      if (*(int *)(*(long *)(unaff_x21 + 0x20) + 0x18) <= (int)unaff_w22) {
        lVar6 = *unaff_x20;
        if (lVar6 == 0) goto LAB_03f2b8c0;
        iVar9 = 0;
        goto LAB_03f2b730;
      }
      if (*unaff_x20 == 0) goto LAB_03f2b8c0;
      lVar6 = *(long *)(*unaff_x20 + 0x20);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e838);
      FUN_03f87a60(uVar3,0);
      if (lVar6 == 0) goto LAB_03f2b8c0;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_0848e7f0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_03f2b8c0;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *puVar4 = uVar3;
        thunk_FUN_03afed3c(puVar4,uVar3);
      }
      else {
        FUN_04de85b0(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0))
      goto LAB_03f2b8c0;
      lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x26);
      if ((*(long *)(unaff_x21 + 0x20) == 0) ||
         ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar7 == 0 ||
          (lVar6 == 0)))) goto LAB_03f2b8c0;
      *(undefined1 *)(lVar6 + 0x160) = *(undefined1 *)(lVar7 + 0x160);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0))
      goto LAB_03f2b8c0;
      lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x26);
      if (((*(long *)(unaff_x21 + 0x20) == 0) ||
          (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar7 == 0)) ||
         (lVar6 == 0)) goto LAB_03f2b8c0;
      *(undefined1 *)(lVar6 + 400) = *(undefined1 *)(lVar7 + 400);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0))
      goto LAB_03f2b8c0;
      lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x26);
      if ((*(long *)(unaff_x21 + 0x20) == 0) ||
         ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar7 == 0 ||
          (lVar6 == 0)))) goto LAB_03f2b8c0;
      *(undefined1 *)(lVar6 + 0x191) = *(undefined1 *)(lVar7 + 0x191);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0))
      goto LAB_03f2b8c0;
      lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x26);
      if (((*(long *)(unaff_x21 + 0x20) == 0) ||
          (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar7 == 0)) ||
         (lVar6 == 0)) goto LAB_03f2b8c0;
      *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(lVar7 + 0x198);
      thunk_FUN_03afed3c(lVar6 + 0x198);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0))
      goto LAB_03f2b8c0;
      lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x26);
      if ((*(long *)(unaff_x21 + 0x20) == 0) ||
         ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar7 == 0 ||
          (lVar6 == 0)))) goto LAB_03f2b8c0;
      *(undefined8 *)(lVar6 + 0x290) = *(undefined8 *)(lVar7 + 0x290);
      if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0))
      goto LAB_03f2b8c0;
      lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x26);
      if (((*(long *)(unaff_x21 + 0x20) == 0) ||
          (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),unaff_w22,*unaff_x26), lVar7 == 0)) ||
         (lVar6 == 0)) goto LAB_03f2b8c0;
      *(undefined8 *)(lVar6 + 0x2a0) = *(undefined8 *)(lVar7 + 0x2a0);
      if (*unaff_x20 == 0) goto LAB_03f2b8c0;
      lVar6 = *(long *)(*unaff_x20 + 0x28);
      uVar3 = *(undefined8 *)PTR_DAT_0848e758;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar3 = FUN_0675ff58(uVar3,0);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486738);
      }
      plVar5 = (long *)FUN_07ca3718(uVar3,0);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848e840);
      if (plVar5 == (long *)0x0) {
LAB_03f2aebc:
        plVar5 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_0848e760 + 0x130);
        if (*(byte *)(*plVar5 + 0x130) < bVar1) goto LAB_03f2aebc;
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0848e760
           ) {
          plVar5 = (long *)0x0;
        }
      }
      FUN_03f1fda0(uVar3,plVar5);
      if (lVar6 == 0) goto LAB_03f2b8c0;
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *(long *)PTR_DAT_0848e800;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_03f2b8c0;
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
        *puVar4 = uVar3;
        thunk_FUN_03afed3c(puVar4,uVar3);
      }
      else {
        FUN_04de85b0(lVar6,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(unaff_x21 + 0x28) == 0) goto LAB_03f2b8c0;
    } while (*(int *)(*(long *)(unaff_x21 + 0x28) + 0x18) <= (int)unaff_w22);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar7 + 0x10);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(lVar7 + 0x14);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    uVar3 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
    *(undefined8 *)(lVar6 + 0x18) = uVar3;
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    uVar3 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar7 + 0x38);
    *(undefined8 *)(lVar6 + 0x30) = uVar3;
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    uVar3 = *(undefined8 *)(lVar7 + 0x3c);
    *(undefined4 *)(lVar6 + 0x44) = *(undefined4 *)(lVar7 + 0x44);
    *(undefined8 *)(lVar6 + 0x3c) = uVar3;
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined1 *)(lVar6 + 0x48) = *(undefined1 *)(lVar7 + 0x48);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined1 *)(lVar6 + 0x49) = *(undefined1 *)(lVar7 + 0x49);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined1 *)(lVar6 + 0x4a) = *(undefined1 *)(lVar7 + 0x4a);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined4 *)(lVar6 + 0x4c) = *(undefined4 *)(lVar7 + 0x4c);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(lVar7 + 0x50);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined4 *)(lVar6 + 0x54) = *(undefined4 *)(lVar7 + 0x54);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined4 *)(lVar6 + 0x58) = *(undefined4 *)(lVar7 + 0x58);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined1 *)(lVar6 + 0x5c) = *(undefined1 *)(lVar7 + 0x5c);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(lVar7 + 0x60);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined4 *)(lVar6 + 100) = *(undefined4 *)(lVar7 + 100);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined1 *)(lVar6 + 0x68) = *(undefined1 *)(lVar7 + 0x68);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined1 *)(lVar6 + 0x69) = *(undefined1 *)(lVar7 + 0x69);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined1 *)(lVar6 + 0x6a) = *(undefined1 *)(lVar7 + 0x6a);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar7 + 0x70);
    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x70));
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) break;
    uVar10 = *(undefined8 *)(lVar7 + 0x78);
    uVar3 = thunk_FUN_03ac74bc(*unaff_x29);
    FUN_04e86ce4(uVar3,uVar10,*unaff_x27);
    if (lVar6 == 0) break;
    *(undefined8 *)(lVar6 + 0x78) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x78),uVar3);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) break;
    uVar10 = *(undefined8 *)(lVar7 + 0x80);
    uVar3 = thunk_FUN_03ac74bc(*unaff_x29);
    FUN_04e86ce4(uVar3,uVar10,*unaff_x27);
    if (lVar6 == 0) break;
    *(undefined8 *)(lVar6 + 0x80) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x80),uVar3);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined1 *)(lVar6 + 0x88) = *(undefined1 *)(lVar7 + 0x88);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if (((*(long *)(unaff_x21 + 0x28) == 0) ||
        (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0)) ||
       (lVar6 == 0)) break;
    *(undefined4 *)(lVar6 + 0x8c) = *(undefined4 *)(lVar7 + 0x8c);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    lVar6 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    if ((*(long *)(unaff_x21 + 0x28) == 0) ||
       ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),unaff_w22,*unaff_x28), lVar7 == 0 ||
        (lVar6 == 0)))) break;
    *(undefined4 *)(lVar6 + 0x90) = *(undefined4 *)(lVar7 + 0x90);
    if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) break;
    unaff_x23 = FUN_04de82e0(lVar6,unaff_w22,*unaff_x28);
    param_1 = *(long *)(unaff_x21 + 0x28);
    if (param_1 == 0) break;
    param_3 = *unaff_x28;
    param_2 = (ulong)unaff_w22;
  }
LAB_03f2b8c0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_03f2b730:
  lVar7 = *(long *)(lVar6 + 0x28);
  if (lVar7 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar7 + 0x18) <= iVar9) {
    iVar9 = 0;
    goto 
    System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
    ;
  }
  lVar6 = FUN_04de82e0(lVar7,iVar9,*unaff_x28);
  if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x28) == 0)) ||
      (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar9,*unaff_x28), lVar7 == 0)) ||
     (lVar6 == 0)) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar6 + 0x48) = *(undefined1 *)(lVar7 + 0x48);
  if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) goto LAB_03f2b8c0;
  lVar6 = FUN_04de82e0(lVar6,iVar9,*unaff_x28);
  if ((*(long *)(unaff_x21 + 0x28) == 0) ||
     ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar9,*unaff_x28), lVar7 == 0 ||
      (lVar6 == 0)))) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar6 + 0x49) = *(undefined1 *)(lVar7 + 0x49);
  if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x28), lVar6 == 0)) goto LAB_03f2b8c0;
  lVar6 = FUN_04de82e0(lVar6,iVar9,*unaff_x28);
  if (((*(long *)(unaff_x21 + 0x28) == 0) ||
      (lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x28),iVar9,*unaff_x28), lVar7 == 0)) ||
     (lVar6 == 0)) goto LAB_03f2b8c0;
  iVar9 = iVar9 + 1;
  *(undefined1 *)(lVar6 + 0x4a) = *(undefined1 *)(lVar7 + 0x4a);
  lVar6 = *unaff_x20;
  if (lVar6 == 0) goto LAB_03f2b8c0;
  goto LAB_03f2b730;

  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  :
  lVar6 = *(long *)(lVar6 + 0x20);
  if (lVar6 == 0) goto LAB_03f2b8c0;
  if (*(int *)(lVar6 + 0x18) <= iVar9) {
    System_Array__IndexOfImpl<SerializedCommand>();
    System_Array__IndexOfImpl<Vector4>();
    FUN_03f26eac();
    return;
  }
  lVar6 = FUN_04de82e0(lVar6,iVar9,*unaff_x26);
  if (((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x20) == 0)) ||
     ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),iVar9,*unaff_x26), lVar7 == 0 ||
      (lVar6 == 0)))) goto LAB_03f2b8c0;
  *(undefined1 *)(lVar6 + 400) = *(undefined1 *)(lVar7 + 400);
  if ((*unaff_x20 == 0) || (lVar6 = *(long *)(*unaff_x20 + 0x20), lVar6 == 0)) goto LAB_03f2b8c0;
  lVar6 = FUN_04de82e0(lVar6,iVar9,*unaff_x26);
  if ((*(long *)(unaff_x21 + 0x20) == 0) ||
     ((lVar7 = FUN_04de82e0(*(long *)(unaff_x21 + 0x20),iVar9,*unaff_x26), lVar7 == 0 ||
      (lVar6 == 0)))) goto LAB_03f2b8c0;
  iVar9 = iVar9 + 1;
  *(undefined1 *)(lVar6 + 0x191) = *(undefined1 *)(lVar7 + 0x191);
  lVar6 = *unaff_x20;
  if (lVar6 == 0) goto LAB_03f2b8c0;
  goto 
  System_Array__InternalArray__ICollection_Add<ConnectionDataMap_ConnectionSlot<DTLSLayer_DTLSConnectionData>>
  ;
}


