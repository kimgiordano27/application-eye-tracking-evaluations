/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VxErrorSessionDoesNotHaveAudio_get
ENTRY_POINT: 08536400
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x08536718) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxErrorSessionDoesNotHaveAudio_get(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x22;
  long *unaff_x29;
  long in_stack_000002d8;
  long *in_stack_000002e0;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09327080) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_08536450;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_08536450:
  (*(code *)*puVar1)();
  if (in_stack_000002d8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_000002d8 + 0x48) = in_stack_00000328;
  *(undefined8 *)(in_stack_000002d8 + 0x40) = in_stack_00000320;
  if (in_stack_000002e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_000002e0;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09327080) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_085364d0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(in_stack_000002e0,*(long *)PTR_DAT_09327080,0);
LAB_085364d0:
  (*(code *)*puVar1)(in_stack_000002e0,&stack0x00000320,1,puVar1[1]);
  if (in_stack_000002d8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_000002d8 + 0x50) = unaff_x22;
  thunk_FUN_040ec700();
  lVar3 = *unaff_x29;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *unaff_x29;
  }
  puVar1 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar1[8];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar1 = *(undefined8 **)(*unaff_x29 + 0xb8);
    }
    uVar7 = *puVar1;
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ddd0);
    FUN_06ac88dc(lVar6,uVar7,*(undefined8 *)PTR_DAT_0932de10,0);
    plVar2 = (long *)(*(long *)(*unaff_x29 + 0xb8) + 0x40);
    *plVar2 = lVar6;
    thunk_FUN_040ec700(plVar2,lVar6);
  }
  if (in_stack_000002e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *in_stack_000002e0;
  lVar8 = *(long *)PTR_DAT_0932ddd8;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_085365d4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_040b1e00(in_stack_000002e0);
LAB_085365d4:
  lVar3 = thunk_FUN_04096bb4(*(undefined8 *)(lVar3 + 8),lVar8);
  (**(code **)(lVar3 + 8))(in_stack_000002e0,lVar6,lVar3);
  if (in_stack_000002e0 != (long *)0x0) {
    lVar3 = *in_stack_000002e0;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxXmppErrorCodesRangeStart_get;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(in_stack_000002e0,*(long *)PTR_DAT_092860c0,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VxXmppErrorCodesRangeStart_get:
    (*(code *)*puVar1)(in_stack_000002e0,puVar1[1]);
  }
  return;
}


