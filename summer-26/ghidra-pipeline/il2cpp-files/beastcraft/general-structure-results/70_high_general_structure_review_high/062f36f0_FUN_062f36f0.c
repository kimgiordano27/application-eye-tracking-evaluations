/*
FUNCTION_NAME: FUN_062f36f0
ENTRY_POINT: 062f36f0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_3
*/


void FUN_062f36f0(void *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [144];
  
  puVar1 = VContainer_Internal_OpenGenericInstanceProvider_TypeInfo;
  if ((DAT_06e9b239 & 1) == 0) {
    FUN_02e3ca1c(VContainer_Internal_OpenGenericRegistrationBuilder_TypeInfo);
    FUN_02e3ca1c(VContainer_Internal_OpenGenericInstanceProvider_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6c928);
    FUN_02e3ca1c(UnityEngine_XR_OpenXR_OpenXRAnalytics_TypeInfo);
    DAT_06e9b239 = 1;
  }
  memset(auStack_d0,0,0x90);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  plVar4 = (long *)thunk_FUN_02e789bc(param_3,*(undefined8 *)puVar1);
  puVar2 = UnityEngine_XR_OpenXR_OpenXRAnalytics_TypeInfo;
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 062f3784 to 063f3803 has its CatchHandler @ 062f3784
                       catch() { ... } // from try @ 062f3784 with catch @ 062f3784
                       catch() { ... } // from try @ 062f388c with catch @ 062f3784
                       catch() { ... } // from try @ 062f395c with catch @ 062f3784
                       catch() { ... } // from try @ 062f39b0 with catch @ 062f3784
                       catch() { ... } // from try @ 062f39e8 with catch @ 062f3784
                       catch() { ... } // from try @ 062f3a20 with catch @ 062f3784 */
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_062f3824;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02e759c0(plVar4,lVar7,0);
LAB_062f3824:
    uVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    local_f8 = 0;
    local_100 = 0;
    local_110 = 1;
    uStack_108 = **(undefined8 **)(*(long *)(PTR_DAT_06a2f000 + 0x90) + 0xb8);
    thunk_FUN_02ee2be8((ulong)&local_110 | 8);
    local_100 = CONCAT44(local_100._4_4_,uVar3);
LAB_062f3874:
    local_f8 = 0;
    goto LAB_062f393c;
  }
  plVar4 = (long *)thunk_FUN_02e789bc(param_3,*(undefined8 *)
                                               UnityEngine_XR_OpenXR_OpenXRAnalytics_TypeInfo);
  puVar1 = VContainer_Internal_OpenGenericRegistrationBuilder_TypeInfo;
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)thunk_FUN_02e789bc(param_3,*(undefined8 *)
                                                 VContainer_Internal_OpenGenericRegistrationBuilder_TypeInfo
                                       );
    if (plVar4 == (long *)0x0) {
      if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar7 = *param_3;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 062f3998 to 063f399b has its CatchHandler @ 062f39a4 */
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 062f3998 with catch @ 062f39a4 */
                    /* try { // try from 062f39a8 to 063f39af has its CatchHandler @ 062f3a28 */
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a6c928) {
                    /* try { // try from 062f39d0 to 063f39e7 has its CatchHandler @ 062f3a18 */
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_062f39d8;
          }
                    /* try { // try from 062f39b0 to 063f39cf has its CatchHandler @ 062f3784 */
          uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 062f3850 with catch @ 062f39b4 */
          piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 062f3808 with catch @ 062f39b8 */
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02e759c0(param_3,*(long *)PTR_DAT_06a6c928,0);
LAB_062f39d8:
      uStack_108 = (*(code *)*puVar5)(param_3,puVar5[1]);
                    /* try { // try from 062f39e8 to 063f3a07 has its CatchHandler @ 062f3784 */
      local_110 = 0;
      local_f8 = 0;
      local_100 = 0;
      thunk_FUN_02ee2be8((ulong)&local_110 | 8,uStack_108);
      local_100 = CONCAT44(local_100._4_4_,0xffffffff);
      goto LAB_062f3874;
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) goto LAB_062f38d8;
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  else {
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 062f3804 to 063f3807 has its CatchHandler @ 062f396c */
        if (*(long *)(piVar10 + -2) == lVar7) goto LAB_062f38d8;
                    /* try { // try from 062f3808 to 063f381b has its CatchHandler @ 062f39b8 */
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
  }
  puVar5 = (undefined8 *)FUN_02e759c0(plVar4,lVar7,0);
LAB_062f38e4:
  uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  local_f8 = 0;
  local_100 = 0;
  local_110 = 2;
  uStack_108 = **(undefined8 **)(*(long *)(PTR_DAT_06a2f000 + 0x90) + 0xb8);
  thunk_FUN_02ee2be8((ulong)&local_110 | 8);
  local_100 = CONCAT44(local_100._4_4_,0xffffffff);
  local_f8 = uVar6;
LAB_062f393c:
  thunk_FUN_02ee2be8(&local_f8,local_f8);
  uStack_e8 = uStack_108;
  local_f0 = local_110;
  uStack_d8 = local_f8;
  uStack_e0 = local_100;
  FUN_062f331c(auStack_d0,param_2,&local_f0);
  memcpy(param_1,auStack_d0,0x90);
  return;
LAB_062f38d8:
  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
  goto LAB_062f38e4;
}


