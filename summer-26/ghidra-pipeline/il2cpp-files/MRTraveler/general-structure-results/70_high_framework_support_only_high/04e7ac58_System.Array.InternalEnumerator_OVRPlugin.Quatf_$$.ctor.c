/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$.ctor
ENTRY_POINT: 04e7ac58
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

void System_Array_InternalEnumerator<OVRPlugin_Quatf>___ctor(code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  plVar3 = (long *)(*param_1)();
  puVar1 = PTR_DAT_08e6a290;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  do {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04e7acbc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*(long *)puVar1,0);
LAB_04e7acbc:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_04e7ade0;
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_04e7adb8;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03cf1244(lVar6);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04e7ad34;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar3,lVar6,0);
LAB_04e7ad34:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    iVar2 = FUN_04e7af60();
    if (-1 < iVar2) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_077e9b24();
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04e7add4;
    }
  }
LAB_04e7adb8:
  puVar4 = (undefined8 *)FUN_03cf1348(plVar3,*unaff_x25,0);
LAB_04e7add4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_04e7ade0:
  if (0 < (int)unaff_x21) {
    uVar8 = 0;
    lVar6 = 0x20;
    do {
      lVar7 = *(long *)(unaff_x20 + 0x18);
      if (lVar7 == 0) goto LAB_04e7ae94;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (-1 < *(int *)(lVar7 + lVar6)) {
        if (unaff_x22 == 0) {
LAB_04e7ae94:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar5 = FUN_077e9ba0();
        if ((uVar5 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04e7ae94;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar8)
          goto System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current;
          FUN_04e77a20();
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (unaff_x21 != uVar8);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


