/*
FUNCTION_NAME: OVRPlugin$$get_version
ENTRY_POINT: 033b9080
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_version(code *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long *unaff_x20;
  uint unaff_w23;
  long *plVar7;
  long *unaff_x26;
  
  do {
    iVar1 = (*param_1)(param_2,param_3);
    if (-1 < iVar1) {
      do {
        if (*unaff_x20 == 0) goto LAB_033b9160;
        unaff_w23 = unaff_w23 - 1;
        if (*(uint *)(*unaff_x20 + 0x18) <= unaff_w23) goto LAB_033b9164;
        plVar7 = (long *)unaff_x20[2];
        if (plVar7 == (long *)0x0) goto LAB_033b9160;
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x26) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_033b9100;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_01dde8fc(plVar7,*unaff_x26,0);
LAB_033b9100:
        iVar1 = (*(code *)*puVar2)(plVar7);
      } while (iVar1 < 0);
      if ((int)unaff_w23 <= (int)unaff_w19) {
        FUN_033b87d4();
        return unaff_w19;
      }
      FUN_033b87d4();
    }
    lVar4 = *unaff_x20;
    if (lVar4 == 0) {
LAB_033b9160:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w19) {
LAB_033b9164:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    param_2 = (long *)unaff_x20[2];
    if (param_2 == (long *)0x0) goto LAB_033b9160;
    lVar3 = *param_2;
    param_3 = *(undefined8 *)(lVar4 + (long)(int)unaff_w19 * 8 + 0x20);
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_033b9074;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(param_2,*unaff_x26,0);
LAB_033b9074:
    param_1 = (code *)*puVar2;
  } while( true );
}


