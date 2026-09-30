/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.Vector3f>$$IndexOf
ENTRY_POINT: 05b847e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05b84acc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Vector3f>__IndexOf
                 (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar13;
  int iVar14;
  int iStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  long lStack0000000000000038;
  
  uStack0000000000000030 = param_4;
  lStack0000000000000038 = param_2;
  if ((*(byte *)(unaff_x21 + 0x7b2) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f69e90);
    FUN_0403162c(PTR_DAT_08f8ecf0);
    FUN_0403162c(PTR_DAT_08f8b188);
    FUN_0403162c(PTR_DAT_08f860d0);
    FUN_0403162c(PTR_DAT_08f8d7d0);
    *(undefined1 *)(unaff_x21 + 0x7b2) = 1;
  }
  in_stack_00000028 = 0;
  iStack0000000000000024 = 0;
  if (DAT_0953f624 == '\0') {
    FUN_0403162c(PTR_DAT_08f8c4b0);
    DAT_0953f624 = '\x01';
  }
  cVar4 = FUN_072717f8(param_2,0);
  if (cVar4 == -0x40) {
    FUN_04cfb06c(param_2,1,*(undefined8 *)PTR_DAT_08f8c4b0);
    return (long *)0x0;
  }
  if (param_3 != 0) {
    uVar13 = *(undefined8 *)(param_3 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_08f8b188 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    plVar6 = (long *)System_Threading_Tasks_Task__FromCanceled<ValueTuple<object,_int,_int>>
                               (uVar13,*(undefined8 *)PTR_DAT_08f8ecf0);
    iVar5 = FUN_072724a8(param_2,0);
    plVar7 = (long *)FUN_04a41b0c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8)
                                 );
    if (*(long *)(param_3 + 0x28) != 0) {
      FUN_07276f10(*(long *)(param_3 + 0x28),param_2,0);
      puVar3 = PTR_DAT_08f8d7d0;
      puVar2 = PTR_DAT_08f860d0;
      puVar1 = PTR_DAT_08f69e90;
      if (0 < iVar5) {
        iVar14 = 0;
        do {
          in_stack_00000028 = *(undefined8 *)(lStack0000000000000038 + 0x80);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_07547efc(&stack0x00000028,0);
          lVar10 = lStack0000000000000038;
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_05b849d0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar3,1);
LAB_05b849d0:
          uVar13 = (*(code *)*puVar8)(plVar6,lVar10,param_3,puVar8[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Vector3f>__Equals;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar8 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar2,2);
System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_Vector3f>__Equals:
          (*(code *)*puVar8)(plVar7,uVar13,puVar8[1]);
          iVar14 = iVar14 + 1;
        } while (iVar14 != iVar5);
      }
      iStack0000000000000024 = *(int *)(lStack0000000000000038 + 0x88);
      if (iStack0000000000000024 != -0x80000000) {
        *(int *)(lStack0000000000000038 + 0x88) = iStack0000000000000024 + -1;
        return plVar7;
      }
      uVar13 = FUN_0403189c();
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar13,uStack0000000000000030);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


