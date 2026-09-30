/*
FUNCTION_NAME: FUN_0566be68
ENTRY_POINT: 0566be68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_0566be68(long param_1,long param_2,uint param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined4 local_34;
  
  if ((DAT_06b7f7b7 & 1) == 0) {
    FUN_02d6084c(System_Func<PointerEnterEvent>_TypeInfo);
    FUN_02d6084c(OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<LayoutManager>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<Leaderboard>_TypeInfo);
    DAT_06b7f7b7 = 1;
  }
  local_34 = 0;
                    /* try { // try from 0566bed4 to 0576bee3 has its CatchHandler @ 0566c670 */
  FUN_05665abc(param_1,*(undefined4 *)(param_1 + 0x5c));
                    /* try { // try from 0566bee4 to 0576c0fb has its CatchHandler @ 0566bc98 */
  if (((((param_3 & 1) != 0) && (*(int *)(param_1 + 0x80) == 0)) && (*(int *)(param_1 + 0x60) != 0))
     && ((*(int *)(param_1 + 0x60) != 0x20 || (*(int *)(param_1 + 0x68) != 0)))) {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_0566c118;
    FUN_0566703c(param_1,*(int *)(param_1 + 0x5c) + ~*(uint *)(*(long *)(param_2 + 0x10) + 0x10),
                 *(undefined8 *)
                  OVRManager_Observable<OVRManager_PassthroughInitializationState>_TypeInfo,
                 **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8));
  }
  lVar1 = FUN_0566b720(param_1,param_2,param_3 & 1,1,param_5 & 1);
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x42) != '\0') {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_0566c118;
    puVar2 = (undefined8 *)System_Collections_Generic_List<Leaderboard>_TypeInfo;
    if ((param_3 & 1) == 0) {
      puVar2 = (undefined8 *)System_Collections_Generic_List<LayoutManager>_TypeInfo;
    }
    FUN_0566703c(param_1,*(int *)(param_1 + 0x5c) + ~*(uint *)(*(long *)(param_2 + 0x10) + 0x10),
                 *puVar2);
  }
  if (*(char *)(lVar1 + 0x41) == '\0') {
    if (*(long *)(lVar1 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar1 + 0x28) + 0x10) != 0) {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 == (long *)0x0) goto LAB_0566c118;
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)System_Func<PointerEnterEvent>_TypeInfo) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
              goto LAB_0566c0b0;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02d9a5d4(plVar6,*(long *)System_Func<PointerEnterEvent>_TypeInfo,0x12);
LAB_0566c0b0:
        uVar4 = (*(code *)*puVar2)(plVar6,lVar1,&local_34,puVar2[1]);
        if ((uVar4 & 1) != 0) goto LAB_0566c0c8;
      }
                    /* try { // try from 0566c10c to 0576c387 has its CatchHandler @ 0566bc98 */
      return 0;
    }
  }
  else {
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Func<PointerEnterEvent>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
            goto LAB_0566c078;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02d9a5d4(plVar6,*(long *)System_Func<PointerEnterEvent>_TypeInfo,0x12);
LAB_0566c078:
      uVar4 = (*(code *)*puVar2)(plVar6,lVar1,&local_34,puVar2[1]);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_0566c0c8:
      *(undefined4 *)(param_1 + 0x84) = local_34;
      if ((((param_3 & 1) != 0) && ((param_4 & 1) == 0)) && (*(int *)(param_1 + 0x60) != 0x20)) {
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x60) = 0x20;
      }
      FUN_05662e5c(param_1);
      return 1;
                    /* try { // try from 0566c0fc to 0576c10b has its CatchHandler @ 0566c5c8 */
    }
  }
LAB_0566c118:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


