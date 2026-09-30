/*
FUNCTION_NAME: FUN_04f4d7bc
ENTRY_POINT: 04f4d7bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_04f4d7bc(undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
                 undefined4 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_066c9a10 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    DAT_066c9a10 = 1;
  }
  puVar1 = System_Collections_Generic_Dictionary<string,_object>_TypeInfo;
  plVar6 = *(long **)(param_6 + 0x128);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 04f4d824 to 0504d84b has its CatchHandler @ 04f4db40 */
        if (*(long *)(piVar5 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto OVRManager__IsMultimodalHandsControllersSupported;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02b7654c(plVar6,*(long *)
                                  System_Collections_Generic_Dictionary<string,_object>_TypeInfo,1);
OVRManager__IsMultimodalHandsControllersSupported:
    fVar7 = (float)(*(code *)*puVar2)(plVar6,0,puVar2[1]);
    plVar6 = *(long **)(param_6 + 0x128);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      fVar10 = param_3;
      fVar11 = param_4;
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_04f4d8cc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar1,1);
LAB_04f4d8cc:
      fVar8 = (float)(*(code *)*puVar2)(plVar6,1,puVar2[1]);
      fVar10 = fVar10 - param_3;
      fVar11 = fVar11 - param_4;
      uVar9 = FUN_05c7bb74(fVar8 - fVar7,fVar10,fVar11,0);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      FUN_05c99d80(fVar7,param_3,param_4,uVar9,fVar10,fVar11,param_5,param_1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


