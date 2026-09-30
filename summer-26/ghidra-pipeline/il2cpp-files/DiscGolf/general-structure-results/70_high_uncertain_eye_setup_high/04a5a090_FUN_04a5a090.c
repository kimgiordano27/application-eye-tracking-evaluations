/*
FUNCTION_NAME: FUN_04a5a090
ENTRY_POINT: 04a5a090
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04a5a090(undefined4 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_06db838f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0d5e0);
    DAT_06db838f = 1;
  }
  lVar4 = *(long *)(param_3 + 0x20);
  local_34 = *param_1;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  uVar5 = thunk_FUN_02dd2d7c(**(undefined8 **)(lVar4 + 0xc0),&local_34);
  puVar1 = PTR_DAT_06a0d5e0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06a0d5e0) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_04a5a158;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(param_2,*(long *)PTR_DAT_06a0d5e0,1);
LAB_04a5a158:
  uVar2 = (*(code *)*puVar6)(param_2,uVar5,puVar6[1]);
  lVar4 = *(long *)(param_3 + 0x20);
  local_38 = param_1[1];
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18();
  }
  uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&local_38);
  lVar4 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto 
        System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar1,1);
System_Collections_Generic_Comparer<OVRPlugin_Qpl_Annotation_Builder_Entry>__CreateComparer:
  uVar3 = (*(code *)*puVar6)(param_2,uVar5,puVar6[1]);
  FUN_05506fd8(uVar2,uVar3,0);
  return;
}


