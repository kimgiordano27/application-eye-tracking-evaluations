/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$op_Equality
ENTRY_POINT: 023418a0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02341a54) */

void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__op_Equality
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar8 [16];
  
code_r0x023418a0:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_02341894;
LAB_023418ac:
  puVar1 = (undefined8 *)FUN_01dde8fc();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_02341a00;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02341940;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02341940:
    auVar8 = (*(code *)*puVar1)();
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar6 = *(uint *)(unaff_x21 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_02340208();
      uVar6 = *(uint *)(unaff_x21 + 0x18);
      lVar4 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    pauVar3 = (undefined1 (*) [16])(lVar4 + (long)(int)uVar6 * 0x10 + 0x20);
    *pauVar3 = auVar8;
    thunk_FUN_01e10808(pauVar3,0);
    param_1 = *unaff_x19;
    param_3 = *unaff_x25;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_023418ac;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02341894:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x023418a0;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02341a1c;
    }
  }
LAB_02341a00:
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02341a1c:
  (*(code *)*puVar1)();
  return;
}


