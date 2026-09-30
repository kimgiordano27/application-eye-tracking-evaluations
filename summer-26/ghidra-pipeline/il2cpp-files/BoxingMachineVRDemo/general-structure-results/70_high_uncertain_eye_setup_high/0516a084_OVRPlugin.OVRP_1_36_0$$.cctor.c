/*
FUNCTION_NAME: OVRPlugin.OVRP_1_36_0$$.cctor
ENTRY_POINT: 0516a084
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516a11c) */

void OVRPlugin_OVRP_1_36_0___cctor(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long lVar7;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  puVar1 = PTR_DAT_067823f0;
  if (param_2 != 1) {
    FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_06782748);
                    /* WARNING: Subroutine does not return */
    FUN_02e42304(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar7 = *plVar4;
  __cxa_end_catch();
  FUN_04b3a944(&stack0x00000030,*(undefined8 *)PTR_DAT_06782748);
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar7);
  }
  if (unaff_x22 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x22 + 0x238))();
    if (uVar2 < 0x12) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x30780U) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        lVar7 = FUN_05167dbc();
        if (lVar7 == 0) {
          return;
        }
        if (unaff_x19 != (long *)0x0) {
          lVar7 = *unaff_x19;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x28) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_05169f50;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05169f50:
          (*(code *)*puVar3)();
          if (unaff_x20 != (long *)0x0) {
            lVar7 = *unaff_x20;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                  goto LAB_05169fb8;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05169fb8:
            (*(code *)*puVar3)();
            return;
          }
        }
        goto LAB_0516a078;
      }
      if (uVar2 == 0xb) {
        return;
      }
      if (uVar2 == 0xd) {
        if (unaff_x21 == (long *)0x0) goto LAB_0516a078;
        goto LAB_0516a008;
      }
    }
    if (unaff_x21 != (long *)0x0) {
      (**(code **)(*unaff_x21 + 0x1d8))();
      FUN_05167054(in_stack_00000000);
      (**(code **)(*unaff_x21 + 0x1e8))();
LAB_0516a008:
      (**(code **)(*unaff_x21 + 0x1c8))();
      (**(code **)(*unaff_x21 + 0x208))();
      return;
    }
  }
LAB_0516a078:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


