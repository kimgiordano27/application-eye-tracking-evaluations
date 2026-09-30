/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$GetValue
ENTRY_POINT: 051bb4f8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>__GetValue
                (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_051bb52c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_0322c1e8();
LAB_051bb52c:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 2) {
    uVar3 = 0;
  }
  else {
    plVar6 = *(long **)(unaff_x19 + 0x20);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar4 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_051bb59c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*unaff_x21,0);
LAB_051bb59c:
    uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((int)uVar3 != 1) {
      uVar3 = (ulong)(*(long *)(unaff_x19 + 0x18) != 0);
    }
  }
  return uVar3;
}


