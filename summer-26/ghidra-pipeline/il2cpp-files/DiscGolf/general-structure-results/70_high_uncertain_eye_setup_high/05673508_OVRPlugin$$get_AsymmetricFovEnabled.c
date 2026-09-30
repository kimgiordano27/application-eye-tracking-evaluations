/*
FUNCTION_NAME: OVRPlugin$$get_AsymmetricFovEnabled
ENTRY_POINT: 05673508
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__get_AsymmetricFovEnabled(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 local_64;
  
  if ((DAT_06dbc684 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(PTR_DAT_06a0e888);
    FUN_02d965b8(System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo);
    DAT_06dbc684 = 1;
  }
  puVar3 = PTR_DAT_06a0f1a0;
  puVar2 = PTR_DAT_06a0e888;
  local_64 = 0;
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar10 = 0;
  }
  else {
    if (param_2 == 0) {
LAB_056736ac:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((int)*(ulong *)(param_2 + 0x18) < 1) {
      uVar10 = 1;
    }
    else {
      uVar9 = 0;
      uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      uVar10 = 1;
      uVar8 = *(undefined8 *)System_Collections_Generic_List<ManipulatorActivationFilter>_TypeInfo;
      do {
        if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        uVar1 = *(undefined4 *)(param_1 + 0xc0);
                    /* try { // try from 056735c0 to 057735c3 has its CatchHandler @ 05673838 */
                    /* try { // try from 056735c4 to 057735e7 has its CatchHandler @ 05673840 */
        uVar5 = FUN_05362cb4(uVar8,*(undefined8 *)(param_2 + 0x20 + uVar9 * 8),0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar3);
        }
        iVar4 = FUN_0564aaa8(uVar1,uVar5,param_1 + 0x44,&local_64,0);
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0x1a0) == -1) {
            *(undefined4 *)(param_1 + 0x1a0) = 1;
          }
          lVar6 = *(long *)(*(long *)puVar2 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02dcfd18();
          }
          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_056736ac;
          FUN_05686fc4(lVar6,param_1,local_64,0);
        }
        else {
          uVar10 = 0;
        }
        uVar7 = (ulong)*(uint *)(param_2 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_2 + 0x18));
    }
  }
  return uVar10;
}


