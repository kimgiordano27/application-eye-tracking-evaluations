/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Bounds>$$GetUninitializedObject
ENTRY_POINT: 031adf30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x031ae018) */
/* WARNING: Removing unreachable block (ram,0x031ae014) */
/* WARNING: Removing unreachable block (ram,0x031ae05c) */

void Sirenix_Serialization_MinimalBaseFormatter<Bounds>__GetUninitializedObject
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong in_x9;
  int *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
code_r0x031adf30:
  if (!(bool)in_ZR) goto LAB_031adf1c;
LAB_031adf34:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
                    /* try { // try from 031adf5c to 032adfc3 has its CatchHandler @ 031ade60 */
    (*(code *)*puVar1)(&stack0x00000040);
    FUN_031ad928();
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_031aded8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031aded8:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_031ae008;
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_031adfe0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_031adf34;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_031adf1c:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x031adf30;
    }
                    /* try { // try from 031adf44 to 032adf5b has its CatchHandler @ 031adfd4 */
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_031adffc;
    }
  }
LAB_031adfe0:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031adffc:
  (*(code *)*puVar1)();
LAB_031ae008:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


