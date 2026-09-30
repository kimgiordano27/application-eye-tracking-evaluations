/*
FUNCTION_NAME: FUN_03cb78a0
ENTRY_POINT: 03cb78a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_03cb78a0(int *param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((int)param_2 < 0) {
LAB_03cb7a80:
    thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
    uVar3 = thunk_FUN_02dd3144();
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a0d1d0);
    FUN_05453f78(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar3,param_3);
  }
  iVar4 = *param_1;
  if (iVar4 <= (int)param_2) goto LAB_03cb7a80;
  if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 0xc);
    lVar1 = *plVar5;
    if (lVar1 == 0) {
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
      goto System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current;
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    uVar7 = *(undefined8 *)(lVar1 + 0x28);
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar3;
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 2) = uVar6;
    LeanTween__value(param_1 + 8,0);
    lVar1 = *(long *)(param_1 + 0xc);
    if (lVar1 == 0) {
LAB_03cb7abc:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(lVar1 + 0x18) != 1) {
      FUN_0550b264(lVar1,1,lVar1,0,*(int *)(lVar1 + 0x18) + -1,0);
      if (*plVar5 == 0) goto LAB_03cb7abc;
      lVar1 = *(long *)(param_3 + 0x20);
      iVar4 = *(int *)(*plVar5 + 0x18) + -1;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
      goto LAB_03cb7a58;
    }
    *plVar5 = 0;
LAB_03cb7934:
    uVar3 = 0;
  }
  else {
    if (iVar4 - 1U == 1) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      goto LAB_03cb7934;
    }
    if (iVar4 - 1U == param_2) {
      lVar1 = *(long *)(param_3 + 0x20);
      iVar4 = iVar4 + -2;
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(lVar1 + 0xc0);
LAB_03cb7a58:
      FUN_034e8390(param_1 + 0xc,iVar4,*(undefined8 *)(lVar1 + 0x60));
      goto System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current;
    }
    lVar1 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    uVar3 = FUN_02d966a4(lVar1,iVar4 + -2);
    iVar4 = param_2 - 1;
    if (iVar4 != 0) {
      FUN_0550b264(*(undefined8 *)(param_1 + 0xc),0,uVar3,0,iVar4,0);
    }
    FUN_0550b264(*(undefined8 *)(param_1 + 0xc),param_2,uVar3,iVar4,*param_1 + ~param_2,0);
    *(undefined8 *)(param_1 + 0xc) = uVar3;
  }
  LeanTween__value(param_1 + 0xc,uVar3);
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__get_Current:
  *param_1 = *param_1 + -1;
  return;
}


