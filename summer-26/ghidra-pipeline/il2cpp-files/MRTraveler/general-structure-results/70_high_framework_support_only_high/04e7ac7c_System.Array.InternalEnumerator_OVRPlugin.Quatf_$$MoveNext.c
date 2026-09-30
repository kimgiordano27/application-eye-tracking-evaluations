/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 04e7ac7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04e7aea4) */

void System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  do {
    if (in_x9 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04e7acbc;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_04e7acbc:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto code_r0x04e7ade4;
      lVar5 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 == 0) goto LAB_04e7adb8;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03cf1244(lVar5);
    }
    lVar6 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04e7ad34;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_04e7ad34:
    (*(code *)*puVar2)();
    iVar1 = FUN_04e7af60();
    if (-1 < iVar1) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_077e9b24();
    }
    param_1 = *unaff_x23;
    param_3 = *unaff_x24;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar7 = piVar7 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04e7add4;
    }
  }
LAB_04e7adb8:
  puVar2 = (undefined8 *)FUN_03cf1348();
LAB_04e7add4:
  (*(code *)*puVar2)();
code_r0x04e7ade4:
  if (0 < (int)unaff_x21) {
    uVar3 = 0;
    lVar5 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      if (lVar6 == 0) goto LAB_04e7ae94;
      if (*(uint *)(lVar6 + 0x18) <= uVar3) {
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (-1 < *(int *)(lVar6 + lVar5)) {
        if (unaff_x22 == 0) {
LAB_04e7ae94:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar4 = FUN_077e9ba0();
        if ((uVar4 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7ae94;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar3)
          goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current;
          FUN_04e77a20();
        }
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x18;
    } while (unaff_x21 != uVar3);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


