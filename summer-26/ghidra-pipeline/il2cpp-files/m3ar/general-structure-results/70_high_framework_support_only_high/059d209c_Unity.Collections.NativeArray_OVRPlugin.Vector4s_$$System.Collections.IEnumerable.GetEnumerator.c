/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 059d209c
PROGRAM: m3ar-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x059d2400) */
/* WARNING: Removing unreachable block (ram,0x059d23fc) */
/* WARNING: Removing unreachable block (ram,0x059d2444) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__System_Collections_IEnumerable_GetEnumerator
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long *in_stack_000000a8;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_0406aaec(param_3);
  }
  lVar4 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_059d2238;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_059d2238:
  plVar3 = (long *)(*(code *)*puVar2)();
  puVar1 = PTR_DAT_08f65880;
  in_stack_00000050 = &stack0x000000a8;
  in_stack_00000048 = 0;
  do {
    in_stack_000000a8 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059d22ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar3,*(long *)puVar1,0);
LAB_059d22ac:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = in_stack_000000a8;
    if ((uVar6 & 1) == 0) {
      if (in_stack_000000a8 == (long *)0x0) goto LAB_059d23f0;
      lVar4 = *in_stack_000000a8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_059d23c8;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0406aaec(lVar4);
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_059d2330;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar3,lVar4,0);
LAB_059d2330:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
    memcpy(&stack0x00000058,&stack0x00000000,0x48);
    FUN_059d1d08();
    plVar3 = in_stack_000000a8;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_059d23e4;
    }
  }
LAB_059d23c8:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_000000a8,*(long *)PTR_DAT_08f65868,0);
LAB_059d23e4:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_059d23f0:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


