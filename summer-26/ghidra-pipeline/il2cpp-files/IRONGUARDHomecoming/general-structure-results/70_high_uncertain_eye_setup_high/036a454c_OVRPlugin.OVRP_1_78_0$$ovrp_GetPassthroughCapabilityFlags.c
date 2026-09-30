/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetPassthroughCapabilityFlags
ENTRY_POINT: 036a454c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetPassthroughCapabilityFlags(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long in_x9;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar7;
  long *unaff_x22;
  long unaff_x23;
  
  do {
    FUN_03667194(param_2,in_x9 + 0x20,param_1 + in_x11 + 0x20,0);
    do {
      do {
        unaff_x20 = unaff_x20 + 1;
        if (unaff_x20 == 0x18) {
          *(undefined4 *)(unaff_x19 + 0x44) = 0;
          return;
        }
      } while ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) == 0);
      plVar7 = *(long **)(unaff_x19 + 0x38);
      if (plVar7 == (long *)0x0) goto LAB_036a4588;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_036a44f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x22,0);
LAB_036a44f0:
      puVar3 = (uint *)(*(code *)*puVar2)(plVar7,unaff_x20 & 0xffffffff,puVar2[1]);
      uVar1 = *puVar3;
    } while ((int)uVar1 < 0);
    param_1 = *(long *)(unaff_x19 + 0x18);
    if ((param_1 == 0) || (lVar4 = *(long *)(unaff_x19 + 0x10), lVar4 == 0)) {
LAB_036a4588:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((((uint)*(ulong *)(param_1 + 0x18) <= uVar1) || (*(uint *)(lVar4 + 0x18) <= unaff_x20)) ||
       ((*(ulong *)(param_1 + 0x18) & 0xffffffff) <= unaff_x20)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    in_x11 = unaff_x20 * unaff_x23;
    param_2 = param_1 + (ulong)uVar1 * unaff_x23 + 0x20;
    in_x9 = lVar4 + in_x11;
  } while( true );
}


