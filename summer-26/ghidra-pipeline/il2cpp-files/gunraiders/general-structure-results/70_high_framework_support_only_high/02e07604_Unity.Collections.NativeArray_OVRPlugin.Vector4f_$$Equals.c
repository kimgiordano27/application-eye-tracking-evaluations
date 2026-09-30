/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 02e07604
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e07720) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals(void)

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
  
code_r0x02e07604:
  puVar1 = (undefined8 *)FUN_01c72498();
  do {
    auVar7 = (*(code *)*puVar1)();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    if (uVar4 == *(uint *)(lVar3 + 0x18)) {
      FUN_02e05eb4();
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      lVar3 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar4 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    *(undefined1 (*) [16])(lVar3 + (long)(int)uVar4 * 0x10 + 0x20) = auVar7;
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02e075a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e075a0:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_02e076cc;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394(lVar3);
    }
    lVar2 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 == 0) goto code_r0x02e07604;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != lVar3) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x02e07604;
    }
    puVar1 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02e076e8;
    }
  }
LAB_02e076cc:
  puVar1 = (undefined8 *)FUN_01c72498();
LAB_02e076e8:
  (*(code *)*puVar1)();
  return;
}


