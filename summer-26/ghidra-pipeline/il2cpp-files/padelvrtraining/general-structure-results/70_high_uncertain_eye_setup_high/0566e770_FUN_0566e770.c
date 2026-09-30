/*
FUNCTION_NAME: FUN_0566e770
ENTRY_POINT: 0566e770
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0566e770(int *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iStack_24;
  
  if (-1 < param_2) {
    iVar1 = *param_1;
    if (param_2 < iVar1) {
      iStack_24 = iVar1 + -1;
      if (param_2 == 0) {
        uVar2 = iVar1 - 2;
        if (1 < iVar1) {
          lVar3 = *(long *)(param_1 + 6);
          if (lVar3 != 0) {
            if (uVar2 < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
              uVar6 = *(undefined8 *)(lVar3 + 0x20);
              *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar3 + 0x28);
              *(undefined8 *)(param_1 + 2) = uVar6;
              thunk_FUN_03d1023c(param_1 + 2,0);
              lVar3 = *(long *)(param_1 + 6);
              if (lVar3 == 0)
              goto System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current;
              if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
                puVar4 = (undefined8 *)(lVar3 + 0x20);
                *puVar4 = 0;
                *(undefined8 *)(lVar3 + 0x28) = 0;
                thunk_FUN_03d1023c(puVar4,0);
                goto LAB_0566e83c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03d2d550();
          }
System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current:
                    /* WARNING: Subroutine does not return */
          FUN_03d2d548();
        }
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
      }
      else {
        lVar3 = *(long *)(param_3 + 0x20);
        uVar6 = *(undefined8 *)(param_1 + 6);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03d8f26c();
        }
        FUN_04e422b4(uVar6,&iStack_24,param_2 + -1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 200));
      }
LAB_0566e83c:
      *param_1 = *param_1 + -1;
      return;
    }
  }
  thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
  uVar6 = thunk_FUN_03d2ef40();
  uVar5 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
  FUN_070ccddc(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar6,param_3);
}


