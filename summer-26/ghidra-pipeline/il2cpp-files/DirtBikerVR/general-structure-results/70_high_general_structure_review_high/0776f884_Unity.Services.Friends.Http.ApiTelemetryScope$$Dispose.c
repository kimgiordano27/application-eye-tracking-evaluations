/*
FUNCTION_NAME: Unity.Services.Friends.Http.ApiTelemetryScope$$Dispose
ENTRY_POINT: 0776f884
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0776fbcc) */

void Unity_Services_Friends_Http_ApiTelemetryScope__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int in_w8;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 unaff_w19;
  undefined8 unaff_x20;
  long lVar9;
  ulong unaff_x21;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x25;
  long unaff_x27;
  long unaff_x28;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  long in_stack_00000018;
  long *in_stack_00000048;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  if (*(char *)(unaff_x27 + 0x102) == '\0') {
    FUN_03a8a718(PTR_DAT_08493f78);
    *(undefined1 *)(unaff_x27 + 0x102) = 1;
  }
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (*(char *)(unaff_x28 + 0x103) == '\0') {
    FUN_03a8a718(PTR_DAT_08493f78);
    *(undefined1 *)(unaff_x28 + 0x103) = 1;
  }
  uVar1 = (uint)unaff_x21 & 0xffff0000;
  if ((unaff_x21 & 0xffff0000) != 0) {
    lVar3 = *unaff_x25;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *unaff_x25;
    }
    puVar6 = *(uint **)(lVar3 + 0xb8);
    if (uVar1 != *puVar6) {
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar6 = *(uint **)(*unaff_x25 + 0xb8);
      }
      if (uVar1 != puVar6[1]) goto LAB_0776f9a4;
    }
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(ulong *)(in_stack_00000018 + 0x20) = unaff_x21;
    *(undefined8 *)(in_stack_00000018 + 0x28) = unaff_x20;
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *in_stack_00000048;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084f1d60) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0776f98c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*(long *)PTR_DAT_084f1d60,4);
LAB_0776f98c:
    (*(code *)*puVar4)(in_stack_00000048);
  }
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
  lVar3 = *in_stack_00000048;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084f0f50) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_0776fa18;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*(long *)PTR_DAT_084f0f50,0xb);
LAB_0776fa18:
  (*(code *)*puVar4)(in_stack_00000048,0,puVar4[1]);
  puVar2 = Gley_TrafficSystem_Internal_PriorityIntersectionData_var;
  lVar3 = *(long *)Gley_TrafficSystem_Internal_PriorityIntersectionData_var;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar9 = puVar4[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar4;
    lVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Runtime_InteropServices_PreserveSigAttribute_var);
    FUN_056e0a20(lVar9,uVar10,*(undefined8 *)Gley_TrafficSystem_Internal_PriorityCrossingData_var,0)
    ;
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_03afed3c(plVar5,lVar9);
  }
  if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = *in_stack_00000048;
  lVar11 = *(long *)UnityEngine_InputSystem_Interactions_PressInteraction_var;
  uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto FUN_0776fb0c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar3 = FUN_03ac43c4(in_stack_00000048);
FUN_0776fb0c:
  lVar3 = thunk_FUN_03aa9644(*(undefined8 *)(lVar3 + 8),lVar11);
  (**(code **)(lVar3 + 8))(in_stack_00000048,lVar9,lVar3);
  if (in_stack_00000048 != (long *)0x0) {
    lVar3 = *in_stack_00000048;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08488550) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0776fb90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,*(long *)PTR_DAT_08488550,0);
LAB_0776fb90:
    (*(code *)*puVar4)(in_stack_00000048,puVar4[1]);
  }
  return;
}


