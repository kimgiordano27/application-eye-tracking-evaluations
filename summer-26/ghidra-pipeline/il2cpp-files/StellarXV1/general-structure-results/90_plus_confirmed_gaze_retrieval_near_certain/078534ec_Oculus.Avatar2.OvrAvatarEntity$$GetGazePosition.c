/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEntity$$GetGazePosition
ENTRY_POINT: 078534ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 120
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x078536a8) */
/* WARNING: Removing unreachable block (ram,0x0785384c) */

undefined8 Oculus_Avatar2_OvrAvatarEntity__GetGazePosition(void)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000018;
  
  do {
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0785353c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(unaff_x23,*unaff_x25,0);
LAB_0785353c:
    uVar7 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) goto LAB_0785369c;
      lVar5 = *in_stack_00000018;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_07853674;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *in_stack_00000018;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078535a0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x27,0);
LAB_078535a0:
    plVar3 = (long *)(*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    FUN_0784fc4c();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_078534e8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar3,*unaff_x28,1);
LAB_078534e8:
    (*(code *)*puVar2)(plVar3);
    unaff_x23 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_07853690;
    }
  }
LAB_07853674:
  puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_07853690:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
LAB_0785369c:
  uVar4 = FUN_0784969c();
  lVar5 = *(long *)(unaff_x22 + 0x10);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
      *puVar2 = uVar4;
      thunk_FUN_040ec700(puVar2,uVar4);
    }
    else {
      FUN_05c26d88();
    }
    lVar5 = FUN_0784969c();
    if (lVar5 != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_07853840;
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
        thunk_FUN_040ec700();
      }
      else {
        FUN_05c26d88();
      }
    }
    FUN_05c287cc();
    FUN_07850db0();
    FUN_07851608();
    if (unaff_x21 != (long *)0x0) {
      uVar4 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_078503ec(uVar4,uVar4);
      uVar4 = (**(code **)(*unaff_x20 + 0x178))();
      FUN_07851e58();
      return uVar4;
    }
  }
LAB_07853840:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


