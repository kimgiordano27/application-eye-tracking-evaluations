/*
FUNCTION_NAME: FUN_05b847c8
ENTRY_POINT: 05b847c8
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b84acc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_05b847c8(undefined8 param_1,long param_2,long param_3,long param_4)

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
  undefined8 uVar13;
  int iVar14;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  local_60 = param_4;
  local_58 = param_2;
  if ((DAT_095407b2 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f69e90);
    FUN_0403162c(PTR_DAT_08f8ecf0);
    FUN_0403162c(PTR_DAT_08f8b188);
    FUN_0403162c(PTR_DAT_08f860d0);
    FUN_0403162c(PTR_DAT_08f8d7d0);
    DAT_095407b2 = 1;
  }
  local_68 = 0;
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
    plVar7 = (long *)FUN_04a41b0c(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8));
    if (*(long *)(param_3 + 0x28) != 0) {
      FUN_07276f10(*(long *)(param_3 + 0x28),param_2,0);
      puVar3 = PTR_DAT_08f8d7d0;
      puVar2 = PTR_DAT_08f860d0;
      puVar1 = PTR_DAT_08f69e90;
      if (0 < iVar5) {
        iVar14 = 0;
        do {
          local_68 = *(undefined8 *)(local_58 + 0x80);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_07547efc(&local_68,0);
          lVar10 = local_58;
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
      if (*(int *)(local_58 + 0x88) != -0x80000000) {
        *(int *)(local_58 + 0x88) = *(int *)(local_58 + 0x88) + -1;
        return plVar7;
      }
      uVar13 = FUN_0403189c();
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar13,local_60);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


