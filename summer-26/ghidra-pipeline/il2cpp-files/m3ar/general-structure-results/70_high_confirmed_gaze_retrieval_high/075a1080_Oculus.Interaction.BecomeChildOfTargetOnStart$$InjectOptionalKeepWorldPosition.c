/*
FUNCTION_NAME: Oculus.Interaction.BecomeChildOfTargetOnStart$$InjectOptionalKeepWorldPosition
ENTRY_POINT: 075a1080
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;frame_behavior;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose
*/


void Oculus_Interaction_BecomeChildOfTargetOnStart__InjectOptionalKeepWorldPosition(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08fa6510);
  FUN_0403162c(PTR_DAT_08fa7660);
  FUN_0403162c(PTR_DAT_08fa7668);
  *(undefined1 *)(unaff_x21 + 0x66d) = 1;
  puVar2 = PTR_DAT_08fa6510;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08fa6510) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto Oculus_Interaction_HandConfidenceVisual__Start;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20();
Oculus_Interaction_HandConfidenceVisual__Start:
  uVar10 = (*(code *)*puVar5)();
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08f656c8 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = FUN_07475db8(0);
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_075a118c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20();
LAB_075a118c:
    uStack000000000000000c = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_08f65618;
    uVar7 = thunk_FUN_0406db0c(*(undefined8 *)(PTR_DAT_08f65618 + 0x48),(long)&stack0x00000008 + 4);
    lVar9 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_075a1208;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20();
LAB_075a1208:
    uStack0000000000000008 = (*(code *)*puVar5)();
    uVar8 = thunk_FUN_0406db0c(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
    FUN_075cc5bc(*(undefined8 *)PTR_DAT_08fa7668,uVar6,uVar7,uVar8,0);
    unaff_x20 = FUN_0735c7b4();
  }
  uVar6 = (**(code **)(*unaff_x19 + 0x278))();
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto LAB_075a12c8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_075a12c8:
  puVar1 = PTR_DAT_08fa7660;
  uVar3 = (*(code *)*puVar5)();
  lVar9 = *unaff_x19;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_075a1330;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_075a1330:
  uVar4 = (*(code *)*puVar5)();
  uVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
  FUN_075fb108(uVar7,unaff_x20,0,uVar6,uVar3,uVar4,0);
  FUN_075a1390();
  return;
}


