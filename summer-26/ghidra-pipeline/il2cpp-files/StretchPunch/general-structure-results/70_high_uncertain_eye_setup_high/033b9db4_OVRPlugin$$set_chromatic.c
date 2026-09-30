/*
FUNCTION_NAME: OVRPlugin$$set_chromatic
ENTRY_POINT: 033b9db4
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


int OVRPlugin__set_chromatic(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong in_x9;
  int *piVar6;
  int *in_x10;
  int unaff_w19;
  long *unaff_x20;
  int unaff_w23;
  long *plVar7;
  long *unaff_x24;
  long *unaff_x26;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_033b9de8;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_01dde8fc(unaff_x24,param_3,0);
LAB_033b9de8:
      iVar1 = (*(code *)*puVar3)(unaff_x24);
      if (-1 < iVar1) {
        if (unaff_w23 <= unaff_w19) {
          FUN_033b96a8();
          return unaff_w19;
        }
        FUN_033b96a8();
        do {
          if (*unaff_x20 == 0) goto LAB_033b9e48;
          plVar7 = (long *)unaff_x20[2];
          unaff_w19 = unaff_w19 + 1;
          uVar2 = FUN_033aae5c(*unaff_x20,unaff_w19);
          if (plVar7 == (long *)0x0) goto LAB_033b9e48;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x26) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_033b9d64;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_01dde8fc(plVar7,*unaff_x26,0);
LAB_033b9d64:
          iVar1 = (*(code *)*puVar3)(plVar7,uVar2);
        } while (iVar1 < 0);
      }
      if (*unaff_x20 == 0) {
LAB_033b9e48:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      unaff_x24 = (long *)unaff_x20[2];
      unaff_w23 = unaff_w23 + -1;
      FUN_033aae5c(*unaff_x20,unaff_w23);
      if (unaff_x24 == (long *)0x0) goto LAB_033b9e48;
      param_1 = *unaff_x24;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
}


