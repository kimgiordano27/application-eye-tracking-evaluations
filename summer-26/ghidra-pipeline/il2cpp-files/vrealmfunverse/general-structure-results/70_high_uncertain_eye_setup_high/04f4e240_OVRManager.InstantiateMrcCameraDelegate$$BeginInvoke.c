/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 04f4e240
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager_InstantiateMrcCameraDelegate__BeginInvoke
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_7c;
  float fStack_70;
  undefined8 uStack_68;
  undefined8 local_60 [2];
  undefined8 uStack_4c;
  
                    /* try { // try from 04f4e240 to 0504e24b has its CatchHandler @ 04f4db78 */
                    /* catch() { ... } // from try @ 04f4e1f8 with catch @ 04f4e248
                       catch() { ... } // from try @ 04f4e238 with catch @ 04f4e248 */
  if ((DAT_066c9a16 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                );
    DAT_066c9a16 = 1;
  }
  FUN_04f4d7bc(&local_7c,param_4);
  puVar1 = System_Collections_Generic_Dictionary<string,_object>_TypeInfo;
  plVar9 = *(long **)(param_4 + 0x128);
  local_60[0] = local_7c;
  uStack_4c = uStack_68;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          fVar12 = fStack_70;
          goto LAB_04f4e308;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02b7654c(plVar9,*(long *)
                                  System_Collections_Generic_Dictionary<string,_object>_TypeInfo,1);
    fVar12 = fStack_70;
LAB_04f4e308:
    fVar10 = (float)(*(code *)*puVar4)(plVar9,0,puVar4[1]);
    plVar9 = *(long **)(param_4 + 0x128);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      fVar14 = param_3;
      fVar13 = fVar12;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_04f4e378;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,0);
FUN_04f4e378:
      iVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_04f4e3d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar9,lVar5,1);
LAB_04f4e3d8:
      fVar11 = (float)(*(code *)*puVar4)(plVar9,iVar2 + -1,puVar4[1]);
      if (param_5 != 0) {
        uVar7 = FUN_04f4d210((param_3 - fVar14) * (param_3 - fVar14) +
                             (fVar10 - fVar11) * (fVar10 - fVar11) +
                             (fVar12 - fVar13) * (fVar12 - fVar13),param_5,local_60);
        if ((uVar7 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_04af1e4c(param_4,param_5,
                               *(undefined8 *)
                                System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                              );
        }
        return uVar3 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


