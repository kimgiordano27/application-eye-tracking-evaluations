/*
FUNCTION_NAME: OVRManager$$set_cpuLevel
ENTRY_POINT: 0519febc
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__set_cpuLevel
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined4 uVar3;
  
  do {
    if (in_x11 == param_6) {
      puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_0519fef0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x21,param_6,1);
LAB_0519fef0:
        uVar3 = (*(code *)*puVar1)(unaff_x21,unaff_x20 & 0xffffffff,puVar1[1]);
        if (unaff_x25 == 0) {
OVRManager__get_gpuLevel:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(uint *)(unaff_x25 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        lVar2 = unaff_x25 + unaff_x20 * unaff_x24;
        unaff_x20 = unaff_x20 + 1;
        *(undefined4 *)(lVar2 + 0x20) = uVar3;
        *(undefined4 *)(lVar2 + 0x24) = param_3;
        *(undefined4 *)(lVar2 + 0x28) = param_4;
        if (unaff_x20 == unaff_x23) {
          if (*(long *)(unaff_x19 + 0x28) != 0) {
            FUN_05ec0b80(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x30),0);
            return;
          }
          goto OVRManager__get_gpuLevel;
        }
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (unaff_x21 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x128), unaff_x21 == (long *)0x0))
        goto OVRManager__get_gpuLevel;
        param_1 = *unaff_x21;
        unaff_x25 = *(long *)(unaff_x19 + 0x30);
        param_6 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


