/*
FUNCTION_NAME: Unity.Services.Friends.Http.ApiTelemetryScope$$Dispose
ENTRY_POINT: 0776f8e8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0776fbcc) */

void Unity_Services_Friends_Http_ApiTelemetryScope__Dispose(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long lVar9;
  int unaff_w22;
  long *unaff_x25;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  long in_stack_00000018;
  long *in_stack_00000048;
  
  thunk_FUN_03ae8be4();
  piVar4 = *(int **)(*unaff_x25 + 0xb8);
  if (unaff_w22 != *piVar4) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      piVar4 = *(int **)(*unaff_x25 + 0xb8);
    }
    if (unaff_w22 != piVar4[1]) goto LAB_0776f9a4;
  }
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined8 *)(in_stack_00000018 + 0x20) = unaff_x21;
  *(undefined8 *)(in_stack_00000018 + 0x28) = unaff_x20;
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *in_stack_00000048;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_084f1d60) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_0776f98c;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*(long *)PTR_DAT_084f1d60,4);
LAB_0776f98c:
                    /* try { // try from 0776f994 to 0786f9c3 has its CatchHandler @ 0776fee8 */
  (*(code *)*puVar2)(in_stack_00000048);
LAB_0776f9a4:
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  *(undefined4 *)(in_stack_00000018 + 0x30) = unaff_w19;
  *(undefined4 *)(in_stack_00000018 + 0x34) = unaff_s11;
  *(undefined4 *)(in_stack_00000018 + 0x38) = unaff_s10;
  *(undefined4 *)(in_stack_00000018 + 0x3c) = unaff_s9;
  *(undefined4 *)(in_stack_00000018 + 0x40) = unaff_s8;
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *in_stack_00000048;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 0776f9d0 to 0786fa07 has its CatchHandler @ 0776ff90 */
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_084f0f50) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
        goto LAB_0776fa18;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*(long *)PTR_DAT_084f0f50,0xb);
LAB_0776fa18:
  (*(code *)*puVar2)(in_stack_00000048,0,puVar2[1]);
  puVar1 = Gley_TrafficSystem_Internal_PriorityIntersectionData_var;
  lVar5 = *(long *)Gley_TrafficSystem_Internal_PriorityIntersectionData_var;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = *(undefined8 **)(lVar5 + 0xb8);
  lVar7 = puVar2[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar2 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar8 = *puVar2;
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Runtime_InteropServices_PreserveSigAttribute_var);
    FUN_056e0a20(lVar7,uVar8,*(undefined8 *)Gley_TrafficSystem_Internal_PriorityCrossingData_var,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar7;
    thunk_FUN_03afed3c(plVar3,lVar7);
  }
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar5 = *in_stack_00000048;
  lVar9 = *(long *)UnityEngine_InputSystem_Interactions_PressInteraction_var;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar9 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar9 + 0x50)) * 0x10 + 0x138;
        goto FUN_0776fb0c;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_03ac43c4(in_stack_00000048);
FUN_0776fb0c:
  lVar5 = thunk_FUN_03aa9644(*(undefined8 *)(lVar5 + 8),lVar9);
  (**(code **)(lVar5 + 8))(in_stack_00000048,lVar7,lVar5);
  if (in_stack_00000048 != (long *)0x0) {
    lVar5 = *in_stack_00000048;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08488550) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0776fb90;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*(long *)PTR_DAT_08488550,0);
LAB_0776fb90:
    (*(code *)*puVar2)(in_stack_00000048,puVar2[1]);
  }
  return;
}


