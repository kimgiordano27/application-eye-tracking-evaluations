/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 01b2d424
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update
          (undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  if ((DAT_0247c75d & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234d9d8);
    DAT_0247c75d = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (*param_2 != lVar3) {
      in_stack_00000018 = *(undefined4 *)(param_1 + 1);
      in_stack_00000010 = *param_1;
      lVar3 = FUN_00e5db00(*(undefined8 *)(param_4 + 0x20));
      uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8),&stack0x00000010);
      plVar8 = (long *)thunk_FUN_0105d828(uVar5,0);
      FUN_00e5db80();
      uVar5 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      uVar11 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
      uVar5 = FUN_01c42574(uVar11,uVar5,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar11 = thunk_FUN_010400dc();
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0234d120);
      FUN_01c5e198(uVar11,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar11,param_4);
    }
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0(param_2);
    }
    puVar4 = (undefined4 *)thunk_FUN_01040230();
    uVar1 = *puVar4;
    uVar11 = *(undefined8 *)(puVar4 + 1);
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)param_1);
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    uVar5 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000010);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar1);
    lVar3 = *(long *)(param_4 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    uVar6 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar3 + 0xc0),&stack0x00000008);
    puVar2 = PTR_DAT_0234d9d8;
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar3 = *param_3;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0234d9d8) {
          puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01b2d5a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_0103c348(param_3,*(long *)PTR_DAT_0234d9d8,0);
LAB_01b2d5a4:
    uVar5 = (*(code *)*puVar7)(param_3,uVar5,uVar6,puVar7[1]);
    if ((int)uVar5 == 0) {
      in_stack_00000010 = *(undefined8 *)((long)param_1 + 4);
      lVar3 = *(long *)(param_4 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
      lVar3 = *(long *)(param_4 + 0x20);
      in_stack_00000008 = uVar11;
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      uVar11 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000008);
      lVar3 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01b2d664;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348(param_3,*(long *)puVar2,0);
LAB_01b2d664:
      uVar5 = (*(code *)*puVar7)(param_3,uVar5,uVar11,puVar7[1]);
    }
  }
  return uVar5;
}


