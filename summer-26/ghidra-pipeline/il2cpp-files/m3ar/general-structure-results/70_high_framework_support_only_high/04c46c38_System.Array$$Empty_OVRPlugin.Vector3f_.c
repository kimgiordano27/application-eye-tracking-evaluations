/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector3f>
ENTRY_POINT: 04c46c38
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_Vector3f>(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar7;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000178;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_0406aaec(param_3);
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04c46c90;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_04c46c90:
  uVar5 = (*(code *)*puVar1)();
  plVar3 = in_stack_00000178;
  if ((uVar5 & 1) == 0) {
    *(undefined4 *)(unaff_x19 + 0xb4) = 4;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
    lVar2 = thunk_FUN_0406ddbc(in_stack_00000178,DAT_09151d58);
    lVar4 = DAT_09151d58;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    plVar3 = (long *)thunk_FUN_0406ddbc(plVar3,DAT_09151d58);
    uVar7 = thunk_FUN_0406ddbc(uVar7,DAT_09151d58);
    lVar2 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_04c46f88;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar3,lVar4,4);
LAB_04c46f88:
    _in_stack_00000060 = (*(code *)*puVar1)(plVar3,uVar7,puVar1[1]);
    plVar3 = in_stack_00000178;
    if (in_stack_00000178 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar2 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c47038;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(plVar3,lVar4,0);
LAB_04c47038:
    (*(code *)*puVar1)(plVar3);
    FUN_08629918(&stack0x00000060,0);
  }
  return;
}


