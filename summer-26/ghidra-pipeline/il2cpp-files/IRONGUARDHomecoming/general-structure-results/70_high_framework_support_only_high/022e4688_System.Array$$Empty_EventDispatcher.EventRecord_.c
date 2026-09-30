/*
FUNCTION_NAME: System.Array$$Empty<EventDispatcher.EventRecord>
ENTRY_POINT: 022e4688
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022e4800) */

uint System_Array__Empty<EventDispatcher_EventRecord>(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  
code_r0x022e4688:
  if (!(bool)in_ZR) goto LAB_022e4674;
LAB_022e468c:
  puVar3 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar3)();
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      uVar1 = 0;
      if (unaff_x19 == (long *)0x0) goto LAB_022e47bc;
LAB_022e475c:
      uVar2 = uVar1;
      lVar5 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_022e4794;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_022e4720;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022e4720:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),uVar4,*(undefined8 *)(unaff_x21 + 0x28));
    if ((uVar7 & 1) != 0) {
      uVar1 = uVar2;
      if (unaff_x19 != (long *)0x0) goto LAB_022e475c;
      goto LAB_022e47bc;
    }
    param_1 = *unaff_x19;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_022e468c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_022e4674:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x022e4688;
    }
    puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_022e47b0;
    }
  }
LAB_022e4794:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_022e47b0:
  (*(code *)*puVar3)();
LAB_022e47bc:
  return uVar2 & 1;
}


