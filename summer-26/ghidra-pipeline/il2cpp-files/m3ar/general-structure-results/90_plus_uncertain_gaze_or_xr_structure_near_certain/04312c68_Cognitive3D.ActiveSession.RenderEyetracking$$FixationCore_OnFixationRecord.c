/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$FixationCore_OnFixationRecord
ENTRY_POINT: 04312c68
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_6
*/


void Cognitive3D_ActiveSession_RenderEyetracking__FixationCore_OnFixationRecord
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long lVar11;
  ulong uVar12;
  long *unaff_x26;
  long unaff_x28;
  float fVar13;
  long in_stack_00000008;
  int *in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  int in_stack_00000030;
  long *in_stack_00000040;
  ulong in_stack_00000048;
  undefined4 uStack000000000000005c;
  undefined4 *in_stack_00000068;
  
  if (param_2 == 1) {
    plVar6 = (long *)__cxa_begin_catch(param_1);
    lVar11 = *plVar6;
    in_stack_00000008 = lVar11;
    __cxa_end_catch();
    puVar1 = PTR_DAT_08f65868;
    if (*in_stack_00000010 < 0) {
      plVar6 = (long *)thunk_FUN_0406ddbc(*(undefined8 *)(*in_stack_00000018 + 0x18),
                                          *(undefined8 *)PTR_DAT_08f65868);
      *in_stack_00000020 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0431297c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar1,0);
LAB_0431297c:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
      }
    }
    if (lVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04031884(lVar11);
    }
    *(undefined8 *)(in_stack_00000068 + 6) = 0;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    fVar13 = *(float *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08f688c0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar4 = FUN_074fc844((double)fVar13,0);
    uVar5 = FUN_08589d6c();
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    _in_stack_00000040 = FUN_07de76d4(uVar4,0,8,uVar5,0,0);
    if (DAT_09539e0c == '\0') {
      FUN_0403162c(PTR_DAT_08f67a58);
      DAT_09539e0c = '\x01';
    }
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_09539e0d == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0d = '\x01';
    }
    plVar6 = in_stack_00000040;
    if (in_stack_00000040 != (long *)0x0) {
      lVar11 = *in_stack_00000040;
      uVar12 = in_stack_00000048 & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar3 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04312ab8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000040,*(long *)PTR_DAT_08f67c08,0);
LAB_04312ab8:
      iVar2 = (*(code *)*puVar3)(plVar6,uVar12,puVar3[1]);
      if (iVar2 == 0) {
        uStack000000000000005c = 1;
        *in_stack_00000068 = 1;
        uVar4 = *(undefined8 *)PTR_DAT_08f736e0;
        *(undefined1 (*) [16])(in_stack_00000068 + 8) = _in_stack_00000040;
        FUN_04322a74(in_stack_00000068 + 2,&stack0x00000040,in_stack_00000068,uVar4);
        return;
      }
    }
    if (*(char *)(unaff_x28 + 0xe0e) == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      *(undefined1 *)(unaff_x28 + 0xe0e) = 1;
    }
    plVar6 = in_stack_00000040;
    if (in_stack_00000040 != (long *)0x0) {
      lVar11 = *in_stack_00000040;
      uVar12 = in_stack_00000048 & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_04312b4c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000040,*(long *)PTR_DAT_08f67c08,2);
LAB_04312b4c:
      (*(code *)*puVar3)(plVar6,uVar12,puVar3[1]);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    FUN_04311a44();
    *in_stack_00000068 = 0xfffffffe;
    FUN_04174940(in_stack_00000068 + 2,0);
  }
  else {
    FUN_03a9194c(&stack0x00000008);
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_0412026c(param_1);
    }
    puVar3 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar4 = thunk_FUN_04097b88(PTR_DAT_08f65af8);
    uVar9 = thunk_FUN_04093818(uVar4,*(undefined8 *)*puVar3);
    if ((uVar9 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&PTR_PTR_08931438,0);
    }
    uVar4 = *puVar3;
    *(undefined8 *)(&stack0x00000028 + (long)in_stack_00000030 * 8) = uVar4;
    in_stack_00000030 = in_stack_00000030 + 1;
    __cxa_end_catch();
    *in_stack_00000068 = 0xfffffffe;
    FUN_0417482c(in_stack_00000068 + 2,uVar4,0);
  }
  return;
}


