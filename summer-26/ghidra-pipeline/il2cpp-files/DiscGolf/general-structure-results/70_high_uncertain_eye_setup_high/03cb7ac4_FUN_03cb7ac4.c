/*
FUNCTION_NAME: FUN_03cb7ac4
ENTRY_POINT: 03cb7ac4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03cb7ac4(int *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_24;
  
  local_24 = 0;
  if (-1 < param_2) {
    iVar1 = *param_1;
    if (param_2 < iVar1) {
      local_24 = iVar1 + -1;
      if (param_2 == 0) {
        uVar2 = iVar1 - 2;
        if (1 < iVar1) {
          lVar3 = *(long *)(param_1 + 0xc);
          if (lVar3 != 0) {
            if (uVar2 < *(uint *)(lVar3 + 0x18)) {
              lVar3 = lVar3 + (ulong)uVar2 * 0x28;
              uVar7 = *(undefined8 *)(lVar3 + 0x28);
              uVar6 = *(undefined8 *)(lVar3 + 0x20);
              uVar4 = *(undefined8 *)(lVar3 + 0x38);
              uVar5 = *(undefined8 *)(lVar3 + 0x30);
              *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar3 + 0x40);
              *(undefined8 *)(param_1 + 8) = uVar4;
              *(undefined8 *)(param_1 + 6) = uVar5;
              *(undefined8 *)(param_1 + 4) = uVar7;
              *(undefined8 *)(param_1 + 2) = uVar6;
              LeanTween__value(param_1 + 8,0);
              lVar3 = *(long *)(param_1 + 0xc);
              if (lVar3 == 0) goto LAB_03cb7c14;
              if (uVar2 < *(uint *)(lVar3 + 0x18)) {
                lVar3 = lVar3 + (ulong)uVar2 * 0x28;
                *(undefined8 *)(lVar3 + 0x40) = 0;
                *(undefined8 *)(lVar3 + 0x28) = 0;
                *(undefined8 *)(lVar3 + 0x20) = 0;
                *(undefined8 *)(lVar3 + 0x38) = 0;
                *(undefined8 *)(lVar3 + 0x30) = 0;
                LeanTween__value(lVar3 + 0x38,0);
                goto 
                System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_get_Current
                ;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
LAB_03cb7c14:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        lVar3 = *(long *)(param_3 + 0x20);
        uVar5 = *(undefined8 *)(param_1 + 0xc);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02dcfd18();
        }
        FUN_0352f170(uVar5,&local_24,param_2 + -1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 200));
      }

      System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__System_Collections_IEnumerator_get_Current
      :
      *param_1 = *param_1 + -1;
      return;
    }
  }
  thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
  uVar5 = thunk_FUN_02dd3144();
  uVar4 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
  FUN_05453f78(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar5,param_3);
}


