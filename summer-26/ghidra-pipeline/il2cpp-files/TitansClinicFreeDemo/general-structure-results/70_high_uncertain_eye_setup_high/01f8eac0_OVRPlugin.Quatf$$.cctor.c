/*
FUNCTION_NAME: OVRPlugin.Quatf$$.cctor
ENTRY_POINT: 01f8eac0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_Quatf___cctor(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w23;
  long *unaff_x24;
  long *plVar6;
  undefined8 unaff_x25;
  long *unaff_x26;
  
code_r0x01f8eac0:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    iVar1 = (*(code *)*puVar2)(unaff_x24,unaff_x25);
    if (-1 < iVar1) {
      do {
        if (*unaff_x20 == 0) goto LAB_01f8ebb0;
        plVar6 = (long *)unaff_x20[2];
        unaff_w23 = unaff_w23 + -1;
        FUN_01f7feac(*unaff_x20,unaff_w23);
        if (plVar6 == (long *)0x0) goto LAB_01f8ebb0;
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_01f8eb50;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_0122ea3c(plVar6,*unaff_x26,0);
LAB_01f8eb50:
        iVar1 = (*(code *)*puVar2)(plVar6);
      } while (iVar1 < 0);
      if (unaff_w23 <= unaff_w19) {
        FUN_01f8e410();
        return unaff_w19;
      }
      FUN_01f8e410();
    }
    if (*unaff_x20 == 0) {
LAB_01f8ebb0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    unaff_x24 = (long *)unaff_x20[2];
    unaff_w19 = unaff_w19 + 1;
    unaff_x25 = FUN_01f7feac(*unaff_x20,unaff_w19);
    if (unaff_x24 == (long *)0x0) goto LAB_01f8ebb0;
    param_1 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x26) goto code_r0x01f8eac0;
        uVar4 = uVar4 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0122ea3c(unaff_x24,*unaff_x26,0);
  } while( true );
}


