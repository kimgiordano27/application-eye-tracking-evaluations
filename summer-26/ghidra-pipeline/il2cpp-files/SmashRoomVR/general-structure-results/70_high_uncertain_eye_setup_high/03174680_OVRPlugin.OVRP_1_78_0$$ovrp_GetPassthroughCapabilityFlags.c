/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetPassthroughCapabilityFlags
ENTRY_POINT: 03174680
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetPassthroughCapabilityFlags
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_031746b8;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar2 = (undefined8 *)FUN_01ae9f78(unaff_x21,param_3,0);
LAB_031746b8:
      puVar3 = (uint *)(*(code *)*puVar2)(unaff_x21,unaff_x20 & 0xffffffff,puVar2[1]);
      uVar1 = *puVar3;
      if (-1 < (int)uVar1) {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if ((lVar4 == 0) || (lVar6 = *(long *)(unaff_x19 + 0x10), lVar6 == 0)) goto LAB_03174750;
        if (((uint)*(ulong *)(lVar4 + 0x18) <= uVar1) ||
           ((*(uint *)(lVar6 + 0x18) <= unaff_x20 ||
            ((*(ulong *)(lVar4 + 0x18) & 0xffffffff) <= unaff_x20)))) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        FUN_03136f90(lVar4 + (ulong)uVar1 * unaff_x23 + 0x20,lVar6 + unaff_x20 * unaff_x23 + 0x20,
                     lVar4 + unaff_x20 * unaff_x23 + 0x20,0);
      }
      do {
        unaff_x20 = unaff_x20 + 1;
        if (unaff_x20 == 0x18) {
          *(undefined4 *)(unaff_x19 + 0x44) = 0;
          return;
        }
      } while ((*(uint *)(unaff_x19 + 0x44) >> (ulong)((uint)unaff_x20 & 0x1f) & 1) == 0);
      unaff_x21 = *(long **)(unaff_x19 + 0x38);
      if (unaff_x21 == (long *)0x0) {
LAB_03174750:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      param_1 = *unaff_x21;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


