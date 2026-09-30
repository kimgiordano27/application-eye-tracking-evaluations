/*
FUNCTION_NAME: System.Array$$IndexOf<UICharInfo>
ENTRY_POINT: 022eef30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x022ef0d8) */

uint System_Array__IndexOf<UICharInfo>(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  uint unaff_w23;
  long *unaff_x25;
  
  do {
    param_1 = FUN_01ecaf44(param_1);
    do {
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == param_1) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_022eef80;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022eef80:
      (*(code *)*puVar2)();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = **(long **)(unaff_x20 + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_022eeff8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022eeff8:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) != 0) {
        uVar1 = unaff_w23;
        if (unaff_x19 == (long *)0x0) goto LAB_022ef088;
LAB_022ef028:
        unaff_w23 = uVar1;
        lVar3 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_022ef060;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_022ef048;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_022eef08;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_022eef08:
      unaff_w23 = (*(code *)*puVar2)();
      if ((unaff_w23 & 1) == 0) {
        unaff_w23 = 0;
        uVar1 = 0;
        if (unaff_x19 != (long *)0x0) goto LAB_022ef028;
        goto LAB_022ef088;
      }
      param_1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x30);
    } while ((*(byte *)(param_1 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_022ef048:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto System_Array__IndexOf<UILineInfo>;
    }
  }
LAB_022ef060:
  puVar2 = (undefined8 *)FUN_01ecb238();
System_Array__IndexOf<UILineInfo>:
  (*(code *)*puVar2)();
LAB_022ef088:
  return unaff_w23 & 1;
}


