/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 02bf1a44
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02bf1b4c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar7 [16];
  
code_r0x02bf1a44:
  do {
    auVar7 = (*(code *)*param_1)();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_02bf02e0();
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      lVar3 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined1 (*) [16])(lVar3 + (long)(int)uVar4 * 0x10 + 0x20) = auVar7;
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02bf19cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ae9f78();
LAB_02bf19cc:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_02bf1af8;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ae9e74(lVar3);
    }
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          param_1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x02bf1a44;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_01ae9f78();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item;
    }
  }
LAB_02bf1af8:
  puVar1 = (undefined8 *)FUN_01ae9f78();
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__set_Item:
  (*(code *)*puVar1)();
  return;
}


