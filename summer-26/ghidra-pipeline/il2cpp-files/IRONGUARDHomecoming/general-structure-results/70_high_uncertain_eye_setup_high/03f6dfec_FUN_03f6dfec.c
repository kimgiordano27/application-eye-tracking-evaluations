/*
FUNCTION_NAME: FUN_03f6dfec
ENTRY_POINT: 03f6dfec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f6e120) */

uint FUN_03f6dfec(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  uint uVar9;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
code_r0x03f6dfec:
  do {
    plVar3 = (long *)(*(code *)*param_1)();
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar3 + 0x248))
                      (plVar3,*(undefined8 *)(*unaff_x21 + 0x50),*(undefined8 *)(*plVar3 + 0x250));
    *unaff_x19 = uVar4;
    thunk_FUN_01f51358();
    uVar4 = *unaff_x19;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_03583338(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      uVar9 = 7;
      uVar1 = 7;
      uVar2 = unaff_w22;
      if (unaff_x20 == (long *)0x0) goto UnityEngine_Random__GetRandomUnitCircle;
LAB_03f6e070:
      unaff_w22 = uVar2;
      uVar9 = uVar1;
      lVar7 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 == 0) goto LAB_03f6e0a8;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03f6df8c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03f6df8c:
    unaff_w22 = (*(code *)*puVar6)();
    if ((unaff_w22 & 1) == 0) {
      unaff_w22 = 0;
      uVar9 = 8;
      uVar1 = 8;
      uVar2 = 0;
      if (unaff_x20 != (long *)0x0) goto LAB_03f6e070;
      goto UnityEngine_Random__GetRandomUnitCircle;
    }
    lVar7 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          param_1 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto code_r0x03f6dfec;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03f6e0c4;
    }
  }
LAB_03f6e0a8:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03f6e0c4:
  (*(code *)*puVar6)();
UnityEngine_Random__GetRandomUnitCircle:
  if ((uVar9 | 8) == 8) {
    *unaff_x19 = 0;
    thunk_FUN_01f51358();
    unaff_w22 = 0;
  }
  return unaff_w22 & 1;
}


